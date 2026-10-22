# Unit sphere: geodesic, tangent frame, and loop holonomy

**Status: independently derived exact calculation.** This pedagogical $S^2$ example illustrates part of the spherical-factor geometry of $S^2\times\mathbb R$ and local principles that extend to $S^3$. It is **not** a claim that the observer in Thurston's round $S^3$ has only two directions.

## 1. Round metric and frame

Let $p(\theta,\phi)=(\sin\theta\cos\phi,\sin\theta\sin\phi,\cos\theta)$ for $0<\theta<\pi$. Then $g=d\theta^2+\sin^2\theta\,d\phi^2$, with $\theta$ **colatitude**. Metric differentiation gives
$$\Gamma^\theta{}_{\phi\phi}=-\sin\theta\cos\theta,\qquad
\Gamma^\phi{}_{\theta\phi}=\Gamma^\phi{}_{\phi\theta}=\cot\theta.$$
An orthonormal tangent frame away from the poles is
$$E_\theta=\partial_\theta,\qquad E_\phi=\frac{1}{\sin\theta}\partial_\phi.$$
Direct application of the connection yields
$$\nabla_{\partial_\phi}E_\theta=\cos\theta\,E_\phi,\qquad
\nabla_{\partial_\phi}E_\phi=-\cos\theta\,E_\theta.$$

## 2. Exactly closed great-circle geodesic

Choose $\gamma(t)=p(\pi/2,t)$ for $0\le t\le2\pi$. Its initial data are $\theta(0)=\pi/2$, $\phi(0)=0$, $\dot\theta(0)=0$, $\dot\phi(0)=1$. It has unit speed since $\sin(\pi/2)=1$. The geodesic equations
$$\ddot\theta-\sin\theta\cos\theta\,\dot\phi^{\,2}=0,\qquad
\ddot\phi+2\cot\theta\,\dot\theta\dot\phi=0$$
are satisfied exactly. The embedding curve is $(\cos t,\sin t,0)$; it returns to its starting point with the same velocity after length $2\pi$.

Along the equator, $\cos\theta=0$, so $\nabla_{\dot\gamma}E_\theta=\nabla_{\dot\gamma}E_\phi=0$. The displayed tangent frame itself is parallel and returns unchanged. **A closed geodesic need not have nontrivial holonomy**: this equatorial loop has identity transport on tangent vectors.

## 3. A different closed loop with nontrivial holonomy

Now choose the parallel of colatitude $\theta_0=\pi/3$, parameterized by $\sigma(\phi)=p(\theta_0,\phi)$, $0\le\phi\le2\pi$. Its speed with parameter $\phi$ is $\sin\theta_0=\sqrt3/2$, and it is **not a geodesic**: the $\theta$ geodesic equation has residual $-\sin\theta_0\cos\theta_0=-\sqrt3/4$. Its length is $2\pi\sin\theta_0=\pi\sqrt3$.

Write a parallel vector as $W(\phi)=a(\phi)E_\theta+b(\phi)E_\phi$. From $\nabla_{\sigma'}W=0$:
$$a'=\cos\theta_0\,b,\qquad b'=-\cos\theta_0\,a.$$
For $W(0)=E_\theta$ we obtain
$$a(\phi)=\cos(\phi\cos\theta_0),\qquad
b(\phi)=-\sin(\phi\cos\theta_0).$$
At the return $\phi=2\pi$, $(a,b)=(-1,0)$; parallel transport rotates the tangent plane by $-\pi$ relative to this oriented frame, equivalent to $+\pi$ modulo $2\pi$. Its frame coefficients remain orthonormal.

The spherical cap bounded by this parallel has area
$$A=\int_0^{2\pi}\int_0^{\theta_0}\sin\theta\,d\theta\,d\phi
=2\pi(1-\cos\theta_0)=\pi.$$
Since Gaussian curvature $K=1$, the Gauss–Bonnet/holonomy angle has magnitude $KA=\pi$ modulo $2\pi$, consistent with the explicit transport. Orientation chooses the signed representative.

## 4. What a checker should do

Verify both geodesic residuals for the equator, the deliberate nonzero residual for the latitude, the unit Gram matrix of $(E_\theta,E_\phi)$, the transport ODE and its final $(-1,0)$ coefficient, plus cap area $\pi$. Test numerical convergence separately: do not label these hand calculations an executed software test.

**Cross-reference:** [parallel transport](../foundations/parallel-transport-holonomy.md), [curvature](../foundations/curvature-and-jacobi.md), [spherical model](../thurston/spherical.md).
