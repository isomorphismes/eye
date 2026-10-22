# S²×ℝ — spherical product geometry

**Model and metric.** Points are (q,z) with q∈S² and z∈ℝ. The product metric is g=g_{S²}+dz². A geodesic is a pair: its S² part is a sphere geodesic with constant speed a, and its line coordinate is z(t)=z₀+bt, with a²+b² equal to total speed squared.

**Observer consequence.** A ray can circle in the spherical factor while climbing or descending the ℝ factor. The exponential map inherits antipodal nonuniqueness from S²: target points whose S² coordinate is antipodal to q have many horizontal departure directions. The central paper identifies S²×ℝ as one geometry where global exp inversion is problematic for rasterization.

**Connection.** The product Levi-Civita connection acts factorwise. A frame may split into two horizontal directions tangent to S² and one vertical direction, but that splitting is model structure and must be carried through coordinate changes.

**Quotients.** Products with circle identifications and more general isometry groups can make compact examples. A generator may combine a sphere isometry with a vertical translation, so it can rotate the horizontal frame while translating position.

**Numerical boundary.** Exact factorwise propagation offers a clean verification target. The difficulty is global visibility and multiple directions, not local ODE stiffness.
