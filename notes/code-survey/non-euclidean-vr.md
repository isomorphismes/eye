# non-euclidean_VR: closest full reference

**Status:** source-inspected at repository README; mathematical structure inspected through the central paper.  
**Repository:** https://github.com/henryseg/non-euclidean_VR

The README describes an API to build and animate scenes, define objects/lights/materials, and implement geometries or models. Its source layout exposes separate geometry packages, scene machinery, examples, tests, and WebGL build tooling. The central paper explains the corresponding geometry-independent architecture and per-geometry specializations.

It is the best comparison for Eye because it actually targets in-space views of all eight Thurston geometries and quotient manifolds. It is not a drop-in dependency or a mandate to use JavaScript, three.js, WebGL, raylib, sokol, or any renderer. Eye should extract evidence: exact geodesic and transport interfaces, quotient semantics, distance-underestimator requirements, and tests.
