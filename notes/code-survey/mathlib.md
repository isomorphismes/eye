# Mathlib covariant derivatives and Levi-Civita connection

**Status:** source-inspected.  
**Path:** Mathlib/Geometry/Manifold/VectorBundle/CovariantDerivative/LeviCivita.lean, current fetched blob 251def93248af1238778fd73b4835f2742444216.  
**License stated in file:** Apache-2.0.

The file defines a Levi-Civita connection on a finite-dimensional Riemannian manifold as a covariant derivative that is metric-compatible and torsion-free. It states and proves the Koszul formula, uniqueness on differentiable vector fields, and constructs a noncomputable chosen connection.

Its most useful lesson for Eye is type shape: a tangent vector is indexed by its base point, and a covariant derivative produces a vector in the tangent fiber at that same point. It avoids local-frame construction by using tensoriality and the musical isomorphism.

Its limit is deliberate. This is formal Lean mathematics, with regularity hypotheses and noncomputable choice. It does not provide a floating-point chart integrator, SDF evaluator, quotient-domain traversal, shader, or renderer. A future Idriç interface can imitate its base-point discipline without claiming proof-kernel equivalence.
