# Nil: noncommutative Heisenberg geometry

**Status: locally derived connection and body-velocity equations; compared with [Coulon et al. §9](https://arxiv.org/html/2010.15801) and pinned [Nil shader](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/nil/geometry/shaders/part2.glsl).**

**Model and metric convention.** Regard $\mathbb R^3$ as the Heisenberg group with multiplication $(x,y,z)(x',y',z')=(x+x',y+y',z+z'+xy')$. This law is noncommutative. The left-invariant coframe $\omega^1=dx$, $\omega^2=dy$, $\omega^3=dz-x\,dy$ gives
$g=(\omega^1)^2+(\omega^2)^2+(\omega^3)^2$.
This is equivalent under a coordinate change to the rotation-invariant metric $dx^2+dy^2+(dz-\tfrac12(x\,dy-y\,dx))^2$ used in the paper §9.2. Do not silently combine their distinct coordinate conventions.

**Connection.** Dual orthonormal frame: $E_1=\partial_x$, $E_2=\partial_y+x\partial_z$, $E_3=\partial_z$, and $[E_1,E_2]=E_3$, all other brackets zero. Koszul gives $\nabla_{E_1}E_2=\tfrac12E_3$, $\nabla_{E_2}E_1=-\tfrac12E_3$, $\nabla_{E_1}E_3=\nabla_{E_3}E_1=-\tfrac12E_2$, and $\nabla_{E_2}E_3=\nabla_{E_3}E_2=\tfrac12E_1$.

**Ray propagation.** Let $\dot\gamma=u_1E_1+u_2E_2+u_3E_3$. Then $\dot u_1=-u_2u_3$, $\dot u_2=u_1u_3$, $\dot u_3=0$, with $u_1^2+u_2^2+u_3^2$ constant. Also $\dot x=u_1$, $\dot y=u_2$, $\dot z=xu_2+u_3$. Frame transport uses the same connection, not constant coordinate vectors.

**Isometries, quotients, observations.** Left multiplication is isometric; the rotation-invariant model makes an additional $O(2)$ stabilizer visible. Integer Heisenberg lattices give compact quotients; an $x$-shift can also shear the $z$ coordinate under identification. A ray starting with $(u_1,u_2,u_3)=(1,0,c)$ traces a rotating *horizontal* velocity when $c\ne0$, even though the speed remains constant. The vertical direction changes the horizontal appearance.

**Numerical limits.** Multiple geodesics and nonlinear ball distances make Euclidean signed distance marching unsafe without proven underestimates. Verify the group law and frame-to-coordinate conversion at every quotient boundary. The paper details half-space and ball bounds in §9.4–9.9.
