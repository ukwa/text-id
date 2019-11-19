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
 |   Aa:N
 |	_AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <Aa/a/AaAaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a "_AaAaAaAa.a"N
#a "_AaAaAaAa.a"N
#a "_AaAaAaAa.a"N
#a "_AaAaAaAa.a"N
N
N
#a <A0/AaAa.a>N
#a <A0/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
N
#a <a.a>N
N
/*N
 * AaN
 */N
#a A(a) AaAaAaAa( AaAa(a) )N
N
// a a a, a a aN
#a A_A 			0N
#a A_A 			0N
#a A_A_A	    	    	0.0   // a a a a a a a aN
#a A_A_A_A	0N
// a a a a a aN
#a A	    	    	    	0N
N
// A a a a a a a a aN
a {N
    A_A_A = 0,	// a a a a a a 0N
    A_A_A, N
    A_A_A, N
    A_A_A, N
    A_A_A, N
    A_A_A,N
    A_A_A, N
    A_A, N
    A_A, N
    A_A,N
    A_A,N
    A_A,N
    A_A,N
    A_A_A, N
    A_A_A, N
    A_A_A, N
    A_A_A, N
    A_A_A_A, N
    A_A_A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A	// a a a aN
};N
N
// a a a a aN
a {N
    A_A = 0, 	// a a a a 0N
    A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A, N
    A_A_A, N
    A_A_A, N
    A_A  	// a a a aN
};N
N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
#a A_A(A) \N
    AaAaAaAaAa((Aa) A, A, A)N
N
//N
// a a a a aN
//N
a a _AaAaAa {N
    a   a;N
    a _AaAaAaAa    *aAa;N
} AaAaAa;N
N
N
N
/*N
 * Aa aN
 */N
N
// a a a a a/aN
a a *a_a[] = { "A", "A", "A", "A", "A", "A"};N
a a *a_a[] = { "a", "a", "a"};N
a a *a_a[] = { "Aa", "Aa", N
    	    	    	    "a", "A",N
			    "a", "Aa", "Aa", N
			    "a", "Aa"};N
a a *a_a[] = { "Aa", "Aa", "A", "A", N
    	    	"A A", "A A"};N
N
// a a a a aN
#a a_a 0N
#a a_a 0N
a a a_a[] = {N
   0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0,N
   0a0, 0a0, 0a0, 0a0, 0a, 0a0a, 0a0, 0a, 0a0a, 0a0, 0a0, 0a0,N
   0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0};N
N
// a aN
#a a_a 0N
#a a_a 0N
a a a_a[] = {N
   0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0a,N
   0a0a, 0a0, 0a0a, 0a, 0a, 0a, 0a, 0a, 0a, 0a0a, 0a0, 0a0a,N
   0a0, 0a0, 0a0a, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0};N
N
// a a a a aN
#a a_a 0N
#a a_a 0N
a a a_a[] = {N
   0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0,N
   0a0, 0a0, 0a0, 0a0, 0a, 0a0a, 0a0, 0a, 0a0a, 0a0, 0a0, 0a0,N
   0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0, 0a0};N
