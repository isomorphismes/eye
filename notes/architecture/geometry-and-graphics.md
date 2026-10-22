# Intrinsic geometry versus graphics surface

An embedded surface in ℝ³ has two distinct possible renderings. A conventional renderer may trace Euclidean rays through ambient space and see the surface from outside. An intrinsic renderer may place an observer on the surface and follow surface geodesics. The first can use ambient triangles and z-buffer depth; the second needs a connection, intrinsic distance, and often topology-aware paths.

The same distinction becomes sharper in an intrinsically curved 3D universe. No ambient ℝ⁴ or ℝⁿ visualization choice should quietly define visibility. Eye must make a physical model explicit: which paths light follows, which objects block it, and what local measurements supply shading.

A backend can later rasterize, march, path trace, or produce an offline image. It receives geometry facts but does not decide them. This preserves rough.framebuffer as a possible surface consumer rather than a replacement geometry engine.
