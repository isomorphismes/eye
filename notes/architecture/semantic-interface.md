# A semantic interface before graphics

A minimal geometry module should own the following meanings:

- Point and tangent-vector types with base-point relation.
- Metric inner product and normalization at a point.
- Local observer frame validation.
- Forward geodesic advancement, with declared domain/error behavior.
- Parallel transport or a geometry-specific frame update.
- Isometry action and tangent differential.
- Optional conservative distance-underestimator contracts for named scene primitives.

A renderer should consume samples, ray states, hit records, and local shading data. It should not manufacture a global direction type, infer quotient differential actions, or turn chart coordinates into universal distances.

A scene layer owns object definitions and intersection semantics. An optical layer owns the decision that rays follow geodesics and how intensity decays. These divisions make it possible to test a ray state without opening a window.