N
N
a a *aAaAa = "_AaAaAaAa";N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAa(a, a, aAaAa)N
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
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(a, a, aAaAa)N
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
_AaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{	N
    a a;N
    N
    // a a aN
    aAaAa(aAaAa);N
    aAaAaAa(aAaA, a);N
    Aa = A;N
    aAa = A;N
    aA[0] = aA[0] = 0.0;N
    aA[0] = 0.0;N
    aA.aAa(aA);N
    aAa = aAa = A;N
    aAa = A;N
    aAa = A;N
    N
    // a/a aN
    a = A;N
    N
    // a aN
    aAa( AaAa0a(A_A, A_A) );N
    N
    // a a aN
    a = A;N
    aA = A;N
    aA = A;N
    aAa = A;N
    aAa = a AaAaAa(_AaAaAaAa::aAaA, a);N
    N
    // a a a AaN
    aAa = (AaAaAa *) a(a(AaAaAa) * A_A);N
    a (a=0; a<A_A; a++) {N
	aAa[a].a = a;	    // a Aa a a 0N
	aAa[a].aAa = a;N
    }N
    N
    // a aN
    aAa = a AaAaAa;N
    aAa = A;N
    N
    // A a A a. Aa'a a a a aAa().N
    a = A;N
    a = A;N
    a = A;N
    a (a=0; a<0; a++)N
	a[a] = A;N
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
N
_AaAaAaAa::~_AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa(aAa);N
    N
    // a a a a aN
    a ( aAa() )N
    	a();N
    N
    // a aN
    a(aAa);N
    a a;N
    a aAa;N
    a a;N
    a a;N
    a a;N
    a (a a=0; a<0; a++)N
	a a[a];N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a, a a a a a a.N
//N
// a: aN
//N
AaN
_AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  a;N
    a	    a;N
    Aa     a[0];N
    N
    //N
    // a a a a a a a a aN
    //N
    N
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
    // a a a aN
    //N
    a = aAaAa(aAa);N
    aAa = aAa(aAa);N
N
    //N
    // a a aN
    //N
    a = a _AaAaAaAa(aAa);N
    a->aAaAa(aA);N
    a->aAaAaAa(&_AaAaAaAa::aAa, a);N
    aAa = a->aAa();N
N
    aAa = aAaAa(aAa);N
    N
    //N
    // a !N
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     A_A_A_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,         a); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     A_A_A_A); a++;N
    // Aa: a a a aN
    AaAaAa(aAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    aAa); a++;N
    // Aa: a a a aN
    AaAaAa(aAa, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,       A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,        A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,      A); a++;N
    // Aa: a a a aN
    AaAaAa(aAa, a, a);N
    N
    aAaAaAaAa();N
    N
    // a a aN
    AaAaAa(a);N
    AaAaAa(aAa);N
    AaAaAa(aAa);N
    N
    N
    //N
    // a a a a A a!N
    //N
    AaAaAa a(aAa);N
    a *a;N
    AaAa a;N
    N
    a (a.aAa("a", "Aa", a))N
	 aA(a);N
    N
    //??? a a a a a a a a, a a a a a a,N
    //??? a a a - a a a a.N
    // a a a aN
    a (a.aAa("aAa", "AaAa", a)) {N
	 a      (a(a, "a") == 0)  N
	     aAaAa(A);N
	 a a (a(a, "a") == 0)  N
	     aAaAa(A);N
	 a a (a(a, "a") == 0)  N
	     aAaAa(A);N
	 a a (a(a, "a") == 0)  N
	     aAaAa(A);N
	 a a (a(a, "a_a") == 0)  N
	     aAaAa(A_A);N
	 a a (a(a, "a_a") == 0)  N
	     aAaAa(A_A);N
    }N
    N
    //??? a a a a a a a a a a a?N
    a (a.aAa("aAa", "AaAa", a)) {N
	 a      (a(a, "a") == 0)  N
	     aAaAa(A);N
	 a a (a(a, "a") == 0)  N
	     aAaAa(A_A);N
    }N
    N
    a aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    a a a aN
//N
// a: aN
N
AaN
_AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  a[0], a0a[0], a0a[0];N
    a	    a0 = 0, a0 = 0;N
    a	    a, a;N
    Aa     a[0];N
    N
    //N
    // a a a aN
    //N
    Aa a = AaAaAaAa(a, "aAa", A, 0);N
    N
    // A: a a a a a a a a!N
    aAa.a(0);N
    N
N
    Aa a[0];N
    a a = 0;N
#a A_A_AN
    AaAa::aAaAa(AaAa(a), A(a), a, &a);N
#aN
    N
    N
    //N
    // A 0N
    //N
    Aa a_a0 = AaAaAaAa(a, "a_a0", a, a);N
#a A_A_AN
    // a a a a/a a a aN
    AaAa::aAaAa(a_a0, AaAa::aAaAa(a));N
