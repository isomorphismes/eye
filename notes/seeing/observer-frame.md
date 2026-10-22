# Observer state

A minimal observer state is (p,e₁,e₂,e₃), with p∈M and oriented orthonormal eᵢ∈TₚM. In three dimensions e₃ is forward, e₁ right, and e₂ up only after application convention.

Head rotation rotates the frame at fixed p. Translation changes p. In flat coordinates both can use matrices, but that is a flat-space convenience. Curved translation needs geodesic or other motion plus frame transport.

The central paper parameterizes position and facing through homogeneous-space and frame-bundle data (§3.3–3.4). Eye should retain the abstract state then permit coordinates, group elements, or fundamental-domain representatives.

**Invariant:** gₚ(eᵢ,eⱼ)=δᵢⱼ. Measure the Gram matrix after numerical updates. Any re-orthonormalization is an explicit algorithmic choice.
