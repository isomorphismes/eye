# Eye first-implementation reference cases

**Specification, not a passing executable test report.** The geometry source
has a symbolic Levi-Civita cross-check; Idriç compilation, backend execution,
and numeric tests remain unverified. Keep these checks independent of the
implementation used to generate pictures.

## Analytic path and frame oracles

1. **Euclidean E³.** p=(0.8,0.25,0.4), v=(1,0,0), frame coordinate axes.
   At t=0.2 the lifted ray hits the unit-cube face x=1, the deck translation
   sends it to (0,0.25,0.4), and the differential is identity. Any frame change
   upon this translation is incorrect.
2. **S³ stereographic.** p=(0,0,0), v=(1/2,0,0) is unit-speed for the
   stereographic metric. Along the x-axis the exact coordinate is
   x(t)=tan(t/2) until approaching the omitted pole at t=π.
   No finite-chart solver should claim it stays valid across that pole.
3. **H³ upper half-space.** p=(0,0,1), v=(0,0,1); exact γ(t)=(0,0,eᵗ),
   γ'(t)=(0,0,eᵗ), squared metric speed 1. A transported x-axis has
   components eᵗ∂ₓ, NOT constant coordinate components.
4. **S²×R.** p=(0,0,0), v=(2/5,0,3/5) is unit-speed. The exact
   stereographic product ray is (tan(2t/5),0,3t/5) until its spherical
   chart pole. Vertical frame motion splits from the sphere factor.
5. **H²×R.** p=(0,1,0), v=(0,4/5,3/5) is unit-speed. The exact ray
   is (0,e^(4t/5),3t/5). Its hyperbolic and line speeds remain 4/5,3/5.
6. **Nil.** Use g=dx²+dy²+(dz−x dy)². At p=(0,0,0), v=(1,0,1),
   Γ(v,v)=(0,−1,0), so γ''(0)=(0,1,0). In the orthonormal body frame
   (u₁,u₂,u₃)=(1,0,1), initially u'=(0,1,0) and speed²=2.
7. **Sol.** At p=(0,0,0), v=(1,1,0), Γ(v,v)=(0,0,0);
   γ(t)=(t,t,0) is an exact geodesic of speed²=2 in
   g=e^(2z)dx²+e^(−2z)dy²+dz². Perturb z and check conserved
   momenta pₓ=e^(2z)x', pᵧ=e^(−2z)y'.
8. **SL̃₂(R).** At p=(0,1,0), pure lifted fiber velocity (0,0,1)
   gives γ(t)=(0,1,t) without any modulo 2π wrap. For orthonormal
   E₁ at this point, coordinate initial v=(1,0,−1), calculate
   Γ(v,v)=(0,1,0) and hence y''(0)=−1. A direct product H²×R model
   gives the wrong local coupling.

## Runtime contract checks

- Metric: positive/finite at a valid point, correct domain failure when
  z≤0 in H³ or y≤0 in H²×R and SL̃₂(R).
- Geodesic: x'=v, v'=-Γ(v,v); preserve intrinsic speed within a stated
  tolerance, report failure beyond it, compare one step against two halves
  and an analytic reference where available.
- Frame: E'=-Γ(v,E), all six Gram entries remain stable; moving coordinate
  components need not be constant.
- Camera: screen center is forward direction at the same base point, diagonal
  rays are locally metric-normalized, zero or non-finite norms refuse.
- Event ordering: nearest *positive* certified event, equal-parameter
  object/face causes refinement, unknown window never asserts clear,
  out-of-window/malformed event list refuses.
- Topology: after any face crossing, map p, v and every frame axis using
  the SAME isometry/differential; preserve full symbolic deck word.
  A flat-torus translation test is not proof of a hyperbolic face pairing.
- Handoff: geometry and chart version tags survive serialization, reject
  wrong tags and invalid points. Floating widths must never silently change.
- Rendering/device: separate host symbolic evidence, actual native code,
  GPU output, Android install, and physical observations. No receipt yet.

## Exact Christoffel comparison

For every one of the eight coordinate metrics, independently recompute

    Γᵏᵢⱼ = (1/2) gᵏˡ(∂ᵢgₗⱼ + ∂ⱼgₗᵢ − ∂ₗgᵢⱼ),

contract with independent symbolic vectors v and w, and simplify the
difference from `Eye.Models` component by component to zero. This was
performed on 2026-10-22, with all eight expressions agreeing. It is a
mathematical formula check, not a compiler/typecheck or runnable fixture.
