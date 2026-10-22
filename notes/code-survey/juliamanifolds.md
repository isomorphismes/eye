# JuliaManifolds: numerical manifold operations and chart-based connections

**Status: selected code, docs, tests and version changes inspected; snapshot [291e70a](https://github.com/JuliaManifolds/Manifolds.jl/tree/291e70a21f34fe01b2f7ca386ab2a559cee3b137). License MIT. No Julia run.**

The [Manifolds.jl reference](https://juliamanifolds.github.io/Manifolds.jl/stable/manifolds/connection/) documents **christoffel_symbols_first**, **christoffel_symbols_second!**, and connection-based geodesic functionality. The actual [src/atlases.jl](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/src/atlases.jl) and [src/manifolds/MetricManifold.jl](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/src/manifolds/MetricManifold.jl) should be traced when matching the documented interface; **src/manifolds/ConnectionManifold.jl is empty at the inspected commit**, so do not cite it as an implementation.

Other exact files: [Sphere.jl](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/src/manifolds/Sphere.jl) defines **Sphere**, **distance**, **exp!**, **exp_fused!**; [HyperbolicPoincareHalfspace.jl](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/src/manifolds/HyperbolicPoincareHalfspace.jl) includes typed **PoincareHalfSpacePoint**, **PoincareHalfSpaceTangentVector** methods and **distance**; [Euclidean.jl](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/src/manifolds/Euclidean.jl) supplies Euclidean references.

**Types/dependencies:** Julia abstract manifold and decorator types, point/tangent representations with runtime dispatch, ManifoldsBase dependency, Julia >=1.10 in Project.toml. [Test suite](https://github.com/JuliaManifolds/Manifolds.jl/tree/291e70a21f34fe01b2f7ca386ab2a559cee3b137/test) includes **runtests.jl**, atlas, metric and manifold tests.

**Version caution:** [NEWS.md](https://github.com/JuliaManifolds/Manifolds.jl/blob/291e70a21f34fe01b2f7ca386ab2a559cee3b137/NEWS.md) records additions to Levi-Civita affine-connection APIs and a correction to argument naming in Christoffel functions during 2026; refer to this pinned snapshot rather than older copied examples.

**Limits:** methods vary with representation; no evidence this package has Nil/Sol quotient marching, GPU SDF scenes or full 3D visibility. **Reuse:** compare explicit sphere/hyperbolic/geodesic invariants, and study the point-plus-tangent and connection interface design.
