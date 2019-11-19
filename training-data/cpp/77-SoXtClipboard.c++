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
 |   Aa	: AaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
N
#a <Aa/a/AaAaAa.a>N
#a "AaAaAaAa.a"N
#a <Aa/AaAa.a>N
#a <A0/AaAa.a>N
N
// Aa a a a AaAaAa a.N
// Aa a a a a a a A a (a.a. A_A),N
// a a a a a a AaAaAa a a a, a a.N
// Aa a a a a a/a a a a, a N
// a a a a a a a AaAaAa a a.N
AaAa *AaAaAa::aAaAa = A;N
N
#a _A_(a,a) (AaAaAa(AaAa(a),a,Aa))N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	AaN
//N
AaAaAa::AaAaAa(N
    Aa  	a,  	    	// a a a/a a aN
    Aa    	aAa)  // a a a: A_A, a.N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa == A)N
    	aAaAa = a AaAa;N
N
    // _A_A_ a a a a a a A a a "A".N
    a (aAa == _A_A_) {N
	aAa = AaAaAa(AaAa(a), "A", Aa);N
    }N
N
    a  	    = a;N
    aAa   = aAa;N
    aAa	    = AaAa;N
    N
    // aAa a a a a a/a a a a a.N
    aAa      = A;N
    N
    // Aa a a.N
    aAa = a AaAaAaAaAa;N
    aAa->a(_A_(a, "A_0_0"),	aAaA, a);N
    aAa->a(_A_(a, "A_0_0_A"),	aAaA, a);N
    aAa->a(_A_(a, "A_0_0"),		aAaA, a);N
    aAa->a(_A_(a, "A_0_0_A"),	aAaA, a);N
    aAa->a(_A_(a, "A"),		aAaA, a);N
    aAa->a(_A_(a, "A_A"),	aAaA, a);N
    aAa->a(_A_(a, "A_0_0"),	aAaA, a);N
    aAa->a(_A_(a, "A_0_0_A"),	aAaA, a);N
    aAa->a(A_A,				aAaA, a);N
    N
    // Aa a aN
    aAa = a AaAa();N
    aAa->a((a *)_A_(a, "A_0_0"));N
    aAa->a((a *)_A_(a, "A_0_0_A"));N
    aAa->a((a *)_A_(a, "A_0_0"));N
    aAa->a((a *)_A_(a, "A_0_0_A"));N
    aAa->a((a *)_A_(a, "A"));N
    aAa->a((a *)_A_(a, "A_A"));N
    aAa->a((a *)_A_(a, "A_0_0"));N
    aAa->a((a *)_A_(a, "A_0_0_A"));N
    aAa->a((a *) A_A);N
N
    // Aa a, a'a a a a a a aN
    aAaA = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa - a a a a A a, a a.N
//N
AaAaAa::~AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a aN
    a *a = A;N
    aAaAa->a(aAa, a);N
    N
    a ((AaAaAa *)a == a) {N
	// a a a a. a a a a (a.a. aN
	// a a a a a a a a a a a aN
	// a), a a a'a, a a a a.N
	AaAaAa(a, aAa, AaAa);N
	aAaAa->a(aAa);N
    }N
    N
    a aAa;N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aAa, a a a A aN
