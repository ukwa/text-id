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
a a.a.a.a.a.a.a0;N
N
a a.a.AaAaAaAa;N
a a.a.AaAaAaAa;N
a a.a.Aa;N
a a.a.AaAaAa;N
a a.a.AaAa;N
a a.a.AaAaAaAa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.a.AaAaAa;N
a a.a.a.A0Aa;N
a a.a.AaAa;N
a a.a.Aa0;N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.Aa;N
a a.a.Aa;N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.a.Aa;N
a a.a.a.Aa;N
N
a a.a.a0.A0AaAa;N
a a.a.a0.A0AaAa;N
a a.a.a0.Aa;N
a a.a.a0.AaAa;N
a a.a.a0.a0.AaAa;N
a a.a.a0.a0.A0AaAa;N
a a.a.a.a.AaAaAa;N
a a.a.a.a.AaA0AaAa;N
a a.a.a.Aa;N
a a.a.a.AaAaAa;N
a a.a.a.AaAaAaAa;N
a a.a.a.AaAa;N
a a.a.a.AaAaAa;N
a a.a.a.AaAaAaAaAa;N
a a.a.a.AaAaAaAa;N
a a.a.a.AaAa;N
a a.a.a.AaAaAa;N
a a.a.a.a.AaAaAaAa;N
a a.a.a.a.AaAaAaAaAa;N
N
a a.a.a.a.a.a.AaAa;N
a a.a.a.a.a.a.AaAaAa;N
a a.a.a.a.a.a.Aa;N
N
/**N
 * A a a a A a (a a0 a a).N
 *N
 * @a <a a="a://a.a.a/a/0/a/a/a/a/a.a#Aa_A_Aa">Aa A Aa</a>N
 */N
