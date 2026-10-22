# Verification and acceptance contracts

**Status: proposed acceptance criteria; not an execution log.** This file exists to prevent an indexed notes branch being presented as an independently accepted renderer or as mathematical proof beyond what the written derivations support.

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
| Nil / Sol / SL2 | orthonormal-frame Koszul, speed, homogeneous isometry | cross-check metric convention, frame brackets, flow residual and quotient differential |

Here **oracle** means a mathematical expression available to check; no listed future numerical run has happened just because this table is committed.

## Runtime execution boundary

No GitHub commit alone certifies Flexible Pipes admission. A proposal must have an admitted job envelope, maintained Kitchen/Ike implementation, source-identified receipts and separate **AI-CI** acceptance evidence before stating accepted. A draft pull request is merely a review location and should not be misreported as merging or shipping.

Independently compare derivations against another symbolic implementation **after** mapping coordinate and curvature signs. Suggested exact checks: direct metric differentiation, curvature antisymmetry, transport ODE residuals, energy invariants and quotient-event arithmetic. For a numerical implementation, test chart transitions, signed/estimated distances, integration step convergence, nontrivial deck maps and conjugate/cut locus behavior.

## Release criteria

An eventual renderer must add device/runtime tests and visible observation experiments, none of which are part of the **notes-only** assignment. Accept corpus quality separately from future optical or animation completeness. The research branch must not introduce a numerical package, graphics dependency or mandatory build arrangement.

[Source status](../sources/provenance-and-licenses.md) · [mathematical/numerical boundary](solver-boundaries.md).
