# Non-Euclidean VR: reference implementation of eight-space ray marching

**Status: paths/functions/package metadata inspected at [snapshot 5e382dc](https://github.com/henryseg/non-euclidean_VR/tree/5e382dc7bc1e785ba225761d10f6a9f480e48556). No build or GPU execution performed. License: GPL-3.0-or-later (README).**

This is the closest existing application to Eye's eventual observational goal, but Eye must study rather than copy it. [src/core/geometry](https://github.com/henryseg/non-euclidean_VR/tree/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/core/geometry) includes **Point.js, Vector.js, Isometry.js, Position.js**. The per-geometry sources live under **src/geometries/{euc,sph,hyp,s2e,h2e,nil,sol,sl2}/geometry/shaders/{part1.glsl,part2.glsl}**. The paired top-level entry modules **src/thurstonEuc.js** through **src/thurstonSol.js** expose geometry-specific builds; scenes and renderers are assembled in the core.

In **part1.glsl**, each examined model has **applyIsometry, geomDot, initFlow** and point/vector operations. In **part2.glsl**, each examined model has **frame, orthoFrame, smallShift, flow**. The Sol shader additionally has **numFlow, hypXFlow, hypYFlow, ellFlow**, and the SL2 shader has helpers such as **SLmultiply** and **SLtranslateFiberBy**. These are real source functions, not proposed Eye APIs.

| Model | Pinned flow implementation |
| --- | --- |
| Euclidean | [euc/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/euc/geometry/shaders/part2.glsl) |
| Spherical | [sph/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sph/geometry/shaders/part2.glsl) |
| Hyperbolic | [hyp/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/hyp/geometry/shaders/part2.glsl) |
| $S^2\times\mathbb R$ | [s2e/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/s2e/geometry/shaders/part2.glsl) |
| $\mathbb H^2\times\mathbb R$ | [h2e/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/h2e/geometry/shaders/part2.glsl) |
| Nil | [nil/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/nil/geometry/shaders/part2.glsl) |
| Sol | [sol/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sol/geometry/shaders/part2.glsl) |
| $\widetilde{SL_2\mathbb R}$ | [sl2/part2.glsl](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/src/geometries/sl2/geometry/shaders/part2.glsl) |

**Types and dependencies:** JavaScript objects and GLSL structures represent distinct Points, Vectors, Isometries; per-geometry representations vary. [package.json](https://github.com/henryseg/non-euclidean_VR/blob/5e382dc7bc1e785ba225761d10f6a9f480e48556/package.json) declares **three ^0.158.0**, webpack, and its plug-ins; browser/WebGL is the rendering environment. **Tests:** a **tests/** directory exists, but the package's **test** script explicitly prints "no test specified" and exits 1. It is therefore wrong to claim a passing npm test suite from the presence of test files. **Limits:** GPU precision, scene coverage, multi-geodesic lighting approximations, and topology-specific branch behavior need independent qualification.

**Reuse policy:** extract contracts (flow, isometries, quotient, conservative distance, attenuation), not GPL shader copies or a mandatory three.js dependency.
