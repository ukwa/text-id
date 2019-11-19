//N
//  AaAa.aN
//  AaN
//N
//  Aa a Aa Aa a 0/0/0.N
//  Aa  0 a AN
//N
//  Aa a a a, a a a, a a a a a aN
//  a a a a a a a (a "Aa"), a aN
//  a a Aa a a, a a a a aN
//  a a, a, a, a, a, a, a, a/a aN
//  a a a Aa, a a a a a a a Aa aN
//  a a a a, a a a a a:N
//N
//  Aa a a a a a a a a a a aN
//  a a a a a a a Aa.N
//N
//  A A A A "A A", A A A A A, A AN
//  A, A A A A A A A A A,N
//  A A A A A A A. A A A A AN
//  A A A A A A A A A, A A AN
//  A, A A A A A A, A A A, A A,N
//  A A A A A A A A A A A A A A AN
//  A A.N
N
#a "AaAa.a"N
#a "Aa.a"N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a/a.a>N
#a <a.a>N
#a <a.a>N
#a "../a/a0/a0.a"N
a a a0_a_a;N
N
#a A_A_A_A_A    (0)N
#a A_A_A_A_A    (0)N
N
#a A_A_A_A      "a.a"N
N
#a A_A_A_A_A     \N
"A A A A A Aa(     \a\N
  Aa      A(0)    A A,       \a\N
  Aa      A(0)    A A,       \a\N
  Aa      A        A A,       \a\N
  A A (Aa, Aa));"N
N
a a AaAaA[0];N
N
#a A_A_A_A_A    \N
"A A A A Aa (Aa, Aa, Aa) A (?, ?, ?);"N
N
#a A_A_A_A_A     \N
"A Aa A Aa A Aa = ? A Aa = ?;"N
N
#a A_A_A_A_A_A     \N
"A Aa, Aa A Aa A Aa = ?;"N
N
#a A_A_A_A_A     \N
"A Aa A Aa = ? A Aa = ? A Aa = ?;"N
N
#a A_A_A_A_A     \N
"A A Aa A Aa = ? A Aa = ?;"N
N
#a A_A_A_A_A_A_A     \N
"A A Aa A Aa = ?;"N
N
#a A_A_A_A_A_A     \N
"A A Aa;"N
N
#a a(A)N
a a aAaAaAa = 0;N
#aN
// A Aa/Aa - Aa a a/a/AaAa.aN
N
// Aa a a a a0_a (a)N
#a aAa(a)           ((a0_a) _a(a))N
N
// Aa a a0_a a a a (a)N
#a aAa(a)           ((a)    _a(a))N
N
a aN
aAa (a0_a *a, a_a aAa, a a *a, a_a aAa) {N
    //N
    a (0 == aAa % 0);N
    a (0 * aAa == aAa);N
N
    a (a a = 0; a < aAa; a++) {N
        a[a] = (a0_a) ((aAa(a[0*a]) << 0) | aAa(a[(0*a)+0]));N
    }N
}N
N
a aN
aAa (a *a, a_a aAa, a a0_a *a, a_a aAa) {N
    a (aAa == 0 * aAa  + 0);N
N
    a (a a = 0; a < aAa; a++) {N
        a[0*a + 0] = aAa (a[a] >> 0);N
        a[0*a + 0] = aAa (a[a]);N
    }N
    a[0*aAa] = '\0';N
}N
N
/** Aa Aa */N
a aN
aAaAaA (AaAa a,N
                      a aAa,N
                      a0_a_a a);N