// a a a a a A a a a aAa (aAa aN
// a a a).N
//N
// Aa: aN
//N
aN
AaAaAa::a(AaAaAa *aAa, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa = a;N
N
    a aAa;N
    aAa = aAa;N
    aAaAa = _A_(a, "A_0_0");N
    N
    // AaAa a'a a a'a a a a a aAa a a a.N
    // Aa a a a a a a, a a a a a a a aN
    // a a a a a a a.N
    //???N
    N
    // Aa a Aa 0.0 a.N
    // Aa a a a a a a a.   N
    a (aAa != A) {N
	// a a A a a a a a aN
	AaAaAa(a, N
		aAa,N
		aAa,N
		(AaAaAaAa) AaAaAa::aAa,N
		(AaAaAaAa) AaAaAa::aAa,N
		(AaAaAaAa) A);N
		N
	// a a a a a aN
	a (AaAaAa(AaAa(a), aAa) == AaAa(a)) {N
	    // a a a a - a 'a' a aN
	    // a a a a a a A a aN
	    aAaAa->a(aAa, a);N
	}		N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aAa, a a a A aN
// a a a a a A a a a aAa (aAa aN
// a a a). Aa a a a a Aa.N
//N
// Aa: aN
//N
aN
AaAaAa::a(Aa aAa, a *a, a0_a aAa, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa = a;N
N
    a aAa;N
    aAa = a AaAaAa();N
    aAa->a(a, aAa);N
    aAaAa = aAa;N
N
    // Aa a a a a a...N
    a (a != A && aAa > 0) {N
	// a a A a a a a a aN
	AaAaAa(a, N
		aAa,N
		aAa,N
		(AaAaAaAa) AaAaAa::aAa,N
		(AaAaAaAa) AaAaAa::aAa,N
		(AaAaAaAa) A);N
		N
	// a a a a a aN
	a (AaAaAa(AaAa(a), aAa) == AaAa(a)) {N
	    // a a a a - a 'a' a aN
	    // a a a a a a A a aN
	    aAaAa->a(aAa, a);N
	}		N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAa::a(AaAaAa *aAa, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *a = a AaAaAa;N
    a->a(aAa);N
    a(a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAa::a(AaAa *a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *a = a AaAaAa;N
    a->a(a);N
    a(a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAa::a(AaAa *a, Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *a = a AaAaAa;N
    a->a(a);N
    a(a, a);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a A a a a aAa.N
// Aa a a a a a a a a a A a,N
// a a a a a a a. Aa a a a a a aN
// a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAa::a(N
    Aa a,N
    AaAaAaAaA *aAaAa,N
    a *aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a aN
    aAa    = a;N
    aAa = aAaAa;N
    aAa     = aAaAa;N
N
    // a a a a a, a a a a a,N
    // a a a a a a - a a a a a a aN
    AaAaAa *a;N
    a *a;N
    aAaAa->a(aAa, a);N
    a = (AaAaAa *)a;N
N
    a (a == a) {N
    	// Aa a a a! Aa a Aa a?N
	a (aAa->aAaAa()) {N
	    //??? a a a a a a a a a...N
	}N
	a {N
	    AaAaAa *aAa;N
	    aAa = AaAaAa::a(aAa);N
	    N
	    // a a a a a a a aN
	    a (aAa != A)N
		(*aAa)(aAa, aAa);N
	}N
    }N
    a {N
    	// Aa a a a a a a a a.N
    	// (Aa a, a a a a a a a a a a.)N
	AaAaAaAa(a,N
		aAa,N
		_A_(a, "A"),N
		(AaAaAaAa) AaAaAa::aAaAa,N
		(AaAa) a,N
		aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a A a a a a a.N
//N
aN
AaAaAa::aAaAa(N
    a		**a,N
    a0_a		*a)N
//N
////////////////////////////////////////////////////////////////////////N
{	N
    // Aa a a a a a aN
    // Aa a a a a a a a, a a a a.N
    // Aa, a a a a Aa a a a.N
    a (aAa->aAaAa()) {N
	// Aa a!N
	// (a a a a a a a a a a)N
	Aa *a = (Aa *) a(a(Aa));N
	a[0] = aAaAa;N
	N
	*a = (a *) a;N
	*a = 0;  // a a a a a A aN
    }N
    N
    a {N
	// Aa a!N
	// (a a a a a a a a a a)N
	Aa *a = (Aa *) a(aAa->aAa() * a(Aa));N
	a (a a = 0; a < aAa->aAa(); a++)N
	    a[a] = (Aa)(*aAa)[a];N
N
	*a  = (a *) a;N
	*a = aAa->aAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a A a a a a aN
// a. Aa a a a a a().N
//N
// A: a a a a a a a a (a.a. *a), a a a aN
// a a a a a.N
//N
// Aa: a, aN
//N
AaN
AaAaAa::aAa(N
    Aa		a,N
    Aa		*aAa,N
    Aa		*a,N
    Aa		*aAa,N
    a		**a,N
    a0_a		*a,N
    a			*a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa	  	a = Aa;N
N
#a AN
    a (aAa == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- aAa a A");N
	a A;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a A;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a A;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a A;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a A;N
    }N
    a (aAa == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- aAa a A");N
	a A;N
    }N
#aN
N
    // a a a a a a aN
    AaAaAa *a;N
    a *a;N
    a (! aAaAa->a(*aAa, a)) {N
#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a a a");N
#aN
	a A;N
    }N
    a = (AaAaAa *)a;N
    N
    N
    // Aa a a a a?N
    a (a->aAa == A)N
	a Aa;N
    a (a->aAa->aAa() == A || a->aAa->aAaAa() <= 0)N
	a Aa;N
    N
    // Aa a a a - a a a a a a a a a a a.N
    a (*a == _A_(a, "A")) {N
	a->aAaAa(a, a);N
	*a = 0;N
	*aAa = *a;N
	a = Aa;N
    }N
    N
    // Aa a a - a a a a a. Aa a aN
    // a a a!N
    a a (*a == A_A) {N
	// a a aAa a a a a a a,N
	// a a a a a a a a a, a a a a.N
	AaAaAa *aAa;N
	aAa = AaAaAa::a(a->aAa);N
	N
	a (aAa != A) {	N
	    AaAaAa *aAa = a AaAaAa;N
	    aAa->a(aAa, A); // A == a aN
	    N
	    // Aa a a a a a a a a a aN
	    a0_a aAa = aAa->aAaAa();N
	    a (aAa > 0) {N
		a *aAa = (a *) a((a_a) aAa);N
		N
		a (aAa != A) {N
		    a(aAa, aAa->aAa(), (a) aAa);N
		    N
		    *a  = aAa; N
		    *a = aAa;N
		    *a = 0;N
		    *aAa = A_A;N
		    a = Aa;N
		}N
	    }N
	    a aAa;N
	    a aAa;N
	}N
    }N
    N
    // Aa a aAa a a a a a, a a a a a.N
    // Aa a a a.N
    a a (a->aAa->aAaAa()) {N
	// Aa a a a a a a a a a?N
	a (a->aAaAa == *a) {N
	    // Aa a a a a a a a a a aN
	    a *aAa = (a *) a((a_a) a->aAa->aAaAa());N
	    a (aAa != A) {N
		a(aAa,N
		       a->aAa->aAa(),N
		       (a)a->aAa->aAaAa());N
		*a  = aAa; N
		*a = a->aAa->aAaAa();N
		*a = 0;N
		*aAa = a->aAaAa;N
		a = Aa;N
	    }	N
	}N
    }N
    N
    a {N
	// Aa a a a a a a Aa a, a a a a aN
	// a a a.N
	a (aAa(N
		a, N
		a->aAa->aAa(),N
		a->aAa->aAaAa(),N
		*a, a, a))N
	{N
	    *a = 0;N
	    *aAa = *a;N
	    a = Aa;N
	}N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa 0.0 a a a a a.N
//N
//  a,aN
//N
AaAaN
AaAaAa::aAa(N
    Aa	a, N
    a	*aAa, N
    a0_a    aAaAa, N
    Aa	aAa,N
    a	**aAa,N
    a0_a    *aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a a a a?N
    a (!  (aAa == _A_(a, "A_0_0") ||N
	    aAa == _A_(a, "A_0_0_A") ||N
	    aAa == _A_(a, "A_0_0") ||N
	    aAa == _A_(a, "A_0_0_A") ||N
	    aAa == _A_(a, "A") ||N
	    aAa == _A_(a, "A_A") ||N
	    aAa == _A_(a, "A_0_0") ||N
	    aAa == _A_(a, "A_0_0_A"))) {N
	// Aa'a a a a a'a aN
	*aAa = A;N
	*aAaAa = 0;N
	N
	#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "a a a a a");N
	#aN
	a A;N
    }N
   N
    // A, a a a a a a a a.N
    a *aAa = A;N
    a0_a aAa = 0;N
    N
    // Aa a a a a a a a a a a.N
    //??? Aa a a a a a a a a a a aAa a,N
    //??? a a a a a a a a a a a.N
    N
    //??? a a a a a?N
    N
    ////////////////////////////////////////////////////////////////////////N
    //N
    // Aa 0.0 - a a aN
    // (Aa A 0.0 a - a a a a aAaA???)N
    //N
    ////////////////////////////////////////////////////////////////////////N
    a (aAa == _A_(a, "A_0_0") ||N
	aAa == _A_(a, "A_0_0")) {N
	aAa = (a *) a((a_a) aAaAa);N
	a (aAa != A) {N
	    a(aAa, aAa, (a) aAaAa);N
	    *aAa = aAa; N
	    *aAaAa = aAaAa;N
	    a Aa;N
	}N
	a {N
	    #a AN
	    AaAaAa::a("AaAaAa::aAa",N
			       "a a a %a a a a a", aAaAa);N
	    #aN
	    a Aa;N
	}N
    }N
N
    // Aa a 0.0 a a a aN
    // Aa a a a a a a a a a a a a a aN
    a a *a = A;N
    a (a == A) {N
	a = a("A");N
	a (a == A)N
	    a = "/a";N
    }N
N
    // Aa a aN
    a *a = a(a, "A0");N
    AaAa a(a);N
    a(a);N
    N
    // Aa 0.0 a a a aN
    a (! aAaAa(a, aAa, aAaAa)) N
	a Aa;N
    N
    ////////////////////////////////////////////////////////////////////////N
    //N
    // Aa a a a a a 0.0 a, a'a aN
    // (Aa A 0.0 a - a a a a aAaA???)N
    //N
    ////////////////////////////////////////////////////////////////////////N
    a (aAa == _A_(a, "A_0_0_A") ||N
	aAa == _A_(a, "A_0_0_A")) {N
	aAa = a(a.aAa());N
	aAa = a.aAa() + 0; // +0 a a a \0N
	*aAa = aAa; N
	*aAaAa = aAa;N
	a Aa;N
    }N
    N
    // Aa a a aN
    //???N
    N
    // Aa a a aN
    a = a(a, "A0");N
    AaAa a0(a);N
    a(a);N
    N
    // Aa a a 0.0 aN
#a A 0N
    a aAa[A];N
    a a *a = a.aAa();N
    a a *a = a0.aAa();N
    a(aAa, A "/a/a -a 0.0 %a %a", a, a);N
    N
    a (a(aAa) == -0) {N
	#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "a <%a> a", aAa);N
	#aN
	N
	a(a);N
	a(a);N
	a Aa;N
    }N
    N
    // Aa a! Aa a a a aN
    //??? A: a a a a a a a...N
    a(a); // a a aN
N
    ////////////////////////////////////////////////////////////////////////N
    //N
    // Aa a a a a a 0.0 a, a'a aN
    //N
    ////////////////////////////////////////////////////////////////////////N
    a (aAa == _A_(a, "A_A") ||N
        aAa == _A_(a, "A_0_0_A") ) {N
	aAa = a(a0.aAa());N
	aAa = a0.aAa() + 0; // +0 a a a \0N
	*aAa = aAa; N
	*aAaAa = aAa;N
	a Aa; // a!N
    }N
    N
    // Aa a a a a a aN
    // Aa, a a a.N
    a a = a(a, A_A);N
    a (a < 0) {N
	#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "a a a a a %a a a", a);N
	#aN
	N
	a(a); // a a aN
	a Aa;N
    }N
    N
    // Aa a aN
    a0_a a = a(a, 0, A_A);N
    a(a, 0, A_A); // a a a aN
    N
    // Aa a a a aN
    a *a = a(a);N
    a (a == A) {N
	#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "a a a %a a", a);N
	#aN
	N
	a(a); // a a aN
	a Aa;N
    }N
    N
    // Aa a aN
    a (a(a, a, a) == -0) {N
	#a AN
	AaAaAa::a("AaAaAa::aAa",N
			   "a a a %a a a a a %a", a, a);N
	#aN
	N
	a(a); // a a aN
	a Aa;N
    }N
    N
    // Aa a a a aN
    a(a); // a a aN
N
    ////////////////////////////////////////////////////////////////////////N
    //N
    // Aa a a a a a 0.0 a, a a a!N
    //N
    ////////////////////////////////////////////////////////////////////////N
    a (aAa == _A_(a, "A") ||N
	aAa == _A_(a, "A_0_0") ) {N
	*aAa = (a *)a; N
	*aAaAa = a;N
	a Aa; // a!N
    }N
    N
    // Aa a a a a, a a a a. Aa.N
    a Aa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a aAa a a a aN
//N
//  a aN
//N
AaAaN
AaAaAa::aAaAa(N
    AaAa	&a, N
    a	*aAa, N
    a0_a    aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a a *a = a.aAa();N
    a a = a(a, A_A); // a a a/aN
    a (a <= 0) {N
	#a AN
	AaAaAa::a("AaAaAa::aAaAa",N
			   "a a a a a a %a", a);N
	#aN
	N
	a Aa;N
    }N
N
    // Aa a a aN
    a (a(a, aAa, aAaAa) == -0) {N
	#a AN
	AaAaAa::a("AaAaAa::aAaAa",N
			   "a a a %a a a a a a %a",N
			   aAaAa, a);N
	#aN
	N
	a(a);N
	a(a); // a a aN
	a Aa;N
    }N
    N
    a(a);N
    a Aa;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a. Aa a aN
// a a a a, a a a a a a a a aN
// a a. Aa a a a a aAa().N
//N
// Aa: a, aN
//N
aN
AaAaAa::aAaAa(N
    Aa		a,N
    AaAaAa	*a,N
    Aa		*aAa,N
    Aa		*a,N
    a		*a,N
    a0_a		*a,N
    a			*a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAaAa",N
			   "- a a A");N
	a;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAaAa",N
			   "- a a A");N
	a;N
    }N
    a (! a->aAaA) {N
	a (a == A) {N
	    AaAaAa::a("AaAaAa::aAaAa",N
			       "- a a A");N
	    a;N
	}N
	a (a == A) {N
	    AaAaAa::a("AaAaAa::aAaAa",N
			       "- a a A");N
	    a;N
	}N
	a (a == A) {N
	    AaAaAa::a("AaAaAa::aAaAa",N
			       "- a a A");N
	    a;N
	}N
    }N
#aN
N
    // Aa a a a aN
    a (*a == 0) {N
N
	// Aa a a a a a a a aN
	a (a->aAaA) {N
	    AaAaAa aAa;N
	    (*a->aAa)(a->aAa, &aAa);N
	}N
	a;N
    }N
N
    Aa aAa = 0;N
    a (*a == _A_(a, "A") || *a == A_A) {N
	a (*a == 0) {N
	    Aa *a = (Aa *) a;N
	    aAa = a->aAaAaAa(a, *a);N
	}N
#a AN
	a {N
	    AaAaAa::a("AaAaAa::aAaAa",N
			       "- a a a %a a a a", *a );N
	}N
#aN
    }N
    a {N
	// Aa a a a a a a A a.N
	// Aa'a a a a a a a A.N
	//??? a a a a a?N
	aAa = _A_(a, "A");N
    }N
    N
    // a a a a a a a a a, a a a aN
    a (aAa != 0) {N
	AaAaAaAa(a->a,N
		*aAa,N
		aAa,N
		(AaAaAaAa) AaAaAa::aAa,N
		(AaAa) a,N
		a->aAa);N
    }N
    N
    // Aa a Aa a, a a (a'a a) a a aN
    // a a a a a a.N
N
//??? Aa a a a a a a a a #0N
//??? a a a a.  Aa a a a a aN
//??? a a a a a a.N
N
//???    AaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a a a a a a a a aN
// a a a. Aa a: a a a a a aN
// a a a a a a. Aa a, a a a aN
// a, a.N
//N
AaN
AaAaAa::aAaAaAa(N
    Aa *aAa,N
    a a)N
//N
////////////////////////////////////////////////////////////////////////N
{    N
    Aa aAa = 0;N
    a a;N
    N
    // Aa a a a a a a a a a aN
    a (a = 0; a < a; a++) {N
	a (a a = 0; a < aAa->aAa(); a++) {N
	    a (aAa[a] == aAa->aAaAa(a)) {N
		aAa = aAa[a];N
		a;N
	    }N
	}N
	N
	a (aAa != 0) a;N
    }N
    N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a A a, a a aN
// a a a a. Aa a a a a aAaAa().N
//N
// Aa: a, aN
//N
aN
AaAaAa::aAa(N
    Aa		/*a*/,N
    AaAaAa	*a,N
    Aa		* /*aAa*/,N
    Aa		*a,N
    a		*a,N
    a0_a		*a,N
    a			* /*a*/)N
//N
////////////////////////////////////////////////////////////////////////N
{N
#a AN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a;N
    }N
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			   "- a a A");N
	a;N
    }N
    a (! a->aAaA) {N
	a (a == A) {N
	    AaAaAa::a("AaAaAa::aAa",N
			       "- a a A");N
	    a;N
	}N
	a (a == A) {N
	    AaAaAa::a("AaAaAa::aAa",N
			       "- a a A");N
	    a;N
	}N
    }N
#aN
N
    a (*a == 0 && ! a->aAaA)N
	a;					// a a a!N
    N
    a (a->aAa == A) a; // a a a a!N
N
    // Aa a a a a a a a aN
    a AaAaAaAa *a = N
	a->aAa->a(a->aAa->a(*a));N
N
    // Aa a a a, a a a a a a a a aN
    a (a != A) {N
	(*a->aAaAa())(N
	    a->aAaAa(),N
	    *a,N
	    (a *) a,N
	    *a);N
    }N
    // Aa a a a a, a a a a a a, a aN
    // a a a a aN
    a a (a->aAaA) {N
	// Aa a a a a a a a aN
	AaAaAa aAa;N
	(*a->aAa)(a->aAa, &aAa);N
    }N
    	N
    // Aa a Aa a, a a (a'a a) a a aN
    // a a a a a a.N
//??? Aa a a a a a a a a #0N
//??? a a a a.  Aa a a a a aN
//??? a a a a a a.N
N
//???    AaAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a (a a a).N
//N
// Aa: aN
//N
aN
AaAaAa::aAaAa(N
    Aa aAa,N
    AaAaAaAaA *aAaAa,N
    a *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa->a(aAa, aAaAa, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAa::aAa(Aa aAa, a *a, a0_a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a?N
    AaAaAa *aAa = aAa(a, aAa, a, aAa);N
N
    // Aa a a Aa a?N
    a (aAa == A) {N
N
	a (aAaA) {N
	    AaAaAa aAa;N
	    (*aAa)(aAa, &aAa);N
	}N
N
#a AN
	aN
	    AaAaAa::a("AaAaAa::a",N
			       "a a a Aa a");N
#aN
    }N
    N
    // a a a a a aN
    a (*aAa)(aAa, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a a Aa.N
// Aa a a a a a.N
//N
// Aa: aN
//N
AaAaAa *N
AaAaAa::aAa(N
    Aa a,N
    Aa a,N
    a *a,N
    a0_a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *aAa = A;N
    	     N
    a (a != A) {N
	a (a == _A_(a, "A_0_0") ||N
	    a == _A_(a, "A_0_0") ||N
	    a == _A_(a, "A") ||N
	    a == _A_(a, "A_0_0")) {N
	    N
	    aAa = AaAaAa::a(a, aAa);N
	}N
	N
	a a (a == _A_(a, "A_0_0_A") ||N
		 a == _A_(a, "A_0_0_A") ||N
		 a == _A_(a, "A_A") ||N
		 a == _A_(a, "A_0_0_A")) {N
	    N
	    aAa(aAa, (a a *) a);  N
	} N
	N
	a a (a == A_A) {N
	    // Aa a a Aa a a a aN
	    // a a a a a Aa a a aN
	    a (AaA::aAaAa((a a *)a)) {N
		// a, a a a a a a a Aa a!N
		aAa = AaAaAa::a(a, aAa);N
	    }N
	}N
	N
	AaAa((a *)a);	N
    }N
    N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a aAa.N
//N
// Aa: a aN
//N
aN
AaAaAa::aAa(AaAaAa *&aAa, a a *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
//??? a a a A a a a a. Aa a a a a a.N
//??? a a a a a a a a a a a!N
N
    AaAa a;N
    AaAa *a;N
    AaAa *a;N
N
    // Aa a a.N
    a (! a.aAa(a)) {N
	#a AN
	AaAaAa::a("AaAaAa::a", "a a a a %a", a);N
	#aN
	N
	a;N
    }N
N
    // Aa a a'a a aAa	N
    a (aAa == A)N
	aAa = a AaAaAa;N
N
    // Aa a a.	N
    a {N
	a (AaA::a(&a, a)) {N
	    a (a != A) {N
		// Aa a a! Aa a a aAaN
		a = a AaAa(a);N
		aAa->a(a);N
	    }N
	}N
    } a (a != A);N
    N
    a.aAa();N
    N
    // Aa a a a a a, a.N
    a (aAa->aAa() > 0)N
	a;N
N
    // Aa a a a.N
    a (! a.aAa(a))N
	a;N
N
    // Aa a'a a a, a a a.N
    a {N
	a (AaA::a(&a, a)) {N
	    a (a != A) {N
		// Aa a a! Aa a a aAaN
		aAa->a(a);N
	    }N
	}N
    } a (a != A);N
    N
    a.aAa();N
    N
    // Aa a a a a a aAa, a a a aN
    a (aAa->aAa() == 0) {N
	a aAa;N
	aAa = A;N
	N
	#a AN
	AaAaAa::a("AaAaAa::a", "a a a Aa a a a %a", a);N
	#aN
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a A a a a a a a a a a aN
// a. Aa a a a a a a a aAa.N
// Aa a a a a aAa().N
//N
// Aa: a, aN
//N
aN
AaAaAa::aAa(N
    Aa  /*a*/,N
    Aa    *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aN
    AaAaAa *a;N
    a *a;N
    aAaAa->a(*aAa, a);N
    a = (AaAaAa *)a;N
N
    // a a a a a a aN
    a (a != A) {N
    	a (a->aAa != A) {N
	    a a->aAa;N
	    a->aAa = A;N
	}N
	N
	aAaAa->a(*aAa);N
    }N
}N
N
