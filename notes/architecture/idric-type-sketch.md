# Idriç type sketch: what should be indexed

This is explanatory pseudotype notation, not claimed compiling Idriç.

~~~text
Point : Geometry → Type
Tangent : (geometry : Geometry) → Point geometry → Type
RayState : (geometry : Geometry) → Type
RayState geometry ≃ Σ (p : Point geometry), Tangent geometry p

advance :
  (step_length : ℝ) →
  RayState geometry →
  Either PropagationBoundary RayState

transport :
  (ray_segment : RaySegment geometry) →
  Tangent geometry start →
  Tangent geometry finish
~~~

The key property is not syntax. A vector at p cannot be passed where a vector at q is needed without a path, isometry differential, or other declared identification. Numeric coordinates may sit behind opaque representations. A geometry-specific implementation may be C, D, Idriç, Lua, or a foreign numerical library; the narrow boundary keeps its proof obligations visible.

Do not put general rings, modules, chain complexes, or a renderer inside this core. Eye needs enough type shape to prevent base-point mistakes, not a universal mathematics runtime.
