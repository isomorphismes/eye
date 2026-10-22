# Exponential map, conjugate points, and cut locus

**Status: standard derivation independently explained; numerical claims not benchmarked.**

For $x\in M$, the exponential map $\exp_x(v)=\gamma_v(1)$ follows the geodesic starting at $(x,v)$, provided the trajectory exists. By affine reparameterization, $\exp_x(tv)$ follows the geodesic at time $t$. It is a local diffeomorphism near $0\in T_xM$; globally it may identify distinct directions, lose invertibility, or encounter the cut locus.

**Conjugate points** arise when $d\exp_x$ becomes singular along a ray, detected by a nontrivial Jacobi field vanishing at its endpoints. **Cut points** mark the loss of global minimizing property; they need not coincide with first conjugate points because a distinct minimizing geodesic may reach the same point. A local logarithm $\log_x(y)$ can become multivalued or undefined on a chosen branch at a cut locus.

On the unit sphere $S^2$, $\exp_x(\pi v)$ for all unit $v\in T_xS^2$ is the antipode: infinitely many initial directions reach one point. On hyperbolic space $\mathbb H^n$ with its complete simply connected standard metric, $\exp_x$ is globally bijective; quotients generally destroy this global uniqueness even if the universal cover has it.

**What a camera needs:** forward ray propagation $\exp_x(tv)$ is always preferable to trying to invert a globally multivalued exponential for every visible point. To illuminate from a light source or compute shadows, inverse questions reappear and may require enumerating several geodesics with bounded length.

**Check:** on $S^2$, test $\gamma_{v}(\pi)=-x$ for distinct unit tangent $v$ and that a parallel-frame solution remains orthonormal. On $\mathbb H^2$, verify unique vertical geodesic between $(0,1)$ and $(0,e^t)$ in the model example. [Worked examples](../worked/sphere-loop.md), [hyperbolic](../worked/hyperbolic-half-plane.md).
