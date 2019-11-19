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
 * Aa (A) 0,0,0,0,0   Aa Aa, Aa.N
 *N
 _____________________________________________________________N
 _________  A A A A A A A   A A A A A A A A   A A A .  _______N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |	Aa a a a a a.N
 |      Aa aAa() a a.N
 |	Aa a a aAa a Aa Aa a Aa AaN
 |N
 |   Aa(a)		: Aa AaN
 |N
 _________  A A A A A A A   A A A A A A A A   A A A .  _______N
 _____________________________________________________________N
 */N
N
#a <A/a.a>N
#a <Aa/a/AaA.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
N
#a <Aa/Aa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAa.a>N
N
// a a aN
#a A_A	0	N
#a A_A	0	N
N
// a a a a a a a a aN
// a a a 0 a a a 0 a a aN
#a A_A_A_A	0N
N
// a a a a N
#a A_A	0N
N
// a a a a a a a a a a a aN
// a a a a a aN
// a a a a a a a a a a a aN
#a A_A_A	"AaAa"N
N
// a a a a a a a a a a aN
#a A_A_A   	"A_A_#####"N
N
N
a Aa {N
    // a a a a aN
    AaAa	aAa;N
    a		aAa;N
    a a	*aAaAa;N
    a a aA, aA;N
    // a a a a a a a aN
    AaAa	aAa;N
    AaAa	aAa;N
    // a a aN
    AaAa	aAa;N
    AaAa	aAa;N
    AaAa	aAa;N
    AaAa	aAa;N
    AaAa	aAa;N
    AaAa	aAa;N
    AaAa	aAaAa;N
    AaAa	aAa;N
    AaAa	a;N
};N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a.N
//N
N
a aN
aAaA(a *aAa, AaAaAa *,N
		a AaAaAa *,N
		a AaAaAa *,N
		a AaAaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a0_a *aAa = (a0_a *) aAa;N
N
    (*aAa)++;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a Aa Aa.N
//N
N
a aN
aAaA(a *aAa, AaAaAa *,N
		a AaAaAa *,N
		a AaAaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a0_a *aAa = (a0_a *) aAa;N
N
    (*aAa)++;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a.N
//N
N
a aN
aAaA(a *aAa, AaAaAa *,N
		a AaAaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a0_a *aAa = (a0_a *) aAa;N
N
    (*aAa)++;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a.N
//N
N
a AaAaAa::AaN
aAaA(a *aAa, AaAaAa *,N
		a AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a0_a *aAa = (a0_a *) aAa;N
N
    (*aAa)++;N
N
    a AaAaAa::A;N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a/a/a a a a a a a,N
//    a a.N
//N
N
aN
aAa(AaAa *a, a0_a &aAa, a0_a &aAa, a0_a &aAa,N
		a0_a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa = 0;N
    aAa = 0;N
    aAa = 0;N
    aAa = 0;N
    AaAaAa	a;N
N
    a.aAaAa(AaAa::aAaAaAa(),N
			   aAaA,N
			   (a *) &aAa);N
    a.aAaAaAa(AaAa::aAaAaAa(),N
			   aAaA,N
			   (a *) &aAa);N
    a.aAaAa(AaAa::aAaAaAa(),N
			   aAaA,N
			   (a *) &aAa);N
    a.aAaAa( AaAa::aAaAaAa(),N
			aAaA, (a *)&aAaN
		    );N
    a.a(a);N
}N
N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a, a a.N
//N
N
a AaAaN
aAa(a a, a *a[], Aa &a)N
//N
//////////////////////////////////////////////////////////////N
{N
    AaAa	a = A;N
    a		a, aAa;N
N
    // Aa aN
    a.aAa		= A;N
    a.aAa		= A_A;N
    a.aAaAa	= A;N
    a.aA		= A_A;N
    a.aA		= A_A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAa		= A;N
    a.aAaAa		= A;N
    a.a		= A;N
    a.aAa		= A;N
N
    a ((a = a(a, a, "a:a:")) != -0) {N
	a (a) {N
	  a 'a':N
	    a.aAa = A;N
	    a;N
	  a 'a':N
	    a.aAa = a(a);N
	    a;N
	  a 'a':N
	    a(a, " %a , %a", &a.aA, &a.aA);N
	    a;N
	  a:N
	    a = A;N
	    a;N
	}N
    }N
N
    aAa = a;N
N
    // Aa a a a a aN
    a (aAa < a)N
	a.aAaAa = a[aAa++];N
N
    // Aa a a a a? Aa!N
    a (a.aAaAa == A || aAa < a)N
	a = A;N
N
    // Aa a a a aN
    a (a) {N
	a("\a");N
	a("a -a a"); a("\a");N
	a("a -a a"); a("\a");N
	a("a -a a"); a("\a");N
	a("Aa a a %a\a", a.aAaAa);N
	a("Aa a a: %a\a", a.aAa);N
	a("Aa a: %a a %a a\a", a.aA, N
	       a.aA);N
	a("\a");N
    }N
N
    a a;N
}N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a aAa() a a a()N
//N
N
a AaN
aAaAa(Aa *, Aa *a, a *a)N
//N
//////////////////////////////////////////////////////////////N
{N
    a ((a->a == AaAa) || (a->a == AaAa)) &&N
	(a->a.a == (Aa) a);N
}N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a A/A a.N
//N
N
a aN
aAa(Aa *&a, Aa &a, a a aA,N
	   a a aA, a *a)N
//N
//////////////////////////////////////////////////////////////N
{N
    AaAa			*a;N
    Aa			a;N
    AaAaAa	a;N
    Aa			a;N
    Aa			a;N
    a a			aAa[] = {N
	A_A,N
	A_A_A, 0,N
	A_A_A, 0,N
	A_A_A, 0,N
	A_A_A, 0,N
	Aa,		// Aa a a a/A_AN
	Aa,N
    };N
N
    a = AaAa(0);N
    a   = aAaAa(a,N
			   AaAa(a),N
			   aAa);N
    a   = aAaAa(a, a, 0, A_A);N
    a = AaAa(a,N
			   AaAa(a, a->a),N
			   a->a, AaAa);N
    a.a	= a;N
    a.a_a	= 0;N
    a.a_a	= AaAaAa;N
    a = AaAa(a,N
	   AaAa(a, a->a),N
	   0, 0, aA, aA,N
	   0, a->a, AaAa, a->a,N
	   (AaAa | Aa | AaAa), &a);N
N
    // Aa a a a a a a a aN
    AaAa *a = AaAaAa();N
    a->a = Aa;N
    AaAaAa(a, a, a);N
    AaAaAa(a, a, a, a, Aa, 0, 0, 0);N
    Aa(a);N
N
    AaAa(a, a);N
    AaAa(a, &a, aAaAa, (a *) a);N
    aAaAa(a, a, a);N
N
    aAa(A_A_A);N
    aAaAa(0.0, 0.0, 0.0, 0);N
    N
    // a a a a a a aN
    aAa(A_A_A_A | A_A_A_A);N
}N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a aN
//    a. Aa a a a, a aN
//    a, a a a.N
//    Aa A a a.N
//N
N
a AaAa *N
aAaAa(a AaAaAa &aAa,N
	   AaAa *aAa,N
	   Aa &a)N
//N
//////////////////////////////////////////////////////////////N
{N
N
    // Aa a a a a a a. AaN
    // a a, a a a a aN
    // a a.N
    AaAa *a = a AaAa;N
    a->a();N
    a->aAa = AaAa::A;N
N
    // Aa a a a a a aN
    AaAaAa *a = a AaAaAa;N
    a->aAa(a);N
N
    // Aa a a a a a a aN
    AaAa *aAa = a AaAa;N
    aAa->aAa(A_A_A);N
    a->aAa(aAa);N
N
    // Aa a a a a aN
    AaAa *aAa = AaA::aAa(aAa);N
    a (aAa == A) {N
	a(a, "Aa a a a\a");N
	a->a();N
	a(0);N
    }N
    a->aAa(aAa);N
N
    AaAa 	*a;N
    AaAa	*a, *a;N
    AaAaAa	a;N
N
    // a a a Aa a a a a a aN
    //    a a aN
    AaAa 	*aAa;N
    a.aAa(AaAa::aAaAaAa());N
    a.aAa(AaAaAa::A);N
    a.a(aAa);N
    a ((a = a.aAa()) != A) {N
	aAa = (AaAa *) a->aAa();N
	a->a();N
	a = (AaAa *) a->aAa();N
	a = aAa->aAa();N
	a (a) {N
	    a->aAa(aAa, a);N
	    // a a a a aN
	    a.a(aAa);N
	}N
    }N
N
    // a a a a a a a a a aN
    //    a a aN
    AaAaAa	*aAa;N
    AaAaAa	*aAa;N
    a.aAa(AaAaAa::aAaAaAa());N
    a.aAa(AaAaAa::A);N
    a.a(aAa);N
    a ((a = a.aAa()) != A) {N
	aAa = (AaAaAa *) a->aAa();N
	a->a();N
	a = (AaAa *) a->aAa();N
	a = a AaAa;N
	aAa = aAa->aAa();N
	a (a a=0; a<aAa->aAa(); a++) N
	    a->aAa((*aAa)[a]);N
	a->aAa(aAa, a);N
	a.a(aAa);N
    }N
N
    // a a a a a a a aN
    // a a a, a a a a a a aN
    a.aAa(AaAa::aAaAaAa());N
    a.aAa(AaAaAa::A);N
    a.a(aAa);N
    a (a.aAa() == A) { // a aN
	AaAaAa *a = a AaAaAa;N
	a->aAa(a, 0);N
    }N
    a N
	a.aAa = A;N
N
    // a a a a a a a a a a aN
    a.aAa(AaAa0::aAaAaAa());N
    a.aAa(AaAaAa::A);N
    a.a(aAa);N
    a (a.aAa() != A)N
	a.aAa = A;N
N
    a->aAa(a, aAa);N
N
    // a a a a a a aN
N
    a0_a aAa, aAa, aAa, aAa;N
    aAa( aAa, aAa, aAa, aAa, aAa );N
    a("Aa a a a a a:     %a\a", aAa );N
    a("Aa a a a a a: %a\a", aAa );N
    a("Aa a a a a a:     %a\a", aAa );N
    a("Aa a a a a a:    %a\a\a", aAa );N
N
    // Aa a a a a a a aN
    // a aN
    AaAaAaAaAa	a(aAa);N
    a.a(a);N
    aAa->a = a.aAaAa().aAa();N
N
    a a;N
}N
N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//    a a a a a a.  Aa.N
//N
N
AaAa *N
aAa(AaAa *a)N
//N
//////////////////////////////////////////////////////////////N
{N
    //N
    // a a'a a a, a a a a a a aN
    //  a aN
    //N
    a (a->aAaAa(AaAa::aAaAaAa())) {N
	AaAa *a = (AaAa *) a;N
        AaAa *aAa = (AaAa *) a->aAaAa().aAa();N
        aAa->AaAa::aAa(a, A);N
N
	a	a;N
	a (a=0; a<a->aAaAa(); a++) {N
	    AaAa *a = aAa(a->aAa(a));N
	    aAa->aAa(a);N
	}N
	a aAa;N
    }N
    //N
    // a a a a, a a aN
    //N
    a N
	a a;N
}N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a.N
//N
N
aN
aAa(AaAa *a, AaAa a)N
//N
//////////////////////////////////////////////////////////////N
{N
    AaAaAa a;N
    a.aAa(AaAaAa::A);N
    a.aAa(a);N
    a.a(a);N
    AaAaAa &a = a.aAa();N
    a (a a = 0; a < a.aAa(); a++) {N
	AaAa *a = a[a]->aAa();N
	a[a]->a();N
	AaAa *a = (AaAa *)a[a]->aAa();N
	a->aAa(a);N
    }N
}N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a.N
//N
N
a aN
aAa(a a *aAa)N
//N
//////////////////////////////////////////////////////////////N
{N
    a(a,N
	    "Aa: %a [-a] [-a A] [-a A,A] a\a",N
	    aAa);N
    a(a,N
	    "\a-a      a a a a a\a"N
	    "\a-a A    a A a a a a\a"N
	    "\a-a A,A  a a a A a A a\a");N
}N
N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a A A a a a a N
//    a a a aN
//    Aa a a a a a aN
//    a a aN
//    N
N
a aN
aAa(Aa &a,N
	      a AaAaAa &a,N
	      AaAa *&a)N
//N
//////////////////////////////////////////////////////////////N
{N
    AaAa 		aAa, aAa;N
    a 		aAa;N
    AaAa		*aAa;N
    AaAaAa 	a(a);N
    AaAaAa		aAaAa;N
    AaAa 	*aAa;N
N
    // a a aN
    aAa(A_A_A_A | A_A_A_A);N
N
    //N
    // a a a a a aN
    //   a a a a a a a a aN
    //   a a a aN
    //N
    aAa = (AaAa *) aAa(a);N
    aAa->a();N
    aAa->aAa = AaAa::A;N
N
    // a a a a a a a a a a a aN
    aAa->aAaAa(A_A_A, aAaAa);N
N
    // a a a a a a a aN
    AaAaAa	aAa;N
    aAa->aAaAa(A_A_A, aAa);N
    aAa = (AaAa *) aAa[0];N
N
    a (a.aAa) {  // a a aN
	aAa(aAa, AaAa::aAaAaAa());N
	aAa(aAa, AaAaAa::aAaAaAa());N
	aAa(aAa, AaAaAa::aAaAaAa());N
    }N
N
    a (a.aAa) {  // a aN
	aAa(aAa, AaAa::aAaAaAa());N
    }N
N
    a (a.aAa || a.aAa) {  // a a aN
N
	aAa(aAa, AaAa0::aAaAaAa());N
N
	a (a.aAa) {N
	    // a a a a aN
	    a a a a[] = {N
		0, 0, 0, 0,N
		0, 0, 0, 0,N
		0, 0, 0, 0,N
		0, 0, 0, 0N
		};N
	    AaAa0 *aAa = a AaAa0;	N
	    aAa->a.aAa(AaAa0a(0, 0), 0, a);N
	    aAa->aAa(aAa, 0);N
	}N
    }N
N
    a (a.aAa) {  // a a aN
	AaAaAa *aAa = a AaAaAa;N
	aAa->a.aAa(AaAaAa::A);N
	aAa->aAa.aAa(A);N
	aAa->aAa.aAa(A);N
	aAa->aAa(A);N
	aAa->aAa(aAa, 0);N
N
	// a a a a a a a'a a aN
	AaAaAa *aAa = a AaAaAa;N
	aAa->aAa = AaAaAa::A;N
	aAa->aAa = AaAaAa::A;N
	aAa->aAa(A);N
	aAa->aAa(aAa, 0);N
    }N
N
    a (a.aAaAa) {  // a aN
	AaAaAa *aAaAa = a AaAaAa;N
	aAaAa->a.aAa(AaAaAa::A);N
	aAaAa->aAa(A);N
	aAa->aAa(aAaAa, 0);N
    }N
N
    a (a.aAa) {  // a a a a a aN
	AaAaAa *aAa = a AaAaAa;N
	aAa->a = AaAaAa::A_A;N
	aAa->aAa(aAa, 0);N
    }N
 N
    a (aAa = 0; ; aAa++) {N
N
	// a a a a a a a a aN
	a (aAa == A_A_A_A)N
	    aAa = AaAa::aAaAaAa();N
N
	// a a a a a a a a aN
	//    a a a aN
	a (aAa == a.aAa + A_A_A_A) {N
	    aAa();N
	    aAa = AaAa::aAaAaAa() - aAa;N
	    a;N
	}N
	    N
	// a a a, a aAa a a a aN
	a (! a.a) { N
N
	    // a aAa N
	    AaAa *aAa = (AaAa *) AaA::aAaAa("aAa");N
	    aAa->aAa(AaAa::aAaAaAa());N
N
	    // a a a a AaAa N
	    a (a a=0; a<aAaAa.aAa(); a++)N
		((AaAa *) aAaAa[a])->aAa(0)->a();N
	}N
N
	// Aa a aN
	aAa->a.aAa(AaAa0a(0, 0, 0), N
                           aAa * 0 * A_A / a.aAa);N
N
	a (! a.aAa)N
	    aAa(A_A_A_A | A_A_A_A);N
N
	a.a(aAa);N
    }N
N
    // Aa a a aAaN
    aAa->a();N
N
    a (aAa.aAa() / a.aAa);N
}N
N
N
N
#a "AaAa.a"N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa Aa Aa'a AaAa a a a a aN
//N
N
a aN
aAa(a aAa, a aAaAa, a aAaAa,N
	a aAaAa, a aAaAa, a aAaAa,N
	a aAaAa, a aAa, a aAa, a aAa)N
//N
//////////////////////////////////////////////////////////////N
{N
    a aAa[0];N
    a a a *aAa[] = { "Aa", "Aa", "Aa", N
				  "Aa", "Aa", "Aa",N
				  "Aa", "Aa", "Aa",N
				  "Aa" };N
    a a a *aAa[] = { "a/a" };N
    a a;N
N
    Aa aAa = AaAa::a("Aa a");N
    N
    AaAa::aAa();N
N
    AaAa *a = a AaAa;N
    AaAa *a = a AaAa;N
    AaAa *a = a AaAa;N
N
    a->a();N
    a->aAa(a);N
    a->aAa(a);N
N
    a->aAa.aAa(0.0, 0.0, 0.0);N
N
    aAa[0] = aAa;N
    aAa[0] = aAa - aAaAa;N
    aAa[0] = aAa - aAa;N
    aAa[0] = aAa - aAaAa;N
    aAa[0] = aAa - aAaAa;N
    aAa[0] = aAaAa - aAaAa;N
    aAa[0] = aAa - aAaAa;N
    aAa[0] = aAa - aAaAa;N
    aAa[0] = aAa - aAa;N
    aAa[0] = aAa - aAa;N
N
    a (a=0; a<0; a++) {N
	a->aAa.a0Aa(a, 0, 0, 0, 0);N
	a->aAaAa.a0Aa(a, 0, 0, 0, 0);N
	a (aAa[a] < 0) aAa[a] = 0;N
    }N
    a->a.aAa(0, 0, aAa);N
    a->aAa.aAa(0, 0, aAa);N
    a->aAa.aAa(0, 0, aAa);N
    a->aAa = 0;N
    a->aAa = 0;N
    a->aAa = 0.0;N
    a->aAa = aAa;N
    a->aAaAa.aAa(0.0, 0, 0);N
    a->aAaAa.aAa(0, 0, 0);N
    a->aAaAa = aAa / 0;N
	N
    AaAaAaAa *a = a AaAaAaAa(aAa);N
    a->aAa("Aa Aa");N
    a->aAaAa(a);N
    a->a();N
    N
    AaAa::a(aAa);N
    AaAa::aAa(); N
}N
N
N
N
//////////////////////////////////////////////////////////////N
//N
// Aa:N
//    AaN
//N
N
a a(a a, a **a)N
//N
//////////////////////////////////////////////////////////////N
{N
    Aa		a;N
    AaAa		*a;N
    Aa		*a;N
    Aa		a;N
    a		aAa, aAa, aAa, aAa,N
                        aAaAa, aAaAa, aAaAa, aAaAa,N
                        aAaAa, aAaAa;N
N
    // Aa AaN
    AaAa::a();N
N
    // Aa aN
    a (! aAa(a, a, a)) {N
	aAa(a[0]);N
	a 0;N
    }N
N
    // Aa a aN
    AaAa	aAa;N
    a (! aAa.aAa(a.aAaAa)) {N
	a(a,N
		"Aa a %a\a", a.aAaAa);N
	a 0;N
    }N
N
    AaAaAa a(a.aA, a.aA);N
    a = aAaAa(a, &aAa, a);N
N
    // Aa a a aN
    aAa(a, a, a.aA, a.aA, a[0]);N
N
    // Aa aN
   N
    a("\a\a\a/a\a/a\a");N
    // a a aN
    aAa = aAa(a, a, a);N
    a("Aa-Aa a:\a%0.0a\a%0.0a\a", aAa, 0.0/aAa);N
N
N
    // a a a a aN
    a.aAa = A;N
    aAaAa = aAa(a, a, a);N
    a.aAa = A;N
    a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
    N
    // a a a a aN
    a.aAa = A;N
    aAaAa = aAa(a, a, a);N
    a.aAa = A;N
    a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
    N
    // a a a a aN
    a.aAa = A;N
    aAaAa = aAa(a, a, a);N
    a.aAa = A;N
    a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
N
    a (a.aAa) { // a a a a a a aN
N
	// a a a a a aN
	a.aAa = A;N
	aAaAa = aAa(a, a, a);N
	a.aAa = A;N
	a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
N
	// a a a a a a aN
	a.aAa = A;N
	aAaAa = aAa(a, a, a);N
	a.aAa = A;N
	a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
    }N
    a N
	aAaAa = aAaAa = aAa;N
N
N
    // a a a a aN
    a.aAa = A;N
    aAa = aAa(a, a, a);N
    a.aAa = A;    N
    a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAa, 0.0/aAa);N
N
    a (a.aAa) { // a a a a a a aN
	// a a a a a a aN
	a.aAa = A;N
	aAaAa = aAa(a, a, a);N
	a.aAa = A;N
	a("Aa Aa:\a\a%0.0a\a%0.0a\a", aAaAa, 0.0/aAaAa);N
    }N
    aN
	aAaAa = aAa;N
N
    a("\a");N
N
    // a a a a a aN
    a.aAaAa = A;N
    aAa = aAa(a, a, a);N
    a.aAaAa = A;N
    a("Aa a a a a:\a%0.0a a/a\a", N
	   aAa-aAa);N
    N
    // a a a a a a aN
    a.a = A;N
    aAa = aAa(a, a, a);N
    a.a = A;N
    a("Aa a a a a a:\a%0.0a a/a\a\a", N
	   aAa-aAa);N
N
N
    // a aN
    Aa 	a;N
    AaAa(a, a);N
    AaAa(a, &a, aAaAa, (a *) a);N
N
    // a a aN
    a (a.aAa) N
	aAa(aAa, aAaAa, aAaAa,N
		aAaAa, aAaAa, aAaAa,N
		aAaAa, aAa, aAa, aAa);N
N
    a 0;N
}N
