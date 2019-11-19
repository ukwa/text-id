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
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaA.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa0.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
N
#a "AaAa.a"N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa a a a a a a a a a a a aN
// a "a" a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
aN
AaAa::aAaAa(AaAaAa *a)N
{N
    a->a(AaAa::aAaAaAa());N
    a->a(AaAa::aAaAaAa());N
    a->a(AaAaAa::aAaAaAa());N
    a->a(AaAa::aAaAaAa());N
    a->a(AaAaAaAa::aAaAaAa());N
    a->a(AaA::aAaAaAa());N
    a->a(AaAa::aAaAaAa());N
    a->a(AaAa::aAaAaAa());N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa A a a a a a a a a aN
// a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAaAaAa(a AaAa &a)N
{N
    a (a.aAaAa(AaAa::aAaAaAa())		||N
	    a.aAaAa(AaAaAaAa::aAaAaAa())	||N
	    a.aAaAa(AaA::aAaAaAa())			||N
	    a.aAaAa(AaAa::aAaAaAa()));N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa A a a a a a a a a a aN
// a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAaAa(a AaAa &a)N
{N
    a (a.aAaAa(AaAaAa::aAaAaAa())		||N
	    a.aAaAa(AaAaAaAa::aAaAaAa())	||N
	    a.aAaAa(AaAaAa::aAaAaAa())		||N
	    a.aAaAa(AaAa0::aAaAaAa()));N
}N
N
/////////////////////////////////////////////////////////////////////////////N
//N
// Aa A a a a a a a a a a.N
//N
/////////////////////////////////////////////////////////////////////////////N
N
AaAaN
AaAa::aAa(a AaAa &a)N
{N
    a (a.aAaAa(AaAa::aAaAaAa())		||N
	    a.aAaAa(AaAa::aAaAaAa())		||N
	    a.aAaAa(AaAaAa::aAaAaAa())	||N
	    a.aAaAa(AaAa::aAaAaAa()));N
}N
