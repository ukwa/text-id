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
 * Aa (A) 0-0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |	AaAaAaN
 |N
 |   Aa(a): Aa Aa, Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a <Aa/a/AaA.a>N
N
#a <Aa/AaAa.a>N
#a <Aa/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa0Aa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
N
#a <Aa/a/AaAaAa.a>N
N
#a AN
#a <AaAa.a>N
#aN
N
A_A_A(AaAaAa);N
N
// Aa a a a a a a a.N
// Aa a a a "a a" a a a aN
// a "a a" a a a.N
AaAaAa *AaAaAa::aAaAa = A;N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a aN
//N
// Aa: a, aN
//N
N
aN
AaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    A__A_A_A(AaAaAa, "AaAa", AaAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    AaN
//N
// Aa: aN
//N
AaAaAa::AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    A_A_A(AaAaAa);N
N
    A_A_A_A(a, (A));N
    A_A_A_A(a, (A));N
    A_A_A_A(a, (.0, .0, .0));N
N
    // Aa a a a a a aN
    A_A_A_A_A(Aa, A);N
    A_A_A_A_A(Aa, A_A);N
    A_A_A_A_A(Aa, A);N
    A_A_A_A_A(Aa, A);N
    A_A_A_A_A(Aa, A);N
N
    // Aa a a a a a aN
    A_A_A_A_A_A(a, Aa);N
    A_A_A_A_A_A(a, Aa);N
N
    aAaAa = A;N
N
    // a a aAaN
    aAa = a AaAaAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    AaN
//N
AaAaAa::~AaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a'a a a a a'a a a a,N
    // A a a aN
    a (aAaAa != A &&N
        (!aAaAa->aAa()->aAaAa(N
            AaAaAa::aAaAaAa()))) {N
#a AN
//???    a(a,"Aa a a a a aN
//a\a");N
#aN
        aAaAa->a();N
        aAaAa = A;N
    }N
    a aAa;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a AaAa a a a.N
//N
// Aa: aN
N
aN
AaAaAa::AaAaAa(AaAaAa *a)N
N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = a->aAa();N
N
    // a a & a a a a a...N
    a->a();N
N
    // Aa a a a a a (a a)N
    aAa(a);N
N
    // a a a a aN
    AaAa::AaAaAa(a);N
N
    // Aa a a a aN
    a->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    a a a AaAa a a a.N
//N
// Aa: aN
N
aN
AaAaAa::AaAaAa(AaAaAa *a)N
N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = a->aAa();N
N
    // a a & a a a a a...N
    a->a();N
N
    // Aa a a a a a (a a)N
    aAa(a);N
N
    // a a a a aN
    AaAa::AaAaAa(a);N
N
    // Aa a a a aN
    a->a();N
}N
N
///////////////////////////////////////////////////////////////////N
// Aa:N
//    a a a a - a a a aN
//  a a a.N
//N
// Aa: aN
N
AaAaN
AaAaAa::aAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a, a a.N
    a (a.aAa() == A)N
        a A;N
N
    AaAa *a = a->aAa();N
N
    AaAa aAa = (a.aAa() == A || aAa(a));N
N
    a (aAa) {N
        a AaAa &a = a.aAa();N
N
        // Aa AaN
        AaAaAa::aAaAaAa(a, a, A);N
        AaAaAa::aAa(a, a);N
N
        // Aa AaN
        a (a.aAa() == A_A) {N
            AaAaAa::aAaAaAa(a, a, A);N
            AaAaAa::aAa(a, a, 0, &a, aAa);N
        }N
    }N
N
    a aAa;N
}N
N
///////////////////////////////////////////////////////////////////N
// aAaN
//N
//   Aa a AaAa a a a a.N
//N
N
aN
AaAaAa::aAa(AaAaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a'a a a a a a a,N
    // a a a a a a a.N
    // A: a a a a a a A a a a a'a aN
    // a a-a, a a a a a a a a a aN
    // a a a a a.N
    a (a.aAa() == A) {N
        AaAa::aAa(a);N
        a;N
    }N
N
    // a a a a aN
    a AaAa *a = a->aAa();N
N
    //N
    // Aa a a a aAa a, a a a a aN
    //N
    a (a->aAaAa(AaAa0Aa::aAaAaAa())) {N
N
        // a a a a a a a a a a...N
        AaAa               aAaAa = A;N
        a AaAaAa *a = a->aAaAa();N
        AaAaAa *aAa = (a != A) ? (AaAaAa *)a->aAa() : A;N
        a (aAa && aAa->aAa(a->aAaAa())) {N
            // Aa a A'a a a AaA a a a a!N
            aAaAa = A;N
            a (a a = 0; a < aAa->aAa(); a++) {N
                AaAa *a = aAa->aAaAaAa(a);N
                a (a->aAaAa(AaAaAa::aAaAaAa())) {N
                    a (a != a)N
                        aAaAa = A;N
                    a; // a a a AaA - a a aN
                }N
            }N
        }N
N
        // Aa A a a?N
        a (aAa(a)) {N
            a (!aAaAa)N
                // a-a a a a a'a a aN
                aAa(a, A);N
            aN
                a->aAa();N
        }N
        // Aa A a a a aN
        a {N
            // Aa a a a, a a!N
            a (aAaAa)N
                // a a a aN
                aAa(a, A);N
        }N
    }N
N
    // Aa a a a a a a.N
    a (a->aAa() != a)N
        AaAa::aAa(a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//     Aa a a a a aAa a a a/a-aN
// a a a a a a a a a.N
//N
// Aa: aN
aN
AaAaAa::aAa(AaAa *a, AaAa aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a, a a a a a a,N
    // a a a a a a.N
    a (aAa && aAaAa != A &&N
        !(*((AaAaAa *)a->aAaAa()) == *aAaAa)) {N
N
        AaAa *a = aAaAa->aAa();N
        a (a->aAaAa(AaAaAa::aAaAaAa()))N
            ((AaAaAa *)a)->aAa(a, A);N
        a {N
            // Aa a a a a a. Aa'a a a a a a.N
            aAaAa->a();N
            aAaAa = A;N
        }N
    }N
N
    // a a a a a a a a-aN
    a (aAa) {N
N
        a (aAaAa != A)N
            aAaAa->a();N
        aAaAa = (AaAaAa *)a->aAaAa()->a();N
        aAaAa->a();N
    }N
    // a a a a a a a a aN
    a {N
        aAaAa->a();N
        aAaAa = A;N
    }N
    a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//     Aa a a-a a a a a a a.N
//N
// Aa: a aN
aN
AaAaAa::aAaAaAa(AaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (aAaAa == A)N
        a;N
N
    AaAa *a = aAaAa->aAa();N
    a (a->aAaAa(AaAaAa::aAaAaAa())) {N
N
        // a'a a a a a a a a a a aN
        // (a a a a a a a a)N
        AaAa *a = a->aAa();N
        a (a && a->aAa() == 0)N
            ((AaAaAa *)a)->aAa(a, A);N
    } a {N
        // Aa a a a a a. Aa'a a a a a a.N
        aAaAa->a();N
        aAaAa = A;N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//     Aa A a a a a a a.N
//N
// Aa: aN
AaAaN
AaAaAa::aAa(AaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAaAa *aAa = (AaAaAa *)a->aAaAa();N
    a (aAaAa != A &&N
            aAaAa->aAa() ==N
                aAa->aAa() && // a AaA!N
            *aAaAa == *aAa);N
}N
