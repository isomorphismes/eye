# Functional Differential Geometry, SICMUtils, and Emmy

**Status:** source-inspected for Emmy README and public namespaces; book chapter audit open.  
**Sources:** [Emmy](https://github.com/mentat-collective/emmy), [FDG executable book](https://github.com/mentat-collective/fdg-book), [covariant namespace](https://emmy.mentat.org/src/emmy/calculus/covariant.html).

Emmy is a Clojure/ClojureScript descendant of scmutils. Its README lists symbolic computation, automatic/numerical/symbolic differentiation, numerical integration, and differential-geometry investigations. Public namespaces expose connection and covariant-derivative machinery. The executable FDG book supplies a practical route from coordinate functions and basis fields to Christoffel expressions.

Its value to Eye is symbolic derivation and comparison: derive Γᵏᵢⱼ from a metric, simplify a geodesic ODE, and check a coordinate calculation. Its boundary matters: it does not choose a chart atlas, control error through a cut locus, find scene intersections, or render a quotient world. A future bridge should use narrow mathematical data, not embed a Clojure runtime.
