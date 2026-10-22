# Mathematical interfaces with point-indexed fibers

**Status: proposed type-level specification informed by standard bundle definitions and [Mathlib](../code-survey/lean-mathlib.md); not an implemented or accepted Idriç module.**

The fundamental invariant is that a tangent vector comes **with its point**:
$$\mathrm{RayState}=\sum_{x:M}T_xM.$$
The geodesic spray evolves this dependent pair, not two globally meaningful arrays. An oriented observer state similarly consists of a point $x$ and an oriented orthonormal frame in $(T_xM)^3$. A scene-hit point $s$ has its own normal and light/view directions in $T_sM$, so combining a light vector from $T_qM$ with an object normal from $T_sM$ requires a path and transport, or a separately computed arriving geodesic tangent.

## Proposed abstract operations

These are mathematical signatures (not literal code from Idriç, Lean, or any implementation):

| Operation | Input | Output | Geometric obligation |
| --- | --- | --- | --- |
| tangent fiber | $x:M$ | $T_xM$ | Base point cannot be erased |
| metric | $x$, $u,v:T_xM$ | $g_x(u,v):\mathbb R$ | Symmetric and positive definite |
| connection | local sections $X,Y$ | $\nabla_XY$ | Leibniz and linearity |
| geodesic flow | $(x,v):TM$, time $t$ | $(\gamma(t),\dot\gamma(t)):TM$ | Connection equation and speed |
| frame transport | path $\gamma:x\to y$, $F_x$ | $P_\gamma F_x\subset(T_yM)^3$ | Gram preservation |
| isometry differential | isometry $h$, $v:T_xM$ | $dh_xv:T_{h(x)}M$ | Metric preserved |
| chart transition | chart overlap and point | new coordinates and Jacobian | Same intrinsic geometric state |
| quotient action | deck generator and representative state | representative state | Commuting projection to $X/\Gamma$ |
| ray hit | state, scene, range | first parameter/point/direction | Earliest positive path event |

The mathematician's $\Sigma$-type suggests an implementation representation in which the tangent type depends on $x$. Numerical backends usually store tagged coordinates and perform chart/domain validation at runtime; the type design still makes those obligations visible.

## Idriç sketch, not a rewrite order

A possible conceptual interface uses a universe of points and a family $T$ over points. The following mathematical declarations use a notation analogous to dependent type theory:

    Point : Type
    Tangent : Point → Type
    RayState : Type
    RayState := Σ (x : Point), Tangent x
    MetricAt : (x : Point) → Tangent x → Tangent x → Real
    Differential : (h : Isometry) → (x : Point) → Tangent x → Tangent (h x)

A production Idriç signature would need its real syntax, proof/data erasure rules, unit-number type, chart indices and memory layout. Those are *future compiler work* and outside EYE-CORPUS-01.

**Key separation:** structural correctness of point-indexed operations does not imply any floating-point ODE step is accurate, that the source is free of quotient event mistakes, or that a scene can be shaded with Phong or physical optics.

[Foundational distinction](../foundations/points-and-tangent-types.md) · [numerical boundary](solver-boundaries.md).
