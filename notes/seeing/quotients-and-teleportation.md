# Quotient spaces: identified faces and repeated visibility

**Status: independently formulated action; [Coulon et al. §4](https://arxiv.org/html/2010.15801) inspected.**

Let $X$ be a simply connected homogeneous geometry and $\Gamma$ a discrete group of isometries. A quotient point is an orbit $[x]=\{\gamma x:\gamma\in\Gamma\}$ in $X/\Gamma$. The map $\pi:X\to X/\Gamma$ is locally an isometry wherever the group acts freely. The quotient metric is local data inherited from $X$; global line-of-sight behavior is new because different lifts of a scene can intercept a ray.

Choose a fundamental domain $D\subset X$ with paired faces. A lifted ray flows continuously in $X$ until it reaches a face. For a face pairing $h\in\Gamma$ that moves its endpoint back into $D$, update **all** geometric state:
$(x,v,E_1,E_2,E_3)\mapsto(hx,dh_xv,dh_xE_1,dh_xE_2,dh_xE_3)$.
Since $h$ is an isometry, $g(v,v)$ and frame inner products are unchanged. Store the accumulated deck word if object identities, spatial periodicity, or path homotopy matter. Face intersections must be ordered by the ray's affine parameter.

If the scene $S\subset X$ represents a physical scene in the quotient, its lift must be $\Gamma$-invariant. Equivalently, render the preimages of a quotient object in all relevant fundamental copies. A shortened approach evaluates scene distance near both sides of a domain wall. It is incorrect to clip visibility at a paired face merely because a Euclidean renderer sees a boundary polygon.

**Flat torus example:** in $X=\mathbb R^3$, identify each coordinate modulo 1. A ray from $(0.8,0.25,0.4)$ in direction $(1,0,0)$ reaches the representative face at $t=0.2$ and continues at $(0,0.25,0.4)$ with the *same* vector; a quotient plane at $x=0.1$ is next reached at $t=0.3$. [Exact arithmetic](../worked/flat-3-torus-quotient.md). The simplicity of $dh=I$ for translations does not persist in Nil shear or other deck maps.

**Orbifold caution:** fixed points of a group action can produce singular quotient strata. The statement "locally a manifold" needs a free-action hypothesis.
