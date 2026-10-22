# Light model, ray marching, and numerical honesty

A metric determines geodesics, not light physics. Eye’s first optical model follows the central paper: light follows unit-speed geodesics and local lighting compares directions at an intersection. Refraction, anisotropic media, and Lorentzian propagation would change the equations.

A normal and incoming ray velocity already share the hit tangent space. A light direction from another point needs a selected geodesic and transport or a closed form. The paper uses area density of geodesic spheres for intensity; that depends on d exp and Jacobi fields.

Numerical receipts should record speed drift, frame drift, group/quotient consistency, chart events, and intersection tolerance. Caching or reprojection is approximation whose validity depends on curvature, motion, occlusion, and camera policy.
