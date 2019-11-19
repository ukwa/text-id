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
 |	_AaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
#a <a.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a "AaAaAaAa.a"N
#a "_AaAaAa.a"N
#a "_AaAaAa.a"N
N
#a <a.a>N
N
#a <A0/AaAa.a>N
#a <A0/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
N
#a <Aa/a/AaA.a>N
N
N
/*N
 * AaN
 */N
N
#a A_A	    0	    // a aN
#a A_A	    0	    // a a/0N
#a A	    0N
#a A_A 0N
#a A	    (A_A + A + A_A)N
N
// a a a a a a aN
#a A_A 0N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
_AaAaAa::_AaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A, N
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
_AaAaAa::_AaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A_A_A, N
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
_AaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a = a AaAaAa(AaAaAa | AaAaAa | AaAaAa);N
N
    // a a aN
    aAa  	= a AaAaAaAa;N
    aAa 	= a AaAaAaAa;N
    aAa 	= a AaAaAaAa;N
    a = A;N
    a = 0.0;N
    aAa = aAa = aAa = aAa = A;N
    aAa = A;N
    aAa = A; // a a a a aN
    N
    // a a a a a a a a a aN
    a0 = a0 = A;N
    a0 = A_A;N
    a0 = a0 + A_A;N
    N
    aAa.aAa(0, 0);  // a a aN
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
N
_AaAaAa::~_AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
    a aAa;N
    a aAa;N
    a (aAa != A) a(aAa);N
    a a;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//	Aa a a a a a a.N
//N
// Aa: a aN
N
aN
_AaAaAa::a()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! aAa())N
	a;N
    aAaAa(aAa(), aAaAa(), aAaAa());N
    N
    // a a aN
    a = a0 + a(a * (a0 - a0));N
    a0 = a - A_A;N
    a0 = a + A_A;N
    N
    // a a aN
    AaAa0a a = aAaAa();N
    AaAaAaAa(0, 0, a[0]-0, a[0]-0);N
    N
    // a a a a a a a a a a a aN
    aAaAaAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a.N
//N
// Aa: aN
N
aN
_AaAaAa::aAa(a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a...N
    a (aAa != A) a(aAa);N
    aAa = A;N
    N
    // a a a a...N
    a (a != A)N
    	aAa = a(a);N
    N
    a (aAa() != A)N
    	aAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a aN
//N
// Aa: aN
N
aN
_AaAaAa::aAaAaAa(AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa) {N
	a (aAa)N
	    a;	// a aN
	a {N
	    // a a a aN
	    aAa = A;N
	    a (aAa() != A)N
		aAaAa();N
	}N
    }N
    a {N
	a (! aAa)N
	    a;	// a a aN
	a {N
	    // a a a a aN
	    aAa = A;N
	    a (aAa() != A)N
		aAaAa();N
	}N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  a a a a a (a a) a a a a a.N
//N
// Aa: aN
N
aN
_AaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    Aa a[0];N
    N
    a (aAa == A) {N
    	N
    	AaAaAa(a[0], AaAaAa, 	    AaA_A);N
    	AaAaAa(aAa, a, 0);N
	    N
	a (aAa != 0) {N
	    //??? AaAa a?N
	    AaAaAa(aAa);N
	    aAa = 0;N
	}N
    }N
    a {N
	a (aAa == 0) {N
	    N
	    aAa = AaAaAa(aAa, aAaAaAa, aAa, N
            	A, 0);N
	    N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa,     AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	    AaAaAa(aAa, a, a);N
	    N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa, 	    aAa); a++;N
	    AaAaAa(a[a], AaAaAa, 	    A_A); a++;N
	    AaAaAa(aAa, a, a);N
	    N
	    AaAaAa(aAa);N
	}N
	a {N
	    AaAaAa(a[0], AaAa, aAa);N
	    AaAaAa(aAa, a, 0);N
	}N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  a a a a a a a (a a) a a a a a.N
//N
// Aa: aN
N
aN
_AaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    Aa a[0];N
    N
    a (! aAa) {N
    	N
    	AaAaAa(a[0], AaAaAa, 	    AaA_A);N
    	AaAaAa(aAa, a, 0);N
	    N
	a (aAa != A) {N
	    //??? AaAa a?N
	    AaAaAa(aAa);N
	    aAa = A;N
	}N
    }N
    a {N
	a (aAa == A) {N
	    N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa, 0); a++;N
	    AaAaAa(a[a], AaAa, 0); a++;N
	    aAa = AaAaAa("aAa", aAaAaAa,N
		aAa, a, a);N
	    AaAaAa(aAa, AaAaAa, N
		(AaAaAa) _AaAaAa::aAaA, (AaAa) a);N
	    N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa,	    AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,    AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa,  AaA_A); a++;N
	    AaAaAa(aAa, a, a);N
	    N
	    a = 0;N
	    AaAaAa(a[a], AaAaAa,   AaA_A); a++;N
	    AaAaAa(a[a], AaAaAa, 	    aAa); a++;N
	    AaAaAa(aAa, a, a);N
	    N
	    // a a a a a a a aN
	    a aAa[0];N
	    a(aAa, "%.0a", aAa());N
	    AaAaAaAa(aAa, aAa);N
    N
	    AaAaAa(aAa);N
	}N
#a AN
	a {N
	    AaAaAa::a("_AaAaAa::aAaAa::aAa",N
		"A A");N
	}N
#aN
    }N
}N
N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	Aa a a a Aa a, a a aN
// a a a.N
//N
// Aa: a aN
AaN
_AaAaAa::aAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a;N
    Aa a[0];N
    N
    //N
    // a a a a a a a aN
    //N
    aAa = AaAaAa(aAaAa(), aAaAaAa, a, A, 0);N
    // ??? a a a a a a a a?N
    N
    //N
    // a _AaAaAa a a aN
    //N
    aAa = AaAaAa::aAa(aAa);N
    AaAa::aAaAa(aAa, aAa);N
    a->a(aAaAa(), N
		(AaAaAa) AaAaAa::aAa,N
		(AaAa) a);N
    N
    N
    //N
    // a aN
    //N
    N
    a = 0;N
    AaAaAa(a[a], AaAaAa,     	AaA_A); a++;N
    AaAaAa(a[a], AaAaAa,  	AaA_A); a++;N
    AaAaAa(aAa, a, a);N
    N
    aAaAa();N
    aAaAa();N
    N
    // a a aN
    AaAaAa(aAa);N
    N
    a aAa;N
