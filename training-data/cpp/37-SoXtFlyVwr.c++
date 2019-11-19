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
 * Aa (A) 0,0   Aa Aa, Aa.N
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
N
#a <a.a>N
#a <A0/Aa.a>N
#a <A0/Aa.a>N
#a <A0/a.a>N
N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
N
#a <Aa/AaA.a>N
#a <Aa/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/a/AaA.a>N
N
N
/*N
 * AaN
 */N
a AaAa {N
    A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A_AN
};N
N
// a a a aN
#a A_A	aAa0a(0, 0, 0)N
#a A_A	aAa0a(0, 0, 0)N
#a A_A_A	aAa0a(0, 0, 0)N
#a A_A_A	aAa0a(0, 0, 0)N
N
#a A	    0	// a a aN
#a A_A  0	// a a aN
#a A_A	    0.0N
#a A_A	    0.0N
#a A_A    0.0N
N
#a A_A   0.0N
#a A_A	    0.0N
#a A_A  .0*A_A    // a/aN
N
#a A_A_A  0.0N
N
N
// Aa a a.N
a a {N
	a *aAa;N
	a *aAaAa;N
	a *aAa;N
	a *a;N
	a *a;N
} A_A;N
a A_A a;N
a a *aAa[]={ N
	"Aa Aa",  N
	"Aa Aa Aa Aa", N
	"Aa a:",N
	" a ",N
	" a "N
};N
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
    AaAaAaAa::AaAa a, N
    AaAaAa::Aa a)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    a, N
	    a, N
	    A) // a a a a a a a a  N
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
	    aAaAa, N
	    a, N
	    a, N
	    A) // a a a a a a a a  N
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
    // a aN
    a = A_A;N
    aAa = A;N
    aAa = aAa = aAa = 0;N
    aAaAa = 0.0;N
    aAaAa("AaAaAaAa");N
    N
    // a a aN
    aAa = a AaAaAa(AaAaAaAa::aAaA, a);N
    N
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
N
	// a a...N
N
	AaAaAa a(aAaAa());N
	a (!a.aAa( "aAa",               "AaAa",               a.aAa ))N
	    a.aAa     = aAa[0];N
	a (!a.aAa( "aAaAaAa","AaAaAaAa",a.aAaAa ))N
	    a.aAaAa   = aAa[0];N
	a (!a.aAa( "aAa",             "AaAa",             a.aAa ))N
	    a.aAa   = aAa[0];N
	a (!a.aAa( "a",                "Aa",                a.a ))N
	    a.a      = aAa[0];N
	a (!a.aAa( "a",                "Aa",                a.a ))N
	    a.a      = aAa[0];N
N
        // a a aN
        aAaAaAa( a.aAa );N
        aAaAaAa( a.aAaAa );N
