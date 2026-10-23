/* Numerical primitives only: no geometry, events, scene or renderer logic.
 * Operations use binary32 and round to the selected format on every return.
 * Signed OCP E4M3FN: bias 7, subnormals, max 448, NaNs 0x7f/0xff.
 * Round nearest/even; overflow returns NaN rather than silent saturation.
 */
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

_Static_assert(sizeof(float) == 4 && FLT_RADIX == 2 && FLT_MANT_DIG == 24,
               "Eye requires IEEE binary32 numerical primitives");

static float from_bits(uint32_t bits) {
    float value;
    memcpy(&value, &bits, sizeof value);
    return value;
}

static uint32_t to_bits(float value) {
    uint32_t bits;
    memcpy(&bits, &value, sizeof bits);
    return bits;
}

static float decode_e4m3(uint32_t bits) {
    if (bits > 255 || (bits & 127u) == 127u) return NAN;
    unsigned exponent = (bits >> 3) & 15u, fraction = bits & 7u;
    float value = exponent == 0 ? ldexpf((float)fraction, -9)
                  : ldexpf(1.0f + (float)fraction / 8.0f, (int)exponent - 7);
    return (bits & 128u) ? -value : value;
}

static uint32_t encode_e4m3(float value) {
    uint32_t sign = signbit(value) ? 128u : 0u;
    float magnitude = fabsf(value);
    if (!isfinite(value) || magnitude >= 464.0f) return sign | 127u;
    if (magnitude == 0.0f) return sign;
    uint32_t nearest = 0;
    float error = magnitude;
    for (uint32_t candidate = 1; candidate <= 126; ++candidate) {
        float candidate_error = fabsf(magnitude - decode_e4m3(candidate));
        if (candidate_error < error ||
            (candidate_error == error && (candidate & 1u) == 0u)) {
            error = candidate_error;
            nearest = candidate;
        }
    }
    return sign | nearest;
}

static float unpack(int mode, uint32_t bits) {
    return mode == 0 ? from_bits(bits) : mode == 1 ? decode_e4m3(bits) : NAN;
}

static uint32_t pack(int mode, float value) {
    return mode == 0 ? to_bits(value) : mode == 1 ? encode_e4m3(value) : 127u;
}

uint32_t eye_scalar_from_reference(int mode, double value) { return pack(mode, (float)value); }
double eye_scalar_to_reference(int mode, uint32_t bits) { return (double)unpack(mode, bits); }
uint32_t eye_scalar_add(int mode, uint32_t a, uint32_t b) { return pack(mode, unpack(mode, a) + unpack(mode, b)); }
uint32_t eye_scalar_multiply(int mode, uint32_t a, uint32_t b) { return pack(mode, unpack(mode, a) * unpack(mode, b)); }
uint32_t eye_scalar_divide(int mode, uint32_t a, uint32_t b) { return pack(mode, unpack(mode, a) / unpack(mode, b)); }
uint32_t eye_scalar_negate(int mode, uint32_t a) { return pack(mode, -unpack(mode, a)); }
int eye_scalar_finite(int mode, uint32_t a) { return isfinite(unpack(mode, a)) ? 1 : 0; }
int eye_scalar_compare(int mode, int operation, uint32_t a, uint32_t b) {
    float left = unpack(mode, a), right = unpack(mode, b);
    if (operation == 0) return left == right;
    if (operation == 1) return left < right;
    if (operation == 2) return left <= right;
    return 0;
}
uint32_t eye_scalar_unary(int mode, int operation, uint32_t a) {
    float value = unpack(mode, a);
    switch (operation) {
    case 0: return pack(mode, expf(value));
    case 1: return pack(mode, sqrtf(value));
    case 2: return pack(mode, sinf(value));
    case 3: return pack(mode, cosf(value));
    case 4: return pack(mode, tanf(value));
    default: return pack(mode, NAN);
    }
}
