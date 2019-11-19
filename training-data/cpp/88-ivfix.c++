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
#a <a.a>N
#a <a.a>N
#a <a.a>N
N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
N
#a "AaAa.a"N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a-a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a a {N
    AaAa::AaAa	aAa;N
    AaAa			aAa;N
    AaAa			aAaAa;N
    AaAa			aAaAaAa;N
    AaAa			aAa;N
    AaAa			aAaAa;N
    AaAa			aAa;N
    AaAa			aAa;N
} AaAa;N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a a	aAa(a a *a);N
a a	aAa(a a, a **a, AaAa &a);N
a a	aAa(AaAa &a);N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a a(a a, a **a)N
{N
    AaAa a;N
N
    aAa(a);N
N
    AaAa::a();N
N
    // Aa aN
    aAa(a, a, a);N
N
    AaAa a;N
    a.aAaAa(a.aAa, a);N
    a.aAaAa(a.aAa);N
    a.aAaAa(a.aAaAa);N
    a.aAaAaAa(a.aAaAaAa);N
    a.aAaAaAa(a.aAaAa);N
N
    // Aa a:N
    AaAa::aAa("Aa a");N
    AaAa *a = AaA::aAa(&a.aAa);N
    a (a == A) {N
	a(a, "\a%a: Aa a a a a\a", a[0]);N
	aAa(a[0]);N
    }N
    AaAa::aAa();N
N
    // Aa a'a a a a a a a a a a AaAa a aN
    // a a a a a a a'a a a aN
    AaAa *aAa = a.a(a);N
    a (aAa == A) {N
	a(a, "%a: Aa a a a a\a", a[0]);N
	a 0;N
    }N
N
    aAa->a();N
N
    // Aa a a aN
    AaAa::aAa("Aa a");N
    AaAaAa a(&a.aAa);N
    a (! a.aAa)N
	a.aAa()->aAa(A);N
    a.a(aAa);N
    AaAa::aAa();N
N
    // Aa aN
    aAa->a();N
N
    a 0;N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a aN
aAa(a a *a)N
{N
    a(a, "Aa: %a [a] [a] [a]\a", a);N
    a(a,N
	    "\a-a     : Aa a a a a.  Aa a a\a"N
	    "\a-a a : Aa 'a' a a a a a a a\a"N
	    "\a-a     : Aa a a a a a a\a"N
	    "\a-a     : Aa a a (a)\a"N
	    "\a-a     : Aa a a a a\a"N
	    "\a-a     : Aa a a AaAaAa a a a\a"N
	    "\a-a     : Aa a a a a a\a"N
	    "\a-a     : (Aa) Aa a a a a\a"N
	    "\a-A     : (Aa a) Aa a a a a\a"N
	    );N
N
    a(0);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a, a a AaAa a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a aN
aAa(a a, a **a, AaAa &a)N
{N
    AaAa a = A;N
    a a;N
    N
    a ((a = a(a, a, "a:aA")) != -0) {N
	a(a) {N
	  a 'a':N
	    a.aAa = A;N
	    a;N
	  a 'a':N
	    a.aAa.aAaAa(a);N
	    a;N
	  a 'a':N
	    a.aAa = A;N
	    a;N
	  a 'a':N
	    a.aAaAa = A;N
	    a;N
	  a 'a':N
	    a.aAaAa = A;N
	    a;N
	  a 'a':N
	    a.aAaAaAa = A;N
	    a;N
	  a 'a':N
	    a.aAa = AaAa::A;N
	    a;N
	  a 'A':N
	    a.aAa = AaAa::A;N
	    a;N
	  a 'a':	// AaN
	  a:N
	    a = A;N
	    a;N
	}N
    }N
N
    // Aa a a a aN
    a (a < a) {N
	a *aAaAa = a[a++];N
	a (! a.aAa.aAa(aAaAa)) {N
	    a(a, "%a: Aa a a a %a", a[0], aAaAa);N
	    aAa(a[0]);N
	}N
N
        // Aa a a a a a a, a a a aN
        // a a a a a a a a a a aN
        a a *aAa;N
        a *aAa = A;N
        a ((aAa = a(aAaAa, '/')) != A) {N
            aAa = a(aAaAa);N
            aAa[aAa - aAaAa] = '\0';N
            AaAa::aAaAa(aAa);N
	    a(aAa);N
        }N
    }N
N
    // Aa a a a a a a a a a-aN
    a a (a(a(a)))N
	a = A;N
N
    // Aa a a a aN
    a (a < a) {N
	a *aAaAa = a[a++];N
	a (! a.aAa.aAa(aAaAa)) {N
	    a(a, "%a: Aa a a a %a", a[0],aAaAa);N
	    aAa(a[0]);N
	}N
    }N
N
    // Aa a a?N
    a (a < a)N
	a = A;N
N
    a (a)N
	aAa(a[0]);N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a AaAa a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
a aN
aAa(AaAa &a)N
{N
    a.aAa		= AaAa::A;N
    a.aAa		= A;N
    a.aAaAa	= A;N
    a.aAaAaAa	= A;N
    a.aAa		= A;N
    a.aAaAa	= A;N
}N
