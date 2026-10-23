# Eye — geometry from the observer's tangent space

**Current state:** mathematical notes and a compiler-qualified Idriç observation engine with Float32/E4M3 primitives, executable mathematical checks and a host-rendered demonstration. Direct native lowering and Android acceptance remain pending; see the [qualification record](docs/QUALIFICATION.md).

## First Idriç implementation

[Implementation and boundaries](docs/IMPLEMENTATION.md) ·
[Eight local models](src/Eye/Models.idric) ·
[Point-indexed state](src/Eye/Geometry.idric) ·
[Geodesic and frame propagation](src/Eye/Geodesic.idric) ·
[Observer rays](src/Eye/Observer.idric) ·
[Scene and event ordering](src/Eye/Visibility.idric) ·
[Quotient action](src/Eye/Quotient.idric) ·
[Concrete flat-torus crossing](src/Eye/FlatTorus.idric) ·
[Intrinsic surface incidence](src/Eye/Incidence.idric) ·
[Local lighting](src/Eye/Optics.idric) ·
[Ray-step decisions](src/Eye/Trace.idric) ·
[Backend packet boundary](src/Eye/Handoff.idric) ·
[Verification checks](src/Eye/Checks.idric) ·
[Reference cases](tests/REFERENCE.md).

All 19 packaged Eye modules typecheck with the pinned maintained compiler.
Executable tests cover all eight local models, transported frames, opposite
spherical charts, repeated signed torus crossings and explicit failures.
The symbolic connection checks have committed inputs and a reproducible
procedure. The host demonstration executes Eye to render Euclidean, torus
and hyperbolic scenes before and after observer movement. Numerical diagnostics
remain distinct from rigorous global error bounds and certified root isolation.

The semantic owner is Idriç; C, Lua, NDK and DEX are target/native boundaries
rather than duplicate geometric engines. Fulton, Regina and Coxeter contribute
distinct mathematical services without becoming runtime requirements.

## Start here

