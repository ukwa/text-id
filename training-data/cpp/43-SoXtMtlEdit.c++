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
 |   Aa(a):	Aa Aa, Aa AaN
 |N
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <a.a>N
#a <a.a>N
N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAaAa.a>N
N
#a "_AaAaAaAa.a"N
#a "_AaAaAaAa.a"N
N
#a <Aa/a/AaA.a>N
#a <Aa/a/AaAaAa.a>N
N
/*N
 * AaN
 */N
#a A(a) AaAaAaAa( AaAa(a) )N
 N
// a a a/a a aN
#a A_A	    	0N
#a A_A	    	0N
#a A_A_A	0N
#a A 	    	    	0    	// a a a aN
N
// a a a a a (a,a,a,a) aN
// a a 0 a (a, a)N
#a A_A 0N
N
N
// a aN
a {N
    a_A_A = 0, N
    a_A, N
    a_A_A, N
    a_A_A,N
    a_A_A,N
    a_A_A,N
    a_A_A     // a a aN
};N
N
// a a a a a a a aN
// Aa: a a (a/a/a/Aa a a a) a aN
// a a a a.N
a {N
    a_A_A = 0, N
    a_A_A,N
    a_A_A,N
    a_A_A,N
    a_A_A,N
    a_A_AN
};N
N
// a a a a (a a)N
#a a_a	    	0a0N
#a a_a   	0a0N
#a a_a   	0a0N
#a a_a   	0a0N
#a a_a   	0a0N
#a a_a   	0a0N
#a a_a  0a0N
N
// a a a a (a a aAaAa() a)N
a a *aAa;N
a a *aAa;N
a a *aAa;N
a a *aAa;N
a a *a[]={N
	"Aa Aa Aa",N
	"Aa Aa Aa",N
	"Aa Aa Aa",N
	"Aa Aa Aa"N
};N
N
a a *aAa  = A "/a/a/a";N
N
a a *a_a[] = { (a *)A, (a *)A, (a *)A,N
				 (a *)A, (a *)A, (a *)AN
};N
a a *a_a[] = { "Aa: ",  "Aa: ",       "Aa: ", N
                               "Aa: ", "Aa: ",  "Aa: "N
};N
N
a a a aAa[][0] = {N
    {.0, .0, .0}, {.0, .0, .0},N
    {.0, .0, .0}, {.0, .0, .0}N
};N
a a a aAa[][0] = {N
    {-0, 0, 0}, {0, 0, 0}, {0, 0, 0},N
    {-0, 0, 0}, {0, 0, 0}, {0, 0, 0},N
    {-0, -0, 0}, {0, -0, 0}, {0, -0, 0}N
};N
N
a a *aAaAa = "AaAaAaAa";N
N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
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
AaAaAaAa::AaAaAaAa(N
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
AaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    aAaAa(aAaAa);N
    aAaAaAa(aAaA, a);N
    a	    	= A;N
    aAa    	= A;N
    aAaAa   	= a Aa[a_A_A];N
    aAa	    	= a_a;N
    a	    	= A;N
    aAa 	= A;N
    aAa	= a AaAaAa;N
    aAa		= A;N
    aAa		= A;N
    a (a a=0; a<0; a++) {N
	a[a] = A;N
	aAa[a] = A;N
    }N
    aAa( AaAa0a(A_A, A_A) );N
    N
    // a a a a a a aN
    aAa    	= A;N
    aAa     	= A;N
    aAaAa = A;N
    N
    //N
    // Aa a a a a a aN
    //N
    aAa   = a AaAa;N
    a0  	    = a AaAaAa;N
    a0  	    = a AaAaAa;N
    aAa	    = a AaAaAa;N
    a	    = a AaAa;N
    AaAaAa *a    = a AaAaAa;N
    AaAa    	*a = a AaAa;N
    AaAa	    	*a	    = a AaAa;N
    AaAa0    	*a	    = a AaAa0;N
    AaAaAa	    	*aAa   = a AaAaAa;N
    AaAaAa	*aAa = a AaAaAa;N
    AaAaAa    	*aAa0 = a AaAaAa;N
    AaAaAa    	*aAa0 = a AaAaAa;N
    N
    a->a();N
    a->aAa(a);N
    a->aAa(aAa0);N
    a->aAa(aAa);N
    a->aAa(aAa);N
    a->aAa(a);N
    a->aAa(aAa);N
    a->aAa(aAa0);N
    a->aAa(a0);N
    a->aAa(a0);N
    a->aAa(aAa);N
    a->aAa(a);N
    a->aAa(a);N
    N
    // a a a aN
    a->a.aAa(0, 0, 0);N
    a->aAa.aAa(0);N
    a->aAa.aAa(0);N
    a->a.aAa(0);N
    a->a.aAa(0.0);N
    a->a.aAa(0.0);N
    N
    // a a a aN
    aAa->a.aAa(0, 0, aAa);N
    aAa->a.aAa(AaAaAa::A_A);N
    a->a.aAa(0, 0, aAa);N
    aAa->aAaAa.aAa(0);N
    aAa->aAaAa.aAa(0);N
    aAa0->a.aAa(AaAaAa::A_A);N
    aAa0->a.aAa(AaAaAa::A);N
    N
    // Aa a aN
    a0->a.aAa(.0, -.0, -.0);N
    a0->a.aAa(-.0, -.0, -.0);N
    N
    //N
    // a a a a a - N
    // a a a a a a a a a a a aN
    // (a a a a a)N
    //N
    a = a AaAaAa(AaAaAaAa::aA, a);N
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
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa(aAa);N
    N
    a ( aAa() )N
	a();N
    N
    // a a aN
    a aAa;N
    a aAa;N
    N
    a a;N
    a aAa;N
    a a;N
    a [] aAaAa;N
    a a[a_A_A];N
    a a[a_A_A];N
    a a[a_A_A];N
    a a[a_A_A];N
    a a[a_A_A];N
    a a[a_A_A];N
    a aAa;	// a a a a a aN
    a->a();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a.N
//N
// a: a aN
//N
aN
AaAaAaAa::aAaAa(AaAaAaAa::AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == a)N
	a;N
N
    aAa = a;N
N
    // a/a a a aN
    a (aAa != A) {N
	a (aAa == A)N
	    AaAaAa(aAa);N
	aN
	    AaAaAa(aAa);N
    }N
N
    // a a a a a a a a aN
    a (a != A && aAa == A) {N
    	aAa(a, a, aAa, 0);N
	aAaAaAa();N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa::a();N
    N
    // a a a a a a a a a a aN
    a (aAa != A && aAa != a_a)N
	aAa->a();N
    a (aAa != A && aAaAa)N
	aAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa::a();N
    N
    a (aAa != A)N
	aAa->a();N
    N
    a (aAa != A)N
	aAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a.N
//N
// a: aN
//N
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa a, a, a[0];N
    Aa    a[0];N
    a    a;N
    Aa a0A[0];N
    a	   a0 = 0;N
    N
    a = AaAaAaAa(a, "aAa", A, 0);N
    N
    Aa a[0];N
    a a = 0;N
#a A_A_AN
    AaAa::aAaAa(AaAa(a), A(a), a, &a);N
#aN
    N
    a = AaAaAaAa(a, "aAa", a, a);N
#a A_A_AN
    // a a a a/a a a aN
    AaAa::aAaAa(a, AaAa::aAaAa(a));N
#aN
    AaAaAa(a, AaAaAa,N
	(AaAaAa) AaAaAaAa::aAa, (AaAa) a);N
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
    a0A[a0++] = aAaAa[A] = AaAaAa(A, 	\N
    	aAaAaAaAa, a, a, a); 	\N
    AaAaAa(aAaAa[A], AaAaAaAa,\N
	(AaAaAa) AaAaAaAa::aAa,	\N
	(AaAa) A)N
N
#a A_A(A,A) \N
    a0A[a0++] = aAaAa[A] = AaAaAa(A, 	\N
    	aAaAaAaAa, a, a, a); 	\N
    AaAaAa(aAaAa[A], AaAaAa,\N
	(AaAaAa) AaAaAaAa::aAa,	\N
	(AaAa) A)N
N
N
    // a a...N
    A_A("Aa Aa", a_A_A);N
    N
    a0A[a0++] = AaAaAa("a",N
    	aAaAaAa, a, A, 0);N
    N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    A_A("Aa", a_A);N
    A_A("Aa", a_A_A);N
    a--;N
    N
    a0A[a0++] = AaAaAa("a",N
    	aAaAaAa, a, A, 0);N
	N
    A_A("Aa",  a_A_A);N
    A_A("Aa", a_A_A);N
    N
    a0A[a0++] = AaAaAa("a",N
    	aAaAaAa, a, A, 0);N
    N
    A_A("Aa",  a_A_A);N
#a A_AN
#a A_AN
N
    // a aN
    AaAaAa(a0A, a0);N
    AaAaAa(a, 0);N
N
    a a;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a (a a a a, N
// a a a).N
//N
// a: aN
//N
AaN
AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  	a, aAa, aA[0], aA[0];N
    a		a, a;N
    Aa		a[0];N
    N
    // a a a a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a = AaAaAa("aAa", aAaAaAa, a, a, a);N
    aAa = AaAaAa("aAa", aAaAaAa, a, a, a);N
    N
    // a aN
    a (a=0; a<0; a++) {N
	a[a] = a _AaAaAaAa(a, A, A, _AaAaAaAa::A_A);N
	aAa[a] = A;N
	aA[a] = a[a]->aAa();N
    }N
    N
    // a a a a a a-a a: aN
    AaAa a(0, 0, 0);N
    aAa = A;N
    a[a_A_A]->aAaAa(a.aAa());N
    a[a_A_A]->aAaAa(a.aAa());N
    aAa = A;N
    N
    // AaN
    N
#a A_A_A(A,A) \N
    A->aAaAaAa( \N
	&AaAaAaAa::A, a);N
N
    A_A_A(a[a_A_A], aAaA);N
    A_A_A(a[a_A_A], aAaA);N
    A_A_A(a[a_A_A], aAaA);N
    A_A_A(a[a_A_A], aAaA);N
    A_A_A(a[a_A_A], aAaA);N
    A_A_A(a[a_A_A], aAaA);N
N
#a A_A_AN
N
    N
    // a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    a (a=0; a<0; a++) {N
	aAa[a] = AaAaAa("", aAaAaAaAa, N
	    aAa, a, a);N
    	AaAaAa(aAa[a], AaAaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAa, (AaAa) (a a) a);N
    }N
    N
    // a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, a); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    a (a=0; a<0; a++) {N
	aAa[a] = AaAaAa("", aAaAaAaAa, N
	    aAa, a, a);N
   	AaAaAa(aAa[a], AaAaAaAa, N
	    (AaAaAa) AaAaAaAa::aAaAa, (AaAa) (a a) a);N
    }N
    N
    // a a aN
    a (a=0; a<0; a++)N
    	aA[a] = AaAaAa(a_a[a], aAaAaAa, N
	    aAa, A, 0);N
    N
    //N
    // a N
    //N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a a a, a a aN
    a a0, a0;N
    a (a=0; a<0; a++) {N
    	N
	a0 = a((a*(0-A_A))/0.0);N
	a0 = a(((a+0)*(0-A_A))/0.0);N
	a (a >= 0) {N
	    a0 += A_A;N
	    a0 += A_A;N
	}N
	N
	// a a a a a a aN
	AaAaAa(a[0], AaAaAa, 	    AaA_A);N
	AaAaAa(a[0], AaAaAa,           a0);N
	AaAaAa(a[0], AaAaAa, 	    AaA_A);N
	AaAaAa(a[0], AaAaAa,        a0);N
	N
	// a a aN
	AaAaAa(a[0], AaAaAa,	    AaA_A);N
	AaAaAa(a[0], AaAaAa,	    aAa);N
	AaAaAa(a[0], AaAaAa,       AaA_A);N
	AaAaAa(aA[a], a, 0);N
	N
	// a a aN
	a (a < 0) {N
	    N
	    // a aN
	    AaAaAa(a[0], AaAaAa,    AaA_A);N
	    AaAaAa(aAa[a], a, 0);N
	    N
	    // a aN
	    AaAaAa(a[0], AaAaAa,    AaA_A);N
	    AaAaAa(a[0], AaAaAa,	    aAa[a]);N
	    AaAaAa(aAa[a], a, 0);N
    	}N
	N
	// a a aN
	AaAaAa(a[0], AaAaAa,	    AaA_A);N
	AaAaAa(a[0], AaAa,		    AaA_A);N
	a (a < 0) {N
	    AaAaAa(a[0], AaAaAa,    AaA_A);N
	    AaAaAa(a[0], AaAaAa,	    aAa[a]);N
	    AaAaAa(aA[a], a, 0);N
	}N
	aN
	    AaAaAa(aA[a], a, 0);N
    }N
    N
    // a a a (a a a)N
    AaAaAa(aAa, 0);N
    AaAaAa(aAa, 0);N
    AaAaAa(aA, 0);N
    AaAaAa(aAa);N
    AaAaAa(aA, 0);N
    N
    a a;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa  a a a a a a a a a.N
//N
// a: aN
//N
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  	a, aAa, aA, aA;N
    a		a;N
    Aa		a[0];N
    N
    // a a a a a a aN
    a = AaAaAa("Aa", aAaAaAa, a, A, 0);N
    N
    aA = AaAaAa("Aa Aa", aAaAaAa, a, A, 0);N
    aA = AaAaAa("", aAaAaAa, a, A, 0);N
    aAa = aAaAa(a);N
    N
    // aN
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(aA, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         aA); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,        aA); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa,       aA); a++;N
    AaAaAa(aA, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         aA); a++;N
    AaAaAa(a[a], AaAaAa,         0); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(aAa, a, a);N
    N
    // a aN
    AaAaAa(aA);N
    AaAaAa(aA);N
    AaAaAa(aAa);N
    N
    a a;N
}N
N
#a AN
// ??? a A_Aa a a a a a a aN
#a <A0/a.a>N
#a <Aa/a/AaAaAa.a>N
a AaAa a(a *a, AaAa *a)N
{N
    N
    a (a->a == AaAa && AaAa((AaAa *)a, 0) == A_Aa) {N
	AaAaAa a;N
	a.aAa()->aAaAa(a);N
	a(a, "\a___AaAaAaAa____a____\a");N
	a.a( ((AaAaAaAa *)a)->aAaAa() );N
    }N
    N
    a A;N
}N
#aN
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a, a a a a,N
//  a a a a a a.N
//N
// a: aN
//N
AaN
AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    Aa a[0];N
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
    // a a a a a, a a a a a a aN
    aAa = AaAaAa(aAaAa(), aAaAaAa, a, a, a);N
    aAa(aAa);N
    N
    //N
    // a a A a a a a (0)N
    //N
    AaAaAa a(aAa);N
