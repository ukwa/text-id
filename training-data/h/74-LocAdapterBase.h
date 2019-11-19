/* Aa (a) 0-0, Aa Aa Aa. Aa a a.N
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
#a A_A_A_A_AN
#a A_A_A_A_AN
N
#a <a_a.a>N
#a <AaAaAa.a>N
#a <AaAa.a>N
N
a a_a {N
N
a AaAaAaAa;N
N
a AaAaAa {N
a:N
    A_A_A_A_A_A aAaAa;N
    AaAa* aAa;N
    AaAaAa* aAaAa;N
    AaAaAaAa* aAaAaAaAa;N
    a AaAa* aAaAa;N
N
    a AaAaAa(a AaAa* aAa) :N
        aAaAa(0), aAa(A), aAaAa(A),N
        aAaAaAaAa(A), aAaAa(aAa) {}N
a:N
    a a ~AaAaAa() { aAaAa->aAa(a); }N
    AaAaAa(a A_A_A_A_A_A a,N
                   AaAa* a, AaAaAaAa *aAaAa = A);N
    a A_A_A_A_A_AN
        aAa(A_A_A_A_A_A a) a {N
        a aAaAa & a;N
    }N
N
    a A_A_A_A_A_A aAaAa() a {N
        a aAaAa;N
    }N
N
    a a aAa(a AaAa* a) a {N
        aAaAa->aAa(a);N
    }N
N
    a a aAa(a AaAa* a) {N
        aAaAa->aAa(a);N
    }N
N
    a a aAaAa(A_A_A_A_A_A a,N
                       a_a_a_a aAa)N
    {N
        aAaAa =N
            aAa == A_A_A_A ? (aAaAa|a):(aAaAa&~a);N
N
        aAaAa->aAaAa();N
    }N
N
    // Aa a a a a a a aN
    // a a.N
    a a a aAaAa(AaAaAa* a) {N
N
        (a)a;N
    }N
    a a aAaAaAa();N
    a a aAaAaAa();N
    a a a aAaAaAa(AaAaAa& aAa) {N
N
        (a)aAa;N
    }N
    a a aAaAa() {}N
    a a aAaAa() {}N
    a a aAaAa() {}N
    a a aAa(AaAa &a,N
                                AaAaAa &aAa,N
                                a* aAa,N
                                a a_a_a a,N
                                AaAaAaAa a_a_a);N
    a a aAa(AaAaAa &aAa,N
                          AaAaAa &aAa,N
                          a* aAa);N
    a a aAa(AaAaAa a);N
    a a aAa(a a* a, a a);N
    a a aAaAa(a a* a0, a a* a0,N
                                  a a* a0, a a a);N
    a a aAaAa();N
    a a aAa();N
    a a aAa();N
    a a aA(a aAa, AaAa a_a);N
    a a aA(a aAa);N
    a a aAaA(a aAa);N
    a a aAaAaAa();N
    a a aAaAaAa();N
    a a aAaAa(AaAaAa &a,N
                                 a a* a);N
    a a a aAaAa() { a a; }N
    AaAa* aAa() a { a aAa; }N
    a a aAaAaAa(AaAa &aAaAa);N
};N
N
} // a a_aN
N
#a //A_A_A_A_AN