N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaN
//N
// Aa: aN
N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (aAa()) {N
	Aa *a = aAa();N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
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
    // a a a aN
    Aa a = aAaAaAa();N
    Aa a = (a != A) ? AaAa(a) : 0;N
    a (a != 0) {N
	a (!aAa)N
	    aAa();N
	a (aAa())N
	    AaAa(AaAa(a), a, aAa);N
	aN
	    AaAa(AaAa(a), a);N
    }N
    N
    // a a aN
    a (a != A_A)N
	aAa(A_A);N
    aN
	aAa();N
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
    Aa *a = aAa();N
    Aa a = aAaAaAa();N
    Aa a = (a != A) ? AaAa(a) : 0;N
    a (! a)N
	a;N
    N
    // a a a a a a a a N
    a (a) {N
	N
	a (! aAa)N
	    aAa();N
	N
	a(a) {N
	    a A_A:N
	    a A_A:N
	    a A_A:N
		AaAa(a, a, aAa);N
		a;N
	    a A_A:N
		AaAa(a, a, aAa);N
		a;N
	    a A_A_A:N
		AaAa(a, a, aAa);N
		a;N
	}N
    }N
    aN
	AaAa(a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	a a a a a a a a a (aN
//  a a a'a a a a a a).N
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
    // a a aN
    AaAaAaAa::aAa(aAa);N
    N
    // a a a a a a a a, a a aN
    // a.N
    a (a != A && N
	a->aAaAa(AaAaAa::aAaAaAa()))N
	aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    a (! a.aAaAa(AaAaAa::aAaAaAa()))N
	AaAaAa::a("AaAaAaAa::aAaAa()",N
			"a - a a a a");N
#aN
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
    a (!aAa())N
	a;N
    N
    // a a a aN
    AaAaAaAa::aAaAa(a);N
    N
    // a a a a aN
    a (aAaAa())N
	aAa(A_A);N
    aN
	aAa(A_A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa::aAaAaAa();N
    N
    // a a a a aN
    aAa(A_A);N
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
//    Aa a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a  a, a a a a a N
    // a a a a a a a a a a.N
    a (aAa() && a == A_A) {N
	a (a->a == AaAa) {N
	    aAa->a();N
	    aAa->a();N
	    aAaAa();N
	} N
	a a (a->a == AaAa) {N
	    aAa->a(aAaAa);N
	    aAa->a();N
	    aAaAa = aAaAa->aAa();N
	    aAaAa();N
	}N
    }N
    N
    a ( aAaAa(a) )N
	a;N
    N
    a (!aAa) {N
	aAa();N
	Aa a = aAaAaAa();N
	AaAa(AaAa(a), AaAa(a), aAa);N
    }N
    N
    AaAa0a aAa = aAaAa();N
    AaAa    *a;N
    AaAa	    *a;N
    N
    a(a->a) {N
    a AaAa:N
	a = (AaAa *)a;N
	a (a->a != Aa0 && a->a != Aa0)N
	    a;N
	a[0] = a->a;N
	a[0] = aAa[0] - a->a;N
	a(a) {N
	    a A_A:N
		// a a a a a aN
		a ((a->a == Aa0 && a->a & Aa0Aa) ||N
		    (a->a == Aa0 && a->a & Aa0Aa))N
		    a;N
		aAa(A_A);N
		aAaAaAa(a->a == Aa0);N
		a = aAa;N
		a;N
	    a A_A:N
		// a a a a a aN
		a ((a->a == Aa0 && a->a & Aa0Aa) ||N
		    (a->a == Aa0 && a->a & Aa0Aa))N
			aAa(A_A);N
		aN
		    aAaAaAa(a->a == Aa0);N
		a;N
	    a A_A:N
		a (a->a == Aa0)N
		    aAaAa(a);N
		a;N
	    a A_A_A:N
		a (a->a == Aa0) {N
		    aAaAa(a);N
		    aAa(A_A);N
		}N
		a;N
	}N
	a;N
	N
    a AaAa:N
	a[0] = ((AaAa *)a)->a;N
	a[0] = aAa[0] - ((AaAa *)a)->a;N
	a(a) {N
	    a A_A:N
		// a a a a a a aN
		aAaAa();N
		a;N
	    a A_A:N
		// a a a aN
		a->a = aAaAa;N
		N
		// a a/aN
		a (a[0] != aAa[0]) {N
		    a a = (aAa[0] - a[0]) / a(aAa[0]);N
		    AaAa a(aAa, a * 0 * A_A);N
		    a->a = a->a.aAa() * a;N
		}N
		N
		// a a/aN
		a (a[0] != aAa[0]) {N
		    a a = (a[0] - aAa[0]) / a(aAa[0]);N
		    aAa(a * 0 * A_A);N
		}N
		a;N
	}N
	a;N
	N
    a AaAa:N
	a = (AaAa *)a;N
	a[0] = a->a;N
	a[0] = aAa[0] - a->a;N
	a ( AaAa(a, 0) ) {N
	    a A_a:N
		a (aAaAa())N
		    aAaAa(A);N
		aAa( (a == A_A_A) ? A_A : A_A_A );N
		a;N
	    a A_Aa_A:N
	    a A_Aa_A:N
		a (a == A_A || a == A_A) {N
		    aAaAa();N
		    aAa(A_A);N
		}N
		a;N
	}N
	a;N
    N
    a AaAa:N
	a = (AaAa *)a;N
	a ( AaAa(a, 0) ) {N
	    a A_Aa_A:N
	    a A_Aa_A:N
		a (a == A_A) {N
		    aAa(A_A);N
		    aAaAa();N
		}N
		a;N
	}N
	a;N
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
    a (a == aAa)N
	a;N
    N
    // a a aN
    AaAa aAa = A;N
    a aAa = a;N
    a = aAa;N
    N
    // a a a a aN
    Aa a = aAaAaAa();N
    Aa *a = (a != A) ? AaAa(a) : A;N
    Aa a = (a != A) ? AaAa(a) : 0;N
    a (!aAa && a != 0)N
	aAa();N
    N
    // a a a a aN
    a(aAa) {N
	a A_A:N
	    aAa->a();N
	    aAa->a();N
	    aAaAa();N
	    a;N
    }N
    N
    // a a a a aN
    a(aAa) {N
	a A_A:N
	    a (a != 0)N
		AaAa(a, a, aAa);N
	    a;N
	a A_A:N
	    aAa->a(aAaAa);N
	    aAa->a();N
	    aAaAa = aAaAa->aAa();N
	    aAaAa();N
	    a = aAa = aAaAa = 0;N
	    aAa = aAa * aAaAa;N
	    aAa = A; // a a a a aN
	    a (a != 0)N
		AaAa(a, a, aAa);N
	    a;N
	a A_A:N
	    // a a a a a aN
	    aAa = a;N
	    aAaAa = a->a.aAa();N
	    a (a != 0)N
		AaAa(a, a, aAa);N
	    a;N
	a A_A:N
	    a (a != 0)N
		AaAa(a, a, aAa);N
	    a;N
	a A_A_A:N
	    a (a != 0)N
		AaAa(a, a, aAa);N
	    a;N
    }N
    N
    a (aAa)N
	aAa();N
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
    AaAaAaAa::aAa();N
    N
    // a a a a aN
    a (aAa() && a != A) {N
	N
	aAaAaAa(aAaAa());N
	N
	aAaAa();N
	N
	// a a aN
	aAaAaAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    //N
    // a a a a aN
    //N
    AaAa0a aAa = aAaAa();N
    a a = a(aAa[0] * A_A);N
    a a = a(aAa[0] * A_A);N
    aAaAa0a(a, a);N
    A_A;N
// ???aN
#a 0N
    a a[0];N
    a(a) {N
	a A_A: a("Aa"); a;N
	a A_A: a("Aa"); a;N
	a A_A:N
	a("Aa");N
	a;N
	a A_A_A: a("Aa Aa Aa"); a;N
	a A_A:N
	    a("Aa  ");N
	    a(a, "%a", a);N
	    a(a);N
	    a;N
    }N
#aN
    N
    //N
    // a a a a a aN
    //N
    a a0 = a(aAa[0] * A_A);N
    a a0 = aAa[0] / 0;N
    a a0 = aAa[0] - a0;N
    a a = a + 0;N
    aAaAa(0);N
    A_A;N
    aAa(A_A);N
    aAa0a(a0, a); aAa0a(a0, a);N
    aAa0a(a0, a-0); aAa0a(a0, a+0);N
    aAa0a(a0, a-0); aAa0a(a0, a+0);N
    aAa0a(a0, a-0); aAa0a(a0, a+0);N
    aAa();N
#a 0N
    a0a(a0-0, a-0); a("-");N
    a0a(a0+0, a-0); a("+");N
#aN
    a (a == A_A) {N
	// a a a a aN
	a a = a((a0-a0) * aAaAa / aAa);N
	A_A_A;N
	aAaAa(0);N
	aAa(A_A);N
	aAa0a(a0, a); aAa0a(a0+a, a);N
	aAa();N
	N
	// a a a a aN
	a = a((a0-a0) * a / aAa);N
	A_A_A;N
	aAaAa(0);N
	aAa(A_A);N
	aAa0a(a0, a); aAa0a(a0+a, a);N
	aAa();N
    }N
    N
    //N
    // a a a aN
    //N
    aAaAa(0);N
    a (a == A_A) {N
	// a a a a aN
	A_A;N
	aAa(A_A);N
	aAa0a(aAa[0] - A, aAa[0]);N
	aAa0a(aAa[0] + A, aAa[0]);N
	aAa0a(aAa[0], aAa[0] - A);N
	aAa0a(aAa[0], aAa[0] + A);N
	aAa();N
    }N
    a {N
#a 0N
	a AaAa *a = A;N
	a (! a) a = aAaAa();N
	N
	// a a a a a aN
	A_A;N
	a(aAa[0]/0, aAa[0]/0, A_A);N
#aN
    }N
    N
    //N
    // a a a a a a N
    //N
#a 0N
#a A_A(a, a, a, a) \N
    a(a); \N
    a.aAa(a, a, a); \N
    a(); \N
    a0a(a.aAa()); \N
    a0a(a.aAa()); \N
    a();N
    N
    AaAa0a a, a(0, 0, 0);N
    AaAa0a a(aAa[0]/0, aAa[0]/0);N
    a a = (aAa[0] < aAa[0]) ? aAa[0] : aAa[0];N
    a a = a(a * 0.0);N
    AaAa a;N
    a = a->a.aAa().a();N
    AaAa0a aAa(aAa.aAa() - a->a.aAa());N
    aAa.a();N
    AaAa0a aAa(-a[0][0], -a[0][0], -a[0][0]);N
    N
    a(-0, 0, -0, 0, -0, 0);N
    a(a[0]-a, a[0]+a, a[0]-a, a[0]+a);N
    a(A);N
    a();N
    a();N
    a((Aa) (a *) a);N
    A_A(0a0a, 0, 0, 0)N
    A_A(0a0a0, 0, 0, 0)N
    A_A(0a0, 0, 0, 0)N
    (aAa.a(aAa) < 0) ? a(0a0a) : a(0a0a);N
    a(); a0a(a.aAa()); a0a(aAa.aAa()); a();N
    a();N
    a(A);N
#a A_AN
#aN
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
	a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a, a_a_a_a_a);N
    AaAa(a, a);N
    N
    // a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a, a_a_a_a_a);N
    AaAa(a, a);N
    N
    // a a aN
    a = AaAaAaAa(a, a, N
	a_a_a_a_a, a_a_a_a_a, a_a_a_a_a);N
    aAa = AaAaAa(a, a, a, N
	&a, &a, a_a_a_a_a_a, a_a_a_a_a_a);N
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
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    //N
    // a a a a a aN
    //N
    AaAa a = aAaAa->aAa();N
    a a = a((a - aAaAa).aAa());N
    aAaAa = a;N
    N
    // a a a a a a a a a a a a a.N
    a (a == 0.0)N
	a = 0.0/0.0;N
    N
    //N
    // a a a a/a a a a^0 a a a aN
    // a a.N
    //N
    AaAa0a aAa = aAaAa();N
    a a = (a[0] - aAa[0]/0) / a(aAa[0]);N
    a a = A_A * (a * a) * a;N
    a (a != 0.0) {N
	a (a < 0)N
	    a = -a;N
	AaAa a(aAa, -a);N
	a->a = a->a.aAa() * a;N
    }N
    N
    //N
    // a a a/a a a a^0 a a a aN
    // a a.N
    //N
    a = (a[0] - aAa[0]/0) / a(aAa[0]);N
    a = A_A * (a * a) * a;N
    a (a < 0)N
	a = -a;N
    a (a != 0.0)N
	aAa(a);N
    N
    //N
    // a a a aN
    //N
    a aAa = a * a;N
    a (aAa > 0.0) {N
	// a a a aN
	AaAa a;N
	a = a->a.aAa();N
	AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
	N
	// a a a a a aN
	a->a = a->a.aAa() + a * aAa;N
    }N
    N
    //N
    // a a a a a a a'a a a a aN
    //N
    a ((a > 0 && a < aAa) || (a < 0 && a > aAa)) {N
	a *= a(0.0, a);N
	N
	// a a a a a aAaN
	a ((a > 0 && a > aAa) || (a < 0 && a < aAa))N
	    a = aAa;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a/a (a a a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a = (aAa - aAaAa) * aAa * aAa N
	    * A_A_A;N
    N
    // a a a aN
    AaAa a;N
    a = a->a.aAa();N
    AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
    N
    // a a a a a aN
    a->a = a->a.aAa() + a * a;N
    a->aAa = a->aAa.aAa() - a;N
    N
    aAaAa = aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa/a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a aN
    a (aAaAa == 0)N
	aAaAa = a ? A_A * aAa : - A_A * aAa;N
    a {N
	N
	// a a a aAaAaN
	a ((aAaAa > 0 && a) ||N
	    (aAaAa < 0 && !a))N
	    aAaAa *= A_A;N
	aN
	    aAaAa /= A_A;N
	N
	// a a aAa aN
	a (aAaAa > aAa)N
	    aAaAa = aAa;N
	a a (aAaAa < -aAa)N
	    aAaAa = -aAa;N
	N
	// a a a a a a a a a, a a N
	// a a a a aN
	a a = A_A * aAa;N
	a (aAaAa > -a && aAaAa < a) {N
	    aAa(A_A);N
	    a;N
	}N
    }N
    N
    // a a a aAaAa, a a aAaN
    aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
// a a a a a a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a a aN
    AaAa0a aAa = aAaAa();N
    a a = 0.0 * (a[0] - aAa[0]/0) / a(aAa[0]);N
    a (a < 0.0) a = -a;N
    a (a > 0.0) a = 0.0;N
    a a = 0.0 * (a[0] - aAa[0]/0) / a(aAa[0]);N
    a (a < 0.0) a = -a;N
    a (a > 0.0) a = 0.0;N
    N
    // a a aAa a a a a a a aN
    aAa = (a > a) ? (0.0 - a) * aAaAa : N
			    (0.0 - a) * aAaAa;N
    a ((a > 0 && a > aAa) || (a < 0 && a < aAa))N
	a = aAa;N
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
    Aa aAa[0];N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("", aAaAaAa, N
	a, A, 0);N
    N
    // a a a aN
    aAa[0] = AaAaAa( a.aAa, N
	aAaAaAa, a, A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    aAa[0] = AaAaAa( a.a, aAaAaAaAa, N
	a, a, a);N
    aAa[0] = AaAaAa( a.a, aAaAaAaAa, N
	a, a, a);N
    AaAaAa(aAa[0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA,N
	(AaAa) a);N
    AaAaAa(aAa[0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA,N
	(AaAa) a);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(aAa[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[0], AaAaAa,		aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,   		0); a++;N
    AaAaAa(aAa[0], a, a);N
    AaAaAa(a[0], AaAaAa,		aAa[0]);N
    AaAaAa(aAa[0], a, a);N
    N
    AaAaAa(aAa, 0);N
    N
    a a;N
}N
N
//N
// a a a a aN
//N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a "AaAaAaAa"; }N
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
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
aN
AaAaAaAa::aAaA(a *a, AaAa *)N
{ ((AaAaAaAa *) a)->aAaAa(); }N
N
aN
AaAaAaAa::aAaAaAaA(Aa, AaAaAaAa *a, a *)N
{N
    a->aAaAa *= 0.0;N
    a->aAa *= 0.0;N
    a->aAaAa *= 0.0;N
}N
N
aN
AaAaAaAa::aAaAaAaA(Aa, AaAaAaAa *a, a *)N
{N
    a->aAaAa /= 0.0;N
    a->aAa /= 0.0;N
    a->aAaAa /= 0.0;N
}N
