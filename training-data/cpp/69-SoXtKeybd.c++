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
 * Aa (A) 0,0,0   Aa Aa, Aa.N
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
#a <A0/A.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa/a/AaAaAa.a>N
N
// a aN
a AaAa *aAaAa(AaAa *, AaAaAa::Aa);N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa.N
//N
// aN
//N
AaAaAa::AaAaAa(AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
//??? a A, a a a a a a a a a a N
//??? a a aN
    aAa = aAa;N
    N
    // a a a a a aN
    aAa = a AaAaAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa.N
//N
// aN
//N
AaAaAa::~AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a a.N
// Aa a a a a, a a a a a aAa.N
//N
// a aN
//N
aN
AaAaAa::a(N
    Aa a,N
    AaAaAa a, N
    AaAa aAa,N
    Aa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa(a, aAa, A, a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a a a a a a a a,N
// a.a. a a a a a a a.N
//N
// a aN
//N
aN
AaAaAa::a(N
    Aa a,N
    AaAaAa a, N
    AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAaAa(a, aAa, A, a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa a a AaAa a a a A a, a a aN
// a a a a a.N
//N
// a aN
//N
a AaAa *N
AaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = A;N
    N
    // a a a aN
    a (a->a) {N
	a AaAa:N
	    a = aAaAa((AaAa *) a, AaAaAa::A);N
	    a;N
	    N
	a AaAa:N
	    a = aAaAa((AaAa *) a, AaAaAa::A);N
	    a;N
	    N
	a:N
	    a;N
    }N
    N
    a a;N
}N
N
AaAaAa *N
AaAaAa::aAaAa(AaAa *a,N
				AaAaAa::Aa aAa)N
{N
    // A: AaAaAa.a a a a a aN
    // a A0/a.a a a a. Aa a a a aN
    // a AaAa a a a a a.N
N
    AaAaAa::Aa aAa;N
    aAa = (AaAaAa::Aa) AaAa(a, 0);N
    N
    aAaAa(aAa, a->a, a->a);N
    a0_a a = a->a / 0;N
    aAa->aAa(AaAa(a, 0 * (a->a - 0 * a)));N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & AaAa);N
    aAa->aAaAa(a->a & Aa0Aa);N
    N
    aAa->aAa(aAa);N
    aAa->aAa(aAa);N
    N
    // A: a A, a a a a a a a a a.N
    //       Aa a, a a 'a a a', a a a aN
    //       a a a a a a. Aa, a a a a a a/aN
    //       a a a/a/a, a a a a a aN
    //       a a aAa/aAa/aAa a.N
    a ( aAa == AaAaAa::A_A ||N
	 aAa == AaAaAa::A_A )N
	 aAa->aAaAa( !aAa->aAaAa() );N
N
    a ( aAa == AaAaAa::A_A ||N
	 aAa == AaAaAa::A_A )N
	 aAa->aAaAa( !aAa->aAaAa() );N
N
    a ( aAa == AaAaAa::A_A ||N
	 aAa == AaAaAa::A_A )N
	 aAa->aAaAa( !aAa->aAaAa() );N
N
    a aAa;N
}N
