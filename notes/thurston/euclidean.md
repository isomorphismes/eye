# Euclidean model: $\mathbb E^3$

**Status: independently derived formulas; [Coulon et al. §7.1](https://arxiv.org/html/2010.15801) and pinned [shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/euc/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** $X=\mathbb R^3$, $g=dx^2+dy^2+dz^2$, $K\equiv0$. Cartesian orthonormal basis $\partial_x,\partial_y,\partial_z$ is global. The Levi-Civita connection has $\Gamma^k{}_{ij}=0$ in these coordinates; non-Cartesian coordinates can have nonzero Christoffel coefficients without changing curvature.

**Ray and facing.** For $(p,v)\in TX$, $\gamma(t)=p+tv$; the transported frame $F(t)=F(0)$ in Cartesian coordinates. For $\|v\|=1$, $d(p,\gamma(t))=|t|$. Unit-speed, straightness, transport Gram matrix, and composition of flow supply independent reference tests.

**Isometries.** $h(p)=Ap+b$, $A\in O(3)$, $b\in\mathbb R^3$; $dh_p=A$. Quotients by suitable discrete groups include the flat three-torus $\mathbb R^3/\mathbb Z^3$, where universal-cover rays are straight but may cross an infinite sequence of translated copies of a scene. If the camera teleports by $g\in\Gamma$, transport both $p$ and $v$ with $(g,dg)$.

**Observer example.** At $(0.8,0.25,0.4)$, looking along $(1,0,0)$ in the unit cube fundamental domain, the observer crosses the $x=1$ face after length $0.2$ and reappears at $x=0$. [Detailed quotient example](../worked/flat-3-torus-quotient.md).

**Numerical limits.** Float precision can still be lost for large coordinates and repeated quotient translations. A world-space Euclidean SDF and AABB are valid here but must not be generalized automatically to curved $X$. Compare the pinned Euclidean shader's [flow](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/euc/geometry/shaders/part2.glsl) against this analytic oracle.
