# Lighting depends on local tangent geometry and a chosen optical model

**Status: mathematical distinctions independently stated; [Coulon et al. §5](https://arxiv.org/html/2010.15801) inspected.**

At a hit point $s$, surface normal $N$, view direction $V$, and light-arrival direction $L$ must all be vectors in **the same fiber** $T_sM$ before taking dot products. A local Phong-like model can use diffuse factor $\max(0,g_s(N,L))$ and a specular factor depending on the $g_s$-reflection direction. Transporting a Euclidean normal from a model's ambient coordinate system without converting by $g^{-1}$ breaks this rule.

**Multiple geodesics:** in positively curved spaces or quotients, several geodesic segments may connect one source $q$ to $s$. Their arrival directions, lengths and attenuation can differ. Ignoring all but a shortest branch is a visual approximation and can suppress true multiple images or shadows.

**Area attenuation:** let $J_1,J_2$ be Jacobi fields with $J_a(0)=0$ and unit orthogonal initial derivatives transverse to a unit ray from a point source in three dimensions. A local geodesic-sphere area Jacobian is $A(t)=\sqrt{\det(g(J_a,J_b))}$. In constant sectional curvature $K=0,+1,-1$ this is respectively $t^2,\sin^2 t,\sinh^2 t$ before conjugate or branch complications, up to the source's angular normalization. Thus a naive $1/t^2$ Euclidean intensity law cannot be transferred unchanged. Conjugate rays need explicit treatment: geometric-optics intensity may formally diverge where the Jacobian vanishes.

**Distinguish propagation from optics.** Riemannian geodesic flow is a geometric choice. Physically justified light paths in general relativity are null geodesics of a Lorentzian metric, and a refractive medium can impose another optical metric or Hamiltonian. Phong lighting is an empirical shading rule even when adapted to curved space. Eye must label which model it uses.

**Shadows:** test blocking along each relevant light-to-hit geodesic, not by a straight Euclidean segment through a model's parameter space. Record the path branch and tolerance.

[Jacobi development](../foundations/curvature-and-jacobi.md) · [Thurston source study](../sources/ray-marching-thurston.md).
