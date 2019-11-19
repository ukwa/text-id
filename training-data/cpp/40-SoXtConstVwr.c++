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
 |   Aa	: AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
N
#a <Aa/AaAaAa.a>N
#a <Aa/a/AaAaAaAaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
N
N
/*N
 * AaN
 */N
N
#a A_A	(0*A_A/0.)	// a a a a a N
				    // a a a a (a a)N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaN
//N
// Aa: aN
N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAaAaAa::AaAa a, N
    AaAaAa::Aa a, N
    AaAa aAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    a, N
	    a, N
	    A) // a Aa a a a a a  N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    aAa.aAa(0, 0, 0);N
    aAa = 0.0;N
    N
    // a a aN
    aAaAaAa("Aa");N
    aAaAaAa("Aa");N
    aAaAaAa("Aa");N
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
// AaN
//N
// Aa: aN
N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//  	a a a a a a a a(a,a) a aN
//  a a a (a a a a)N
//N
// a: a aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (! aAa || ! aAa) {N
	aAa = aAa = 0.0;N
	a;N
    }N
    N
    // Aa a a a a a a (a)N
    AaAaAaAaAa aAa = AaAaAaAaAa(AaAaAa(aAaAa()));N
    aAa.a(aAa);N
    AaAa0a a = aAa.aAaAa();N
    N
    a (a.aAa()) {N
	aAa = aAa = 0.0;N
	a;N
    }N
    N
    // ??? a a A a a a a (a aAa)N
    a a, a;N
    a.aAa(a, aAa, a);N
    aAa = (a > a) ? a : a;N
    N
    a (aAa <= 0.0)N
	aAa = 0.0;N
    a (aAa <= 0.0)N
	aAa = 0.0;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a, a a a a a aN
//  a aN
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(a AaAa0a &aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a(aAa, aAaAa);N
    aAa = aAaAa;N
    N
    // a a a a a a aN
    a (a != A) {N
	a->a = a * a->a.aAa();N
	aAaAaAaAa();N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a (a a a a) a a a aN
//  a a a a.N
//N
// Aa: a aN
aN
AaAaAaAa::aAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa::aAa(aAa);N
    N
    // a a a aN
    a (a != A)N
	aAaAaAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa::aAaAa();N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a aN
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a aN
    AaAaAaAa::aAaAaAa();N
    N
    aAa = aAaAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a (a a a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a a a aN
    AaAa a(aAa, aAaAa - aAa);N
    a->a = a->a.aAa() * a;N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a/a (a a a a).N
//N
// Aa: a aN
N
aN
AaAaAaAa::aAaAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa(aAaAa - aAa);N
    N
    aAaAa = aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a, a a a 0 a a a aN
//  a a. A a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(a aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a aN
    AaAa a;N
    a = a->a.aAa();N
    AaAa0a a(-a[0][0], -a[0][0], -a[0][0]);N
    N
    // a a a a a a a a aN
    // a a a a a a aN
    AaAa a(a, aAa);N
    AaAa0a a;N
    a a;N
    a.aAa(a, a);N
    // a a a [-A,A] aN
    a (a > A_A)N
	a -= 0*A_A;N
    a a (a < -A_A)N
	a += 0*A_A;N
    // a a a a a a aN
    a (a < 0.0) {N
	a = -a;N
	a = -a;N
    }N
    N
    // a a a a a a a a a a aN
    a ( (a <= A_A && aAa > 0) || N
	 (a >= (A_A - A_A) && aAa < 0) )N
    a;N
    N
    // a a a a a a a a a a a a a aN
    a (aAa > 0 && aAa > (a - A_A))N
	aAa = a - A_A;N
    a a (aAa < 0 && aAa < (a + A_A - A_A))N
	aAa = a + A_A - A_A;N
    N
    // a a a a a a a aN
    a.aAa(a, aAa);N
    a->a = a->a.aAa() * a;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	a a a a a a a a a.N
//  N
// Aa: a aN
N
aN
AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa a;N
    AaAa0a aAa;N
    N
    // a a a a aN
    a ( aAaAa() ) {N
	N
	// a a a a a aN
	a = a->a.aAa();N
	aAa.aAa(-a[0][0], -a[0][0], -a[0][0]);N
	AaAa aAa;N
	aAa.aAa(aAa, aAa - a->a.aAa());N
	aAaAa = a->a.aAa() * aAa;N
	N
	// a a aN
	a->a = aAaAa;N
	aAaAaAaAa();N
	aAaAa = a->a.aAa();N
    }N
    aN
	aAaAa = a->a.aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a aN
//  a a a a a a a a (a a aN
//  a a a a a a) a a a (a.a. a aN
//  a), a a a a. Aa a a a a a.N
//N
//  Aa: aN
//N
a N
AaAaAaAa::aAaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a a a a a a a a aN
    // a a a a a a a a a aN
    AaAa a;N
    a = a->a.aAa();N
    AaAa0a aAa(-a[0][0], -a[0][0], -a[0][0]);N
    AaAa0a aAa(a[0][0], a[0][0], a[0][0]);N
    N
    // aAa a a a a a a a a aN
    // a a a a a aN
    AaAa0a aAa = aAa.a(aAa);N
    aAa.a();N
    N
    // a aAa a 0, a a aAa a a a aN
    // a a a a a a. Aa a a, a a a aN
    // a a a, a a a a aAa. Aa, a aN
    // a a a a a a aAa a a aAa.N
    a (aAa != AaAa0a(0.0, 0.0, 0.0)) {N
	// a a aAa!N
	AaAa a(aAa, aAa);N
	a->a.aAa(N
	    a->a.aAa() * a);N
    }	N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a aAa,N
//  a a a a a a a a.N
//  ??? a a a a a a?N
//N
//  Aa: a, aN
//N
a N
AaAaAaAa::aAaAa(AaAa *aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a a a a a aN
    a (a->aAaAa() != aAa->aAaAa())N
	a;N
N
    // a a a a a a aN
    AaAaAaAa::aAaAa(aAa);N
    N
    // a a a aN
    aAaAaAaAa();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a a a a a a a Aa a aN
//  a a a a a a.N
//  ??? a a aN
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (a == A)N
	a;N
    N
    // a a aN
    AaAa0a a = aAaAa();N
    AaAaAaAa a( a );N
    a.aAa(aAa);N
    a.aAa(0.0);N
    a.aAaAa(A);N
    a.a(aAa);N
    N
    // a a a a a, aN
    // a a a a.N
    AaAaAa *a = a.aAaAa();N
    a (a == A)N
	a;N
    AaAa0a a = a->aAa();N
    N
    // a a a a a a a a a, aN
    // a a a a.N
    AaAa0a a = a->aAa();;N
    a ( a.a(a->a.aAa() - a) < 0 )N
	a.a();N
    N
//a("%a %a %a\a", a[0], a[0], a[0]);N
    N
    aAaAa(a);N
}N
