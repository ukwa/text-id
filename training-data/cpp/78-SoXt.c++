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
 |	AaAaN
 |	AaAaAaAaN
 |N
 |   Aa(a): Aa Aa, Aa Aa, Aa Aa, Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <Aa/a/AaAaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/AaA.a>N
#a <AaAa.a>N
#a <A0/Aa.a>N
#a <A0/Aa.a>N
#a <A0/AaAa.a>N
N
N
N
// Aa A_ a a a /a/a/A0/a/a_a.N
// Aa, a a a a a a a a a, a aN
// a a a a a a. Aa a a a a aN
// a a a.N
a "A" {N
    a a_A_aAaAa(Aa *, a, AaAa, a *);N
}N
N
N
N
#a <AaAa.a>N
N
N
a a 	aAaAaA(Aa a, Aa a, AaAa);N
a a 	aAaAaA(Aa a, Aa a, AaAa);N
N
N
// a a a Aa a a Aa a N
a AaAaAaAa {N
  a:N
    AaAaAaAa(AaAaAa a);N
N
  a:N
    AaAaAa	aAa;N
N
    AaAa		aAa;N
    AaAaAa	aAa;N
    AaAa		aAa;N
N
    AaAa		aAaAa;N
    AaAaAaAa	aAaAa;N
N
    // Aa a a a aN
    a a		aAaAa(AaAa a, AaAaAa *a);N
N
    // Aa a a a aN
    a Aa	aAaAaAa(AaAa a);N
N
    // Aa a a a a a aN
    a a		aAaAaAa(a *a);N
N
    a 		aAaAa();N
};N
N
a AaAaAaAa {N
  a:N
    AaAaAaAa(N
	Aa a,N
	a aAa,N
	AaAaAa a,N
	AaAa a);N
N
    Aa	    aAa()		{ a a; }N
    a		    aAaAa()	{ a aAa; }N
    AaAaAa  aAaAa()	{ a a; }N
    AaAa	    aAaAa()	{ a a; }N
  N
  a:N
    Aa	    a;N
    a		    aAa;N
    AaAaAa  a;N
    AaAa	    a;N
};N
N
// a aN
Aa		    AaAa::aAa = 0;N
AaAaAaAa *  AaAa::aAa = A;N
AaAa *	    AaAa::aAa = A;N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a, a, a Aa.N
// Aa a a a a a a a a.N
//N
// a aN
//N
AaN
AaAa::a(N
    a a *aAa,N
    a a *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a!N
    a (aAa != A)N
    	a aAa;N
    N
    // a Aa, a a a a a a.N
    AaAaAa aAa;N
    a *a[0];N
    a a = 0;N
    a[0] = (a *) aAa;N
    N
    aAa = AaAaAa(N
	    &aAa,		// a a a aN
	    aAa,			// a aN
	    A, 0,			// aN
	    (a *) &a, a, 	// a a a (aAa!)N
	    A,			// a_aN
	    A, 0);			// a, a_aN
N
    // a AaN
    AaA::a();N
    AaAaAa::a();N
    AaAa::a();N
    N
    // a Aa a AaN
    aAa = a AaAaAaAa(AaAaAaAaAa(aAa));N
    N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a. Aa a aN
// a a a.N
//N
// a aN
//N
aN
AaAa::a(Aa aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a!N
    a (aAa != A)N
    	a;N
N
    // a a a a a a aN
    a (aAaAa == A)N
	a;N
	N
    // a a aN
    aAa = aAaAa;N
    N
    // a AaN
    AaA::a();N
    AaAaAa::a();N
    AaAa::a();N
    N
    // a Aa a AaN
    aAa = a AaAaAaAa(AaAaAaAaAa(aAa));N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a.N
//N
// a aN
//N
aN
AaAa::a(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    a (AaAaAa(a)) {N
	// a a a-a a a a a a aN
	a (AaAa(a) != 0)N
	    AaAa(AaAa(a), AaAa(a));N
	a {N
	    AaAaAa(a);N
	    AaAa(AaAa(a), AaAa(a));N
	}N
    }N
    aN
	AaAaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a.N
//N
// a aN
//N
aN
AaAa::a(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // ??? a a a a a a a a a a aN
    // ??? a a a a a a a a a a aN
    // ??? a a a a a a a(). AaAaAa aN
    // ??? a a a a a a a a a a a a.N
    // ??? .....a a a a Aa()......N
    AaAa aAa = AaA::aAaAaAa();N
    a (aAa != AaAa::a())N
	AaA::aAaAaAa(0.0);N
    N
    a (AaAaAa(a)) {N
	a (AaAa(a))N
	    AaAa(AaAa(a), AaAa(a));N
    }N
    aN
	AaAaAa(a);N
    N
    // a Aa() a a a a a a a a a a A a, N
    // a a a a a AaAaAa a a a a N
    // a a a a. Aa a a a a a a N
    // a a a a a a A a a a a a N
    // a a. (a a 0)N
    Aa(AaAa(a), A);N
    N
    // ??? a a a. Aa a a a a a 0/0 a aN
    // ??? a a a a...a a a a a AaAa() a N
    // ??? a a a a a a a.N
    a (aAa != AaAa::a())N
	AaA::aAaAaAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a a A aN
// a.N
//N
// a aN
//N
aN
AaAa::aAaAaAa(N
    Aa a,N
    a aAaAa,N
    AaAaAa a, N
    AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == A)N
	aAa = a AaAa;N
N
    // a a a a a a a a a a a a aN
    AaAaAaAa *a = a AaAaAaAaN
	(a, aAaAa, a, aAa);N
	N
    aAa->a(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a a A aN
// a.N
//N
// a aN
//N
aN
AaAa::aAaAaAa(N
    Aa a,N
    a aAaAa,N
    AaAaAa a, N
    AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a aAa,N
    // a a a a,aAa,a, a a a.N
    AaAa a = A;N
    a (a a = 0; !a && (a < aAa->aAa()); a++) {N
	AaAaAaAa *a = N
	    (AaAaAaAa *) (*aAa)[a];N
	N
	a ((a->aAa() == a) &&N
	    (a->aAaAa() == aAaAa) &&N
	    (a->aAaAa() == a) &&N
	    (a->aAaAa() == aAa)) {N
		a = A;N
		aAa->a(a);N
	    }N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a.N
// Aa: aN
// Aa: a, a, aAaN
//N
// a aN
//N
aN
AaAa::aAaAaAa(N
    Aa *a, N
    Aa &a, N
    AaAaAa &a, N
    AaAa &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a. a a a a a a a aN
    // a a aN
    a = A;N
    a (a a = 0; (a == A) && (a < aAa->aAa()); a++) {N
	AaAaAaAa *a = N
	    (AaAaAaAa *) (*aAa)[a];N
	N
	a = AaAaAaAa(a->a.a,N
				    a->a.a);N
N
	a (a->aAa() == a) {N
	    a (a->aAaAa() == a->a) {N
		// a a a a!N
		a = a->aAaAa();N
		aAa = a->aAaAa();N
	    }N
	}N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a.N
//N
// a aN
//N
AaN
AaAa::aAa(Aa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a = Aa;N
     N
    a(a->a >= Aa) {N
	AaAaAa a;N
	AaAa aAa;N
	Aa a;N
	Aa a;N
	N
	// Aa a a a a a aN
	// a a Aa a a aN
	// a a a a aN
	AaAa::aAaAaAa(a, a, a, aAa);N
	N
	// Aa a a a!N
	a (a == A)N
	    a = Aa;N
	aN
	    (*a) (a, aAa, a, &a);N
	N
    }N
    N
    // a a a a a a a - a Aa a aN
    a a = AaAaAa(a);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a (a a a!)N
//N
// a aN
//N
aN
AaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == A) {N
#a AN
	AaAaAa::a("AaAa::aAa",N
			   "a -- AaAa::a a a");N
#aN
	a;N
    }N
    N
    // Aa a a AaAaAaAa, a a a a aN
    // a a, a a a. (Aa a a a).N
    AaAaAa a = aAaAa();N
    Aa a;N
    N
    a (;;) {N
	AaAa::aAa(a, &a);N
	AaAa::aAa(&a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a aAa.N
//N
// a aN
//N
AaAaAaN
AaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa == A ? A : AaAaAaAaAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a aAa.N
//N
// a aN
//N
Aa *N
AaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa == A ? A : AaAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a aAa.N
//N
// a aN
//N
AaN
AaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a* a a AaAa.N
//N
// a aN
//N
AaAaN
AaAa::aAa(a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    N
    a (a != A)N
	a = AaAaAa(a, AaA_A_A);N
N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a AaAa a a a*.N
//N
// a aN
//N
a *N
AaAa::aAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa a;N
    a *a = A;N
    AaAaAaAa a;N
    AaAaAa aAaA;N
    Aa a;N
    Aa aA = A;N
    Aa aA = A;N
N
    aA = AaAaAaAa(&a, a);N
    N
    a (aA)N
        aA = AaAaAaAaAa(a, &a,N
					&a, &aAaA, &a);N
N
#a AN
    a (!aA)N
	AaAaAa::a("AaAa::aAa",N
			   "AaAaAaAa a.");N
    a (!aA)N
	AaAaAa::a("AaAa::aAa",N
			   "AaAaAaAaAa a.");N
#aN
N
    a a;N
}N
N
N
//----------------------------------------------------------------------N
//N
//  AaAaAaAa - a a a a a a Aa aN
//N
//----------------------------------------------------------------------N
N
AaAaAaAa::AaAaAaAa(AaAaAa a)N
{N
    aAa  = a;N
    aAa	= A;N
    aAaAa	= A;N
    N
    AaA::aAaAa()->aAaAaN
	(AaAaAaAa::aAaAaAa,N
	 a);N
    // Aa a a a a a a a a a a a.N
    // Aa a a'a a a a a a a a, a a aN
    // a a a a a.N
    aAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    AaAa	aAa;N
N
    // Aa a a a a a a a, a aN
    a (AaA::aAaAa()->aAaAaAa(aAa)) {N
	// Aa a a a a a a a a a aN
	// a a.N
	a (!aAa || aAa != aAa) {N
	    a a;				// Aa aN
N
	    a (aAa) {	// a a a a a a aN
		AaAaAaAa(aAa);N
		aAa = A;N
	    }N
N
	    aAa = aAa;N
	    a = (aAa - AaAa::aAaAaAa()).aAaAa();N
N
	    aAa = AaAaAaAaAa(aAa, a > 0 ? a : 0,N
				      (AaAaAaAa)N
				      AaAaAaAa::aAaAa,N
				      (AaAa) a);N
	    aAa = A;N
#a AN
	    a (AaAa::AaAa("A_A_A")) {N
		AaAa::Aa("AaAaAaAaAa %a a\a", a);N
	    }N
#aN
	}N
    }N
    a a (aAa) {		// a a a a aN
	AaAaAaAa(aAa);N
	aAa = A;N
#a AN
	a (AaAa::AaAa("A_A_A")) {N
	    AaAa::Aa("AaAaAaAa\a");N
	}N
#aN
    }N
N
    // Aa a a a a a, a a a a aN
    a (AaA::aAaAa()->aAaAaAa()) {N
	// a a a a a a a a aN
	a (!aAaAa) {N
	    aAaAa =N
		AaAaAaAaAa(aAa,N
				 (AaAaAa)N
				 AaAaAaAa::aAaAaAa,N
				 (AaAa) a);N
	    aAaAa = A;N
#a AN
	    a (AaAa::AaAa("A_A_A")) {N
		AaAa::Aa("AaAaAaAaAa\a");N
	    }N
#aN
	}N
    }N
    a a (aAaAa) {		// a a aN
	AaAaAaAa(aAaAa);N
	aAaAa = A;N
#a AN
	a (AaAa::AaAa("A_A_A")) {N
	    AaAa::Aa("AaAaAaAa\a");N
	}N
#aN
    }N
}N
N
aN
AaAaAaAa::aAaAa(AaAa a, AaAaAa *)N
{N
    AaAaAaAa *a = (AaAaAaAa *) a;N
N
    // a a a aN
    AaA::aAaAa()->aAaAa();N
N
    // a a a a a a aN
    // a a a a a a a a a aAaAaN
    // a'a a a a a (Aa a a a a)N
    a->aAa = A;N
    a->aAaAa();N
}N
N
AaN
AaAaAaAa::aAaAaAa(AaAa a)N
{N
    AaAaAaAa *a = (AaAaAaAa *) a;N
N
    // a a a aN
    AaA::aAaAa()->aAaAa(A);N
N
    // a a a a a a aN
    // a a a a a a a a a aAaAaN
    // a'a a a a a (Aa a a a a)N
    a->aAaAa = A;N
    a->aAaAa();N
N
    // Aa a A, a a a a a.  AaN
    // a a a a a a a a a.  AaN
    // a a a a, a Aa a a a a a.N
    a A;N
}N
N
// Aa a a a a a aN
aN
AaAaAaAa::aAaAaAa(a *a)N
{N
    AaAaAaAa *a = (AaAaAaAa *) a;N
N
    // a a Aa a a a a aN
    a->aAaAa();N
}N
N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a,N
    AaAaAa a,N
    AaAa a)N
{N
    a = a;N
    aAa = a;N
    a = a;N
    a = a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a. Aa a AaAaAa/Aa a a a.N
//N
// Aa: a aN
aN
AaAa::aAaAa(Aa a, a AaAa0a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    Aa a[0];N
    AaAaAa(a[0], AaAa, a[0]);N
    AaAaAa(a[0], AaAa, a[0]);N
    AaAaAa(a, a, 0);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a.N
//N
// Aa: a aN
AaAa0aN
AaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a AaAa0a(0, 0);N
    N
    Aa a[0];N
    a _a, _a;	// A a a a a AaAaAa a a !!N
    AaAaAa(a[0], AaAa, &_a);N
    AaAaAa(a[0], AaAa, &_a);N
    AaAaAa(a, a, 0);N
    a AaAa0a(_a, _a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a aN
//N
// Aa: a aN
AaN
AaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (; a != A; a = AaAa(a))N
	a (AaAaAa(a))N
	    a a;N
    N
    a A;N
}N
N
a a aAaA(Aa a, a *, a *)N
{ AaAaAa(a); }N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a a a a a a a a a N
//N
// Aa: a aN
aN
AaAa::aAaAaAa(Aa a, N
    a *aAa, a *a0, a *a0)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // ??? Aa a a a a a a a a 'a' aN
    // ??? a a a 'a' a a a a a N
    // ??? a a a a a a a a a. N
    // ??? A a'a a a a a. Aa... (a)N
    Aa a = AaAa::aAaAa(a);N
    a (a == A)N
	a;N
    N
    Aa a[0];N
    AaAa a = AaAaAaAa(a0);N
    a (a0 != A) {N
	a = AaAaAa(a, AaAaAaAa());N
	a = AaAaAa(a, AaAaAaAa());N
	a = AaAaAa(a, AaAaAaAa(a0));N
    }N
    N
    a a = 0;N
    AaAaAa(a[a], AaAaAa, A); a++;N
    AaAaAa(a[a], AaAa, aAa); a++;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A_A_A); a++;N
    Aa a = AaAaAaAa(a, "Aa Aa", a, a);N
    AaAaAa(a);N
    N
    AaAaAa(AaAaAaAaAa(a, AaA_A_A));N
    AaAaAa(AaAaAaAaAa(a, AaA_A_A));N
    N
    // a a a a (a a a a) a aN
    AaAaAa(a, AaAaAa, N
	(AaAaAa) aAaA, (AaAa)A);N
    N
    AaAaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a. N
//N
// Aa: a aN
aN
AaAa::aAaAa(N
    Aa *a,N
    a a,N
    AaAa a,N
    a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a_A_aAaAa(a, a, a, a);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a/a a a a/a a a a aN
// a a a a (a a a) a a.N
//N
// Aa: a aN
aN
AaAa::aAaAa(Aa a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! a || ! a || ! AaAaAa(a))N
	a;N
    N
    AaAaAa(a, AaAaAa, (AaAaAa) aAaAaA, a);N
    AaAaAa(a, AaAaAa, (AaAaAa) aAaAaA, a);N
}N
N
//N
// Aa a a a a (a a a) a a a a N
// a - a a a a a a a a a a.N
//N
a aN
aAaAaA(Aa a, Aa a, AaAa)N
{N
//a("A aAaAaA a\a");N
    AaAa::aAaAaAa(a, a);N
}N
N
//N
// Aa a a a a (a a a) a a a N
// a - a a a a a a a a a a a AN
// a (a a a a 0 a a) a a a.N
//N
a aN
aAaAaA(Aa a, Aa a, AaAa)N
{N
//a("A aAaAaA a\a");N
    AaAa::aAaAaAa(a, a);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a aN
//N
// Aa: a aN
aN
AaAa::aAaAaAa(Aa a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! a || ! a || ! AaAaAa(a))N
	a;N
    N
    // a a a a A A a a a a aN
    Aa a;N
    AaAaAaAa(a, AaAa, &a, A);N
    AaAa(AaAa(a), a);N
    N
    // a a a a a a a a aN
    Aa *aAa;N
    a aAa;N
    Aa a = AaAaAa(AaAa(a),N
	AaAa(a), &aAa, &aAa);N
    N
    // a a a, a a aN
    a (!a)N
    {N
	Aa a[0];N
	a[0] = AaAa(a);N
	a[0] = AaAa(a);N
	AaAaAa(AaAa(a), AaAa(a),N
	    a, 0);N
    }N
    // a a a a a, a a a a aN
    a {N
	Aa *a = (Aa *)AaAa((a(Aa))*N
					     (aAa+0));N
	a[0] = AaAa(a);N
	a (a a=0; a<aAa; a++)N
	    a[a+0] = aAa[a];N
	AaAaAa(AaAa(a), AaAa(a),N
	    a, aAa+0);N
	AaAa((a *)a);N
	Aa((a *)aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a aN
//N
aN
AaAa::aAaAaAa(Aa a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! a || ! a || ! AaAaAa(a))N
	a;N
    N
    // a a a a a a a aN
    Aa *aAa;N
    a aAa;N
    Aa a = AaAaAa(AaAa(a),N
	AaAa(a), &aAa, &aAa);N
    N
    // a a a, a a.  Aa a a a a, aN
    a (a)N
    {N
	// a a a aN
	a (a a=0; a<aAa; a++)N
	{N
	    a (aAa[a] == AaAa(a))N
	    {N
		// a a a a, a a a a aN
		a (a++; a<aAa; a++)N
		    aAa[a-0] = aAa[a];N
		N
		AaAaAa(AaAa(a), AaAa(a),N
					aAa, aAa-0);N
		a;	// a a aN
	    }N
	}N
	Aa((a *)aAa);N
    }N
}N
N
