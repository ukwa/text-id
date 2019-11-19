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
 |	AaAaAaAaN
 |N
 |   Aa(a): Aa Aa, Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAaAa.a>N
#a <Aa/Aa/a/AaAaAa.a>N
#a <Aa/Aa/a/AaAaAa.a>N
#a <Aa/a/AaA.a>N
#a <A/a.a>N
#a <a.a>N
N
#a <A0/Aa.a>N
#a <A0/AaAa.a>N
N
#a <Aa/Aa.a>N
N
a a *aAaAa = "AaAaAaAa";N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAaAa,N
    AaAa aAaAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A | A_A_A | A_A_A | A_A_A, N
	    A) // a Aa a a a a a N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a, a aAa = AN
    aAa(aAaAa, aAaAa, A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaA a - a a a a a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAaAa,N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A | A_A_A | A_A_A | A_A_A, N
	    A) // a Aa a a a a a N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a a, N
    // a a a a a a a a a. Aa a aAaN
    // a a a a a a.N
    aAa(aAaAa, aAaAa, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a aN
//N
// aN
//N
aN
AaAaAaAa::aAa(N
    AaAa aAaAa,N
    AaAa aAaAa, N
    AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{    N
    aAaAaAa(aAaA, a);N
    aAaAa(aAaAa);N
    N
    // a a a a aN
    aAa = a AaAa;N
    N
    // a aN
    a (aAaAa) {N
	aAa = a AaAaAa();N
	aAa->a(aAa);N
    }N
    a aAa = A;N
    N
    a (aAaAa) {N
	aAa = a AaAaAa();N
	aAa->a(aAa);N
    }N
    a aAa = A;N
    N
    // a aN
    aAa = A;N
    aAaAa = A;N
    aAa = A;N
    a = aAa = A;N
    aAa = A;N
    N
    aAa(AaAa0a(0, 0));  // a aN
    aAa(A);N
    N
    // a a aN
    aAaAa = A;N
    N
    // a a a a a a a a a.,N
    aAa = a AaAaAa(); N
    aAa->aAaAa(aA, a);N
    N
    // a a a a a a a a.N
   N
    aAaAa = a AaAaAa(); N
    aAaAa->aAaAa(aAaA, a);N
    N
    // a a aN
    aAa = aAaAa = A;N
    aAaAa = aAaAaAa = 0;N
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa)N
	aAaAa(aAa(aAaAa()));N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaN
//N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a aN
    a (a != A) {N
	a->aAaAa(AaAaAaAa::aAaA, a);N
	N
	// Aa a a a aN
	a->a(); N
    }N
N
    aAa(aAaAaAa());N
    N
    a (aAa != A)N
	a(aAa);N
    a (aAaAa != A)N
	a(aAaAa);N
N
    a (aAa != A) a aAa;N
    a (aAa != A) a aAa;N
    a aAa;N
    a aAaAa;N
    a aAa;N
    //??? a a a a a a a a a!N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAaAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a a a aN
    // a a a a a a a a.N
    aAa->a();N
    N
    aAa->aAaAa(aAa);N
    N
    // a a a a a a a a a a aN
    // a a a a a (a a a a a aN
    // a a a a a).N
    a (aAaAaAaAaAa())N
	aAaAaAa = A;N
    N
    // a a a a a a a.N
    // a a, a a'a a a a, a a aN
    // a a a a() a a a a a.N
    a (aAa() && aAa) {N
	aAa->a();N
	aAa->aAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAaAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! aAaAa())N
	a;N
N
    // Aa a a a a a a a a aN
    // a a a a a a a a.N
    aAaAa->a();N
    N
    aAaAa->aAaAa(aAa);N
    N
    // a a a a a a a.N
    // a a, a a'a a a a, a a aN
    // a a a a() a a a a a.N
    a (aAa() && aAa) {N
	aAaAa->a();N
	aAaAa->aAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a.N
//N
// a: a, aN
//N
AaAa *N
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa->aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa(a aAa, a a, a AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a (a a a a'a aN
    // a a, a a a a a a)N
    a (aAa != A)N
	a(aAa);N
    aAa = (Aa *) a(a(Aa) * a);N
    aAaAa = a;N
    Aa *a = aAa;N
    a (a a=0; a<a; a++, a++) {N
	a->a   = (a a) (a[a][0] * 0);N
	a->a = (a a) (a[a][0] * 0);N
	a->a  = (a a) (a[a][0] * 0);N
	a->a = AaAa|AaAa|AaAa;N
	a->a = aAa + a;N
    }N
N
    // a a a a a a a aN
    a (aAa != 0)N
	AaAa(aAa(), aAa, aAa, aAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAaAa(a aAa, a a, a AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! aAaAa())N
	a;N
N
    // a a a a a a (a a a a'a aN
    // a a, a a a a a a)N
    a (aAaAa != A)N
	a(aAaAa);N
    aAaAa = (Aa *) a(a(Aa) * a);N
    aAaAaAa = a;N
    Aa *a = aAaAa;N
    a (a a=0; a<a; a++, a++) {N
	a->a   = (a a) (a[a][0] * 0);N
	a->a = (a a) (a[a][0] * 0);N
	a->a  = (a a) (a[a][0] * 0);N
	a->a = AaAa|AaAa|AaAa;N
	a->a = aAa + a;N
    }N
N
    // a a a a a a a aN
    a (aAaAa != 0)N
	AaAa(aAa(), aAaAa, aAaAa, aAaAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a aN
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa(AaAaAa::AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa->aAaAa()->aAaAa(a);N
    aAa->aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a aAa a a a a (AaAaAa).N
//N
// a: aN
//N
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a aAa.N
    // Aa a a a, a, a a a a aN
    // a a (a A a a'a a a)N
    AaAaAa::aAa(a);N
    aAa(aAaAaAa());N
N
    // a a a a a aN
    AaAaAa a(aAaAaAa());N
    AaAa a;N
    a (a.aAa("aAa", "AaAa", a))N
	 aAaAa(a);N
N
    // a a a a aN
#a A_A_A_A_AN
    AaAa *a = aAaAa();N
    a (a != A) {N
	a a;N
	aAaAa(AaAa(a), a, A_A_A_A_A,N
	    &a);N
	aAaAa->aAaAa(a);N
    }N
#aN
N
    a aAaAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a aN
// (a.a. a a -> a a a a a).N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a aN
    a (aAa)N
	aAa->a();N
    N
    //N
    // Aa a a #0N
    // a a a'a a a a a, a a a/aN
    // a a a a a.N
    //N
    a (! aAaAa())N
	aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a.N
// Aa a a a a a a, a a a a'a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a'a a a a a a a aN
    a a = aAa->a(a);N
    // ??? a, a'a a a a a a a a ?N
    a (a == -0)N
	aAa->a(a);N
N
    // a a a a a aN
    a->aAaAa(aAaAa());N
N
    // Aa a a a a a a a a aN
    Aa a = aAaAa() ? aAaAa() : aAaAa();N
    a ((a != A) && (AaAa(a) != (Aa) A))N
	a->a(N
	    a,N
	    (AaAaAa) AaAaAa::aAa,N
	    (AaAa) a,N
	    AaAa(a));N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a aN
    a a = aAa->a(a);N
    a (a == -0)N
	a;N
N
    // Aa a a a a a a aN
    aAa->a(a);N
N
    // Aa a a a a a a a a aN
    Aa a = aAaAa() ? aAaAa() : aAaAa();N
    a (a)N
	a->a(N
	    a,N
	    (AaAaAa) AaAaAa::aAa,N
	    (AaAa) a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a a a a a, a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a a = 0; a < aAa->aAa(); a++) {N
	AaAaAa *a = (AaAaAa *) (*aAa)[a];N
	N
	// a a a a a...N
	a (aAa)N
	    a->a(N
		aAa, N
		(AaAaAa) AaAaAa::aAa,N
		(AaAa) a);N
	N
	// a a a a a....N
	a (aAa) {N
	    a->aAaAa(aAaAa());N
	    a->a(N
		aAa, N
		(AaAaAa) AaAaAa::aAa,N
		(AaAa) a,N
		AaAa(aAa));N
	}N
    }N
    N
    // ??? a a a a a a AaAa a a aN
    // ??? a a a a a a a a a, aN
    // ??? a a a a a a a a a a (aN
    // ??? a a a). Aa a a a a a aN
    // ??? a'a a a a a aAa a a A a aN
    // ??? a a a a a a a a.N
    //N
    // Aa a a a AaAa a AaAa a a aN
    // a a AaAaAa (a a a a a).N
    //N
    a (aAa)N
	AaAaAaAa(aAa, (AaAaAa | AaAaAa), A,N
	    (AaAaAa) AaAaAaAa::aAaA, N
	    (AaAa) a);N
    a (aAa)N
	AaAaAaAa(aAa, (AaAaAa | AaAaAa), A,N
	    (AaAaAa) AaAaAaAa::aAaA, N
	    (AaAa) a);N
    N
    aAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a a a a a a a.N
//N
// a: aN
//N
AaAaN
AaAaAaAa::aAaA(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a, a a a aN
    a (aAaAa != A)N
	a (*aAaAa)(aAaAaAa, a);N
    aN
	a A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a A a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a...N
    a (aAaA(a))N
	a;N
    N
    // ...a a a a a aN
    N
    // a a a, a a A a a a AaAaN
    // a a a a a a a a N
    a AaAa *a = A;N
    a (a a = 0; (a == A) && (a < aAa->aAa()); a++) {N
	AaAaAa *a = (AaAaAa *) (*aAa)[a];N
	a = a->aAa(a);N
    }N
    N
    // a a a, a a...N
    a (! a)N
	a;N
    N
    // a a a a a a a a a a, a aN
    // a a a a.N
    AaAa a = aAaAa->aAa(a);N
    a (! a) {N
	aAa->aAa(a);N
N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a A a a a.N
// aAaAa() a a a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa->a();N
    aAa->aAa(aAa());N
    N
    AaAaAa *a = aAa->aAaAa();N
    a->aAaAa(aAaAaAaAa(aAaAa()));N
    a->aAaAaAa(!aAaAa(aAa(), aAaAa()));N
N
    // a a a aN
    a (! aAa() && aAa != 0 && aAaAa != 0)N
	AaAa(aAa(), aAa, aAa, aAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a A a a a.N
// aAaAa() a a a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAaAa->a();N
    aAaAa->aAa(A);N
    N
    AaAaAa *a = aAaAa->aAaAa();N
    a->aAaAa(aAaAaAaAa(aAaAa()));N
    a->aAaAaAa(!aAaAa(aAa(), aAaAa()));N
N
    // a a a aN
    a (aAaAa != 0 && aAaAaAa != 0)N
	AaAa(aAa(), aAaAa, aAaAa, aAaAaAa);N
    N
    // a a a a a a aN
    aAa(aAaAa());N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a (AaAaAa) a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa->aAaAa(aAa);N
    aAaAa->aAaAa(aAa);N
    N
    // a a a a a a aN
    a (a a = 0; a < aAa->aAa(); a++) {N
	AaAaAa *a = (AaAaAa *) (*aAa)[a];N
	a->aAaAa(aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a (a a).N
//N
// a: aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aAa a a, a a'a a a a aN
    a (! aAa)N
	a;N
    N
    // Aa a a aN
    aAa->a();N
    aAaAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a.N
//N
// a: aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    aAa->a();N
    aAaAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a-a a a a. Aa a a, a a a aN
// a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aAa)N
	a;N
N
    aAa = a;N
N
    a (aAa) {N
	a (aAa())N
	    a();N
    }N
    aN
	a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa->a(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAaAa->a(aAaAa);    N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a (a a a a a aN
// a a a)N
//N
// a: a aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a a a a a a a aN
    // a (a a a a a a a a a a aN
    // a a a a a a a'a a 0 a).N
    a (!aAa() || aAaAa)N
	a;N
    N
    // a a aN
    aAaAa(aAa(), aAaAa(), aAaAa());N
    N
    // a a a a a a a a a a a (aN
    // a a a a a a a a a a a a a)N
    a (aAaAaAa && aAaAaAaAaAa() && aAaAa()) {N
	N
	// ??? a a 0 - a a a a a a aN
	// ??? a a a a a a a a a a ( aAa() aN
	// ??? a a a a a a) a a a A aN
	// ??? a a a (Aa a Aa0).N
	// N
	// ??? Aa: a a a 0 (a a a a aN
	// ??? a a a a, a a a a a).N
	//N
	a (aAa()) {N
	    AaAa a = aAaAa();N
	    aAaAa(a[0], a[0], a[0], 0);N
	} aN
	    aAaAa(aAaAa());N
	aAa(A_A_A_A);N
	aAaAa(aAa(), aAaAa());N
	// ??? a a A aN
	N
	aAaAa(A_A); // Aa a a aN
	aAaAa(A_A);N
    }N
    N
    // a a a! (a a a...)N
    aAa();N
    N
    // a a a!N
    a (aAaAa()) {N
	a (aAaAaAa && aAaAaAaAaAa()) {N
	    // a a a a a - a a a a a N
	    // a a a a a a a a a a a aN
	    aAaAa(A_A); // Aa a a aN
	    aAaAa(A_A);N
	    aAa();N
	}N
	aN
	    aAaAa(aAa(), aAaAa());N
    }N
    aN
	aAa();N
    N
    // a a a a a a a aN
    aAaAaAa = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a A a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa(AaAa a, a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *a = aAaAa();N
N
    a (a == a->aAa() && aAa == a->aAaAa())N
	a;N
    N
    // Aa a a a a a a a a a a aN
    // a a aN
    AaAa aAaAaAa = ((aAa >  0 && a->aAaAa() == 0) ||N
				 (aAa == 0 && a->aAaAa() >  0));N
N
    //N
    // a a a a a a a a - a a aN
    // a a a a a a a a, a aN
    // a a a.N
    //N
    a (aAaAaAa) {N
	N
	a a = 0;N
	a aAa[0];N
	N
	a (aAa()) {N
	    aAa[a++] = A_A;N
	    aAa[a++] = A_A_A;N
	    aAa[a++] = 0;N
	    aAa[a++] = A_A_A;N
	    aAa[a++] = 0;N
	    aAa[a++] = A_A_A;N
	    aAa[a++] = 0;N
	}N
	// a a a a...N
	aAa[a++] = A_A_A;N
	aAa[a++] = 0;N
	a (aAaAa())N
	    aAa[a++] = A_A;N
	N
	// a a a a aN
	a (aAa > 0) {N
	    aAa[a++] = A_A_A_A;N
	    aAa[a++] = 0;N
	    aAa[a++] = A_A_A_A;N
	    aAa[a++] = 0;N
	    aAa[a++] = A_A_A_A;N
	    aAa[a++] = 0;N
	}N
N
	// a a a aN
	Aa a = aAa();N
	AaAa *aAa = aAaAa();N
	a (aAa) {N
	    a a;N
	    aAaAa(AaAa(a), aAa, A_A_A, &a);N
	    a (a) {N
		aAa[a++] = A_A_A;N
		aAa[a++] = a;N
	    }N
	}N
N
	aAa[a++] = (a) Aa;N
	N
	// a a aN
	AaAa *a = aAaAa(AaAa(a), N
	    AaAaAaAa(AaAa(a)), aAa);N
	N
	a (! a) {N
#a AN
	    AaAaAa::a("AaAaAaAa::aAa",N
			     "a a a A a");N
#aN
	    a;N
	}N
	N
	// a a a a a a aN
	aAaAa(a);N
	N
	// A a a a a - a a a aN
	Aa(a);N
    }N
    a // a a a a a a, a a aN
	aAa->aAa();N
    N
    // a a a a a a a aN
    aAa->aAa(a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a (aN
// a a a a a a a a).N
//N
// a: a aN
//N
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (!aAa() || aAaAa() == (Aa) A)N
	a;N
    N
    // a a aN
    aAaAa(aAa(), aAaAa(), aAaAa());N
    N
    // a a a! (a a a...)N
    aAaAa();N
    N
    aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa())N
	aAa->aAa();N
    aN
	a(); N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa())N
	aAaAa->aAa();N
    aN
	aAa(); N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a aN
// a.N
//N
// aN
//N
aN
AaAaAaAa::aAaAaAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a aN
    a (a != A)N
	a->a();N
	N
    // Aa a a a a a aN
    a (a != A) {N
	a->aAaAa(AaAaAaAa::aAaA, a);N
	N
	// Aa a a a aN
	a->a(); N
    }N
N
    a = a;N
    N
    // Aa a a a a a a. (Aa'a a a'a a a a a)N
    a (a != A)N
	a->aAaAa(AaAaAaAa::aAaA, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a aN
// a.N
//N
// aN
//N
aN
AaAaAaAa::aAaAaAaAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a aN
    a (aAa != A)N
	aAa->aAaAa(AaAaAaAa::aAaAaA, a);N
N
    aAa = a;N
    N
    // Aa a a a a a aN
    a (aAa != A)N
	aAa->aAaAa(AaAaAaAa::aAaAaA, a);N
}N
N
N
N
//N
// a a a a aN
//N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a aAaAa; }N
N
a a *N
AaAaAaAa::aAaAa() aN
{ a "Aa AaAa"; }N
N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a "Aa AaAa"; }N
N
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
N
N
N
#a <Aa/Aa/AaAa.a>N
//N
// Aa a a a/a a a a. Aa a aN
// a a a a/a a Aa (a a a aN
// A a a, a a a a a a a aN
// a a).N
//N
// Aa a a a AaAa a AaAa a a aN
// a a AaAaAa (a a a a a).N
//N
aN
AaAaAaAa::aAaA(Aa a, AaAaAaAa *a, AaAa *a, Aa *)N
{N
    a (a->a == AaAa) {N
	// a a a....N
	a (a->aAaAa())N
	    AaAaAa(a->aAaAa(), AaA_A);N
	aN
	    AaAaAa(a->aAaAa(), AaA_A);N
	N
    } a a (a->a == AaAa) {N
	// a a a...N
	AaAaAa(AaAa::aAaAa(a), AaA_A);N
	N
	// a a a a a a aN
	AaAaAa *aAa = a->aAa->aAaAa();N
	a (aAa)N
	    AaAaAa::aAaAaAa(aAa);N
N
    }N
}N
N
//N
// a a a a a a a aN
//N
aN
AaAaAaAa::aAaA(a *a, AaAa a)N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    N
    a (a)N
	a->a();N
    a {N
	// a a a a - a a a a a aN
	// (a a a a a a) a a a a aN
	// a a a a (a a a + a)N
	a->aAaAa = A;N
	N
	a->a();N
    }N
}N
N
N
aN
AaAaAaAa::aAaA(a *a, AaAa *)N
{N
    ((AaAaAaAa *)a)->aAa();N
}N
N
aN
AaAaAaAa::aAaAaA(a *a, AaAa *)N
{N
    ((AaAaAaAa *)a)->aAaAa();N
}N
N
aN
AaAaAaAa::aA(a *a, AaAaAa *)N
{N
    ((AaAaAaAa *)a)->a();N
}N
N
aN
AaAaAaAa::aAaA(a *a, AaAaAa *)N
{N
    ((AaAaAaAa *)a)->aAa();N
}N
