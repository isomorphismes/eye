# Functional Differential Geometry: semantics before rendering

**Status: bibliographic/contextual reading reference; book text not fully inspected for this corpus.**

Gerald Jay Sussman, Jack Wisdom, and Will Farr, *Functional Differential Geometry* (MIT Press, 2013); book home [MIT Press](https://mitpress.mit.edu/9780262019347/functional-differential-geometry/) and the open software heritage in [SICMUtils](https://github.com/sicmutils/sicmutils) and [Emmy](https://github.com/mentat-collective/emmy). Check editions and page numbering before attaching book page citations.

The design lesson is that geometry should be represented with operations on coordinate systems, vector fields, differential forms, tensors, and connections—not as untyped arrays whose interpretation depends on a rendering routine. One local chart gives real-coordinate components; changing charts must not change the geometric output. A vector field $Y$ assigns $Y(x)\in T_xM$; its covariant derivative $\nabla_XY$ is another section. The curvature operator measures the noncommutation of covariant differentiations after the Lie bracket correction.

Emmy's [connection.cljc](https://github.com/mentat-collective/emmy/blob/5a2e1470087d41ec43e73d661bfceb941a6e8870/src/emmy/calculus/connection.cljc) exposes metric-to-Christoffel operations, while [covariant.cljc](https://github.com/mentat-collective/emmy/blob/5a2e1470087d41ec43e73d661bfceb941a6e8870/src/emmy/calculus/covariant.cljc) represents Christoffel and Cartan connections. These are **inspected source-file facts**, distinct from any claim that their evaluated outputs have been checked on the eight Thurston metrics.

For Eye, reproduce mathematical contracts and small worked examples in original prose. Never copy the code as a shortcut: a symbolic engine can verify transformations but does not supply a numerical geodesic integrator, error control, GPU visualization, or a global quotient fundamental domain.

**Next questions for later research:** Can coordinate-frame transitions be first-class and checked? Can a symbolic connection produce numerical coefficient functions with a declared chart domain? Can a geometric invariant be stated independently of a compiler or an equation-simplification engine? [See architecture](../architecture/dependent-types.md).
