# Flat Euclidean plane, nonzero polar Christoffels

**Status: independently derived by direct substitution. Exact formulas; no floating-point execution is asserted.** Convention throughout: $\nabla_{\partial_i}\partial_j=\Gamma^k{}_{ij}\partial_k$, $R(X,Y)Z=\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z$.

## 1. Metric and domain

Take $M=\mathbb R^2\setminus\{0\}$ and polar chart $r>0$, $\theta$ on a local angular interval, with $x=r\cos\theta$, $y=r\sin\theta$. The Euclidean metric becomes
$$g=dr^2+r^2d\theta^2,\quad (g_{ij})=\begin{pmatrix}1&0\\0&r^2\end{pmatrix},\quad (g^{ij})=\begin{pmatrix}1&0\\0&r^{-2}\end{pmatrix}.$$
The nonzero derivative of a metric component is $\partial_r g_{\theta\theta}=2r$. For the Levi-Civita connection,
$$\Gamma^k{}_{ij}=\tfrac12g^{k\ell}(\partial_i g_{j\ell}+\partial_j g_{i\ell}-\partial_\ell g_{ij}).$$
Consequently
$$\Gamma^r{}_{\theta\theta}=-r,\qquad
\Gamma^\theta{}_{r\theta}=\Gamma^\theta{}_{\theta r}=\frac1r,$$
and all other coordinate Christoffels vanish. The coefficients are nonzero **despite the space being intrinsically flat**. The coordinate chart fails at $r=0$; this is not a curvature singularity.

## 2. Curvature: calculate, don't infer

Using $R^\ell{}_{kij}=\partial_i\Gamma^\ell{}_{jk}-\partial_j\Gamma^\ell{}_{ik}+\Gamma^\ell{}_{im}\Gamma^m{}_{jk}-\Gamma^\ell{}_{jm}\Gamma^m{}_{ik}$, take the component $R^r{}_{\theta r\theta}$. The only nonzero terms are
$$R^r{}_{\theta r\theta}
=\partial_r\Gamma^r{}_{\theta\theta}
-\Gamma^r{}_{\theta\theta}\Gamma^\theta{}_{r\theta}
=-1-(-r)(1/r)=0.$$
The symmetries and dimension two then force all curvature components to vanish; equivalently, the Gaussian curvature $K=0$. This is a counterexample to the false proposition "$\Gamma\ne0$ implies curvature."

## 3. Geodesic initial-value problem

For $q(t)=(r(t),\theta(t))$:
$$\ddot r-r\dot\theta^{\,2}=0,\qquad
\ddot\theta+\frac{2\dot r\dot\theta}{r}=0.$$
Choose initial conditions
$$r(0)=2,\quad\theta(0)=\pi/4,\quad
\dot r(0)=1,\quad\dot\theta(0)=0.$$
The exact solution for $t>-2$ is
$$r(t)=2+t,\qquad\theta(t)=\pi/4.$$
In Cartesian coordinates, $(x,y)=(2+t)(1/\sqrt2,1/\sqrt2)$: the path is a Euclidean straight line. Its squared metric speed is $\dot r^2+r^2\dot\theta^2=1$. A second independent first integral is $r^2\dot\theta$ (angular momentum), here identically zero.

## 4. Parallel transport and coordinate effects

For a vector $W=a(t)\partial_r+b(t)\partial_\theta$ along this radial solution,
$$\dot a-r\dot\theta b=0,\quad
\dot b+\frac{\dot r}{r}b+\frac{\dot\theta}{r}a=0.$$
Since $\dot\theta=0$, $a(t)=a(0)$, $b(t)=b(0)\,2/(2+t)$. For $W(0)=\tfrac12\partial_\theta$ (unit length at $r=2$), $W(t)=\partial_\theta/(2+t)$ remains unit and parallel. Its polar component changes even though its Cartesian direction is constant.

## 5. Independent verification conditions

Check: (i) transformed Cartesian metric equals the polar metric; (ii) three Christoffels as above; (iii) curvature component and scalar $K$ vanish identically; (iv) geodesic residuals vanish and speed is exactly 1; (v) $\|W\|_g^2=(2+t)^2[1/(2+t)]^2=1$ and $\nabla_{\dot\gamma}W=0$. A numerical implementation should repeat these checks for $t$ strictly greater than $-2$ and compare solutions at reduced step size. Values at the origin do not constitute a valid polar-chart test.

**Reference:** [metrics/connections](../foundations/metrics-and-connections.md), [Christoffel transformation law](../foundations/christoffel-transformation.md), and the coordinate calculus in [Emmy](../code-survey/emmy-sicmutils.md).