#aN
    a = 0;N
    AaAaAa(a[a], AaAaAaAa, a_a0); a++;N
    a[0] = AaAaAa("Aa", aAaAaAaAa, N
	a, a, a);N
    N
    // A_A,N
    // A_A,N
    a = 0;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    a (a=0; a<0; a++) {N
	a0a[a0] = AaAaAa(a_a[a0],N
	    aAaAaAaAa, a_a0, a, a);N
	AaAaAa(a0a[a0], AaAaAaAa, N
	    (AaAaAa) &_AaAaAaAa::aAaAa, N
	    (AaAa) &aAa[A_A+a]);N
	aAa.a(a0a[a0]);N
	a0++;N
    }N
    N
    // AN
    a0a[a0] = AaAaAa(a_a[a0], aAaAaAa,N
	a_a0, A, 0);N
    a0++;N
    N
    // A_AN
    a0a[a0] = AaAaAa(a_a[a0], aAaAaAaAa,N
	    a_a0, A, 0);N
    AaAaAa(a0a[a0], AaAaAaAa, N
	(AaAaAa) &_AaAaAaAa::aAaAa, N
	(AaAa) &aAa[A_A]);N
    aAa.a(a0a[a0]);N
    a0++;N
    N
    // AN
    a0a[a0] = AaAaAa(a_a[a0],N
	aAaAaAa, a_a0, A, 0);N
    a0++;N
    N
    // A_A,N
    // A_A,N
    a (a=0; a<0; a++) {N
	a0a[a0] = AaAaAa(a_a[a0],N
	    aAaAaAaAa, a_a0, A, 0);N
	AaAaAa(a0a[a0], AaAaAa, N
	    (AaAaAa) &_AaAaAaAa::aAaAa, N
	    (AaAa) &aAa[A_A+a]);N
	a0++;N
	// a a a a a a aAa; a a a a aN
	// a a a a, a a'a a a a a a a aN
    }N
    N
    // AN
    a0a[a0] = AaAaAa(a_a[a0],N
	aAaAaAa, a_a0, A, 0);N
    a0++;N
    N
    // A_AN
    a0a[a0] = AaAaAa(a_a[a0],N
	aAaAaAaAa, a_a0, A, 0);N
    AaAaAa(a0a[a0], AaAaAa, N
	(AaAaAa) &_AaAaAaAa::aAaAa, N
	(AaAa) &aAa[A_A]);N
    a0++;N
    N
    //N
    // A 0N
    //N
    Aa a_a0 = AaAaAaAa(a, "a_a0", a, a);N
#a A_A_AN
    // a a a a/a a a aN
    AaAa::aAaAa(a_a0, AaAa::aAaAa(a));N
#aN
    a = 0;N
    AaAaAa(a[a], AaAaAaAa, a_a0); a++;N
    a[0] = AaAaAa("Aa", aAaAaAaAa, N
		a, a, a);N
    N
    // AN
    // AN
    // AN
    // AN
    // A_AN
    // A_AN
    a = 0;N
    AaAaAa(a[a], AaAaAa, AaA_A_A); a++;N
    a (a=0; a<0; a++) {N
	a0a[a0] = AaAaAa(a_a[a0],N
	    aAaAaAaAa, a_a0, a, a);N
	AaAaAa(a0a[a0], AaAaAaAa, N
	    (AaAaAa) &_AaAaAaAa::aAaAa, N
	    (AaAa) &aAa[A_A_A+a]);N
	aAa.a(a0a[a0]);N
	a0++;N
    }N
    N
    N
    // a a a a a a a a a aN
    AaAaAa(a_a0, AaAaAa,N
	(AaAaAa) _AaAaAaAa::aAa, (AaAa) a);N
    AaAaAa(a_a0, AaAaAa,N
	(AaAaAa) _AaAaAaAa::aAa, (AaAa) a);N
    N
    N
    // a a aN
    AaAaAa(a0a, a0);N
    AaAaAa(a0a, a0);N
    AaAaAa(a, 0);N
    N
    a a;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    a a a a, a a a a a.N
//N
// a: aN
N
AaN
_AaAaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa  aA, aA, a[0], aAaAa;N
    a	    a, a;N
    Aa     a[0];N
    N
    //N
    // a a a aN
    //N
    aAa = AaAaAa("aAa", aAaAaAa, a, A, 0);N
    N
    // a aN
    a = a _AaAaAaAa(aAa, "Aa");N
    a->aAa(aA);N
    aA = a->aAa();N
    a = a _AaAaAaAa(aAa, "Aa");N
    a->aAa(aA);    N
    aA = a->aAa();N
    N
    //N
    // a a a a (a a a a a a a)N
    //N
    aAaAa = AaAaAa("aAaAa", aAaAaAa, N
	aAa, A, 0);N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    // ??? a 0 a a a a a aN
#a A_A_AN
    AaAaAa(a[a], AaAaAaAa, Aa); a++;N
