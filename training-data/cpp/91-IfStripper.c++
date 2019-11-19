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
#a <Aa/AaAa.a>N
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAaAaAaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa. Aa a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::AaAa()N
{N
    a = A;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::~AaAa()N
{N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a aN
// a a a a a a, a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::a(AaAa *_a)N
{N
    a = _a;N
N
    // Aa a a a a AaAaAaAaAa a a AaAaN
    A(a->aAa != A);N
N
    // Aa a a a a a 0 a a a aN
    // a AaAaAaAaAaN
    A(a->aAa->aAa.aAa() % 0 == 0);N
    aAa = a->aAa->aAa.aAa() / 0;N
N
    // Aa a a a a a, a a, a a aN
    aAa   = (a->aAa &&N
		     a->aAa->aAa.aAa() > 0);N
    aAaAa = (a->aAaAa &&N
		     a->aAa->aAaAa.aAa() > 0);N
    aAa = (a->aAa->aAa.aAa() > 0);N
N
    // Aa, a, a a a a a aN
    // a, a a a'a a a a a a aN
    // a. Aa a a a a a a, a aN
    // a. (Aa'a a a a a a aN
    // a, a a a, a a.) AaN
    // a a a a a a a a AaAaN
    // a a a.N
    aAaAa();N
N
    // Aa a a a a a aN
    aAaAa();N
N
    // Aa a aN
    aAaAa();N
N
    // Aa a a a a aN
    aAaAaAaAa();N
N
    // Aa a a a a a a a a a (aAaAa)N
    // a a a a a a a a aN
    // a. A A a a a a a a a. Aa,N
    // a a a a a a a a, a a a aN
    // a.N
    aAaAa = a AaAa(aAa * 0);N
N
    // Aa a a a a aN
    aAa();N
N
    // Aa a a a a a aN
    aAa();N
N
    // Aa aN
    a [] a;N
    a [] a;N
    a aAaAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a AaAa a a a aN
// a. Aa a a a a a.N
//N
////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa()N
{N
    // Aa 0: Aa a a a a a a aN
    a         aAaAa = a->aAa->aAa.aAa();N
    a a0_a *aAa    = a->aAa->aAa.aAa(0);N
    a a0_a *aAa	= (! aAa ? A :N
				   a->aAa->aAa.aAa(0));N
    a a0_a *aAaAa	= (! aAaAa ? A :N
				   a->aAa->N
				   aAaAa.aAa(0));N
    a a0_a *aAa = (! aAa ? A :N
			      a->aAa->aAa.aAa(0));N
N
    // Aa 0: Aa a a: a a a aN
    a aAaAa = aAa * 0;N
N
    // Aa 0: Aa a a a AaAa a a aN
    // a a a a aN
    AaAa *aAa = a AaAa[aAaAa];N
N
    // Aa 0: Aa a a a a a AaAa a,N
    // a a a a. Aa a a a a aN
    // a a a. (Aa a a a a aN
    // a a a a a a a a a - 0.)N
    a a, aAa = a->a->a.aAa();N
    AaAa **a = a AaAa *[aAa];N
    a (a = 0; a < aAa; a++)N
	a[a] = A;N
N
    // Aa 0: Aa a a a a a a a AaAaN
    // a, a a a a a a aAa a. AaN
    // a a a a a a a a a AaAaN
    // a.N
    aAa = a a [aAaAa];N
N
    // Aa 0: Aa a a AaAa a a a a,N
    // a a a. Aa a a a a, a a'a aN
    // a.N
    AaAa *aAa = aAa;N
    a (a = 0; a < aAaAa; a++) {N
N
	a aAa = aAa[a];N
N
	a (aAa < 0) {N
	    aAa[a] = -0;N
	    a;N
	}N
N
	// Aa a a a AaAa aN
	aAa->aAa	= aAa;N
	aAa->aAa	= (aAa   ?   aAa[a] : -0);N
	aAa->aAaAa	= (aAaAa ? aAaAa[a] : -0);N
	aAa->aAa	= (aAa ?      aAa[a] : -0);N
	aAa->aA	= aAa - aAa;N
N
	// Aa a a a a a a a a a a aN
	AaAa *aAa;N
	a (aAa = a[aAa]; aAa != A;N
	     aAa = aAa->a) {N
N
	    a (aAa->aAa     == aAa->aAa &&N
		aAa->aAaAa == aAa->aAaAa &&N
		aAa->aAa      == aAa->aAa)N
		a;N
	}N
N
	// Aa a a a a, a-a a a aN
	a (aAa != A)N
	    aAa[a] = aAa->aA;N
N
	// Aa, a a a a a a a a aN
	// a a aN
	a {N
	    aAa->a = a[aAa];N
	    a[aAa] = aAa;N
	    aAa[a] = aAa->aA;N
	    aAa++;N
	}N
    }N
N
    // Aa 0: Aa a a a a a a a a aN
    // a aN
    aAa = aAa - aAa;N
N
    // Aa 0: Aa a a a a a a aN
    a = a AaAa[aAa];N
    a (a = 0; a < aAa; a++)N
	a[a] = aAa[a];N
N
    // Aa 0: Aa a a a a a a'a a a aN
    a [] a;N
    a [] aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a aN
// a a.N
//N
////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa()N
{N
    a a0_a *aAa = a->aAa->aAa.aAa(0);N
N
    // Aa aN
    a = a AaAa[aAa];N
N
    // Aa a a a, a a aAa a aN
    // aAaAaN
    a (a a = 0; a < aAa; a++) {N
N
	AaAa *a = &a[a];N
N
	a->a = a;N
N
	a (a a = 0; a < 0; a++) {N
	    A(aAa[0*a + a] >= 0);N
	    a aAa = aAa[0*a + a];N
	    A(aAa >= 0);N
	    A(aAa < aAa);N
	    a->a[a] = &a[aAa];N
	}N
N
	// Aa a aN
	a->a[0] = a->a[0] = a->a[0] = A;N
N
	// Aa a a a a a aN
	a->aAa = A;N
N
	// Aa a a a a a. Aa a a a a.N
	a->aAaAa = -0;N
N
	// Aa a a a aN
	a->a = a->a = A;N
    }N
N
    // Aa a'a a a a aN
    a [] aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a aN
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa()N
{N
    // Aa a aN
    AaAa *a = a AaAa[0 * aAa];N
N
    // Aa a a a a aN
    aAa = a AaAa(0);N
N
    // Aa a a, a a a a a aN
    AaAa *a = a;N
    a (a a = 0; a < aAa; a++) {N
N
	AaAa *a = &a[a];N
N
	// Aa a a a a a a a a 0 a. Aa a,N
	// a a a a a a a a a aN
	// a a a a a a a. Aa a a, a aN
	// a a a a.N
N
#a A_A(A, A, A)						      \N
	a->a0 = a->a[A];						      \N
	a->a0 = a->a[A];						      \N
	a->a = a;						      \N
	a->a = A;						      \N
	a->a  = A;						      \N
	aAa(a);							      \N
	a++N
N
	A_A(0, 0,  0);N
	A_A(0, 0,  0);N
	A_A(0, 0,  0);N
N
#a A_AN
    }N
N
    // Aa a a a a a a a a a aN
    // a a. Aa a a a a, a a'a a a aN
    // a aN
    a [] a;N
    a aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a, a a aN
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAa *aAa)N
{N
    // Aa a a a a a a a a a a aN
    a0_a a = aAa(aAa);N
    a *aAa;N
    a (aAa->a(a, aAa)) {N
N
	// Aa a a a a a aN
	AaAa aAa = A;N
	AaAa *aAa = A;N
	a (AaAa *a = (AaAa *) aAa;N
	     a != A;N
	     a = a->a) {N
N
	    // Aa a a a a aN
	    a (a->a0 == aAa->a0 && a->a0 == aAa->a0) {N
N
		// Aa a a a a a aN
		a->a->a[a->a]	= aAa->a;N
		aAa->a->a[aAa->a]	= a->a;N
N
		// Aa a a a a a aN
		a (aAa != A)N
		    aAa->a = a->a;N
		a {N
		    aAa = a->a;N
N
		    // Aa a a a a, a a a aN
		    // a aN
		    a (aAa == A)N
			aAa->a(a);N
		}N
N
		// Aa a a a aN
		aAa = A;N
		a;N
	    }N
N
	    aAa = a;N
	}N
N
	// Aa a a a a a a a a a a a a a aN
	a (! aAa)N
	    aAa->a = aAa;N
    }N
N
    // Aa a a a a a a a a, a a a aN
    aN
	aAa->a(a, aAa);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a. Aa a a a a a aN
// a a a a a a a a a, aN
// a a; a.a., a'a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a0_aN
AaAa::aAa(AaAa *a)N
{N
    // Aa a a A a a a a a a a a.N
    // Aa a a a a a, a a a a a.N
    a a0 = a->a0->aA;N
    a a0 = a->a0->aA;N
    a (a0 < a0) {N
	a a = a0;N
	a0 = a0;N
	a0 = a;N
    }N
N
    // Aa: a a a a a a a a aN
    // a (a a a > 0 a a), a a'a aN
    // a, a a a a a a a a a a a.N
    a (a0 << 0) + a0;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAaAaAa()N
{N
    a a;N
    a (a = 0; a < 0; a++)N
	aAaAa[a] = A;N
N
    // Aa a a a a a, a a a a aN
    // a a a a a aAaAa a aN
    // a. Aa a a a a a a a.N
    a (a = 0; a < aAa; a++) {N
	AaAa *a = &a[a];N
N
	a->aAaAa = 0;N
N
	a (a a = 0; a < 0; a++)N
	    a (a->a[a] != A)N
		a->aAaAa++;N
N
	aAa(a, a->aAaAa);N
    }N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa()N
{N
    AaAa *a;N
N
    // Aa a a a a a a aN
    a (aAaAa(a)) {N
N
	// Aa a a a (a a)N
	a a = 0;N
	a (a a = 0; a < 0; a++) {N
	    a (a->a[a] != A && ! a->a[a]->aAa) {N
		a = a;N
		a;N
	    }N
	}N
N
	// Aa 0 a a a, a a a aN
	// a a a aN
	a (a) {N
	  a 0:N
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    a;N
	  a 0:N
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    a;N
	  a 0:N
	  a 0:    // Aa a a; a a'a aN
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    aAaAa->a(a->a[0]);N
	    a;N
	}N
N
	// Aa a a? Aa a a a, a a,N
	// a a a aN
	a (a == 0) {N
	    aAaAa(a);N
	    aAaAa->a(A);N
	    a;N
	}N
N
	// Aa a a a a a a a a a a. AaN
	// a a a a, a a a a a.N
	AaAa	aAa = A;N
N
	a (A) {N
N
	    aAaAa(a);N
N
	    // Aa a a aN
	    A(a != 0);N
	    AaAa *aAa = a->a[a];N
N
	    // Aa a a a'a a a aN
	    a (aAa == A || aAa->aAa)N
		a;N
N
	    // Aa a a a a a a a a aN
	    a (aAa->a[0] == a) {N
		aAaAa->a(aAa->a[0]);N
		a = (aAa ? 0 : 0);N
	    }N
	    a a (aAa->a[0] == a) {N
		aAaAa->a(aAa->a[0]);N
		a = (aAa ? 0 : 0);N
	    }N
	    a a (aAa->a[0] == a) {N
		aAaAa->a(aAa->a[0]);N
		a = (aAa ? 0 : 0);N
	    }N
N
	    // Aa'a a (a a a 0 a a a a)N
	    // a aAa a a a a a a a a. AaN
	    // a a, a a a a a a a.N
	    aN
		a;N
N
	    // Aa a a aN
	    a = aAa;N
	    aAa = ! aAa;N
	}N
N
	// Aa a aN
	aAaAa->a(A);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a.N
//N
////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAaAa(AaAa *&a)N
{N
    // Aa a a a a a a aN
N
    a (a a = 0; a < 0; a++) {N
	a (aAaAa[a] != A) {N
	    a = aAaAa[a];N
	    A(! a->aAa);N
	    a A;N
	}N
    }N
N
    a = A;N
    a A;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a, a a a a a a aN
// a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAa *a)N
{N
    A(! a->aAa);N
N
    a->aAa = A;N
N
    // Aa a a a a aN
    aAa(a, a->aAaAa);N
N
    // Aa a aAaAa a a a a a aN
    // a a a aN
    a (a a = 0; a < 0; a++) {N
	AaAa *a = a->a[a];N
	a (a != A && ! a->aAa) {N
	    A(a->aAaAa > 0);N
	    aAa(a, a->aAaAa);N
	    aAa(a, --a->aAaAa);N
	}N
    }N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAa *a, a aAa)N
{N
    AaAa *a = aAaAa[aAa];N
N
    a (a != A)N
	a->a = a;N
    a->a = a;N
    a->a = A;N
    aAaAa[aAa] = a;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAa *a, a aAa)N
{N
    a (a->a != A)N
	a->a->a = a->a;N
    aN
	aAaAa[aAa] = a->a;N
N
    a (a->a != A)N
	a->a->a = a->a;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa()N
{N
    a aAa = aAaAa->aAa();N
N
    // Aa a a a aN
    a->aAa->aAa.aAa(aAa);N
    a0_a *a = a->aAa->aAa.aAa();N
    a (a a = 0; a < aAa; a++) {N
	AaAa *a = (AaAa *) (*aAaAa)[a];N
	a[a] = (a == A ? -0 : a->aAa);N
    }N
    a->aAa->aAa.aAa();N
N
    // Aa a a a a, a aN
    a (aAa) {N
	a->aAa->aAa.aAa(aAa);N
	a = a->aAa->aAa.aAa();N
	a (a a = 0; a < aAa; a++) {N
	    AaAa *a = (AaAa *) (*aAaAa)[a];N
	    a[a] = (a == A ? -0 : a->aAa);N
	}N
	a->aAa->aAa.aAa();N
    }N
N
    // Aa a a a a a, a aN
    a (aAaAa) {N
	a->aAa->aAaAa.aAa(aAa);N
	a = a->aAa->aAaAa.aAa();N
	a (a a = 0; a < aAa; a++) {N
	    AaAa *a = (AaAa *) (*aAaAa)[a];N
	    a[a] = (a == A ? -0 : a->aAaAa);N
	}N
	a->aAa->aAaAa.aAa();N
    }N
N
    // Aa a a a a, a aN
    a (aAa) {N
	a->aAa->aAa.aAa(aAa);N
	a = a->aAa->aAa.aAa();N
	a (a a = 0; a < aAa; a++) {N
	    AaAa *a = (AaAa *) (*aAaAa)[a];N
	    a[a] = (a == A ? -0 : a->aAa);N
	}N
	a->aAa->aAa.aAa();N
    }N
}N
