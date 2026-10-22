# Upper half-plane: hyperbolic geodesic and transported frame

**Status: independently derived exact calculation; constant negative curvature convention.** This example uses $\mathbb H^2$, a factor of Thurston's $\mathbb H^2\times\mathbb R$, and local two-dimensional slices of hyperbolic three-space.

## 1. Metric and connection

On $y>0$ take
$$g=\frac{dx^2+dy^2}{y^2},\qquad g_{xx}=g_{yy}=y^{-2},\qquad g^{xx}=g^{yy}=y^2.$$
The only nonzero first derivatives of metric coefficients are $\partial_y g_{xx}=\partial_yg_{yy}=-2y^{-3}$. The Levi-Civita formula yields
$$\Gamma^x{}_{xy}=\Gamma^x{}_{yx}=-1/y,\quad
\Gamma^y{}_{xx}=1/y,\quad
\Gamma^y{}_{yy}=-1/y.$$
All other symbols vanish.

With $R(X,Y)Z=\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z$, calculate
$$R^x{}_{yxy}
=\partial_x\Gamma^x{}_{yy}-\partial_y\Gamma^x{}_{xy}
+\Gamma^x{}_{xm}\Gamma^m{}_{yy}
-\Gamma^x{}_{ym}\Gamma^m{}_{xy}.$$
The first term is zero. The remaining pieces are $-1/y^2$, $+1/y^2$, and $-1/y^2$, respectively, giving $R^x{}_{yxy}=-1/y^2$. Since $R(\partial_x,\partial_y)\partial_y=K\,g_{yy}\partial_x$ in an orthogonal chart, this corresponds to Gaussian curvature $K=-1$.

## 2. An exact ray

The coordinate geodesic equations are
$$\ddot x-\frac{2}{y}\dot x\dot y=0,\qquad
\ddot y+\frac{1}{y}(\dot x^2-\dot y^2)=0.$$
Initial conditions:
$$x(0)=0,\quad y(0)=1,\quad \dot x(0)=0,\quad\dot y(0)=1.$$
The exact solution $\gamma(t)=(0,e^t)$ obeys both equations: $\ddot x=0$ and $\ddot y-\dot y^2/y=e^t-e^t=0$. Its squared intrinsic speed is $(\dot x^2+\dot y^2)/y^2=e^{2t}/e^{2t}=1$.

The intrinsic distance between $(0,1)$ and $(0,e^T)$ is $|T|$: direct integration gives $\int_0^T|\dot y|/y\,dt=|T|$ when traversal direction is accounted for. Vertical half-lines are complete minimizing hyperbolic geodesics; in the standard half-plane model the other complete geodesics are semicircles orthogonal to the boundary $y=0$.

## 3. Parallel transport is not constant components

An orthonormal field is $E_1=y\partial_x$, $E_2=y\partial_y$. Along $\gamma(t)$,
$$\nabla_{\dot\gamma}(y\partial_x)
=(\dot y+y\Gamma^x{}_{yx}\dot y)\partial_x=0$$
and likewise $\nabla_{\dot\gamma}(y\partial_y)=0$ because $\dot y+y\Gamma^y{}_{yy}\dot y=0$. Thus $E_1(t)=e^t\partial_x$ and $E_2(t)=e^t\partial_y$ are both parallel.

For initial tangent $W(0)=a\partial_x+b\partial_y$ at $(0,1)$, the transported field is $W(t)=e^t(a\partial_x+b\partial_y)$. Its coordinate components grow but its geometric norm is constant:
$$g_{\gamma(t)}(W(t),W(t))
=e^{-2t}e^{2t}(a^2+b^2)=a^2+b^2.$$
For $W_0=(1,0)$, its metric inner product with $\dot\gamma$ stays zero.

## 4. Verification conditions

Check curvature $-1$, both geodesic equations, unit speed, analytic distance $|T|$, zero covariant derivative of $E_1,E_2$ and preservation of Gram matrix. A numerical stepper should converge toward $e^t$ on bounded intervals and retain $y>0$; growing coordinates for $t\gg0$ do not by themselves indicate growing metric speed. No executable integrator or CI check is claimed.

**Source context:** [hyperbolic three-space](../thurston/hyperbolic.md), [hyperbolic product](../thurston/h2-times-r.md), [transport](../foundations/parallel-transport-holonomy.md).
