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
 |	AaAaAaAaAaN
 |N
 |   Aa(a):	Aa Aa, Aa Aa, Aa AaN
 |N
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <a.a>N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
N
#a <Aa/AaA.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/Aa/AaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a "_AaAaAaAa.a"N
#a "_AaAaAaAa.a"N
N
/*N
 * AaN
 */N
 N
#a A_A	    	0N
#a A_A	    	0N
N
// a a,  a a a a aN
#a a_A_A 0N
N
// a a aN
a {N
    a_A_A = 0, N
    a_A, N
    a_A, N
    a_AN
};N
N
N
// Aa a a.N
a a {N
    a *a;N
} A_A;N
a A_A a;N
a a a *a[]={N
	"Aa "N
};N
N
N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
N
N
a a *AaAaAaAaAa::aAa =N
"#Aa A0.0 a\a\N
Aa {\a\N
    A A_A_A_A Aa {\a\N
	AaAa { a A }\a\N
	Aa {\a\N
	    Aa {\a\N
		aAa .0 .0 .0\a\N
		a    0 0 0 -0.0  # A/0\a\N
		a 0 0 0.0\a\N
	    }\a\N
	    Aa {}\a\N
	}\a\N
	Aa {\a\N
	    Aa {\a\N
		aAa .0 .0 .0\a\N
		a    0 0 0 -0.0  # A/0\a\N
		a 0 0 0.0\a\N
	    }\a\N
	    Aa {}\a\N
	}\a\N
	Aa {\a\N
	    Aa {\a\N
		aAa .0 .0 .0\a\N
		a    0 0 0 -0.0  # A/0\a\N
		a 0 0 -0.0\a\N
	    }\a\N
	    Aa {}\a\N
	}\a\N
    }\a\N
    A aAaAaAa Aa {\a\N
	Aa {\a\N
	    aAa	[ 0.0 0.0 0.0 ]\a\N
	    aAa	[ 0.0 0.0 0.0 ]\a\N
	}\a\N
	AaAa { aAa 0 }\a\N
	A A_A_A_A\a\N
    }\a\N
    A aAaAaAaAa Aa {\a\N
	Aa {\a\N
	    aAa	[ 0.0 0.0 0.0 ]\a\N
	    aAa	[ 0.0 0.0 0.0 ]\a\N
	}\a\N
	AaAa { aAa 0 }\a\N
	A A_A_A_A\a\N
    }\a\N
}\a\N
";N
N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa)N
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
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa)N
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
AaAaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAaAa("AaAaAaAaAa");N
    aAaAaAa(aAaA, a);N
    aAa = A;N
    a = A;N
    aAa = a AaAaAa;N
    N
    // a a a aN
    aAa( AaAa0a(A_A, A_A) );N
N
    // a a a a a a a a aN
    AaAa a;N
    a.aAa((a *)aAa, (a_a) a(aAa));N
    AaAa *a;N
    AaAa a = AaA::a(&a, a);N
    aAaAa = a AaAaAaAa();N
    aAaAa->a();N
N
    // Aa a a a a a a.N
    AaAa *aAa = aAaAa->aAa();N
    aAa->aAa("a.a", N
			    AaAa::aAaAa("aAaAaAa"));N
    aAa->aAa("a.aAa", N
			    AaAa::aAaAa("aAaAaAaAa"));N
N
    // Aa a a a a AN
    AaAa *aAa = a AaAa;N
    aAa->a();N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.a", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.aAa.aAa", aAa);N
    aAa->aAa("a.a", aAa);N
    aAa->aAa("a.aAa", aAa);N
    aAa->a();N
N
    aAa->aAaAaAa(N
	AaAaAaAaAa::aAaAaA, a);N
N
    // A a a. Aa'a a a a aAa().N
    aAa = A;N
    aAa = A;N
    aAa = A;N
    N
N
    // AaN
    aAa = A;N
