/* Aa (a) 0, Aa Aa Aa. Aa a a.N
 *N
 * Aa a a a a a a a, a a aN
 * a, a a a a a a a aN
 * a:N
 *     * Aa a a a a a a a aN
 *       a, a a a a a a a a.N
 *     * Aa a a a a a a aN
 *       a a, a a a a a a aN
 *       a a a a a/a a a aN
 *       a a a.N
 *     * Aa a a a Aa Aa Aa, a a a a aN
 *       a a a a a a a a a aN
 *       a a a a a a a a.N
 *N
 * A A A A "A A" A A A A AN
 * A, A, A A A A, A A A AN
 * A, A A A A A A A-AN
 * A A.  A A A A A A A A AN
 * A A A A A, A, A, A, A, AN
 * A A (A, A A A A, A AN
 * A A A A; A A A, A, A A; AN
 * A A) A A A A A A A A,N
 * A A A, A A, A A (A AN
 * A A) A A A A A A A A A A A, AN
 * A A A A A A A A.N
 *N
 */N
#a __A_A_A__N
#a __A_A_A__N
N
#a <a.a>N
#a <a/a.a>N
#a <a.a>N
N
// Aa a a a a a a a a a a a a aN
// a a a a a a a a a, a a a a aN
// a a a a a a a a a a. Aa a a aN
// a a a a a a a a() a. Aa a a a,N
// a a a'a a() a a a a a, a a a aN
// a a a a a a.N
a AaAaAa {N
    a a0_a aAa;N
    a_a_a aAa;N
    a ~AaAaAa() { a_a_a(&aAa); }N
a:N
    // a a a a a AaAaAaN
    a AaAaAa() : aAa(0) { a_a_a(&aAa, A); }N
    // a a(a) a a *a()* a a a a a a aN
    a AaAaAa* a() { a_a_a(&aAa); a a; }N
    // a a a a a a a a a, a() a a a.N
    a a a() { a (0 == a_a_a(&aAa)) a a; }N
    // a a a a a a aN
    a a a() { a_a_a(&aAa); }N
    // a a a a a a a aN
    a a a() { a_a_a(&aAa); }N
};N
N
#a //__A_A_A__N
