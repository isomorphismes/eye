# Curvature, geodesic deviation, and Jacobi fields

**Status: independently derived; curvature convention fixed explicitly.**

Take $R(X,Y)Z=\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z$. Then, with $\nabla_i\partial_k=\Gamma^\ell{}_{ik}\partial_\ell$,
$R^\ell{}_{kij}=\partial_i\Gamma^\ell{}_{jk}-\partial_j\Gamma^\ell{}_{ik}+\Gamma^\ell{}_{im}\Gamma^m{}_{jk}-\Gamma^\ell{}_{jm}\Gamma^m{}_{ik}$.
Switching conventions reverses some components and sectional-curvature signs. Do not mix this with a codebase's implicit index order.

For a geodesic variation $\gamma_s(t)$, the variation field $J(t)=\partial_s\gamma_s(t)|_{s=0}$ satisfies the Jacobi equation
$D_t^2J+R(J,\dot\gamma)\dot\gamma=0$.
This is a linear second-order equation along the reference ray. Its solutions quantify the separation of neighboring rays, sensitivity of the exponential map, and the *area density* of a cone of rays.

In constant curvature $K$, with unit-speed geodesic and perpendicular Jacobi direction, $j''+Kj=0$. For $j(0)=0$, $j'(0)=1$, the solutions are $j(t)=t$ for $K=0$, $\sin(\sqrt Kt)/\sqrt K$ for $K>0$, and $\sinh(\sqrt{-K}t)/\sqrt{-K}$ for $K<0$. At curvature $+1$, first conjugate time is $t=\pi$; at curvature $-1$, this Jacobi field never vanishes again.

**Rendering consequence:** at a regular point a geodesic-sphere area factor in three-dimensional constant curvature is proportional to $j(t)^2$; Euclidean inverse-square attenuation is therefore not universal. At conjugate points, an intensity approximation based on a single branch may diverge or require special handling; this is not a claim of physically exact wave optics.

**Check:** construct $R$ from the metric, test $R(X,Y)=-R(Y,X)$ and the metric symmetries; solve Jacobi initial values and compare finite separation of nearby geodesics for small perturbations. [Lighting](../seeing/lighting-and-optics.md).
