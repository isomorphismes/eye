# Geodesics are an initial-value problem in the tangent bundle

**Status: mathematical derivation independently stated; [Coulon et al. §§3.2, 6](https://arxiv.org/html/2010.15801) inspected for algorithmic context.**

A geodesic $\gamma$ satisfies $\nabla_{\dot\gamma}\dot\gamma=0$. In coordinates $x^k(t)$,
$\ddot x^k+\Gamma^k{}_{ij}(x)\dot x^i\dot x^j=0$.
Write $v^k=\dot x^k$ to obtain first-order dynamics:
$\dot x^k=v^k$, $\dot v^k=-\Gamma^k{}_{ij}(x)v^iv^j$.
An initial state consists of a **point** $x_0$ and a vector $v_0\in T_{x_0}M$, rather than just a direction array.

A local smooth connection gives local existence and uniqueness as long as the solution stays in its domain. Completeness is an additional global property. For Levi-Civita, differentiating $g(\dot\gamma,\dot\gamma)$ gives $2g(\nabla_{\dot\gamma}\dot\gamma,\dot\gamma)=0$, hence speed is constant. Unit initial speed makes the affine parameter arc length. The geodesic flow $\Phi_t:TM\to TM$ must preserve this speed and satisfy $\Phi_{s+t}=\Phi_s\circ\Phi_t$ where defined.

An observer orientation obeys separate equations: with frame vectors $E_a(t)$,
$\nabla_{\dot\gamma}E_a=0$, or
$\dot E_a^k=-\Gamma^k{}_{ij}(x)\dot x^iE_a^j$. This preserves the Gram matrix $g(E_a,E_b)$ for Levi-Civita. It is not guaranteed that a stepper solving the position alone also transports facing.

**Not enough data:** Christoffel coefficients alone do not tell the program the admissible chart region, metric norm, isometry representations, neighboring chart transitions, scene geometry, signed-distance underestimates, quotient actions, or time/length units. For a numerical integrator one also needs precision, step control, event detection and tolerances.

**Numerical checks:** speed drift, transport Gram matrix, reversibility away from discontinuities, agreement between chart representations, and convergence as step size decreases. These conditions are specified here; no integration benchmark is claimed.
