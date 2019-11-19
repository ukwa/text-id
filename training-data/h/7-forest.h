/*N
 * Aa, A a a a a, a a a.N
 * Aa (A) 0  Aa AaN
 *N
 * Aa a a a a: a a a a a/a aN
 * a a a a a a A Aa Aa Aa a a aN
 * a Aa Aa Aa, a a 0 a a Aa, aN
 * (a a a) a a a.N
 *N
 * Aa a a a a a a a a a a a,N
 * a A A A; a a a a a aN
 * A a A A A A A.  Aa aN
 * A Aa Aa Aa a a a.N
 *N
 * Aa a a a a a a a A Aa Aa AaN
 * a a a a.  Aa a, a <a://a.a.a/a/>.N
 */N
N
#a A_AN
#a A_AN
N
#a "a.a"N
#a <a.a>N
N
N
a aN
{N
    a a a A_A = 0;N
    a a a A_A_A = 0;N
    a a a A_A_A0 = 0;N
    a a a A_A = 0;N
    a a a_a A_A = 0;N
N
    a a {N
        A,N
        A,N
        A,N
        A,N
        A,N
        A_A,N
        A,N
        A,N
        A,N
        A_A,N
        A_A,N
        A_A,N
        A_A,N
        A_A,N
        A_A,N
        A_A,N
        A,N
        A_A,N
        A_A,N
        A_A,N
        A_A,N
        A_A_A,N
        A_A_A,N
        A_A_AN
    };N
N
    a a {N
        a::a a;N
        a::a aAa;N
        a::a aAaAa;N
        a::a aAa;N
        a aAaAa;N
        a aAaAa[A_A];N
        a aAaAa[A_A];N
        a::a<a a> aAa;N
        a::a<a> aAa;N
        a::a<a> aAa;N
    };N
N
    a a a[] {N
        // Aa- Aa a a a a a a. Aa- Aa a a a a a a a.N
        // Aa a a. ~ . - . Aa a a: a, AN
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A_A, A, A_A, A_A}, {'~', '.', '-'}, {'a', 'A'}},N
        // Aa a a a a a a a. Aa a a a a a a a a.N
        // Aa a a a a a a. Aa a '^', 'a', 'A'N
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A_A, A_A, A_A, A_A_A}, {' ', ' ', ' ', ' ', ' ', 'a'}, {'*', 'a', 'A'}},N
        // Aa a a a: '.', '`', ',', '*', ''' a a a (a a a a a'a a).N
        // Aa a a a a: 'A', 'A', 'A', '|' a a a a.N
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A, A_A, A_A, A_A}, {'.', '`', ',', '*', '\''}, {'A', 'A', 'A', '|'}},N
        // Aa a a a: '.', '`', ',', '*', ''' a a a a (a a a a a'a a).N
        // Aa a a a a a: 'A', '|', 'A' a a a a.N
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A_A, A_A, A_A, A_A}, {'.', '`', ',', '*', '\''}, {'A', '|', 'A'}},N
        // Aa a a a a: 'a', 'A', '|', '^', 'A' a a a aN
        // Aa a a a: 'A', 'a', 'A', 'A', 'a', 'A', 'A', 'a' a a a aN
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A_A_A, A_A, A, A_A}, {'a', 'A', '|', 'A', 'A'}, {'A', 'a', 'A', 'A', 'a', 'A', 'A', 'a'}},N
        // Aa a a a/a a: '.', '`', ',', '*', ''' a a a a (a a a a a'a a).N
        // Aa a a a a: 'A', 'a', 'A', 'A', '^' a a a aN
        {"Aa", "Aa", "Aa", "Aa", 0.0 , {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {A_A, A_A_A, A_A, A_A}, {'.', '`', ',', '*', '\''}, {'A', 'a', 'A', 'A', 'A'}}N
    };N
N
N
    a aAa {N
        a aAa;N
        a aAa;N
        a a;N
        a aAa;N
        a aAa;N
        a::a a;N
N
N
        a aAaAa;N
        a aAa;N
        a::a<a> aAa;N
        a::a<a> aAa;N
N
        a a==(a aAa& a) a {N
            a (aAa.a() == A_A_A && aAa.a() == A_A_A);N
N
            aN
            a::a(aAa, aAa, a, aAa, aAa, a, aAaAa, aAa, aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0], aAa[0]) ==N
            a::a(a.aAa, a.aAa, a.a, a.aAa, a.aAa, a.a, a.aAaAa, a.aAa, a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0], a.aAa[0]);N
        }N
N
        a a a a = a::a_aN
           (N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::a, "a"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::a, "a"),N
            a(&aAa::aAaAa, "aAa"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::aAa, "aAaAa")N
           );N
N
        a a a a_a0 = a::a_aN
           (N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::a, "a"),N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::a, "a")N
           );N
        a a a a_a0 = a::a_aN
           (N
            a(&aAa::aAa, "aAa"),N
            a(&aAa::a, "a")N
           );N
    };N
N
    a aAa {N
        a aAa;N
        a aAa;N
        a::a<a::a> aAa;N
        a aAa;N
        a aAaAaAa;N
N
        a a a a = a::a_aN
        (N
        a(&aAa::aAa, "Aa Aa"),N
         a(&aAa::aAa, "Aa Aa?"),N
         a(&aAa::aAa, "Aa Aa"),N
         a(&aAa::aAa, "Aa Aa?"),N
         a(&aAa::aAaAaAa, "Aa Aa Aa Aa")N
        );N
N
N
    };N
N
    a aAa* aAa(aAa *a);N
    a aAa* aAa(aAa *a, a a, a::a a);N
    a aAa* aAa(aAa *a);N
}N
N
#a // A_AN