1. [The point-indexed ray state](notes/foundations/points-and-tangent-types.md): a direction lives at a point, not in a universal vector space.
2. [Geodesic initial-value equations](notes/foundations/geodesic-initial-value.md) and [parallel transport](notes/foundations/parallel-transport-holonomy.md).
3. [Observer-local rays](notes/seeing/observer-local-rays.md), [quotient boundaries](notes/seeing/quotients-and-teleportation.md), and [lighting versus optics](notes/seeing/lighting-and-optics.md).
4. [Ray-Marching Thurston Geometries](notes/sources/ray-marching-thurston.md), the principal source, followed by [the eight models](#the-eight-geometries).
5. [Checked worked calculations](#worked-calculations) and [typed architecture](notes/architecture/dependent-types.md).

Mathematical state: $\mathrm{RayState}=\sum_{x:M}T_xM$. A ray is an initial-value problem for the geodesic spray on $TM$; its optical meaning requires an additional modeling decision. Camera orientation is an orthonormal frame at the camera's point.

## Foundations

[Points and tangent fibers](notes/foundations/points-and-tangent-types.md) ·
[Charts and frames](notes/foundations/charts-and-frames.md) ·
[Metrics and connections](notes/foundations/metrics-and-connections.md) ·
[Christoffel transformation](notes/foundations/christoffel-transformation.md) ·
[Tensor derivatives](notes/foundations/covariant-tensor-derivatives.md) ·
[Geodesic initial values](notes/foundations/geodesic-initial-value.md) ·
[Transport and holonomy](notes/foundations/parallel-transport-holonomy.md) ·
[Curvature and Jacobi fields](notes/foundations/curvature-and-jacobi.md) ·
[Exponential and cut locus](notes/foundations/exponential-cut-locus.md) ·
[Intrinsic versus extrinsic](notes/foundations/intrinsic-versus-extrinsic.md).

## Seeing and simulation

[Observer rays](notes/seeing/observer-local-rays.md) ·
[Moving the observer](notes/seeing/observer-motion.md) ·
[Intersections and occlusion](notes/seeing/intersections-and-occlusion.md) ·
[Quotient teleportation](notes/seeing/quotients-and-teleportation.md) ·
[Lighting and optical assumptions](notes/seeing/lighting-and-optics.md) ·
[Distance and acceleration](notes/seeing/distance-marching-acceleration.md) ·
[Caching and reprojection](notes/seeing/frame-caching-reprojection.md).

## The eight geometries

| Geometry | Study |
| --- | --- |
| $\mathbb E^3$ | [Euclidean reference](notes/thurston/euclidean.md) |
| $S^3$ | [Round sphere](notes/thurston/spherical.md) |
| $\mathbb H^3$ | [Hyperbolic space](notes/thurston/hyperbolic.md) |
| $S^2\times\mathbb R$ | [Spherical product](notes/thurston/s2-times-r.md) |
| $\mathbb H^2\times\mathbb R$ | [Hyperbolic product](notes/thurston/h2-times-r.md) |
| Nil | [Heisenberg geometry](notes/thurston/nil.md) |
| Sol | [Anisotropic solvable geometry](notes/thurston/sol.md) |
| $\widetilde{\mathrm{SL}_2(\mathbb R)}$ | [Universal cover](notes/thurston/sl2-cover.md) |

## Worked calculations

[Flat polar coordinates](notes/worked/polar-plane.md) ·
[Sphere, great circle and holonomy](notes/worked/sphere-loop.md) ·
[Upper half-plane geodesic and transport](notes/worked/hyperbolic-half-plane.md) ·
[Flat three-torus boundary crossing](notes/worked/flat-3-torus-quotient.md) ·
[Lie-group curvature and exact rays](notes/worked/lie-group-curvature.md).

## Source studies

[Main paper](notes/sources/ray-marching-thurston.md) ·
[Scott](notes/sources/scott-geometries.md) ·
[Novello et al.](notes/sources/novello-eight.md) ·
[Functional Differential Geometry](notes/sources/functional-differential-geometry.md) ·
[Computational bibliography](notes/sources/computational-bibliography.md) ·
[Source status, versions, and licenses](notes/sources/provenance-and-licenses.md).

## Source-code surveys

[Thurston ray marcher](notes/code-survey/thurston-raymarcher.md) ·
[Mathlib](notes/code-survey/lean-mathlib.md) ·
[Emmy / SICMUtils](notes/code-survey/emmy-sicmutils.md) ·
[geometry-central](notes/code-survey/geometry-central.md) ·
[JuliaManifolds](notes/code-survey/juliamanifolds.md) ·
[DiGeo](notes/code-survey/digeo.md) ·
[DifferentialGeometry.lean fork](notes/code-survey/differential-geometry-lean-fork.md) ·
[Egison](notes/code-survey/egison.md) ·
[DiscreteExteriorCalculus.jl](notes/code-survey/discrete-exterior-calculus.md) ·
[Nearby topology and geometry](notes/code-survey/related-topology.md).

## Architectural notes

[Point-indexed types](notes/architecture/dependent-types.md) ·
[Mathematical and numerical boundaries](notes/architecture/solver-boundaries.md) ·
[Verification contracts](notes/architecture/verification-contract.md) ·
[Reuse and licensing](notes/architecture/reuse-and-licensing.md).

## Evidence policy

Each note distinguishes **inspected source**, **metadata-only**, **independently derived**, and **unverified** assertions; coordinates and signs belong to the local note and cannot silently be transferred between models. Source-code file links identify pinned snapshots, not promises of binary compatibility. This is original explanatory documentation, not vendored code or a copy of published material.

**Scope:** Direct, one-off repository work. The mathematical corpus and its
[verification contract](notes/architecture/verification-contract.md) remain
intact. Executable evidence, precision, runtime dependencies and remaining
target boundaries are recorded in [qualification](docs/QUALIFICATION.md).
