# Host-rendered observation scenes

These are deterministic outputs of the compiled Eye implementation, through
the pinned maintained compiler's Chez generator. The scalar primitive library
uses Float32; no C geometric renderer, GPU, direct ELF or Android runtime
produced these images. The montage enlarges each 32×24 output without smoothing.

The front orange panel occludes a later cyan panel. The second row follows
observer movement with facing transported by Eye. The flat-torus observer
starts before an identification, so the rays cross an actual quotient face.

| Scene | Changed pixels after movement | Unresolved before | Unresolved moved |
| --- | ---: | ---: | ---: |
| Euclidean | 144 | 68 | 0 |
| Flat torus | 44 | 0 | 0 |
| Hyperbolic | 544 | 4 | 8 |

Magenta pixels remain explicit unresolved event/edge decisions. They are not
clear space and are not presented as successful intersections. These pictures
are demonstration evidence; independent analytic, connection, convergence and
transport tests establish the separate mathematical evidence.

The image-producing source blobs are:

| File | Git blob |
| --- | --- |
| src/Eye/Render.idric | 6557b3082a63d5c349fb171da20c3edabada760e |
| src/Eye/Scene.idric | 6d13e6ba42df1c19303f09df57be21bcdd29748a |
| src/Eye/Geodesic.idric | d190f6cd85e139f71e9bcf94c96e18c44c3975eb |
| src/Eye/Models.idric | 02a55bbcd899c1636db08e5a79e54101a0c5a837 |
| _/numeric/scalars.c | 5184598b69a6284e62818d64fc0a1c9c220f7d43 |

Compiler: 0e8cfdd1106ebdeffd01b6c519880ea3afc7dc35.
Chez: 10.4.1. Host: Ubuntu 24.04 x86_64.
C primitive compiler: Ubuntu GCC 13.3.0, -O2 -ffp-contract=off.

Reproduce all six PPM files with the qualification entrypoint's --render flag.
ImageMagick compare -metric AE measures the changed-pixel counts; the montage
is presentation only. Target-native execution, A1/C67 packaging, installation
and physical observations are unverified.
