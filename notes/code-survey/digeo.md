# DiGeo

**Status:** source-inspected at Walnut & Burgundy fork README, blob f926b3235fa8937f236fe1de0aa3fde5b6e15278.  
**License shown:** BSD-3-Clause.

DiGeo describes differentiable exponential maps, parallel transport, and geodesic tracing on triangular meshes. It targets learning and optimization, runs batched operations through Python/PyTorch and custom C++/CUDA kernels, and has CPU/GPU paths.

It is a valuable stress case: Eye may eventually want derivatives of an observation map, not only forward rays. Its mesh operations show what a numerical, differentiable approximation can expose.

It is not a substitute for intrinsic three-dimensional Thurston propagation. Its dependency and accelerator stack are explicitly outside this notes job. The future question is whether its semantic operation names and test shapes transfer, not whether Eye should import it.
