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
 |   Aa	: AaAaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a "AaAaAaAa.a"N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a. a a a a a aAaN
// a a.N
//N
aN
AaAaAaAaAa::a(N
    Aa aAa, AaAaAaAaA *a, a *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a aAa a a aN
    a a = a(aAa);N
    a(a);N
    N
    // Aa a a a, a a a a aN
    a (a != A) {N
	AaAaAaAa *a = a AaAaAaAa(aAa, a, aAa);N
	a.a(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a aAa a a a a.N
// Aa -0 a a a a.N
//N
aN
AaAaAaAaAa::a(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a a = 0; a < a.aAa(); a++) {N
	AaAaAaAa *a = (AaAaAaAa *) a[a];N
	a (a->aAaAa() == aAa)N
	    a a;N
    }N
    N
    a -0;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a.N
//N
aN
AaAaAaAaAa::a(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a >= 0 && a < a.aAa()) {N
	AaAaAaAa *a = (AaAaAaAa *) a[a];N
	a a;N
	a.a(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a 'a' a a a a.N
//N
a AaAaAaAa *N
AaAaAaAaAa::a(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a >= 0 && a < a.aAa())N
	 a (AaAaAaAa *) a[a];N
    a a A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a 'a' a a a a.N
//N
AaN
AaAaAaAaAa::aAaAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a AaAaAaAa *a = a(a);N
    a (a != A)N
	 a a->aAaAa();N
    a a 0;N
}N
N
