# Eye observation qualification

This extends the existing Idriç implementation. The 50-note corpus is unchanged.
The maintained compiler accepts all 19 packaged Eye modules. The host suite
executes 79 assertions, three deliberately ill-typed programs are rejected for
their intended mismatches after a positive control passes, and the eight
symbolic connection contractions reproduce successfully. Corrupting the Nil
formula makes that independent procedure fail at the intended component.

## Reproduce

Build the pinned compiler with its root `edric bootstrap` command on a build
host. Provision SymPy 1.14.0 and mpmath 1.3.0 for the pinned Ithon frontend
separately. No provisioning is hidden in Eye's entrypoint.

Invoke Ithon with three absolute paths and optional `--render`:

    /absolute/ithon/ithon /absolute/eye/_/qualify.pi /absolute/Idric /absolute/ithon --render

The entrypoint resolves Eye from its own path, checks compiler/Ithon pins,
builds only the C numerical primitives, builds `eye.ipkg`, `eye-tests.ipkg`, `eye-native-boundary.ipkg`,
and (with `--render`) `eye-demo.ipkg`, executes the tests, checks the negative
diagnostics, reproduces the symbolic calculations and runs the demonstration.
Commands, exit codes and stdout are retained in `_/evidence/`. Pixel files are
written to `build/demo/`. This is host qualification through the maintained
compiler's built-in Chez generator, not direct x86 ELF or Android evidence.

## Exact dependencies

| Component | Pin | Actual use |
| --- | --- | --- |
| Eye starting source | e2aac1f7b4c38bbf443f30f007a5fcc38475225c | Existing modules repaired and extended |
| Eye main corpus | 5c079f2c834e812e5277df421ae654d7cf9a5f20 | Merged ancestry; notes preserved byte for byte |
| isomorphisms/Idric | 0e8cfdd1106ebdeffd01b6c519880ea3afc7dc35 | `.idric` checking and host code generation |
| Chez Scheme | 10.4.1 | Compiler-owned host generator/runtime; archive SHA-256 2e74952db7bc177f0c3602e2217a341ba677d733eec4cd7726418c3a4e1ef308 |
| isomorphisms/ithon | 74ab6d6044b07b76a910978437a34a6b5ac6acda | Checked orchestration and symbolic-library boundary |
| SymPy / mpmath | 1.14.0 / 1.3.0 | Independent symbolic algebra; no renderer |
| fuego-ironworks/idric-x86-aggressive-backend | 00716e7f07176438960cca6b2b1ec692249ebb17 | Actual handoff rejection; lowering/native execution not reached |
| fuego-ironworks/idric-arm-thumb, main | 9271de485f64d225d3dca05afa8504cc3a896de6 | Inspected direct DEX contract; not Android execution |
| walnut-burgundy/fulton | 5ae8ae3a5ca7e827c8208daa42839ae4e8233e65 | Defining equations, differentials and transverse/degenerate constraints |
| walnut-burgundy/regina | e3a5c7c0e0581706d9e5531b750160b322489950 | Concrete six-cell torus incidence data |
| walnut-burgundy/coxeter | bdb763cff452359f28529ae37dfdf089e49be8a0 | Exact A2/A3 relation validation and replay boundary |

The same entrypoint accepts `--emit-native-contract`. It copies the current
Eye source into an isolated generated fixture directory and invokes the
maintained compiler's own one-step emitter. No semantic rows are handwritten.
`NativeBoundary.idric` executes the real torus engine in Float32 and E4M3 and
its separately executed host control writes exactly `Y`. The preserved
[compiler handoff](../tests/evidence/native-boundary.one-step) is directly
usable by a repaired backend; its [actual rejection](../tests/evidence/native-boundary-rejection.txt)
records the current first failure, `duplicate_definition: Prelude.EqOrd.==`.
This occurs during artifact acceptance, before floating lowering or ELF
generation. The source and body digests are in the artifact envelope.

## Precision and the actual numerical handoff

`Eye.Interop.Scalars` selects **Float32 or signed OCP E4M3FN**, never an
application-level Double scalar. The inherited Double primitive occurs only
at literal/reference conversion and in the independent reference program.
Every arithmetic operation returns a value rounded to the selected format.
E4M3FN includes signed zero and subnormals, has maximum finite magnitude 448,
and uses nearest/even rounding. Overflow produces a non-finite result and
refuses propagation; it does not silently saturate or widen the Eye state.

The actual host call boundary is `_/numeric/scalars.c`: C `int` selects mode
0 (binary32) or 1 (E4M3FN), and `uint32_t` carries scalar storage bits. An E4M3
payload occupies only its low byte and invalid high bits are rejected by the
Idriç import boundary. Floating computation in this library uses `float` and
the `*f` numerical functions. The build disables fused contraction. Inputs and
outputs are by value; no allocation, shared mutable memory or pointer lifetime
crosses this interface. No C code constructs rays, integrates geometry,
orders events, acts by deck transformations, lights scenes or renders pixels.

The suite covers all 256 E4M3 encodings, signed zero, subnormals, ties-to-even,
overflow, per-operation Float32 rounding, and actual repeated positive and
negative E4M3 torus travel. It also proves that a step which loses positional
progress at E4M3 precision refuses. These bounded results do not establish
that arbitrary long curved trajectories work in E4M3.

The full frame wire codec is implemented in `Eye.Interop.Packet`. Its
header is three ASCII bytes EYE, version 1, precision (0 or 1), geometry,
chart and one reserved zero byte. Fifteen scalars follow in this order:
position, velocity, right, up, forward, with xyz order in each triple. The
format is exactly 68 bytes for Float32 (little-endian words) or 23 bytes for
E4M3. Import rejects wrong width/geometry/chart tags, invalid length, nonfinite
scalars and invalid frames before reconstructing one point and its fibers.
The caller owns immutable output bytes; import constructs independent values,
with no borrowed pointer or shared mutable lifetime. Tests check byte-for-byte
round trips, a literal little-endian golden word, malformed inputs and the
opposite spherical chart. The native-boundary host control exercises this
codec on the actual traced frame, rather than an invented test payload.

