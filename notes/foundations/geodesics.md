# Geodesics and the initial-value problem

A geodesic is a path γ whose velocity transports itself: Dγ̇/dt=0. In coordinates,

d²xᵏ/dt²+Γᵏᵢⱼ(x)(dxⁱ/dt)(dxʲ/dt)=0.

Given p∈M and v∈TₚM, local ODE theory gives γ(0)=p and γ̇(0)=v. Levi-Civita transport preserves speed, so unit-speed parameter equals length until global obstructions matter.

A ray propagator needs more than coordinates: a valid chart or group representation, initial vector in its correct fiber, a numerical or closed-form method, error policy, and chart/domain events. A closed formula can still be ill-conditioned; a stable integrator can still pick the wrong shortest branch after a cut locus.

The exponential map packages forward motion: expₚ(v)=γᵥ(1). Forward exp is not global inversion.