N
    // a a a a aN
    // a a a a a a a a aN
    aAa = a AaAaAa;N
    aAa->aAa((a (*)(a *, AaAa *))N
			     AaAaAaAaAa::aAaA);N
    aAa->aAa((a *) a);N
N
    // a a a a a - a a a a a a a N
    // a a a a a a a.N
    aAa = a AaAaAa;N
    aAa->aAa((a (*)(a *, AaAa *))N
			       AaAaAaAaAa::aAaA);N
    aAa->aAa((a *) a);N
    aAaAa = A;N
N
    // Aa a a a a aN
    a    	= a AaAa;N
    aAa	= a AaAaAa;N
    aAa    = a AaAa;N
    AaAa   	*a    = a AaAa;N
    AaAa	    	*a   = a AaAa;N
    AaAa    	*a = a AaAa;N
    AaAa	    	*a	    = a AaAa;N
    aAa->aAa(a);N
    aAa->aAa(a);N
    aAa->aAa(a);N
    aAa->aAa(a);N
    aAa->aAa = AaAa::A;N
    N
    a->a();N
    a->aAa(aAa);N
    a->aAa(aAaAa);N
    a->aAa(aAa);N
    N
    // a a aN
    a->aAa.aAa(0.0, 0.0, 0.0);N
    a->aAa.aAa(0.0);N
    N
    // a'a a a a a!N
    a->aAa.aAa(.0, .0, .0);N
    a->aAa.aAa(.0, .0, .0);N
    a->aAa.aAa(.0, .0, .0);N
    a->a.aAa(0.0);N
    N
    // a a aN
    a->a.aAa(0.0);N
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa.N
//N
AaAaAaAaAa::~AaAaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa())N
	a();N
N
    a aAa;N
    a aAa;N
    a aAa;N
    a aAa;N
    a->a();N
    aAaAa->a();N
    a a;N
}N
N
aN
AaAaAaAaAa::a()N
{N
    AaAaAa::a();N
    N
    // a a a a a a a a a a aN
    a (aAa != A && aAa->aAa() != A)N
	aAa->a();N
}N
N
aN
AaAaAaAaAa::a()N
{N
    AaAaAa::a();N
    a (aAa != A)N
	aAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a.N
//N
// a: aN
//N
AaN
AaAaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  a, a, a[0];N
    Aa	    a[0];N
    a	    a;N
    Aa  aA[0];N
    a	    a = 0;N
    N
    a = AaAaAaAa(a, "aAa", A, 0);N
    N
    a = AaAaAaAa(a, "aAa", A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAaAa, a); a++;N
    a[0] = AaAaAa("Aa",N
	aAaAaAaAa, a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    N
#a A_A(A,A) \N
    aA[a] = AaAaAa(A, 	\N
    	aAaAaAaAa, a, a, a); 	\N
    AaAaAa(aA[a], AaAaAa,\N
	(AaAaAa) AaAaAaAaAa::aAa,	\N
	(AaAa) A); \N
    a++;N
    N
    A_A("Aa Aa", a_A_A)N
    N
    aA[a++] = AaAaAa("a",N
    	aAaAaAa, a, A, 0);N
    N
    A_A("Aa", a_A)N
    A_A("Aa", a_A)N
N
    aA[a++] = AaAaAa("a",N
    	aAaAaAa, a, A, 0);N
    N
    A_A("Aa", a_A)N
#a A_AN
N
    // a aN
    AaAaAa(aA, a);N
    AaAaAa(a, 0);N
N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a, a a a a,N
//  a a a a a a.N
//N
// a: a aN
//N
AaN
AaAaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  	a;N
    a		a;N
    Aa		a[0];N
    N
    // a a...N
       AaAaAa a(a);N
       a (!a.aAa( "a", "Aa", a.a ))N
       a.a = (a*)a[0];N
N
    //N
    // a a a a a a a a aN
    //N
    AaAa0a a = aAa();N
    a = 0;N
    a ((a[0] != 0) && (a[0] != 0)) {N
	AaAaAa(a[a], AaAa, a[0]); a++;N
	AaAaAa(a[a], AaAa, a[0]); a++;N
    }N
    N
    // a a a aN
    Aa a = AaAaAa(aAaAa(), aAaAaAa, a, a, a);N
    N
    // a a aN
    aAa = a _AaAaAaAa(a, A, A, _AaAaAaAa::A_A);N
    aAa->aAa( a.a );N
    aAa->aAaAaAa(N
    	AaAaAaAaAa::aAaA, a);N
N
    aAa = a AaAaAaAa(a);N
    aAa->aAaAa(a);N
    aAa->aAa(aAa, AaAaAa(aAa->aAa()), 0.0);N
    N
    a = aAaAa(a);N
    N
    // AaN
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         a); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    0); a++;N
    AaAaAa(aAa->aAa(), a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         aAa->aAa()); a++;N
    AaAaAa(aAa->aAa(), a, a);N
    N
    // a a aN
    AaAaAa(a);N
    aAa->a();N
    aAa->a();N
    N
    // a a a a a a a A aN
    aAa = A;N
    aAa->aAaAa(aAaAa->a.aAa().aAa());N
    aAa = A;N
    N
    a a;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAaAa::a(AaAa *aAaAa )N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa())N
	a();N
