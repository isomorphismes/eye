# Nearby Walnut & Burgundy resources: geometry, groups, and topology

**Status: repository paths discovered through GitHub search and directory inspection; content-level compatibility and build status mostly unverified.**

The existing literature ledger [alphabet-of-mathematics / Marcel Berger](https://github.com/walnut-burgundy/alphabet-of-mathematics/tree/ad63b3d2f32a40694a3435e2b17c0796c30a328c/research/Marcel%20Berger) includes **books.md**, **papers.md**, **a-panoramic-view-of-riemannian-geometry.md**; the matching [Mikhail Gromov](https://github.com/walnut-burgundy/alphabet-of-mathematics/tree/ad63b3d2f32a40694a3435e2b17c0796c30a328c/research/Mikhail%20Gromov) section includes **sign-and-geometric-meaning-of-curvature.md**. These supply reading directions for curvature and global geometry, not machine-tested Christoffels. They are research files **inside alphabet-of-mathematics**, not imaginary separate Berger and Gromov repositories.

Other relevant projects:
- [walnut-burgundy/coxeter](https://github.com/walnut-burgundy/coxeter): reflection groups, Coxeter diagrams and discrete symmetry. The eventual interface is a verified isometry and fundamental-domain presentation, not a rendering dependency.
- [walnut-burgundy/regina](https://github.com/walnut-burgundy/regina): triangulations and 3-manifold topology. [Regina project](https://regina-normal.github.io/) addresses triangulations, normal surfaces, census manifolds and some hyperbolic topology. A triangulation is not automatically an intrinsic metric or certified photon path.
- [walnut-burgundy/fulton](https://github.com/walnut-burgundy/fulton): geometric/algebraic intersection and compositing questions may inspire a distinct scene/intersection layer, but no particular Fulton API has been verified here.
- [DiGeo](digeo.md) and [Lean differential-geometry](differential-geometry-lean-fork.md): concrete mesh geodesics versus formal 3D metric and connection definitions, respectively.

## Research integration, without imaginary capabilities

Berger/Gromov are sources for rigorous questions on metric comparison, curvature and geodesic behavior; Coxeter gives possible discrete symmetry data; Regina gives topological descriptions; Fulton belongs with intersection theory. None is granted a direct "render this universe" interface by being cited. For each future interoperation, identify a proven map: group generator $\to$ isometry on $X$, triangulation $\to$ geometric model, or shape specification $\to$ closed subset with an intrinsic intersection certificate.

**Verification debt:** inspect the exact relevant code, license, object model and tests of coxeter, regina, fulton before proposing a dependency or moving any files. This survey provides linked research directions rather than a manufactured unified software API.