N
    a (!a.aAa("aAa", "AaAa", aAa))N
         aAa  = a[0];N
    a (!a.aAa("aAa", "AaAa", aAa))N
         aAa  = a[0];N
    a (!a.aAa("aAa","AaAa",aAa))N
         aAa = a[0];N
    a (!a.aAa("aAa","AaAa",aAa))N
         aAa = a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
    a (!a.aAa("aAa0",  "AaAa0",  a_a[0]))N
         a_a[0] = a_a[0];N
N
N
    //N
    // a a aN
    //N
    Aa a = aAaAa(aAa);N
N
    // a a a aN
    aAa = a AaAaAaAa(aAa);N
    aAa->aAaAa(a);N
    aAa->aAaAa(AaAaAa::A); // a a aN
    aAa->aAaAaAa(A); // a aN
N
#a AN
    // ??? a A_Aa a a a a a a aN
    aAa->aAaAa(a, aAa);N
#aN
N
#a 0N
    a0_a a = a(A_A_A_A_A) N
		+ a(A_A_A_A_A) N
    	    	+ a(A_A_A_A_A);N
    a (a < 0)N
	aAa->aAaAa(A);N
#aN
N
    Aa a = aAa(aAa);N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    aAa = AaAaAa("Aa", aAaAaAaAa, aAa, a, a);N
    AaAaAa(aAa, AaAaAa, N
	(AaAaAa) &AaAaAaAa::aAaA, N
	(AaAa) a);N
    N
    //N
    // Aa N
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     A_A_A); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         a); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     A_A_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,      0); a++;N
    AaAaAa(aAa->aAa(), a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    A_A_A/0 - 0); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     A_A_A/0 + 0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,      A); a++;N
    AaAaAa(aAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,	    A_A_A); a++;N
    AaAaAa(a[a], AaAaAa,        A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,       A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,      A); a++;N
    AaAaAa(a, a, a);N
    N
    //N
    // a a aN
    //N
    AaAaAa(a);N
    aAa->a();N
    AaAaAa(a);N
    N
    //N
    // a a A a a a a (0)N
    //N
    a *a;N
    AaAa a;N
    a (a.aAa("a0Aa", "Aa0Aa", a)) {N
	aAa->a.aAa(0, 0, &a);N
	aAa->a.aAa(0, 0, &a);N
    }N
    a (a.aAa("a0Aa", "Aa0Aa", a)) {N
	aAa->a.aAa(0, 0, &a);N
	aAa->a.aAa(0, 0, &a);N
    }N
    a (a.aAa("a0Aa", "Aa0Aa", a)) {N
	a0->a.aAa(a);N
    }N
    a (a.aAa("a0Aa", "Aa0Aa", a)) {N
	a0->a.aAa(a);N
    }N
    a (a.aAa("aAa", "AaAa", a)) {N
	 a      (a(a, "a") == 0)  N
	     aAa = A;N
	 a a (a(a, "a") == 0)  N
	     aAa = A_A;N
    }N
    a (aAa == A_A)N
	AaAaAa(aAa);N
    N
    // a a a a a a aN
    aAaAa();N
