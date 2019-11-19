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
 |   Aa	: AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
#a <a.a>N
#a <a.a>N
#a <A0/Aa.a>N
#a <A0/Aa.a>N
#a <A0/a.a>N
N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaAa.a>N
N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
#a "AaAaAaAa.a"N
#a <Aa/a/AaA.a>N
N
N
#a AN
#a <Aa/a/AaAaAa.a>N
#a <AaAa.a>N
#aN
N
/*N
 *  AaN
 */N
N
a AaAa {N
    A_A, N
    A_A, N
    A_A_A, N
    A_A, N
    A_A_A, N
    A_A_A, N
    A_AN
};N
N
// a a a a aN
a {N
    A_A = 0,N
    A_AN
};N
N
N
// a a a a a, a a a a a a a a.N
#a A_A_A 0N
N
N
// Aa a a.N
a a {N
	a *aAa;N
	a *a;N
	a *a;N
	a *aAa;N
	a *a;N
	a *a;N
	a *aAaAa;N
} A_A;N
a A_A a;N
N
a a *aAa[]={ N
	"Aa Aa",  N
	"Aa", N
	"Aa",N
	"Aa Aa Aa Aa",N
	"Aa",  N
	"Aa",   N
	"a a:"N
};N
N
N
//N
// Aa a a a a aN
//N
a *AaAaAaAa::aAa = "\N
#Aa A0.0 a\a\N
\N
Aa { \N
    AaAa { a A } \N
    AaAa { a A_A } \N
    AaAa { a A_A } \N
    AaAa { aAa 0 } \N
    Aa0 { a [0 0 0, 0 0 0, 0 0 0, 0 0 0] } \N
    AaAa { a [0 0 0, 0 0 0, 0 0 0] } \N
    AaAaAa { aAa [0, 0, 0, -0, 0, 0] } \N
     \N
    AaAa { a A } \N
    AaAa { a A } \N
    Aa { a .0 } \N
    Aa { \N
    	Aa { \N
	    aAa    [ 0.0 0 0 ] \N
	    aAa   [ 0.0 0 0 ] \N
	} \N
	Aa { a 0 0 0 } \N
    	AaA { a A a -0.0 } \N
    	Aa { aAa .0 a .0 } \N
    } \N
    Aa { \N
    	Aa { \N
	    aAa    [ 0 0.0 0 ] \N
	    aAa   [ 0 0.0 0 ] \N
	} \N
	Aa { a 0 0 0 } \N
    	Aa { aAa .0 a .0 } \N
    } \N
    Aa { \N
	aAa    [ 0 0 0.0 ] \N
	aAa   [ 0 0 0.0 ] \N
    } \N
    Aa { a 0 0 0 } \N
    AaA { a A a 0.0 } \N
    Aa { aAa .0 a .0 } \N
} ";N
N
N
a a *aAaAa = "AaAaAaAa";N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAaAaAa::AaAa a, N
    AaAaAa::Aa a)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    a, N
	    a, N
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
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAaAaAa::AaAa a, N
    AaAaAa::Aa a, N
    AaAa aAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    a,  N
	    a, N
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
AaAaAaAa::aAa(AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    aAaAaAa(aAaA, a);N
    a = aAa() ? A_A : A_A;N
    aAa = A;N
    aAa = aAa = aAa = aAa = 0;N
    aAa = A;N
    aAa( AaAa0a(0, 0) );  // a aN
    aAaAa(aAaAa);N
    N
    // a a a a aN
    aAa = A;N
    aAa = A;N
    aAa = A;N
    aAa = 0.0;N
    aAaAa = A;N
    N
    // a a aN
    aAa = A;N
    aAa = A;N
    aAa = a AaAa[A_A_A];N
    aAaAa = 0;N
    aAa = aN
	AaAaAa(AaAaAaAa::aAaA, a);N
#a AN
    a (AaAa::AaAa("A_A_A")) {N
	AaAa::AaAa("aAaAa", aAa);N
    }N
#aN
    N
    // a a a aN
    AaAaAa a;N
    a.a(-0, 0, -0, 0, -0, 0);N
    aAa = a AaAaAaAa;N
    aAa->aAaAa( a );N
    aAa->aAa( AaAa( AaAa0a(0, 0, 0), .0) );N
    N
    // Aa aAa.    N
    a (a a=0; a<A_A; a++)N
	aAa[a] = A;N
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
// Aa:N
//    Aa.N
//N
// Aa: aN
N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
    N
    a (a a=0; a<A_A; a++)N
	a aAa[a];N
    N
    a aAa;N
    a (aAa)N
	aAa->a();N
    N
    // a a a aN
    a (aAa()) {N
	Aa *a = aAa();N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
    }N
    N
    a [] aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa/a a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAa(AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (a == A || aAa == aAa) {N
	aAa = aAa;N
	a;N
    }N
    N
    //N
    // a a a a a a/a a a aN
    //N
    AaAaAa a;N
    a (aAa)N
	a.aAa(a);N
    a {N
	a.aAa(aAa);N
	a.aAaAa(A); // a a A a a aN
    }N
    a.a(aAa);N
    AaAaAa *aAa = (AaAaAa *) a.aAa();N
    a (!aAa) {N
#a AN
	AaAaAa::a("AaAaAaAa::aAaAa",N
			    aAa ? "A: a a a a a" :N
			    "A: a a a a a a");N
#aN
	a;N
    }N
    AaAa *a = (AaAa *) aAa->aAaAaAa(0);N
    N
    aAa = aAa;N
    N
    // a a a a a a aN
    a (!aAa)N
	aAaAa();N
    N
    //N
    // a/a a a a aN
    //N
    N
    a (aAa) {N
	a aAa;N
	N
	// a a a a a a a a a a a a aN
	// (A a a a a a a a a). AaN
	// a a a a a a a a a.N
	a (a->aAaAa(AaAa::aAaAaAa())) {N
	    AaAa *aAa = a;N
	    a = (AaAa *) aAa->aAaAaAa(0);N
	    aAa = a->aAa(aAa);N
	}N
	aN
	    aAa = a->aAa(a);N
	N
	// a a a a a a (a a a a a !)N
	a (a->aAa(aAa) >= 0)N
	    a;N
	N
	// a a a a a a a+a (a+0)N
	a (aAa >= 0) {N
	    a (aAa())N
		a->aAa(aAa, aAa+0);N
	    aN
		a->aAa(aAa, aAa+0);N
	}N
	N
	// a a a a a a a a a a a aN
	// a a a a a a a a a aN
	aAa->aAa.aAa(aAa ? A_A_A : A_A_A);N
    }N
    a {N
	a (a->aAa(aAa) >= 0)N
	    a->aAa(aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == aAa)N
	a;N
    N
    // a a a a a (a a a a a a a a a)N
    aAa = aAa;N
    a (aAaAa() && aAa())N
	aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a aAa.N
//N
// Aa: a aN
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    a ( aAa() )N
    	aAa();N
    N
    // a a a a aN
    a (aAa && aAa() && aAa)N
	aAa->aAa.aAa( A_A_A );N
    N
    // a a a aN
    AaAaAaAa::aAa();N
    N
    // a a a a a aN
    a (aAa && aAa() && aAa)N
	aAa->aAa.aAa( A_A_A );N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    a ( aAa() )N
    	aAa();N
    N
    // a a a aN
    AaAaAaAa::aAaAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a/a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aAa)N
	a;N
    N
    // a a a a a a a a a a a N
    // a a aN
    a (aAa != A && (a == A || N
	aAa->aAaAa() != a->aAaAa())) {N
	a (aAa->aAaAa(AaAaAa::aAaAaAa())) {N
	    a (aAa[A_A])N
		aAa[A_A]->aAa(a_a_a_a, N
		    a_a_a_a, a_a_a_a);N
	    aAaAaAa(a.a);N
	}N
	a {N
	    a (aAa[A_A])N
		aAa[A_A]->aAa(a_a_a_a, N
		    a_a_a_a, a_a_a_a);N
	    aAaAaAa(a.a);N
	}N
    }N
    N
    // a a a a a aN
    a ( aAa ) {N
	aAaAa(A);N
	aAa = A;  // a a a a aN
    }N
    N
    // a a aN
    AaAaAaAa::aAa(aAa);N
    N
    // a a a aN
    a ( aAa ) {N
	aAa = A; // a a a a aN
	aAaAa(A);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a a a,N
//  a a/a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aAa)N
	a;N
    N
    // a a a aN
    AaAaAaAa::aAa(a);N
    N
    aAa(aAa() ? A_A : A_A);N
    N
    // a/a a a a a a a a aN
    a (aAa && aAa)N
	aAa->aAa.aAa(aAa ? A_A_A : A_A_A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa/Aa a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aAaAa)N
	a;N
    N
    aAaAa = a;N
    N
    a (! aAa())N
	a;N
    N
    aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAaAa(a) )N
	a;N
    N
    a (!aAa)N
	aAa();N
    N
    AaAa    *a;N
    AaAa    *a;N
    AaAa	    *a;N
    AaAa  *a;N
    AaAa	    a;N
    N
    AaAa0a aAa = aAaAa();N
    N
    a(a->a) {N
    a AaAa:N
    a AaAa:N
	a = (AaAa *)a;N
	a (a->a != Aa0 && a->a != Aa0)N
	    a;N
	N
	a[0] = a->a;N
	a[0] = aAa[0] - a->a;N
	N
	a (a == A_A) {N
	    a (a->a == AaAa)N
		aAaAa(a);N
	}N
	a {N
	    a (a->a == AaAa)N
		aAaAa();N
	    a { //... AaAaN
		N
		// a a a a a a aN
		a (a == A_A_A && aAa N
		    && aAaAa == a->a) {N
		    aAa = A;N
		    aAa = A;N
		    aAa->a(aAaAa);N
		    aAaAa();N
		}N
		N
		aAaAa();N
	    }N
	    aAaAa(a->a);N
	}N
	a (a->a == AaAa)N
	    aAa();N
	a;N
	N
    a AaAa:N
    a AaAa:N
	a = (AaAa *)a;N
	a = AaAa(a, 0);N
	N
	a[0] = a->a;N
	a[0] = aAa[0] - a->a;N
	a (a == A_Aa_A || a == A_Aa_A)N
	    aAaAa(a->a);N
	a;N
	N
    a AaAa:N
	a = (AaAa *)a;N
	a (a) {N
	    a A_A_A:N
		aAaAa = a->a;N
		aAa(AaAa0a(a->a/a(aAa[0]), (aAa[0] - a->a)/a(aAa[0])));N
		a;N
	    a A_A_A:N
		aAa(AaAa0a(a->a/a(aAa[0]), (aAa[0] - a->a)/a(aAa[0])));N
		a;N
	    a A_A_A:N
		aAa( AaAa0a(a->a, aAa[0] - a->a) );N
		a;N
	}N
	a;N
	N
    a AaAa:N
    a AaAa:N
	a = (AaAa *)a;N
	//N
	// a a a a a Aa-a a a aN
	// a a a a a a a-a a, a a aN
	// a a a Aa a a a a a, a a'a a aN
	// a Aa-a a a a (a a a) a a a a a N
	// a a (a a a a aAa).N
	//N
	a (! (a->a & AaAa))N
	    a;N
	a (a->a & Aa0Aa || a->a & Aa0Aa)N
	    a;N
	a (a->a == AaAa)N
	    aAa(A_A);N
	aN
	    aAaAa(a->a);N
	a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAa(a a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // ??? A - a a A a a a N
    // ??? AaAaAa::aAaAa() a a a a aN
    // ??? a AaAaAa::aAaAa(). N
    // ??? (Aa a a a a a a a a aN
    // ??? a a a a a a. A)N
    N
    // A+A aN
    a (a & Aa0Aa && a & Aa0Aa) {N
	aAa(A_A_A);N
    }N
    N
    // A aN
    a a (a & Aa0Aa) {N
	a (a & AaAa)N
	    aAa(A_A_A);N
	aN
	    aAa(A_A_A);N
    }N
    N
    // A AN
    a a (a & Aa0Aa) {N
	a (a & AaAa)N
	    aAa(A_A_A);N
	aN
	    aAa(A_A_A);N
    }N
    N
    // a a a...N
    a {N
	a (a & AaAa)N
	    aAa(A_A);N
	aN
	    aAa(A_A);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa aAa = aAaAaAa();N
    AaAa0a aAa = aAaAa();N
    N
    // a a aN
    a aAa = a;N
    a = aAa;N
    N
    // a a aN
    aAa();N
    N
    // a a a a aN
    a (aAa) {N
	a A_A:N
	    a (aAa && AaAa(aAa)) {N
		// ???? a a a a a A a a a a aN
		// a a a a a, a a a aN
		// a a a (a a a). AaN
		// a a A a a a A a.N
		Aa a_a, a_a;N
		a a_a_a, a_a_a;N
		a a_a_a, a_a_a;N
		a a a_a;N
		AaAa(AaAa(aAa), AaAa(aAa), N
		    &a_a, &a_a,N
		    &a_a_a, &a_a_a, &a_a_a, N
		    &a_a_a, &a_a);N
		a (a_a & Aa0Aa && aAa != A_A)N
		    aAaAa();N
		a (a_a & Aa0Aa && aAa != A_A)N
		    aAaAa();N
	    }N
	    aAa();N
	    a;N
	    N
	a A_A_A:N
	    // a a a a a aN
	    aAa->a(N
		AaAa0a(a[0]/a(aAa[0]), a[0]/a(aAa[0])) );N
	    N
	    // a a a aN
	    aAa = 0;N
	    aAa = -0;N
	    a;N
	    N
	a A_A_A:N
	    {N
	    // Aa a a a aN
	    AaAa a;N
	    a = a->a.aAa();N
	    AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
	    AaAa0a a = a->a.aAa() + N
		a * a->aAa.aAa();N
	    a = AaAa(a, a);N
	    N
	    // a a a a a a a aN
	    AaAaAa    aAa;N
	    AaAa	    a;N
	    aAa = a->aAaAa(aAa[0]/a(aAa[0]));N
	    aAa.aAaAaAa(N
		AaAa0a(a[0]/a(aAa[0]), a[0]/a(aAa[0])), a);N
	    a.a(a, a0A);N
	    }N
	    a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a = aAaAaAa();N
    Aa *a = a ? AaAa(a) : A;N
    Aa a = a ? AaAa(a) : 0;N
    N
    a (! a)N
	a;N
    N
    a (! aAa)N
	aAa();N
    N
    // a a a a a a, a a a'a a a a a.N
    // Aa a a a a a.N
    a (! aAaAa) {N
	AaAa(a, a);N
	a;N
    }N
    N
    // ...a a a a a a a a a....N
    a(a) {N
	a A_A:N
	    AaAa(a, a);N
	    a;N
	    N
	a A_A:N
	a A_A_A:N
	    AaAa(a, a, aAa);N
	    a;N
	    N
	a A_A_A:N
	    AaAa(a, a, aAa);N
	    a;N
	    N
	a A_A:N
	a A_A_A:N
	    AaAa(a, a, aAa);N
	    a;N
	    N
	a A_A:N
	    AaAa(a, a, aAa);N
	    a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aN
    // ??? a a a a a a a a a a aN
    a (aAa() && aAa && a != A && aAa) {N
	N
	// a a a a a a a a aN
	AaAa a;N
	a = a->a.aAa();N
	AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
	aAaAa->a = a->a.aAa() + N
	    a->aAa.aAa() * a;N
	N
	// a a a a a a a a aN
	a a;N
	a (a->aAaAa(AaAaAa::aAaAaAa())) {N
	    a a = ((AaAaAa *)a)->aAa.aAa();N
	    a = a->aAa.aAa() * a(a/0);N
	}N
	a a (a->aAaAa(AaAaAa::aAaAaAa()))N
	    a = ((AaAaAa *)a)->a.aAa() / 0;N
	N
	// ??? aAaAa[0] == 0 a a a a, a a a a aN
	// ??? a a a a 0 a a a a a !! (a)N
	a (aAaAa()[0] != 0) {N
	    a a = 0.0 * a * aAa / a (aAaAa()[0]);N
	    aAaAa->aAa.aAa(a, a, a);N
	}N
    }N
    N
    // a a a a a a aN
    AaAaAaAa::aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa/a a a a a a AaN
//N
// Aa: aN
aN
AaAaAaAa::aAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == a)N
	a;N
    N
    aAa = a;N
    a ( !aAa && aAa())N
        aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a (a a)N
//N
// Aa: aN
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa) {N
	aAa = A;N
	aAa->a();N
	aAa->a();N
	aAaAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( !aAa() )N
	a;N
    N
    // a aN
    a (aAa())N
    	aAa();N
    N
    // a a a aN
    AaAaAaAa::aAaAa(a);N
    N
    a = aAaAa() ? A_A : A_A;N
    N
    aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a aN
    Aa a, a;N
    aAaAaAaAaAa(a, a);N
    N
    // a a a a aN
    Aa aAa[0];N
    a a = 0;N
    aAaAaAaAa(aAa, a, a);N
    aAa[a++] = aAaAaAaAa(a);N
    N
    aAaAaAaAaAa(aAa, a, a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a aN
//N
// Aa: aN
AaN
AaAaAaAa::aAaAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0], a[0];N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAa, aAa); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a[0] = AaAaAa("", aAaAaAaAa, a, a, a);N
    a[0] = AaAaAa("Aa a a", N
	aAaAaAa, a, A, 0);N
    AaAaAa(a[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA, N
	(AaAa) a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAa, a != A); a++;N
    AaAaAa(a[a], AaAa, aAa); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a[0] = AaAaAa("", aAaAaAaAa, a, a, a);N
    a = 0;N
    AaAaAa(a[a], AaAa, a != A); a++;N
    a[0] = AaAaAa("Aa a a a a", N
	aAaAaAa, a, a, a);N
    AaAaAa(a[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA, N
	(AaAa) a);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[0], a, a);N
    N
    // a aN
    AaAaAa(a, 0);N
    AaAaAa(a, 0);N
    N
    a (aAa && a)N
	aAaAaAa(a[0]);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a (a a "?" a a)N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a a aN
    aAaAa("AaAaAaAa.a");N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aN
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa::aAaAa();N
    aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aN
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa::aAaAa();N
    aAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a (a a a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a aN
    AaAa0a a(0, 0, 0);N
    AaAa a(a, aAaAa - aAa);N
    aAa(a);N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a (a a a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a aN
    AaAa0a a(0, 0, 0);N
    AaAa a(a, aAa - aAaAa);N
    aAa(a);N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   	Aa a a a/a a a a a a aN
//  (a a a), a a a a a (aN
//  a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    a (a->aAaAa(AaAaAa::aAaAaAa())) {N
	// a a a a aN
	AaAaAa *a = (AaAaAa *) a;N
	a->a = a->a.aAa() * a(0.0, aAa - aAaAa);N
    }N
    a {N
	// a/a a a a a a a aN
	a aAa = a->aAa.aAa();;N
	a aAaAa = aAa;N
	aAaAa *= a(0.0, aAa - aAaAa);N
	N
	// a a a aN
	AaAa a;N
	a = a->a.aAa();N
	AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
	a->a = a->a.aAa() + N
			   (aAa - aAaAa) * a;N
	a->aAa = aAaAa;N
    }N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a (a a a a aN
//  a a a a).N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a;N
    Aa a;N
    Aa *a = aAa();N
    Aa a = AaAaAa(a);N
    N
    // a aN
    a.a = 0;N
    a.a = a.a = 0;N
    N
    // a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a_a, a_a_a_a_a, a_a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a_a, a_a_a_a_a_a);N
    AaAa(a, a);N
    N
    // a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a_a, a_a_a_a_a, a_a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a_a, a_a_a_a_a_a);N
    AaAa(a, a);N
    N
    // a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a_a, a_a_a_a_a, a_a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a_a, a_a_a_a_a_a);N
    AaAa(a, a);N
    N
    // a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a, a_a_a_a_a);N
    AaAa(a, a);N
    N
    aAa = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a aN
    AaAa aAa = a->a.aAa();N
    a a = a->aAa.aAa();N
    AaAa a;N
    a = aAa;N
    AaAa0a a( -a[0][0], -a[0][0], -a[0][0]);N
    AaAa0a a = a->a.aAa()N
	+ a * a;N
    N
    // a a a a a aN
    aAa = a * aAa;N
    a->a = aAa;N
    N
    // a a a a a a a aN
    a = aAa;N
    a.aAa( -a[0][0], -a[0][0], -a[0][0]);N
    a->a = a - a * a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a aN
//  a a a a a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a a a a a a aN
    AaAaAa    aAa;N
    AaAa	    a;N
    AaAa0a	    aAa0A;N
    AaAa0a	    aAa = aAaAa();N
    aAa = a->aAaAa(aAa[0]/a(aAa[0]));N
    aAa.aAaAaAa(aAa, a);N
    a.a(a, aAa0A);N
    N
    // a a a a a a 0A a aN
    a->a = a->a.aAa() + N
	(a0A - aAa0A);N
    N
    // Aa a a a a a a a a0A aN
    // aAa0A a.  Aa a a'a, a a a aN
    // a a a0A a a aAa0A a aN
    // a a, a a a a a a aAa0A aN
    // a a a.N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a a, a a aN
//  a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a aN
    AaAa a;N
    aAa->aAaAaAa(aAa, a);N
    a.a();N
N
    aAa(a);N
    N
    // a a a aN
    aAa = ((aAa+0) % A_A_A);N
    aAa[aAa] = a;N
    N
    // a a a a aN
    a (((aAa+0) % A_A_A) == aAa)N
	aAa = ((aAa+0) % A_A_A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a/a a a a a a a.N
//  (a a), a a a a a (aN
//  a a).N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a a/a a a a a a/a.N
    // a a a a a a a a a a aN
    a a = (aAa[0] - a[0]) / 0.0;N
    N
    a (a->aAaAa(AaAaAa::aAaAaAa())) {N
	// a a a a aN
	AaAaAa *a = (AaAaAa *) a;N
	a->a = a->a.aAa() * a(0.0, a);N
    }N
    a {N
	// a/a a a a a a a aN
	a aAa = a->aAa.aAa();;N
	a aAaAa = aAa * a(0.0, a);N
	N
	// a a a aN
	AaAa a;N
	a = a->a.aAa();N
	AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
	a->a = a->a.aAa() + N
			   (aAa - aAaAa) * a;N
	a->aAa = aAaAa;N
    }N
    N
    a = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a (a a a).N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    //N
    // a a a a a a a aN
    //N
    N
    a (aAa) {N
	a aAa, a;N
	AaAa0a aAa, a;N
	N
	// a a a aN
	a a = (((aAa - aAa) + 0 + N
	    A_A_A) % A_A_A);N
	N
	// a a a a aN
	a (a < 0) {N
	    aAa();N
	    a;N
	}N
	N
	// a a a a aN
	// ??? a a a a a aN
	aAa[aAa].aAa(aAa, a);N
	N
	// a a a a aN
	aAa = 0;N
	a (a a=0; a<a; a++) {N
	    a a = (aAa + a) % A_A_A;N
	    aAa[a].aAa(a, a);N
	    aAa += a;N
	}N
	aAa /= a(a);N
	N
	aAa.aAa(aAa, aAa);N
	aAa = A;N
    }N
    N
    //N
    // a a a a aN
    //N
    aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa/a a a a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAa ) {N
	Aa a = AaAa(a);N
	Aa a[0];N
	a a;N
	N
	// a a a/a/a/a a a a aN
	aAa[0] = AaAaAa(a.aAaAa, N
	    aAaAaAa, a, A, 0);N
	N
	a = 0;N
	AaAaAa(a[a], AaAa, 0); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAaAaAa, 0); a++;N
	AaAaAa(a[a], AaAaAaAa, A); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAa, AaA); a++;N
	aAaAa = AaAaAaAa(a, A, a, a);N
	N
	AaAaAa(aAaAa, AaAaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	AaAaAa(aAaAa, AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	aAaAaAa = 0;N
	N
	a = 0;N
	a a[0];N
	a(a, "%a", a(aAa));N
	AaAaAa(a[a], AaAa, a); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAa, 0); a++;N
	aAa = AaAaAa("", aAaAaAa, N
	    a, a, a);N
	N
	AaAaAa(aAa, AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA,N
	    (AaAa) a);N
	N
	aAa[0] = AaAaAa("a", N
	    aAaAaAa, a, A, 0);N
	N
	// aN
	a = 0;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,		a); a++;N
	AaAaAa(a[a], AaAaAa,		0); a++;N
	AaAaAa(aAa[0], a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	aAa[0]); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A_A); a++;N
	AaAaAa(a[a], AaAaAa,		aAa[0]); a++;N
	AaAaAa(aAaAa, a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	aAaAa); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A_A); a++;N
	AaAaAa(a[a], AaAaAa,		aAaAa); a++;N
	AaAaAa(a[a], AaAaAa,		-0); a++;N
	AaAaAa(aAa, a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	aAa); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A_A); a++;N
	AaAaAa(a[a], AaAaAa,	aAa[0]); a++;N
	AaAaAa(aAa[0], a, a);N
	N
	// a aN
	AaAaAa(aAa[0]);N
	AaAaAa(aAaAa);N
	AaAaAa(aAa);N
	AaAaAa(aAa[0]);N
    }N
    a {N
	// a a aN
	AaAaAa(aAa[0]);N
	AaAaAa(aAa);N
	AaAaAa(aAaAa);N
	AaAaAa(aAa[0]);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a, a a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a.N
    a (aAa) {N
	AaAaAa a(a);N
	a (!a.aAa( "aAa",   "AaAa",   a.aAa ))N
	    a.aAa = aAa[0];N
	aAaAaAa(a.aAa);N
    }N
N
    // Aa a a a a a a a a a aN
    Aa a = AaAaAaAa::aAa(a);N
    N
    // Aa a a, a a aN
    a (aAa) {N
	// Aa a a a a a aN
	AaAaAa a(a);N
	AaAa a;N
	a a;N
	N
	a (a.aAa("aAa", "AaAa", a))N
	    aAaAa(a);N
	a (a.aAa("aAaAaAa", "AaAaAaAa", a))N
	    aAaAa(a);N
	a (a.aAa("aAa", "AaAa", a))N
	    aAa = a;N
        //N
	a (!a.aAa( "a", "Aa", a.a ))N
            a.a = aAa[0];N
	a (!a.aAa( "a", "Aa", a.a ))N
            a.a = aAa[0];N
	a (!a.aAa( "aAa","AaAa",a.aAa ))N
            a.aAa = aAa[0];N
	a (!a.aAa( "a", "Aa", a.a ))N
            a.a = aAa[0];N
	a (!a.aAa( "a", "Aa", a.a ))N
            a.a = aAa[0];N
	a (!a.aAa( "aAaAa", "AaAaAa", a.aAaAa ))N
            a.aAaAa = aAa[0];N
	N
	// a a aN
	aAaAaAa(a.a);N
	aAaAaAa(a.a);N
	aAaAaAa(a.aAa);N
N
	aAa = A;N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa::aAaAa(a);N
    N
    // a a aN
    aAa[A_A] = a AaAaAaAa(a, A);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    Aa a = aAa[A_A]->aAa();N
    AaAaAa(a, AaAaAa,N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    N
    // a a a a a a...N
    aAaAa->a(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	a a a a a a, a a a aN
//  a a a a a (a a a a aN
//  a a a a a a).N
//N
// Aa: aN
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a'a a a a...N
    a (aAa)N
	a;N
    N
    aAa	= a AaAa(0);N
    aAa	= a AaAa(0);N
    aAaAa	= a AaAa;N
    aAaAa	= a AaAa;N
    aAa->a();N
    aAa->aAa( aAa );N
    aAa->aAa( aAaAa );N
    aAa->aAa( aAaAa );N
    AaAa a;N
    a.aAa((a *)aAa, (a_a) a(aAa));N
    AaAa *a;N
    AaAa a = AaA::a(&a, a);N
    a (a && a != A)N
	aAa->aAa(a);N
#a AN
    aN
	AaAaAa::a("AaAaAaAa::aAaAa",N
			    "a'a a a a a");N
#aN
}N
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
{ a a.aAa; }N
N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a a.aAa; }N
N
N
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
aN
AaAaAaAa::aAaA(Aa, AaAaAaAa *a, a *)N
{ a->aAaAa(); }N
N
N
aN
AaAaAaAa::aAaA(a *a, AaAa *)N
{ ((AaAaAaAa *) a)->aAaAa(); }N
N
aN
AaAaAaAa::aAaAaAaA(Aa a, N
    AaAaAaAa *a, a *)N
{N
    a->aAaAa( AaAaAaAaAa(a) );N
}N
N
aN
AaAaAaAa::aAaAaAaA(Aa a, N
    AaAaAaAa *a, a *)N
{N
    // a/a a aN
    a->aAaAa( AaAaAaAaAa(a) );N
    N
    // a/a a a a aN
    a->aAaAaAa(a);N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    a AaAa aAa = A;N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	// a/a a a a a a a aN
	a->aAa *= a(0, (a->a - a->aAaAaAa) / 0.0);N
	a->aAaAaAa = a->a;N
	N
	// a a a aN
	a a[0];N
	a(a, "%a", a(a->aAa));N
	AaAaAaAa(a->aAa, a);N
	N
	// a a a a a a'a a a a a aN
	a (a->aAa())N
	    a->aAa();N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
aN
AaAaAaAa::aAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a > 0)N
	a->aAaAa(a);N
    aN
	a = a(a->aAa);N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%a", a);N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
// a a a a a a/a - a a, aN
// a a a a a a a (a a a a aN
// a a a a).N
//N
aN
AaAaAaAa::aAaA(a *a, AaAa a)N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    N
    // a a a a a a/a a....N
    a (! a->aAa)N
	a;N
    N
    a (a) {N
	// a a a a a a a a a aN
	a->aAa->a(aAaAa);N
    }N
    a {N
	// a a, a a a a, a a'a a aN
	// aAa a a a a a a a a a a a aN
	// a a a a....N
	a->aAa->a();N
	a->aAa->a();N
    }N
}N
