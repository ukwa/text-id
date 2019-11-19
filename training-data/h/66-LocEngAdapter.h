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
#a <a.a>N
#a <a/a.a>N
#a <a.a>N
#a <a_a_a.a>N
#a <a_a.a>N
#a <AaAaAa.a>N
#a <AaAaAa.a>N
#a <AaAaAa.a>N
#a <a_a_a.a>N
N
#a A_A_A 0N
N
a a a_a;N
N
a AaAaAa;N
N
a AaAaAa : a AaAaAa {N
    AaAaAa* aAaAaAa;N
a:N
    AaAaAa(AaAaAa* a);N
N
    a a aAa(AaAa &a,N
                                AaAaAa &aAa,N
                                a* aAa,N
                                a a_a_a a,N
                                AaAaAaAa a_a_a);N
    a a aAa(AaAaAa &aAa,N
                          AaAaAa &aAa,N
                          a* aAa);N
    a a aAa(AaAaAa a);N
    a a aAaAaAa(AaAaAa& aAa);N
    a a aAaAa();N
    a a aAaAa();N
    a a aAaAa();N
    a a aAaAa(AaAaAa* a);N
};N
N
a a (*a_a_a)(a* a_a_a_a, a* a);N
N
a AaAaAa : a AaAaAa {N
    a* aAa;N
    AaAaAa* aAaAa;N
    AaAaAa* aAa;N
    AaAaAa aAaAa;N
    a aAa;N
    // aAaAa a a aN
    // aAaAa & 0a0 -- aAaAaN
    // aAaAa & 0a0 -- a Aa / AaN
    a a aAaAa;N
    a a a a A_A_A = 0a0;N
    a a a a A_A_A = 0a0;N
N
a:N
    a aAaAaAa;N
    a aAaAaAa;N
    a aAaAaAa;N
N
    AaAaAa(A_A_A_A_A_A a,N
                  a* a, AaAa* a,N
                  AaAa::aAa aAa);N
    a ~AaAaAa();N
N
    a a aAaAa(AaAaAa* a);N
    a aAaAaAa();N
    a a aAa(a a a) {N
        aAa->aAa(aAaAa, a);N
    }N
    a AaAaAa* aAaAa() { a aAaAa; }N
    a AaAaAa* aAaAa() { a aAa; }N
    a a* aAa() { a aAa; }N
    a a aAaAaAa() {N
        a aAa->aAaAaAa();N
    }N
    a a aAaAa() {N
        a aAa->aAaAa();N
    }N
    a a AaAa* aAaAa() { a aAaAa; }N
N
    a a a_a_a_aN
        aAa()N
    {N
        a aAaAa->aAa(aAaAa);N
    }N
    a a a_a_a_aN
        aAa()N
    {N
        a aAaAa->aAa();N
    }N
    a a a_a_a_aN
        aAaAa(AaAaAa a)N
    {N
        a aAaAa->aAaAa(a);N
    }N
    a a a_a_a_aN
        aAa(a a)N
    {N
        a aAaAa->aAa(a);N
    }N
    a a a_a_a_aN
        aA(a* a, a a)N
    {N
        a aAaAa->aA(a, a);N
    }N
    a a a_a_a_aN
        aAa(a a, a a, a a)N
    {N
        a aAaAa->aAa(a, a, a);N
    }N
    a a a_a_a_aN
        aAaAa(a* a, a a)N
    {N
        a aAaAa->aAaAa(a, a);N
    }N
    a a a_a_a_aN
        aAaAa()N
    {N
        a aAaAa->aAaAa();N
    }N
    a a a_a_a_aN
        aAaAa(a a, a a_a, a* a, AaAaAa a, AaAa aAa)N
    {N
        a aAaAa->aAaAa(a, a_a, a, a, aAa);N
    }N
    a a a_a_a_aN
        aAaAa(a a, a a_a)N
    {N
        a aAaAa->aAaAa(a, a_a);N
    }N
    a a a_a_a_aN
        aAaAa(a AaAaAa *aAa)N
    {N
        a (A != aAa) {N
            aAaAa = *aAa;N
        }N
        a aAaAa->aAaAa(aAaAa);N
    }N
    a a a_a_a_aN
        aAa(a a* a, a a)N
    {N
        a aAaAa->aAa(a, a);N
    }N
    a a a_a_a_aN
        aAa(a a a, a a,N
                  AaAaAa a)N
    {N
        a aAaAa->aAa(a, a, a);N
    }N
    a a a_a_a_aN
        aAaAa(AaAaAaAa aAa, a a* aAaAa)N
    {N
        a aAaAa->aAaAa(aAa, aAaAa);N
    }N
    a a a_a_a_aN
        aAa(a0_a a)N
    {N
        a aAaAa->aAa(a);N
    }N
    a a a_a_a_aN
        aAa(a0_a a)N
    {N
        a aAaAa->aAa(a);N
    }N
    a a a_a_a_aN
        aAaAaAa(a aAa, a aAa)N
    {N
        a aAaAa->aAaAaAa(aAa, aAa);N
    }N
    a a a_a_a_aN
        aAaAa(a aAaAaAaAa_a, a aAaAaAaAa,N
                            a aAaAaAaAa_a, a aAaAaAaAa,N
                            a aAaAaAaAa_a, a aAaAaAaAa,N
                            a aAaAaAaAa_a, a aAaAaAaAa,N
                            a aAaAaAaAa_a, a aAaAaAaAa)N
    {N
        a aAaAa->aAaAa(aAaAaAaAa_a, aAaAaAaAa,N
                                           aAaAaAaAa_a, aAaAaAaAa,N
                                           aAaAaAaAa_a, aAaAaAaAa,N
                                           aAaAaAaAa_a, aAaAaAaAa,N
                                           aAaAaAaAa_a, aAaAaAaAa);N
    }N
    a a a a_a_a_aN
        aAaAaAaAa(a aAa, a aAaAaAa, a aAaAaAa,N
                            a aAaAaAa, a aAaAaAa,N
                            a aAaAaAaAa, a aAaAaAaAa,N
                            a aAaAaAaAa, a aAaAaAaAa, a aAa)N
    {N
        a aAaAa->aAaAaAaAa(aAa, aAaAaAa, aAaAaAa,N
                                                  aAaAaAa, aAaAaAa,N
                                                  aAaAaAaAa, aAaAaAaAa,N
                                                  aAaAaAaAa, aAaAaAaAa,N
                                                  aAa);N
    }N
    a a a a_a_a_aN
        aAaAaAa(a aAaAa)N
    {N
        a aAaAa->aAaAaAa(aAaAa);N
    }N
    a a a a_a_a_aN
        aAa(a a aAaAa)N
    {N
        a aAaAa->aAa(aAaAa);N
    }N
    a a a aAaAaAa()N
    {N
        a aAaAa->aAaAaAa();N
    }N
    a a a aAaAaAaAa()N
    {N
        a aAaAa->aAaAaAaAa();N
    }N
    a a a aAaAa()N
    {N
        aAaAa->aAaAa();N
    }N
    a a a aAaAa()N
    {N
        aAaAa->aAaAa();N
    }N
    a a a_a_a_aN
        aAa(AaAa &aAa, AaAaAaAa &a_a)N
    {N
        a aAaAa->aAaAaAaAa(aAa, a_a);N
    }N
    a a_a_a_a aAa(AaAaAa a,N
                                     a0_a aAa,N
                                     a a);N
    a a_a_a_a aAaAaAa(a a);N
    a a a aAaAa(a AaAaAa* aAa,N
                                        a_a a,N
                                        a0_a aAaAa)N
    {N
        aAaAa->aAaAa(aAa, a, aAaAa);N
    }N
    a a aAaAaAa();N
    a a aAaAaAa();N
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
    a a aA(a aAa, AaAa a_a);N
    a a aA(a aAa);N
    a a aAaAa(AaAaAa &a, a a* a);N
    a a aAaA(a aAa);N
    a a aAaAaAa();N
    a a aAaAaAa();N
    a a aAaAaAa(AaAa &aAaAa);N
N
    a a AaAaAa& aAaAa() aN
    {a aAaAa;}N
    a a a aAaAa()N
    { a aAa; }N
    a aAaAa(a aAa);N
N
    // Aa/a a aN
    a a aAaAaAa(a aAaAa) {N
        aAaAa = aAaAa ? (aAaAa | A_A_A) :N
                                      (aAaAa & ~A_A_A);N
    }N
    a a aAaAaAa() a {N
        a (aAaAa & A_A_A) != 0 ;N
    }N
    // Aa a a a a/a a a a a a aN
    a a aAaAa(a aAa) {N
        aAaAa = aAa ? (aAaAa | A_A_A) :N
                               (aAaAa & ~A_A_A);N
        aAaAa();N
        aAa->aAaAa(aAa);N
    }N
    a a aAaAa() a {N
        a (aAaAa & A_A_A) != 0 ;N
    }N
    // Aa a a a a a a a aN
    a aAaAa();N
N
    /*Aa a aN
      0 = Aa a a a a aN
      0 = Aa A a aN
      0 = Aa A a aN
      0 = Aa a a aN
    */N
    a a aAaAa(A_A_A_A a)N
    {N
        a aAaAa->aAaAa(a);N
    }N
N
    a aAaAaAa(A_A_A_A a);N
N
    /*N
      AaN
      Aa a a A a a aN
      -0 a aN
     */N
    a a aAaAa()N
    {N
        a aAaAa->aAaAa();N
    }N
N
    /*N
      Aa Aa AaN
     */N
    a aAaAa(A_A_A_A_A_A a,N
                                a_a_a_a aAa);N
N
    /*N
      Aa Aa Aa AaN
     */N
    a aAaAa();N
};N
N
#a //A_A_A_A_AN
