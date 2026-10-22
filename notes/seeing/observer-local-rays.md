# What does an observer at a point see?

**Status: independently formulated camera model; [Coulon et al. §3.3–3.6](https://arxiv.org/html/2010.15801) inspected.**

An observer state is $(x,F)$, where $x\in M$ and $F=(e_{\rm right},e_{\rm up},e_{\rm forward})$ is an oriented $g_x$-orthonormal frame in $T_xM$. The state belongs to the orthonormal frame bundle, not to $M\times SO(3)$ canonically; the latter identification requires an explicit trivialization.

For a pinhole image sample with normalized image-plane coordinates $(u,v)$ and focal parameter $f>0$, let $w=u\,e_{\rm right}+v\,e_{\rm up}+f\,e_{\rm forward}$ and define $\hat w=w/\sqrt{g_x(w,w)}$. The **mathematical viewing ray** is $\gamma_{x,\hat w}(t)=\exp_x(t\hat w)$, $t\ge0$ where defined. It has unit speed, so $t$ is geometric travel length. Field of view and pixel-to-direction projection are camera choices independent of the manifold connection.

The first geometric hit is not simply the object nearest in a global coordinate array. Given a closed scene $S\subset M$, define $t_*=\inf\{t>0:\gamma(t)\in S\}$ when such an intersection exists; for a regular boundary, record $\gamma(t_*)$, tangent $\dot\gamma(t_*)$, oriented surface normal in $T_{\gamma(t_*)}M$, and the scene identifier. In a quotient, find the first hit among encountered fundamental-domain representatives.

**Different directions may reach the same scene point.** On $S^3$ distinct great-circle directions meet at the antipode; in a nontrivial quotient different lifts of a point can yield multiple images. A backward method that assumes one inverse $\log_x$ would lose these possibilities. Forward flow does not need to invert the exponential map.

Stereo requires two **separate** starting points and frames connected by a chosen local displacement and transport. In a curved manifold, assigning a universal left-eye/right-eye Euclidean offset is incorrect beyond a chosen local frame. Camera orientation after movement also needs an explicit transport rule.

**Contracts:** frame Gram matrix equals identity, each emitted ray has unit speed, $t_*$ is the earliest positive hit, and changing chart or equivalent quotient representative does not alter the intrinsic result. [Typed interfaces](../architecture/dependent-types.md).
