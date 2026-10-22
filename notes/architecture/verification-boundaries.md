# Verification boundaries

Keep these evidence classes separate.

1. **Derived calculation:** equation follows from stated metric and convention.
2. **Symbolic check:** a CAS reproduces an algebraic identity.
3. **Numerical propagation:** a finite-precision method preserves stated invariants within tolerance.
4. **Scene intersection:** a chosen object model and ray predicate agree on examples.
5. **Rendered image:** a backend maps ray results to pixels.
6. **Physical display behavior:** an actual device presents those pixels.

A green symbolic identity does not prove quotient traversal. A visually plausible image does not prove geodesic propagation. An exact closed-form test does not prove an arbitrary scene SDF is conservative.

Each geometry module should publish its invariant checks: metric speed, point constraint, frame orthonormality, group law, quotient wrap differential, and known cut-locus limitations. Each rendering integration should add its own independent evidence.
