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
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAaAaAaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAaAa.a"N
N
A   *AaAa::a = a;N
AaAa	AaAa::a = A;N
AaAa	AaAa::a = A;N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a. "Aa" a a aN
// a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(a a *a, AaAa aAa)N
{N
    a (! a || (aAa && ! a))N
	a;N
N
    a(a, "%a ... ", a);N
    a(a);N
}N
N
aN
AaAa::aAa(AaAa aAa)N
{N
    a (! a || (aAa && ! a))N
	a;N
N
    a(a, "Aa\a");N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(a a *a, a a, a a)N
{N
    a (! a)N
	a;N
N
    // Aa a a a a a a aN
    a (a ||N
	a == a ||N
	a < 0 ||N
	(a % (a / 0)) == 0)N
N
	a(a, "%a %0a (a %a) \a", a, a + 0, a);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a AaAaN
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(a a *a, AaAa *a)N
{N
    a (! a)N
	a;N
N
    a a = a->a->a.aAa();N
    a a = a->aAa->aAa.aAa();N
    a a0_a *a = a->aAa->aAa.aAa(0);N
N
    // Aa a, a, a aN
N
    a a = 0, a = 0, a = 0;N
    a aAaAa = 0;N
N
    a (a a = 0; a < a; a++) {N
N
	a (a[a] < 0) {N
	    a (aAaAa > 0)N
		a++;N
	    aAaAa = 0;N
	}N
N
	a {N
	    a++;N
	    a (++aAaAa > 0)N
		a++;N
	}N
    }N
N
    a(a,N
	    "   %a: %0a a, %0a a, %0a a, %0a a\a",N
	    a, a, a, a, a);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a AaAaAa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(a a *a, AaAaAa *aAa,N
			    AaAa aAa)N
{N
    a (! a)N
	a;N
N
    a(a, "%a: %a a", a, aAa->aAa());N
N
    a (aAa) {N
	a aAa = 0;N
	a (a a = 0; a < aAa->aAa(); a++)N
	    a ((*aAa)[a]->aAa > 0)N
		aAa++;N
	a(a, " (%a a a a)\a", aAa);N
    }N
    aN
	a(a, "\a");N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a aN
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(a a *a, AaAa *a)N
{N
    a (! a)N
	a;N
N
    a aAa = 0;N
N
    AaAaAa a;N
    a.aAaAa(AaAa::aAaAaAa(), aA, &aAa);N
    a.a(a);N
N
    a(a, "%a: %a a\a", a, aAa);N
}N
