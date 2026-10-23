# Eye — geometry from the observer's tangent space

**Current state:** mathematical research notes plus the first **source-authored Idriç geometry implementation**. Eye studies what an observer sees when rays propagate intrinsically in a three-dimensional Riemannian space, including quotients. No compiler qualification, graphics backend, APK, native binary, or rendered output is claimed.

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

All eight local metrics and Christoffel contractions have been independently
matched against the Levi-Civita formula. **The .idric modules have not been
typechecked or executed with the maintained compiler.** A concrete empty-scene flat-torus face-crossing model now provides an
exact Euclidean flow oracle and explicit deck translations. Global chart
transitions, general certified intersection/event oracles, backend wiring,
and rendering are still missing. The numerical stepper exposes diagnostics,
not a certified global error bound.

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

**Scope:** One-off research and exposition. The [verification record](notes/architecture/verification-contract.md) distinguishes exact calculations and link/source checks from unrun numerical integrators or any independent acceptance process. This repository selects no runtime dependencies or rendering engine.
