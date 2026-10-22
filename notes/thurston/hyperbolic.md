# Hyperbolic model: $\mathbb H^3$

**Status: independently derived hyperboloid flow; [Coulon et al. §7.3](https://arxiv.org/html/2010.15801) and pinned [shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/hyp/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** Hyperboloid $X=\{p\in\mathbb R^{1,3}:\langle p,p\rangle_L=-1,\ p_0>0\}$, $\langle a,b\rangle_L=-a_0b_0+\sum_{i=1}^3a_ib_i$. Restricted Lorentz form is positive definite on $T_pX=\{v:\langle p,v\rangle_L=0\}$. Sectional curvature $K=-1$. Equivalent upper-half-space coordinates $(x,y,z)$, $z>0$, carry $g=(dx^2+dy^2+dz^2)/z^2$. Its connection follows the Levi-Civita metric formula, not Euclidean differentiation.

**Ray and transport.** Unit initial $v$ gives $\gamma(t)=p\cosh t+v\sinh t$. If $W_0=a v+W_\perp$ with $W_\perp$ Lorentz-orthogonal to $p,v$, parallel transport is $W(t)=a\dot\gamma(t)+W_\perp$. Verify $\langle\gamma,\gamma\rangle_L=-1$, $\langle\dot\gamma,\dot\gamma\rangle_L=1$. The exact distance satisfies $\cosh d(p,q)=-\langle p,q\rangle_L$.

**Isometries and quotients.** The time-orientation-preserving Lorentz group acts on the chosen sheet (with orientation-preserving subgroup appropriate to the scene). A discrete torsion-free subgroup produces a hyperbolic quotient, with geodesics continued through paired fundamental faces by deck transformations. In the simply connected cover, each pair of points has a unique minimizing geodesic; the quotient can have many lifts and apparent images.

**Observer example.** At $p=(1,0,0,0)$ and $v=(0,1,0,0)$, $\gamma(t)=(\cosh t,\sinh t,0,0)$. The geodesic-sphere area scales as $\sinh^2 t$ rather than $t^2$, affecting physically motivated intensity attenuation.

**Numerical limits.** $\cosh$ overflow for large travel, cancellation in Lorentz products, scale distortions in projective models, and many quotient copies. [Upper half-plane worked example](../worked/hyperbolic-half-plane.md) checks the corresponding two-dimensional equations.
