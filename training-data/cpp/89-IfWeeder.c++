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
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAa::AaAa()N
{N
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
// Aa a a a a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::a(AaAa *a)N
{N
    // Aa a a a a a a a AaAaN
    // a a a aN
    aAa(a);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a aAa() a a a-aN
// a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a AaAaAaAa {N
    AaAa		*a;	// Aa a aN
    AaAaAa		a;		// AaAa a a aN
    AaAa		aAa;	// A a a a a aN
};N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a AaAa a a a a a a aN
// a. Aa a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAa *a)N
{N
    // Aa a AaAa a a a a a a aN
    // a a a a a a a a. Aa a aN
    // a a a a a, a a a a aN
    // a a a a a a a a aN
    // a. Aa a a a a a aN
    // aAa, a a a a a a aN
    // AaAaAaAa a.N
    aAaAaAa(a);N
N
    // Aa a a a a a aN
    a a;N
    a (a = 0; a < aAa->aAa(); a++) {N
	AaAaAaAa *a = (AaAaAaAa *)N
	    (*aAa)[a];N
N
	a (a->aAa)N
	    aAa(a, a);N
    }N
N
    // Aa aN
    a (a = 0; a < aAa->aAa(); a++)N
	a (AaAaAaAa *) (*aAa)[a];N
    a aAa;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a aN
// a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAaAa(AaAa *a)N
{N
    // Aa a a a a a a a a a (a aN
    // a a a a), a a a a a. AaN
    // a a a a a a a. Aa a a, aN
    // a a a a a a a a a a a aN
    // a'a a a. Aa a a a a a aN
    // a a, a a a a a a a a aN
    // a a a.N
N
    // Aa, a a a a a a a a a'a a aN
    // a a a a aN
    AaAa aAa;N
N
    // Aa a a a a a aN
    AaAaAa a;N
    a.aAa(AaAa::aAaAaAa());N
    a.aAa(AaAaAa::A);N
    a.a(a);N
N
    // Aa a a a a a a a a a aN
    // a. Aa a a a a a a a a a aN
    // a a a a.N
    AaAaAa a0;N
    a0.aAa(AaAaAa::A);N
N
    // Aa a a a aN
    AaAaAa aAa;N
    AaAa::aAaAa(&aAa);N
N
    // Aa a a, a a a a a aN
    aAa = a AaAa;N
    a (a a = 0; a < a.aAa().aAa(); a++) {N
N
	a AaAa *a = (a AaAa *) a.aAa()[a];N
N
	A(a->aAa() > 0);N
	A(a->aAa()->aAaAa() == AaAa::aAaAaAa());N
N
	AaAa  *a = (AaAa *) a->aAa();N
N
	// Aa a a a a a, a a a aN
	// aN
	a *aAa;N
	AaAaAaAa *a;N
	a (aAa.a((a a) a, aAa)) {N
	    a = (AaAaAaAa *) aAa;N
	    a (! a->aAa)N
		a;N
	}N
	a {N
	    a = a AaAaAaAa;N
	    a->a = a;N
	    a->aAa  = A;N
	    aAa.a((a a) a, a);N
	    aAa->a(a);N
	}N
N
	// Aa a a a a a a a a a a aN
	// a, a a'a a a a aN
	a a;N
	a (a = a->aAa() - 0; a >= 0; a--) {N
	    a (AaAa::aAaAaAa(a->aAa(a)->aAaAa())) {N
		a->aAa = A;N
		a;N
	    }N
	}N
	a (! a->aAa)N
	    a;N
N
	A(a->aAaAaAa(0)->N
	       aAaAa(AaAa::aAaAaAa()));N
N
	AaAa *a = (AaAa *) a->aAaAaAa(0);N
	a aAa = a->aAaAaAa(0);N
N
	// Aa a a a a a, a a a a aN
	// a a a a a'a a. Aa a a a aN
	// a a a aN
	AaAaAa aAaAa;N
	a (a a = 0; a < aAa.aAa(); a++) {N
	    a0.aAa(aAa[a]);N
	    a0.a(a);N
	    a (a = 0; a < a0.aAa().aAa(); a++)N
		aAaAa.a(a0.aAa()[a]);N
	}N
N
	a (a = 0; a < aAaAa.aAa(); a++) {N
N
	    a AaAa *aAa = (a AaAa *) aAaAa[a];N
N
	    // Aa a'a a a a a a a a a a aN
	    // a a a a a aN
	    AaAa aAa = aAa->aAa()->aAaAa();N
	    a (aAa != AaAaAaAaAa::aAaAaAa() &&N
		aAa != AaAaAaAa::aAaAaAa()) {N
		a->aAa = A;N
		a;N
	    }N
N
	    // Aa a a a a a a a a aN
	    // a a a a a a a aN
	    // a.N
	    a a (aAa->aAa(0) > aAa) {N
		AaAaAa *a = (AaAaAa *) aAa->aAa();N
N
		// ??? Aa a a'a aAa a a aN
		// ??? a a, a a a a a a aN
		// ??? a a a a a. Aa a, a aN
		// ??? a a a a a aAa a a aN
		// ??? a a a a A. Aa a aN
		// ??? a a a a a a a a. Aa a 0.N
		a (a->aAa.aAa() == 0 &&N
		    a->aAa[0] < 0) {N
		    a->aAa = A;N
		    a;N
		}N
N
		AaAaAa *a =N
		    (AaAaAa *) a->aAa.aAa();N
		a (a == A || a->aA.aAa() == 0)N
		    a->a.a(aAa->aAa());N
	    }N
	}N
    }N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAa(AaAa *a, AaAaAaAa *a)N
{N
    // Aa a a a a a a a, a a a a. AaN
    // a a a a a a a a.N
    a (a->a.aAa() == 0) {N
	AaAaAa a;N
	a.aAa(a->a);N
	a.aAa(AaAaAa::A);N
	a.a(a);N
	a (a a = 0; a < a.aAa().aAa(); a++) {N
	    AaAa *a = a.aAa()[a];N
	    AaAa *a = (AaAa *) a->aAaAaAa(0);N
	    a a = a->aAaAaAa(0);N
	    A(a->aAaAa(AaAa::aAaAaAa()));N
	    A(a->aAa(a) == a->a);N
	    a->aAa(a);N
	}N
    }N
N
    // Aa a a a a a a a a aN
    // a a a a a a. Aa a a a aN
    // a a a.N
    aAaAa(a);N
N
    // Aa a a a a a a a a a aN
    // a a. Aa, a a a a a aN
    // a.N
    aAaAa(a);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a, a aN
// a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAaAaAa *a)N
{N
    ////////////////////////////////////////////N
    //N
    // Aa a a a, a a a a a a aN
    // a. Aa a a a a a a a a a aN
    // a a'a a. Aa a a a a a aN
    // a a a a a a, a a a aN
    // a a a a a a a a a. Aa a a a a,N
    // a a a a a a a a a a. Aa a,N
    // a a a 0 a a a a a a 0, a aN
    // 0 a a 0 a a a a. Aa a a a aN
    // a a a, a a a a a a aN
    // a a a a a a a a a a a aN
    // a a a a a a a a AaAaAa.N
    //N
N
    // Aa a a a a a a a a a.N
    a AaAaAaAa {N
	a			a;	// Aa a a aN
	AaAaAaAa	*a;	// Aa a a a a a aN
    };N
N
    // Aa a a a a a a a a aN
    aAa = a->a;N
    a = aAa->aAa.aAa(0);N
    a = aAa->aAa.aAa(0);N
    a = aAa->aAa.aAa(0);N
    a = aAa->aAa.aAa(0);N
    a = aAa->a.aAa(0);N
    a = aAa->a.aAa(0);N
N
    a aAa = aAa->aAa.aAa();N
N
    // Aa a a a a a a a a aN
    AaAaAaAa *a = a AaAaAaAa[aAa];N
N
    // Aa a a a a a a aN
    a *a = a a [aAa];N
N
    // Aa a a a a a a aN
    AaAa *aAa = a AaAa(0 + aAa / 0);N
N
    // Aa a a a a a a a, a aN
    // aN
    a a, aAa = 0;N
N
    a (a = 0; a < aAa; a++) {N
N
	// Aa a a a a a. Aa'a a a aN
	// a a a aN
	a[a] = -0;N
N
	// Aa a a a a aN
	a[a].a = a;N
	a[a].a  = A;N
N
	// Aa a a a a a a a a a aN
	// aN
	a0_a aAa = aAaAaAa(a);N
N
	// Aa a a a a a a a a a a aN
	a *a;N
	a (aAa->a(aAa, a)) {N
	    // Aa a a a aN
	    AaAaAaAa *a, *aAa = A;N
	    a (a = (AaAaAaAa *) a;N
		 a != A; a = a->a) {N
N
		// Aa a'a a a, a a aN
		a (aAaAa(a->a, a)) {N
		    a[a] = a->a;N
		    aAa++;N
		    a;N
		}N
N
		aAa = a;N
	    }N
N
	    // Aa a a'a a a a, a a a a a aN
	    // a a a aN
	    a (a[a] == -0) {N
		A(aAa != A);N
		aAa->a = &a[a];N
	    }N
	}N
N
	// Aa a a a a a a a a a, a a a aN
	aN
	    aAa->a(aAa, &a[a]);N
    }N
N
    // Aa'a a a a a aN
    a aAa;N
    a [] a;N
N
    // Aa a a a a a a a a a aN
    // a a a. Aa'a a a a a a a aN
    // a a a.N
    a (aAa > 0) {N
N
	a (a = 0; a < a->a.aAa(); a++) { N
N
	    // Aa a a a a a a a,N
	    // a aN
	    AaAaAa *aAa = (AaAaAa *) a->a[a];N
	    a a = aAa->aAa.aAa();N
	    a0_a *a = aAa->aAa.aAa();N
	    a (a a = 0; a < a; a++) {N
N
		// Aa a a a a a a a, a aN
		a (a[a] >= aAa)N
		    a[a] %= aAa;N
N
		// Aa a a aN
		a (a[a] >= 0 && a[a[a]] != -0)N
		    a[a] = a[a[a]];N
	    }N
	    aAa->aAa.aAa();N
	}N
    }N
N
    a [] a;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a0_aN
AaAa::aAaAaAa(a a)N
{N
    // Aa a a a a a a a a, a a'a aN
    // a a a a aN
N
    // Aa a a a a a a, a a a a aN
    // a a a a. Aa a a a a aN
    // a a a a 0-0. Aa a a a a a aN
    // a a a a a 0 a 0.N
N
    a (a0_a) (a[a][0] * 0 +N
		       a[a][0] * 0 +N
		       a[a][0] *   0);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa A a a a a a a a a aN
// a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAaAa(a a0, a a0)N
{N
    // Aa a a a aN
    a (a0 == a0)N
	a A;N
N
    // Aa a a a a a a aN
    a (a[a0] != a[a0])N
	a A;N
N
#a A_A(A,A)						      \N
    a (aAa->A.aAa() > 0 && A[a0] != A[a0])		      \N
	a AN
N
    // Aa a a a a aN
    A_A(aAa,  a);N
    A_A(aAa, a);N
    A_A(aAa, a);N
    A_A(a,     a);N
    A_A(a,  a);N
N
#a A_AN
N
    // Aa a a a, a'a a aN
    a A;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a aN
// a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAaAaAa *a)N
{N
    AaAa *a = a->a;N
    a aAa = a->aAa.aAa();N
    a (aAa == 0)N
	a;N
N
    ////////////////////////////////////////////N
    //N
    // Aa a a a a a a a a a a aN
    // (a a a) a a a. Aa a a a aN
    // a a a a a a.N
N
    a a, aAa = 0;N
    AaAa *aAa = a AaAa[aAa];N
    a (a = 0; a < aAa; a++)N
	aAa[a] = A;N
    a (a = 0; a < a->a.aAa(); a++) { N
	AaAaAa *aAa = (AaAaAa *) a->a[a];N
	a aAa = aAa->aAa.aAa();N
	a a0_a *aAa = aAa->aAa.aAa(0);N
	a (aAa == 0) {N
N
	    // Aa a a a a a a, a a aN
	    // a a a a a, a a a a aN
	    // aAa a a a a a a a aN
	    // a.N
	    a (! aAa[0]) {N
		aAa[0] = A;N
		aAa++;N
	    }N
	    aAa->aAa = -0;N
	    aAa->aAa.aAa(A);N
	    a;N
	}N
	a (a a = 0; a < aAa; a++) {N
	    a a = aAa[a];N
	    // Aa a a a a a a aN
	    // a a a aN
	    A(a < aAa);N
	    a (a >= 0 && ! aAa[a]) {N
		aAa[a] = A;N
		aAa++;N
	    }N
	}N
    }N
N
    // Aa a a a a, aN
    A(aAa <= aAa);N
    a (aAa == aAa) {N
	a [] aAa;N
	a;N
    }N
N
    ////////////////////////////////////////////N
    //N
    // Aa a a a a a a a a aN
    // a a a. Aa -0 a a a a a a a.N
N
    a *aAa = a a[aAa];N
    a aAaAa = 0;N
    a (a = 0; a < aAa; a++) {N
	a (aAa[a])N
	    aAa[a] = aAaAa++;N
	aN
	    aAa[a] = -0;N
    }N
    A(aAaAa == aAa);N
N
    ////////////////////////////////////////////N
    //N
    // Aa a a a a a aN
N
    a (a = 0; a < a->a.aAa(); a++) { N
	AaAaAa *aAa = (AaAaAa *) a->a[a];N
	a aAa = aAa->aAa.aAa();N
	a (aAa == 0) {N
N
	    // Aa a a a a a a a a a a 0N
	    // a a, a a a a a a aN
	    // a, a a a a a a.N
	    a (aAa->aAa.aAa() ||N
		aAa->aAa[0] == 0)N
		a;N
N
	    aAa = aAa->aAa.aAa();N
	    aAa->aAa.aAa(0, aAa,N
					    aAa->aAa.aAa(0));N
	}N
	a0_a *aAa = aAa->aAa.aAa();N
	a (a = 0; a < aAa; a++) {N
	    a a = aAa[a];N
	    a (a >= 0) {N
		// Aa a a a a a a aN
		// a a a aN
		A(a < aAa);N
		aAa[a] = aAa[a];N
		A(aAa[a] >= 0);N
	    }N
	}N
	aAa->aAa.aAa();N
    }N
N
    ////////////////////////////////////////////N
    //N
    // Aa a a a a a a a a. AaN
    // a a a, a a a a a a a aN
    // a. Aa a a a a a a 0 a.N
    //N
N
    AaAa aAa;N
    AaAa aAa;N
    aAa.aAa(A);N
    aAa.aAa(A);N
N
#a A_A(A)						      \N
    a (a->A.aAa() > 0) {					      \N
	aAa = a->A;					      \N
	a->A.aAa(aAa);				      \N
	a AaAa *aAa = aAa.aAa(0);		      \N
	AaAa *aAa = a->A.aAa();		      \N
	aAaAa = 0;						      \N
	a (a = 0; a < aAa; a++)				      \N
	    a (aAa[a])					      \N
		aAa[aAaAa++] = aAa[a];		      \N
	a->A.aAa();				      \N
    }N
N
#a A_A(A)						      \N
    a (a->A.aAa() > 0) {					      \N
	aAa = a->A;					      \N
	a->A.aAa(aAa);				      \N
	a a *aAa = aAa.aAa(0);		      \N
	a *aAa = a->A.aAa();		      \N
	aAaAa = 0;						      \N
	a (a = 0; a < aAa; a++)				      \N
	    a (aAa[a])					      \N
		aAa[aAaAa++] = aAa[a];		      \N
	a->A.aAa();				      \N
    }N
N
    A_A(aAa);N
    A_A(aAa);N
    A_A(aAa);N
    A_A(aAa);N
    A_A(a);N
    A_A(a);N
N
    // Aa aN
    a [] aAa;N
    a [] aAa;N
N
#a A_AN
#a A_AN
}N
