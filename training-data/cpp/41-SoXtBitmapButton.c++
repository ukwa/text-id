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
 * Aa (A) 0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |	AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
#a <a.a>N
#a <A0/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
N
#a "AaAaAaAa.a"N
N
#a A(a) AaAaAaAa( AaAa(a) )N
N
////////////////////////////////////////////////////////////////////////N
//N
//  AaN
//N
AaAaAaAa::AaAaAaAa(Aa a, AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    aAa = A;N
    a = aAa;N
    aAa = aAa = 0;N
    N
    // Aa a a aN
    Aa a[0];N
    a a = 0;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
    AaAaAa(a[a], AaAaAa, 0); a++;N
#a A_A_AN
    AaAaAa(a[a], AaAaAa, Aa); a++;N
#a // !A_A_AN
    a = AaAaAaAaAa(a, A, a, a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  AaN
//N
AaAaAaAa::~AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    //??? a a a?N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a.N
//N
//  Aa: aN
//N
aN
AaAaAaAa::a(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAa == a || ! a)N
	a;N
    N
    aAa = a;N
    N
    AaAaAaAa(a, AaAaAa, N
	aAa ? aAa : aAa, A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a a a a (a a a a a).N
//N
//  Aa: aN
//N
aN
AaAaAaAa::aAa(a *a, a a, a a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    Aa	*a = AaAa(AaAa(a));N
    Aa	a = AaAa(a, A( AaAa(a) ));N
    Aa	a, a, a;N
    a		a;N
N
    AaAaAaAa( AaAa(a), AaAa, &a, A );N
N
    // a a a a a a aN
    // ??? a a a a a a a aN
    // ??? a a a a a a a a aN
    // ??? Aa a a (a Aa a a)N
    Aa a[0];N
    a a = 0;N
    AaAaAa(a[a], AaAa, &a); a++;N
    AaAaAa(a[a], AaAa, &a); a++;N
    AaAaAa(a[a], AaAaAaAa, &a); a++; //??? a aN
    AaAaAa(AaAa(a), a, a);N
    N
    // a a a aN
    a (aAa)N
	AaAa(a, aAa);N
    a (aAa)N
	AaAa(a, aAa);N
    aAa = aAa = 0;N
    N
    // a a a a a a a (a 0).N
    aAa = AaAaAaAaAa(a, a, N
	a, a, a, a, a, a);N
    a (a)N
	aAa = AaAaAaAaAa(a, a, N
	    a, a, a, a, a, a);N
    N
    // a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, AaA); a++;N
    AaAaAa(a[a], AaAaAa, N
	aAa ? aAa : aAa); a++;N
    AaAaAa(a, a, a);N
}N
N
#a AN