## Mathematical evidence

The tests fix their budgets in source: Float32 analytic/component/speed/Gram
checks use 2e-5; the independently differentiated metric comparison uses 2e-6
with binary64 central-difference spacing 1e-5. A coupled lifted-SL2 trajectory
is compared at time 0.25 against 1,000 independently derived midpoint steps
at binary64 precision, with component tolerance 5e-5. A spherical trace of
length 4 changes charts and crosses the pole omitted by its original chart;
its coordinate tolerance is 5e-5 and accumulated Gram tolerance 1e-4.
H³ step-halving must reduce analytic endpoint error by at least a factor of
four and leave the finer error below 2e-5; that executable convergence check
passes. This comparison deliberately permits a larger local step-doubling
budget so the convergence measurement does not compare the same refined step.

`IndependentConnection.idric` reconstructs metric matrices, differentiates
them independently, inverts the matrices and contracts the Levi-Civita
formula. It does not reuse Eye's Christoffel contractions as its reference.
`connection-inputs.tsv` and `symbolic-connections.pi` separately reproduce the
symbolic formula comparison. Those symbolic expressions are written inputs;
the compiled numerical test joins them to the implemented functions.

Analytic cases include straight rays, great circles, hyperbolic vertical rays,
both product geometries, a nonstraight Nil ray, balanced Sol motion and an
unwrapped lifted-SL2 fiber. Hyperbolic frame transport changes coordinate
components while preserving length. A picture or stable speed is not used as
the trajectory oracle.

## Events, charts and travel

Canonical torus points use the half-open cube. Traversal explicitly permits
the closed cube's boundary representatives: after crossing x=0 to x=1 while
moving left, the next face is x=0. No epsilon is added. Zero-time crossings,
events exactly at the travel limit, repeated crossings and simultaneous
positive/negative corners execute. Only Z³ translations use the commuting
batch resolver. Other deck groups do not inherit that rule.

The bounded trace retains remaining distance and accumulated parameter,
counts both numerical and zero-time windows, limits refinement, and reports
arithmetic/progress, event-provider, face, chart and budget failures explicitly.
Complete providers must cover the same requested horizon. Scene surfaces,
quotient faces and chart changes participate in one ordering; overlapping
root brackets and event ties remain unresolved.

Opposite stereographic charts transform velocity and all frame axes by the
Jacobian, and normal covectors by the inverse transpose. The spherical step
guard bounds angular travel away from the omitted pole; atlas balancing
switches charts before another step. At the balancing boundary only outward
motion switches, preventing a zero-time chart cycle. Turning an observer and
moving it with parallel-transported facing are separate operations.

## Concrete companion integration

- Fulton `notes/cnc-constraint-fibers.md` supplies the separation of original
  equations, differential kernels, transverse roots and higher multiplicity.
  `Eye.Incidence` retains those roles, and `Eye.Scene` uses a plane's equation
  and its actual covector differential. Its bisection budget is a ray-parameter
interval; an equation residual never determines a travel step or distance.
- Regina `engine/triangulation/example3.cpp`, `Example<3>::threeTorus()`,
  supplies all 12 gluings of six tetrahedra to `Eye.Companions.Regina`.
  Executable tests validate permutations, one incidence per face, a concrete
  paired-cell lookup and rejection of a missing gluing. This imports
  combinatorial incidence, with Regina's GPL-2.0-or-later provenance; it
  neither assigns a metric nor derives Eye's cube translations from topology.
- Coxeter `reducer.py::validate_step` and `replay` supply the exact A2/A3
  relation contract used by `Eye.Companions.Coxeter`. The tests replay an A3
  commute/cancellation ledger, reject its use in A2 and reject a fabricated
  commute relation. Covering-group deck words remain unreduced history.

## Demonstration and remaining acceptance

The host demonstration renders 32×24 Euclidean, flat-torus and hyperbolic
scenes before and after observer movement. A front panel occludes a later
panel. The torus camera starts before a cube identification, so rays actually
cross the quotient face. Output pixels come from the compiled Eye functions.

The following boundaries remain named:

- **NATIVE-01:** the actual direct x86 attempt rejects the emitted program
  with `duplicate_definition: Prelude.EqOrd.==`. The inspected route also
  lacks Eye's floating/heap/call surface, but this run stops before those
  lowering stages. No ELF Eye execution is claimed. Backend repair is separate
  work; the application has not been rewritten into C to conceal this gap.
- **ANDROID-01:** no qualified direct target artifact means no A1 or C67 APK
  is delivered, installed or physically observed. Host execution does not
  satisfy any of these stages.
- **SCENE-01:** the demonstration supports transverse rectangular coordinate
  panels in E³/H³, where the coordinate monotonicity argument applies.
  Other scene traversals and tangential panels explicitly refuse. Its root
  brackets and RK4 comparisons are numerical diagnostics, not interval-
  arithmetic or rigorous intrinsic/global error certificates. Unresolved edge
  pixels are magenta and remain failures, never clear space.
- **HANDOFF-01:** the scalar primitive ABI above is executed and tested.
  `Eye.Interop.Packet` defines and executes the complete frame wire codec.
  A direct-native/Android consumer of that wire format is not yet exercised;
  compiler heap layout and target memory-management acceptance remain separate.

The draft stays unmerged while these requested acceptance boundaries remain.
