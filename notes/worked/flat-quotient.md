# Worked example: ray crossing an identified boundary

**Status:** derived-and-checked.  
**Model:** X=ℝ² with quotient X/ℤ², represented by D=[0,1)×[0,1).

Start at p=(0.9,0.2) with unit velocity v=(1,0). The lifted geodesic is γ(t)=(0.9+t,0.2). At t=0.1 it crosses the right face. Choose generator A(x,y)=(x−1,y) to restore a representative in D. The displayed representative changes from near (1,0.2) to (0,0.2), but the quotient path is continuous.

A is a translation, so dA is the identity. The ray velocity and an orthonormal observer frame remain numerically unchanged. Continue to time 0.6: the representative is (0.5,0.2), while the lift is (1.5,0.2).

For contrast, a quotient generator containing a rotation would require v←dA(v) and eᵢ←dA(eᵢ). Updating position alone would make subsequent rays use the wrong tangent frame.

Checks: the represented point stays in D; quotient projection of pre- and post-wrap positions agrees; speed remains one; accumulated lift coordinate preserves the unwrapped geodesic for debugging.
