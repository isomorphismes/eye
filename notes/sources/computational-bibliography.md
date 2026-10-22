# Computational differential geometry: annotated reading map

**Status: selected websites and GitHub source paths inspected; unlisted capabilities remain unverified.**

1. **Lean Mathlib**, [Levi-Civita connection module](https://leanprover-community.github.io/mathlib4_docs/Mathlib/Geometry/Manifold/VectorBundle/CovariantDerivative/LeviCivita.html): formal construction and uniqueness from metric compatibility and zero torsion; not an executable 3D ray-marching toolkit. [Mathlib code study](../code-survey/lean-mathlib.md).
2. **Emmy** and **SICMUtils**, source files named connection, covariant, curvature: symbolic/executable differential-geometry expressions and frame calculus; no assertion here of an eight-space rendering backend. [Survey](../code-survey/emmy-sicmutils.md).
3. **geometry-central**, [traceGeodesic](https://geometry-central.net/surface/algorithms/geodesic_paths/) and [VectorHeatSolver](https://geometry-central.net/surface/algorithms/vector_heat_method/): intrinsic geodesics and approximate transport on **two-dimensional surfaces represented by meshes**, not freely moving rays in an arbitrary 3-manifold. [Survey](../code-survey/geometry-central.md).
4. **JuliaManifolds/Manifolds.jl**, [connection documentation](https://juliamanifolds.github.io/Manifolds.jl/stable/manifolds/connection/): numerical manifolds, Christoffel routines and transport/exponential operations; representation-specific availability must be verified per manifold. [Survey](../code-survey/juliamanifolds.md).
5. **Egison**, [repository](https://github.com/egison/egison): explicit tensor index conventions, symbolic curvature and exterior forms; its index calculus helps reason about type formation but does not imply a parser is needed for Eye. [Survey](../code-survey/egison.md).
6. **rigetti/DiscreteExteriorCalculus.jl**, [source](https://github.com/rigetti/DiscreteExteriorCalculus.jl): mesh/cell operators, Hodge star and codifferential; archived in August 2026 according to the repository listing. [Survey](../code-survey/discrete-exterior-calculus.md).
7. **Walnut & Burgundy forks**, [DiGeo](https://github.com/walnut-burgundy/DiGeo) (numerical/mesh Python) and [differential-geometry](https://github.com/walnut-burgundy/differential-geometry) (Lean definitions). Do not confuse this material with Eye's intrinsic 3D optical pipeline. [Surveys](../code-survey/digeo.md), [Lean fork](../code-survey/differential-geometry-lean-fork.md).

## Questions that divide reuse from reimplementation

- Is the input a point of an abstract smooth manifold, a triangle-mesh vertex, or coordinates in a known model?
- Is the answer a theorem, a symbolic identity, a numerical sample, or a rendered pixel?
- Can the routine transport a vector between **distinct** tangent spaces, or only operate on coordinates at one point?
- Do we know its regularity, precision, error domain, orientation, chart conventions, and behavior near cut loci?
- Is a quoted implementation stable at the recorded commit? [Provenance](provenance-and-licenses.md).

This is an annotated selection, not a claim of exhaustive inspection of all transitive dependencies or bundled tests.