N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a (a) aN
//N
// Aa: a aN
aN
_AaAaAa::aAaAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa != A)N
	 AaAa::aAaAa(aAa, aAa);N
    aAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a (a) a aN
//N
// Aa: a aN
AaAa0aN
_AaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a A a.N
//N
// Aa: a aN
N
aN
_AaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a, a;N
    AaAa *a;N
    AaAa *a;N
    AaAa0a a = aAaAa();N
    N
    a (a->a) {N
	a AaAa:N
	    a = (AaAa *) a;N
	    a (a->a == Aa0) {N
		N
		aAa->aAa(a);N
		a = A;N
		N
		// a a a a aN
		a = a(a->a);N
		a = a(a[0] - a->a);N
		a (a>a0 && a<a0 && N
		    a>a0 && a<a0)N
		    a = a - a;N
		a {N
		    a = 0;N
		    aAa((a - a0 - a) / a(a0 - a0));N
		}N
	    }N
	    a;N
	    N
	a AaAa:N
	    a = (AaAa *) a;N
	    a (a->a == Aa0) {N
		a = A;N
		aAa->aAa(a);N
	    }N
	    a;N
	    N
	a AaAa:N
	    a = (AaAa *) a;N
	    a (a->a & Aa0Aa)N
		aAa((a->a - a0 - a) / a(a0 - a0));N
	    a;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a..N
//N
// Aa: aN
N
aN
_AaAaAa::aAa(a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a a aN
    a a = a;N
    a = (a > 0.0) ? 0.0 : ((a < 0.0) ? 0.0 : a) ;N
    N
    a (a == a)N
    	a;N
    N
    a();N
    N
    // a a aN
    a (aAa != A) {N
	a aAa[0];N
	a(aAa, "%.0a", a);N
	AaAaAaAa(aAa, aAa);N
    }N
    N
    aAa->aAa(a);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a aN
//N
// Aa: a aN
N
aN
_AaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a aN
    a0 = aAa[0] - A -0;N
    a0 = aAa[0] - A -0;N
    N
    // a aN
    aAaAa(aAa(), aAaAa(), aAaAa());N
    aAa(0, 0, aAa[0], aAa[0]);N
    aAaAa(A_A);N
    aAaAa();N
    aAa(0, aAa[0], 0, aAa[0], -0, 0);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a. a a a a a aN
//  a a a a a a a a a a.N
//N
// Aa: a aN
N
aN
_AaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    A_A_A;N
    aAa(a0, a0, a0, a0);N
    AaAaAaAa(a0, a0, a0, a0);N
    N
    a (aAaAa())N
	aAaAa(aAa(), aAaAa());N
    aN
	aAa();N
}N
N
aN
_AaAaAa::aAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
	N
aN
_AaAaAa::aAaAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
N
aN
_AaAaAa::aAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
N
aN
_AaAaAa::aAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
	N
aN
_AaAaAa::aAaAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
N
aN
_AaAaAa::aAaAa(_AaAaAaA *a, a *aAa)N
{ aAa->aAa((AaAaAaAaA *)a, aAa); }N
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
N
N
//N
// a a a a a a a a a a a a.N
//N
aN
_AaAaAa::aAaA(Aa a, _AaAaAa *a, AaAa)N
{N
    // a a a a a aN
    a *a = AaAaAaAa(a);N
    a a;N
    a (a(a, "%a", &a))N
	a->aAa(a);N
    a {N
	// a a a aN
	a aAa[0];N
	a(aAa, "%.0a", a->aAa());N
	AaAaAaAa(a, aAa);N
    }N
    a(a);N
    N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a), AaA_A);N
}N
N
N
