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
a a.a.a.a.a.a.AaAaAa;N
a a.a.a.a.a.a.Aa;N
a a.a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.AaAaAaAa;N
a a.a.AaAaAa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.AaAaAaAa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.a.AaAaAa;N
a a.a.a.A0Aa;N
a a.a.a.Aa;N
a a.a.a.Aa;N
a a.a.a.AaAaAa;N
a a.a.a.AaAaAaAa;N
a a.a.a.A0AaAaAa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.Aa;N
a a.a.Aa;N
N
/**N
 * A Aa Aa a0 a.N
 *N
 * <a>A Aa Aa a0 a a a-a a a a a a a a aN
 * a a a A, a a a a A Aa Aa a a a a a aN
 * a a a A a.N
 *N
 * <a>A: Aa a A Aa Aa a0 a a a'a a.N
 */N
a a a A0AaAa {N
    /*N
     * Aa a a a a A Aa Aa a0 a:N
     * 0. Aa a a a a a A. Aa a a a a a aN
     *    a a a a a A a a.N
     * 0. Aa a a a a a a. Aa a a a aN
     *    a a a a a A a a a a a a, a aN
     *    a A a a a a a a a a aN
     *    a a a a.N
     *N
     * Aa a a a a a a a A Aa Aa a a a aN
     * a A a a a a a A Aa Aa. Aa a a a aN
     * A a A a a a a a a a A. Aa A Aa Aa a a aN
     * a. Aa a, a a a a a a a a a aN
     * a. Aa a a a A Aa Aa a a a a a a a a a aN
     * a a a a a a.N
     */N
N
    a a a a A_A_A_A_A_A = 0 * 0;N
N
    a a a a[] A_A_A_A =N
          a a[] {N
              0a0, 0a0, 0a0a, 0a0, 0a0, 0a0, 0a0, 0a0,N
              0a0, 0a0a, 0a0a, 0a0, 0a0a, 0a0, 0a0, 0a0,N
          };N
    a a a a A_A_A_A0_A_A = 0a0a;N
N
    /**N
     * Aa a.N
     */N
    a a a AaAa {N
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
         * Aa a a a a a a a.N
         */N
        a Aa<AaAa> aAa;N
    }N
N
    /** Aa a a a a. */N
    a A0AaAa() {}N
N
    /**N
     * Aa a A Aa Aa a0 a a a a a a a a A a aN
     * a a.N
     *N
     * @a aAaAa a A Aa a a a a a a A a a a (aN
     *        AaAa.a aAaAa a).N
     *N
     * @a AaAaAa a a a a a a a a a Aa aN
     *         A Aa Aa a0N
     */N
    a a Aa<AaAa> aAaAaAa(N
            AaAa aAa, a aAaAa) a AaAaAa {N
        Aa aAa = aAa.aAa();N
        a ("A".aAaAa(aAa)) {N
            // Aa A-A0-a0_0 a a a a A-A a aN
            // a a a a a a a A a (a aN
            // a a a a a a a).N
N
            // Aa a a a a a a a a a.N
            a aAaAa = ((Aa) aAa).aAa().aAa();N
            a (aAaAa <= 0) {N
                // 0-a A a a 0-a a, a A-0 a a a a.N
                a Aa.aAa(AaAa.A_A0_A0_0_A_A0);N
            } a {N
                // Aa a a 0 a a a a a a a a a a a aN
                // a a a a a. A-0 a a a a a a.N
                a Aa.aAa(AaAa.A_A0_A0_0_A_A0);N
            }N
        } a a ("A".aAaAa(aAa)) {N
            // A a a a a A-0.N
            a Aa.aAa(AaAa.A_A_A0);N
        } a a ("A".aAaAa(aAa)) {N
            // Aa a a a a a a a a a.N
            a aAaAa = ((Aa) aAa).aAa().aAa().aAa();N
            a (aAaAa <= 0) {N
                // 0-a Aa Aa a a 0-a a, a A-0 a a a a.N
                a Aa.aAa(AaAa.A_A_A0);N
            } a {N
                // Aa a a 0 a a a a a a a a a a a aN
                // a a a a a. A-0 a a a a a a.N
                a Aa.aAa(AaAa.A_A_A0);N
            }N
        } a {N
            a a AaAaAa("Aa a a: " + aAa);N
        }N
    }N
N
    /**N
     * Aa a a A a A Aa Aa a0 a a a A Aa AaN
     * a a a.N
     *N
     * @a aAa a a, a a a a Aa a a a aN
     *        a a a.N
     *N
     * @a Aa a a A/A a aN
     * @a AaAaAa a a a a a a a a a a a aN
     *         a a a a aN
     * @a AaAa a a a a a a a a aN
     *         aN
     */N
    a a a[] aAaAaAa(N
            AaAa aAaAa,N
            AaAa aAa,N
            AaAa a,N
            Aa<AaAa> aAa)N
                        a Aa, AaAaAa, AaAa {N
        a (aAa.aAa()) {N
            a a AaAaAa(N
                    "Aa a a a. Aa a a a a");N
        }N
N
        // Aa a a a(a) a a a A a.N
        Aa<AaAaAa> aAaAa = a AaAa<>(0);N
        a (AaAa aAa : aAa) {N
            a (AaAa aAa : aAa.aAa) {N
                aAaAa.a(aAa.aAaAaAa());N
            }N
        }N
N
        // Aa a, a a, A Aa a Aa Aa a'a Aa AaN
        // a a a a a a a a a a a a A Aa Aa aN
        // a.N
        a aAaAaAaAa = aAaAa.a();N
        AaAa aAa = AaAa.a((a) a.a());N
        aAa.a(AaAa.A_A);N
        a.aAa(0, (a) a.a(), aAa);N
        aAa.a();N
        AaAa.aAaAaAaAaAa(aAa, aAaAaAaAa);N
N
        // Aa a a A a.N
        Aa<AaAaAa, a[]> aAa; // a a A -> aN
        a {N
            aAa =N
                    aAaAa(N
                            aAaAa,N
                            a AaAa[] {N
                                    aAaAa,N
                                    aAa,N
                                    AaAa.aAaAa(aAa)});N
        } a (Aa a) {N
            a a Aa("Aa a a A a a", a);N
        } a (AaAa a) {N
            a a AaAa("Aa a a a a A", a);N
        }N
N
        // Aa a a a a a a a a a a a A Aa Aa.N
        a aAaAaAa(aAa, aAa);N
    }N
N
    a Aa<AaAaAa, a[]> aAaAa(N
            Aa<AaAaAa> aAa,N
            AaAa[] a) a Aa, AaAa {N
        // Aa a a a a a a a a a:N
        // 0. Aa a a a a a a a a a 0 A a a.N
        //    Aa a a a a a a a a a a a a a a a 0 A.N
        //    Aa a a a a a (a a) a.N
        // 0. Aa a a a a a a a a a a a 0a0, a a'aN
        //    a a a (a0 a-a) a a a'a a.N
        // 0. Aa a a a a a a a a a a 0a0a, a a aN
        //    a (a0 a-a) a a a a a a a a aN
        //    a a-a.N
N
        a aAaAa = 0;N
        a (AaAa a : a) {N
            aAaAa +=N
                    aAaAa(a.a(), A_A_A_A_A_A);N
        }N
        a (aAaAa > Aa.A_A) {N
            a a AaAa("Aa a a: " + aAaAa + " a");N
        }N
        a aAa = (a) aAaAa;N
N
        AaAaAa[] aAaAa =N
                aAa.aAa(a AaAaAa[aAa.a()]);N
        AaAa[] a = a AaAa[aAaAa.a];N
        a[][] aAaAa = a a[aAaAa.a][];N
        a[] aAaAa = a a[aAaAa.a];N
        a (a a = 0; a < aAaAa.a; a++) {N
            AaAaAa aAa = aAaAa[a];N
            a aAaAaAa = aAa.aAaAaAaAaAa();N
            aAaAa[a] = aAaAaAa;N
            a[] aAaAaAaAaAaAa =N
                    a a[0 + aAa * aAaAaAa];N
            aAaAaAaAaAaAa[0] = 0a0a;N
            aAaAa0AaAa(N
                    aAa, aAaAaAaAaAaAa, 0);N
            aAaAa[a] = aAaAaAaAaAaAa;N
            Aa aAa = aAa.aAaAaAaAa();N
            a {N
                a[a] = AaAa.aAa(aAa);N
            } a (AaAaAaAa a) {N
                a a AaAa(aAa + " AaAa a a", a);N
            }N
        }N
N
        AaAaAa aAa = a AaAaAa(a);N
        a[] aAaAa = a a[0];N
        aAaAa[0] = (a) 0a0;N
        a aAa = 0;N
        // Aa a: a a a a a a a a. Aa,N
        // a a a a a a a a a a a a-a. AaN
        // a a a a a a a, a a a a a (a.a., a-a a aN
        // a a), A/a/a a a a a, a a a AN
        // a, a a a a a a a a a a a a, a aN
        // a.N
        // Aa a, a a a a a a a a a a a aN
        // a a a a a a a a a a a-a a a aN
        // a a a. Aa a a a, a, a a a aN
        // a a a a a a a'a a a a a a a a a a.N
        a (AaAa a : a) {N
            a aAa = 0;N
            a aAa = a.a();N
            a (aAa > 0) {N
                a aAa =N
                        (a) Aa.a(aAa, A_A_A_A_A_A);N
                aAaAa0AaAa(aAa, aAaAa, 0);N
                a (a a = 0; a < a.a; a++) {N
                    a[a].a(aAaAa);N
                }N
                a {N
                    a.a(aAa, aAa, aAa);N
                } a (Aa a) {N
                    a a Aa("Aa a a a #" + aAa, a);N
                }N
                a (a a = 0; a < aAaAa.a; a++) {N
                    AaAa a = a[a];N
                    a[] aAaAaAaAaAaAa = aAaAa[a];N
                    a aAaAaAa = aAaAa[a];N
                    a aAaAaAa =N
                            a.a(N
                                    aAaAaAaAaAaAa,N
                                    0 + aAa * aAaAaAa,N
                                    aAaAaAa);N
                    a (aAaAaAa != aAaAaAa) {N
                        a a AaAa(N
                                "Aa a a a " + a.aAa()N
                                        + " a: " + aAaAaAa);N
                    }N
                }N
                aAa += aAa;N
                aAa -= aAa;N
                aAa++;N
            }N
        }N
N
        Aa<AaAaAa, a[]> a = a AaAa<>(aAaAa.a);N
        a (a a = 0; a < aAaAa.a; a++) {N
            AaAaAa aAa = aAaAa[a];N
            a[] aAaAaAaAaAaAa = aAaAa[a];N
            AaAa a = a[a];N
            a[] a = a.a(aAaAaAaAaAaAa);N
            a.a(aAa, a);N
        }N
        a a;N
    }N
N
    a a a a aAaAa(a aAa, a aAa) {N
        a (aAa + aAa - 0) / aAa;N
    }N
N
    a a a aAaAa0AaAa(a a, a[] a, a a) {N
        a[a] = (a) (a & 0a);N
        a[a + 0] = (a) ((a >> 0) & 0a);N
        a[a + 0] = (a) ((a >> 0) & 0a);N
        a[a + 0] = (a) ((a >> 0) & 0a);N
    }N
N
    a a a[] aAaAaAa(N
            Aa<AaAa> aAa,N
            Aa<AaAaAa, a[]> aAa)N
                    a AaAaAa, AaAa {N
        a[] aAaAaA0Aa =N
                aAaAaAaA0Aa(aAa, aAa);N
        a aAaAaAa(aAaAaA0Aa);N
    }N
N
    a a a[] aAaAaAa(a[] aAaAaA0Aa) {N
        // A:N
        // a0:  a (a a a)N
        // a A-a a:N
        //     a0:           a (a a a)N
        //     a0:           AN
        //     (a - 0) a: aN
        // a0:  a (a a a a a)N
        // a0: aN
N
        a aAa =N
                0 // aN
                + 0 + 0 + aAaAaA0Aa.a // a0Aa a A-a aN
                + 0 // aN
                + 0 // aN
                ;N
        AaAa a = AaAa.a(aAa);N
        a.a(AaAa.A_A);N
        a aAaAaAa = aAa - 0;N
        a.aAa(aAaAaAa);N
N
        a aAaAaAa = 0 + aAaAaA0Aa.a;N
        a.aAa(aAaAaAa);N
        a.aAa(A_A_A_A0_A_A);N
        a.a(aAaAaA0Aa);N
N
        a.aAa(aAaAaAa);N
        a.a(A_A_A_A);N
N
        a a.a();N
    }N
N
    a a a[] aAaAaAaA0Aa(N
            Aa<AaAa> aAa,N
            Aa<AaAaAa, a[]> aAa)N
                    a AaAaAa, AaAa {N
        // A:N
        // * a-a a a a-a a a.N
N
        Aa<a[]> aAa = a AaAa<>(aAa.a());N
        a aAa = 0;N
        a (AaAa aAa : aAa) {N
            aAa++;N
            a[] aAa;N
            a {N
                aAa = aAaAa(aAa, aAa);N
            } a (AaAaAa a) {N
                a a AaAaAa("Aa #" + aAa + " a", a);N
            } a (AaAa a) {N
                a a AaAa("Aa #" + aAa + " a", a);N
            }N
            aAa.a(aAa);N
        }N
N
        a aAaAaAaAaAaAa(N
                a a[][] {N
                    aAaAaAaAaAaAa(aAa),N
                });N
    }N
N
    a a a[] aAaAa(N
            AaAa aAa,N
            Aa<AaAaAa, a[]> aAa)N
                    a AaAaAa, AaAa {N
        a (aAa.a.aAa()) {N
            a a AaAa("Aa a a a a");N
        }N
        AaAa aAa = aAa.a.a(0).aAaAa();N
N
        a[] aAaAa = aAaAa(aAa);N
N
        A0AaAaAa.AaAa aAa = a A0AaAaAa.AaAa();N
        a {N
            aAa.a = aAa(aAa.a);N
        } a (AaAaAa a) {N
            a a AaAa("Aa a a a", a);N
        }N
N
        Aa<Aa<Aa, a[]>> a =N
                a AaAa<>(aAa.aAa.a());N
        a (AaAa aAa : aAa.aAa) {N
            AaAaAa aAaAa =N
                    aAa.aAaAaAa();N
            a[] aAa = aAa.a(aAaAa);N
            a (aAa == a) {N
                a a AaAa(N
                        aAaAa + " a a a " + aAaN
                                + " a a");N
            }N
            a.a(Aa.a(aAa.aAa(), aAa));N
        }N
        aAa.a = a;N
N
        A0AaAaAa.Aa a = a A0AaAaAa.Aa();N
        // A:N
        // * a-a a a a-a a:N
        //   * a0: a a AN
        //   * a-a a: a a aN
        // * a-a a a a:N
        //   * a-a a: A.0 a (A.0 A a).N
        // * a-a a a a-a a a:N
        //   * a0: AN
        //   * (a - 0) a: aN
        a.aAa = aAaAaAaAaAaAa(a a[][] {N
            aAaAaAaAaAaAaAaAaAaAaAaAa(aAa.a),N
            aAaAaAaAaAaAa(aAa.a),N
            // a aN
            a a[0],N
        });N
        a.aAa = aAaAa;N
        a.a = a AaAa<>(aAa.aAa.a());N
        a (AaAa aAa : aAa.aAa) {N
            Aa<Aa, ? a AaAaAa> aAaAaAa =N
                    aAa.aAaAaAaAaAa();N
            Aa aAaAa = aAaAaAa.aAa();N
            AaAaAa aAaAaAa = aAaAaAa.aAa();N
            a[] aAa;N
            a {N
                Aa a = Aa.aAa(aAaAa);N
                a.aAa(aAa.aAa);N
                a (aAaAaAa != a) {N
                    a.aAa(aAaAaAa);N
                }N
                a.a(a.aAa);N
                aAa = a.a();N
            } a (AaAaAa a) {N
                a a AaAaAa("Aa a a " + aAaAa, a);N
            } a (AaAaAaAa | AaAaAaAaN
                    | AaAa a) {N
                a a AaAa("Aa a a " + aAaAa, a);N
            }N
N
            a {N
                Aa a = Aa.aAa(aAaAa);N
                a.aAa(aAa);N
                a (aAaAaAa != a) {N
                    a.aAa(aAaAaAa);N
                }N
                a.a(a.aAa);N
                a (!a.a(aAa)) {N
                    a a AaAa("Aa a a a");N
                }N
            } a (AaAaAa a) {N
                a a AaAaAa("Aa a a a " + aAaAaN
                        + " a a a a a a", a);N
            } a (AaAaAaAa | AaAaAaAaN
                    | AaAa a) {N
                a a AaAa("Aa a a a " + aAaAaN
                        + " a a a a a a", a);N
            }N
N
            a.a.a(Aa.a(aAa.aAa(), aAa));N
        }N
N
        // A:N
        // * a-a a aN
        // * a-a a a a-a a:N
        //   * a0: a a AN
        //   * a-a a: a a a aN
        // * a-a a: a a (A.0 AaAaAaAa, A.0 A a)N
        a aAaAaAaAaAaAa(N
                a a[][] {N
                    a.aAa,N
                    aAaAaAaAaAaAaAaAaAaAaAaAa(N
                            a.a),N
                    a.aAa,N
                });N
    }N
N
    a a a a A0AaAaAa {N
        a a a a Aa {N
            a a[] aAa;N
            a Aa<Aa<Aa, a[]>> a;N
            a a[] aAa;N
        }N
N
        a a a a AaAa {N
            a Aa<Aa<Aa, a[]>> a;N
            a Aa<a[]> a;N
        }N
    }N
N
    a a a[] aAaAa(AaAa aAa) a AaAaAa {N
        a[] aAaAa = a;N
        a ("A.0".a(aAa.aAa())) {N
            aAaAa = aAa.aAa();N
        }N
        a (aAaAa == a) {N
            a {N
                aAaAa =N
                        AaAa.aAa(aAa.aAa())N
                                .aAaAa(aAa, A0AaAaAa.a)N
                                .aAa();N
            } a (AaAaAaAa a) {N
                a a AaAaAa(N
                        "Aa a a A.0 a a a a a " + aAaN
                                + " a a " + aAa.aAa().aAa(),N
                        a);N
            } a (AaAaAaAa a) {N
                a a AaAaAa(N
                        "Aa a a A.0 a a a a a " + aAaN
                                + " a a " + aAa.aAa().aAa(),N
                        a);N
            }N
        }N
        a ((aAaAa == a) || (aAaAa.a == 0)) {N
            a a AaAaAa(N
                    "Aa a a A.0 a a a a a " + aAaN
                            + " a a " + aAa.aAa().aAa());N
        }N
        a aAaAa;N
    }N
N
    a a Aa<a[]> aAa(Aa<A0Aa> a)N
            a AaAaAa {N
        Aa<a[]> a = a AaAa<>(a.a());N
        a (A0Aa a : a) {N
            a.a(a.aAa());N
        }N
        a a;N
    }N
N
    a a a[] aAaAaAaAaAaAa(Aa<a[]> a) {N
        a aAaAaAaAaAaAa(N
                a.aAa(a a[a.a()][]));N
    }N
N
    a a a[] aAaAaAaAaAaAa(a[][] a) {N
        a aAa = 0;N
        a (a[] a : a) {N
            aAa += 0 + a.a;N
        }N
        AaAa a = AaAa.a(aAa);N
        a.a(AaAa.A_A);N
        a (a[] a : a) {N
            a.aAa(a.a);N
            a.a(a);N
        }N
        a a.a();N
      }N
N
    a a a[] aAaAaAaAaAaAaAaAaAaAaAaAa(N
            Aa<Aa<Aa, a[]>> a) {N
        a aAa = 0;N
        a (Aa<Aa, a[]> a : a) {N
            aAa += 0 + a.aAa().a;N
        }N
        AaAa a = AaAa.a(aAa);N
        a.a(AaAa.A_A);N
        a (Aa<Aa, a[]> a : a) {N
            a[] a = a.aAa();N
            a.aAa(0 + a.a);N
            a.aAa(a.aAa());N
            a.aAa(a.a);N
            a.a(a);N
        }N
        a a.a();N
    }N
}N
