# Worked example: a hyperbolic geodesic in the upper half-plane

**Status:** derived-and-checked.  
**Space:** H²={(x,y):y>0}, metric ds²=(dx²+dy²)/y².

The metric has g_xx=g_yy=y^(−2). The nonzero Christoffel symbols are Γˣ_xy=Γˣ_yx=−1/y, Γʸ_xx=1/y, and Γʸ_yy=−1/y.

Take initial point (0,1) and velocity v=(0,1). Its metric norm is one. The x equation keeps x(t)=0. The y equation is y¨−(ẏ²/y)=0, solved by y(t)=e^t. Thus γ(t)=(0,e^t) is a unit-speed vertical geodesic.

Let V(t)=a(t)∂ₓ+b(t)∂ᵧ. Parallel transport DV/dt=0 along γ gives ȧ−a=0 and ḃ−b=0, so a=Ae^t and b=Be^t. Its metric norm is A²+B², constant. In particular V=e^t∂ₓ is a unit horizontal parallel vector along γ.

Checks: speed ẏ/y=1; g(V,V)=1 when A=1,B=0; hyperbolic distance from (0,1) to (0,e^t) is |t|.
