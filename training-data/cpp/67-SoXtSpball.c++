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
 * Aa (A) 0,0,0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |	AaAaAaN
 |N
 |   Aa(a): Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <Aa/AaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
N
#a <A0/Aa.a>N
#a <A0/a/A.a>N
N
a "A" {N
AaAa *AaAaAa(Aa *, a *);N
Aa	    *AaAa(Aa *, A);N
a	    AaAaAa(Aa *, Aa, AaAa *, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a (a a AaAa::a).N
//N
// aN
//N
AaAaAa::AaAaAa(AaAaAa::Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa(AaAa::aAa(), aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a.N
//N
// aN
//N
AaAaAa::AaAaAa(Aa *a, AaAaAa::Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa(a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a.N
//N
// aN
//N
aN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa::Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A) {N
#a AN
	AaAaAa::a("AaAaAa::AaAaAa()",N
	    "a a A.\a");N
#aN
	a;N
    }N
    	N
    aAa = aAa;N
    aAa = a AaAa0Aa;N
    aAa = a AaAaAaAa;N
    N
    // a a a a a aN
    aAa = .0;N
    aAa = .0;N
    N
    // a a a a a a a a a a a a aN
    AaAaAa  a;N
    a		    aAa;N
    N
    a = (AaAaAa) AaAaAa(a, &aAa);N
    N
    // a a a a a a a a a aN
    a = A;N
    a (a a = 0; a < aAa; a++) {N
	// Aa a a a - a a a a a a a.N
	a (a(a[a].a, "a") == 0) {N
	    a = AaAa(a, a[a].a);N
	}N
    }N
    N
    // a a a a a a aN
    a (a == A) {N
#a AN
	AaAaAa::a("AaAaAa::AaAaAa",N
		"Aa a a a Aa a a a a");N
#aN
	a;N
    }N
    N
    // a a a a a aN
    a0_a   aAa;N
    aAaAa = 0;N
    N
    a (aAa & AaAaAa::A)  {N
	AaAaAa(a, aAaAa, aAa);N
	aAa[aAaAa] = aAa;N
	aAa[aAaAa] = aAaAa;N
	aAaAa++;N
    }N
    N
    a (aAa & AaAaAa::A) { N
	AaAaAa(a, aAaAaAa, aAa);N
	aAa[aAaAa] = aAa;N
	aAa[aAaAa] = aAaAaAa;N
	aAaAa++;N
    }N
    N
    a (aAa & AaAaAa::A) { N
	AaAaAa(a, aAaAaAa, aAa);N
	aAa[aAaAa] = aAa;N
	aAa[aAaAa] = aAaAaAa;N
	aAaAa++;N
    }N
    N
#a AN
    a (aAaAa == 0) {N
	AaAaAa::aAa("AaAaAa::AaAaAa",N
		"aAa a A. Aa a a a a a");N
    }N
#aN
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa.N
//N
// aN
//N
AaAaAa::~AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   a a a a a a a a a a.N
//N
// a, aN
//N
AaAaN
AaAaAa::a(Aa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a a a a a aN
    AaAaAa  a;N
    a		    aAa;N
    N
    a (a == A) {N
#a AN
	AaAaAa::a("AaAaAa::a()",N
	    "a a A.\a");N
#aN
	a A;N
    }N
    N
    a = (AaAaAa) AaAaAa(a, &aAa);N
    N
    // a a a a a a a a a aN
    a a;N
    a (a = 0; (a < aAa) &&N
		    (a(a[a].a, "a") != 0); a++)N
	; // a a a aN
N
    // a a a a a a a a a a aAa,N
    // a a a a a a a. N
    a (a < aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a a.N
// Aa a a a a, a a a a a aAa.N
//N
// a aN
//N
aN
AaAaAa::a(N
    Aa a,N
    AaAaAa a, N
    AaAa aAa,N
    Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa == 0)N
	a;N
	N
    a (a == A) {N
#a AN
	AaAaAa::a("AaAaAa::a",N
		"a a A.");N
#aN
	a;N
    }N
    N
    a (a == (Aa) A) {N
#a AN
	AaAaAa::a("AaAaAa::a",N
		"a a a a (Aa a A).");N
#aN
	a;N
    }N
    N
    Aa *a = AaAa(a);N
    a (a == A) {N
#a AN
	AaAaAa::a("AaAaAa::a()",N
	    "a a A.\a");N
#aN
	a;N
    }N
    N
    // a a a a a a a a a aN
    AaAaAa(a, a, aAa, aAaAa);N
    N
    // a Aa a a a a!N
    a (a a = 0; a < aAaAa; a++)N
	AaAa::aAaAaAa(a, aAa[a], a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a a,N
// a.a. a a a a a a a.N
//N
// a aN
//N
aN
AaAaAa::a(N
    Aa a,N
    AaAaAa a, N
    AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a Aa a a a a aN
    a (a a = 0; a < aAaAa; a++)N
	AaAa::aAaAaAa(a, aAa[a], a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a AaAa a a a A a, a a aN
// a a a a a a.N
//N
// a aN
//N
a AaAa *N
AaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = A;N
    N
    // a a a a a a aN
    a (a->a == aAaAa) {N
	AaAaAa *a = (AaAaAa *) a;N
	a (a->a == a->a_a)N
	    a = aAaAa(a);N
    }N
    a a (a->a == aAaAaAa) {N
	AaAaAa *a = (AaAaAa *) a;N
	a (a->a == a->a_a)N
	    a = aAaAa(a, AaAaAa::A);N
    }N
    a a (a->a == aAaAaAa) {N
	AaAaAa *a = (AaAaAa *) a;N
	a (a->a == a->a_a)N
	    a = aAaAa(a, AaAaAa::A);N
    }N
    N
    a a;N
}    N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a AaAa0Aa a a a A a.N
//N
// aN
//N
AaAa0Aa *N
AaAaAa::aAaAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a? - a aN
    a (a->a_a == 0)N
	a A;N
N
    // a a? - a aN
    a ((a->a_a != 0) || (a->a_a != 0))N
	a A;N
N
    // a, a a a a a	N
    aAaAa(aAa, a->a, a->a);N
    a0_a a = a->a / 0;N
    aAa->aAa(AaAa(a, 0 * (a->a - 0 * a)));N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & Aa0Aa);N
    N
    // a a a a a a a a a (a a)N
    a *a = a->a_a;N
    AaAa0a a(a[0], a[0], -a[0]);N
    a *= aAa;N
    aAa->aAa(a);N
    N
    // a a a a a a a a a (a a)N
    AaAa0a a((a) a[0], (a) a[0], (a) -a[0]);N
    a *= aAa;N
    a a = a.a();N
    a.a();N
    aAa->aAa(AaAa(a, a));N
    N
    a aAa;N
}N
    N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a AaAaAaAa a a a A a.N
//N
// aN
//N
AaAaAaAa *N
AaAaAa::aAaAa(AaAaAa *a,N
				    AaAaAa::Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAaAa(aAa, a->a, a->a);N
    a0_a a = a->a / 0;N
    aAa->aAa(AaAa(a, 0 * (a->a - 0 * a)));N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & Aa0Aa);N
    N
    // a a a a->a a a a a AaAaAa aN
    aAa->aAa((AaAaAaAa::Aa) a->a);N
    aAa->aAa(aAa);N
    N
    a aAa;N
}N
N
