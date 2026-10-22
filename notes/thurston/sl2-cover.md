# The universal cover $\widetilde{SL_2(\mathbb R)}$

**Status: local model and connection independently derived; the paper's separate group-model conventions remain distinct. [Coulon et al. §10](https://arxiv.org/html/2010.15801); pinned [shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sl2/geometry/shaders/part2.glsl).**

**Model.** One local coordinate presentation uses upper half-plane $(x,y)$, $y>0$, and a lifted fiber coordinate $\theta\in\mathbb R$ (not silently reduced modulo $2\pi$):
$\omega^1=dx/y$, $\omega^2=dy/y$, $\omega^3=d\theta+dx/y$;
$g=(\omega^1)^2+(\omega^2)^2+(\omega^3)^2$.
This chosen unit-scale bundle metric is a representative of $\widetilde{SL_2\mathbb R}$ geometry; scale/coordinate normalizations in other references may differ. The horizontal base has hyperbolic curvature, but motion in the fiber is coupled by the connection one-form.

**Connection from an orthonormal frame.** Dual fields are $E_1=y\partial_x-\partial_\theta$, $E_2=y\partial_y$, $E_3=\partial_\theta$. They obey $[E_1,E_2]=-E_1-E_3$, $[E_1,E_3]=[E_2,E_3]=0$. Koszul therefore supplies all Levi-Civita coefficients; for example $\nabla_{E_1}E_1=E_2$ and $\nabla_{E_2}E_2=0$. The nonzero $E_3$ bracket component means that treating the model as the *direct product* $\mathbb H^2\times\mathbb R$ gives wrong transport and rays.

**Ray initial values.** Specify $(x_0,y_0,\theta_0;u_1,u_2,u_3)$ in the above orthonormal frame. Then $\dot x=yu_1$, $\dot y=yu_2$, $\dot\theta=u_3-u_1$; calculate $\dot u$ from $\nabla_{\dot\gamma}\dot\gamma=0$ using structure constants. Unit speed is $u_1^2+u_2^2+u_3^2=1$. This gives a reproducible local ODE even without copying the published closed-form solver.

**Isometries, quotients, and visibility.** Left group translations act isometrically in an appropriate group model; the fiber lift records winding that would be lost by treating a base rotation modulo $2\pi$. The paper's software stores redundant $(g,w)\in SL_2(\mathbb R)\times\mathbb R$ data to retain the lifted coordinate (§10.1). Quotient deck data must act consistently on both base and lift.

**Numerical limits.** Long winding and branch/crossing errors, multivalued point-to-point geodesics, and the complexity of distance estimates and lighting. The published implementation includes separate point-direction and area-density work; no numerical equivalence to this locally normalized coframe has been tested here.

**Exact curvature and ray cross-checks:** [Lie-frame and coordinate verification for SL2](../worked/lie-group-curvature.md).
