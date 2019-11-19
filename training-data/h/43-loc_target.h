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
#a A_A_AN
#a A_A_AN
#a A_A(a,a) ( (a<<0)|a )N
#a A_A       A_A(A_A, A_A)N
#a A_A           A_A(A_A, A_A)N
#a A_A_A        A_A(A_A, A_A)N
#a A_A           A_A(A_A,A_A)N
#a A_A_A_A    A_A(A_A, A_A)N
#a A_A0       A_A(A_A0, A_A)N
#a A_A          A_A(A_A, A_A)N
#a A_A       A_A(A_A, A_A)N
#a aAaAaAa(a)  (a>>0)N
N
#a __aN
a "A"N
{N
#aN
N
a a a_a_a(a);N
N
/*Aa a a a a a a a a aN
  a a A_A_A*/N
a a_a_a_a(a *a, a a_a);N
/*Aa a a a a a a a a aN
  a a A_A_A*/N
a a_a_a_a(a *a_a, a a_a);N
/*Aa a a a.a a a a a a a a aN
  Aa:N
  0 a a a a a a aN
  0 a a a a a a a a*/N
a a_a_a_a();N
N
/* Aa a a a 'a_a' a a_a.a,N
   a a a a a a a. */N
a a {N
    A_A = 0,N
    A_A,N
    A_A,N
    A_A,N
    A_A0,N
    A_A,N
    A_AN
}A_A;N
N
a a {N
    A_A = 0,N
    A_AN
}A_A;N
N
#a __aN
}N
#aN
N
#a /*A_A_A*/N
