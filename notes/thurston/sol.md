# Sol: anisotropic solvable geometry

**Status: independently derived frame/connection and first integrals; [Coulon et al. §11](https://arxiv.org/html/2010.15801) and pinned [Sol shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sol/geometry/shaders/part2.glsl) inspected.**

**Model and metric.** Coordinates $(x,y,z)\in\mathbb R^3$ with $g=e^{2z}dx^2+e^{-2z}dy^2+dz^2$. Reversing $z$ and interchanging $x,y$ yields a common alternate convention; source formulas must be compared only after this coordinate choice is stated. Horizontal $x$ and $y$ costs scale in opposite ways with $z$.

**Connection.** In the orthonormal frame $E_1=e^{-z}\partial_x$, $E_2=e^z\partial_y$, $E_3=\partial_z$, brackets are $[E_3,E_1]=-E_1$ and $[E_3,E_2]=E_2$. Koszul gives $\nabla_{E_1}E_1=-E_3$, $\nabla_{E_1}E_3=E_1$, $\nabla_{E_2}E_2=E_3$, $\nabla_{E_2}E_3=-E_2$, while $\nabla_{E_3}E_1=\nabla_{E_3}E_2=0$; omitted basic pair coefficients vanish. The metric is not isotropic even though Sol is homogeneous.

**Ray dynamics.** Translational Killing fields $\partial_x,\partial_y$ produce conserved momenta $p_x=e^{2z}\dot x$, $p_y=e^{-2z}\dot y$. Consequently $\dot x=p_xe^{-2z}$, $\dot y=p_ye^{2z}$ and $\ddot z=e^{2z}\dot x^2-e^{-2z}\dot y^2=p_x^2e^{-2z}-p_y^2e^{2z}$. Unit speed gives $\dot z^2+p_x^2e^{-2z}+p_y^2e^{2z}=1$. These equalities are independent analytic checks on a numerical integrator.

**Isometries and quotients.** Coordinate changes $(x,y,z)\mapsto(e^{-c}x,e^cy,z+c)$ are isometries; together with horizontal translations and finite symmetries they describe a useful subgroup. Quotients arising from hyperbolic torus automorphisms require the appropriate lattice and face-pairing transforms, not a naive periodic box.

**Observer example and limits.** Rays with $p_x=p_y\ne0$ and $\dot z(0)=0$ can initially balance the two horizontal forces at $z=0$, while small changes in $z$ alter their relative costs. Geodesics are generally not coordinate straight lines. The companion shader contains distinct numerical and elliptic-function flow paths (e.g. numFlow and ellFlow); approximation quality, near-degenerate cases, and expensive distance estimates require separate qualification.
