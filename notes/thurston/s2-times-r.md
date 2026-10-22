# Product geometry: $S^2\times\mathbb R$

**Status: independently derived product equations; [Coulon et al. §8](https://arxiv.org/html/2010.15801) and pinned [s2e shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/s2e/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** $X=\{(p,z):p\in S^2\subset\mathbb R^3,\ z\in\mathbb R\}$, $g=g_{S^2}+dz^2$. A tangent vector is $(v,a)$ with $p\cdot v=0$. Curvature is $+1$ on two-planes tangent to $S^2$, $0$ on planes spanned by a sphere direction and $\partial_z$; this is not a constant-curvature 3-space.

**Connection and geodesics.** The Levi-Civita connection splits: $\nabla_{(U,u)}(V,v)=(\nabla^{S^2}_UV,U(v))$ in the product frame (with fields extended appropriately). For initial $(p_0,z_0;v,a)$, let $b=\|v\|$. If $b>0$, $p(t)=p_0\cos(bt)+(v/b)\sin(bt)$ and $z(t)=z_0+at$; for $b=0$, the sphere position is constant. Unit speed requires $b^2+a^2=1$. Parallel transport also splits into sphere and line factors.

**Isometries and quotients.** Obvious isometries are $O(3)$ on the sphere and translations/reflections on $\mathbb R$. Quotients can identify vertical positions or combine rotations with a vertical translation. The metric and deck isometries are separate inputs; a vertical periodic identification changes repeated imagery without changing local ray equations.

**Observer example.** An observer facing entirely in a sphere direction ($a=0,b=1$) completes a great circle after length $2\pi$ at fixed height. With $a\ne0$, the projection to $S^2$ is periodic, while the 3D trajectory rises at constant speed, usually not returning to the same 3D point.

**Numerical limits.** Several ray directions may meet a scene point because the sphere factor's exponential is not injective. A naive 3D Euclidean chord underestimates path length but may not be a certified stepping radius. Product separation is an exact oracle for implementation tests.