#a // A_A_AN
    a (a=0; a<0; a++) {N
	a[a] = AaAaAa(a_a[a], aAaAaAaAa,N
	    aAaAa, a, a);N
	AaAaAa(a[a], AaAaAa, N
		    (AaAaAa) &_AaAaAaAa::aAa, N
		    (AaAa) &aAa[A_A+a]);N
    }N
    N
    //N
    // a a a a a a aN
    //N
    Aa	a[0][0];N
    Aa	*a = AaAa(a);N
    Aa	a = AaAa(a, A(a));N
    Aa	a, a, a;N
    N
    // a a a a a a aN
    AaAaAaAa(AaAa(a[0]), AaAa, &a, AaAa, &a, A);N
#a A_A_AN
    a = AaAaAaAa(AaAa(a[0]), a);N
#aN
#a a aN
#a // A_A_AN
    N
    // a a a a a a a (a 0).N
    // Aa a a a a a a a a a aN
    // a a a.N
    a a;N
    AaAaAaAa( AaAa::aAaAa(a), AaAa, &a, A );N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    a[0][0] = AaAaAaAaAa(a, a, N
	a_a, a_a, a_a, a, a, a);N
    N
    // a a a a a a aN
    AaAaAa(a[0], AaAaAa, AaA);N
    a (a=0; a<0; a++) {N
	AaAaAa(a[0], AaAaAa, a[a][0]);N
#a A_A_AN
	AaAaAa(a[0], AaAaAa, a[a][0]);N
	AaAaAa(a[a], a, 0);N
#aN
	AaAaAa(a[a], a, 0);N
#a // A_A_AN
    }N
    N
    //N
    // a a a aN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    aAa = AaAaAa("Aa", aAaAaAaAa, N
		aAa, a, a);N
    AaAaAa(aAa, AaAaAa, N
	(AaAaAa) &_AaAaAaAa::aAa, N
	(AaAa) &aAa[A_A]);N
    N
    //N
    // a !N
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    0); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     0); a++;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    0); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    0); a++;N
    AaAaAa(aA, a, a);N
    AaAaAa(a[0], AaAaAa, 	    0);N
    AaAaAa(a[0], AaAaAa,     0);N
    AaAaAa(aA, a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[0], AaAaAa, 	    0); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[0], AaAaAa,     0); a++;N
    AaAaAa(a[0], a, a);N
    AaAaAa(a[0], AaAaAa, 	    0);N
    AaAaAa(a[0], AaAaAa,     0);N
    AaAaAa(a[0], a, a);N
    AaAaAa(a[0], AaAaAa, 	    0);N
    AaAaAa(a[0], AaAaAa,     0);N
    AaAaAa(a[0], a, a);N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    aA); a++;N
    AaAaAa(a[a], AaAaAa,    AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    aA); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    aA); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(aAaAa, a, a);N
    N
    a a = (aAa == A) ? 0 : A ;N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa, 	    0); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,     0); a++;N
    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,      a); a++;N
    AaAaAa(aAa, a, a);N
    N
    N
    // a a aN
    AaAaAa(aA);N
    AaAaAa(aA);N
    AaAaAa(a, 0);N
    AaAaAa(aAaAa);N
    a (aAa == A_A)N
    	AaAaAa(aAa);N
    N
    a aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    a a a aN
//N
// a: aN
N
AaN
_AaAaAaAa::aAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a	    a;N
    Aa     a[0];N
    N
    //N
    // a a a aN
    //N
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    aAa = AaAaAa("aAa", aAaAaAa, N
	a, a, a);N
    N
    // a aN
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
    a[0] = a _AaAaAaAa(aAa, A, A, N
			_AaAaAaAa::A_A);N
N
    a a;N
    a (a=0; a<0; a++)N
	a[a]->aAaAa(aA.aAa());N
    a (a=0; a<0; a++)N
	a[a]->aAaAa(aA);N
N
    a = 0;N
    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
    a (a=0; a<0; a++) {N
        a[a]->aAa(a_a[a]);N
	a[a]->aAaAaAa(N
	    &_AaAaAaAa::aAa, N
	    &aAa[A_A_A+a]);N
	AaAaAa(a[a]->aAa(), a, a);N
    }N