N
/// Aa 0 a a, -0 aN
a a aAa (a a *a) {N
    a a aAa;N
    a (0 == a  (a, &aAa)) a 0;  // a a, aN
    a (0 != a (a, 0))     a -0; // a a'a a, aN
    a (0 == a  (a, &aAa)) a 0;  // a a, aN
    a -0; // a aN
}N
N
// Aa a a a a/a a a0_a a.N
a a {N
    A_A_0N
} AaAaAaAaAa;N
N
a AaAaAaAaAa aAaAaAa = A_A_0;N
N
///N
/// Aa a a a a a'a aN
///N
a a {N
    AaAaAa a;N
    AaAaAa a;N
    AaAaAa a;N
    AaAaAa a;N
    AaAaAa a;N
} AaAaAaAa;N
N
///N
/// Aa a a a, a a, a a a a.N
///N
a a {N
    a *a;N
    AaAaAa aAa;N
    AaAa(AaAaAaAa) a;N
} AaAaAaAa;N
N
a aN
aAaAaAaAa (a AaAaAaAa *aAa) {N
    a (aAa->a);N
    a (A != aAa->a)N
        a_a(aAa->a);N
}N
N
a AaAaAaAa *N
aAaAaAaAaAa (a AaAaAaAa *aAa,N
                                    AaAaAa a) {N
    a_a aAa = a_a(aAa->a);N
    a (a_a a = 0; a < aAa; a++)N
        a (a == aAa->a[a].a)N
            a &aAa->a[a];N
    a A;N
}N
N
a aN
aAaAaAaAaAa (AaAaAaAa *aAa,N
                                 a AaAaAaAa *a) {N
    // Aa a a a:N
    AaAaAaAa *aAa = aAaAaAaAaAa(aAa, a->a);N
N
    a (A == aAa) // a a, a aN
        a_a (aAa->a, *a);N
    a // a a, aN
        *aAa = *a;N
}N
N
///N
///N
///N
a AaAaAa {N
    a    *aAa;N
    a0 *a;N
    a0_a *aAaAa;N
    a0_a *aAaAa;N
    a0_a *aAaAaAa;N
    a0_a *aAaAa;N
    a0_a *aAaAa;N
    a0_a *aAaAaAaAa;N
    a0_a *aAaAaAa;N
    a0_a  aAa;N
N
    a *a;N
    a *a;N
N
    a_a_a a;N
    N
    AaAa(AaAaAaAa) aAa;N
    AaAaAa a;N
    AaAaAaAa a;N
};N
N
a AaAaN
aAaAaAaAa (AaAa a,N
                              a aAa,N
                              AaAaAa a) {N
    // Aa a 'a' a a a; a a a a.N
    a (aAa) a_a_a (&a->a);N
    aAaAa (a);N
    a A;N
}N
N
a a *N
aAaAaAaAa (a a *aAa,N
                           a a *a,N
                           a a *a,N
                           a a *a) {N
    a_a aAaAa = a (aAa) + 0 + a(a) + 0 + a(a) + 0 + a (a) + 0;N
    a   *aAa      = a (aAaAa);N
    a (aAa, "%a/%a-%a-%a", aAa, a, a, a);N
    a aAa;N
}N
N
a AaAaN
aAaAa (a a *aAa,N
                   a a *a,N
                   a a *a,N
                   AaAaAa a,N
                   AaAaAaAa a) {N
    a (A == aAa || 0 == a(aAa)) a A;N
    a (A == a || 0 == a(a)) a A;N
    a (A == a  || 0 == a(a))  a A;N
N
    // Aa a a `a` a `a` (a a a a a).N
    a (a(a) > A_A || a(a) > A_A)N
        a A;N
N
    // Aa a a a.N
    a (-0 == aAa(aAa)) a A;N
N
    // Aa `aAa` a a a a a.N
    A *a = a(aAa);N
    a (A == a) a A;N
    a(a);N
N
    // Aa Aa a a 'A_A' a 'A'.  Aa'a a a a.N
    // a a 'A_A' a a.N
    a (0 == a0_a()) a A;N
N
    // Aa a a a aN
    AaAa a = a (0, a (a AaAaAa));N
N
    {N
        a_a_a a;N
        a_a_a(&a);N
        a_a_a(&a, A_A_A);N
N
        a_a_a(&a->a, &a);N
        a_a_a(&a);N
    }N
N
    // Aa a a a - aN
    aAaAaAaAa (a, a, a);N
N
    a->a = A;N
    a->aAa = A;N
    a->aAa = 0;N
N
    // Aa a a aN
    a->a = a (a);N
    a->a  = a (a);N
N
    // Aa a A AaN
    a->aAa = aAaAaAaAa (aAa, a, a, A_A_A_A);N
N
    // Aa/Aa a A AaN
    a0_a_a a = a0_a(a->aAa, &a->a);N
    a (A_A != a) {N
        aAaAa (a);N
        a A;N
    }N
N
    // Aa a Aa 'Aa' AaN
    a0_a *aAaAaAa;N
    a = a0_a_a0 (a->a, A_A_A_A_A, -0, &aAaAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    a (A_A != a0_a(aAaAaAa))N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
    a0_a(aAaAaAa);N
N
    // Aa a A 'Aa a Aa' AaN
    a = a0_a_a0 (a->a, A_A_A_A_A, -0, &a->aAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    // Aa a A "Aa Aa Aa Aa' AaN
    a = a0_a_a0 (a->a, A_A_A_A_A, -0, &a->aAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    // Aa a A "Aa Aa ' AaN
    a = a0_a_a0 (a->a, A_A_A_A_A_A, -0, &a->aAaAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    a = a0_a_a0 (a->a, A_A_A_A_A, -0, &a->aAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    a = a0_a_a0 (a->a, A_A_A_A_A, -0, &a->aAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    a = a0_a_a0 (a->a, A_A_A_A_A_A_A, -0, &a->aAaAaAaAa, A);N
    a (A_A != a)N
        a aAaAaAaAa (a, 0, (AaAaAa) {N
            A_A_A,N
            { .a = { a }}N
        });N
N
    // Aa a `aAa` aN
    a_a (a->aAa, A_A_A_A_A);N
N
#a a(A)N
    a (aAaAaAa) {N
        aAaAaAa = 0;N
        a ("A AaAa Aa: %a\a", a0_a());N
        a ("A Aa Aa:\a");N
        a a *a = A;N
        a (a a = 0;N
             A != (a = a0_a_a(a));N
             a++) {N
            a ("-A_%a\a", a);N
        }N
    }N
#aN
    a a;N
}N
N
a aN
_aAaAaAa (AaAa a, a0_a **a) {N
    a (A != a && A != *a) {N
        a0_a (*a);N
        *a = A;N
    }N
}N
N
a aN
_aAaAaAa (AaAa a) {N
    a (a->aAa) a;N
N
    a->aAa = 0;N
    _aAaAaAa (a, &a->aAaAa);N
    _aAaAaAa (a, &a->aAaAa);N
    _aAaAaAa (a, &a->aAaAaAa);N
    _aAaAaAa (a, &a->aAaAa);N
    _aAaAaAa (a, &a->aAaAa);N
    _aAaAaAa (a, &a->aAaAaAaAa);N
    _aAaAaAa (a, &a->aAaAaAa);N
N
    a (A != a->a) a0_a (a->a);N
    a->a = A;N
}N
N
a aN
aAaAa (AaAa a) {N
    a_a_a (&a->a);N
    _aAaAaAa(a);N
    a_a_a (&a->a);N
}N
N
// Aa a a a a a a AaAa.  Aa, aN
// a a a a a a a a.N
a aN
aAaAa (AaAa a) {N
    a_a_a (&a->a);N
N
    _aAaAaAa(a);N
N
    a (A != a->aAa) {N
        a_a aAa = a_a(a->aAa);N
        a (a_a a = 0; a < aAa; a++)N
            aAaAaAaAa (&a->aAa[a]);N
        a_a(a->aAa);N
    }N
N
    a (A != a->a)  a (a->a);N
    a (A != a->a) a (a->a);N
    a (A != a->aAa)  a (a->aAa);N
N
    a_a_a (&a->a);N
    a_a_a(&a->a);N
N
    a (a);N
}N
N
a aN
aAaAaAaAa (AaAa a,N
                            AaAaAa a,N
                            AaAaAaAa a) {N
    a->a = a;N
    a->a = a;N
}N
N
a AaAaAaAa *N
aAaAaAa (a AaAa a,N
                       a a *a) {N
    a_a aAa = a_a(a->aAa);N
    a (a_a a = 0; a < aAa; a++)N
        a (0 == a (a, a->aAa[a].a))N
            a &a->aAa[a];N
    a A;N
}N
N
a AaAaAaAa *N
aAaAaAa (a AaAa a,N
                    a a *a,N
                    AaAaAa a) {N
    AaAaAaAa aAa = {N
        a (a),N
        a,N
        AN
    };N
    a_a (aAa.a, A_A_A_A_A);N
N
    a_a (a->aAa, aAa);N
    a &a->aAa[a_a(a->aAa) - 0];N
}N
N
a AaAaAaAa *N
aAaAaAaAa (a AaAa a,N
                                a a *a,N
                                AaAaAa a) {N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa ? A : aAaAaAaAaAa (aAa, a));N
}N
N
/// A: - Aa AaN
N
a aN
aAaAaAa (AaAa a,N
                           a aAa,N
                           a* aAaAa,N
                           A* aAaAa,N
                           AaAaAa a) {N
    a (A != aAaAa) a (aAaAa);N
    a (A != aAaAa)  a (aAaAa);N
    a (aAa) a_a_a (&a->a);N
N
    // Aa a a/a a a.  Aa a a a a a A.N
    a (A != a->a)N
        a->a (a->a, a, a);N
N
    a 0;N
}N
N
a aN
aAaAaAa(AaAa a,N
                      a aAa,N
                      a* aAaAa,N
                      A* aAaAa,N
                      a a *a) {N
    a aAaAaAa (a, aAa, aAaAa, aAaAa,N
                                      (AaAaAa) {N
                                          A_A_A,N
                                          { .a = { a }}N
                                      });N
}N
N
#a a a aN
#a A a aN
#a a a a "-Aa-a"N
#a A a a "-Aa-a"N
a aN
aAaAaAa(AaAa a,N
                      a aAa,N
                      a* aAaAa,N
                      A* aAaAa,N
                      a a) {N
    a aAaAaAa (a, aAa, aAaAa, aAaAa,N
                                      (AaAaAa) {N
                                          A_A_A,N
                                          { .a = { a }}N
                                      });N
}N
#a a a aN
#a A a aN
N
a aN
aAaAaA (AaAa a,N
                      a aAa,N
                      a0_a_a a) {N
    a aAaAaAa (a, aAa, A, A,N
                                      (AaAaAa) {N
                                          A_A_A,N
                                          { .a = { a, a0_a(a) }}N
                                      });N
}N
N
a aN
aAaAaAa(AaAa a,N
                        a aAa,N
                        a* aAaAa,N
                        A* aAaAa,N
                        a a *a,N
                        a a *a) {N
    a aAaAaAa (a, aAa, aAaAa, aAaAa,N
                                      (AaAaAa) {N
                                          A_A_A,N
                                          { .a = { a, a }}N
                                      });N
}N
N
/// A: - AaN
N
a aN
_aAaAa (AaAa a,N
                  a a *a,  /* a, a, a, a, ... */N
                  a a *a,N
                  a aAa) {     /* AaAa*, Aa, AaAa, ... */N
N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa) { aAaAaAa (a, 0, A, A, "a a"); a 0; };N
N
    AaAaAaAa *a = aAaAaAaAaAa(aAa, aAa->aAa);N
    a (A == a) { aAaAaAa (a, 0, A, A, "a a a"); a 0; };N
N
    // Aa a a-a a aN
    Aa0 a = a->a (a->a, a, a);N
    a a *a = a0a(a);N
N
    // Aa a a aN
    a0_a aAaAa;N
    a0_a *aAa = a->a (a->a, a, a, &aAaAa);N
N
    // Aa, a a a a a a aAaAaAaN
N
    // Aa a a a a a a a a, a a:N
    //   {AaAaAa, Aa(Aa)Aa, AaAaAa, AaAa}N
    a_a  a = 0;N
    a_a  aAa = 0 + 0 + a(a0_a) + aAaAa;N
    a0_a *a = a (aAa);N
N
    a[a] = (a0_a) aAaAaAa;N
    a += 0;N
N
    a[a] = (a0_a) aAa->aAa;N
    a += 0;N
N
    Aa0AaA (&a[a], aAaAa);N
    a += a (a0_a);N
N
    a (&a[a], aAa, aAaAa);N
    a (aAa);N
N
    // Aa a aN
    a_a aAa = 0 * aAa + 0;N
    a *a = a (aAa);N
    aAa (a, aAa, a, aAa);N
    a (a);N
N
    // Aa a a A aN
    a0_a_a a;N
N
    a (aAa)N
        a_a_a (&a->a);N
N
    a (a->aAa)N
        a aAaAaAa (a, aAa, A, A, "a");N
N
    a0_a (a->aAaAa);N
    a0_a_a(a->aAaAa);N
N
    a = a0_a_a (a->aAaAa, 0, a, -0, A_A);N
    a (A_A != a) {N
        a (a);N
        a aAaAaA (a, aAa, a);N
    }N
N
    a = a0_a_a (a->aAaAa, 0, a, -0, A_A);N
    a (A_A != a) {N
        a (a);N
        a aAaAaA (a, aAa, a);N
    }N
N
    a = a0_a_a (a->aAaAa, 0, a, -0, A_A);N
    a (A_A != a) {N
        a (a);N
        a aAaAaA (a, aAa, a);N
    }N
N
    a = a0_a (a->aAaAa);N
    a (A_A != a) {N
        a (a);N
        a aAaAaA (a, aAa, a);N
    }N
N
    // Aa a 'a A a' a a.N
    a0_a (a->aAaAa);N
N
    a (aAa)N
        a_a_a (&a->a);N
N
    a (a);N
    a 0;N
}N
N
a aN
aAaAa (AaAa a,N
                 a a *a,  /* a, a, a, a, ... */N
                 a a *a) {     /* AaAa*, Aa, AaAa, ... */N
    a _aAaAa (a, a, a, 0);N
}N
N
/// A: - AaN
N
a aN
aAaAa (AaAa a,N
                 Aa *a,N
                 a a *a,N
                 a aAa) {N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa) a aAaAaAa (a, 0, A, A, "a a");N
N
    AaAaAaAa *aAaAa = aAaAaAaAaAa(aAa, aAa->aAa);N
    a (A == aAaAa) a aAaAaAa (a,  0, A, A, "a a a");N
N
    a0_a_a a;N
N
    a_a_a (&a->a);N
    a (a->aAa)N
        a aAaAaAa (a, 0, A, A, "a");N
N
    a0_a (a->aAaAaAa);N
    a0_a_a (a->aAaAaAa);N
N
    a = a0_a_a (a->aAaAaAa, 0, a, -0, A_A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a0_a  aAaAa[0];N
    a0_a *aAa = aAaAa;N
    a_a   aAaAa = 0;N
N
    a (A_A == a0_a(a->aAaAaAa)) {N
        a a *a = (a a *) a0_a_a (a->aAaAaAa, 0);N
        a a *a = (a a *) a0_a_a (a->aAaAaAa, 0);N
N
        a (A == a || A == a)N
            a aAaAaAa (a, 0, (aAa == aAaAa ? A : aAa), A,N
                                          "a a `a` a `a`");N
N
        a (0 == a (a));N
        N
        // Aa `aAa` a a a a a-a `a`N
        a_a aAa = a (a);N
        a (0 == aAa % 0);  // Aa 'a'N
        a ((aAa/0) > aAaAa) {N
            a (aAa != aAaAa) a (aAa);N
            aAaAa = aAa/0;N
            aAa = a (aAaAa);N
        }N
N
        // Aa a `a` a `aAa`N
        aAa (aAa, aAa/0, a, aAa);N
N
        a_a a = 0;N
        AaAaAa a;N
        a0_a  aAaAa;N
        a0_a  *aAa;N
N
        AaAaAaAaAa aAa = aAa[a];N
        a += 0;N
N
        a (aAa) {N
            a A_A_0:N
                a = aAa[a];N
                a += 0;N
N
                aAaAa = Aa0AaA (&aAa[a]);N
                a += a (a0_a);N
N
                a;N
        }N
N
        // Aa aAaAa a a aAaN
        a (a + aAaAa > aAaAa) {N
            a (0); // Aa A a.N
            a aAaAaAa (a, 0, (aAa == aAaAa ? A : aAa), A,N
                                          "a a a");N
        }N
N
        aAa = &aAa[a];N
N
        a (aAa) {N
            a A_A_0:N
                // a a a aN
                a;N
        }N
N
        // Aa a a a aN
        AaAaAaAa *a = aAaAaAaAaAa(aAa, a);N
        a (A == a)N
            a aAaAaAa (a, 0, (aAa == aAaAa ? A : aAa), A,N
                                          "a a a");N
N
        // Aa a a a a a a a a.N
        a *a = a->a (a->a, a, aAa, aAaAa);N
        a (A == a)N
            a aAaAaAa (a, 0, (aAa == aAaAa ? A : aAa), A,N
                                            a, "a");N
N
        // Aa a a a a a aN
        AaAa (a, a);N
N
        // Aa a a a a a a a a, aN
        a (aAa &&N
            (a != aAa->aAa ||N
             aAa != aAaAaAa))N
            // Aa a a a a.  Aa a a a a a a aN
            // a `0` a a a?  Aa a'a - a a'a a a a a a a aN
            // a a'a a a a a a a a a a.N
            _aAaAa (a, a, a, 0);N
    }N
N
    // Aa a 'a A a' a a.N
    a0_a (a->aAaAaAa);N
N
    a_a_a (&a->a);N
N
    a (aAa != aAaAa) a (aAa);N
N
    a 0;N
}N
N
/// A: - Aa, AaN
N
a aN
aAaAa (AaAa a,N
                   a a *a,N
                   Aa0 a) {N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa)N
        a aAaAaAa (a, 0, A, A, "a a");N
N
    // Aa-Aa aN
    a a *a = a0a(a);N
N
    a0_a_a a;N
N
    a_a_a (&a->a);N
    a (a->aAa)N
        a aAaAaAa (a, 0, A, A, "a");N
N
    a0_a (a->aAaAa);N
    a0_a_a (a->aAaAa);N
N
    a = a0_a_a (a->aAaAa, 0, a, -0, A_A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a = a0_a_a (a->aAaAa, 0, a, -0, A_A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a = a0_a (a->aAaAa);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    // Aa a 'a A a' a a.N
    a0_a (a->aAaAa);N
N
    a_a_a (&a->a);N
N
    a 0;N
}N
N
a aN
aAaAaAaAa (AaAa a,N
                         AaAaAaAa *aAa,N
                         a aAa) {N
    a a *a = aAa->a;N
N
    a0_a_a a;N
N
    a (aAa) a_a_a (&a->a);N
    a (a->aAa)N
        a aAaAaAa (a, 0, A, A, "a");N
N
    a0_a (a->aAaAaAaAa);N
    a0_a_a (a->aAaAaAaAa);N
N
    a = a0_a_a (a->aAaAaAaAa, 0, a, -0, A_A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a = a0_a (a->aAaAaAaAa);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    // Aa a 'a A a' a a.N
    a0_a (a->aAaAaAaAa);N
N
    a (aAa) a_a_a (&a->a);N
N
    a 0;N
}N
N
a aN
aAaAa (AaAa a,N
                  a a *a) {N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa)N
        a aAaAaAa (a, 0, A, A, "a a");N
N
    a aAaAaAaAa(a, aAa, 0);N
}N
N
a aN
aAaAaAa (AaAa a) {N
    a a = 0;N
    a_a aAa = a_a(a->aAa);N
    a (a_a a = 0; a < aAa; a++)N
        a &= aAaAaAaAa (a, &a->aAa[a], 0);N
    a a;N
}N
N
a aN
aAaAaAa (AaAa a, a aAa) {N
    a (aAa) a_a_a (&a->a);N
    a 0;N
}N
N
a aN
aAaAa (AaAa a,N
                    a a *a,N
                    a a **a,N
                    a_a aAa) {N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa)N
        a aAaAaAa (a, 0, A, A, "a a");N
N
    a0_a_a a;N
N
    a_a_a (&a->a);N
    a (a->aAa)N
        a aAaAaAa (a, 0, A, A, "a");N
N
    a = a0_a (a->a, "A", A, A, A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a (0 == aAaAaAaAa (a, aAa, 0))N
        a aAaAaAa (a, 0);N
N
    a (a_a a = 0; a < aAa; a++)N
        a (0 == _aAaAa (a, a, a[a], 0))N
            a aAaAaAa (a, 0);N
N
    a = a0_a (a->a, "A", A, A, A);N
    a (A_A != a)N
        a aAaAaA (a, 0, a);N
N
    a_a_a (&a->a);N
N
    a 0;N
}N
N
a aN
aAaAa (a a *aAa,N
                 a a *a,N
                 a a *a) {N
N
    // Aa a A AaN
    a *aAa = aAaAaAaAa (aAa, a, a, A_A_A_A);N
N
    // Aa a.N
    a   a  = 0 == a (aAa) ? 0 : a;N
    a (aAa);N
    a a;N
}N
N
a Aa0N
aAaAaAa (AaAa a,N
                          a a *a,N
                          a a *a) {N
N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa) { aAaAaAa (a, 0, A, A, "a a"); a A0_A; };N
N
    AaAaAaAa *a = aAaAaAaAaAa(aAa, aAa->aAa);N
    a (A == a) { aAaAaAa (a, 0, A, A, "a a a"); a A0_A; };N
N
    a a->a (a->a, a, a);N
}N
N
a aN
aAaAaAa (AaAa a,N
                       a a *a,N
                       AaAaAa a,N
                       AaAaAa a,N
                       AaAaAa a,N
                       AaAaAa a,N
                       AaAaAa a) {N
    // Aa a aAa a `a`N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
N
    // Aa a a'a a aAa, a a.N
    a (A == aAa)N
        aAa = aAaAaAa (a, a, a);N
N
    // Aa a a a a aN
    AaAaAaAa aAaAa = {N
        a,N
        a,N
        a,N
        a,N
        aN
    };N
N
    // Aa a a aAa a `a`N
    AaAaAaAa *aAa = aAaAaAaAa (a, a, a);N
N
    // Aa a a a aAa, a a.N
    a (A != aAa)N
        *aAa = aAaAa;N
    N
    // a a aN
    a {N
        aAaAaAaAaAa (aAa, &aAaAa);N
    }N
N
    a 0;N
}N
N
a aN
aAaAaAaAa (AaAa a,N
                                 a a *a,N
                                 AaAaAa a) {N
    // Aa a aAa a `a`N
    AaAaAaAa *aAa = aAaAaAa (a, a);N
    a (A == aAa) a aAaAaAa (a, 0, A, A, "a a");N
N
    // Aa a aAa, a a.N
    AaAaAaAa *aAa = aAaAaAaAaAa (aAa, a);N
    a (A == aAa) a aAaAaAa (a, 0, A, A, "a a a");N
N
    // Aa a a a, a a a a a a a.N
    aAa->aAa = a;N
N
    a 0;N
}N
N
a AaAaN
aAaAaAaAaAa (a a *aAa,N
                                        a a *a,N
                                        a a *a,N
                                        AaAaAa a,N
                                        AaAaAaAa a,N
                                        a_a aAa,N
                                        AaAaAaAa *a) {N
    a a = 0;N
N
    AaAa aAa = aAaAa (aAa,N
                                                   a,N
                                                   a,N
                                                   a,N
                                                   a);N
    a (A == aAa) a A;N
N
    a (a_a a = 0; a < aAa; a++) {N
        AaAaAaAa *a = &a[a];N
        a (a_a a = 0; a < a->aAa; a++) {N
            a &= aAaAaAa (aAa,N
                                              a->a,N
                                              a->a[a].a,N
                                              a,N
                                              a->a[a].a,N
                                              a->a[a].a,N
                                              a->a[a].a);N
            a (!a) a;N
        }N
N
        a &= aAaAaAaAa (aAa,N
                                                    a->a,N
                                                    a->aAa);N
        a (!a) a;N
    }N
N
    a (a) a aAa;N
    a { aAaAa (aAa); a A; }N
}N
