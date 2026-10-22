# A metric measures; a connection differentiates

**Status: independently derived, metric convention positive definite.**

A Riemannian metric assigns a positive-definite bilinear form $g_x:T_xM\times T_xM\to\mathbb R$ smoothly in $x$. It measures local length: $L(\gamma)=\int\sqrt{g_{\gamma(t)}(\dot\gamma,\dot\gamma)}\,dt$. An affine connection $\nabla$ differentiates vector fields along vector fields, producing $\nabla_XY$. It obeys $\nabla_{fX}Y=f\nabla_XY$ and $\nabla_X(fY)=X(f)Y+f\nabla_XY$.

A metric alone does not declare every possible connection to be identical. The special **Levi-Civita connection** is uniquely characterized by zero torsion and metric compatibility:
$T(X,Y)=\nabla_XY-\nabla_YX-[X,Y]=0$ and
$Xg(Y,Z)=g(\nabla_XY,Z)+g(Y,\nabla_XZ)$.
Equivalently, the Koszul formula is
$2g(\nabla_XY,Z)=Xg(Y,Z)+Yg(Z,X)-Zg(X,Y)-g(X,[Y,Z])+g(Y,[Z,X])+g(Z,[X,Y])$.
The brackets and signs matter in non-coordinate frames.

For coordinate fields, $[\,\partial_i,\partial_j\,]=0$ and
$\Gamma^k{}_{ij}=\tfrac12g^{k\ell}(\partial_i g_{j\ell}+\partial_j g_{i\ell}-\partial_\ell g_{ij})$.
This formula constructs Levi-Civita *components* from $g$ on a chart; singular coordinates may produce large coefficients where geometry remains regular. In an orthonormal Lie-group frame, Koszul and the structure constants are often simpler.

Other connections are legitimate for other tasks (e.g., connections on principal bundles, with torsion, or in optics). Do not treat a camera's orientation matrix as a connection. For an actual ray equation, specify $(M,g,\nabla)$ or at least $g$ plus the declaration that $\nabla$ is Levi-Civita.

[Formal uniqueness in Mathlib](https://leanprover-community.github.io/mathlib4_docs/Mathlib/Geometry/Manifold/VectorBundle/CovariantDerivative/LeviCivita.html); [geodesics](geodesic-initial-value.md).
