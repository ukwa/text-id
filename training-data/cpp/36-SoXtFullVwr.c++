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
 |   Aa    : AaAaAaAaN
 |N
 |   Aa()	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
N
#a <A0/AaAa.a>N
#a <A0/Aa.a>N
#a <A0/Aa.a>N
N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
N
#a <Aa/AaAaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaA.a>N
#a "AaAaAaAa.a"N
#a <Aa/a/AaAaAa.a>N
N
/*N
 * AaN
 */N
#a A(a) AaAaAaAa( AaAa(a) )N
N
// a a a a a aN
#a	A_A	    0N
#a A_A 	    0N
#a A_A    0N
#a A_A 	    0N
#a A_A_A  0.0N
N
// a a a a a aN
a aAa {N
    A_A = 0,  // a a a a a a a aN
    A_A,	 // a a a a a (a'a aN
    A,	  // a AaAaAaAaAa a)N
    A, N
    A, N
    A, N
    A, N
    A, N
    A_A, N
    A_A, N
    AN
};N
N
a aAa {N
    A_A,N
    A_A, N
    A_A, N
    A_A, N
    A, N
    A, N
    A, N
    N
    A_A_A, N
    A_A_A, N
    A_A_A, N
    A_A, N
    A_A_A, N
    A_A, N
    A_A_A, N
    A_A, N
    N
    A_A_A // a a aN
};N
N
// a a a a a a a aN
a aAa {N
    A_A = 0,    // a a a a a 0N
    A_A,N
    A_A,N
    N
    A_A_A   // a a aN
};N
N
// a a a a aN
a AaAaAa {N
    A_A, N
    A_A, N
    A_A, N
    A_A,N
    A_A_A,N
    A_A_A,N
    A_A,N
    N
    A_AN
};N
N
a AaAaAa {N
    A_A, N
    A_A, N
    A_A, N
    A_A_A0, N
    A_A_A0, N
    A_A_A0, N
    A_A_A0, N
    N
    A_AN
};N
N
N
/*N
 * AaN
 */N
