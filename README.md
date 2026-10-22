# Eye — seeing from inside a geometry

Eye is a mathematical research corpus for a question graphics libraries normally conceal: **what does an observer at a point of a curved space see?** The answer begins with a point, a tangent frame at that point, and a rule that advances both along a ray. It does not begin with a global direction vector or a rendering API.

This first corpus separates four kinds of claim.

- **Geometry:** a metric, connection, geodesic flow, quotient action, and point-indexed direction spaces.
- **Observation:** an observer frame gives screen directions; geodesic propagation gives candidate light paths.
- **Computation:** a closed form, symbolic calculation, numerical integrator, mesh routine, or distance underestimator has a stated domain.
- **Rendering:** a graphics backend is a later consumer of the preceding data, not an owner of the mathematics.

The central state is a dependent pair:

~~~text
RayState ≃ Σ (point : M), T_point M
~~~

A direction at one point and a direction at another point are elements of different vector spaces. A coordinate triple represents both only after a chart or frame choice. Parallel transport compares them along a specified path.

## Read this corpus

1. [Sources and evidence](notes/sources/README.md).
2. [Foundations](notes/foundations/README.md).
3. [Seeing](notes/seeing/README.md).
4. [Eight Thurston geometries](notes/thurston/README.md).
5. [Code survey](notes/code-survey/README.md).
6. [Worked checks](notes/worked/README.md).
7. [Architecture](notes/architecture/README.md).

## Corpus status

The documents are original exposition. Each source note labels claims **source-inspected**, **metadata-only**, **derived-and-checked**, or **open**. The corpus records neither an executable renderer nor a claim that a formal proof library is a numerical raytracer.

| Subject | Entry point |
| --- | --- |
| Point-indexed tangent spaces and frames | [base points](notes/foundations/basepoints.md) |
| Christoffel symbols and chart changes | [Christoffel coefficients](notes/foundations/christoffel-symbols.md) |
| Geodesics, transport, curvature | [geodesics](notes/foundations/geodesics.md) |
| Observer and viewing rays | [observer frame](notes/seeing/observer-frame.md) |
| Quotient worlds | [identified boundaries](notes/seeing/quotients.md) |
| All eight geometries | [geometry map](notes/thurston/README.md) |
| Pencil-and-paper checks | [worked examples](notes/worked/README.md) |
