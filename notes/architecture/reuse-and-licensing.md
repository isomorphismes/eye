# Reuse existing mathematics without importing a renderer

**Status: design and source-rights study, not a dependency change.** External software sources were inspected at pinned commits listed in the [source ledger](../sources/provenance-and-licenses.md).

A useful reuse decision begins with its **mathematical input and output**. Mathlib's connection definitions and the Walnut & Burgundy Lean fork can give machine-checked statements about point-indexed tangent spaces and metric-compatible transport; they are not a GPU stepping service. Emmy and SICMUtils may be symbolic cross-checkers for Christoffels and curvature; Egison offers indexed tensor notation, not a required argument parser. geometry-central and DiGeo solve paths on a two-dimensional triangulated surface; their algorithms can help when a future scene itself has intrinsic surface geometry, but they do not compute three-dimensional geodesics inside Sol.

JuliaManifolds' sphere and hyperbolic metric operations are numerical reference cases, not proof of every Thurston flow. The Coulon–Matsumoto–Segerman–Trettel program is a direct reference for intrinsic eight-geometry ray marching and quotient imaging; its GPL-3.0-or-later code must not be transplanted into an unrelated project without appropriate license and distribution review.

## What to record before binding a library

For any imported operation, fix (1) snapshot SHA and file/function, (2) domain, base point and units, (3) metric and Christoffel sign/index conventions, (4) exactness or error contract, (5) dependency/transitive license obligations, (6) tests genuinely executed, and (7) device/compiler portability. A module name by itself supplies none of this evidence.

A possible service boundary exchanges coordinate points and tangent components **together with a chart/model identifier** and keeps transformation rules explicit. More sophisticated dependent types can strengthen the contract in future Idriç work, but EYE-CORPUS-01 creates no compiler project. When a library requires Python, JavaScript, Julia, Lean or C++, Eye can use it as a research oracle in its own environment without making it a runtime dependency of Eye or a mobile renderer.

## Legal and scholarly boundaries

- Write original exposition with citation and exact equation conventions; do not copy whole books or published PDFs into the repository.
- Source code licenses govern copied/adapted code; they are distinct from rights in academic article text or figures.
- Link to immutable GitHub commits rather than copying GPL or MIT code as documentation. If code ever is vendored, preserve required notices and independently review compatibility.
- Discrete models, numerical integrators, symbolic algebra, and formal proof systems can coexist through *narrow documented interfaces*; moving all into one implementation language is not an acceptance condition.

This is a bibliography and interface design task only. No library was vendored, no external implementation was imported, and no runtime dependency was added by these notes.

[Code surveys](../code-survey/thurston-raymarcher.md) · [architecture](solver-boundaries.md) · [license/status ledger](../sources/provenance-and-licenses.md).
