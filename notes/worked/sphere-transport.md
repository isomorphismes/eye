# Worked example: sphere geodesic and loop transport

**Status:** derived-and-checked.  
**Space:** unit S²⊂ℝ³ with induced metric.

Let γ(t)=(cos t,sin t,0), 0≤t≤2π, the equator. Its velocity γ̇(t)=(−sin t,cos t,0) has unit length. Its ambient acceleration is −γ(t), normal to S², so the tangential acceleration is zero: γ is an intrinsic geodesic.

The constant ambient vector N=(0,0,1) lies in T_{γ(t)}S² for every t and has derivative zero, hence its tangential derivative is zero. N is parallel along the equator. So is γ̇. This provides a full parallel frame along the equator.

For holonomy use the loop made of: north pole down a meridian to the equator, east along a quarter equator, then north along a second meridian. Parallel transport preserves the angle with each geodesic side. Along a meridian a north–south aligned vector remains aligned; after the three sides the vector is rotated by π/2 relative to its initial compass direction. The rotation equals the spherical triangle’s area on the unit sphere.

Checks: g(γ̇,γ̇)=1; γ·γ̇=0; every transported vector keeps norm; the loop’s nonzero holonomy demonstrates path dependence.
