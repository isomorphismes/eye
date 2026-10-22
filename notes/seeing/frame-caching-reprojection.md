# Frame caching and temporal reprojection require geometry

**Status: architectural mathematical argument; no renderer benchmark claimed.**

An ordinary Euclidean camera often transforms a point from one frame to another with a single rigid world transform and a depth buffer. On $M$, a hit point $s$ and its old viewing tangent $\dot\gamma(t_*)$ are linked by a particular geodesic branch. Moving the camera from $x$ to $x'$ does not generally preserve that branch, and there is no universal affine subtraction $s-x'$ in a global tangent vector space.

**Reprojection problem:** given a previously visible physical point $[s]$ and a new camera $(x',F')$, find **all relevant** $v'\in S_{x'}M$ and lengths $t'$ with $\exp_{x'}(t'v')\in[s]$. This can be multivalued on $S^3$, Nil, Sol and quotients. Even when unique, $v'$ need not follow from a Euclidean point subtraction. Old depth is a length along an old ray, not necessarily a new-camera projective depth.

A transported-frame cache is different: storing $F'$ obtained by parallel transport along known observer motion is legitimate and can reduce repeated evaluation. But approximate transport introduces drift; compare $g(E_a,E_b)$ to $\delta_{ab}$ and track numerical renormalization. If the observer travels around a loop, genuine holonomy must be preserved; resetting facing to an initial chart-local frame would erase a real effect.

**Candidate safe caches:** model-independent symbolic metrics and connection data per chart; finite isometry words with their differentials; solutions of the geodesic IVP keyed by model, initial state and tolerance; normal/Jacobi data along *one labeled ray branch*. Caches keyed only by Euclidean position and direction risk conflating different tangent fibers or deck lifts.

**Invalidation conditions:** chart transition, metric revision, crossing an identified face, cut/conjugate locus, different optical model, changed scene or light, and unacceptable integration error.

**Acceptance thought experiment:** a sphere antipode visible along many ray directions must not collapse to a single reprojection record. See [exponential map](../foundations/exponential-cut-locus.md), [transport](../foundations/parallel-transport-holonomy.md), and [camera](observer-local-rays.md).
