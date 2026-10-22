# Lie geometries: exact frame, curvature, and ray checks

**Status: independently derived and cross-checked by two computations (orthonormal-frame Koszul and coordinate-metric curvature at the identity).** Calculations are exact algebraic claims, not a tested numerical integrator. Source context: [Coulon et al. §§9–11](https://arxiv.org/html/2010.15801), [Scott §4, pp. 462–472](https://doi.org/10.1112/blms/15.5.401).

The anisotropic models are not characterized by a single sectional curvature. State the **metric**, **orthonormal frame**, **bracket conventions**, and **curvature sign** before borrowing a formula from any paper or shader. Here the Levi-Civita connection is torsion free,
$[E_i,E_j]=c^k{}_{ij}E_k$, $\nabla_{E_i}E_j=\Gamma^k{}_{ij}E_k$,
and $R(X,Y)Z=\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z$.

For any orthonormal frame with constant bracket coefficients, Koszul reduces to
$$
2\langle\nabla_{E_i}E_j,E_k\rangle
=c^k{}_{ij}-c^i{}_{jk}+c^j{}_{ki}.
$$
With the convention above, the sectional curvature of $\operatorname{span}(E_i,E_j)$ is
$K_{ij}=\langle R(E_i,E_j)E_j,E_i\rangle$. These are direct input and output formulas for an independent symbolic calculation.

## 1. Nil, the Heisenberg group

Use the noncommutative law
$$(x,y,z)(x',y',z')=(x+x',y+y',z+z'+xy')$$
and the left-invariant orthonormal coframe
$$\omega^1=dx,\quad\omega^2=dy,\quad\omega^3=dz-x\,dy.$$
The metric and dual orthonormal frame are
$$g=dx^2+dy^2+(dz-x\,dy)^2,\quad
E_1=\partial_x,\quad E_2=\partial_y+x\partial_z,\quad E_3=\partial_z.$$
Only $[E_1,E_2]=E_3$ is nonzero among fundamental brackets. The nonzero connection coefficients, grouped in pairs, are
$$
\begin{aligned}
\nabla_{E_1}E_2&=\tfrac12 E_3,&\nabla_{E_2}E_1&=-\tfrac12 E_3,\\
\nabla_{E_1}E_3&=-\tfrac12 E_2,&\nabla_{E_3}E_1&=-\tfrac12 E_2,\\
\nabla_{E_2}E_3&=\tfrac12 E_1,&\nabla_{E_3}E_2&=\tfrac12 E_1.
\end{aligned}
$$
Thus $(K_{12},K_{13},K_{23})=(-3/4,\ 1/4,\ 1/4)$: curvature depends on the two-plane. This distinguishes Nil from both flat and constant-curvature 3-space.

Write $\dot\gamma=u_1E_1+u_2E_2+u_3E_3$. The geodesic equation is
$$
\dot u_1=-u_2u_3,\quad \dot u_2=u_1u_3,\quad\dot u_3=0;\qquad
\dot x=u_1,\quad\dot y=u_2,\quad\dot z=xu_2+u_3.
$$
Check $\frac d{dt}(u_1^2+u_2^2+u_3^2)=0$. With initial point $(0,0,0)$ and $(u_1,u_2,u_3)=(a,0,c)$, $a^2+c^2=1$, and $c\ne0$:
$$
\begin{aligned}
u_1&=a\cos(ct),&u_2&=a\sin(ct),&u_3&=c,\\
x(t)&=\frac a c\sin(ct),&
y(t)&=\frac a c(1-\cos(ct)),&
z(t)&=ct+\frac{a^2}{c}\left(\frac t2-\frac{\sin(2ct)}{4c}\right).
\end{aligned}
$$
**Residual check:** differentiate $z$ to obtain $c+x\dot y$; differentiate $u_1,u_2$ to recover their two coupled ODEs. At $c\to0$ evaluate a series or the limiting straight horizontal geodesic; direct formulas with $1/c^2$ suffer cancellation.

## 2. Sol, with a fixed sign convention

Choose
$$g=e^{2z}dx^2+e^{-2z}dy^2+dz^2,\quad
(E_1,E_2,E_3)=(e^{-z}\partial_x,e^z\partial_y,\partial_z).$$
This is equivalent to the metric $e^{-2z}dx^2+e^{2z}dy^2+dz^2$ in [Coulon et al. §11.1](https://arxiv.org/html/2010.15801) **after swapping the horizontal coordinates**; do not compare individual components without that map. Its nonzero brackets are
$$[E_3,E_1]=-E_1,\qquad [E_3,E_2]=E_2.$$
Koszul yields $\nabla_{E_1}E_1=-E_3$, $\nabla_{E_1}E_3=E_1$, $\nabla_{E_2}E_2=E_3$, $\nabla_{E_2}E_3=-E_2$, with all remaining $\nabla_{E_i}E_j=0$. It follows that
$$(K_{12},K_{13},K_{23})=(1,-1,-1).$$
For $\dot\gamma=u_1E_1+u_2E_2+u_3E_3$, derive
$$
\dot u_1=-u_1u_3,\quad
\dot u_2=u_2u_3,\quad
\dot u_3=u_1^2-u_2^2,
$$
with $\dot x=e^{-z}u_1$, $\dot y=e^zu_2$, $\dot z=u_3$. All three equations preserve $\sum_i u_i^2$.

**Exact test ray:** initial $p=(0,0,0)$ and $u=(1/\sqrt2,1/\sqrt2,0)$ give
$$\gamma(t)=\bigl(t/\sqrt2,\ t/\sqrt2,\ 0\bigr),\qquad
u(t)\equiv u(0).$$
This diagonal line is geodesic even though a generic horizontal-coordinate line is not: the competing vertical accelerations cancel. Check conserved momenta $p_x=e^{2z}\dot x$, $p_y=e^{-2z}\dot y$ and the metric speed 1.

## 3. Local model of $\widetilde{SL_2(\mathbb R)}$

Fix coordinates $(x,y,\theta)$ with $y>0$ and $\theta\in\mathbb R$ (the **lifted**, not periodic, fiber coordinate):
$$
\omega^1=\frac{dx}{y},\quad\omega^2=\frac{dy}{y},\quad
\omega^3=d\theta+\frac{dx}{y},\qquad
g=\sum_{i=1}^3(\omega^i)^2.
$$
The dual frame is $E_1=y\partial_x-\partial_\theta$, $E_2=y\partial_y$, $E_3=\partial_\theta$. The only nonzero bracket is
$$[E_1,E_2]=-E_1-E_3.$$
The full nonzero connection coefficients are
$$
\begin{aligned}
\nabla_{E_1}E_1&=E_2,&
\nabla_{E_1}E_2&=-E_1-\tfrac12E_3,&
\nabla_{E_1}E_3&=\tfrac12E_2,\\
\nabla_{E_2}E_1&=\tfrac12E_3,&
\nabla_{E_2}E_3&=-\tfrac12E_1,\\
\nabla_{E_3}E_1&=\tfrac12E_2,&
\nabla_{E_3}E_2&=-\tfrac12E_1.
\end{aligned}
$$
All unlisted terms are zero. Consequently $(K_{12},K_{13},K_{23})=(-7/4,\ 1/4,\ 1/4)$. In particular, the metric is **not** the product metric on $\mathbb H^2\times\mathbb R$.

The body-velocity geodesic equations become
$$
\dot u_1=u_2(u_1+u_3),\quad
\dot u_2=-u_1(u_1+u_3),\quad
\dot u_3=0;
$$
the coordinate equations are
$$\dot x=yu_1,\quad\dot y=yu_2,\quad\dot\theta=u_3-u_1.$$
Their speed invariant is $u_1^2+u_2^2+u_3^2$, and $\dot u_3=0$ is a useful independently checkable first integral.

**Exact test ray:** take $(x,y,\theta)=(0,1,0)$ and $u=(1/\sqrt2,0,-1/\sqrt2)$. Since $u_1+u_3=0$, the body velocity stays constant and
$$\gamma(t)=\bigl(t/\sqrt2,\ 1,\ -\sqrt2t\bigr).$$
Substitute into the coframe: $(\omega^1(\dot\gamma),\omega^2(\dot\gamma),\omega^3(\dot\gamma))=(1/\sqrt2,0,-1/\sqrt2)$, so its metric speed equals 1. The fiber **winds without being identified**, as required by the universal cover. This local presentation is not asserted to have the same normalization and fiber coordinate as the rendering paper's matrix model.

## 4. Two independent algebraic routes, and test obligations

1. **Lie-frame route:** evaluate the bracket table, Koszul coefficients, then $R(E_i,E_j)E_j$, giving the ordered curvature triples Nil $(-3/4,1/4,1/4)$, Sol $(1,-1,-1)$, and local $\widetilde{SL_2}$ $(-7/4,1/4,1/4)$.
2. **Coordinate-metric route:** assemble each explicit $3\times3$ matrix $g_{ij}$ in the displayed chart; compute ordinary-coordinate Christoffels, then $R^\ell{}_{kij}$. Contract against the displayed orthonormal frame at respectively $(0,0,0)$, $(0,0,0)$, $(0,1,0)$; the same triples result. These two calculations were performed with exact symbolic arithmetic for the authoring audit, but **no independent reviewer or CI** has verified them.
3. **Geodesic route:** differentiate each exact trajectory and substitute into both coordinate and body-frame IVPs; test the claimed unit metric speed. At $t=0$, the right-hand side must equal the specified initial tangent components.
4. **Numerical work still needed:** if these are eventually implemented as integrators, compare local truncation and energy drift, check chart and quotient transitions, and test near cancellation and winding. None of those is a prerequisite for publishing a mathematical notes corpus, and no such numerical execution is claimed here.

**Comparisons:** [Nil](../thurston/nil.md), [Sol](../thurston/sol.md), [SL2 cover](../thurston/sl2-cover.md), [connection signs](../foundations/metrics-and-connections.md), [curvature convention](../foundations/curvature-and-jacobi.md).
