# Eye: Idriç mathematical implementation and native handoff

**Status (2026-10-22): source-authored first vertical slice; NOT compiler-qualified,
backend-executed, Android-tested, merged, or rendered.** The source extends the
notes branch in Eye PR #1, not a substitute for verifying that corpus. There is
no Flexible Pipes dependency for this one-off implementation.

## What the source does

- [Geometry](../src/Eye/Geometry.idric) defines all eight Thurston space
  identities, explicitly local charts, points, tangent and cotangent fibers,
  rays and observer frames. A vector at one point cannot be passed to an
  operation requiring the tangent fiber of another point without explicit
  reattachment or transport.
- [Models](../src/Eye/Models.idric) provides all eight local Riemannian
  metrics and bilinear Christoffel contractions in the coordinates fixed below.
  This is NOT a global atlas, completeness proof or a universal analytic
  geodesic flow. In particular, Γ is not the covariant derivative of an
  arbitrary field.
- [Geodesic](../src/Eye/Geodesic.idric) evolves the base point, velocity, and
  three frame axes with the **same** RK4 stages, using v' = -Γ(v,v) and
  E' = -Γ(v,E). Full step versus two half steps gives an *absolute coordinate*
  error proxy, not a rigorous intrinsic/global error bound. Invalid stages
  and excess local differences cause explicit refusals.
- [Observer](../src/Eye/Observer.idric) makes pixel rays from local
  tangent-frame combinations and normalizes with the local metric.
- [Visibility](../src/Eye/Visibility.idric) orders scene, paired-face and
  chart-exit candidates in one affine parameter. Unknown windows, malformed
  complete windows and equal-parameter ties refuse selection.
- [Quotient](../src/Eye/Quotient.idric) acts on points **and** their tangent
  fibers, including camera frame axes; it retains a symbolic deck word.
- [Incidence](../src/Eye/Incidence.idric) distinguishes a defining equation,
  its covector differential, an assessed root, and the *first along-ray event*.
- [Optics](../src/Eye/Optics.idric) pairs a normal covector with a local
  light vector only at the same point; no flat-space inverse-square law is
  silently assumed.
- [Trace](../src/Eye/Trace.idric) orchestrates one complete event window:
  advance, report an object hit, apply a paired-face isometry, request a chart
  transition, or ask for refinement. It does not call a graphics library.
- [Handoff](../src/Eye/Handoff.idric) lowers one ray to a geometry-tagged,
  chart-tagged *logical* packet; receiving it requires domain checks.
  It is **not** yet a binary ABI for C/NDK/ART.
- [Checks](../src/Eye/Checks.idric) offers metric/frame/speed diagnostics
  to qualify a future numerical implementation.

## Coordinate choices and exact source of connection coefficients

These choices match the corresponding [Thurston notes](../notes/thurston/).
They MUST be carried with a model identity; two formulas with similar names
but different gauges must not be combined.

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

For an Riemannian metric, the source's Γ contraction uses

    Γᵏᵢⱼ = (1/2) gᵏˡ (∂ᵢgₗⱼ + ∂ⱼgₗᵢ − ∂ₗgᵢⱼ)

and the convention ∇ᵥw in coordinates has its ordinary derivative plus Γ(v,w).
The implementation returns **Γ(v,w)**, not −Γ(v,w); the ODE applies the minus.

An independent symbolic calculation against this defining formula matched all
eight implemented contractions (2026-10-22). That check does **not** establish
that Idriç typechecks, that the compiled arithmetic matches these expressions,
or that RK4 satisfies numerical error targets.

## Reuse without swallowing other projects

- **[walnut-burgundy/fulton](https://github.com/walnut-burgundy/fulton)**:
  intersection constraints, algebraic locus/restriction ideas, multiplicity
  distinctions, Gromov curvature notes. In Eye, a defining equation and
  its differential enter `ImplicitSurface`; certified first-hit detection
  remains additional work. The repo is research, not a generic ray engine.
- **[walnut-burgundy/regina](https://github.com/walnut-burgundy/regina)**:
  topology/triangulation and face-pairing data (see
  `engine/triangulation`). A Regina triangulation is not, by itself, an
  intrinsic geodesic solver, a certified distance estimator, or an isometry
  of a chosen Thurston metric. Do not import the entire C++ engine.
- **[walnut-burgundy/coxeter](https://github.com/walnut-burgundy/coxeter)**:
  reflection generator words, exact relations, replayable reduction evidence.
  Its executable reducer currently covers A₂/A₃, NOT arbitrary hyperbolic
  deck groups. In particular, the [*237 warning](https://github.com/walnut-burgundy/coxeter/blob/main/notes/triangle-237-symmetry-bridge.md)
  forbids interpreting equality in finite PGL(2,F7) as equality in the
  infinite triangle group. Do not guess generators from floating matrices.
- **[isomorphisms/Idric](https://github.com/isomorphisms/Idric)**:
  authoritative compiler and syntax; point-dependent fiber semantics belong
  here in the user program, not in a new bespoke compiler. Its existing
  named-space exact vector examples do not replace point-indexed tangents.
- **[Coulon–Matsumoto–Segerman–Trettel](../notes/sources/ray-marching-thurston.md)**:
  main source for the eight geometric models and practical rendering risks;
  source study does not license shader copy/paste or define our language.

## Lowest layers only

Idriç owns scene/observer/geometry/event semantics, deterministic trace
decisions, quotient word logic, and API validations. A supplied scalar backend
owns width- and target-specific add/multiply/divide, exp, sqrt and finite tests.
Later numerical acceleration kernels may be in C/NDK, with DEX/ART as an
independently qualified target and Lua reserved for low-level integration or
presentation glue where justified. Any GPU shader is a lowering of the
mathematical model, not a competing owner of the model.

Avoid RefC or a silent host-Double fallback as acceptance. Do not choose
raylib/sokol by reflex. A C, Lua, NDK or DEX implementation must report its
actual lane, compiler commit, precision, numerical limits and independent
acceptance.

## Known blockers (not hidden by the eight formulas)

1. **Compiler check:** typecheck all `.idric` modules with a pinned maintained
   compiler. The source has NOT been successfully typechecked here.
2. **Scalar qualification:** provide properly rounded supported widths,
   finite/NaN/infinity handling, and honest exp/sqrt semantics.
3. **Numerical integration:** rigorous adaptive error control, chart-path
   coverage (not just RK4 stage validation), unit-speed/frame drift budgets,
   singularity handling, and comparison to analytic rays.
4. **Atlases:** chart transitions and tangent/normal/frame Jacobians.
   Spherical stereographic charts omit a pole. No transition is implemented.
5. **Global quotients:** certified side pairings, faithful group actions,
   nearest seam event, and correct repeated scenery; no arbitrary lattice
   inference from a topology file.
6. **Ray/event oracles:** root isolation, conservative distance bounds,
   first-hit guarantees, coincident event refinement and no tunneling.
7. **Rendering:** finite sampling/lighting/occlusion contracts, an actual
   C/NDK/DEX/graphics handoff, and an APK/device qualification if required.

The next runnable target is E³ + a flat torus event/face-pairing sample, then
the H³ vertical ray, with source-compiled Idriç and independently measured
native output. The [reference cases](../tests/REFERENCE.md) specify concrete
expected results.

This is a direct repository implementation. It neither dispatches nor depends
on the Flexible Pipes process.
