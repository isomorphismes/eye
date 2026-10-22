# What a metric gives, and what it does not

A Riemannian metric assigns an inner product gₚ to each TₚM. It defines length, angle, area, and speed. In coordinates g=gᵢⱼ dxⁱdxʲ.

A metric compares vectors only at one point. To differentiate a field V along γ one needs a connection ∇. The Levi-Civita connection preserves g and has zero torsion. It is derivable from g in coordinates, but an arbitrary affine connection need not arise from any metric.

Christoffel coefficients determine local ODEs only after a chart and connection are selected. They do not identify scene objects, define a quotient group, order intersections, or specify physical optics.

Mathlib’s inspected Levi-Civita source formalizes this: a covariant derivative is Levi-Civita when metric-compatible and torsion-free; the Koszul formula gives uniqueness on differentiable vector fields.
