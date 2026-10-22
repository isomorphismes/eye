# Verification and acceptance contracts

**Scope: one-off notes review and verification ledger.** The task needs no Flexible Pipes dispatch. Distinguish demonstrable local mathematics and source checks from unrun numerical solvers, independent human/AI-CI review, or renderer acceptance. A merged documentation commit means the notes entered the repository, not that every formula has a machine-checked formal proof.

## Required static checks

- Every README link into notes resolves to a tracked file, and every note links to at least one explanation or source where appropriate.
- Each of the eight geometries declares a **specific metric convention**, connection or computable connection rule, ray state and flow, isometry/quotient considerations, observation example, and numerical limits. A source-specific normalization must not silently be imported into another local metric.
- Christoffel transformation formulas include the inhomogeneous second-derivative term; a non-coordinate frame's brackets are included in Koszul. No claim that $\Gamma$ itself is a tensor.
- Four worked examples specify chart domain, metric, initial values, equations, invariants and exact expected answers, distinguished from any floating-point output.
- Every third-party source claim has a provenance level (inspected exact file/section, metadata-only, independently derived, or unverified). Link to pinned source revision; mark any still-unknown licenses instead of guessing.

## Independent mathematical test matrix

| Study | Symbolic/exact oracle | Future numerical test |
| --- | --- | --- |
| Polar Euclidean plane | $\Gamma^r{}_{\theta\theta}=-r$, $\Gamma^\theta{}_{r\theta}=1/r$, $K=0$; radial $r=2+t$ | compare geodesic residual, speed and parallel vector norm |
| Round sphere | equator $\theta=\pi/2,\phi=t$; latitude $\theta=\pi/3$ has holonomy angle $\pi\bmod2\pi$ | compare orthonormal frame return, geodesic/non-geodesic residual |
| Hyperbolic half-plane | $x=0,y=e^t$, $K=-1$, $W(t)=e^t W_0$ in coordinate components | speed, transport and reversibility for bounded $t$ |
| Flat three-torus | face crossing at $t=1/5$, wall hit at $t=3/10$ | event ordering, deck action, seam continuity and first-hit identity |
| Nil / Sol / SL2 | exact frame Koszul and coordinate-curvature calculation at identity: $K_{12},K_{13},K_{23}=(-3/4,1/4,1/4),(1,-1,-1),(-7/4,1/4,1/4)$; explicit IVPs | compare numerical flow with exact rays, metric speed, and quotient differential |

Here **oracle** means a mathematical expression available to check; no listed future numerical run has happened just because this table is committed. The three Lie-frame sectional-curvature triples were independently computed using both frame brackets/Koszul and coordinate-metric curvature, with exact arithmetic, during the authoring review. [Detailed equations](../worked/lie-group-curvature.md).

## One-off repository review boundary

The user explicitly waived Flexible Pipes for this one-off research corpus. The permitted completion route is a normal GitHub documentation PR reviewed for substantive content, checked relative links, verified bibliography/coordinates, and an ordinary merge. **No Flexible Pipes envelope, Kitchen/Ike receipts, AI-CI admission or graphics build are required for this one-off merge.** Do not report independent AI-CI or external mathematical review unless it actually runs; do not describe a documentation merge as runtime qualification.

Independently compare derivations against another symbolic implementation **after** mapping coordinate and curvature signs. Suggested exact checks: direct metric differentiation, curvature antisymmetry, transport ODE residuals, energy invariants and quotient-event arithmetic. For a numerical implementation, test chart transitions, signed/estimated distances, integration step convergence, nontrivial deck maps and conjugate/cut locus behavior.

## Release criteria

An eventual renderer must add device/runtime tests and visible observation experiments, none of which are part of the **notes-only** assignment. Accept corpus quality separately from future optical or animation completeness. The research branch must not introduce a numerical package, graphics dependency or mandatory build arrangement.

[Source status](../sources/provenance-and-licenses.md) · [mathematical/numerical boundary](solver-boundaries.md).
