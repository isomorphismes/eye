# Conservative distance marching and non-Euclidean acceleration

**Status: independently formulated bounds; [Coulon et al. §§2.1–2.4 and 3.7](https://arxiv.org/html/2010.15801) inspected.**

A ray march chooses lengths $\Delta t_k$ along a known geodesic. A certified **underestimator** $0\le\rho(p)\le d_g(p,S)$ outside the scene can justify taking $\Delta t_k\le\rho(\gamma(t_k))$: the open metric ball of this radius contains no point of $S$. This remains valid on a Riemannian manifold because speed is measured intrinsically. The correctness argument fails if $\rho$ is only a visually similar Euclidean formula or if numerical integration loses an unknown amount of path accuracy.

Common acceleration tools have hidden Euclidean assumptions:
- Axis-aligned bounding boxes are boxes **in a selected chart**; they neither bound intrinsic geodesic distance nor behave uniformly under quotient face pairings.
- Euclidean BVHs and k-d trees may still accelerate candidate *coordinates* but require conservative intrinsic tests before skipping an object.
- A sphere centered at $c$ means $\{x:d_g(x,c)\le r\}$, not usually a Euclidean ball in the coordinate representation.
- For quotients, the nearest relevant copy may lie across a boundary. Search over deck images or use a quotient-aware neighbor list with a justified radius.

The [principal paper](../sources/ray-marching-thurston.md) develops special underestimates and stepping strategies for the anisotropic models Nil and Sol, and projective/homogeneous representations for others. Its bounds are conditional on the chosen model; do not transfer a sphere-tracing step formula between metric conventions without proof.

**Proposed invariant:** an acceleration structure may say "no hit before $t+\ell$" only if it supplies a conservative certificate for the whole swept geodesic segment. At chart transitions and teleports, re-evaluate the certificate in the new representative. For grazing hits, use conservative interval tests or adaptive refinement.

**Numerical testing:** compare accelerated and unaccelerated first-hit decisions at equal geometric tolerance; audit thin targets, seam crossings, near-cut-locus and near-tangent trajectories. This note states tests; it does not report their execution.
