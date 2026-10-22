# Product geometry: $\mathbb H^2\times\mathbb R$

**Status: independently derived product equations; [Coulon et al. §8](https://arxiv.org/html/2010.15801) and pinned [h2e shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/h2e/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** Use $(x,y,z)$, $y>0$, with $g=(dx^2+dy^2)/y^2+dz^2$. The horizontal factor has curvature $-1$, while vertical-horizontal sections are flat. The product is homogeneous but anisotropic: the vertical line direction and hyperbolic tangent directions have different geodesic-divergence behavior.

**Connection and flow.** The Levi-Civita connection splits as $\nabla^{\mathbb H^2}\oplus d$ in product coordinates. For an initial tangent $(v_H,a)$ with $\|v_H\|^2+a^2=1$, write $\eta(t)$ for the hyperbolic geodesic with initial $v_H$. Then $\gamma(t)=(\eta(t),z_0+at)$, and parallel transport is $(P^{H}_{\eta,t},\mathrm{id}_{\mathbb R})$ on the corresponding fiber. In upper half-plane coordinates, $\Gamma^x{}_{xy}=-1/y$, $\Gamma^y{}_{xx}=1/y$, $\Gamma^y{}_{yy}=-1/y$; all coefficients involving only $z$ vanish.

**Isometries and quotients.** The group contains $\mathrm{Isom}(\mathbb H^2)\times\mathrm{Isom}(\mathbb R)$. Hyperbolic surface groups combined with vertical translations yield many quotient examples; the local product connection remains unchanged. When transporting quotient rays, map directions by the differential of the face-pairing isometry.

**Observer example.** Start at $(0,1,0)$ with vertical-plus-hyperbolic velocity $(0,b,a)$, $a^2+b^2=1$. Then $y(t)=e^{bt}$ and $z(t)=at$ is an exact unit-speed ray. Check $y^{-2}\dot y^2+\dot z^2=b^2+a^2$.

**Numerical limits.** Hyperbolic exponential scaling, multiple quotient lifts and non-Euclidean lighting. In the simply connected product, geodesics between endpoints are unique (both factors are complete simply connected nonpositively curved), unlike $S^2\times\mathbb R$. Compare [worked hyperbolic transport](../worked/hyperbolic-half-plane.md).
