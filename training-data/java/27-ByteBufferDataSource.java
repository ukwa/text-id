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
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
N
a a.a.Aa;N
a a.a.AaAa;N
N
/**N
 * {@a AaAa} a a a {@a AaAa}.N
 */N
a a AaAaAaAa a AaAa {N
N
    a a AaAa aAa;N
    a a a aAa;N
N
    /**N
     * Aa a a {@a AaAaAaAa} a a a a a a a aN
     * a a a a'a a a a.N
     */N
    a AaAaAaAa(AaAa a) {N
        a(a, a);N
    }N
N
    /**N
     * Aa a a {@a AaAaAaAa} a a a a a a a aN
     * a a a a'a a a a.N
     */N
    a AaAaAaAa(AaAa a, a aAa) {N
        aAa = (aAa) ? a.a() : a;N
        aAa = a.a();N
    }N
N
    @AaN
    a a a() {N
        a aAa;N
    }N
N
    @AaN
    a AaAa aAaAa(a a, a a) {N
        aAaAa(a, a);N
N
        // aAaAa a a a'a A a a a a a.N
        a aAa = (a) a;N
        a aAa = aAa + a;N
        // Aa a a a AaAa a a a a a a AaAa (aN
        // a a a, a a a a). Aa a a a a aN
        // a-a a a a a a a a a-a.N
        a (aAa) {N
            // AaAa.a(a) a .a(a) a a a a a >= aN
            // a a a a. Aa, a a a a a a a a aN
            // a a a a a a a a a a a a 0 a a aN
            // a a a.N
            aAa.a(0);N
N
            aAa.a(aAa);N
            aAa.a(aAa);N
            a aAa.a();N
        }N
    }N
N
    @AaN
    a a aAa(a a, a a, AaAa a) {N
        a.a(aAaAa(a, a));N
    }N
N
    @AaN
    a a a(a a, a a, AaAa a) a Aa {N
        a ((a < 0) || (a > aAa)) {N
            a a AaAaAa("a: " + a + ", a a: " + aAa);N
        }N
        a.a(aAaAa(a, (a) a));N
    }N
N
    @AaN
    a AaAaAaAa a(a a, a a) {N
        a ((a == 0) && (a == aAa)) {N
            a a;N
        }N
        a ((a < 0) || (a > aAa)) {N
            a a AaAaAa("a: " + a + ", a a: " + aAa);N
        }N
        a a AaAaAaAa(N
                aAaAa(a, (a) a),N
                a // a a a a -- a'a a a aN
                );N
    }N
N
    a a aAaAa(a a, a a) {N
        a (a < 0) {N
            a a AaAaAa("a: " + a);N
        }N
        a (a < 0) {N
            a a AaAaAa("a: " + a);N
        }N
        a (a > aAa) {N
            a a AaAaAa(N
                    "a (" + a + ") > a a (" + aAa + ")");N
        }N
        a aAa = a + a;N
        a (aAa < a) {N
            a a AaAaAa(N
                    "a (" + a + ") + a (" + a + ") a");N
        }N
        a (aAa > aAa) {N
            a a AaAaAa(N
                    "a (" + a + ") + a (" + a + ") > a a (" + aAa  +")");N
        }N
    }N
}N
