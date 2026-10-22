# Worked example: flat plane in polar coordinates

**Status:** derived-and-checked.  
**Space:** ℝ² minus the origin, coordinates (r,θ), r>0.  
**Metric:** ds²=dr²+r²dθ².

From g_rr=1, g_θθ=r², and g_rθ=0, the Levi-Civita formula gives the only nonzero coefficients:
Γʳ_θθ=−r and Γ^θ_rθ=Γ^θ_θr=1/r.

A unit-speed radial ray has θ(t)=θ₀ and r(t)=r₀+t. The r equation becomes r¨=0 and the θ equation is automatic. A nonradial geodesic obeys
r¨−r θ̇²=0 and θ¨+2ṙθ̇/r=0.
The second equation says r²θ̇ is constant: angular momentum in polar coordinates.

Curvature check: the Riemann component Rʳ_θrθ is
∂_r(−r) + Γʳ_θθΓ^θ_rθ = −1 + 1 = 0.
Thus nonzero Christoffel coefficients do not imply curvature. The coefficients describe a rotating/stretching coordinate basis; the plane remains flat.

Numerical check: integrate the equations with r₀=2, θ₀=0, ṙ₀=0, θ̇₀=1/2. Transform to Cartesian x=r cosθ, y=r sinθ. The result must lie on the straight Euclidean line with initial velocity (0,1); speed ṙ²+r²θ̇² stays 1.
