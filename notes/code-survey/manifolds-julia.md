# Manifolds.jl and ManifoldsBase

**Status:** source-inspected at module source and public interface documentation.

The inspected module exports point-indexed TangentSpace, exp, log, geodesic, parallel_transport_to, curvature operations, Christoffel-symbol functions, volume density, and hooks named solve_chart_exp_ode, solve_chart_parallel_transport_ode, and solve_chart_jacobi_field. It supports spheres, hyperbolic models, Heisenberg matrices, product manifolds, and many optimization-oriented examples.

This gives Eye a broad numerical vocabulary and an example of separating manifold, point, tangent vector, metric, transport method, and chart solver. It also calls attention to injectivity-radius boundaries for volume density.

Manifolds.jl is a Julia numerical library, not a formal proof system or complete Thurston renderer. Its generic API has more scope than Eye needs. Future reuse should select a tiny semantic subset rather than reproduce its hierarchy.