a a a A0AaAa {N
N
    a a a Aa A_A_A = "A-A/A.A";N
N
    a a a Aa.Aa A_A_A_A =N
            a Aa.Aa("Aa-Aa");N
    a a a Aa A_A_A_A_A = "0.0 (Aa a)";N
    a a a Aa A_A_A_A = "0.0";N
    a a a Aa A_A_A_A = "0.0";N
N
    a a a Aa.Aa A_A_A_A_A_A_A =N
            a Aa.Aa("A-Aa-A-Aa");N
N
    /**N
     * Aa a.N
     */N
    a a a AaAa {N
        /** Aa. */N
        a Aa a;N
N
        /** Aa a. */N
        a AaAa aAa;N
N
        /**N
         * Aa, a a a a a a a a a aN
         * {@a #aAa}.N
         */N
        a Aa<A0Aa> a;N
N
        /**N
         * Aa a a a a a.N
         */N
        a AaAa aAaAa;N
N
        /**N
         * Aa a a a a a A a a A.A.N
         */N
        a AaAa aAaAa;N
    }N
N
    /** Aa a a a a. */N
    a A0AaAa() {}N
N
    /**N
     * Aa a A a a a a a a a a a A a a a a.N
     *N
     * @a aAaAa a A Aa a a a a a a A a a a (aN
     *        AaAa.a aAaAa a)N
     *N
     * @a AaAaAa a a a a a a a a a Aa aN
     *         A a (a a0 a a)N
     */N
    a a AaAa aAaAaAaAa(N
            AaAa aAa, a aAaAa) a AaAaAa {N
        Aa aAa = aAa.aAa();N
        a ("A".aAaAa(aAa)) {N
            // Aa a A Aa 0, a A-0 a a a a A.N
            a (aAaAa < 0) {N
                a AaAa.A0;N
            }N
            a AaAa.A0;N
        } a a ("A".aAaAa(aAa)) {N
            // Aa a A Aa 0, a A-0 a a a a AN
            a (aAaAa < 0) {N
                a AaAa.A0;N
            } a {N
                a AaAa.A0;N
            }N
        } a a ("A".aAaAa(aAa)) {N
            a (aAaAa < 0) {N
                a a AaAaAa(N
                        "A a a a a aAaAa 0 a a");N
            }N
            // Aa a A Aa 0, a A-0 a a a a AN
            a (aAaAa < 0) {N
                a AaAa.A0;N
            } a {N
                a AaAa.A0;N
            }N
        } a {N
            a a AaAaAa("Aa a a: " + aAa);N
        }N
    }N
N
    /**N
     * Aa a A a a a a a a a A a a.N
     *N
     * @a aAaAa a A Aa a a a a a a A a a a (aN
     *        AaAa.a aAaAa a)N
     */N
    a a AaAa aAaAaAaAa(a aAaAa) {N
        a (aAaAa >= 0) ? AaAa.A0 : AaAa.A0;N
    }N
N
    /**N
     * Aa a a {@a AaAa} a a a a a a a.N
     */N
    a a AaAa aAaAaAa(AaAa aAa) {N
        Aa aAa = aAa.aAaAaAaAa();N
        a {N
            a AaAa.aAa(aAa);N
        } a (AaAaAaAa a) {N
            a a AaAa("Aa a a " + aAa + " AaAa", a);N
        }N
    }N
N
    /**N
     * Aa a A {@a AaAa} a a a a a aN
     * a.N
     */N
    a a Aa aAaAaAaAa(AaAa aAa) {N
        a aAa.aAaAaAaAa();N
    }N
N
    /**N
     * Aa {@a a} a a a A a a a a a a A a'aN
     * a.N
     */N
    a a a aAaAaAaAaAaAa(Aa aAa) {N
        // Aa a://a.a.a/a/0/a/a/a/a/a.a#Aa_A_AaN
N
        // Aa a a A-A a a a a a a.N
        a (!aAa.aAa("A-A/")) {N
            a a;N
        }N
        // Aa a a a A-A a a a a a a.N
        a (aAa.aAa('/', "A-A/".a()) != -0) {N
            a a;N
        }N
N
        // Aa a a (a-a) a A-A a:N
        //   A.AN
        //   *.AN
        //   *.AN
        //   *.AN
        //   *.AN
        //   A-*N
        Aa aAaAaAa =N
                aAa.a("A-A/".a()).aAaAa(Aa.A);N
        a (("a.a".a(aAaAaAa))N
                || (aAaAaAa.aAa(".a"))N
                || (aAaAaAa.aAa(".a"))N
                || (aAaAaAa.aAa(".a"))N
                || (aAaAaAa.aAa(".a"))N
                || (aAaAaAa.aAa("a-"))) {N
            a a;N
        }N
        a a;N
    }N
N
    /**N
     * Aa a a A a A a (a a0 a a) a a a a aN
     * A a a a a a a a a A a a a a a.N
     *N
     * @a aAa a a, a a a a. Aa a a a aN
     *        a a a.N
     *N
     * @a AaAaAa a a a a a a a a a a a aN
     *         a a a a aN
     * @a AaAa a a a a a a a a aN
     *         aN
     */N
    a a Aa<Aa<Aa, a[]>> a(N
            Aa<AaAa> aAa,N
            AaAa aAaAaAa,N
            Aa<Aa, a[]> aAaAa,N
            Aa<Aa> aAaAaAa,N
            a[] aAaAa)N
                    a AaAaAa, AaAaAa, AaAa {N
        a (aAa.aAa()) {N
            a a AaAaAa("Aa a a a a a a a");N
        }N
        AaAaAa a =N
                aAaAa(aAaAaAa, aAaAa, aAaAa);N
N
        a aAa(aAa, aAaAaAa, aAaAaAa, a);N
    }N
N
    /**N
     * Aa a a A a A a (a a0 a a) a a a a aN
     * A a a a a a a a a A a a a a a.N
     *N
     * @a aAa a a, a a a a. Aa a a a aN
     *        a a a.N
     *N
     * @a AaAaAa a a a a a a a a a a a aN
     *         a a a a aN
     * @a AaAa a a a a a a a a aN
     *         aN
     */N
    a a Aa<Aa<Aa, a[]>> aAa(N
            Aa<AaAa> aAa,N
            AaAa aAa,N
            Aa<Aa> aAaAaAa,N
            AaAaAa a)N
                    a AaAaAa, AaAaAa, AaAa {N
        a (aAa.aAa()) {N
            a a AaAaAa("Aa a a a a a a a");N
        }N
N
        // Aa a a a .A a .(A|A|A) a, a a A.A.N
        Aa<Aa<Aa, a[]>> aAaAa =N
                a AaAa<>(0 * aAa.a() + 0);N
        a[] aAa =N
                aAaAa(aAaAaAa, aAa, a);N
        a (AaAa aAa : aAa) {N
            Aa aAa = aAa.a;N
            a[] aAa;N
            a {N
                aAa = aAaAa(aAa, aAa);N
            } a (AaAaAa a) {N
                a a AaAaAa(N
                        "Aa a a a a \"" + aAa + "\"", a);N
            } a (AaAaAa a) {N
                a a AaAaAa(N
                        "Aa a a a a \"" + aAa + "\"", a);N
            } a (AaAa a) {N
                a a AaAa(N
                        "Aa a a a a \"" + aAa + "\"", a);N
            }N
            aAaAa.a(Aa.a("A-A/" + aAa + ".A", aAa));N
            AaAa aAa = aAa.a.a(0).aAaAa();N
            Aa aAaAaAa =N
                    "A-A/" + aAa + "."N
                            + aAa.aAa().aAaAa(Aa.A);N
            aAaAa.a(N
                    Aa.a(aAaAaAa, aAa));N
        }N
        aAaAa.a(Aa.a(A_A_A, a.a));N
        a aAaAa;N
    }N
N
    /**N
     * Aa a a a A a a a a a a a a a a0 a.N
     */N
    a a Aa<Aa> aAaAaAa(Aa<AaAa> aAa) {N
        Aa<Aa> a = a AaAa<>(0 * aAa.a() + 0);N
        a (AaAa aAa : aAa) {N
            Aa aAa = aAa.a;N
            a.a("A-A/" + aAa + ".A");N
            AaAa aAa = aAa.a.a(0).aAaAa();N
            Aa aAaAaAa =N
                    "A-A/" + aAa + "."N
                            + aAa.aAa().aAaAa(Aa.A);N
            a.a(aAaAaAa);N
        }N
        a.a(A_A_A);N
        a a;N
    }N
N
    /**N
     * Aa a a a {@a A-A/A.A} a a a a a (a)N
     * a {@a A.A} a a a A a a a a a.N
     */N
    a a AaAaAa aAaAa(N
            AaAa aAaAaAa,N
            Aa<Aa, a[]> aAaAa,N
            a[] aAaAa) {N
        Aa aAa = a;N
        a (aAaAa != a) {N
            a {N
                aAa = a Aa(a AaAaAaAa(aAaAa));N
            } a (Aa a) {N
                a a AaAaAa("Aa a a a A.A", a);N
            }N
        }N
        AaAaAaAa aAa = a AaAaAaAa();N
        Aa aAa = a Aa();N
        // Aa a a a a a a a (a a). Aa a a.N
        a (aAa != a) {N
            aAa.aAa(aAa.aAaAa());N
        } a {N
            aAa.a(Aa.Aa.A_A, A_A_A_A);N
            aAa.a(A_A_A_A, A_A_A_A_A);N
        }N
N
        a {N
            AaAa.aAaAa(aAa, aAa);N
        } a (Aa a) {N
            a a AaAa("Aa a a a-a A.A", a);N
        }N
N
        Aa<Aa> aAaAa = a AaAa<>(aAaAa.aAa());N
        Aa.a(aAaAa);N
        AaAa<Aa, a[]> aAaAa = a AaAa<>();N
        Aa aAaAaAa = aAaAaAaAa(aAaAaAa);N
        a (Aa aAa : aAaAa) {N
            a[] aAa = aAaAa.a(aAa);N
            Aa aAa = a Aa();N
            aAa.aAa(N
                    aAaAaAa,N
                    Aa0.aAa().aAaAa(aAa));N
            AaAaAaAa aAa = a AaAaAaAa();N
            a[] aAa;N
            a {N
                AaAa.aAaAa(aAa, aAa, aAa);N
                aAa = aAa.aAaAa();N
                aAa.a(aAa);N
            } a (Aa a) {N
                a a AaAa("Aa a a a-a A.A", a);N
            }N
            aAaAa.a(aAa, aAa);N
        }N
N
        AaAaAa a = a AaAaAa();N
        a.a = aAa.aAaAa();N
        a.aAaAa = aAa;N
        a.aAaAa = aAaAa;N
        a a;N
    }N
N
    a a a AaAaAa {N
        a a[] a;N
        a AaAa<Aa, a[]> aAaAa;N
        a Aa aAaAa;N
    }N
N
    a a a[] aAaAa(N
            Aa<Aa> aAaAaAa,N
            AaAa aAaAa,N
            AaAaAa a) {N
        Aa a = a Aa();N
        Aa aAa = a.aAaAa();N
        aAa.a(Aa.Aa.A_A, A_A_A_A);N
        aAa.a(A_A_A_A, A_A_A_A_A);N
        a (!aAaAaAa.aAa()) {N
            // Aa A Aa Aa a0 (a a) a a a.N
            // Aa a a a a A a a a a a a a a aN
            // a A-a a a a a a a a A a aN
            // a a a a. A a a a a a A a a a aN
            // a a a a a a a a a a a a a a.N
            AaAa aAa = a AaAa();N
            a (a a : aAaAaAa) {N
                a (aAa.a() > 0) {N
                    aAa.a(", ");N
                }N
                aAa.a(Aa.aAa(a));N
            }N
            aAa.a(N
                    A_A_A_A_A_A_A,N
                    aAa.aAa());N
        }N
N
        // Aa a a a a a a A.A.N
        AaAa a = aAaAaAa(aAaAa);N
        aAa.aAa(N
                aAaAaAaAa(aAaAa),N
                Aa0.aAa().aAaAa(a.a(a.a)));N
        AaAaAaAa a = a AaAaAaAa();N
        a {N
            AaAaAa.aAaAa(a, aAa);N
        } a (Aa a) {N
            a a AaAa("Aa a a a-a .A a", a);N
        }N
        Aa aAaAaAa = aAaAaAaAa(aAaAa);N
        a (Aa.Aa<Aa, a[]> aAaN
                : a.aAaAa.aAa()) {N
            Aa aAa = aAa.aAa();N
            a[] aAa = aAa.aAa();N
            a[] aAa = a.a(aAa);N
            Aa a = a Aa();N
            a.aAa(N
                    aAaAaAa,N
                    Aa0.aAa().aAaAa(aAa));N
N
            a {N
                AaAaAa.aAaAa(a, aAa, a);N
            } a (Aa a) {N
                a a AaAa("Aa a a a-a .A a", a);N
            }N
        }N
N
        // A a a a a.a.a a a Aa a a a a 0.0 aN
        // a a a Aa a a a a a a a a a a a aN
        // a a 0 a. Aa a a, a a a A a a a.N
        a ((a.a() > 0) && ((a.a() % 0) == 0)) {N
            a {N
                AaAaAa.aAaAa(a);N
            } a (Aa a) {N
                a a AaAa("Aa a a a AaAaAaAa", a);N
            }N
        }N
N
        a a.aAaAa();N
    }N
N
    a a a[] aAaAa(N
            AaAa aAa, a[] aAaAa)N
                    a AaAaAa, AaAaAa, AaAa {N
        AaAaAa a = a AaAaAa(aAa.a);N
        A0Aa aAa = aAa.a.a(0);N
        Aa aAaAa =N
                aAaAaAa(N
                        aAa.aAaAa(), aAa.aAaAa);N
        a {N
            AaAa a =N
                    a AaAaAaAa(aAaAa)N
                    .a(aAa.aAa);N
            AaAaAa a = a AaAaAa();N
            a.aAaAaAa(N
                    a AaAaAaAa(N
                            a AaAaAaAaAa().a(),N
                            AaAaAaAaAa.A)N
                            .aAaAa(a)N
                            .a(a, a AaA0AaAa(aAa)));N
            a.aAa(a);N
N
            AaAa aAa =N
                    a.a(a AaAaAa(aAaAa), a);N
N
            AaAaAaAa a = a AaAaAaAa();N
            a (A0AaAa a0 = a A0AaAa(aAa.aAa())) {N
                AaAa a = a AaAa(a);N
                a.aAa(a0.aAa());N
            }N
            a a.aAaAa();N
        } a (AaAaAa | Aa | Aa a) {N
            a a AaAa("Aa a a a", a);N
        }N
    }N
N
    /**N
     * Aa a AaAa a A #0 A AaAa.N
     */N
    a a a AaAaAaAaAaN
            a AaAaAaAa {N
        a a a AaAaAaAaAa A =N
                a AaAaAaAaAa();N
N
        a a a AaAa A =N
                a AaAa(A0AaAa.a_a, Aa.A);N
N
        a a AaAaAaAa aAa =N
                a AaAaAaAaAa();N
N
        @AaN
        a AaAa aAaAa(AaAa a) {N
            // Aa a a a, a a aAaAa0 a a. Aa a a "a" aN
            // a a a Aa a a "aAaAa0" a a a aN
            // A Aa 0.N
            a = aAa.aAaAa(a);N
            a (a != a) {N
                A0AaAa a = a.aAa();N
                a (A0AaAa.a_a_a_a0.a(a)) {N
                    a A;N
                }N
            }N
N
            a a;N
        }N
    }N
N
    a a Aa aAaAaAaAa(AaAa aAa) {N
        a (aAa) {N
            a A0:N
                a "A0-Aa";N
            a A0:N
                a "A-0-Aa";N
            a:N
                a a AaAaAa(N
                        "Aa a a a: " + aAa);N
        }N
    }N
N
    a a Aa aAaAaAaAa(AaAa aAa) {N
        a (aAa) {N
            a A0:N
                a "A0-Aa-Aa";N
            a A0:N
                a "A-0-Aa-Aa";N
            a:N
                a a AaAaAa(N
                        "Aa a a a: " + aAa);N
        }N
    }N
N
    a a Aa aAaAaAa(N
            AaAa aAa, AaAa aAa) a AaAaAa {N
        Aa aAa = aAa.aAa();N
        Aa aAaAaAaAa;N
        a (aAa) {N
            a A0:N
                aAaAaAaAa = "A0";N
                a;N
            a A0:N
                aAaAaAaAa = "A0";N
                a;N
            a:N
                a a AaAaAa(N
                        "Aa a a: " + aAa);N
        }N
        a ("A".aAaAa(aAa)) {N
            a aAaAaAaAa + "aA";N
        } a a ("A".aAaAa(aAa)) {N
            a aAaAaAaAa + "aA";N
        } a a ("A".aAaAa(aAa)) {N
            a aAaAaAaAa + "aA";N
        } a {N
            a a AaAaAa("Aa a a: " + aAa);N
        }N
    }N
}N
