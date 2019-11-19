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
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::AaAa()N
{N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::~AaAa()N
{N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a AaAa a a a AaAaAa, a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::a(AaAaAa &aAa)N
{N
    //////////////////////////////////////////////////////////////////N
    //N
    // Aa a a a a 0 a a a:N
    //N
    //  - Aa AaAa a a a a, aN
    //N
    //  - Aa AaAa' a a a a a aN
    //N
    //  - Aa a a a A_A_A a a aN
    //N
N
    // Aa a a AaAa a a aN
    AaAa *a0 = aAa[0];N
N
    a (a a = 0; a < aAa.aAa(); a++) {N
	AaAa *a0 = aAa[a];N
N
	a (aAaAa(a0, a0) && aAa(a0, a0)) {N
	    a0->aAa = 0;N
	    a0->aAa  = AaAa::A;N
	}N
	aN
	    a0 = a0;N
    }N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa A a a a a a a a a0 aN
// a0.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAaAa(AaAa *a0, AaAa *a0)N
{N
    // Aa'a a a a a a aN
    a (a0->aAa != 0 &&N
	a0->aAa != AaAa::A)N
	a A;N
N
    A(a0->a != A);N
    A(a0->a != A);N
N
    // Aa a a a aN
    a (! a0->a->aAaAa(AaAaAa::aAaAaAa()) ||N
	! a0->a->aAaAa(AaAaAa::aAaAaAa()))N
	a A;N
N
    // Aa a a A_A_A aN
    a (a0->aAa == A || a0->aAa == A ||N
	a0->aAa->a.aAa() !=N
	AaAaAa::A_A_A ||N
	a0->aAa->a.aAa() != N
	AaAaAa::A_A_A)N
	a A;N
N
    a A;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a0 a a0. Aa A a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAa(AaAa *a0, AaAa *a0)N
{N
    //////////////////////////////////////////////////////////////////N
    //N
    // Aa 0: a a0'a a a a0'a a aN
    // a a a a a a.N
    //N
N
    AaAa *a0 = a0->a;N
    AaAa *a0 = a0->a;N
N
    //N
    // Aa a a a a a a a a a:N
    //N
    // 0 - Aa a a a a aN
    // 0 - Aa aAa a a aN
    // 0 - Aa aAa a a a a aN
    //N
    // Aa a 0 a 0, a a a a a a a a aN
    // a a a 0 a a a a a a a aN
    // a.N
    //N
N
    // Aa, a a a a a a a aN
    a a0 = aAaAa(a0);N
    a a0 = aAaAa(a0);N
N
    // Aa a a 0 a a'a a a a, a a'a a aN
    a (a0 == 0 || a0 != a0)N
	a A;N
N
    // Aa a a a 0 a 0, a a a a a a aN
    // a a a a a a a a aN
    a (a0 == 0 || a0 == 0) {N
	a (a0->aAa[0]  != a0->aAa[0]  ||N
	    a0->aAa[0] != a0->aAa[0] ||N
	    a0->aAa[0] != a0->aAa[0] ||N
	    a0->a[0]     != a0->a[0])N
	    a A;N
	a (a0 == 0 && a0->a[0] != a0->a[0])N
	    a A;N
    }N
N
    // Aa a a a a a a a a a'aN
    // a. Aa a a a a a a a a'aN
    // a.N
    a aAa = a0->aAa.aAa();N
N
    // Aa a0'a a a a 0N
N
#a A_A(A)						      \N
    a0->A.aAa(a0->A.aAa(), a0->A.aAa(),		      \N
			a0->A.aAa(0))N
N
    A_A(aAa);N
N
    a (a0 != 0) {N
	A_A(a);N
N
	a (a0 == 0) {N
	    A_A(aAa);N
	    A_A(aAa);N
	    A_A(aAa);N
	    A_A(a);N
	}N
    }N
N
#a A_AN
N
    //////////////////////////////////////////////////////////////////N
    //N
    // Aa AaAa0'a a'a a aN
    //N
N
    AaAaAa *aAa = (AaAaAa *) a0->a;N
N
    // Aa a a a a a a a a aN
    // a, a a a a a a aN
    a (aAa->aAa.aAa() == 0 &&N
	aAa->aAa[0] == -0) {N
N
	a a = aAa->aAa.aAa();N
	aAa->aAa.aAa(aAa->aAa.aAa());N
	a a0_a *a = aAa->aAa.aAa(0);N
	a0_a *a = aAa->aAa.aAa();N
	a (a a = 0; a < a; a++) {N
	    a (a[a] < 0)N
		a[a] = a[a];N
	    aN
		a[a] = a[a] + aAa;N
	}N
	aAa->aAa.aAa();N
    }N
N
    a {N
	// Aa a a a a a a aN
	a a = aAa->aAa.aAa();N
	a0_a *a = aAa->aAa.aAa();N
	a (a a = 0; a < a; a++)N
	    a (a[a] >= 0)N
		a[a] += aAa;N
	aAa->aAa.aAa();N
    }N
N
    a A;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a (0 - 0) a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAa *a)N
{N
    a a = a->aAa.aAa();N
    a a = a->aAa.aAa();N
    a a = a->aAa.aAa();N
    a a = a->aAa.aAa();N
    a a = a->a.aAa();N
    a a = a->a.aAa();N
N
    // Aa 0: a a a a a aN
    a (a == a && a == a && a == a && a == a && a == a)N
	a 0;N
N
    // Aa 0 a 0: a aAa a a a aN
    // a aN
    a (a == 0 && a == 0 && a == 0 && a == 0) {N
N
	// Aa 0: a aAa a a aN
	a (a == 0)N
	    a 0;N
N
	// Aa 0: aAa a a a a aN
	aN
	    a 0;N
    }N
N
    // Aa a a a a 0 - aN
    a 0;N
}N
