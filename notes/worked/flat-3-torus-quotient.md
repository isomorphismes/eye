# Flat three-torus: crossing an identified face

**Status: independently derived exact quotient calculation.** This is a complete hand-checkable scene intersection in a compact flat three-dimensional universe, not a graphical screenshot.

## 1. The global geometry

Let $X=\mathbb R^3$ with $g=dx^2+dy^2+dz^2$, and let $\Gamma=\mathbb Z^3$ act by translations
$$n\cdot(x,y,z)=(x+n_1,y+n_2,z+n_3).$$
The quotient $M=\mathbb R^3/\mathbb Z^3$ is the flat three-torus. Use fundamental domain $D=[0,1)^3$, identifying each coordinate at 1 with 0. The quotient is intrinsically three-dimensional and flat; a depicted "doughnut" embedded in Euclidean $\mathbb R^3$ would be a different metric surface.

At every point, the tangent fiber is three-dimensional. A translation $h_n$ is an isometry with differential $dh_n=I$. Consequently an ordinary Cartesian vector and an orthonormal frame retain the same components when translated between representative cells.

## 2. Ray initial state and exact flow

Choose observer point $p=(4/5,1/4,2/5)$, unit direction $v=(1,0,0)$ and initial frame $(e_x,e_y,e_z)$. The lifted unit-speed geodesic is
$$\widetilde\gamma(t)=(4/5+t,\;1/4,\;2/5),\qquad t\ge0.$$
The quotient ray is $\gamma(t)=[\widetilde\gamma(t)]$ and keeps speed 1. The first paired face reached is $x=1$ at
$$t_1=1-4/5=1/5.$$
Apply the deck map $h(x,y,z)=(x-1,y,z)$: the new representative is $(0,1/4,2/5)$ and the transported direction and three frame axes are unchanged because $dh=I$. This "teleportation" is a coordinate-representative change, not a discontinuity of the physical quotient geodesic.

## 3. Explicit target and visibility order

Put an opaque, two-sided quotient wall at
$$S=\{[x,y,z]\in M:x\equiv1/10\pmod1\}.$$
Its lift consists of the parallel planes $x=n+1/10$ for all integers $n$. The first hit is the smallest $t>0$ such that $4/5+t=n+1/10$. Equivalently
$$t=n+1/10-4/5=n-7/10.$$
The minimum admissible integer is $n=1$, so
$$t_*=3/10,\qquad \widetilde\gamma(3/10)=(11/10,1/4,2/5).$$
In the chosen domain the hit is at $(1/10,1/4,2/5)$, and it occurs **after** the crossing: from the translated origin $(0,1/4,2/5)$ at $t=1/5$, an additional distance $1/10$ reaches the wall. The next equivalent crossing occurs at $t_*=13/10$. An infinite ray can hit the same physical wall repeatedly; it is only the earliest hit that is visible through an opaque surface.

A renderer that stops at the fundamental face would report no wall, which is wrong. A renderer that only tests the $x=1/10$ plane in the initial lift also reports no forward hit; including deck copies fixes the error.

## 4. Independent checks and limits

(i) $g(v,v)=1$ before and after the identification; (ii) $dh$ is orthogonal and the frame remains orthonormal; (iii) the geodesic is globally continuous in the quotient; (iv) first face event is $t_1=0.2$, first wall hit $t_*=0.3$, next hit $1.3$; (v) $\gamma(t+1)=\gamma(t)$ in the quotient for this ray. These are exact rational equalities, not numerically measured outcomes.

Other deck actions, such as Nil translations that shear a coordinate, generally have nontrivial differentials. Do **not** extrapolate $dh=I$ beyond the flat translation example.

[Quotient semantics](../seeing/quotients-and-teleportation.md) · [Euclidean reference](../thurston/euclidean.md) · [observer-local rays](../seeing/observer-local-rays.md).
