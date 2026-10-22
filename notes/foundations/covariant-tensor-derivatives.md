# Covariant differentiation of vectors, forms, and tensors

**Status: independently derived.** Use $\nabla_{\partial_i}\partial_j=\Gamma^k{}_{ij}\partial_k$, sum repeated indices, and place the derivative index first.

For $Y=Y^k\partial_k$, the derivative along $X=X^i\partial_i$ is
$(\nabla_XY)^k=X^i(\partial_iY^k+\Gamma^k{}_{ij}Y^j)$.
A one-form $\alpha=\alpha_jdx^j$ instead has
$(\nabla_i\alpha)_j=\partial_i\alpha_j-\Gamma^k{}_{ij}\alpha_k$.
The opposite signs are forced by the Leibniz rule for the scalar pairing:
$\partial_i(\alpha_jY^j)=(\nabla_i\alpha)_jY^j+\alpha_j(\nabla_iY)^j$.

For a $(1,1)$ tensor,
$(\nabla_iT)^a{}_b=\partial_iT^a{}_b+\Gamma^a{}_{ic}T^c{}_b-\Gamma^c{}_{ib}T^a{}_c$.
Each upper tensor slot gets a plus-connection term; each lower slot gets a minus-connection term. For Levi-Civita, $\nabla_kg_{ij}=0$ by metric compatibility, so lowering an index commutes with covariant differentiation.

**Worked algebraic check:** set $Y^j$ and $\alpha_j$ to arbitrary differentiable symbols. Substitute the two displayed component definitions into $\nabla_i(\alpha(Y))$. The two connection sums cancel after renaming their dummy indices. A symbolic package that fails this cancellation either reversed an index convention or mixed coordinate frames.

Exterior derivative $d\alpha$ is not interchangeable with $\nabla\alpha$: for a torsion-free connection, $(d\alpha)_{ij}=\nabla_i\alpha_j-\nabla_j\alpha_i$, which cancels the symmetric connection coefficients. The exterior derivative requires no metric. A Hodge star, in contrast, requires a metric and orientation.

[Emmy source files](https://github.com/mentat-collective/emmy/tree/5a2e1470087d41ec43e73d661bfceb941a6e8870/src/emmy/calculus) have symbolic covariant and form-field operations. Their results have not been executed as acceptance tests here.
