# Christoffel coefficients are not tensor components

Define Γᵏᵢⱼ by ∇_{∂ᵢ}∂ⱼ=Γᵏᵢⱼ∂ₖ. For Levi-Civita,

Γᵏᵢⱼ = ½gᵏℓ(∂ᵢgⱼℓ + ∂ⱼgᵢℓ − ∂ℓgᵢⱼ).

This is local notation, not a tensor. Under x→y its transformation includes a second derivative of the coordinate map:

Γᵃ_bc(y)=(∂yᵃ/∂xʳ)(∂xⁱ/∂yᵇ)(∂xʲ/∂yᶜ)Γʳ_ij(x)
+(∂yᵃ/∂xʳ)(∂²xʳ/∂yᵇ∂yᶜ).

The last term lets Γ vanish in one chart and not another in a flat space. Polar coordinates on the Euclidean plane provide the check.

The difference of two connections is tensorial because those second-derivative terms cancel. Curvature is tensorial too. Eye can store local coefficients but must keep chart transition data as part of the representation.
