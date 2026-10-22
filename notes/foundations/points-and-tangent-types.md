# A point is not a tangent vector

**Status: independently developed from standard manifold definitions; compare [Coulon et al. §3](https://arxiv.org/html/2010.15801).**

A smooth manifold $M$ contains points $x$. For each $x$, its tangent space $T_xM$ is a real vector space of dimension $\dim M$, but tangent spaces at different points are **not canonically the same vector space**. A velocity is the pair $(x,v)$ with $v\in T_xM$; forgetting $x$ destroys the meaning of the components.

Write $\mathrm{RayState}=\sum_{x:M}T_xM$ (a dependent sum, ordinarily the tangent bundle $TM$). The unit-ray bundle is $SM=\{(x,v)\in TM:g_x(v,v)=1\}$. A camera frame is $F=(e_1,e_2,e_3)$ with $e_i\in T_xM$ and $g_x(e_i,e_j)=\delta_{ij}$; its state is in the orthonormal frame bundle $O(M)$.

**Example.** On $S^2\subset\mathbb R^3$, $x=(1,0,0)$ and $y=(0,1,0)$. The ambient vector $(0,1,0)$ is tangent at $x$ but *not* at $y$: $x\cdot(0,1,0)=0$, while $y\cdot(0,1,0)=1$. The same triple of numbers cannot be accepted as a tangent vector at arbitrary points. For $x=(1,0,0)$ and $y=(0,1,0)$, $T_xS^2=\{v:x\cdot v=0\}$ and $T_yS^2=\{w:y\cdot w=0\}$.

Local coordinates identify each $T_xM$ with $\mathbb R^n$ **after choosing a chart**. The numerical array is a representation, not the vector itself. A coordinate transition acts by the Jacobian. A connection supplies a rule for comparing vectors *along a path*; even in a curved space the comparison can depend on that path.

A physical light ray might use a Lorentzian null tangent bundle or a refractive optical metric instead of Riemannian unit speed. Eye defaults to mathematical Riemannian geodesics only for the model problem, not as an assertion about physical optics.

**Check:** reject an addition $v_x+w_y$ when $x\ne y$ unless an explicit transport map $T_yM\to T_xM$ has been supplied. See [charts](charts-and-frames.md), [transport](parallel-transport-holonomy.md), [typed architecture](../architecture/dependent-types.md).