N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, Aa, Aa)N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, Aa, Aa)N
N
N
a a *aAaAa = "AaAaAaAa";N
N
N
// Aa a a.N
a a {N
	a *aAaAa;N
	a *aAaAa;N
	a *aAa;N
	a *aAa;N
	a *aAa;N
	a *a;N
	a *aAa;N
	a *aAa;N
    a *aAa;N
    a *aAa;N
	a *aAaAa;N
	a *aAa;N
	a *a;N
	a *aAa;N
	a *aAa;N
	a *a;N
	a *a;N
} A_A;N
a A_A a;N
a a *a[]={ N
	"Aa a a:",N
	"Aa a:",N
	"Aa a:",N
	"Aa Aa:", N
	"Aa a a a:", N
	"a:",N
	"a a:",N
	"a a:",N
    "a a:",N
    "a a:",N
	"Aa Aa Aa",N
	"Aa Aa a'a a a a a a.",N
	"Aa...",N
	"Aa Aa",N
	"Aa Aa:",N
	" a ",N
	" a "N
};N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa.N
//N
// Aa: aN
N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa,N
    AaAaAaAa::AaAa aAa, N
    AaAaAa::Aa a, N
    AaAa aAa) N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    a, N
	    A)  // aAaN
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    N
    aAaAa(aAaAa);N
    N
    aAa(AaAa0a(0, 0));  // a aN
    N
    aAa = A; // a a a a a a a aN
    N
    // a a aN
    aAa = (aAa & A_A) != 0;N
    aAa = A;N
    aAaAa = aAaAa = aAaAa = A;N
    aAaAa = aAaAa = aAaAa = A;N
    aAaAa = aAaAa = aAaAa = A;N
    aAaAa.aAa(0, 0);N
    N
    // a a a aN
    aAaAaAa = A;N
    aAaAa = A;N
    aAa = a Aa[A_A];N
    a (a=0; a<A_A; a++)N
	aAa[a] = A;N
    N
    // a a a aN
    aAa = A;N
    aAa = (aAa & A_A) != 0;N
    aAa = A;N
    aAaAa = a Aa[A_A_A];N
    a (a=0; a<A_A_A; a++)N
	aAaAa[a] = A;N
    aAaAa = a Aa[A_A_A];N
    a (a=0; a<A_A_A; a++)N
	aAaAa[a] = A;N
    aAaAa = a Aa[0];N
    a (a=0; a<0; a++)N
	aAaAa[a] = A;N
    N
    // a a aN
    a (a=0; a<A_A; a++)N
	aAa[a] = A;N
    aAaAa = a AaAa(A_A);N
    aAaAa = A;N
    aAaAa = a AaAa;N
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
//    Aa.N
//N
// Aa: aN
N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    aAa(aAa);N
        N
    // a a aN
    a (aAaAa != A) a(aAaAa);N
    a (aAaAa != A) a(aAaAa);N
    a (aAaAa != A) a(aAaAa);N
    N
    // a  a aN
    a (aAa != A) a(aAa);N
    a [] aAaAa;N
    a [] aAaAa;N
    a [] aAaAa;N
    N
    // a a a aN
    a (a a=0; a<A_A; a++)N
	a aAa[a];N
    a aAaAa;N
    a aAaAa;N
    N
    // a a a aN
    a [] aAa;N
    a (aAaAa != A) a(aAaAa);N
    a (aAaAaAa != A) {N
	AaAaAa(aAaAaAa, AaAaAa,N
	    (AaAaAa) AaAaAaAa::aAaAaA,N
	    (AaAa) a);N
	AaAaAa(aAaAaAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a AN
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
    AaAaAa::aAa(a);N
    N
    // a a a aN
    a (aAa[A_A])N
	aAa[A_A]->a(aAa);N
    a (aAa[A_A])N
	aAa[A_A]->a(! aAa);N
    N
    // a a a a aN
    a (aAaAa[A_A])N
	AaAaAaAaAa(aAaAa[A_A], N
					aAa, Aa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aAa())N
	a;N
    N
    // a a a aN
    AaAaAa::aAa(a);N
    N
    // a a a a aN
    a (aAaAa[A_A])N
	AaAaAaAaAa(aAaAa[A_A], N
					aAa(), Aa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(AaAaAa::AaAa a, N
				AaAaAa::AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAa::aAaAa(a, a);N
    N
    // a a a a aN
    a (aAaAa[0]) {N
	a (a a = 0; a < A_A_A; a++)N
	    A_A(aAaAa[a]);N
	a(aAaAa(AaAaAa::A)) {N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A]); a;N
	}N
	a(aAaAa(AaAaAa::A)) {N
	    a AaAaAa::A_A_A_A: A_A(aAaAa[A_A_A]); a;N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A_A]); a;N
	    a AaAaAa::A_A_A: A_A(aAaAa[A_A_A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A_A_A: A_A(aAaAa[A_A_A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A_A]); a;N
	    a AaAaAa::A_A_A_A: A_A(aAaAa[A_A_A]); a;N
	    a AaAaAa::A_A: A_A(aAaAa[A_A]); a;N
	}N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(AaAaAa::AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAa::aAaAa(a);N
    N
    // a a a a aN
    a (aAaAa[0]) {N
	a (a a = 0; a < 0; a++)N
	    A_A(aAaAa[a]);N
	A_A(aAaAa[aAaAa()]);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a (a a a a) a a a aN
// a a a-a() a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAa::aAa(aAa);N
    N
    // a a a a a a a a aN
    a (aAa[A_A] != A) {N
	N
	AaAa a = a != A && a->aAaAa(AaAaAa::aAaAaAa());N
	a (a a=0; a<A_A; a++)N
	    AaAaAaAa(aAa[a], AaAa, a, A);N
	N
	// a a A a aN
	a (a) {N
	    a a = aAaAa();N
	    aAaAaAa(a);N
	    aAaAaAa(a);N
	}N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a/a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == A || a == aAa) {N
    	aAa = a;N
	a;N
    }N
    N
    a     a;N
    Aa     a[0];N
    N
    aAa = a;N
    N
    a (aAa) {N
	N
	// a aAa aN
	a = 0;N
	AaAaAa(a[a], AaAaAa,  A_A); a++;N
	AaAaAa(a[a], AaAaAa,    A_A); a++;N
	AaAaAa(a[a], AaAaAa,   A_A); a++;N
	AaAaAa(aAa, a, a);N
	N
	// a a a a a a aN
	// ??? a a a a a a a a a ?N
	a (aAaAa == A)N
	    aAa(aAa);N
	N
	// a a aN
	AaAaAa(aAaAa);N
	AaAaAa(aAaAa);N
	AaAaAa(aAaAa);N
    }N
    a {N
	N
	// a a a, a a a a a aN
	// (a a a a a a a a a)N
	a (aAaAa != A) {N
	    AaAaAa(aAaAa);N
	    AaAaAa(aAaAa);N
	    AaAaAa(aAaAa);N
	}N
	N
	// a aAa aN
	a = 0;N
	AaAaAa(a[a], AaAaAa,  0); a++;N
	AaAaAa(a[a], AaAaAa,    0); a++;N
	AaAaAa(a[a], AaAaAa,   0); a++;N
	AaAaAa(aAa, a, a);N
    }N
    N
    // a a a a aN
    a (aAaAa[A_A])N
	AaAaAaAaAa(aAaAa[A_A], N
						aAa, Aa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a/a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAaAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (aAa == A || a == aAa) {N
	aAa = a;N
	a;N
    }N
    N
    aAa = a;N
    N
    a (aAa)N
	aAaAa();N
    aN
    	aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAa(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a aN
    aAaAa->a(aAa);N
    N
    // a a a aN
    aAaAaAa(aAaAa->aAa() - 0);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAa(Aa aAa, a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aN
    aAaAa->a(aAa, a);N
    N
    // a a a aN
    aAaAaAa( aAaAa->a(aAa) );N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAa(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aN
    a a = aAaAa->a(aAa);N
    a (a == -0)N
	a;N
    N
    // a a a a a a a aN
    a aAa = aAaAa->aAa() - 0;N
    aAaAa->a(a);N
    a (a != aAa)N
	aAaAaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAa::a();N
    N
    // a a a a a a a a a a aN
    a (aAaAaAa != A)N
	AaAaAa(aAaAaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a aN
//N
// a: aN
aN
AaAaAaAa::aAaAaAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa != A) a(aAa);N
    aAa = (a != A) ? a(a) : A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a aN
//N
// a: aN
aN
AaAaAaAa::aAaAaAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa != A) a(aAaAa);N
    aAaAa = (a != A) ? a(a) : A;N
    a (aAaAa != A && aAaAa != A) {N
	Aa a[0];N
	AaAa a = AaAaAaAa(aAaAa);N
	AaAaAa(a[0], AaAaAa, a);N
	AaAaAa(aAaAa, a, 0);N
	AaAaAa(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a aN
//N
// a: aN
aN
AaAaAaAa::aAaAaAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa != A) a(aAaAa);N
    aAaAa = (a != A) ? a(a) : A;N
    a (aAaAa != A && aAaAa != A) {N
	Aa a[0];N
	AaAa a = AaAaAaAa(aAaAa);N
	AaAaAa(a[0], AaAaAa, a);N
	AaAaAa(aAaAa, a, 0);N
	AaAaAa(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a aN
//N
// a: aN
aN
AaAaAaAa::aAaAaAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa != A) a(aAaAa);N
    aAaAa = (a != A) ? a(a) : A;N
    a (aAaAa != A && aAaAa != A) {N
	Aa a[0];N
	AaAa a = AaAaAaAa(aAaAa);N
	AaAaAa(a[0], AaAaAa, a);N
	AaAaAa(aAaAa, a, 0);N
	AaAaAa(a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a.N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a     a, a = 0;N
    Aa     a[0];N
    Aa  a[0];N
    N
    // a a a a a a a a aN
    a = 0;N
#a A_A_AN
    AaAa::aAaAa(AaAa(aAa), A(aAa), a, &a);N
#aN
    aAa = AaAaAaAa(aAa, "a", a, a);N
    N
#a A_A_AN
    // a a a a/a a a a a aN
    // a a a a.N
    AaAa::aAaAa(aAa, AaAa::aAaAa(aAa));N
#aN
    N
    AaAaAaAa(aAa, AaAaAa, A, N
	(AaAaAa) &AaAaAaAa::aAaAa, (AaAa)a);N
    N
    // a a a a a a a aN
    a (aAa == A)N
    	aAa = a( a.aAa );N
    a[a++] = AaAaAa(aAa, aAaAaAa, aAa, A, 0);N
    a[a++] = AaAaAa("a", aAaAaAa, aAa, A, 0);N
    N
    //N
    // a a aN
    //N
    a[a++] = aAaAa(aAa);N
    a[a++] = aAaAaAa(aAa);N
    N
    //N
    // a a a aN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    N
#a A_A(A, A, A, A)	\N
    AaAaAa(a[a], AaAa, A); \N
    a[a++] = aAaAa[A] = AaAaAa(A, \N
	aAaAaAaAa, aAa, a, a+0); \N
    AaAaAa(aAaAa[A], AaAaAaAa,   \N
	(AaAaAa) AaAaAaAa::aAa, (AaAa) A);    N
    N
    A_A("Aa", A_A, A, aAa())N
    A_A("Aa", A_A, A, aAa())N
    A_A("Aa", A_A, A, aAa())N
#a A_AN
    N
    //N
    // a a a a aN
    //N
#a A_A(A, A)   \N
    a[a] = AaAaAa(A, aAaAaAaAa, aAa, a, a); \N
    AaAaAa(a[a], AaAaAa, \N
	(AaAaAa) AaAaAaAa::aAa, (AaAa) A); \N
    a++;N
    N
    A_A( a.a, A)N
#a A_AN
    N
    // a aN
    AaAaAa(a, a);    N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a - a a a a a a a N
//  a a a a a.N
//N
// Aa: aN
N
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a     a, a = 0;N
    Aa     a[0];N
    Aa  a[0];N
    N
    // a a a a a a a a a aN
    Aa a = AaAaAa("Aa", aAaAaAaAa, N
    	a, A, 0);N
    N
    // a a a aN
    a = 0;N
#a A_A_AN
    AaAa::aAaAa(AaAa(a),A(a), a, &a);N
#aN
    Aa a = AaAaAaAa(a, "a", a, a);N
    N
    AaAaAa(a[0], AaAaAaAa, a);N
    AaAaAa(a, a, 0);N
    N
    //N
    // a a a aN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    N
#a A_A(A, A)   \N
    a[a] = AaAaAa(A, aAaAaAaAa, a, a, a); \N
    AaAaAa(a[a], AaAaAa, \N
	(AaAaAa) AaAaAaAa::aAa, (AaAa) A); \N
    a++;N
    N
    A_A("Aa", A)N
    A_A("Aa", A)N
    A_A("Aa Aa", A_A)N
    A_A("Aa Aa", A_A)N
    A_A("Aa", A)N
    N
    a[a++] = AaAaAa("a", aAaAaAa, a, A, 0);N
    N
    A_A("Aa Aa", A_A)N
    A_A("Aa Aa", A_A)N
#a A_AN
    N
    // a aN
    AaAaAa(a, a);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a aN
//N
// Aa: aN
N
AaN
AaAaAaAa::aAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a     a, a = 0;N
    Aa     a[0];N
    Aa  a[0];N
    N
    // a a a a a a a a a aN
    Aa a = AaAaAa("Aa Aa", aAaAaAaAa, N
    	a, A, 0);N
    N
    // a a a aN
    a = 0;N
#a A_A_AN
    AaAa::aAaAa(AaAa(a), A(a), a, &a);N
#aN
    Aa a = AaAaAaAa(a, "a a", a, a);N
    N
    AaAaAa(a[0], AaAaAaAa, a);N
    AaAaAa(a, a, 0);N
    N
    //N
    // a a a a a a a aN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    N
#a A_A(A, A, A) \N
    AaAaAa(a[a], AaAa, A); \N
    a[a++] = aAaAa[A] = AaAaAa(A, \N
	aAaAaAaAa, a, a, a+0); \N
    AaAaAa(aAaAa[A], AaAaAaAa, \N
	(AaAaAa) AaAaAaAa::aAaAaAa, (AaAa) A);N
    N
    a aAa = aAaAa(AaAaAa::A);N
    A_A("a a", A_A, aAa == AaAaAa::A_A_A)N
    A_A("a a", A_A, aAa == AaAaAa::A_A_A)N
    A_A("a a", A_A, aAa == AaAaAa::A_A_A)N
    A_A("a a", A_A, aAa == AaAaAa::A_A_A)N
    A_A("a", A, aAa == AaAaAa::A_A)N
    A_A("a", A, aAa == AaAaAa::A_A)N
    A_A("a a (a a)", A, aAa == AaAaAa::A_A)N
    N
    a[a++] = AaAaAa("a", aAaAaAa, a, A, 0);N
    N
    aAa = aAaAa(AaAaAa::A);N
    A_A("a a a a", A_A_A, aAa == AaAaAa::A_A_A_A)N
    A_A("a a a", A_A_A, aAa == AaAaAa::A_A_A)N
    A_A("a a a", A_A_A, aAa == AaAaAa::A_A_A)N
    A_A("a a", A_A, aAa == AaAaAa::A_A)N
    A_A("a a a a (a a)", A_A_A, aAa == AaAaAa::A_A_A_A)N
    A_A("a a", A_A, aAa == AaAaAa::A_A)N
    A_A("a a a a (a a)", A_A_A, aAa == AaAaAa::A_A_A_A)N
    A_A("a a a (a a)", A_A, aAa == AaAaAa::A_A)N
#a A_AN
    N
    a[a++] = AaAaAa("a", aAaAaAa, a, A, 0);N
    N
    //N
    // a a a a a a a aN
    //N
#a A_A(A, A) \N
    AaAaAa(a[a], AaAa, aAa == A); \N
    a[a++] = aAaAa[A] = AaAaAa(A, \N
	aAaAaAaAa, a, a, a+0); \N
    AaAaAa(aAaAa[A], AaAaAaAa, \N
	(AaAaAa) AaAaAaAa::aAaAaAa, (AaAa) A);N
    N
    a aAa = aAaAa();N
    A_A("a a", AaAaAa::A_A)N
    A_A("a a", AaAaAa::A_A)N
    A_A("a a", AaAaAa::A_A)N
#a A_AN
    N
    // a aN
    AaAaAa(a, a);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    N
    // a a a a a aN
    AaAaAaAa(aAa, AaAaAa, A, N
	(AaAaAa) &AaAaAaAa::aAaAa, (AaAa)a);N
    N
    // a a a a a a a a a...N
    AaAaAa(aAa);N
    aAa = A;N
    a (a=0; a<A_A_A; a++)N
	aAaAa[a] = A;N
    a (a=0; a<A_A_A; a++)N
	aAaAa[a] = A;N
    a (a=0; a<0; a++)N
	aAaAa[a] = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa A a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // AaN
    a->aAa("a", "Aa", aAa);N
    N
    // Aa a a a a a.N
    a  a;N
    AaAa a;N
    a   *a;N
    N
    // a...N
    a (a->aAa("aAaAa", "AaAaAa", a))N
	aAaAa(a);N
    a (a->aAa("aAa", "AaAa", a)) {N
	a (a(a,"a") == 0)N
	    aAaAa(A);N
	a a (a(a,"a") == 0)N
	    aAaAa(A);N
    }N
    a (a->aAa("aAaAa", "AaAaAa", a)) {N
	a (a(a,"a") == 0)N
	    aAaAaAa = A;N
	a a (a(a,"a") == 0)N
	    aAaAaAa = A;N
    }N
    N
    // a a...N
    a (a->aAa("aAa", "AaAa", a))N
	aAaAa[0] = a;N
    a (a->aAa("aAa", "AaAa", a))N
	aAaAa[0] = a;N
    N
    // a a a...N
    a (a->aAa("aAa", "AaAa", a))N
	aAaAa(a);N
	N
    // a a a...N
    //??? a a a a A? a a a a a a?N
    a (a != A) {N
	a (a->aAa("aAa", "AaAa", a))N
	    a->aAa = a;N
	a (a->aAa("aAa", "AaAa", a))N
	    a->aAa = a;N
    }N
N
    // a a a.N
    //N
    a (!a->aAa( "aAaAa",    "AaAaAa",    a.aAaAa ))N
	a.aAaAa    = a[0];N
    a (!a->aAa( "aAaAa",    "AaAaAa",    a.aAaAa ))N
	a.aAaAa    = a[0];N
    a (!a->aAa( "aAa",   "AaAa",   a.aAa ))N
	a.aAa   = a[0];N
    a (!a->aAa( "aAa",     "AaAa",     a.aAa ))N
	a.aAa     = a[0];N
    a (!a->aAa( "aAa",     "AaAa",     a.aAa ))N
	a.aAa     = a[0];N
    a (!a->aAa( "a",             "Aa",             a.a ))N
	a.a             = a[0];N
    a (!a->aAa( "aAa",      "AaAa",      a.aAa ))N
	a.aAa      = a[0];N
    a (!a->aAa( "aAa",       "AaAa",       a.aAa ))N
	a.aAa       = a[0];N
    a (!a->aAa( "aAa", "AaAa", a.aAa ))N
    a.aAa = a[0];N
    a (!a->aAa( "aAa", "AaAa", a.aAa ))N
    a.aAa = a[0];N
    //N
    a (!a->aAa( "aAaAa", "AaAaAa", a.aAaAa ))N
    a.aAaAa = a[0];N
    a (!a->aAa( "aAa",      "AaAa",      a.aAa ))N
    a.aAa      = a[0];N
    //N
    a (!a->aAa( "a",      "Aa",      a.a ))N
    a.a      = a[0];N
    a (!a->aAa( "aAa",       "AaAa",       a.aAa ))N
    a.aAa       = a[0];N
    a (!a->aAa( "aAa",      "AaAa",      a.aAa ))N
    a.aAa      = a[0];N
    a (!a->aAa( "a",          "Aa",         a.a ))N
    a.a         = a[0];N
    a (!a->aAa( "a",          "Aa",         a.a ))N
    a.a         = a[0];N
N
N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a Aa Aa a, a aN
// a a a AaAaAaAaAa, a-a a, a, a.N
// Aa a a, a a a a aN
//N
// Aa: aN
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    //N
    // a a a a a a a a aN
    //N
    N
    Aa a[0];N
    a a = 0;N
    AaAa0a a = aAa();N
    a ((a[0] != 0) && (a[0] != 0)) {N
	AaAaAa(a[a], AaAa, a[0]); a++;N
	AaAaAa(a[a], AaAa, a[0]); a++;N
    }N
    N
    // ??? a'a a a a a a a - a aN
    // ??? a a a a a a a a. Aa a a N
    // ??? a AaAa a a a 0a0 a (a ) a a a N
    // ??? a a a a a.N
    AaAaAa(a[a], AaAaAa, AaA_A); a++;N
    N
    // Aa a a a a a a a a a aN
    aAa = AaAaAa(aAaAa(), aAaAaAa, a, a, a);N
    aAa(aAa);N
    N
    // Aa a aN
    a (aAa) {N
	AaAaAa a(aAa);    N
	aAa(&a);N
	aAa = A;N
    }N
N
    // a a aN
    aAa = AaAaAaAa::aAa(aAa);N
    a (aAa)N
    	aAa(aAa);N
    N
    //N
    // AaN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    aAa = !aAa;   // a a a a aN
    aAa(! aAa);N
    AaAaAa(aAa);N
    N
    // a a a a N
    a (aAa)N
    	aAaAa();N
N
    a aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a Aa a (a, a, a, a, ..).N
//N
// Aa: a aN
aN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a		a;N
    Aa		a[0];N
    N
    // a a a aN
    aAaAa = aAaAa(a);N
    aAaAa = aAaAa(a);N
    aAaAa = aAaAa(a);N
    N
    //N
    // aN
    //N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
    AaAaAa(a[a], AaAa, 		A_A); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(a[a], AaAa, 		A_A); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
    AaAaAa(a[a], AaAa, 		A_A); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    // ??? a a a a aAa()N
    // ??? a a a a a a a aAa()N
 }N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a		a;N
    Aa		a[0];N
    N
    a = 0;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, AaA); a++;N
    aAa = AaAaAaAa(a, A, a, a);N
    N
    AaAaAa(aAa, AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    AaAaAa(aAa, AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    aAaAa = 0;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a aN
//N
// Aa: a aN
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a		a;N
    Aa		a[0];N
    N
    // a a a a a a a aN
    Aa a = AaAaAa("AaAaAa", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    aAaAa(a);N
    Aa aAa = aAaAa(a);N
    N
    //N
    // aN
    //N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	    	A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	aAa); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    AaAaAa(aAa);N
    AaAaAa(aAa);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a aN
//N
// Aa: a aN
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a		a;N
    Aa		a[0];N
    N
    // a a a a a a a aN
    Aa a = AaAaAa("AaAaAa", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    a (aAaAa == A)N
    	aAaAa = a("Aa A");N
    aAaAa = AaAaAa(aAaAa, aAaAaAa, a, A, 0);N
    a (aAaAa == A)N
    	aAaAa = a("Aa A");N
    aAaAa = AaAaAa(aAaAa, aAaAaAa, a, A, 0);N
    a (aAaAa == A)N
    	aAaAa = a("Aa A");N
    aAaAa = AaAaAa(aAaAa, aAaAaAa, a, A, 0);N
N
    a = 0;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, AaA); a++;N
    aAa = AaAaAaAa(a, A, a, a);N
    N
    AaAaAa(aAa, AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    AaAaAa(aAa, AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    aAaAa = 0;N
    N
    //N
    // aN
    //N
    N
    // a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    	A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    	aAaAa); a++;N
    AaAaAa(a[a], AaAaAa,   	    	A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    	aAaAa); a++;N
    AaAaAa(a[a], AaAaAa,   	    	A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,  	AaA); a++;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    // a a (a a)N
    AaAaAa(aAaAa);N
    AaAaAa(aAaAa);N
    AaAaAa(aAa);N
    AaAaAa(aAaAa);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a aN
//N
// Aa: a aN
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a		a;N
    Aa		a[0];N
    N
    // a a a a a a a aN
    Aa a = AaAaAa("AaAaAa", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, AaA); a++;N
    aAa = AaAaAaAa(a, A, a, a);N
    N
    AaAaAa(aAa, AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    AaAaAa(aAa, AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaA, (AaAa) a);N
    aAaAa = 0;N
    N
    Aa aAa = aAaAa(a);N
    N
    //N
    // aN
    //N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,  	AaA); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	A_A); a++;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(aAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	aAa); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	AaA); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    AaAaAa(aAa);N
    AaAaAa(aAa);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a (a a a a)N
//N
// Aa: aN
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a, a;N
    Aa a, *a;N
    Aa a[0];N
    N
    // a a a a a aN
    a = AaAaAa(A, aAaAaAa, a, A, 0);N
    N
    aAaAa(a);N
    N
    // a a a a aN
    a = aAaAa->aAa();N
    a = a Aa[a];N
    a (a=0; a<a; a++)N
	a[a] = (Aa) ((*aAaAa)[a]);N
    N
    //N
    // aN
    //N
    a a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA); a++;N
    N
    AaAaAa(a[a], AaAaAa, 	AaA_A);N
    AaAaAa(a[0], a, a+0);N
    N
    AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
    a (a=0; a<a; a++) {N
	AaAaAa(a[a], AaAaAa,   	a[a-0]);N
	AaAaAa(a[a], a, a+0);N
    }N
    N
    // a aN
    AaAaAa(a, a);N
    a [] a;N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	a a a a aN
//N
// Aa: a aN
aN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (a a=0; a<A_A; a++) {N
	aAa[a] = a AaAaAaAa(a, (a == 0 || a == 0));N
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
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A_A]->aAa(a_a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A_A]->aAa(a_a_a_a_a, a_a_a_a, a_a_a_a);N
    aAa[A_A]->aAa(a_a_a_a, a_a_a_a, a_a_a_a);N
    N
    // a a a/a aN
    a (aAa())N
	aAa[A_A]->a(A);N
    aN
	aAa[A_A]->a(A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a aN
//N
// Aa: aN
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aN
    aAaAa = AaAaAa("AaAaAa", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    a ( aAaAa->aAa() > 0 )N
	aAaAaAa(0);N
    N
    a aAaAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a/a/a a a a'aN
//  a a. Aa a a a aN
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a	    a, a;N
    Aa	    a[0];N
    Aa  *aAa, aAa;N
    N
    a = aAaAa->aAa() - a;N
    aAa = a Aa[a];N
    N
    // a a a aN
    a (a=0; a<a; a++)N
	aAa[a] = (Aa) ((*aAaAa)[a+a]);N
    N
    // a a a a a a a a, N
    // a a a a a a aN
    a (a=a-0; a>=0; a--) {N
	a ( AaAaAa(aAa[a]) )N
	    AaAaAa(aAa[a]);N
    }N
    N
    a (a != 0)N
	aAa = (Aa) ((*aAaAa)[a-0]);N
    N
    //N
    // aN
    //N
    AaAaAa(a[0], AaAaAa,     	AaA);N
    AaAaAa(a[0], AaAaAa,  	AaA_A);N
    AaAaAa(a[0], AaAaAa,   	AaA);N
    N
    a (a=0; a<a; a++) {N
	a (a == 0 && a == 0) {N
	    AaAaAa(a[0], AaAaAa,	    AaA_A);N
	    AaAaAa(aAa[a], a, 0);N
	}N
	a {N
	    AaAaAa(a[0], AaAaAa,	    AaA_A);N
	    a (a == 0)N
		AaAaAa(a[0], AaAaAa,	    aAa);N
	    aN
		AaAaAa(a[0], AaAaAa,	    aAa[a-0]);N
	    AaAaAa(aAa[a], a, 0);N
	}N
    }N
    N
    // a a aN
    AaAaAa(aAa, a);N
    a [] aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a. AaN
//  a a a a a a a a a a a.N
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
    // a a a a a aN
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
//	Aa a a a aN
//N
// a: aN
aN
AaAaAaAa::aAaAaAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa != A) a(aAaAa);N
    aAaAa = (a != A) ? a(a) : A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAaAaAa(Aa &a, Aa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    a (aAaAa == A)N
	aAaAa = a("Aa Aa Aa");N
    N
    // a a a a a aN
    a = 0;N
    AaAaAa(a[a], AaAa, aAaAa); a++;N
    AaAaAa(a[a], AaAaAa, "Aa Aa"); a++;N
    AaAaAa(a[a], AaAaAaAa, A); a++;N
    aAaAaAa = a = AaAaAaAa("aAa", N
	aAaAaAaAa, AaAa::aAaAa(aAa), N
	a, a);N
    N
    // a a a a a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a = AaAaAa("", aAaAaAa, a, a, a);N
    N
    // a a a a a a a aN
    AaAaAa(aAaAaAa, AaAaAa,N
	(AaAaAa) AaAaAaAa::aAaAaA,N
	(AaAa) a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAaAa(Aa aAa[], N
				    a &a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[a++] = aAaAaAaAa(a);N
    aAa[a++] = aAaAaAaAaAa(a);N
    aAa[a++] = aAaAaAaAa(a);N
    aAa[a++] = aAaAaAaAa(a);N
    aAa[a++] = aAaAaAaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a'a aN
//  a a a a a a a a a a a. Aa aN
//  a a a a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAaAaAaAaAa(Aa aAa[], N
			    a a, Aa a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    // aN
    a (a a=0; a<a; a++) {N
	a = 0;N
	AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
	a (a == 0) {N
	    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
	}N
	a {N
	    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,	    aAa[a-0]); a++;N
	    AaAaAa(a[a], AaAaAa,	    0); a++;N
	}N
	a (a == (a - 0) ) {N
	    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
	}N
	AaAaAa(aAa[a], a, a);N
    }N
    N
    AaAaAa(aAa, a);N
    N
    // a a a a a a a aN
    AaAaAa(a);N
    AaAaAa(a);N
    AaAa(AaAa(a), AaAa(a));N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a.N
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
    aAa[0] = AaAaAa( a.aAaAa, N
	aAaAaAa, a, A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    a a[0];N
    a(a, "%.0a", aAaAa());N
    AaAaAa(a[a], AaAa, a); a++;N
    aAa[0] = AaAaAa("", aAaAaAa, N
	a, a, a);N
    AaAaAa(aAa[0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA, (AaAa) a);N
    N
    aAa[0] = AaAaAa("a", N
	aAaAaAa, a, A, 0);N
    N
    // a a a aN
    aAa[0] = AaAaAa( a.aAaAa, N
	aAaAaAa, a, A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    aAa[0] = AaAaAa("a", N
	aAaAaAaAa, a, a, a);N
    aAa[0] = AaAaAa("a", N
	aAaAaAaAa, a, a, a);N
    AaAaAaAaAa(aAa[0], aAaAa(), A);N
    AaAaAaAaAa(aAa[0], !aAaAa(), A);N
    AaAaAa(aAa[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAa0A,N
	(AaAa) aAa[0]);N
    AaAaAa(aAa[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAa0A,N
	(AaAa) aAa[0]);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(aAa[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,   	    0); a++;N
    AaAaAa(aAa[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    aAa[0]); a++;N
    AaAaAa(aAa[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(aAa[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[0], AaAaAa,   	    aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    aAa[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    -0); a++;N
    AaAaAa(aAa[0], a, a);N
    AaAaAa(a[0], AaAaAa,   	    aAa[0]);N
    AaAaAa(aAa[0], a, a);N
    N
    AaAaAa(aAa, 0);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAaAaAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a, a, a, a[0];N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("", aAaAaAa, N
	a, A, 0);N
    N
    // a a a aN
    a = AaAaAa( a.aAa, N
	aAaAaAa, a, A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAaAa, A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, AaA); a++;N
    a = AaAaAaAa(a, A, a, a);N
    N
    AaAaAa(a, AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
    aAaAaAa = 0;N
    N
    a = 0;N
    a a[0];N
    a(a, "%.0a", aAa);N
    AaAaAa(a[0], AaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    aAaAa = a = AaAaAa("", aAaAaAa, N
	a, a, a);N
    AaAaAa(a, AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaA,N
	(AaAa) a);N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a[0] = AaAaAa("a", N
	aAaAaAaAa, a, a, a);N
    a[0] = AaAaAa("a", N
	aAaAaAaAa, a, a, a);N
    N
    AaAaAaAaAa(a[0], aAaAaAa, A);N
    AaAaAaAaAa(a[0], !aAaAaAa, A);N
    AaAaAa(a[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaAaAaA,N
	(AaAa) a[0]);N
    AaAaAa(a[0], AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaAaAaA,N
	(AaAa) a[0]);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    a); a++;N
    AaAaAa(a[a], AaAaAa,   	    0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	    a); a++;N
    AaAaAa(a[a], AaAaAa,   	    0); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[a], AaAaAa,	    0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a[0]); a++;N
    AaAaAa(a[0], a, a);N
    N
    // a aN
    AaAaAa(a);N
    AaAaAa(a);N
    AaAaAa(a);N
    AaAaAa(a, 0);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAaAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("AaAa", aAaAaAa, N
	a, A, 0);N
    N
    // a a a aN
    aAa[A_A] = AaAaAa( a.aAa, N
	aAaAaAa, a, A, 0);N
    aAa[A_A_A0] = AaAaAa( a.aAa, N
	aAaAaAa, a, A, 0);N
    aAa[A_A_A0] = AaAaAa( a.a, N
	aAaAaAa, a, A, 0);N
    N
    a = 0;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, AaA); a++;N
    aAa[A_A] = AaAaAa("AaAa", N
	aAaAaAa, a, a, a);N
    N
    AaAaAa(aAa[A_A], AaAaAaAa, N
	(AaAaAa) &AaAaAaAa::aAaA, (AaAa) a);N
    AaAaAa(aAa[A_A], AaAaAa, N
	(AaAaAa) &AaAaAaAa::aAaA, (AaAa) a);N
    N
    a = 0;N
    a a[0];N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    N
    aAa[A_A] = AaAaAa("AaAa", N
	aAaAaAa, a, a, a);N
    N
    a(a, "%.0a", aAaAa[0]);N
    AaAaAa(a[a], AaAa, a);N
    aAa[A_A_A0] = AaAaAa("aAa", N
	aAaAaAa, a, a, a+0);N
    N
    a(a, "%.0a", aAaAa[0]);N
    AaAaAa(a[a], AaAa, a);N
    aAa[A_A_A0] = AaAaAa("aAa", N
	aAaAaAa, a, a, a+0);N
    N
    AaAaAa(aAa[A_A], AaAaAa, N
	(AaAaAa) &AaAaAaAa::aAaA, N
	(AaAa) a);N
    AaAaAa(aAa[A_A_A0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaAaA,N
	(AaAa) a);N
    AaAaAa(aAa[A_A_A0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaAaA,N
	(AaAa) a);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(aAa[A_A], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    	aAa[A_A]); a++;N
    AaAaAa(a[a], AaAaAa, 	    	0); a++;N
    AaAaAa(aAa[A_A], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 		aAa[A_A]); a++;N
    AaAaAa(a[a], AaAaAa, 		0); a++;N
    AaAaAa(aAa[A_A], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     	aAa[A_A]); a++;N
    AaAaAa(a[a], AaAaAa,     	0); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(aAa[A_A_A0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   		aAa[A_A_A0]); a++;N
    AaAaAa(a[a], AaAaAa,   		0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	aAa[A_A_A0]); a++;N
    AaAaAa(a[a], AaAaAa,   	-0); a++;N
    AaAaAa(aAa[A_A_A0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   		aAa[A_A_A0]); a++;N
    AaAaAa(a[a], AaAaAa,   		0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	aAa[A_A_A0]); a++;N
    AaAaAa(aAa[A_A_A0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   		aAa[A_A_A0]); a++;N
    AaAaAa(a[a], AaAaAa,   		0); a++;N
    AaAaAa(a[a], AaAaAa,   	AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,   	aAa[A_A_A0]); a++;N
    AaAaAa(aAa[A_A_A0], a, a);N
    N
    AaAaAa(aAa, A_A);N
    N
    //N
    // a a a AN
    //N
    a a = aAaAa();N
    aAaAaAa(a);N
    aAaAaAa(a);N
    AaAaAa(a[0], AaAa, (a != A && N
	a->aAaAa(AaAaAa::aAaAaAa())));N
    a (a a=0; a<A_A; a++)N
	AaAaAa(aAa[a], a, 0);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAaAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("", aAaAaAa, a, A, 0);N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAa, a != A); a++;N
    AaAaAa(a[a], AaAa, aAaAa()); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    Aa a = AaAaAa("", N
	aAaAaAaAa, a, a, a);N
    a = 0;N
    AaAaAa(a[a], AaAa, a != A); a++;N
    Aa a = AaAaAa("Aa a a", N
	aAaAaAa, a, a, a);N
    AaAaAa(a, AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA, N
	(AaAa) a);N
    N
    a ( !aAaAa() && a)N
	AaAaAaAa::aAaAaAaA(a, a, A);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a, a, a);N
    N
    // a aN
    AaAaAa(a);N
    AaAaAa(a);N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a.N
//N
// Aa: aN
AaN
AaAaAaAa::aAaAaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    // a a a a a a aN
    Aa a = AaAaAa("", aAaAaAa, a, A, 0);N
    N
    // a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAa, aAaAa()); a++;N
    AaAaAa(a[a], AaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    Aa a = AaAaAa("", N
	aAaAaAaAa, a, a, a);N
    AaAaAa(a, AaAaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaA, N
	(AaAa) a);N
    N
    // a aN
    aAa = AaAaAa("Aa Aa", N
	aAaAaAa, a, A, 0);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a[a], AaAaAa,	    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,	    a); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    AaAaAa(a);N
    AaAaAa(aAa);N
    N
    // a a a a a a a A (a a a aN
    // a a a a a).N
    aAa = A;N
    a ( aAaAa() )N
	AaAaAaAa::aAaAaAaA(a, a, A);N
    N
    a a;N
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
	(AaAaAa) AaAaAaAa::aAaAaAaAaA,N
	(AaAa) a);N
    AaAaAa(aAa[0], AaAaAa, N
	(AaAaAa) AaAaAaAa::aAaAaAaAaA,N
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
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a (a a a a a).N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    a ( a->aAaAa(AaAaAa::aAaAaAa()) )N
    	((AaAaAa *)a)->aAa = a * A_A / 0.0;N
    a a ( a->aAaAa(AaAaAa::aAaAaAa()) )N
    	((AaAaAa *)a)->a = a;N
#a AN
    aN
	AaAaAa::a("AaAaAaAa::aAaAa",N
		"a a a");N
#aN
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a. Aa a a a a aN
//  a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a 0;N
    N
    a ( a->aAaAa(AaAaAa::aAaAaAa()) )N
    	a ((AaAaAa *)a)->aAa.aAa() * 0.0 / A_A;N
    a a ( a->aAaAa(AaAaAa::aAaAaAa()) )N
    	a ((AaAaAa *)a)->a.aAa();N
    a {N
#a AN
	AaAaAa::a("AaAaAaAa::aAaAa",N
			    "a a a");N
#aN
	a 0;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a N
//  a a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa[A_A] == A)N
	a;N
    N
    // a a a a, a a a a a a a aN
    // a a a a a a a a a.N
    a a = (a - aAaAa[0]) / (aAaAa[0] - aAaAa[0]);N
    a = (a < 0) ? 0 : ((a > 0) ? 0 : a);N
    a = a(a);N
    N
    // a a a aN
    Aa a[0];N
    a a = a(a * 0);N
    AaAaAa(a[0], AaAa, a);N
    AaAaAa(aAa[A_A], a, 0);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa[A_A] == A)N
	a;N
    N
    Aa a[0];N
    a a[0];N
    a(a, "%.0a", a);N
    AaAaAa(a[0], AaAa, a);N
    AaAaAa(aAa[A_A], a, 0);N
}N
N
N
//N
// Aa a a a a a a aN
//N
a AaAaAaAa::aAaAa()	    { aAaAa(); }N
a AaAaAaAa::aAaAa()	    { aAaAa(); }N
a AaAaAaAa::aAaAa()	    { aAaAa(); }N
a AaAaAaAa::aAaAa()	    { aAaAa(); }N
a AaAaAaAa::aAaAa()    { aAaAa(); }N
a AaAaAaAa::aAaAa()	    { aAaAa(); }N
N
a AaAaAaAa::aAaAa(a)	{}N
a AaAaAaAa::aAaAa(a)	{}N
a AaAaAaAa::aAaAa(a)	{}N
a AaAaAaAa::aAaAaAa()	{}N
N
N
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
//N
// Aa a a a a a a a/a aN
// a a AaAa a a AaAa a.N
//N
a AaAa aAa = A;N
N
N
// a a a a a aN
a AaAaAaAa::aAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	a->aAaAa( - a->a * A_A / 0.0);N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
a AaAaAaAa::aAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	a->aAaAa(a->a * A_A / 0.0);N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
a AaAaAaAa::aAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	a->aAaAa( - a->a * A_A / 0.0);N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
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
	a A_A:	a->aAa(A); a;N
	a A_A: a->aAa(A); a;N
	a A_A:	a->aAaAaAa(); a;N
	a A_A: a->aAaAaAa(); a;N
	a A_A_A: a->aAaAa(); a;N
	a A_A_A: a->aAa(); a;N
	a A_A: a->aAaAa(! a->aAaAa()); a;N
    }N
}N
N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, a *)N
{N
    // a a a a a a a a....N
    a->aAaAaAa = A;N
    a (a a=0; a<A_A; a++)N
	a->aAa[a] = A;N
}N
N
aN
AaAaAaAa::aAaAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) ) {N
	a (a < 0)N
	    a = 0;N
	a->aAaAa(a);N
    }N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a->aAaAa());N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaAa0A(Aa a0, Aa a0, a *)N
{N
    AaAaAaAaAa(a0, !AaAaAaAaAa(a0), A);N
    N
    // a a a a a a a aN
    AaAaAaAa *a;N
    Aa	a[0];N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a0, a, 0);N
    a->aAaAa( AaAaAaAaAa(a0) );N
}N
N
aN
AaAaAaAa::aAaAaAa0A(Aa a0, Aa a0, a *)N
{N
    AaAaAaAaAa(a0, !AaAaAaAaAa(a0), A);N
    N
    // a a a a a a a aN
    AaAaAaAa *a;N
    Aa	a[0];N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a0, a, 0);N
    a->aAaAa( AaAaAaAaAa(a0) );N
}N
N
aN
AaAaAaAa::aAaAaAaAaAaA(Aa a0, Aa a0, a *)N
{N
    AaAaAaAaAa(a0, !AaAaAaAaAa(a0), A);N
    N
    // a a a a a a a aN
    AaAaAaAa *a;N
    Aa	a[0];N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a0, a, 0);N
    a->aAaAaAa = AaAaAaAaAa(a0);N
}N
N
aN
AaAaAaAa::aAaAaAaAaAaA(Aa a0, Aa a0, a *)N
{N
    AaAaAaAaAa(a0, !AaAaAaAaAa(a0), A);N
    N
    // a a a a a a a aN
    AaAaAaAa *a;N
    Aa	a[0];N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a0, a, 0);N
    a->aAaAaAa = AaAaAaAaAa(a0);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaA(Aa, AaAaAaAa *a, AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) a;N
    N
    // a a a a, a a a aN
    a (a->a == AaA_A && aAa) {N
	a->aAaAa();N
	aAa = A;N
    }N
    N
    // a a a a a a A a a a aN
    // (a a a a a a a a a a aN
    // a a) a a a a a.N
    a (a->a == AaA_A || N
	(a->a == AaA_A_A && aAa)) {N
	N
	// a a a a a, a a a a a aN
	// a a a a a a a a a a a a.N
	a a = a->a / 0.0;N
	a *= a;N
	a a = a->aAaAa[0] + a * (a->aAaAa[0] - a->aAaAa[0]);N
	N
	// a a a a a a aN
	a->aAaAa(a);N
	a->aAaAaAa(a);N
    }N
    N
    // a = AaA_A_A, a a a aN
    a (a->a == AaA_A_A && ! aAa) {N
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaA(Aa a, AaAaAaAa *a, AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a > 0) {N
	N
	// a a a a a aN
	a ( a->a != A && N
	    a->a->aAaAa(AaAaAa::aAaAaAa()) ) {N
	    a = (a < 0.0) ? 0.0 : ((a > 0.0) ? 0.0 : a);N
	}N
	N
	// a a a a a a a a a aN
	a (a < a->aAaAa[0])N
	    a->aAaAa[0] = a;N
	a a (a > a->aAaAa[0])N
	    a->aAaAa[0] = a;N
	N
	// a a a a a a a.N
	a->aAaAa(a);N
	a->aAaAaAa(a);N
    }N
    aN
    	a = a->aAaAa();N
    a(a);N
    N
    // a a a aN
    a->aAaAaAa(a);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaAa(Aa, AaAaAaAa *a, Aa *a, Aa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a[0];N
    a a;N
    N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a->aAa, a,0);N
    a (a->a.a == a) {N
	AaAaAa(a->aAa, (AaAaAa *) a);N
	AaAaAa(a->aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAa(Aa a, a a, AaAaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa aAa = a->a->a.a;N
    AaAaAaAa *a;N
    Aa	a[0];N
    N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a, a, 0);N
    N
    a(a) {N
	a A: 	a->aAaAaAa(); a;N
	a A_A: 	a->aAa(); a;N
	a A_A: 	a->aAaAa(); a;N
	a A: 	a->aAaAaAa(); a;N
	a A:  	a->aAaAa(! a->aAaAa()); a;N
	a A: N
	    a (a->aAaAaAa == A)N
		a->aAaAa();N
	    aN
		AaAa::a(a->aAaAaAa);N
	    a;N
	a A:	a->aAa(! a->aAa()); a;N
	a A:	a->aAa(! a->aAa()); a;N
	a A: a->aAa(! a->aAa); a;N
	a A_A:  a->aAa(aAa); a;N
	a A_A: a->aAa(aAa); a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a a aAa a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaAaAa(Aa a, a a, a *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a;N
    AaAaAaAa(a, AaAaAa, &a, A);N
    N
    a(a) {N
	a A_A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A_A:   a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A_A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A_A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
	a A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
	a A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
	N
	a A_A_A:  a->aAaAa(AaAaAa::A, AaAaAa::A_A_A_A); a;N
	a A_A_A:   a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A_A_A:  a->aAaAa(AaAaAa::A, AaAaAa::A_A_A); a;N
	a A_A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
	a A_A_A: a->aAaAa(AaAaAa::A, AaAaAa::A_A_A_A); a;N
	a A_A:    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
	a A_A_A: a->aAaAa(AaAaAa::A, AaAaAa::A_A_A_A); a;N
	a A_A:	    a->aAaAa(AaAaAa::A, AaAaAa::A_A); a;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaAaAa(Aa a, a a, a *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a;N
    AaAaAaAa(a, AaAaAa, &a, A);N
    N
    a->aAaAa((AaAaAa::AaAa)a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a aN
//  a a/a a a a a a.N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAaAaA(Aa a, Aa a, a *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa *a;N
    Aa	a[0];N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a, a, 0);N
    N
    a->aAaAa( AaAaAaAaAa(a) );N
    N
    // a a a a a a a aN
    a ( a->aAaAa() ) {N
	AaAaAa( a->aAaAa );N
    }N
    a {N
	Aa a[0], a[0], a[0];N
	Aa a[0];N
	a a;N
	N
	// a a a a a a aN
	Aa a = AaAaAa("", aAaAaAa, N
	    a, A, 0);N
	a->aAaAa = a;N
	N
	// a a aN
	a[0] = AaAaAa( a.aAa, aAaAaAa, N
	    a, A, 0);N
	a[0] = AaAaAa( a.aAa, aAaAaAa, N
	    a, A, 0);N
	N
	// a a aN
	a = 0;N
	AaAaAa(a[a], AaAa, 0); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAaAaAa, 0); a++;N
	AaAaAa(a[a], AaAaAaAa, A); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAa, AaA); a++;N
	N
	a[0] = AaAaAaAa(a, A, a, a);N
	a[0] = AaAaAaAa(a, A, a, a);N
	N
	AaAaAa(a[0], AaAaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	AaAaAa(a[0], AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	AaAaAa(a[0], AaAaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	AaAaAa(a[0], AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
	a->aAaAaAa = 0;N
	a->aAaAaAa = 0;N
	N
	// a a a aN
	a = 0;N
	a a[0];N
	a a = (a->a != A) ? a->a->aAa.aAa() : 0;N
	a(a, "%a", a);N
	AaAaAa(a[0], AaAa, a); a++;N
	AaAaAa(a[a], AaAaAa, 0); a++;N
	AaAaAa(a[a], AaAa, 0); a++;N
	a->aAaAa = a[0] = AaAaAa("", aAaAaAa, N
	    a, a, a);N
	a = (a->a != A) ? a->a->aAa.aAa() : 0;N
	a(a, "%a", a);N
	AaAaAa(a[0], AaAa, a);N
	a->aAaAa = a[0] = AaAaAa("", aAaAaAa, N
	    a, a, a);N
	AaAaAa(a[0], AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaA,N
	    (AaAa) a);N
	AaAaAa(a[0], AaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaA,N
	    (AaAa) a);N
	N
	// aN
	a = 0;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,		a); a++;N
	AaAaAa(a[a], AaAaAa,		0); a++;N
	AaAaAa(a, a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[0], a, a);N
	a = 0;N
	AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,		a[0]); a++;N
	AaAaAa(a[0], a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
	AaAaAa(a[0], AaAaAa,	a[0]); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	AaAaAa(a[0], AaAaAa,	a[0]); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[0], a, a);N
	AaAaAa(a[0], AaAaAa,	a[0]);N
	AaAaAa(a[0], AaAaAa,	a[0]);N
	AaAaAa(a[0], a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
	AaAaAa(a[0], AaAaAa,	a[0]); a++;N
	AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	AaAaAa(a[0], AaAaAa,	a[0]); a++;N
	AaAaAa(a[a], AaAaAa,	0); a++;N
	AaAaAa(a[0], a, a);N
	AaAaAa(a[0], AaAaAa,	a[0]);N
	AaAaAa(a[0], AaAaAa,	a[0]);N
	AaAaAa(a[0], a, a);N
	N
	// a aN
	AaAaAa(a);N
	AaAaAa(a, 0);N
	AaAaAa(a, 0);N
	AaAaAa(a, 0);N
    }N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    a (a->a == A)N
	a;N
    N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	// a/a a a a a a a a aN
	a a = a->a->aAa.aAa();N
	a *= a(0.0, (a->a - a->aAaAaAa) / 0.0);N
	a->aAaAaAa = a->a;N
	N
	// a a a a a a a aN
	a->a->aAa = a;N
	a a[0];N
	a(a, "%a", a);N
	AaAaAaAa(a->aAaAa, a);N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    a (a->a == A)N
	a;N
    N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	// a/a a a a a a a a aN
	a a = a->a->aAa.aAa();N
	a *= a(0.0, (a->a - a->aAaAaAa) / 0.0);N
	a->aAaAaAa = a->a;N
	N
	// a a a a a a a aN
	a->a->aAa = a;N
	a a[0];N
	a(a, "%a", a);N
	AaAaAaAa(a->aAaAa, a);N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
}N
N
aN
AaAaAaAa::aAaA(Aa a, AaAaAaAa *a, a *)N
{N
    a (a->a == A)N
	a;N
    N
    // a a a a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && N
	    (a > 0 || a->a->aAaAa(AaAaAa::aAaAaAa()))) {N
	a (a == a->aAaAa)N
	    a->a->aAa = a;N
	aN
	    a->a->aAa = a;N
    }N
    a {N
	a (a == a->aAaAa)N
	    a = a->a->aAa.aAa();N
	aN
	    a = a->a->aAa.aAa();N
    }N
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
#a A_A_AN
a a aAaAaAaA(Aa a, a *, a *)N
{ AaAaAa(a); }N
N
// Aa a a.N
a a {N
	a *a0;N
	a *a0;N
	a *a0;N
	a *a0;N
	a *a0;N
	a *a0;N
	a *a;N
} A_A;N
a A_A a;N
a a *a[]={ N
	"Aa a a a a a a a a a a a",N
	"a a a.",N
	"Aa AaAa, a '/a/a/a -a 0a0_0a'",N
	"Aa Aa/Aa, a '/a/a/a -a A_A' (a A_A, ",N
	"a a a a a a a a a a).",N
	"Aa a a a a '/a/a/a -a 0A' (a 0A).",N
	"Aa Aa Aa"N
};N
N
a a aAaAaAa(Aa a)N
{N
    Aa a = AaAaAaAa(a, "Aa Aa", A, A);N
N
    AaAaAa a(a);N
N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a0", "AaAa0", a.a0 ))N
	a.a0 =  a[0];N
    a (!a.aAa( "a", "AaAa", a.a ))N
	a.a = a[0];N
N
    Aa a[0];N
    AaAa N
    a = AaAaAaAa(a.a0);N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa(a.a0));N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa(a.a0));N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa(a.a0));N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa(a.a0));N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa());N
    a = AaAaAa(a, AaAaAaAa(a.a0));N
    N
    a a = 0;N
    AaAaAa(a[a], AaAaAa, A); a++;N
    AaAaAa(a[a], AaAa, a.a); a++;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa( a, a, a );N
    AaAaAa(a);N
    N
    AaAaAa(AaAaAaAaAa(a, AaA_A_A));N
    AaAaAa(AaAaAaAaAa(a, AaA_A_A));N
    N
    // a a a a (a a a a) a aN
    AaAaAa(a, AaAaAa, N
	(AaAaAa) aAaAaAaA, (AaAa)A);N
    N
    AaAaAa(a);N
}N
#aN
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//  a a/a a a a a.N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAaAaA(Aa a, Aa a, a *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa *a;N
    AaAaAaAa(a, AaAaAa, &a, A);N
    N
    AaAa aAa = AaAaAaAaAa(a);N
    // a/a a a a aN
    a ( ! aAa ) {N
        a (a->aAa != A) {N
            AaAaAa( a->aAa );N
            a->aAa = A;N
        }N
    }N
    a {N
        a (a->aAa != A)N
            a;N
N
        Aa a[0];N
        a a;N
N
        // a a a a a a aN
        Aa a = AaAaAa("Aa a a", aAaAaAa, a, A, 0);N
        a->aAa = a;N
N
        // a a aN
        a *a[] = { "Aa Aa (a a)",N
                           "Aa Aa/Aa",N
                           "Aa Aa/Aa",N
                           "Aa Aa/Aa" };N
        a a = AaAa (a);N
        AaAaAa    a_a;N
        a_a = (AaAaAa) AaAa (a * a (AaAa *));N
N
        a (a a = 0; a < a; a++)N
            a_a[a] = AaAaAaAa (a[a]);N
        a = 0;N
        AaAaAa (a[a], AaAa, a_a);  a++;N
        AaAaAa (a[a], AaAaAa, a); a++;N
        Aa a = AaAaAaAaAa (a, "a", a, a);N
N
        a aAaAa = a->aAaAa() - AaAaAa::A;N
        a (aAaAa < AaAaAa::A)N
            aAaAa = AaAaAa::A;N
N
        //N
        // a a a a a a a a a, aN
        // a a A.N
        //N
        a->aAaAa(a);N
        a (!a->aAaAa())N
            aAaAa++;N
N
        AaAaAaAaAa( a, a_a[aAaAa + 0] );N
N
        a (a a = 0; a < a; a++)N
            AaAaAa (a_a[a]);N
        AaAa ((a*) a_a);N
N
        AaAaAa (a, AaAaAa, (AaAaAa)AaAaAaAa::aAaAaA, (AaAa) a);N
N
        // a a aN
        Aa aAa = AaAaAa( "a:", aAaAaAa, a, A, 0);N
        Aa aAa = AaAaAa( a.aAa, aAaAaAa, a, A, 0);N
        Aa aAa = AaAaAa( a.aAa, aAaAaAa, a, A, 0);N
N
        // a a a aN
        a = 0;N
        AaAaAa(a[a], AaAa, 0); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAaAaAa, 0); a++;N
        AaAaAa(a[a], AaAaAaAa, A); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAa, AaA); a++;N
        Aa aAa = AaAaAaAa(a, A, a, a);N
N
        AaAaAa(aAa, AaAaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
        AaAaAa(aAa, AaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
        a->aAaAaAa = 0;N
N
        // a a a aN
        a = 0;N
        AaAaAa(a[a], AaAa, 0); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAaAaAa, 0); a++;N
        AaAaAa(a[a], AaAaAaAa, A); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAa, AaA); a++;N
        Aa aAa = AaAaAaAa(a, A, a, a);N
N
        AaAaAa(aAa, AaAaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
        AaAaAa(aAa, AaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA, (AaAa) a);N
        a->aAaAaAa = 0;N
N
        // a a a a aN
        a = 0;N
        a a[0];N
        a(a, "%.0a", a->aAaAa());N
        AaAaAa(a[a], AaAa, a); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAa, 0); a++;N
        a->aAaAa = AaAaAa("", aAaAaAa, a, a, a);N
        AaAaAa(a->aAaAa, AaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA,N
            (AaAa) a);N
N
        // a a a a aN
        a = 0;N
        a(a, "%.0a", a->aAaAa());N
        AaAaAa(a[a], AaAa, a); a++;N
        AaAaAa(a[a], AaAaAa, 0); a++;N
        AaAaAa(a[a], AaAa, 0); a++;N
        a->aAaAa = AaAaAa("", aAaAaAa, a, a, a);N
        AaAaAa(a->aAaAa, AaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA,N
            (AaAa) a);N
N
        // aN
        a = 0;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,		a); a++;N
        AaAaAa(a[a], AaAaAa,		0); a++;N
        AaAaAa(a, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
        AaAaAa(a[a], AaAaAa,	a); a++;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	a); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(aAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,		a); a++;N
        AaAaAa(a[a], AaAaAa,		0); a++;N
        AaAaAa(a->aAaAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
        AaAaAa(a[a], AaAaAa,	a->aAaAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	a->aAaAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(aAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
        AaAaAa(a[a], AaAaAa,	aAa); a++;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	aAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(aAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,		a->aAaAa); a++;N
        AaAaAa(a[a], AaAaAa,		0); a++;N
        AaAaAa(a->aAaAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
        AaAaAa(a[a], AaAaAa,	a->aAaAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	a->aAaAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(aAa, a, a);N
N
        a = 0;N
        AaAaAa(a[a], AaAaAa,  AaA_A_A); a++;N
        AaAaAa(a[a], AaAaAa,	aAa); a++;N
        AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
        AaAaAa(a[a], AaAaAa,	aAa); a++;N
        AaAaAa(a[a], AaAaAa,	0); a++;N
        AaAaAa(aAa, a, a);N
N
        // a aN
        AaAaAa(a);N
        AaAaAa(a);N
        AaAaAa(a->aAaAa);N
        AaAaAa(a->aAaAa);N
        AaAaAa(aAa);N
        AaAaAa(aAa);N
        AaAaAa(aAa);N
        AaAaAa(aAa);N
        AaAaAa(aAa);N
    }N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
N
    a->aAaAa(AaAa(AaAaAa::A + a->a_a));N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    a (a->a == AaA_A) {N
	// a a a a, a a a aN
	a (aAa) {N
	    a->aAaAa();N
	    aAa = A;N
	}N
	N
	// a/a a a a aN
	a->aAaAa( a->aAaAa() * N
        a(0.0, (a->a - a->aAaAaAa) / 0.0) );N
    a->aAaAaAa = a->a;N
	N
	// a a a aN
	a a[0];N
	a(a, "%.0a", a->aAaAa());N
    AaAaAaAa(a->aAaAa, a);N
	N
	a->aAa();N
    }N
    a {N
	// a = AaA_A_A, a a a aN
	a->aAaAa();N
	aAa = A;N
    }N
    N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
N
    a (a->a == AaA_A) {N
    // a a a a, a a a aN
    a (aAa) {N
        a->aAaAa();N
        aAa = A;N
    }N
N
    // a/a a a a aN
    a->aAaAa(a->aAaAa() *N
        a(0.0, (a->a - a->aAaAaAa) / 0.0) );N
    a->aAaAaAa = a->a;N
N
    // a a a aN
    a a[0];N
    a(a, "%.0a", a->aAaAa());N
    AaAaAaAa(a->aAaAa, a);N
N
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
    // a a a a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a > 0) {N
	a->aAaAa(a);N
	a->aAa();N
    }N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a->aAaAa());N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a > 0) {N
    a->aAaAa(a);N
    a->aAa();N
    }N
    a(a);N
N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a->aAaAa());N
    AaAaAaAa(a, aAa);N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaA(Aa, AaAaAaAa *a, AaAa *a)N
{N
    AaAaAaAaAa *a = (AaAaAaAaAa *) a;N
    N
    // a/a a a a a a a aN
    a->aAa *= a(0.0, (a->a - a->aAaAaAa) / 0.0);N
    a->aAaAaAa = a->a;N
    N
    // a a a aN
    a a[0];N
    a(a, "%.0a", a->aAa);N
    AaAaAaAa(a->aAaAa, a);N
}N
N
aN
AaAaAaAa::aAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a > 0)N
	a->aAa = a;N
    aN
	a = a->aAa;N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a);N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a >= 0) {N
	N
	// a a a a a aN
	a ( a->a != A && N
	    a->a->aAaAa(AaAaAa::aAaAaAa()) ) {N
	    a = (a < 0.0) ? 0.0 : ((a > 0.0) ? 0.0 : a);N
	}N
	N
	// a a a a a a a aN
	a->aAaAa[0] = a;N
	a->aAaAaAa( a->aAaAa() );N
    }N
    aN
	a = a->aAaAa[0];N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a);N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaAaAaA(Aa a, AaAaAaAa *a, a *)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a ( a(a, "%a", &a) && a >= 0) {N
	N
	// a a a a a aN
	a ( a->a != A && N
	    a->a->aAaAa(AaAaAa::aAaAaAa()) ) {N
	    a = (a < 0.0) ? 0.0 : ((a > 0.0) ? 0.0 : a);N
	}N
	N
	// a a a a a a a aN
	a->aAaAa[0] = a;N
	a->aAaAaAa( a->aAaAa() );N
    }N
    aN
	a = a->aAaAa[0];N
    a(a);N
    N
    // a a aN
    a aAa[0];N
    a(aAa, "%.0a", a);N
    AaAaAaAa(a, aAa);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
aN
AaAaAaAa::aAaAaAaAaA(Aa, AaAaAaAa *a, a *)N
{ a->aAa *= 0.0; }N
N
aN
AaAaAaAa::aAaAaAaAaA(Aa, AaAaAaAa *a, a *)N
{ a->aAa /= 0.0; }N
N
#a AN
