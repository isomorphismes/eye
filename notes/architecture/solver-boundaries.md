# Split geometry, numerical integration, visibility, and pixels

**Status: proposed contracts, not implemented interfaces.** No runtime library, compiler, renderer, graphics API or engine is selected.

## 1. Mathematical model

A geometry specification comprises a manifold $M$, metric $g$, a connection (default $\nabla=\nabla^g$), chart/transition or homogeneous group representation, admissible coordinate regions, and their validity assumptions. For quotients, include a discrete isometry group $\Gamma$, a chosen fundamental-domain predicate and face pairings. A model may provide exact flow $\Phi_t$ or only a differential equation. These are separate capabilities; "has Christoffels" cannot be equated to "can show a universe."

## 2. Integration with explicit error contracts

A geodesic propagator accepts $(x,v)$ plus a requested length $\ell$ and tolerances. It returns an updated **base point plus tangent vector**, and error diagnostics. An analytic flow should satisfy the geodesic IVP and group law; a numerical flow should expose truncation, roundoff and chart-crossing conditions rather than fake exactness. A frame propagator additionally transports $F$ or a vector from $T_xM$ to the new fiber. Candidate invariants include
$$g_{\gamma(t)}(\dot\gamma(t),\dot\gamma(t))=g_x(v,v),\qquad
g_{\gamma(t)}(P_tu,P_tw)=g_x(u,w).$$
Do not confuse preserving an invariant numerically with obtaining a globally correct solution.

## 3. Geometric scene and ray events

A scene is a closed subset or a collection of intrinsic surfaces with known local membership/hit rules, not necessarily Euclidean triangles. A safe step service returns a conservative lower bound $0\le\rho(p)\le d_g(p,S)$. A shape intersection service returns the first parameter of a hit **along a given geodesic**, with surface normal at that hit. Events for coordinate exits, quotient faces and scene boundaries must compete in one ordered ray parameter. Intervals with unknown accuracy must be refined, not silently skipped.

A quotient service applies deck maps $(x,v,F)\mapsto(hx,dh_xv,dh_xF)$ and identifies copies of the same scene, with an optional accumulated deck word for replay and provenance.

## 4. Optical and display model

Separate the geodesic from the claim that it represents a photon trajectory. The first layer picks an optical propagation rule (Riemannian geometric rays for exploratory pictures, or a physically derived optical/Lorentzian model for physical questions). The next layer produces local incidence, shadows, multiple image branches, area attenuation and chosen BRDF. The last layer samples image directions, integrates pixels and presents frames. None of those presentation decisions changes the metric or the connection.

## 5. Capability matrix

| Source family | Formal specification/proof | Symbolic identities | Numeric surface paths | Intrinsic 3D forward rays | GPU pictures |
| --- | --- | --- | --- | --- | --- |
| Mathlib / Lean fork | yes, specific declarations | formal expressions | not its basic role | not a demonstrated runtime integrator | no |
| Emmy / SICMUtils / Egison | not proof assistant guarantee | yes | not a demonstrated mesh tracer | not demonstrated complete 3D system | no |
| geometry-central / DiGeo | not general formal proofs | limited | yes, 2D mesh surfaces | no general 3-manifold flow | not a Thurston renderer |
| JuliaManifolds | no formal kernel proofs | some numeric metrics | model-dependent | some exact/numeric model operations, not an eight-space walkthrough | no |
| Coulon et al. VR program | paper-level derivations | manually formulated shaders | not its primary focus | yes, eight bespoke implementations | yes |

These classifications describe **inspected capabilities**, not tested performance. The [surveys](../code-survey/thurston-raymarcher.md) link concrete source files.

## 6. Architectural non-goals

No mandatory C++, Python, JavaScript, shader, raylib, sokol or other dependency follows from writing a note about an existing implementation. No automatic license transfer follows from reading a GPL shader. No bulk port of libraries into Idriç is part of this research corpus. First establish mathematical invariants, source provenance, and reproducible check conditions.

[Typed specification](dependent-types.md) · [verification](verification-contract.md) · [reuse](reuse-and-licensing.md).
