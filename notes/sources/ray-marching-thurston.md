# Coulon–Matsumoto–Segerman–Trettel: Ray-Marching Thurston Geometries

**Status: inspected (open-access HTML, version 2); code examined separately.**

Rémi Coulon, Elisabetta A. Matsumoto, Henry Segerman, Steve J. Trettel, *Ray-Marching Thurston Geometries*, arXiv:2010.15801v2 (13 January 2022), *Experimental Mathematics* 31:4 (2022), 1197–1277, [DOI 10.1080/10586458.2022.2030262](https://doi.org/10.1080/10586458.2022.2030262). [Full HTML](https://arxiv.org/html/2010.15801); [source software](https://github.com/henryseg/non-euclidean_VR). The arXiv HTML carries the v2 identifier; HTML conversion may place other automatic display dates on the page. Cite the version identifier, not those dates.

This is Eye's primary algorithmic text because it treats **forward geodesic flow**, **observer frames**, **quotient identification**, **distance underestimates**, and **illumination** within a unified framework. It is not merely eight screenshots. Sections 2–5 provide architecture independent of geometry: a ray steps along a geodesic; the step length must not overestimate the distance to the scene; the camera contains a point and a tangent-frame orientation; deck transformations keep a quotient trajectory in a fundamental domain; normals, view and light vectors belong to appropriate tangent fibers. Sections 7–11 specialize these methods to the eight model spaces. Appendix A compares integration schemes.

## Reading map and mathematical warnings

- §2.1–2.4: geometric convergence, distance underestimators, and accumulated numerical error. Approximate signed distances need *conservative* bounds, not optimistic Euclidean sphere tracing.
- §3.2–3.6: flow, isometry-based placement, facing, motion with parallel transport, cameras and stereo. In a nontrivial frame bundle, an orientation matrix alone is not an intrinsic location.
- §4.1–4.3: Dirichlet-domain teleportation and equivalent scene-distance representations, including orbifolds. When crossing a face, the point and **direction** both transform.
- §5.1–5.9: modified Phong shading; intensities depend on area density of geodesic spheres and may involve several geodesics connecting a light and object. Phong is a *chosen graphics law*, not Maxwell's equations.
- §7: isotropic $\mathbb E^3,S^3,\mathbb H^3$; §8: $S^2\times\mathbb R,\mathbb H^2\times\mathbb R$; §9: Nil; §10: $\widetilde{SL_2\mathbb R}$; §11: Sol.

## What to transfer into Eye's mathematics

For $x\in M$ and $v\in T_xM$, compute $\Phi_t(x,v)=(\gamma(t),\dot\gamma(t))$ and transport an orthonormal frame along $\gamma$. For a quotient $M=X/\Gamma$, select a representative of the frame state, then apply $(x,v,F)\mapsto(gx,dg_xv,dg_xF)$ for $g\in\Gamma$. The remaining tasks—conservative distance, geometry-specific intersections, light intensity, frame stability—have independent contracts and must not be conflated.

**Limits:** The published software's shaders are one implementation, not a verified specification for every model choice or error bound. The current notes do not reproduce its measurements or rerun its GPU tests.

**Cross-reading:** [Seeing](../seeing/observer-local-rays.md), [quotients](../seeing/quotients-and-teleportation.md), [lighting](../seeing/lighting-and-optics.md), [source survey](../code-survey/thurston-raymarcher.md). License on the article page is an arXiv nonexclusive license; software README declares GPL-3.0-or-later. Neither licenses wholesale copying of the article into this repository.
