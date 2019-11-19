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
 |	AaAaAaAaN
 |N
 |   Aa(a): Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <A0/A.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa/a/AaAaAaAa.a>N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//   Aa.N
//N
// aN
//N
AaAaAaAa::AaAaAaAa(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
//??? a A, a a a a a a a a a a N
//??? a a aN
    aAa = a;N
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
AaAaAaAa::a(N
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
//   Aa a a a a a a a a.N
//N
// a aN
//N
aN
AaAaAaAa::a(N
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
//   A: a a a AaAa a A a a a.N
//N
// a aN
//N
a AaAa *N
AaAaAaAa::aAa(AaAa *)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a A;N
}N
N
