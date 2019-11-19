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
N
#a __A_A_A_A__N
#a __A_A_A_A__N
N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a_a.a>N
#a <a_a_a.a>N
#a <a_a.a>N
#a <a_a.a>N
#a <AaAaAa.a>N
N
// a aN
a AaAaAa;N
a Aa;N
N
// A a aN
a a {N
    A_A,N
    A_A,N
    A_A,N
    A_A,N
    A_A,N
    A_A_AN
} AaAaAa;N
N
a a {N
    aAaAaAaAa,N
    aAaAa,N
    aAaAaN
}aAa;N
N
//A Aa aN
a a {N
    AaAaAa *aAa;N
    AaAaAa a;N
}aAaAa;N
N
// a a a aN
a Aa {N
    // a a a aN
    a a a A_A;N
    // a a a A aN
    a a a A_A;N
    // a a a A aN
    a a a A_A;N
N
    // a a a a aN
    a Aa* a;N
    // aN
    a a aA;N
    // a a a a aN
    a AaAaAa aAa;N
    // a a a a a a a aN
    a a aAaAa;N
N
    // a aN
    a Aa(a a a,N
                        a AaAaAa a,N
                        a a aAa) :N
        a(A), aA(a), aAa(a),N
        aAaAa(aAa) {}N
N
    // a aN
    a Aa(a Aa* a,N
                        a AaAaAa a,N
                        a a aAa) :N
        a(a), aA(-0), aAa(a),N
        aAaAa(aAa) {}N
N
    // a aN
    a Aa(a a a) :N
        a(A), aA(a), aAa(A_A_A),N
        aAaAa(a) {}N
N
    // a aN
    a Aa(a Aa* a) :N
        a(a), aA(-0), aAa(A_A_A),N
        aAaAa(a) {}N
};N
N
a AaAa {N
    // a AaAaAa a a a aN
    // a a a a a.  Aa a'a aN
    // a a a a a a a.N
    a a AaAaAa;N
    a a AaAa;N
    // a a a a a.N
    // Aa a a a a a (a a).N
    a a AaAa* aAaAa(AaAaAa a, a* a) = 0;N
N
a:N
    // a a a a aN
    a AaAaAa* aAaAa;N
    // a a a a a a 0 aN
    // a a a a a a.N
    AaAa* aAaAa;N
    AaAa* aAaAa;N
    AaAa* aAaAa;N
    AaAa* aAaAa;N
N
    a AaAa(a AaAaAa *aAa) :N
        aAaAa(aAa),N
        aAaAa(A),N
        aAaAa(A),N
        aAaAa(A),N
        aAaAa(A) {}N
    a ~AaAa() {}N
N
a:N
    // a a aN
    a a a* a() = 0;N
};N
N
a Aa {N
    a (*a)(a);N
a:N
    a Aa* aAa(aAa a, a *a_a);N
    a a aAa(a *a_a);N
    Aa() {}N
    Aa(a *a_a)N
    { a = (a(*)(a))(a_a); }N
    a ~Aa(){}N
    a a a *a() {a (a*)"Aa";}N
};N
N
a AaAa : a Aa {N
    a (*aAa)(a *a_a);N
a:N
    a aAa(a *a_a);N
    AaAa() {}N
    AaAa(a *a_a)N
    { aAa = (a(*)(a *))(a_a); }N
    a ~AaAa(){}N
    a a a *a() {a (a*)"AaAa";}N
};N
N
a AaAa : a Aa {N
    a (*aAa)(AaAa* a);N
a:N
    a aAa(a *a_a);N
    AaAa() {}N
    AaAa(a *a_a)N
    { aAa = (a(*)(AaAa *))(a_a); }N
    a ~AaAa(){}N
    a a a *a() {a (a*)"AaAa";}N
};N
N
a AaAaAa {N
a:N
    // a a a a a.N
    a* aAa;N
    //a a a a a aN
    Aa *aAa;N
    // a AaAa a a a aN
    // a a a a a a a aN
    // a a, a a a a a aN
    // a a a a a a.N
    a a AaAa;N
    // a a a a a.N
    AaAa* aAaAa;N
a:N
    // A a: A a A.N
    a AaAaAa aAa;N
    // a a a A.  Aa a a aN
    // a a a a a A.  Aa aN
    // A, a a a a a A.N
    a* aA;N
    // a a, a a'a a a a a.N
    a a aAa;N
    // aN
    AaAaAa aAa;N
    // a0 a a aN
    a aAaAaAa;N
N
a:N
    AaAaAa(aAa aAa, a *a_a,N
                     AaAaAa a, a aAaAa);N
    a ~AaAaAa();N
N
    // a a a aN
    a aA(a a* a, a a a);N
    a a a* aA() a { a (a a*)aA; }N
    a a aAa(AaAaAa a) { aAa = a; }N
    a AaAaAa aAa() a { a aAa; }N
    a AaAaAa aAa() a { a (AaAaAa)aAa; }N
N
    // a, a A a a A, a a a AN
    a aAa(Aa *a);N
N
    // a, a A a a A, a a a AN
    a aAa(Aa *a);N
N
    // a a a a a a a, a a a a.N
    a aAa(Aa* a) a;N
N
    a a aAaAa(AaAaAa a);N
N
    // a a a a a a a AN
    a a aAaAa(AaAaAa a) a;N
N
    //a a a a, a_a_a a 0N
    //a a a a a a, a 0N
    //a aAa() a 0 a a a a aN
    //a a 0 a a a aN
    a a aAa() aN
    { a !a_a_a(aAa); }N
N
    a aAaAa() a;N
N
    a a aAaAa() aN
    { a_a_a(aAa); }N
N
    // a. Aa a a a a a a.N
    a aAa(Aa& a) a;N
N
};N
N
a AaAa : a AaAaAa {N
    a a a a A_A_A_A_A;N
    a a a a A_A_A_A_A;N
    AaAaAa* aAaAa;N
    a a aAa;N
a:N
    AaAa(aAa a,N
                   a *a_a,N
                   AaAaAa* aAa);N
    a aAaAa(AaAaAa a) a;N
    a aAaAa(AaAaAa a);N
    a aAa();N
    a aAa(AaAaAa a, a A) a;N
    a a aAa() {aAa++;}N
    a a a *a() {a (a*)"AaAa";}N
};N
N
// a a a a A a.  Aa a a a A, a a aN
// a a a a.  Aa a a a A, a a a aN
// a a A a.N
a Aa {N
    a a0_a A;N
    a AaAaAa* aAaAa;N
    a Aa(a a a,N
                      a AaAaAa* aAa) :N
        A(a), aAaAa(aAa) {}N
    a a ~Aa() {}N
N
    a a aAa(a0_a &a0, a* a0) = 0;N
    a a aAa(a a_a& a) = 0;N
    a a a aAaAa(a* a, a* a)N
    { a[0] = 0; a[0] = 0; }N
N
    a a a a(a Aa *a) aN
    { a A == a->A; }N
N
    // a a a a a A a a, aN
    // a A, A, a AN
    a a aAaAa(Aa &a) = 0;N
N
    a a aAaAaAa() { a a; }N
    a a aAa() {}N
    a a aAa() { a a; }N
N
    a Aa* a() = 0;N
    // a a a a a a a, a.a.N
    // a a a a, a a a a a.N
    a aAa(Aa &a);N
};N
N
// Aa, a a a a A aN
a Aa : a Aa {N
    a aAa0Aa[0];N
N
    a Aa(a AaAaAa* aAa,N
                         a a a0, a* a0) :N
        Aa(a0, aAa)N
    {N
        a (A == a0) {N
            aAa0Aa[0] = 0;N
        } a {N
            a(aAa0Aa, a0, a(aAa0Aa));N
        }N
    }N
N
    a a aAaAa(Aa &a);N
N
    a a a aAa(a0_a &a0, a* a0)N
    { a0 = A; a(a0, aAa0Aa, a(aAa0Aa)); }N
N
    a a a aAa(a a_a& a)N
    { a.a_a = A_A0;/*a: a aAa0Aa a a */ }N
N
    a Aa* a()N
    {N
        a a Aa(aAaAa, A, aAa0Aa);N
    }N
N
    a a a(a Aa *a) a;N
    a a ~Aa(){}N
};N
N
// Aa, a a a a AN
a Aa : a Aa {N
    a AaAaAa* aAaAa;N
    a a aAaAaAa;N
    a Aa(a a a,N
                         a AaAaAa* aAa,N
                         a AaAaAa* a,N
                         a a aAa) :N
        Aa(a, aAa), aAaAa(a),N
        aAaAaAa(aAa){}N
    a a aAaAa(Aa &a);N
N
    a a a aAa(a0_a &a0, a* a0)N
    { a0 = A_A; a0[0] = 0; }N
N
    a a a aAa(a a_a& a)N
    { a.a_a = A_A0; }N
N
    a a Aa* a()N
    {N
        a a Aa(A, aAaAa, aAaAa,N
                                 aAaAaAa);N
    }N
    a a ~Aa(){}N
};N
N
// Aa, a a a a A a AaAN
a Aa : a Aa {N
    a * aA;N
    a * aAa;N
    a_a_a_a_a_a_a aAa;N
    a aAaAa;N
    a Aa(a AaAaAa* aAa,N
                         a * a, a * a, a_a_a_a_a_a_a a_a) :N
        Aa(a_a, aAa),N
        aA(A == a ? A : a a[A_A_A]),N
        aAa(A == a ? A : a a[A_A_A]),N
        aAa(a_a)N
    {N
      a (A != aA)N
          a(aA, a, A_A_A);N
      a (A != aAa)N
          a(aAa, a, A_A_A);N
      aAaAa = a;N
    }N
N
    a a aAaAa(Aa &a);N
N
    a a a aAa(a0_a &a0, a* a0) {}N
N
    a a a aAa(a a_a& a)N
    { a.a_a = A_A0; }N
N
    a a a aAaAa(a* a, a* a)N
    {N
      a (A != aA)N
          a(a, aA, A_A_A);N
      aN
          a[0] = '\0';N
      a (A != aAa)N
          a(a, aAa, A_A_A);N
      aN
          a[0] = '\0';N
    }N
N
    a a a aAaAaAa() { a a; }N
N
    a a a aAa() { aAaAa = a; }N
    a a a aAa() { a aAaAa; }N
N
    a Aa* a()N
    {N
        a a Aa(aAaAa, aA, aAa, aAa);N
    }N
    a a ~Aa(){}N
};N
N
a Aa : a Aa {N
    a aAaAa;N
    a Aa(a AaAaAa *aAa,N
                         a a a) :N
        Aa(a, aAa)N
    {N
        aAaAa = a;N
    }N
    a a a aAa(a0_a &a0, a* a0) {}N
    a a a aAa(a a_a& a)N
    { a.a_a = A_A0; }N
    a Aa* a()N
    {a a Aa(aAaAa, A);}N
    a a aAaAa(Aa &a);N
    a a a aAaAaAa() { a a; }N
    a a aAa();N
    a a a aAa()N
    { a aAaAa; }N
    a a ~Aa(){}N
    a a a *a() {a (a*)"Aa";}N
};N
N
#a //__A_A_A_A__N