N
    a ( aAaAa == A )N
	a;N
N
    aAaAa->a();N
    AaAaAa *aAaAaAa = (AaAaAa *) aAaAa;N
N
    a ( aAaAaAa->aAa()->aAaAa(N
		AaAaAa::aAaAaAa() ) ) {N
N
	aAa = (AaAaAa *) aAaAaAa->aAa();N
	aAa->a();N
	N
	// a a a aAaAaN
	aAa = A; // a a a aN
	aAa(aAaAa, aAa); // a,aN
	aAa = A;N
	N
	// Aa a a a a a, a a a a a, N
	// a a a a a a a aN
	// a a a aN
	AaAaAa a;N
	a.aAa( AaAa::aAaAaAa() );N
	a.a( aAaAaAa );N
	a ( a.aAa() != A  ) {N
    	    aAaAa = (AaAa *)((AaAaAa *)a.aAa())->aAa();N
	    aAaAa->a();N
	    aAaA( a, A );N
	}N
	a {N
	    // Aa, a a a a a.N
	    a ( aAaAa != A )N
		aAaAa->a();N
	    aAaAa = A;  N
	    // a a a a a a a...N
	    aAa->a.aAa( 0, 0, 0, 0 );N
	    aAa->a.aAa( 0, 0, 0 );N
	    N
	    a (aAa != A) {N
		aAa->aAa(aAa,N
			    AaAaAa(aAa->aAa()),N
			    0.0);	// a = 0.0N
	    }N
	}N
	N
	a (aAa())N
	    a();N
    }N
    aAaAa->a();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a.N
