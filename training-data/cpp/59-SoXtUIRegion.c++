/*N
 *N
 *  Aa (A) 0 Aa Aa, Aa.  Aa Aa Aa. N
 *N
 *  Aa a a a a; a a a a a/aN
 *  a a a a a a a A Aa Aa AaN
 *  Aa a a a a Aa Aa Aa; aN
 *  a 0.0 a a Aa, a (a a a) a a a.N
 *N
 *  Aa a a a a a a a a a a a,N
 *  a A A A; a a a a a aN
 *  A a A A A A A.  Aa a AN
 *  Aa Aa Aa Aa a a a.N
 *N
 *  Aa, a a a a a a a a a aN
 *  a a a a a a a a a a aN
 *  a a a.  Aa a a a, a a aN
 *  a, a a a a a a.  Aa a, aN
 *  a, a a a a a a a a a a aN
 *  a a, a a a a a.N
 * N
 *  Aa a a a a a a a A Aa Aa AaN
 *  Aa a a a a; a a, a a a Aa AaN
 *  Aa, Aa., 0 Aa Aa, Aa 0, Aa, A  0-0  AN
 *N
 *  Aa a: Aa Aa, Aa., 0 Aa Aa,N
 *  Aa Aa, A  0, a:N
 * N
 *  a://a.a.a N
 * N
 *  Aa a a a a a, a: N
 * N
 *  a://a.a.a/a/AaAa/AaAa/N
 *N
 */N
N
/*N
 * Aa (A) 0,0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa(a)	: Aa AaN
 |N
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a "_AaAaAa.a"N
#a <Aa/a/AaA.a>N
N
// ??? a a A_A_A a a a a a a aN
// ??? a a a a == A a aA.N
#a A(a0, a0, a0, a0) \N
	aAa(A_A_A); \N
	aAa0a(a0, a0); aAa0a(a0, a0); \N
	aAa0a(a0, a0); aAa0a(a0, a0); \N
	aAa0a(a0, a0+0); \N
	aAa();N
N
a AaAaAaAa(a a0, a a0, a a0, a a0, AaAa aAa)N
{N
    A0_A_A;N
    aAa(A_A_A);N
    aAa0a(a0, a0+0); aAa0a(a0, a0); aAa0a(a0+0, a0);N
    aAa();N
    A0_A_A;N
    aAa(A_A_A);N
    aAa0a(a0, a0); aAa0a(a0, a0); aAa0a(a0, a0);N
    aAa();N
    N
    a0++; a0++; a0--; a0--;N
    A0_A_A;N
    aAa(A_A_A);N
    aAa0a(a0, a0+0); aAa0a(a0, a0); aAa0a(a0+0, a0);N
    aAa();N
    A_A_A;N
    aAa(A_A_A);N
    aAa0a(a0, a0); aAa0a(a0, a0); aAa0a(a0, a0);N
    aAa();N
    N
    a0++; a0++; a0--; a0--;N
    a (aAa) {N
	A_A_A;N
	A(a0, a0, a0, a0);N
    }N
    a {N
	A0_A_A;N
	aAa(A_A_A);N
	aAa0a(a0, a0+0); aAa0a(a0, a0); aAa0a(a0+0, a0);N
	aAa();N
	A0_A_A;N
	aAa(A_A_A);N
	aAa0a(a0, a0); aAa0a(a0, a0); aAa0a(a0, a0);N
	aAa();N
    }N
}N
N
N
a AaAaAaAa(a a0, a a0, a a0, a a0)N
{N
    AaAaAaAa(a0, a0, a0, a0);N
    N
    A_A_A;N
    a0+=A_A; a0+=A_A; a0-=A_A; a0-=A_A;N
    A(a0, a0, a0, a0);N
    a0++; a0++; a0--; a0--;N
    A(a0, a0, a0, a0);N
    a0++; a0++; a0--; a0--;N
    N
    AaAaAaAa(a0, a0, a0, a0, A);N
}N
N
N
a AaAaAaAa(a a0, a a0, a a0, a a0)N
{N
    a a[0][0];N
    a a = (a0 + a0) / 0;N
    N
    a[0][0] = a0;N
    a[0][0] = a[0][0] = a0;N
    a[0][0] = a;N
    a[0][0] = a0;N
    a[0][0] = a0;N
    N
    A_A_A;N
    aAa(A_A);N
    aAa0a(a[0]);N
    aAa0a(a[0]);N
    aAa0a(a[0]);N
    aAa();N
    N
    aAa(A_A);N
    N
    A_A_A;N
    aAa0a(a0, a0); aAa0a(a, a0);N
    A0_A_A;N
    aAa0a(a, a0); aAa0a(a0, a0);N
    aAa0a(a0, a0); aAa0a(a0+0, a0);N
    N
    a0++; a0++; a0--; a0--;N
    A_A_A;N
    aAa0a(a0, a0); aAa0a(a, a0);N
    A0_A_A;N
    aAa0a(a, a0); aAa0a(a0, a0);N
    A0_A_A; N
    aAa0a(a0, a0); aAa0a(a0+0, a0);N
    N
    a0++; a0++; a0--; a0--;N
    A_A_A;N
    aAa0a(a0, a0); aAa0a(a, a0);N
    A0_A_A;N
    aAa0a(a, a0); aAa0a(a0, a0);N
    N
    aAa();N
}N
N
