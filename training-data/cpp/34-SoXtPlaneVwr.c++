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
#a <a.a>N
#a <A0/Aa.a>N
#a <A0/Aa.a>N
#a <A0/a.a>N
N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a "AaAaAaAa.a"N
#a <Aa/a/AaA.a>N
N
/*N
 *  AaN
 */N
N
a AaAa {N
    A_A, N
    A_A,N
    A_A_A, N
    A_A, N
    A_A_A, N
    A_A_A, N
    A_AN
};N
N
// a a a a aN
a {N
    A_A = 0, N
    A_A,N
    A_A,N
    A_A,N
    A_AN
};N
N
N
// Aa a a.N
a a {N
	a *aAa;N
	a *aA;N
	a *aA;N
	a *aAaAaAa;N
	a *a;N
	a *a;N
} A_A;N
a A_A a;N
a a *aAa[]={ N
	"Aa Aa",  N
	"aA", N
	"aA",N
	"Aa Aa Aa Aa",N
	"Aa",N
	"Aa"N
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
    // a a aN
    a = aAa() ? A_A : A_A;N
    aAa = A;N
    aAa = aAa = aAa = 0;N
    aAa( AaAa0a(0, 0) );  // a aN
    aAaAa("AaAaAaAa");N
    N
    // Aa aAa.N
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
    a (a a=0; a<A_A; a++)N
	a aAa[a];N
    N
    // a a a aN
    Aa *a = aAa();N
    a (a) {N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
	a (aAa) AaAa(a, aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a, a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa a(a);N
    a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	a.aAa = aAa[0];N
    aAaAaAa( a.aAa );N
N
    // Aa a a a a a a a a a aN
    Aa a = AaAaAaAa::aAa(a);N
N
    // a a...N
N
    AaAaAa a(a);N
    a (!a.aAa( "aA", "AaA", a.aA ))N
	a.aA = aAa[0];N
    a (!a.aAa( "aA", "AaA", a.aA ))N
	a.aA = aAa[0];N
    a (!a.aAa( "aAaAaAa","AaAaAaAa",a.aAaAaAa ))N
	a.aAaAaAa = aAa[0];N
    a (!a.aAa( "a", "Aa", a.a ))N
	a.a = aAa[0];N
    a (!a.aAa( "a", "Aa", a.a ))N
        a.a = aAa[0];N
N
    // a a aN
    aAaAaAa( a.aA );N
    aAaAaAa( a. aA );N
    aAaAaAa( a.aAaAaAa );N
N
    a a;N
}    N
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
    // a a a aN
    a (a a=0; a<A_A; a++) {N
	aAa[a] = a AaAaAaAa(a, A);N
	Aa a = aAa[a]->aAa();N
	AaAaAaAa(a, AaAaAa, a, A);N
	AaAaAa(a, AaAaAa,N
	    (AaAaAa) AaAaAaAa::aAaA, (AaAa) (a a) a);N
	N
	// a a a a a a...N
	aAaAa->a(a);N
    }N
    N
    // a a a aN
    aAa[A_A]->aAa(a_a_A_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_A_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_A_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
}N
N
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
    aAa(aAa() ? A_A : A_A);N
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
//	Aa a a a a a a a a a.N
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
	    aAaAaAa( a.a );N
	}N
	a {N
	    a (aAa[A_A])N
		aAa[A_A]->aAa(a_a_a_a, N
		    a_a_a_a, a_a_a_a);N
	    aAaAaAa( a.a );N
	}N
    }N
    N
    // a a aN
    AaAaAaAa::aAa(aAa);N
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
	a (a == A_A) {N
	    a (a->a == AaAa)N
		aAaAa(a);N
	}N
	a {N
	    a (a->a == AaAa)N
		aAaAa();N
	    a // AaAaN
		aAaAa();N
	    aAaAa(a->a);N
	}N
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
		aAa( AaAa0a(a->a, aAa[0] - a->a) );N
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
    N
    // a a aN
    AaAa aAa = A;N
    a aAa = a;N
    a = aAa;N
    N
    // a a aN
    aAa();N
    N
    // a a a a a a a aN
    a (aAa == A_A_A)N
	aAa = A;N
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
	    AaAa0a aAa = aAaAa();N
	    AaAaAa    aAa;N
	    AaAa	    a;N
	    aAa = a->aAaAa(aAa[0]/a(aAa[0]));N
	    aAa.aAaAaAa(N
		AaAa0a(a[0]/a(aAa[0]), a[0]/a(aAa[0])), a);N
	    a.a(a, a0A);N
	    }N
	    a;N
	    N
	a A_A_A:N
	    aAa = A;N
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
//    a a a a a aN
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
	a A_A_A:N
	    AaAa(a, a);N
	    a;N
	    N
	a A_A:N
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
    AaAaAaAa::aAa();N
    N
    // a a a a aN
    a (aAa() && a == A_A_A) {N
	N
	aAaAaAa(aAaAa());N
	N
	aAaAaAa(aAaAa()/0, a);N
	N
	// a a aN
	aAaAaAa();N
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
    N
    aAaAaAaAaAa(aAa, a, a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a aN
//  N
// Aa: a aN
N
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAaAa = a->a.aAa();N
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
//    Aa a a a/a (a a a a).N
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
    // a a a a a a a a a aN
    AaAa a;N
    a = a->a.aAa();N
    AaAa0a aAa(a[0][0], a[0][0], a[0][0]);N
    a a = aAa * (aAaAa - aAa);N
    a->a = a->a.aAa() + a * aAa;N
    N
    aAaAa = aAa;N
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
    a (a == A)N
	a;N
    N
    // a a a a a a a a a aN
    AaAa a;N
    a = a->a.aAa();N
    AaAa0a aAa(a[0][0], a[0][0], a[0][0]);N
    a a = aAa * (aAaAa - aAa);N
    a->a = a->a.aAa() + a * aAa;N
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
    // a a a aN
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
//    Aa a a a a'a a a a a a aN
//  a.N
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
    AaAa0a a = aAaAa()/0;N
    AaAa0a a0, a0;N
    a a;N
    N
    // a a a aN
    a0 = a - a;N
    a0 = aAa - a;N
    // a a a a AaA a'a aN
    a = (a0[0]==0 && a0[0]==0) ? 0 : a0(a0[0], a0[0]);N
    a -= (a0[0]==0 && a0[0]==0) ? 0 : a0(a0[0], a0[0]);N
    N
    // a a a a a a aN
    AaAa0a a(0, 0, -0);N
    AaAa a;N
    a.aAa(a, a);N
    a->a = a * a->a.aAa();N
    N
    a = aAa;N
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
//    Aa a a a a a a a a aN
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a AaAa0a &aAa, a AaAa0a &aAa)N
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
    // a a a a a a a a a a aN
    AaAa a( -a, aAa);N
    aAa = aAa * a;N
    N
    // a a a a a a a a a aN
    a = aAa;N
    AaAa0a a(a[0][0], a[0][0], a[0][0]);N
    a.aAa(a, aAa);N
    aAa = aAa * a;N
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
//    Aa a a a a a a a a a N
//  a a (a a a a a a a aN
//  a).N
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
    a a;N
    N
    a (a->aAaAa(AaAaAa::aAaAaAa())) {N
	a a = ((AaAaAa *)a)->aAa.aAa();N
	a a = a->aAa.aAa();N
	a = a * a(a);N
    }N
    a a (a->aAaAa(AaAaAa::aAaAaAa()))N
	a = ((AaAaAa *)a)->a.aAa();N
    N
    aAa = a / 0;N
    aAa = aAa * a->aAa.aAa();N
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
aN
AaAaAaAa::aAaAa()N
{N
    aAaAa();N
    aAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    aAaAa();N
    aAaAa();N
}N
N
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
N
//N
// a a a aN
//N
aN
AaAaAaAa::aAaA(Aa a, a a, a *)N
{N
    AaAaAaAa *a;N
    AaAaAaAa(a, AaAaAa, &a, A);N
    N
    a (a) {N
	a A_A:	a->aAa( AaAa0a(0, 0, 0), AaAa0a(0, 0, -0) ); a;N
	a A_A:	a->aAa( AaAa0a(0, 0, 0), AaAa0a(0, 0, 0) ); a;N
	a A_A:	a->aAa( AaAa0a(0, 0, 0), AaAa0a(0, 0, 0) ); a;N
	a A_A:	a->aAaAa(); a;N
    }N
}N
