# Eye: Idriç observation implementation

The maintained compiler accepts the packaged modules and executes the host
qualification suite. Exact pins, commands, mathematical evidence, rendered
examples and remaining native/Android boundaries are in
[QUALIFICATION.md](QUALIFICATION.md). No Flexible Pipes dependency applies.

## Ownership

Idriç owns points and fibers, metrics/connections, observer rays and motion,
parallel transport, chart changes, trace state, scene intersections, event
ordering, quotient decisions and lighting. `_/numeric/scalars.c` contains only
scalar primitives; `Eye.Interop.Scalars` makes their Float32/E4M3FN storage,
conversion, finite arithmetic and rounding explicit. No C renderer or RefC
fallback supplies the images.

The local state distinguishes points, tangent vectors and normal covectors.
Every tangent/cotangent retains its base point. Reconstructing values from raw
chart components is an explicit operation in the geometry/interoperability
code; it never identifies unrelated fibers implicitly. Negative compiler tests
exercise both fiber identity and the vector/covector distinction.

## Local models

| Space | Local chart and metric |
|---|---|
| E³ | Cartesian: dx² + dy² + dz² |
| S³ | stereographic: 4(dx²+dy²+dz²)/(1+x²+y²+z²)² |
| H³ | upper half-space z>0: (dx²+dy²+dz²)/z² |
| S² × R | sphere stereographic × z: 4(dx²+dy²)/(1+x²+y²)² + dz² |
| H² × R | upper half-plane y>0 × z: (dx²+dy²)/y² + dz² |
| Nil | Heisenberg left-invariant: dx² + dy² + (dz−x dy)² |
| Sol | exp(2z)dx² + exp(−2z)dy² + dz² |
| SL̃₂(R) | lifted (x,y,θ), y>0: (dx/y)² + (dy/y)² + (dθ+dx/y)² |

`Eye.Models` returns Γ(v,w); `Eye.Geodesic` applies its negative in the
velocity and frame ODEs. Position, velocity and all three frame axes share
RK4 stages. Step doubling measures an absolute coordinate discrepancy;
finite values, nonzero progress, speed and the full Gram matrix are checked
separately. This is not a certified global intrinsic error bound.

## Observation path

`Eye.Observer` constructs metric-normalized local rays and transports facing
when the observer moves. `Eye.Atlas` changes stereographic charts with the
correct tangent Jacobian and inverse-transpose covector transformation.
`Eye.Visibility` compares events and numerical time brackets, and
`Eye.Trace.trace_bounded` accounts for distance, affine parameter, refinement,
zero-time events and explicit termination reasons.

`Eye.FlatTorus` supplies direction-aware closed-boundary representatives for
its canonical half-open cube and resolves only its own commuting translation
batches. Full ray/frame state and generator history cross every identification.
A populated scene combines its surface provider with the quotient provider.

`Eye.Scene` supplies transverse rectangular coordinate panels in E³/H³;
unknown, tangential, overlapping or numerically unresolved cases refuse.
`Eye.Incidence` separates defining equations, differentials, residuals and
multiplicity. `Eye.Optics` contracts normals with light directions at the same
point. `Eye.Render` consumes this pipeline and emits deterministic pixels.

## Companion boundaries

`Eye.Companions.Regina` imports and validates concrete six-tetrahedron torus
incidence data, without assigning a metric. `Eye.Companions.Coxeter` replays
exact A2/A3 relation evidence without projecting finite-quotient equality into
a covering group. Fulton supplies the constraint/differential/root distinction
used by the panel intersector. Concrete source paths and pins are in the
qualification record.

`Eye.Handoff` checks geometry/chart identity, domains and nonzero directions.
Its original ray packet is logical. `Eye.Interop.Packet` supplies a complete,
versioned Float32/E4M3 frame wire format with executable round trips and
malformed-input rejection. The scalar C ABI is executed; a direct-native or
Android consumer of the frame wire remains unqualified. Native lowering, APK build, installation and physical execution
remain separate acceptance stages.
