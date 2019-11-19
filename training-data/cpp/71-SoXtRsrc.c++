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
 |	AaAaAaN
 |N
 |   Aa(a): Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/Aa/AaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
N
#a <A0/Aa.a>N
#a <A0/AaA.a>N
#a <A0/Aa.a>N
N
// AaA.a a a a a 'a' - a a a a++!N
#a a AN
#a <A0/AaA.a>N
#a aN
N
N
#a A_A(A,A,A,A,A) \N
	AaAaAa(AaAaAa(A),A,A,A,A)N
N
#a A_A(A,A,A,A,A) \N
	AaAaAa(AaAaAa(A),A,A,A,A)N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa - a a a a a a a aN
// a a a a a.N
//N
AaAaAa::AaAaAa(Aa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
    	a;N
	N
    AaAa 	a, a;N
    AaAaAa	*a;N
    Aa  	a = a;N
    AaAa	a,a;N
    N
    a = AaAa(a);N
    N
    // Aa a a a a a a a a a a.N
    // Aa a a a a Aa a, a a a a a aN
    // a a a a; a, a a a a a a.N
    // Aa a a a a a a a A a a a aN
    // a a a a a a a a (a.a. AaAaAa)N
    // a a a 'a' a a (a.a. AaAa).N
    a (a != A) {N
    	a (a = AaAaAa::aAa(a)) {N
	    // a a a a a a a AaAaAa.N
	    // a a a a a a a a Aa a aN
	    // a "AaAaAa" a a a Aa aN
	    // a a a a a a a (a.a.AaAa).N
	    a a *aAa = a->aAaAa();N
	    a (aAa != A)N
		 a = AaAaAaAa(aAa);N
	    a a = AaAaAaAa("");N
N
	    a a *aAa = a->aAaAa();N
	    a (aAa != A)N
		 a = AaAaAaAa(aAa);N
	    a a = AaAaAaAa("");N
    	}N
	a a ((AaAa(a) == A) && AaAaAaAa(a)) {N
	    // ??? A a Aa a a (Aa/Aa.a)N
	    // Aa a a a a a a aN
	    a = a->a.a_a;N
	    a = ((AaAaAa) a)->a.a_a;N
	    // ??? a a aN
	}N
	a {N
	    // a a a a a a a a aN
	    a = a->a.a_a;N
	    a = AaAa(a)->a_a.a_a;N
	}N
	a.a((a *) (a a) a);N
	a.a((a *) (a a) a);N
	a = AaAa(a);N
    }N
N
    // Aa a a a, a a a a a a a aN
    // a a a a a a a a a a a a.N
    // Aa a a a a a 0 a:N
    //   0 a a a a a a a aN
    //   0 a a A a-a-a aN
    N
    a a,a;N
    a a = a.aAa(); // a.aAa() a a aN
    aAa = a + 0;N
    aAa = a AaAa[aAa];N
    aAa = a AaAa[aAa];N
    a (a = 0, a = a - 0;N
    	 a >= 0; a++, a--) {N
#a (_A_A == 0 || __a0 || __A0__)N
	 aAa[a]  = (AaAa) ((a) a[a]);N
	 aAa[a] = (AaAa) ((a) a[a]);N
#aN
	 aAa[a]  = (AaAa) a[a];N
	 aAa[a] = (AaAa) a[a];N
#aN
    }N
N
    // a a a a a A aN
    aAa[aAa - 0]  = A;N
    aAa[aAa - 0] = A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa - a a a a.N
//N
AaAaAa::~AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a [ /*aAa*/ ] aAa;N
    a [ /*aAa*/ ] aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a 'AaAa' a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a 'a' a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a 'a_a' a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, a a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, a *&a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a 'AaAa' a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a 'AaAa' a a, a A a a.N
//N
AaAaN
AaAaAa::aAa(a a *aAa, a a *aAa, a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa[aAa - 0]  = AaAaAaAa(aAa);N
    aAa[aAa - 0] = AaAaAaAa(aAa);N
    a aAa(a, aAa, aAa, a);N
}N
N
N
//N
// Aa a aN
//N
N
aN
AaAa aAa(Aa *a, a *a, AaAa &a)N
{N
    a (a != A) {N
	Aa a;N
	AaAa(a,N
	    AaAa(a,AaAa(a)),N
	    a,N
	    &a);N
	N
	a a,a,a;N
	a = a.a >> 0;N
	a = a.a >> 0;N
	a = a.a >> 0;N
	a.aAa(a(a/0.),a(a/0.),a(a/0.));N
	N
	a A;N
    }N
    N
    a A;N
}N
N
aN
AaAa aAa(a *a, a &a)N
{N
    AaAa a = A;N
    N
    a (a != A) {N
	// a a a a a a a a (a a '#')N
	a a;N
	a (a(a, "%a", &a)) {N
	    a = a;N
	    a = A;N
	}N
	a a (a(a, "#%a", &a)) {N
	    a = a;N
	    a = A;N
	}N
    }N
    N
    a a;N
}N
N
aN
AaAa aAa(a *a, a a &a)N
{N
    AaAa a = A;N
    N
    a (a != A) {N
	// a a a a a a a a (a a '#')N
	a a;N
	a (a(a, "%a", &a)) {N
	    a = a;N
	    a = A;N
	}N
	a a (a(a, "#%a", &a)) {N
	    a = a;N
	    a = A;N
	}N
    }N
    N
    a a;N
}N
N
aN
AaAa aAa(a *a, AaAa &a)N
{N
    AaAa a = A;N
    N
    a (a != A) {N
	a      (a(a, "Aa") == 0)N
	    a = A;N
	a a (a(a, "Aa") == 0)N
	    a = A;N
	a a (a(a, "Aa") == 0)N
	    a = A;N
	a a (a(a, "Aa") == 0)N
	    a = A;N
	a a (a(a, "a") == 0)N
	    a = A;N
	a a (a(a, "a") == 0)N
	    a = A;N
	a a (a(a, "a") == 0)N
	    a = A;N
	a a (a(a, "a") == 0)N
	    a = A;N
	a a = A;N
    }N
    a a = A;N
    N
    a a;N
}N
N
aN
AaAa aAa(a *a, a &a)N
{N
    AaAa a = A;N
    N
    a (a != A) {N
	a a;N
	a (a(a, "%a", &a)) {N
	    a = a;N
	    a = A;N
	}N
    }N
    N
    a a;N
}N
N
N
//N
// Aa a a AN
//N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a = aAa(a, a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a = aAa(a, a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'a' a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'a' a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'a a' a a aAa,aAaN
// a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    a a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'a a' a a aAa,aAaN
// a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    a a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    a *&a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a (a.a != A) {N
	    a = a.a;N
	    a = A;N
	}N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a aAa,aAa a a a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    a *&a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a (a.a != A) {N
	    a = a.a;N
	    a = A;N
	}N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'AaAa' a a aAa,aAa a a a a a.N
// Aa a a "Aa", "Aa", "Aa", "Aa".N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a 'a' a a aAa,aAa a a a a a.N
// Aa a a "Aa", "Aa", "Aa", "Aa".N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    AaAa &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    a *aAa,N
    a *aAa,N
    a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa aAa;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &aAa, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a.N
//N
// Aa: a, aN
//N
AaAaN
AaAaAa::aAa(N
    Aa *a,N
    AaAaAa aAa,N
    AaAaAa aAa,N
    a &a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a = A;N
    AaAa a;N
    AaAa a;N
    N
#a AN
    // a a Aa a aN
    a (a == A) {N
	AaAaAa::a("AaAaAa::aAa",N
			 "A AaAaAa::aAa - Aa a A");N
	a A;N
    }N
#aN
N
    a (A_A(a, aAa, aAa, &a, &a)) {N
	a = aAa(a.a, a);N
    }N
    N
    a a;N
}N
