# Novello–da Silva–Velho–Belolipetsky — How to See the Eight

**Status: inspected open-access arXiv HTML.**

Tiago Novello, Vinícius da Silva, Luiz Velho, Mikhail Belolipetsky, *How to see the eight Thurston geometries*, [arXiv:2005.12772v4](https://arxiv.org/abs/2005.12772), first submitted 26 May 2020, revision 14 September 2021. [HTML text](https://arxiv.org/html/2005.12772) if available for the selected version.

The expository purpose is useful: start with geometrization, explain why an intrinsic three-dimensional space is not the view of an embedded two-dimensional sheet, then formulate rendering as a color assigned to a point plus a tangent direction. The authors survey immersive approaches and the eight geometries rather than implement a single universal differential-geometric solver. Read together with [Scott](scott-geometries.md) for geometric classification and [Coulon et al.](ray-marching-thurston.md) for specific forward-flow and distance algorithms.

The observer at $x$ uses the unit tangent sphere $S_xM=\{v\in T_xM:g_x(v,v)=1\}$; a perspective or stereo camera maps image samples to directions in $S_xM$. A model's embedding into Euclidean coordinates is a *data representation*, not permission to propagate rays as straight ambient line segments. Hyperbolic ball and half-space pictures may show different Euclidean-looking trajectories for the same intrinsic geodesic.

**Extraction questions:** Which model has genuinely homogeneous isotropy? Which produces more than one geodesic from observer to object? What is the role of global topology versus local metric? Which pictures represent a quotient rather than its simply connected cover? Answers must name both the coordinate model and the rendering technique to avoid overgeneralization.

**Boundary:** The article's historical survey is not automatically a proof of numerical accuracy, a code license, or a tested implementation. Exact page/figure references must be added after checking the chosen final published edition rather than inferred from this arXiv view.