N
    N
    //N
    // a !N
    //N
    aAaAa();N
    N
    a aAa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::a(AaAa *a, AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAa() )N
    	a();N
    N
    a (a != A && a != A) {N
	aAa(a->aAa());N
	aA = a;N
	aAa = a;N
	aAa->a();N
	aAa->a((AaAa *) aAa);N
	a = A;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::a(AaAa *a, a a, AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( aAa() )N
    	a();N
    N
    a (a != A && a >= 0 && a != A) {N
	aAa((*a)[a]);N
	aA = a;N
	a = a;N
	aAa = a;N
	aAa->a();N
	aAa->a((AaAa *) aAa);N
	a = A;N
    }N
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
_AaAaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a ( ! aAa() )N
	a;N
    N
    aAa->a();N
    aAa->a();N
    aAa = A;N
    aA = A;N
    aA = A;N
    a = A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a.N
//N
// a: aN
//N
aN
_AaAaAaAa::aAa(a AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == aA)N
    	a;N
    N
    // a aN
    aA = a;N
    aA.aAa(aA);N
    N
    aAa = A;N
    N
    // a a a a a a a/a aN
    a a;N
    a (a=0; a<0; a++)N
    	a[a]->aAaAa(aA.aAa());N
    a (a=0; a<0; a++)N
    	a[a]->aAaAa(aA);N
    a->aAaAa(aA);N
    a->aAa(aA);N
    N
    aAa = A;N
    N
    a (aAa == A)N
	aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a A a.N
//N
// a: aN
N
aN
_AaAaAaAa::aA(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (Aa == a)N
    	a;N
    N
    Aa = a;N
    N
    // a a a a a a aN
    a (a a=0; a<0; a++)N
	a[a]->aA(Aa);N
    a->aA(Aa);N
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
_AaAaAaAa::aAaAa(_AaAaAaAa::AaAa a)N
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
    a (aAa == A)N
    	aAa();N
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
_AaAaAaAa::aAaAa(_AaAaAaAa::Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a, aAa, aAa;N
    N
    a (aAa == a)N
    	a;N
    N
    aAa = aAaAa(aAa);N
    aAa = aAaAa(a);N
    N
    // a a a a a a a a, a a a aN
    // a a a.N
    a (aAa == A) {N
	// a a aN
	AaAa0a a = aAa();N
	a a = (A_A_A + aAa) / a(A_A_A + aAa);N
	a[0] = a(a[0] * a);N
	aAa(a);N
    	aAa = a;N
	a;N
    }N
    N
    //N
    // a a a a a aN
    //N
    a(aAa) {N
    	a A:N
	    a;N
    	a A:N
	    a[0]->a();N
	    a;N
	a A:N
	    a (a=0; a<0; a++)N
		a[a]->a();N
	    a;N
	a A:N
	    a (a=0; a<0; a++)N
		a[a]->a();N
	    a;N
	a A_A:N
	    a (a=0; a<0; a++)N
		a[a]->a();N
	    a[0]->a();N
	    a;N
	a A_A:N
	    a (a=0; a<0; a++)N
		a[a]->a();N
	    a;N
    }N
    N
    //N
    // a a a a a a aN
    //N
    Aa a = AaAa(aAa);N
    a (AaAaAa(a) && aAa != aAa) {N
    	N
	// a a a a a a a aN
	AaAa0a a = aAa();N
	a a = (A_A_A + aAa) / a(A_A_A + aAa);N
	a[0] = a(a[0] * a);N
	AaAa::aAaAa(a, a);N
    }N
    N
    // a a a aN
    aAa = a;N
    aAaAaAaAa();N
    aAaAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    a a a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a, a;N
    Aa a[0];N
    N
    aAa = A;N
    N
    a(aAa) {N
    	a A:N
	    a;N
	N
    	a A:N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,    	0); a++;N
	    AaAaAa(a[0]->aAa(), a, a);N
	    a[0]->aAaAa(aA);N
	    a[0]->a();N
	    a;N
	    N
	a A:N
	    a (a=0; a<0; a++) {N
		a = 0;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa,   	a((a*0)/0.0)); a++;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa, 	a(((a+0)*0)/0.0) - 0); a++;N
		AaAaAa(a[a]->aAa(), a, a);N
	        a[a]->aAaAa(aA.aAa());N
		a[a]->a();N
	    }N
	    a;N
	    N
	a A:N
	    a (a=0; a<0; a++) {N
		a = 0;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa,   	a(((a-0)*0)/0.0)); a++;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa, 	a(((a-0)*0)/0.0) - 0); a++;N
		AaAaAa(a[a]->aAa(), a, a);N
	        a[a]->aAaAa(aA);N
		a[a]->a();N
	    }N
	    a;N
	    N
	a A_A:N
	    a (a=0; a<0; a++) {N
		a = 0;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa,   	a*0); a++;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa, 	(a+0)*0 - 0); a++;N
		a (a==0) {N
		    AaAaAa(a[0]->aAa(), a, a);N
	            a[0]->aAaAa(aA);N
		    a[0]->a();N
		}N
		a {N
		    AaAaAa(a[a]->aAa(), a, a);N
	            a[a]->aAaAa(aA.aAa());N
		    a[a]->a();N
		}N
	    }N
	    a;N
	    N
	a A_A:N
	    a (a=0; a<0; a++) {N
		a = 0;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa,   	a((a*0)/0.0)); a++;N
		AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
		AaAaAa(a[a], AaAaAa, 	a(((a+0)*0)/0.0) - 0); a++;N
		AaAaAa(a[a]->aAa(), a, a);N
		a (a > 0)N
	            a[a]->aAaAa(aA);N
		a N
	            a[a]->aAaAa(aA.aAa());N
		a[a]->a();N
	    }N
	    a;N
    }N
    N
    aAa = A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a a a a a a a (a a, a aN
// a aAa) a a a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a, a = aAaAa(aAa);N
    Aa a[0];N
    N
    a (a) {N
    	// a a a a a a a a a a a a aN
	a a = 0 * A_A_A / a(A_A_A + a);N
	a = 0;N
	AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,   	a(a)); a++;N
	AaAaAa(aAa, a, a);N
	N
	a (! AaAaAa(aAa))N
	    AaAaAa(aAa);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,  	aAa); a++;N
	AaAaAa(a[a], AaAaAa,  	A); a++;N
	AaAaAa(aAa, a, a);N
	AaAaAa(aAa, a, a);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,      0); a++;N
	AaAaAa(aAa, a, a);N
    }N
    a {N
	// a a a a'a a a aAa a aN
	a = 0;N
	AaAaAa(a[a], AaAaAa, 	AaA_A); a++;N
	AaAaAa(a[a], AaAaAa,  	0); a++;N
	AaAaAa(aAa, a, a);N
	AaAaAa(aAa, a, a);N
	N
	a (AaAaAa(aAa))N
	    AaAaAa(aAa);N
	N
	a = 0;N
	AaAaAa(a[a], AaAaAa,      A); a++;N
	AaAaAa(aAa, a, a);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a (a aAaA) a a a a N
//    a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aA != A)N
    	aAa(aA->aAa());N
    aN
    	aAa((*aA)[a]);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a.N
//N
// a: aN
//N
aN
_AaAaAaAa::aAa(a a a[0])N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    N
    // a a a a a a aN
    aA[0] = a[0];N
    aA[0] = a[0];N
    aA.aAa(aA);N
    N
    aAa = A;N
    N
    a(aAa) {N
    	a A:N
	    a;N
	a A:N
	    a[0]->aAaAa(aA);N
	    a;N
	a A:N
	a A_A:N
	    a (a=0; a<0; a++)N
	    	a[a]->aAaAa(aA.aAa());N
	    a (aAa == A_A)N
	    	a[0]->aAaAa(aA);N
	    a;N
	a A:N
	    a (a=0; a<0; a++)N
	    	a[a]->aAaAa(aA);N
	    a;N
	a A_A:N
	    a (a=0; a<0; a++)N
	    	a[a]->aAaAa(aA.aAa());N
	    a (a=0; a<0; a++)N
	    	a[a]->aAaAa(aA);N
	    a;N
    }N
    a->aAa(aA);N
    N
    aAa = A;N
    N
    a (aAa == A)N
	aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a a. N
//N
// a: aN
//N
aN
_AaAaAaAa::aAa(a a, a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    N
    aAa = A;N
    N
    a(a) {N
	a A_A_A:N
	a A_A_A:N
	a A_A_A:N
	    aA[a - A_A_A] = a;N
	    aA.aAa(aA);N
	    N
	    a (a=0; a<0; a++)N
		a (a != a) N
		    a[a]->aAaAa(aA.aAa());N
    	    N
	    a (aAa == A_A)N
		a[0]->aAaAa(aA);N
	    a a (aAa == A_A)N
	    	a (a=0; a<0; a++)N
		    a[a]->aAaAa(aA);N
	    a->aAaAa(aA);N
	    a->aAa(aA);N
	    a;N
	    N
	a A_A_A:N
	a A_A_A:N
	a A_A_A:N
	    aA[a - A_A_A] = a;N
	    aA.aAa(aA);N
	    N
	    a (aAa) {N
	    	a A:N
		a A_A:N
		    a (a=0; a<0; a++)N
			a (a != a) a[a]->aAaAa(aA);N
		    a (aAa == A_A)N
			a (a=0; a<0; a++)N
			    a[a]->aAaAa(aA.aAa());N
		    a;N
		a A_A:N
		    a (a=0; a<0; a++)N
			a[a]->aAaAa(aA.aAa());N
		    a;N
		a A:N
		    a;N
		a A: // a a aN
		a A:N
#a AN
		    AaAaAa::a("_AaAaAaAa::aAa",N
			"a a %a", a);N
#aN
		    a;N
	    }N
	    a->aAaAa(aA);N
	    a->aAa(aA);N
	    a;N
	 N
	a:N
#a A   N
	    AaAaAa::a("_AaAaAaAa::aAa",N
		    "a a %a",a);N
#aN
	    a;N
    }N
    N
    aAa = A;N
    N
    a (aAa == A)N
	aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a;N
    N
    a(a) {N
	a A_A:N
	    a->aAa(aA);N
	    a;N
	    N
	a A_A:N
	a A_A:N
	    a = a->aAa();N
	    N
	    a (a == A_A)N
		a->aAa(aA);N
	    N
	    // a a aN
	    aAa(a);N
	    N
	    a (aAa != A_A)N
	    	aAa();N
	    a;N
	    N
	a A_A:N
	    aAa();N
	    a;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a - a a a a, a a; a a a,N
//  a a.N
//N
// a: aN
//N
aN
_AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (a) {N
	a (aA != A) {N
	    aA->aAa(aA);N
	    a ( aA->aAa() )N
		aA->aAa( A );N
	}N
	a {N
	    aA->a0Aa(a, aA);N
	    a ( aA->aAa() )N
		aA->aAa( A );N
	}N
    }N
    N
    // a a aN
    a *a = (a *) &aA;N
    aAa->aAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// a a a a a a a a, a N
// _AaAaAaAaAa a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAaAa(_AaAaAaAa::Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a(a) {N
	a:        // a a a a a.N
	a A:N
	    a 0;N
	a A:N
	    a 0;N
	a A:N
	a A:N
	    a 0;N
	a A_A:N
	    a 0;N
	a A_A:N
	    a 0;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a.N
//N
//  Aa: aN
//N
aN
_AaAaAaAa::a(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    a (aAa == A) {N
	AaAaAa::a("_AaAaAaAa::a", "a a A\a");N
	a;N
    }N
#aN
N
    a (a == A)N
    	a = a AaAaAa(aAa);N
    N
    // a a a a a a AaAa aN
    AaAaAa *a = a AaAaAa;N
    a->a();N
    a->a.aAa(aA);N
    a->a(a, aAa);N
    a->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a A a a a a a aN
//  a (a a aAa a).N
//N
//  Aa: aN
//N
aN
_AaAaAaAa::a(Aa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    a (aAa == A) {N
	AaAaAa::a("_AaAaAaAa::a",N
		"a a A\a");N
	a;N
    }N
#aN
N
    a (a == A)N
    	a = a AaAaAa(aAa);N
N
    a->a(aAa, _AaAaAaAa::aAaA, a);N
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
_AaAaAaAa::aAa(AaAaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa a;N
    AaAaAa *aAa = A;N
    N
    N
    //N
    // a a a a a a a a a aN
    //N
    a.aAa(AaAaAa::aAaAaAa());N
    a (a a=0; a < aAa->aAa(); a++) {N
	a.a( (*aAa)[a] );N
	a ( (aAa = (AaAaAa *) a.aAa()) != A) {N
	    N
	    // a a aN
	    AaAaAa *aAa = (AaAaAa *) aAa->aAa();N
	    aAa((aAa->a)[0]);N
	    N
	    a;N
	}N
    }N
    N
    //N
    // a a a a a a a a a a a aN
    // (a a a, a a a a a a)N
    //N
    a (aAa == A) {N
	a.aAa(AaAa::aAaAaAa());N
	a (a a=0; a < aAa->aAa(); a++) {N
	    a.a( (*aAa)[a] );N
	    a ( (aAa = (AaAaAa *) a.aAa()) != A) {N
		N
		AaAa *a = (AaAa *) aAa->aAa();N
		aAa(a->aAa[0].aAa());N
		N
		a;N
	    }N
	}N
    }N
    N
    // ??? Aa a a a a a a a a.N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a a a.N
//  Aa a a a a a a a a a a a.N
//N
//  Aa: a aN
//N
aN
_AaAaAaAa::aAa(Aa, _AaAaAaAa *a, AaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    a (a a = 0; a < A_A; a++)N
	A_A(a->aAa[a]);N
    N
    // a a aN
    a (a->aAa) {N
	a A:    A_A(a->aAa[A_A]);	a;N
	a A_A:  A_A(a->aAa[A_A]);  	a;N
    }N
    N
    a (a->Aa)N
	A_A(a->aAa[A_A]);N
    N
    a (a->aAa) {N
	a A:  	A_A(a->aAa[A_A]);	a;N
	a A: A_A(a->aAa[A_A]);	a;N
	a A:   	A_A(a->aAa[A_A]); 	a;N
	a A:   	A_A(a->aAa[A_A]); 	a;N
	a A_A:  	A_A(a->aAa[A_A_A]);	a;N
	a A_A:	A_A(a->aAa[A_A_A]);	a;N
    }N
}N
N
//N
// a a a a aN
//N
a a *N
_AaAaAaAa::aAaAaAa() aN
{ a aAaAa; }N
N
a a *N
_AaAaAaAa::aAaAa() aN
{ a "Aa Aa"; }N
N
a a *N
_AaAaAaAa::aAaAaAa() aN
{ a "Aa Aa"; }N
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
N
//N
// a a a a a a a aN
//N
aN
_AaAaAaAa::aAaA(a *a, AaAa a)N
//N
{N
    _AaAaAaAa *a = (_AaAaAaAa *)a;N
    N
    a (a) {N
	// a a a a a a a aN
	a ( a->aAa != A && a->aAa->aAaAa() == A)N
	    a->aAa->a((AaAa *) a->aAa);N
    }N
    aN
	// a aN
	a->aAa->a();N
}N
N
a N
_AaAaAaAa::aAa(a *a, a a a[0])N
{N
    _AaAaAaAa *a = (_AaAaAaAa *)a;N
    N
    a (a->aAa)N
    	a;N
    a->aAa(a);N
}N
N
a N
_AaAaAaAa::aAa(a *a, a a)N
{N
    AaAaAa *a = (AaAaAa *)a;N
    N
    a (a->aAa->aAa)N
    	a;N
    a->aAa->aAa(a->a, a);N
}N
N
a N
_AaAaAaAa::aAa(Aa, AaAaAa *a, AaAa)N
{ a->aAa->aAa(a->a); }N
N
aN
_AaAaAaAa::aAaA(a *a, AaAa *)N
{N
    _AaAaAaAa *a = (_AaAaAaAa *)a;N
    N
    a (!a->aAa())N
	a;N
    a->aAa(); N
}N
N
a N
_AaAaAaAa::aAaAa(N
    Aa, AaAaAa *a, AaAaAaAa *a)N
{N
    Aa aAa = a->a->a.a;N
N
    a(a->a) {N
	a A_A: a->aAa->aAaAa(A);    a;N
	a A_A:	    a->aAa->aAaAa(A_A);  a;N
	a A_A:    a->aAa->aA( // aN
	    	    	    	    ! a->aAa->Aa); a;N
    	a A_A:	    a->aAa->a(aAa); a;N
    	a A_A:	    a->aAa->a(aAa); a;N
	a A_A:	    a->aAa->aAaAa("AaAaAaAa.a"); a;N
    }N
}N
N
a N
_AaAaAaAa::aAaAa(Aa, AaAaAa *a, AaAa)N
{N
    a(a->a) {N
    	a A_A_A:  	    a->aAa->aAaAa(A);    	    a;N
    	a A_A_A:   a->aAa->aAaAa(A);    a;N
	a A_A_A:	    a->aAa->aAaAa(A);	    a;N
	a A_A_A:	    a->aAa->aAaAa(A);	    a;N
	a A_A_A_A:	    a->aAa->aAaAa(A_A);	    a;N
	a A_A_A_A:    a->aAa->aAaAa(A_A);      a;N
    }N
}N
N
a N
_AaAaAaAa::aAaA(a *aAa, AaAaAa *aAa)N
{N
    ((_AaAaAaAa *) aAa)->aAa(aAa);N
}N
		  N
N
#a AN
