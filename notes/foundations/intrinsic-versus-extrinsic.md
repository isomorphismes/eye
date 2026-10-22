# Living inside a geometry is not walking around its embedding

**Status: independently reasoned dimensional and metric distinction.**

The round surface $S^2\subset\mathbb R^3$ has an intrinsic **two-dimensional** tangent plane at every point. Walking along its surface is a 2D geodesic problem: locally one can move in two tangent directions. Its embedding in $\mathbb R^3$ supplies an extra ambient direction (the normal) that is **not available** to an intrinsic inhabitant. A 3D renderer showing a small globe from outside solves a different visibility problem.

An observer inside the round three-sphere $S^3\subset\mathbb R^4$ has a **three-dimensional** tangent space and a two-dimensional sphere of unit directions. Every field-of-view ray is a geodesic *inside $S^3$*. Its four Euclidean coordinates are an implementation model, not the ambient optical arena. The camera cannot rotate into an arbitrary fourth Euclidean direction or see a globe from "outside" unless a different ambient physical model is explicitly chosen.

Intrinsic curvature is determined by the metric and connection, while extrinsic curvature additionally uses an embedding and its second fundamental form. A cylinder embedded in $\mathbb R^3$ bends extrinsically but is intrinsically flat away from any cut or seam; its local metric can be unrolled without stretching. Conversely, hyperbolic 3-space is intrinsically curved even if represented by coordinates in $\mathbb R^3$ or a hyperboloid in Minkowski space.

**Test:** compare geodesic distance on a sphere with the Euclidean chord length. For angular separation $\alpha\le\pi$ on a unit sphere, intrinsic distance is $\alpha$, chord distance $2\sin(\alpha/2)$. Equality holds only infinitesimally. A Euclidean bounding sphere in embedding coordinates therefore need not bound geodesic distance in the intrinsic model.

Reference viewpoint: [Novello et al.](../sources/novello-eight.md) and [Coulon et al.](../sources/ray-marching-thurston.md). [Mesh algorithms](../code-survey/geometry-central.md) may operate intrinsically *on a 2D embedded surface* without solving the 3D in-space problem.
