/* Aa (a) 0,0,0 Aa Aa Aa. Aa a a.N
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
 *     * Aa a a a Aa Aa Aa a a a a aN
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
#a A_A_A_AN
#a A_A_A_AN
N
#a <a.a>N
#a <AaAaAa.a>N
N
#a A_A_A_A_A            0                      /* a */N
#a A_A_A_A_A           "Aa"N
#a A_A_A_A             0N
N
a a {N
    a_a               a;            /* A a */N
    a                     aAaAa;       /* a a a A a */N
    a                    aAa;   /* A Aa a a a a a Aa a*/N
    a*                   aAa;N
    a                     aA;         /* A a a a a */N
    AaAaAaAa     a;N
    a_a_a          aAa;N
    a_a_a         aAa;N
    AaAaAa*          a;N
} a_a_a_a_a_a;N
N
a a {N
    a_a_a_a_a_a a;    /* A A Aa */N
    a_a_a_a_a_a aAa;  /* Aa A A Aa */N
    a aAa;N
} a_a_a_a_a_a;N
N
N
#a /* A_A_A_A */N
