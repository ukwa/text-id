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
#a <Aa/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa0.a>N
#a <Aa/a/AaAaAaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa. Aa a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::AaAa()N
{N
    a = A;N
N
    aAa      = 0;N
    aAaAa = 0;N
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
// Aa a a a a a a a a a aN
// a a a a a a' a. Aa a a a,N
// a, a a, a a a a aN
// a a a AaAa'a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::a(AaAa *_a)N
{N
    a = _a;N
N
    // Aa a a a a a a a. Aa'a a aN
    // a a a a a. Aa a a a a a aN
    // a. Aa a a a a a a a a a. AaN
    // a'a a, a a a a a a a a a.N
    aAa    = A;N
    aAa   = A;N
    aAaAa = A;N
    aAaAa = A;N
    aAa = 0;N
    aAa();N
N
    // Aa'a a a a a a a a a a aN
    AaAaAa a;N
N
    // Aa a a a a a a a a a a aN
    a.aAaAa(AaAa::aAaAaAa(), aAaA, a);N
    a.aAaAa(AaAa::aAaAaAa(), aAaA, a);N
N
    // Aa a a a a a a a a a aN
    a.aAaAa(AaAa::aAaAaAa(), aA, a);N
N
    // Aa a a, a a a a aN
    a.a(a->aAa);N
N
    // Aa aN
    a->a->a.aAa();N
    a->aAa->aAa.aAa();N
    a (a->aAa)N
	a->a->a.aAa();N
    a (a->aAaAa)N
	a->aAa->a.aAa();N
N
    // Aa a a a a a a aN
    aAa();N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a aAa a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa()N
{N
    // Aa a a a a, a!N
    a (aAa != A) {N
	a->a->a.aAa();N
	a->aAa->aAa.aAa();N
	a (a->aAa)N
	    a->a->a.aAa();N
	a (a->aAaAa)N
	    a->aAa->a.aAa();N
    }N
N
    // Aa a aN
    a->a->a.aAa(aAa);N
    a (a->aAa)N
	a->a->a.aAa(aAa);N
    a (a->aAaAa)N
	a->aAa->a.aAa(aAa);N
    a->aAa->aAa.aAa(aAa);N
    a->aAa->aAa.aAa(aAa);N
N
    // Aa a (a, a)N
    aAa = a->a->a.aAa();N
    aAaAa = a->aAa->aAa.aAa();N
    a (a->aAa)N
	aAa = a->a->a.aAa();N
    a (a->aAaAa)N
	aAaAa = a->aAa->a.aAa();N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAaAa *a, a AaAa *)N
{N
    // Aa a a a a a a a a aN
    // a a aN
    aAa  = a->aAaAa();N
    a (a->aAa)N
	aAa = aAa.a().a();N
    a (a->aAaAa)N
	aAa = a->aAaAa();N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAaAa *, a AaAaAa *a[0])N
{N
    // Aa a a'a a a a a aN
    a (aAaAa + 0 >= aAa) {N
	aAa *= 0;N
	aAa();N
    }N
N
    // Aa a a a a aN
    a (a a = 0; a < 0; a++) {N
N
	aAa(a[a]->aAa());N
N
	a (a->aAa)N
	    aAa(a[a]->aAa());N
N
	a (a->aAaAa)N
	    aAaAa(a[a]->aAaAa());N
N
	aAaAa(a[a]->aAaAa());N
N
	aAa++;N
	aAaAa++;N
    }N
N
    // Aa a a a a a (a a a-a-a a)N
    aAaAa(-0);N
    aAaAa++;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAaAa *, a AaAa *)N
{N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(a AaAa0a &a)N
{N
    AaAa0a aAa;N
    aAa.aAaAa(a, aAa);N
    aAa[aAa] = aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(a AaAa0a &a)N
{N
    AaAa0a aAa;N
    aAa.aAaAa(a, aAa);N
    aAa.a();N
    aAa[aAa] = aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(a aAa)N
{N
    aAaAa[aAaAa] = aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(a AaAa0a &aAa)N
{N
    // Aa a a A a AN
    AaAa0a aAaAa(aAa[0], aAa[0], 0.0);N
N
    AaAa0a aAaAa;N
    aAa.aAaAa(aAaAa, aAaAa);N
N
    AaAa0a a(aAaAa[0], aAaAa[0]);N
    aAaAa[aAa] = a;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa()N
{N
    // Aa a, a, a a a aN
    // a a a. Aa a a a a a a a a aN
    // a a a AaAaAa.N
    a aAa = aAa / 0;N
    a->aAa->aAa.aAa(aAa * 0);N
    a0_a *a = a->aAa->aAa.aAa();N
    a a = 0, a = 0;N
    a (a a = 0; a < aAa; a++) {N
	a[a++] = a++;N
	a[a++] = a++;N
	a[a++] = a++;N
	a[a++] = -0;N
    }N
    a->aAa->aAa.aAa();N
N
    // Aa a a a a a a a a a aN
    // a a aN
    a (a->aAa)N
	a->aAa->aAa = a->aAa->aAa;N
    a (a->aAaAa)N
	a->aAa->aAaAa = a->aAa->aAa;N
N
    // Aa a a a a a a a a a a aN
    a (aAa < aAa) {N
	a->a->a.aAa(aAa);N
	a (a->aAa)N
	    a->a->a.aAa(aAa);N
	a (a->aAaAa)N
	    a->aAa->a.aAa(aAa);N
    }N
    a (aAaAa < aAa)N
	a->aAa->aAa.aAa(aAaAa);N
N
    // Aa a a a, a, a a a aN
    // a a a, a a aN
    a (a->aAa)N
	a->aAa->a = AaAaAa::A_A_A;N
    a->aAa->a = AaAaAa::A_A_A;N
    a (a->aAaAa)N
	a->aAaAa->a =N
	    AaAaAaAa::A_A_A;N
}N
