# Moving an observer and transporting facing

**Status: independently specified equations; compare [Coulon et al. §3.4](https://arxiv.org/html/2010.15801).**

An input device produces a small displacement described in an observer's **local** frame: $a=a^ie_i\in T_xM$. Move to $x'=\exp_x(a)$ along the geodesic determined by $(x,a)$, and transport each frame axis with Levi-Civita along that same curve: $e'_i=P_\gamma(e_i)\in T_{x'}M$. This defines what it means to maintain facing while walking "straight" locally. User-imposed rotation afterward acts in the new tangent space by an $SO(3)$ matrix.

If locomotion follows a non-geodesic path, retain the actual path and transport convention. Parallel transport, keeping a rigid orientation relative to a local coordinate frame, and Fermi–Walker-like transport are not generally interchangeable. The observer's perceived rotation depends on the choice; a closed walk can produce holonomy even if the final base point is the original one.

A numerical state can be represented by chart coordinates $x^i$, tangent velocity $v^i$, and three tangent frame vectors $E_a^i$, but every vector must share the **current point**. Integrate
$\dot x^i=v^i$,
$\dot v^k=-\Gamma^k{}_{ij}v^iv^j$,
$\dot E_a^k=-\Gamma^k{}_{ij}v^iE_a^j$.
For initial unit speed and orthonormal frame, metric compatibility implies the invariants $g(v,v)=1$ and $g(E_a,E_b)=\delta_{ab}$.

At a fundamental-domain face paired by $h$, the representative changes by $(x,v,F)\mapsto(h(x),dh_xv,dh_xF)$. Do not numerically reset the frame to its old matrix after teleportation. In a homogeneous Lie-group representation one may store pose as isometry plus local facing; this needs the group law and isotropy action, not merely a point array.

**Observer example:** on unit $S^2$, follow a latitude loop and parallel-transport facing. At colatitude $\pi/3$ a frame returns rotated by $\pi$ (orientation sign mod $2\pi$), although the observer returns to the starting point. [Derivation](../worked/sphere-loop.md).

**Check:** reverse the exact path and transport to recover the original frame, and confirm a chart transition does not produce an apparent physical turn.
