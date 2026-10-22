# Transport along paths and holonomy

**Status: independently derived; source bridge to [Coulon et al. §3.4](https://arxiv.org/html/2010.15801).**

Let $\gamma:[0,T]\to M$. Parallel transport of $W(t)\in T_{\gamma(t)}M$ solves $\nabla_{\dot\gamma}W=0$. In coordinates:
$\dot W^k=-\Gamma^k{}_{ij}(\gamma)\dot\gamma^iW^j$.
The resulting linear map $P_\gamma:T_{\gamma(0)}M\to T_{\gamma(T)}M$ depends in general on the path and preserves $g$ for Levi-Civita.

If two paths share endpoints, their transports can disagree; transporting around a loop produces an orthogonal map on the starting tangent space. These maps form the holonomy group. For a surface and a sufficiently small oriented loop bounding area $A$, the leading rotation is governed by Gaussian curvature $K$ and $KA$, with sign set by orientation and curvature convention. Holonomy measures curvature *integrated along a loop*, not simply whether a geodesic is closed.

**Concrete distinction.** On unit $S^2$, an equatorial great circle is a closed geodesic and its parallel transport after one full revolution is the identity. A loop at fixed colatitude $\theta_0=\pi/3$ is not geodesic; transporting an orthonormal frame around it produces a rotation of magnitude $\pi$ modulo $2\pi$. [Calculation](../worked/sphere-loop.md).

A frame's motion can alternatively be described by an isometry differential in suitably homogeneous models, but this relies on the chosen group action. It does not justify translating a vector numerically without its base point. After a quotient seam, apply the deck isometry differential to frame and ray direction; transport then continues from the new representative.

**Check:** numerically monitor $\langle P_\gamma e_i,P_\gamma e_j\rangle-\delta_{ij}$ and compare $P_{\bar\gamma}P_\gamma$ to identity for the reversed path $\bar\gamma$. On curvature-free simply connected Euclidean space, path dependence disappears.
