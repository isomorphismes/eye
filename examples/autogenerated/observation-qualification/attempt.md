# Program attempt: observation qualification

Status: PARTIAL — host compilation/execution passes; direct native and Android
acceptance remain unverified.

## Purpose and intended behavior

Qualify and extend Eye's existing point-indexed observation implementation,
rather than replace it with another engine. Full pins, test budgets, execution
boundaries and the reusable command are in ../../../../docs/QUALIFICATION.md.

## Type-system sketch

Points retain geometry and chart. Tangent point and Cotangent point retain
their base point and distinct roles. A framed ray packages one point, velocity
and three axes at that point. UnrelatedFiber, VectorAsCovector and
CovectorAsVector must fail for their intended type mismatch after PositiveFiber
passes. Raw chart reattachment remains explicit, never an implicit fiber cast.

Production scalar carriers are Scalar SinglePrecision and Scalar SignedE4M3.
Double belongs only to literal/reference conversion and the independent
symbolic/numerical oracle. Every production arithmetic operation rounds to
Float32 or signed E4M3FN.

Pure checks return Bool; the main action prints each result and exits nonzero
on any failure. Rendering consumes the same observer, propagation, event,
quotient and lighting modules. It writes pixels, not an alternative renderer.

## Invariants, tolerances and failures

Before execution, Float32 component/speed/Gram budgets were set to 2e-5 and
the independent finite-difference connection comparison to 2e-6 with spacing
1e-5. The SL2 midpoint comparison uses 1,000 binary64 steps of 0.00025 and
component budget 5e-5. Spherical pole traversal uses coordinate budget 5e-5
and accumulated Gram budget 1e-4. H3 convergence compares requested steps
0.5 and 0.25 at time 1: finer error must be below one quarter of coarse error
and below 2e-5. These are numerical checks, not rigorous global error bounds.

Zero/nonfinite/invalid-domain directions, overflow, unrepresentable progress,
unknown/tied events, invalid crossings and exhausted refinement must refuse.
E4M3 exact binary-fraction torus fixtures execute at a deliberately stated
0.25 invariant budget. No fine Float32 tolerance is silently rounded to zero
and presented as an E4M3 test.

## Actual Idriç attempt

Compiler: isomorphisms/Idric
0e8cfdd1106ebdeffd01b6c519880ea3afc7dc35.

The original source failed on parameterized data syntax and dependent local
aliases. Constructors now bind their parameters explicitly; fiber-preserving
record patterns and direct projections repair the dependent constraints.
All 19 packaged modules are accepted. The host executable uses the maintained
compiler's built-in Chez generator with only scalar primitives in C.

The independent LC oracle is an actual Idriç program. SymPy is used through
checked Ithon only for the separate symbolic algebra calculation; it does not
execute Eye or generate its pixels. Both the written symbolic inputs and a
deliberately corrupted control are committed.

## Preserved failures and language boundaries

InterpolationBoundary.idric preserves a small failed probe: the maintained
parser rejects a qualified constructor declaration such as Interop.Wrap.
It is excluded from the application packages and is not a required language
change or a claim that Eye uses that unsupported feature.

The coverage checker also refused some nested multi-argument coordinate
patterns in the independent test program. Explicit single-coordinate
projections express the same reference calculation and compile without
weakening totality or renaming the program to ordinary Idris.

The compiler advertises -Xcheck-hashes but rejects its invocation as disabled.
Its package clean path also did not remove the actual cached TTC files in this
checkout. The qualification entrypoint therefore owns an fresh isolated generated
build directory on each invocation rather than claiming an effective clean
from a zero exit code alone.

The current Ithon frontend requires explicit foreign result type boundaries
and does not accept the ordinary list concatenation/string-membership forms
tried by the orchestration program. The final .pi file uses typed foreign
method results and checked operations; it never bypasses the Ithon frontend.

## Fallback

No RefC, handwritten C geometric engine, ordinary-Idris translation, Java or
Gradle fallback. Host Chez execution remains separately labeled from the
requested direct native and Android targets.

## Next target capability

The direct x86 backend at 00716e7f07176438960cca6b2b1ec692249ebb17 and direct
DEX backend at 9271de485f64d225d3dca05afa8504cc3a896de6 lack Eye's needed
floating/compound/call surface. Their repair is independent work. Acceptance
must lower the actual checked Eye program, retain precision, invoke only its
declared primitive boundary and execute the resulting target artifact.
A successful host image cannot substitute for that test.
