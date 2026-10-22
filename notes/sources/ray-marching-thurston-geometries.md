# Coulon–Matsumoto–Segerman–Trettel: the central source

**Status:** source-inspected.  
**Version inspected:** arXiv:2010.15801v2, 13 January 2022.  
**Citation:** Rémi Coulon, Elisabetta A. Matsumoto, Henry Segerman, Steve J. Trettel, “Ray-marching Thurston geometries,” *Experimental Mathematics* 31(4), 2022, 1197–1277. [arXiv](https://arxiv.org/abs/2010.15801), [HTML v2](https://arxiv.org/html/2010.15801v2).

This is Eye’s primary rendering-mathematics source because it treats all eight Thurston geometries in one framework. Sections 2–5 define ray marching, frame and position, quotients, and lighting; Sections 7–11 specialize to the geometries; Appendix A compares numerical geodesic integration.

Its chosen model is an **in-space** image: light travels along geodesics of the simulated geometry. That is an optical model, not a consequence of a Riemannian metric alone. It treats quotient manifolds and orbifolds X/Γ, so a world point may have many relevant lifted images. Its curved-space Phong adaptation needs area density of geodesic spheres.

Important cautions come directly from §§2.3, 3.7, and 4. In several geometries the exponential map is not globally one-to-one, so rasterization framed as inversion of exp can miss multiple apparent images. A distance underestimator supports conservative marching but is not automatically exact signed distance. Boundary teleporting is a quotient coordinate transition accompanied by a differential on directions, not a physical discontinuity.
