# geometry-central and Keenan Crane collaborators

**Status:** source-inspected: README and public trace-geodesic/vector-heat documentation.  
**Core API observed:** traceGeodesic(IntrinsicGeometryInterface, SurfacePoint, Vector2, TraceOptions).

geometry-central is C++ geometry processing focused on surface meshes. Its tracing routine advances a straightest path across a ManifoldSurfaceMesh from a point and tangent 2-vector, returning endpoint, path points, ending direction, and boundary outcome. Its vector heat solver offers parallel transport and logarithmic maps on intrinsic surface geometry.

This is important evidence for an interface: an output direction should be explicitly a direction at the ending point, and boundary events deserve first-class status. It also demonstrates that intrinsic calculations need not depend on an ambient embedding.

The boundary is sharp: a two-dimensional triangular mesh is not a general smooth three-dimensional homogeneous world. Mesh edges, triangle transitions, and mesh boundary are not quotient generators or arbitrary cut loci. Its C++ and Eigen dependencies are not being introduced into Eye.
