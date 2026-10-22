# DiscreteExteriorCalculus.jl: calculus on simplicial complexes

**Status: source and package metadata inspected at [7f0dd7e](https://github.com/rigetti/DiscreteExteriorCalculus.jl/tree/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e). License BSD-3-Clause. Repository archived August 2026. No Julia execution.**

[operators.jl](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/src/operators.jl) implements **exterior_derivative**, **codifferential**, **circumcenter_hodge**, **hodge_square**, **laplace_de_Rham**, and **differential_operator_sequence**. Typed Julia signatures include **Metric{N}**, **Mesh{N,K}**, and **CellComplex{N,K}**. [cell_complex.jl](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/src/cell_complex.jl), [mesh.jl](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/src/mesh.jl) and [metrics.jl](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/src/metrics.jl) supply data representations.

A discrete $k$-form is a cochain on oriented $k$-cells. The coboundary $d$ is metric-independent; a discrete Hodge star depends on the chosen mesh/dual and metric. Differential operators can model geometry and PDEs on a discretization, but there is no generic promise that transporting a tangent vector along a smooth 3D Thurston geodesic is implemented.

**Dependencies/tests:** [Project.toml](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/Project.toml) shows Julia package 0.1.0, LinearAlgebra, SparseArrays; [test/runtests.jl](https://github.com/rigetti/DiscreteExteriorCalculus.jl/blob/7f0dd7eeabe1d4efa56def50fc069dc9c00a0d7e/test/runtests.jl) and **test_operators.jl**, **test_laplacian_rectangle.jl** exist. No tests were run; archived status limits expectations of maintenance.

**Reuse:** discrete exterior algebra and topology-aware mesh field computation, where Eye eventually needs field equations or surfaces; keep the smooth geodesic/observer contracts separately specified.
