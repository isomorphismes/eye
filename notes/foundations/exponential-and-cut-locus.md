# Exponential map, logarithm, and cut locus

expₚ sends v∈TₚM to the unit-time geodesic endpoint. In a normal neighborhood it is a diffeomorphism and logₚ sends a nearby q to the unique initial vector of its shortest geodesic.

Globally expₚ may fold. On a unit sphere, every length-π direction from the north pole ends at the south pole. Log is multivalued there; this is geometry, not a numerical failure.

The cut locus marks where radial shortest geodesics stop being uniquely minimizing. It matters for distance, collision, and images. A renderer may continue a chosen geodesic, but a nearest-direction data structure must declare a branch policy.

geometry-central tracing and Manifolds.jl exp/log routines are useful local comparisons. They do not remove global ambiguity.
