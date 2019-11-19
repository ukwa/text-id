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
 * Aa (A) 0-0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |	_AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a AN
#a <a.a>N
#aN
N
#a "_AaAaAa.a"N
#a "_AaAaAaAa.a"N
N
#a <Aa/a/AaA.a>N
N
N
/*N
 * AaN
 */N
N
#a A	(A_A + 0 + A_A)N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A, N
	    A) // a Aa a a a a a  N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a, a aAa = AN
    aAa(A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaA a - a a a a a a a a aN
//N
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A, N
	    A) // a Aa a a a a a  N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a a, N
    // a a a a a a a a a. Aa a aAaN
    // a a a a a a.N
    aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a aN
//N
// aN
//N
aN
_AaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    a[0] = a[0] = a[0] = 0;N
    aAaAa( AaAa0a(0, 0) );  // a aN
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a.N
//N
_AaAaAaAa::~_AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a aN
//N
// Aa: a aN
N
aN
_AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! aAa())N
	a;N
    N
    aAaAa(aAa(), aAaAa(), aAaAa());N
    N
    // a aN
    AaAa0a a = aAaAa();N
    AaAaAaAa(0, 0, a[0]-0, a[0]-0);N
    N
    // a a a aN
    aAa0a(a.aAa());N
    aAa(A, A, a[0] - A, a[0] - A);N
    N
    a (aAaAa())N
	aAaAa(aAa(), aAaAa());N
    aN
	aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a aN
//N
// Aa: aN
N
aN
_AaAaAaAa::aAa(a AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    a = a;N
    N
    // a a a a aN
    a (! aAa())N
	a;N
    aAaAa(aAa(), aAaAa(), aAaAa());N
    N
    aAa0a(a.aAa());N
    AaAa0a a = aAaAa();N
    aAa(A, A, a[0] - A, a[0] - A);N
    N
    a (aAaAa())N
	aAaAa(aAa(), aAaAa());N
    aN
	aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//	Aa a a a a a a a a a.N
//N
// Aa: a aN
N
aN
_AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    aAaAa(aAa(), aAaAa(), aAaAa());N
    aAa(0, 0, aAa[0], aAa[0]);N
    aAaAa(A_A);N
    aAaAa();N
    aAa(0, aAa[0], 0, aAa[0], -0, 0);N
}N