//N
// a: aN
N
aN
AaAaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa()) {N
	a();N
	a ( aAaAa != A ) {N
	    aAaAa->a();N
	    aAaAa = A;N
	}N
N
	aAa->a();N
	aAa = A;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a, a a a aN
//  a a a a a a a a.N
//N
// a: a, aN
//N
aN
AaAaAaAaAa::aAaA(N
    a *a, N
    a AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *)a;N
    N
    a (a->aAa)N
    	a;N
    N
    a (a->aAa != A) {N
    	// a a a a a a a aN
	a->aAa->a();N
	a->aAa->a.aAa(*a);N
	a->aAa->a(a->aAa);N
    }N
    N
    // a a a a a a aN
    a->aAa = A;N
    a->aAa->aAaAa(a->aAa());N
    a->aAa = A;N
    N
    // a a a aN
    a->aAa = A; // a a a aN
    a->aAaAa->a.aAa(*a);N
    a->aAa = A;N
    N
    // a a a a a a aN
    a->aAa->aAa(a->aAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a, a a aN
//  a a a a a a a a a.N
//N
// a: a, aN
//N
aN
AaAaAaAaAa::aAaA(N
    a *a, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *)a;N
    N
    a (a->aAa)N
    	a;N
    N
    a (a->aAa != A) {N
    	// a a a a a a a aN
	a->aAa->a();N
	a->aAa->a.aAa(a);N
	a->aAa->a(a->aAa);N
    }N
    N
    // a a a aN
    a->aAa = A; // a a a aN
    a->aAaAa->a.aAa(a);N
    a->aAa = A;N
    N
    // a a a a a a aN
    a->aAa->aAa(a->aAaAa);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a a aAaAa.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa != A) {N
    	aAa = A;N
	aAa->aAa(aAaAa->a.aAa());N
	aAa = A;N
    }N
	N
    a (aAa != A) {N
	// a a a a a a aN
    	aAa = A;N
	aAa->aAa(aAaAa->a.aAa());N
	aAa->aAaAa(aAaAa->a.aAa().aAa());N
	aAa = A;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAa(a AaAaAa &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa != A) {N
	aAa->a();N
	aAa(aAa, &aAa); // a,aN
	aAa->a(aAa);N
    }N
	N
    // a a a aAaAaN
    aAa = A; // a a a aN
    aAa(aAaAa, &aAa); // a,aN
    aAa = A;N
    N
    // a a a a a (aAa, a aAa)N
    aAaAa();N
    N
    // a a aN
    aAa->aAa(aAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a, a a a aAa a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAaA(AaAaAaAaAa *a,N
					  AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    // a aN
    a (a->aAa == A) {N
	AaAaAa::a("AaAaAaAaAa::aAaA",N
		"aAa a A\a");N
	a;N
    }N
#aN
    N
    a (!a->aAa())N
	a;N
    N
    // a a a aAaAaN
    a->aAa = A; // a a a aN
    a->aAa(a->aAaAa, a->aAa); // a,aN
    a->aAa = A;N
    N
    a->aAaAa();N
    N
    // a a aN
    a->aAa->aAa(a->aAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a, a a a aAaAa a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAaA(AaAaAaAaAa *a, AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( a->aAaAa != A ) {N
	AaAa aAa = a->aAaAa->a.aAa();N
	a->aAa->a.aAa( aAa );N
	a->aAa->aAa( a->aAa, N
			AaAaAa(a->aAa->aAa()), 0.0 );N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a aAa a a aAa (a a).N
//N
aN
AaAaAaAaAa::a()N
//N
// a: aN
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a a a aN
    aAaAa();N
    N
    a (aAa == A)N
	a;N
	N
    // a aAa N
    a ( aAa->aAaAa() == A) {N
	aAa->a(aAa); // a A aN
    }N
    a ( aAaAa != A ) {N
	aAaA( a, A );N
	aAa->a(aAaAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a aAa a aAa.N
//N
aN
AaAaAaAaAa::a()N
//N
// a: aN
////////////////////////////////////////////////////////////////////////N
{N
    // a aAaN
    aAa->a();N
    aAa->a();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAa(N
    Aa a,N
    a a,N
    AaAaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAaAa *a;N
    Aa	a[0];N
    N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a, a, 0);N
N
#a AN
    a (a == A) {N
	AaAaAa::a("AaAaAaAaAa::aAa",N
		"- a a A\a");N
	a;N
    }N
#aN
N
    Aa aAa = a->a->a.a;N
N
    a (a) {N
	a a_A_A:N
	    // a a a a a aN
	    a (a->aAa == A) {N
		_AaAaAaAa *a;N
		a->aAa = a = a _AaAaAaAa(N
		    AaAa::aAaAa(a->aAa()), A, A);N
		a->aAaAa(_AaAaAaAa::A);N
		a->aAa("Aa Aa Aa");N
		a->aAaAaAa(N
		    AaAaAaAaAa::aAaA, a);N
	    }N
	    N
	    a->aAa->a();N
	    a;N
	    N
	a a_A:N
	    {N
		a (a->a == A)N
		    a->a = a AaAaAa(a->aAa());N
		// Aa a a a a a a a a a a.N
		// Aa a a a a a a.N
		AaAaAa *a = a AaAaAa;N
		a->a();N
		a->a = a->aAaAa->a;N
		a->a     = a->aAaAa->a;N
		a->a = a->aAaAa->a;N
		a->a->a(a, aAa);N
		a->a();N
	    }N
	    a;N
	    N
	a a_A:N
	    a (a->a == A)N
		a->a = a AaAaAa(a->aAa());N
	N
	    a->a->a(aAa,N
				     AaAaAaAaAa::aAaA,N
				     a);N
	    a;N
	    N
	a a_A:N
	    a->aAaAa("AaAaAaAaAa.a");N
	    a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa A a a a a a a a, a aN
//  a a a. Aa a a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAaAa::aAaA(a *aAa, AaAaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) aAa;N
    N
    // Aa a a a a a a a.N
    AaAaAa	*aAa = A;N
    AaAaAa	    	*aAa = A;N
    a (a a = 0; a < aAa->aAa(); a++) {N
	AaAaAa *aA = (AaAaAa *) (*aAa)[a];N
	a (aA->aAa()->aAaAa(AaAaAa::aAaAaAa())) {N
	    aAa = (AaAaAa *) aA->aAa();N
	    a;N
	}N
	a (aA->aAa()->aAaAa(AaAaAa::aAaAaAa())) {N
	    aAa = (AaAaAa *) aA->aAa();N
	    a;N
	}N
    }N
    N
    a (aAa != A) {N
	// a a a - a a!N
	a->aAa(*aAa);N
    }N
    a a (aAa != A) {N
	// a a a - a a aAa a, a a aN
	a (a->aAa != A) {N
	    // a a a a a a a aN
	    a->aAa->a();N
	    a->aAa->a.aAa(aAa->a[0]);N
	    a->aAa->a(a->aAa);N
	}N
	a->aAa = A; // a a a aN
	a->aAaAa->a.aAa(aAa->a[0]);N
	a->aAa = A;N
N
	a->aAaAa();N
    N
	// a a a a a a a aN
	a->aAa->aAa(a->aAaAa);N
    }N
    N
    // Aa a a a a a a a a.N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa A a a a a a a a, a aN
//  a a a. Aa a a a a a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAaAa::aAa(N
    AaAaAa *a,N
    a AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a->a.aAa(a->a.aAa());N
    a->a.aAa(a->a.aAa());N
    a->a.aAa(a->a.aAa());N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a aAaAa a.N
//  Aa a a a a a, a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAaAa::aAaAaA(a *aAa, AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) aAa;N
    N
    a (a->aAa)N
	a;N
	N
    // a a a a, a a aN
    a (a->aAa != A) {N
	a->aAa->a();N
	a->aAa->a.aAa(N
				a->aAaAa->a.aAa());N
	a->aAa->a(a->aAa);N
    }N
    N
    // a a aN
    a->aAa->aAa(a->aAaAa);N
}N
N
//N
// a a a a a a a aN
//N
aN
AaAaAaAaAa::aAaA(a *a, AaAa a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *)a;N
    N
    a (a)N
	a->a();N
    aN
	a->a();N
}N
N
N
//N
// a a a a aN
//N
a a *N
AaAaAaAaAa::aAaAaAa() aN
{ a "AaAaAaAaAa"; }N
N
a a *N
AaAaAaAaAa::aAaAa() aN
{ a "Aa Aa Aa"; }N
N
a a *N
AaAaAaAaAa::aAaAaAa() aN
{ a "Aa Aa Aa"; }N
