/*N
 * Aa (A) 0 Aa Aa Aa Aa AaN
 *N
 * Aa a a Aa Aa, Aa 0.0 (a "Aa");N
 * a a a a a a a a a a a Aa.N
 * Aa a a a a a a Aa aN
 *N
 *      a://a.a.a/a/A-0.0N
 *N
 * Aa a a a a a a a a a, aN
 * a a a Aa a a a a "A A" A,N
 * A A A A A A A, a a a a.N
 * Aa a Aa a a a a a a aN
 * a a a Aa.N
 */N
N
a a.a.a.a.a.a;N
N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.AaAa;N
N
a a.a.a.a.a.a.Aa;N
a a.a.a.a.a.AaAa;N
N
/**N
 * Aa A a a.N
 *N
 * <a>A: Aa a a a a {@a AaAa} a a a a aN
 * a a a a a a-a.N
 */N
a a a AaAa {N
    a AaAa() {}N
N
    a a a a A_A_A = 0;N
    a a a a A_A_A = 0;N
N
    a a a a A_A_A_A_A = 0;N
    a a a a A_A_A_A = 0a0a0;N
    a a a a A_A_A_A_A_A_A_A = 0;N
    a a a a A_A_A_A_A_A_A = 0;N
    a a a a A_A_A_A_A_A_A = 0;N
    a a a a A_A_A_A_A_A = 0;N
N
    a a a a A0_A_A_A = 0;N
    a a a a A0_A_A_A = 0a0a0;N
N
    a a a a A0_A_A = 0a;N
N
    /**N
     * Aa a a a a a a a A Aa Aa a a a.N
     *N
     * <a>A: Aa a a {@a aAaAaAaAa} a a a-a.N
     */N
    a a a aAaAaAaAaAa(N
            AaAa aAaAaAaAa, a a) {N
        aAaAaAaAa(aAaAaAaAa);N
        aAaAa0(N
                aAaAaAaAa,N
                aAaAaAaAa.a() + A_A_A_A_A_A_A,N
                a);N
    }N
N
    /**N
     * Aa a a a a a a a A Aa Aa a a a.N
     *N
     * <a>A: Aa a a {@a aAaAaAaAa} a a a-a.N
     */N
    a a a aAaAaAaAaAa(AaAa aAaAaAaAa) {N
        aAaAaAaAa(aAaAaAaAa);N
        a aAaAa0(N
                aAaAaAaAa,N
                aAaAaAaAa.a() + A_A_A_A_A_A_A);N
    }N
N
    /**N
     * Aa a a (a a) a a A Aa Aa.N
     *N
     * <a>A: Aa a a {@a aAaAaAaAa} a a a-a.N
     */N
    a a a aAaAaAaAaAaAa(AaAa aAaAaAaAa) {N
        aAaAaAaAa(aAaAaAaAa);N
        a aAaAa0(N
                aAaAaAaAa,N
                aAaAaAaAa.a() + A_A_A_A_A_A_A);N
    }N
N
    /**N
     * Aa a a a a a a A Aa Aa.N
     *N
     * <a>A: Aa a a {@a aAaAaAaAa} a a a-a.N
     */N
    a a a aAaAaAaAaAaAaAa(N
            AaAa aAaAaAaAa) {N
        aAaAaAaAa(aAaAaAaAa);N
        a aAaAa0(N
                aAaAaAaAa,N
                aAaAaAaAa.a()N
                        + A_A_A_A_A_A_A_A);N
    }N
N
    /**N
     * Aa a A Aa a Aa Aa a a a a A a.N
     *N
     * @a a a a A Aa a Aa Aa a a a a'a a a aN
     *         a a {@a a} a a a a a a a a.N
     *N
     * @a Aa a a A/A a a a a a a.N
     */N
    a a Aa<AaAa, Aa> aAaAaAaAaAaAa(AaAa a)N
            a Aa {N
        // A Aa a Aa Aa (A) a a a a a a a a a A a.N
        // Aa a a a a a a 0-a a/a a a a a a aN
        // a a a a. A a a a a a a a-a a aN
        // a a a.N
        // Aa a a a a A A a a a a. Aa a a aN
        // a a a a a a A a a. Aa a a a a, a aN
        // a a a'a a a a a a a a a a a a aN
        // a a a a a a a. Aa a a a a a aN
        // a a a a a a 0 a a a a a a a 0-a a.N
N
        a aAa = a.a();N
        a (aAa < A_A_A_A_A) {N
            a a;N
        }N
N
        // Aa: 0.0% a Aa a a a-a a a a a AaA a a aN
        // a AaA a a a a a a. Aa a a a a a aN
        // a a a.N
        Aa<AaAa, Aa> a = aAaAaAaAaAaAa(a, 0);N
        a (a != a) {N
            a a;N
        }N
N
        // AaA a a a a a a a a. Aa a a a a-a aN
        // a. Aa a a. Aa a a a a a a a AaA a 0 aN
        // a a a a a a a 0-a a.N
        a aAaAaAaAaAaAa(a, A0_A_A);N
    }N
N
    /**N
     * Aa a A Aa a Aa Aa a a a a A a.N
     *N
     * @a aAaAa a a a (a a) a AaA a a. Aa aN
     *        a a a 0 a 0 a. Aa a a a, a a a aN
     *        a a a, a a a a a a a a a a.N
     *N
     * @a a a a A Aa a Aa Aa a a a a'a a a aN
     *         a a {@a a} a a a a a a a a.N
     *N
     * @a Aa a a A/A a a a a a a.N
     */N
    a a Aa<AaAa, Aa> aAaAaAaAaAaAa(N
            AaAa a, a aAaAa) a Aa {N
        // A Aa a Aa Aa (A) a a a a a a a a a A a.N
        // Aa a a a a a a 0-a a/a a a a a a aN
        // a a a a. A a a a a a a a-a a aN
        // a a a.N
        // Aa a a a a A A a a a a. Aa a a aN
        // a a a a a a A a a. Aa a a a a, a aN
        // a a a'a a a a a a a a a a a a aN
        // a a a a a a a. Aa a a a a a aN
        // a a a a a a 0 a a a a a a a 0-a a.N
N
        a ((aAaAa < 0) || (aAaAa > A0_A_A)) {N
            a a AaAaAa("aAaAa: " + aAaAa);N
        }N
N
        a aAa = a.a();N
        a (aAa < A_A_A_A_A) {N
            // Aa a a AaA a a a a.N
            a a;N
        }N
        // Aa aAaAa a a a a a a.N
        aAaAa = (a) Aa.a(aAaAa, aAa - A_A_A_A_A);N
N
        a aAaAa = A_A_A_A_A + aAaAa;N
        a aAaAaAa = aAa - aAaAa;N
        AaAa a = a.aAaAa(aAaAaAa, aAaAa);N
        a.a(AaAa.A_A);N
        a aAaAaAa = aAaAaAaAaAaAa(a);N
        a (aAaAaAa == -0) {N
            // Aa AaA a a a a aN
            a a;N
        }N
        // AaA aN
        a.a(aAaAaAa);N
        AaAa a = a.a();N
        a.a(AaAa.A_A);N
        a Aa.a(a, aAaAaAa + aAaAaAa);N
    }N
N
    /**N
     * Aa a a a a A Aa a Aa Aa a a a a aN
     * a a {@a -0} a a a a a a.N
     *N
     * <a>A: Aa a a {@a aAa} a a a-a.N
     */N
    a a a aAaAaAaAaAaAa(AaAa aAa) {N
        aAaAaAaAa(aAa);N
N
        // A Aa a Aa Aa (A) a a a a a a a a a A a.N
        // Aa a a a a a a 0-a a/a a a a a a aN
        // a a a a. A a a a a a a a-a a aN
        // a a a.N
        // Aa a a a a A A a a a a. Aa a a aN
        // a a a a a a A a a. Aa a a a a, a aN
        // a a a'a a a a a a a a a a a a aN
        // a a a a a a a. Aa a a a a a aN
        // a a a a a a 0 a a a a a a a 0-a a.N
N
        a aAa = aAa.a();N
        a (aAa < A_A_A_A_A) {N
            a -0;N
        }N
        a aAaAa = Aa.a(aAa - A_A_A_A_A, A0_A_A);N
        a aAaAaAaAaAa = aAa - A_A_A_A_A;N
        a (a aAaAa = 0; aAaAa < aAaAa;N
                aAaAa++) {N
            a aAaAa = aAaAaAaAaAa - aAaAa;N
            a (aAa.aAa(aAaAa) == A_A_A_A) {N
                a aAaAa =N
                        aAaAa0(N
                                aAa, aAaAa + A_A_A_A_A_A);N
                a (aAaAa == aAaAa) {N
                    a aAaAa;N
                }N
            }N
        }N
N
        a -0;N
    }N
N
    /**N
     * Aa {@a a} a a a a a a A0 Aa a Aa AaN
     * Aa.N
     *N
     * @a aAaAaAaAaAa a a a A Aa a Aa Aa aN
     *        a a a.N
     *N
     * @a Aa a a A/A a a a a a a aN
     */N
    a a a a aAa0AaAaAaAaAaAa(N
            AaAa a, a aAaAaAaAaAa) a Aa {N
N
        // A0 Aa a Aa Aa Aa a a a A Aa a AaN
        // Aa Aa.N
        a aAa = aAaAaAaAaAa - A0_A_A_A;N
        a (aAa < 0) {N
            a a;N
        }N
N
        AaAa a = a.aAaAa(aAa, 0);N
        a.a(AaAa.A_A);N
        a a.aAa(0) == A0_A_A_A;N
    }N
N
    a a a aAaAaAaAa(AaAa a) {N
        a (a.a() != AaAa.A_A) {N
            a a AaAaAa("AaAa a a a a a a");N
        }N
    }N
N
    a a a aAaAa0(AaAa a, a a) {N
        a a.aAa(a) & 0a;N
    }N
N
    a a a aAaAa0(AaAa a, a a, a a) {N
        a ((a < 0) || (a > 0aA)) {N
            a a AaAaAa("a0 a a a a: " + a);N
        }N
        a.aAa(a, (a) a);N
    }N
N
    a a a aAaAa0(AaAa a, a a) {N
        a a.aAa(a) & 0aA;N
    }N
}