# Intersections, visibility, and occlusion

For scene object O⊂M, an intersection time is t≥0 with γ(t)∈O. The visible intersection is the least valid time under the optical model. Tangencies and rays contained in a surface need explicit policy.

Metric distance supports conservative stepping only when its lower-bound property is proven. A signed-distance function needs inside/outside convention; a quotient object has many lifts; a cut locus can make exact distance nonsmooth.

Euclidean bounding volumes can be representation-specific heuristics, not intrinsic predicates. A chart box need not bound a metric ball after coordinate change.

Advance a ray, evaluate candidates in the current representation, step or refine conservatively, then compare times along the same ray. Do not compare untransported directions at different points.