N
    a aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a a aN
//  a a.N
//N
// a: aN
//N
aN
AaAaAaAa::a(AaAa *a, a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAa() )N
	a();N
    N
    a (a != A && a >= 0) {N
	a = a;N
	a->a();N
	a = a;N
	N
	// a a a a a a a aN
	a (a a=0; a<0; a++)N
	    aAa[a] = A;N
	N
	a (aAa())N
	    a();  // a a a aN
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a.N
//N
// a: aN
N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( ! aAa() ) N
    	a;N
N
    a();      // a aN
    a->a();N
    a = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a'a a, a a a a a.N
//    Aa a a a a a'a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a aN
    a ( aAa() && a->aAaAa() == A) {N
	aAa(aAa, 0, a, a);N
	aAaAa();N
	a->a(a); // a A aN
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a'a a a a N
//    a'a a a.N
//N
// a: aN
N
aN
AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a->a();N
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
AaAaAaAa::aAaA(N
    a *aAa, N
    a AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    AaAa aAa;N
    AaAa  aAa = (a->a != A && a->aAa == A);N
    N
    a (a->aAa)N
    	a;N
    N
    //N
    // a a a(a) a a a aN
    //N
    // a a a a a, a a aN
    // a a a a. Aa a a a aN
    // 	    aAa = aAa * aAaAa.N
    //N
N
    // a a a a a a a a a a aN
    a (aAa)N
	a->a->a();N
    a->aAa = A;N
    N
    a (a->aAa & a_a) {N
	a->a[a_A_A]->aAaAa(aAa->aAa());N
	aAa = aAa->aAa();N
	aAa *= a->a[a_A_A]->aAa();N
	a->aAa->aAa.aAa(aAa);N
	a->aAa[a_A_A] = A;N
	a (aAa) {N
	    a->a->aAa.a0Aa(a->a, aAa);N
	    a ( a->a->aAa.aAa() )N
		 a->a->aAa.aAa( A );N
	}N
    }N
N
    a (a->aAa & a_a) {N
	a->a[a_A_A]->aAaAa(aAa->aAa());N
	aAa = aAa->aAa();N
	aAa *= a->a[a_A_A]->aAa();N
	a->aAa->aAa.aAa(aAa);N
	a->aAa[a_A_A] = A;N
	a (aAa) {N
	    a->a->aAa.a0Aa(a->a, aAa);N
	    a ( a->a->aAa.aAa() )N
		 a->a->aAa.aAa( A );N
	}N
    }N
N
    a (a->aAa & a_a) {N
	a->a[a_A_A]->aAaAa(aAa->aAa());N
	aAa = aAa->aAa();N
	aAa *= a->a[a_A_A]->aAa();N
	a->aAa->aAa.aAa(aAa);N
	a->aAa[a_A_A] = A;N
	a (aAa) {N
	    a->a->aAa.a0Aa(a->a, aAa);N
	    a ( a->a->aAa.aAa() )N
		 a->a->aAa.aAa( A );N
	}N
    }N
N
    a (a->aAa & a_a) {N
	a->a[a_A_A]->aAaAa(aAa->aAa());N
	aAa = aAa->aAa();N
	aAa *= a->a[a_A_A]->aAa();N
	a->aAa->aAa.aAa(aAa);N
	a->aAa[a_A_A] = A;N
	a (aAa) {N
	    a->a->aAa.a0Aa(a->a, aAa);N
	    a ( a->a->aAa.aAa() )N
		 a->a->aAa.aAa( A );N
	}N
    }N
    N
    // a a a a a a aN
    a (a->aAa == A)	N
	a->aAa->aAa(a->aAa);N
N
    // a-a a a a aN
    a (aAa)N
    	a->a->a(a->a);N
    a->aAa = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a (a->a != A && a->aAa == A) {N
    	// a a a a a a a aN
	a->a->a();N
	a->a->a.a0Aa(a->a, a);N
	a ( a->a->a.aAa() )N
	     a->a->a.aAa( A );N
	a->a->a(a->a);N
    }N
    a->aAa->a.aAa(a);N
    a->aAa[a_A_A] = A;N
N
    // a a a a a a aN
    a (a->aAa == A)	N
	a->aAa->aAa(a->aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a (a->a != A && a->aAa == A) {N
    	// a a a a a a a aN
	a->a->a();N
	a->a->a.a0Aa(a->a, a);N
	a ( a->a->a.aAa() )N
	     a->a->a.aAa( A );N
	a->a->a(a->a);N
    }N
    a->aAa->a.aAa(a);N
    a->aAa[a_A_A] = A;N
N
    // a a a a a a aN
    a (a->aAa == A)	N
	a->aAa->aAa(a->aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a/a/a/aN
// a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa(N
    AaAa	    	*aAaAa,N
    AaAa	    	*aAaAa,N
    a a	    	*a,N
    a   	    	a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa(a);N
N
    aAa *= a;N
N
    a (aAaAa != A && aAa == A) {N
    	// a a a a a a a aN
	a->a();N
	aAaAa->a0Aa(a, aAa);N
	a ( aAaAa->aAa() )N
	     aAaAa->aAa( A );N
	a->a(a);N
    }N
    aAaAa->aAa(aAa);N
N
    // a a a a a a aN
    a (aAa == A)	N
	aAa->aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
// Aa a a a a a a a a a a aN
// a a a a a a a a a aAa a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a->aAaAa(N
    	(a->a != A) ? &a->a->aAa : A,N
	&a->aAa->aAa,N
	a->a[a_A_A]->aAaAa(),N
    	a);N
    a->aAa[a_A_A] = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
// Aa a a a a a a a a a a aN
// a a a a a a a a a aAa a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a->aAaAa(N
    	(a->a != A) ? &a->a->aAa : A,N
	&a->aAa->aAa,N
	a->a[a_A_A]->aAaAa(),N
    	a);N
    a->aAa[a_A_A] = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
// Aa a a a a a a a a a a aN
// a a a a a a a a a aAa a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a->aAaAa(N
    	(a->a != A) ? &a->a->aAa : A,N
	&a->aAa->aAa,N
	a->a[a_A_A]->aAaAa(),N
    	a);N
    a->aAa[a_A_A] = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
// Aa a a a a a a a a a a aN
// a a a a a a a a a aAa a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *aAa, N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) aAa;N
    N
    a (a->aAa)N
    	a;N
    N
    a->aAaAa(N
    	(a->a != A) ? &a->a->aAa : A,N
	&a->aAa->aAa,N
	a->a[a_A_A]->aAaAa(),N
    	a);N
    a->aAa[a_A_A] = A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a, a a aN
//  a a (a a a a a a a a).N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAaAa(N
    	    _AaAaAaAa *a,N
	    a a a[0])N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    a aAa[0];N
N
    // a a aN
    a = (a[0] > a[0]) ? N
    	    ((a[0] > a[0]) ? a[0] : a[0]) :N
	    ((a[0] > a[0]) ? a[0] : a[0]);N
N
    a (a == 0.0)	// a a aN
	aAa[0] = aAa[0] = aAa[0] = 0.0;N
    a {N
	// a a a a a aN
	a a = 0.0 / a;N
	aAa[0] = a[0] * a;N
	aAa[0] = a[0] * a;N
	aAa[0] = a[0] * a;N
    }N
N
    // a a a a a a a aAa a aN
    aAa = A;N
    a->aAaAa(aAa);N
    a->aAa(a);N
    aAa = A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a0 a a0N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAa(AaAa *a0, a a0, N
			    a AaAa *a0, a a0)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a0->aAa.a0Aa(a0, a0->aAa[a0]);N
    a0->aAa.a0Aa(a0, a0->aAa[a0]);N
    a0->aAa.a0Aa(a0, a0->aAa[a0]);N
    a0->aAa.a0Aa(a0, a0->aAa[a0]);N
    a0->a.a0Aa(a0, a0->a[a0]);N
    a0->a.a0Aa(a0, a0->a[a0]);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a 0 a (a a a a) a a a a N
//  a a a a a a a A a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAa[a_A_A] )N
	a->aAa.aAa( A );N
    a ( aAa[a_A_A] )N
	a->aAa.aAa( A );N
    a ( aAa[a_A_A] )N
	a->aAa.aAa( A );N
    a ( aAa[a_A_A] )N
	a->aAa.aAa( A );N
    a ( aAa[a_A_A] )N
	a->a.aAa( A );N
    a ( aAa[a_A_A] )N
	a->a.aAa( A );N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a aAa a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a aN
    aAaAa(a[a_A_A], aAa->aAa[0].aAa());N
    aAaAa(a[a_A_A], aAa->aAa[0].aAa());N
    aAaAa(a[a_A_A], aAa->aAa[0].aAa());N
    aAaAa(a[a_A_A], aAa->aAa[0].aAa());N
N
    // a a a aN
    aAa = A;N
    a[a_A_A]->aAa(aAa->a[0]);N
    a[a_A_A]->aAa(aAa->a[0]);N
    aAa = A;N
    N
    aAaAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a aAa (a/a a a a) a a N
// a aAa a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAaAa(AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a/a a aAaN
    a (aAa == a_a) {N
    	a (aAa == A || ! aAa->aAa())N
	    a;N
	aAa->a();N
	a;N
    }N
    a {N
	a (aAa == A) {N
	    // a a a a a aN
	    aAa = a _AaAaAaAa(N
		    AaAa::aAaAa(aAa()), N
		    A, A);N
	    aAa->aAaAa(_AaAaAaAa::A);N
	    aAa->aAaAaAa(N
		AaAaAaAa::aAaA, a);N
	    N
	    // a a a a a a a aN
	    // a a a a (a a a)N
	    aAa->aAaAaAa(N
		AaAaAaAa::aAaAaA, a);N
	}N
	N
    	aAa->a();N
    }N
    N
    // a a a a, a a aAa aN
    aAa = A;N
    a (aAa) {N
	a a_a:N
	    a;N
	a a_a:N
	    aAa->aAa(a[a_A_A]->aAaAa());N
	    a (aAa)N
	    	aAa->aAa(aAa);N
	    a;N
	a a_a:N
	    aAa->aAa(a[a_A_A]->aAaAa());N
	    a (aAa)N
	    	aAa->aAa(aAa);N
	    a;N
	a a_a:N
	    aAa->aAa(a[a_A_A]->aAaAa());N
	    a (aAa)N
	    	aAa->aAa(aAa);N
	    a;N
	a a_a:N
	    aAa->aAa(a[a_A_A]->aAaAa());N
	    a (aAa)N
	    	aAa->aAa(aAa);N
	    a;N
	a:N
	    // ??? a a a a a a a aAaN
	    // ??? a'a a a a a a a (a aN
	    // ??? a a a a a)N
	    a (aAa) {N
		a a[0];N
		N
		a(a, "Aa ");N
		a (aAa & a_a)N
		    a(a, "Aa/");N
		a (aAa & a_a)N
		    a(a, "Aa/");N
		a (aAa & a_a)N
		    a(a, "Aa/");N
		a (aAa & a_a)N
		    a(a, "Aa/");N
		a[a(a) - 0] = ' ';N
		a(a, "Aa");N
		N
	    	aAa->aAa(a);N
	    }N
	    a;N
    }N
    aAa = A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a, a a a a a a aN
//  (a a a a a a).N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aA(a *a, AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    a (!a->aAa())N
	a;N
    N
    // a a a a a a a/aAaN
    a->aAa(a->aAa, 0, a->a, a->a);N
    a->aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a a.N
//  Aa a a a a a a a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAa(Aa, AaAaAaAa *a, AaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa == A) {N
    	A_A(a->aAaAa[a_A]);N
    	A_A(a->aAaAa[a_A_A]);N
    }N
    a {N
    	A_A(a->aAaAa[a_A]);N
    	A_A(a->aAaAa[a_A_A]);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAa(N
    Aa a,N
    a a,N
    AaAaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa	*a;N
N
    AaAaAaAa(a, AaAaAa, &a, A);N
N
    Aa aAa = a->a->a.a;N
N
    a (a) {N
    	a a_A:N
	    a->aAaAa(A);N
	    a;N
N
	a a_A_A:N
	    a->aAaAa(A_A);N
	    a;N
N
	a a_A_A:N
	    // a a a a a aN
	    a (a->aAa == A) {N
		a->aAa = a AaAaAaAa(N
		    AaAa::aAaAa(a->aAa()), N
		    A, A, aAa);N
		a->aAa->aAa(N
		    AaAaAaAa::aAaA, a);N
		a->aAa->aAaAaAa(N
		    AaAaAaAa::aAaAaA, a);N
	    }N
	    a->aAa->a();N
	    a->aAaAa = A;N
	    a;N
N
    	a a_A_A:N
	        a (a->a == A)N
		    a->a = a AaAaAa(a->aAa());N
		a->a->a(a->aAa, aAa);N
	    a;N
	    N
    	a a_A_A:N
		a (a->a == A)N
		    a->a = a AaAaAa(a->aAa());N
	    N
		a->a->a(aAa,N
					 AaAaAaAa::aAa,N
					 a);N
	    a;N
	    N
	a:N
#a AN
	    AaAaAa::a("AaAaAaAa::aAa",N
		"a %a", a);N
#aN
	    a;N
	    N
	a a_A_A:N
	    a->aAaAa("AaAaAaAa.a");N
	    a;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaAa(Aa a, a A, AaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a;N
    Aa	a[0];N
    a a;N
    N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a, a, 0);N
    N
    a (AaAaAaAaAa(a)) {	// a a a aN
	N
	// a a a aN
	a (a=0; a<0; a++) {N
	    a (a == A)N
	    	A_A(a->aAa[a]);N
	    a {N
	    	A_A(a->aAa[a]);N
	    	A_A(a->aAa[a]);N
	    }N
    	}N
	N
	// a a aAa aN
	a(A) {N
	    a a_A_A:	a->aAa = a_a;    a;N
	    a a_A_A:	a->aAa = a_a;    a;N
	    a a_A_A:	a->aAa = a_a;   a;N
	    a a_A_A:	a->aAa = a_a;   a;N
	}N
    }N
    a {  // a a a, a a aAa aN
	N
	A_A(a->aAa[A]);N
	a->aAa = a_a;N
    }N
    N
    // a a a aAaN
    a->aAaAa(A);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAaAa(Aa a, a A, AaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a;N
    Aa	a[0];N
    a a;N
    N
    AaAaAa(a[0], AaAaAa, &a);N
    AaAaAa(a, a, 0);N
    N
    a (AaAaAaAaAa(a)) { 	// a a aN
	N
	a (a->aAa == a_a)N
	    A_A(a->aAa[A]);N
	a {N
	    a (a=0; a<0; a++)N
	    	A_A(a->aAa[a]);N
    	}N
	N
	// a a a aN
	a(A) {N
	    a a_A_A:	a->aAa |= a_a;   a;N
	    a a_A_A:	a->aAa |= a_a;   a;N
	    a a_A_A:	a->aAa |= a_a;  a;N
	    a a_A_A:	a->aAa |= a_a;  a;N
	}N
    }N
    a {  // a a aN
	N
	A_A(a->aAa[A]);N
	N
	// a a a aN
	a(A) {N
	    a a_A_A:	a->aAa &= ~a_a;  a;N
	    a a_A_A:	a->aAa &= ~a_a;  a;N
	    a a_A_A:	a->aAa &= ~a_a; a;N
	    a a_A_A:	a->aAa &= ~a_a; a;N
	}N
	N
	// a a a a a a a a (a.a. a a a a)N
	a (a->aAa) {N
	    a a_a: 	A_A(a->aAa[a_A_A]);    a;N
	    a a_a: 	A_A(a->aAa[a_A_A]);    a;N
	    a a_a:	A_A(a->aAa[a_A_A]);   a;N
	    a a_a:	A_A(a->aAa[a_A_A]);   a;N
	}N
    }N
    N
    // a a a aAaN
    a->aAaAa(A);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a a a a a a.N
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(Aa, AaAaAaAa *a, AaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a aN
    a (a->a != A) {N
    	// a a a a a a a aN
	a->a->a();N
	a->aAa(a->a, a->a, a->aAa, 0);N
	a->aAaAaAa();N
	a->a->a(a->a);N
    }N
N
    // a a a a a a aN
    a->aAa->aAa(a->aAa);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a a.N
//N
// a: aN
//N
aN
AaAaAaAa::aAa(a AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a aN
    aAa(aAa, 0, &a, 0);N
    aAaAa();N
    // a a a a a a a a aN
    a (a a = 0; a < 0; a++)N
	aAa[a] = A;N
N
    // a a a aN
    a (a != A && aAa == A) {N
    	// a a a a a a a aN
	a->a();N
	aAa(a, a, &a, 0);N
	aAaAaAa();N
	a->a(a);N
    }N
N
    // a a a a a a aN
    a (aAa == A)	N
	aAa->aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a aN
//N
// a: a, aN
//N
aN
AaAaAaAa::aAaA(N
    a *a,N
    a AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    ((AaAaAaAa *)a)->aAa(*a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa A a a a a a a a, a aN
//  a a a. Aa a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAa(a *a, AaAaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa *a = (AaAaAaAa *) a;N
    N
    AaAaAa a;N
    AaAa *a = A;N
    N
    //N
    // a a a a a a a aN
    //N
    a.aAa(AaAa::aAaAaAa());N
    a (a a=0; a < aAa->aAa(); a++) {N
	a.a( (*aAa)[a] );N
	a ( (a = a.aAa()) != A) {N
	    N
	    // a a aN
	    a->aAa(*((AaAa *) a->aAa()));N
	    a;N
	}N
    }N
    N
    // ??? a a a a a a. A a a a a a aN
    // ??? a a a a a a, a a a aN
    // ??? a a a a a a a a a. (a)N
     N
    // ??? Aa a a a a a a a a.N
    a aAa;N
}N
N
//N
// a a a a a a a a a a (a a a aN
// a a a a).N
//N
aN
AaAaAaAa::aAaAaA(a *a, AaAaAa *a)N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    N
    a (a a=0; a<0; a++) {N
	A_A(a->aAa[a]);N
	A_A(a->aAa[a]);N
    }N
    N
    a->aAa = a_a;N
    a->a();N
}N
N
//N
// a a a a a a a a a a.N
//N
aN
AaAaAaAa::aAaAaA(a *a, AaAaAa *a)N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    N
    a->aAaAa = A;N
    a->a();N
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
    aN
	a->a();N
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
{ a "Aa Aa"; }N
N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a "Aa Aa"; }N
N
