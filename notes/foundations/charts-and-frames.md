# Charts, coordinate vectors, and observer frames

A chart x=(x¹,…,xⁿ) assigns local coordinates. Differentiating its inverse gives coordinate tangent vectors ∂ᵢ. They form a local frame but are usually neither orthogonal nor unit length.

When y=y(x), the same tangent vector transforms by vᵃ_y=(∂yᵃ/∂xⁱ)vⁱ_x. Covectors use the inverse Jacobian. This difference matters for gradients, normals, and forms.

An observer uses an orthonormal frame (e₁,e₂,e₃) in TₚM. A perspective screen sample (a,b) maps to u(a,b)=normalize(e₃+a e₁+b e₂). The expression is geometric only because all three basis vectors share p and normalize uses gₚ.

A head turn changes the frame at fixed p. A walk changes p and needs a transport or reset rule. Coordinate frames help equations; observer frames help perception. They may coincide in a convenient model, but Eye must not assume it.
