# Coordinates, changes of chart, and local frames

**Status: independently derived; conventions: coordinate vectors $\partial_i=\partial/\partial x^i$ and upper indices for vector components.**

A chart $x:U\subset M\to\mathbb R^n$ represents $v\in T_pM$ by $v=v^i\partial_i|_p$. If $y=y(x)$ is another chart, then $v'^a=(\partial y^a/\partial x^i)v^i$ and $\partial'_a=(\partial x^i/\partial y^a)\partial_i$. Covector components transform oppositely: $\alpha'_a=(\partial x^i/\partial y^a)\alpha_i$. The scalar pairing $\alpha_i v^i$ is unchanged by substitution.

An arbitrary smooth frame $(E_a)$ is a basis of vector fields on a neighborhood, not necessarily a coordinate frame. Its Lie brackets $[E_a,E_b]=c^c{}_{ab}E_c$ measure non-coordinate behavior. In a coordinate frame, these structure functions vanish; on Nil and Sol, orthonormal left-invariant frames have nonzero brackets and may be numerically preferable to singular global charts.

An oriented orthonormal frame obeys $g(E_a,E_b)=\delta_{ab}$ and $\det(E)>0$ relative to an orientation. Transforming between orthonormal frames at a fixed point gives $SO(n)$; changing *points* also requires a base-point map. For an isometry $h:M\to M$, its differential $dh_p:T_pM\to T_{h(p)}M$ is the relevant map.

**Local sanity test:** $g'_{ab}=(\partial x^i/\partial y^a)(\partial x^j/\partial y^b)g_{ij}$. Verify $g'_{ab}v'^av'^b=g_{ij}v^iv^j$ at randomly selected overlap points. A chart seam can make components jump even when the intrinsic vector is smooth.

**No global frame assumption:** an arbitrary manifold need not have a globally continuous tangent basis. The sphere $S^2$, for example, admits no nowhere-zero continuous tangent vector field. Camera poses require local frames and transition rules, not a global matrix silently attached to every point.

Source bridge: [Coulon et al. §§3.3–3.4](https://arxiv.org/html/2010.15801) use the isometry group to parameterize the orthonormal frame bundle in homogeneous spaces.
