# Spherical model: round $S^3$

**Status: independently derived basic flow; [Coulon et al. §7.2](https://arxiv.org/html/2010.15801) and pinned [spherical shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sph/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** $X=\{p\in\mathbb R^4:p\cdot p=1\}$, with induced round metric and sectional curvature $+1$. Tangent vectors at $p$ satisfy $p\cdot v=0$. The Levi-Civita derivative of a tangent field $W$ along a curve is the tangent projection of its Euclidean derivative: $D_tW=\dot W+(W\cdot\dot p)p$.

**Ray and facing.** For $\|v\|=1$ at $p$, $\gamma(t)=p\cos t+v\sin t$, and $\dot\gamma(t)=-p\sin t+v\cos t$. Decompose an initial tangent vector $W_0=a v+W_\perp$ with $W_\perp\cdot p=W_\perp\cdot v=0$. Parallel transport is $W(t)=a\dot\gamma(t)+W_\perp$. Check $\gamma\cdot\gamma=1$, $\gamma\cdot\dot\gamma=0$, and $\|W(t)\|=\|W_0\|$.

**Isometries and quotients.** $O(4)$ acts by linear orthogonal maps, with $SO(4)$ orientation preserving. Unit great circles close after length $2\pi$; antipodal points at distance $\pi$ have infinitely many connecting minimal geodesics. Free finite isometry group actions produce spherical space forms; the antipodal quotient $\mathbb{RP}^3$ identifies $p$ with $-p$ and modifies apparent repeated scenery.

**Observer example.** A camera at $p=(1,0,0,0)$, direction $v=(0,1,0,0)$ reaches $-p$ at $t=\pi$ and returns at $2\pi$. Distinct initial directions can meet at the antipode. An inverse perspective projection using only a single shortest geodesic will lose branches.

**Numerical limits.** Trigonometric long-time phase and normalization drift, conjugate-point lensing, quotient repeats, and multivalued logarithms. An embedding coordinate in $\mathbb R^4$ is not a fourth *visible physical direction*. [Sphere transport on $S^2$](../worked/sphere-loop.md) is a smaller exact model.
