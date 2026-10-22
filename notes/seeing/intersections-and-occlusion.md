# Intersection and ordering of visibility along a geodesic

**Status: independently formulated event semantics; compare [Coulon et al. §§2, 3.7](https://arxiv.org/html/2010.15801).**

Let $S\subset M$ be closed with a sufficiently regular boundary where normals are needed. Given a unit-speed ray $\gamma:[0,\infty)\to M$, the intrinsic hit set is $H=\{t>0:\gamma(t)\in S\}$. An opaque scene's visible encounter is the **least $t$ in $H$**, provided a hit is attained. The ordering is along the *ray parameter*, not by Euclidean squared distance between coordinate tuples. In a spherical or quotient space the ray may revisit a physical point and intersect many copies; keeping only one global nearest center is wrong.

When a surface is locally represented by $\varphi(x)=0$ and $d\varphi\ne0$, the metric normal at the hit is $N=\operatorname{grad}_g\varphi/\|\operatorname{grad}_g\varphi\|_g$. In coordinates, $(\operatorname{grad}_g\varphi)^i=g^{ij}\partial_j\varphi$. The incidence angle obeys $g(N,\dot\gamma(t_*))$. A model's Euclidean gradient of an embedding polynomial is not automatically the intrinsic unit normal.

**Distances for stepping.** The exact nonnegative distance $d(p,S)=\inf_{s\in S}d_g(p,s)$ is 1-Lipschitz in the metric. If $\sigma(p)$ is a **proven lower bound** on $d(p,S)$ for exterior points, then advancing a unit-speed ray by at most $\sigma(p)$ cannot cross the scene interior before the next sample. Underestimated bounds slow marching; overestimated bounds can skip a thin target. A Euclidean signed-distance expression computed from coordinate components is not automatically a valid intrinsic lower bound.

**Event detection:** a conservative marcher may approach a boundary without landing on it exactly. Declare termination using a distance tolerance together with a maximum step count and a separate accuracy estimate. At grazing tangencies, sign changes need not occur; a root finder assuming a sign flip may miss the event. Scene set operations such as unions use min of exact signed distances only under stated definitions; approximate lower bounds require their own proofs.

**Check:** scenes represented in two coordinate charts or quotient copies yield the same first physical hit and travel length. [Distance-marching considerations](distance-marching-acceleration.md).
