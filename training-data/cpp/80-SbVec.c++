/*N
 *N
 *  Aa (A) 0 Aa Aa, Aa.  Aa Aa Aa.N
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
 *N
 *  Aa a a a a a a a A Aa Aa AaN
 *  Aa a a a a; a a, a a a Aa AaN
 *  Aa, Aa., 0 Aa Aa, Aa 0, Aa, A  0-0  AN
 *N
 *  Aa a: Aa Aa, Aa., 0 Aa Aa,N
 *  Aa Aa, A  0, a:N
 *N
 *  a://a.a.aN
 *N
 *  Aa a a a a a, a:N
 *N
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
 |	AaAa0aN
 |	AaAa0aN
 |	AaAa0aN
 |	AaAa0aN
 |N
 |   Aa(a)		: Aa A. Aa, Aa Aa, Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <a>N
N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
N
// a a a a a a a a aN
// (a a Aa0a a Aa0a a a)N
#a A 0a-0N
N
//////////////////////////////////////////////////////////////////////////////N
//N
// Aa0a aN
//N
//////////////////////////////////////////////////////////////////////////////N
N
//N
// a a a a a a a a aN
//N
N
#a A0(a)                                                                \N
    ((a[0][0] * a[0][0] * a[0][0] + a[0][0] * a[0][0] * a[0][0] +              \N
      a[0][0] * a[0][0] * a[0][0] - a[0][0] * a[0][0] * a[0][0] -              \N
      a[0][0] * a[0][0] * a[0][0] - a[0][0] * a[0][0] * a[0][0]))N
N
AaAa0a::AaAa0a(AaAa &a0, AaAa &a0, AaAa &a0) {N
    a a[0], a, a[0][0], a[0][0];N
N
    // a 0a0 a a a aN
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
    a[0][0] = a0.aAa()[0];N
N
    // a a a a a a a aN
    a = A0(a);N
N
    //    a("a = %0.0a %0.0a %0.0a\a", a[0][0], a[0][0], a[0][0]);N
    //    a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0], a[0][0]);N
    //    a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0], a[0][0]);N
    a (a > -A && a < A) { // a a, a a a a aN
        a[0] = 0;N
        a[0] = 0;N
        a[0] = 0;N
    } a {N
        a[0] = a0.aAaAaAa();N
        a[0] = a0.aAaAaAa();N
        a[0] = a0.aAaAaAa();N
N
        //	a("a = %0.0a\a    %0.0a\a    %0.0a\a", a[0], a[0],N
        //a[0]);N
N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
N
        //	a("a = %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]);N
N
        a[0] = A0(a) / a;N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
N
        //	a("a = %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]);N
N
        a[0] = A0(a) / a;N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0][0];N
        a[0][0] = a[0];N
N
        //	a("a = %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]); 	a("     %0.0a %0.0a %0.0a\a", a[0][0], a[0][0],N
        //a[0][0]);N
N
        a[0] = A0(a) / a;N
    }N
N
    //    a("%0.0a %0.0a %0.0a\a", a[0], a[0], a[0]);N
}N
N
//N
// Aa a-a a a a a a a aN
//N
N
AaAa0aN
AaAa0a::a(a AaAa0a &a) a {N
    a AaAa0a(a[0] * a.a[0] - a[0] * a.a[0],N
                   a[0] * a.a[0] - a[0] * a.a[0],N
                   a[0] * a.a[0] - a[0] * a.a[0]);N
}N
N
//N
// Aa a (a) a a a a a aN
//N
N
aN
AaAa0a::a(a AaAa0a &a) a {N
    a (a[0] * a.a[0] + a[0] * a.a[0] + a[0] * a.a[0]);N
}N
N
//N
// Aa 0 a aN
//N
N
aN
AaAa0a::aAa(a &a, a &a, a &a) a {N
    a = a[0];N
    a = a[0];N
    a = a[0];N
}N
N
//N
// Aa a a a aN
//N
N
aN
AaAa0a::a() a {N
    a a::a(a[0] * a[0] + a[0] * a[0] + a[0] * a[0]);N
}N
N
//N
// Aa a a a a a aN
//N
N
aN
AaAa0a::a() {N
    a[0] = -a[0];N
    a[0] = -a[0];N
    a[0] = -a[0];N
}N
N
//N
// Aa a a a a aN
//N
N
aN
AaAa0a::a() {N
    a a = a();N
N
    a (a != 0.0)N
        (*a) *= (0.0 / a);N
N
    aN
        aAa(0.0, 0.0, 0.0);N
N
    a a;N
}N
N
AaAa0a &N
AaAa0a::aAa(a AaAa0a &a, a AaAa0a &a0,N
                  a AaAa0a &a0, a AaAa0a &a0) {N
    *a = a0 * a[0] + a0 * a[0] + a0 * a[0];N
    a (*a);N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] *= a;N
    a[0] *= a;N
    a[0] *= a;N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a+=(AaAa0a a) {N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a-=(AaAa0a a) {N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
N
    a *a;N
}N
N
//N
// Aa a a - a a a aN
//N
N
AaAa0aN
AaAa0a::a-() a {N
    a AaAa0a(-a[0], -a[0], -a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] * a, a.a[0] * a, a.a[0] * a);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a+(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] + a0.a[0], a0.a[0] + a0.a[0],N
                   a0.a[0] + a0.a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a-(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] - a0.a[0], a0.a[0] - a0.a[0],N
                   a0.a[0] - a0.a[0]);N
}N
N
//N
// Aa a a. Aa a a a.N
//N
N
aN
a==(a AaAa0a &a0, a AaAa0a &a0) {N
    a (a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0] &&N
            a0.a[0] == a0.a[0]);N
}N
N
//N
// Aa a a a a a.N
//N
N
AaAaN
AaAa0a::a(a AaAa0a a, a a) a {N
    AaAa0a a = *a - a;N
N
    a a.a(a) <= a;N
}N
N
//N
// Aa a a a a a (a a a aN
// a) a a a.N
//N
N
AaAa0aN
AaAa0a::aAaAa() a {N
    AaAa0a a(0.0, 0.0, 0.0), aAa;N
    a   a, a = -0.0;N
N
#a A_A()                                                            \N
    a ((a = a(a)) > a) {                                               \N
        a = a;                                                               \N
        aAa = a;                                                       \N
    }N
N
    a[0] = 0.0; // +a aN
    A_A();N
N
    a[0] = -0.0; // -a aN
    A_A();N
    a[0] = 0.0;N
N
    a[0] = 0.0; // +a aN
    A_A();N
N
    a[0] = -0.0; // -a aN
    A_A();N
    a[0] = 0.0;N
N
    a[0] = 0.0; // +a aN
    A_A();N
N
    a[0] = -0.0; // -a aN
    A_A();N
N
#a A_AN
N
    a aAa;N
}N
N
//////////////////////////////////////////////////////////////////////////////N
//N
// Aa0a aN
//N
//////////////////////////////////////////////////////////////////////////////N
N
//N
// Aa a (a) a a a a a aN
//N
N
aN
AaAa0a::a(a AaAa0a &a) a {N
    a (a[0] * a.a[0] + a[0] * a.a[0] + a[0] * a.a[0]);N
}N
N
//N
// Aa 0 a aN
//N
N
aN
AaAa0a::aAa(a &a, a &a, a &a) a {N
    a = a[0];N
    a = a[0];N
    a = a[0];N
}N
N
//N
// Aa a a a a a aN
//N
N
aN
AaAa0a::a() {N
    a[0] = -a[0];N
    a[0] = -a[0];N
    a[0] = -a[0];N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] *= a;N
    a[0] *= a;N
    a[0] *= a;N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a+=(AaAa0a a) {N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a-=(AaAa0a a) {N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
N
    a *a;N
}N
N
//N
// Aa a a - a a a aN
//N
N
AaAa0aN
AaAa0a::a-() a {N
    a AaAa0a(-a[0], -a[0], -a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] * a, a.a[0] * a, a.a[0] * a);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a+(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] + a0.a[0], a0.a[0] + a0.a[0],N
                   a0.a[0] + a0.a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a-(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] - a0.a[0], a0.a[0] - a0.a[0],N
                   a0.a[0] - a0.a[0]);N
}N
N
//N
// Aa a a. Aa a a a.N
//N
N
aN
a==(a AaAa0a &a0, a AaAa0a &a0) {N
    a (a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0] &&N
            a0.a[0] == a0.a[0]);N
}N
N
//////////////////////////////////////////////////////////////////////////////N
//N
// Aa0a aN
//N
//////////////////////////////////////////////////////////////////////////////N
N
//N
// Aa a (a) a a a a a aN
//N
N
a0_aN
AaAa0a::a(a AaAa0a &a) a {N
    a a[0] * a.a[0] + a[0] * a.a[0];N
}N
N
//N
// Aa 0 a aN
//N
N
aN
AaAa0a::aAa(a &a, a &a) a {N
    a = a[0];N
    a = a[0];N
}N
N
//N
// Aa a a a a a aN
//N
N
aN
AaAa0a::a() {N
    a[0] = -a[0];N
    a[0] = -a[0];N
}N
N
//N
// Aa a a a a a a 0 aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a a[0]) {N
    a[0] = a[0];N
    a[0] = a[0];N
N
    a (*a);N
}N
N
//N
// Aa a a a a 0 a aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a, a a) {N
    a[0] = a;N
    a[0] = a;N
N
    a (*a);N
}N
N
//N
// Aa-a a a aN
//N
// Aa: a'a a a a a a a a !N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] *= a;N
    a[0] *= a;N
N
    a *a;N
}N
N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] = a(a[0] * a);N
    a[0] = a(a[0] * a);N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a/=(a a) {N
    a[0] /= a;N
    a[0] /= a;N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a+=(a AaAa0a &a) {N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a-=(a AaAa0a &a) {N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
N
    a *a;N
}N
N
//N
// Aa a a - a a a aN
//N
N
AaAa0aN
AaAa0a::a-() a {N
    a AaAa0a(-a[0], -a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] * a, a.a[0] * a);N
}N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a(a.a[0] * a), a(a.a[0] * a));N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a/(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] / a, a.a[0] / a);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a+(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] + a0.a[0], a0.a[0] + a0.a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a-(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] - a0.a[0], a0.a[0] - a0.a[0]);N
}N
N
//N
// Aa a aN
//N
N
aN
a==(a AaAa0a &a0, a AaAa0a &a0) {N
    a (a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0]);N
}N
N
//////////////////////////////////////////////////////////////////////////////N
//N
// Aa0a aN
//N
//////////////////////////////////////////////////////////////////////////////N
N
//N
// Aa a (a) a a a a a aN
//N
N
aN
AaAa0a::a(a AaAa0a &a) a {N
    a a[0] * a.a[0] + a[0] * a.a[0];N
}N
N
//N
// Aa 0 a aN
//N
N
aN
AaAa0a::aAa(a &a, a &a) a {N
    a = a[0];N
    a = a[0];N
}N
N
//N
// Aa a a a aN
//N
N
aN
AaAa0a::a() a {N
    a a::a(a[0] * a[0] + a[0] * a[0]);N
}N
N
//N
// Aa a a a a a aN
//N
N
aN
AaAa0a::a() {N
    a[0] = -a[0];N
    a[0] = -a[0];N
}N
N
//N
// Aa a a a a aN
//N
N
aN
AaAa0a::a() {N
    a a = a();N
N
    a (a != 0.0)N
        (*a) *= (0.0 / a);N
N
    aN
        aAa(0.0, 0.0);N
N
    a a;N
}N
N
//N
// Aa a a a a a a 0 aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a a[0]) {N
    a[0] = a[0];N
    a[0] = a[0];N
N
    a (*a);N
}N
N
//N
// Aa a a a a 0 a aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a, a a) {N
    a[0] = a;N
    a[0] = a;N
N
    a (*a);N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] *= a;N
    a[0] *= a;N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a+=(a AaAa0a &a) {N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a-=(a AaAa0a &a) {N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
N
    a *a;N
}N
N
//N
// Aa a a - a a a aN
//N
N
AaAa0aN
AaAa0a::a-() a {N
    a AaAa0a(-a[0], -a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] * a, a.a[0] * a);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a+(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] + a0.a[0], a0.a[0] + a0.a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a-(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] - a0.a[0], a0.a[0] - a0.a[0]);N
}N
N
//N
// Aa a a. Aa a a a.N
//N
N
aN
a==(a AaAa0a &a0, a AaAa0a &a0) {N
    a (a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0]);N
}N
N
//N
// Aa a a a a a.N
//N
N
AaAaN
AaAa0a::a(a AaAa0a a, a a) a {N
    AaAa0a a = *a - a;N
N
    a a.a(a) <= a;N
}N
N
//////////////////////////////////////////////////////////////////////////////N
//N
// Aa0a aN
//N
//////////////////////////////////////////////////////////////////////////////N
N
//N
// Aa a (a) a a a a a aN
//N
N
aN
AaAa0a::a(a AaAa0a &a) a {N
    a a[0] * a.a[0] + a[0] * a.a[0] + a[0] * a.a[0] +N
           a[0] * a.a[0];N
}N
N
//N
// Aa 0 a aN
//N
N
aN
AaAa0a::aAa(a &a, a &a, a &a, a &a) a {N
    a = a[0];N
    a = a[0];N
    a = a[0];N
    a = a[0];N
}N
N
//N
// Aa a a a aN
//N
N
aN
AaAa0a::a() a {N
    a a::a(a[0] * a[0] + a[0] * a[0] + a[0] * a[0] +N
                     a[0] * a[0]);N
}N
N
//N
// Aa a a a a a aN
//N
N
aN
AaAa0a::a() {N
    a[0] = -a[0];N
    a[0] = -a[0];N
    a[0] = -a[0];N
    a[0] = -a[0];N
}N
N
//N
// Aa a a a a aN
//N
N
aN
AaAa0a::a() {N
    a a = a();N
N
    a (a != 0.0)N
        (*a) *= (0.0 / a);N
N
    aN
        aAa(0.0, 0.0, 0.0, 0.0);N
N
    a a;N
}N
N
//N
// Aa a a a a a a 0 aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a a[0]) {N
    a[0] = a[0];N
    a[0] = a[0];N
    a[0] = a[0];N
    a[0] = a[0];N
N
    a (*a);N
}N
N
//N
// Aa a a a a 0 a aN
//N
N
AaAa0a &N
AaAa0a::aAa(a a, a a, a a, a a) {N
    a[0] = a;N
    a[0] = a;N
    a[0] = a;N
    a[0] = a;N
N
    a (*a);N
}N
N
//N
// Aa a a a a a a a a a a aN
// a a a a.N
//N
N
aN
AaAa0a::aAa(AaAa0a &a) a {N
    a[0] = a[0] / a[0];N
    a[0] = a[0] / a[0];N
    a[0] = a[0] / a[0];N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a*=(a a) {N
    a[0] *= a;N
    a[0] *= a;N
    a[0] *= a;N
    a[0] *= a;N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a+=(a AaAa0a &a) {N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
    a[0] += a.a[0];N
N
    a *a;N
}N
N
//N
// Aa-a a a aN
//N
N
AaAa0a &N
AaAa0a::a-=(a AaAa0a &a) {N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
    a[0] -= a.a[0];N
N
    a *a;N
}N
N
//N
// Aa a a - a a a aN
//N
N
AaAa0aN
AaAa0a::a-() a {N
    a AaAa0a(-a[0], -a[0], -a[0], -a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0a a*(a AaAa0a &a, a a) {N
    a AaAa0a(a.a[0] * a, a.a[0] * a, a.a[0] * a, a.a[0] * a);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a+(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] + a0.a[0], a0.a[0] + a0.a[0],N
                   a0.a[0] + a0.a[0], a0.a[0] + a0.a[0]);N
}N
N
//N
// Aa-a a a a aN
//N
N
AaAa0aN
a-(a AaAa0a &a0, a AaAa0a &a0) {N
    a AaAa0a(a0.a[0] - a0.a[0], a0.a[0] - a0.a[0],N
                   a0.a[0] - a0.a[0], a0.a[0] - a0.a[0]);N
}N
N
//N
// Aa a a. Aa a a a.N
//N
N
aN
a==(a AaAa0a &a0, a AaAa0a &a0) {N
    a (a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0] &&N
            a0.a[0] == a0.a[0] && a0.a[0] == a0.a[0]);N
}N
N
//N
// Aa a a a a a.N
//N
N
AaAaN
AaAa0a::a(a AaAa0a a, a a) a {N
    AaAa0a a = *a - a;N
N
    a a.a(a) <= a;N
}N
