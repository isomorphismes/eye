# Christoffel coefficients are not tensors

**Status: independently derived, signs and index order fixed here.**

Define $\nabla_{\partial_i}\partial_j=\Gamma^k{}_{ij}\partial_k$. For a coordinate change $y=y(x)$, with $x=x(y)$ locally, the coefficients transform as

$$
\Gamma'^a{}_{bc}
=\frac{\partial y^a}{\partial x^i}
\frac{\partial x^j}{\partial y^b}
\frac{\partial x^k}{\partial y^c}\Gamma^i{}_{jk}
+\frac{\partial y^a}{\partial x^i}
\frac{\partial^2 x^i}{\partial y^b\partial y^c}.
$$

The second-derivative term is **inhomogeneous**. It is absent from tensor transformation laws, and is why Christoffel coefficients themselves are not a tensor. The difference of two connections *is* a $(1,2)$-tensor because their inhomogeneous pieces cancel.

**Test against flat geometry.** In Cartesian coordinates on $\mathbb R^2$, the Levi-Civita coefficients all vanish. Convert to polar coordinates $(r,\theta)$ on $r>0$:
$g=dr^2+r^2d\theta^2$,
$\Gamma^r{}_{\theta\theta}=-r$,
$\Gamma^\theta{}_{r\theta}=\Gamma^\theta{}_{\theta r}=1/r$.
Thus $\Gamma\ne0$ even though every curvature component is zero. [Full calculation](../worked/polar-plane.md).

A computational error occurs when code declares that the matrix of coefficients transforms only by three Jacobian factors. Such code will fail a coordinate-change test. Another error is to use ordinary component derivatives after changing charts and forget the connection terms.

**Coordinate convention:** derivative index is first lower index in $\nabla_{\partial_i}\partial_j$. In the torsion-free coordinate case, lower-index symmetry makes alternative ordering appear harmless, but that fails for arbitrary frames or general connections. Record conventions before comparing source APIs.

For rendering, storing only $\Gamma$ is insufficient: one needs the chart domain, metric or norm, coefficients' smoothness, transition maps, stepping tolerances, and global topology. See [solver boundaries](../architecture/solver-boundaries.md).
