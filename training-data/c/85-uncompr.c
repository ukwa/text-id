/* a.a -- a a a aN
 * Aa (A) 0-0, 0 Aa-a Aa.N
 * Aa a a a a a, a a a a a.aN
 */N
N
/* @(#) $Aa$ */N
N
#a A_AN
#a "a.a"N
N
/* ===========================================================================N
     Aa a a a a a a a.  aAa aN
   a a a a a a a. Aa a, aAa a a aN
   a a a a a, a a a a a a a aN
   a a a. (Aa a a a a a a aN
   a a a a a a a a a a aN
   a a a a a a a a a a.)N
   Aa a, aAa a a a a a a a a.N
N
     a a A_A a a, A_A_A a a a aN
   a a, A_A_A a a a a a a a a aN
   a, a A_A_A a a a a a a.N
*/N
a A a (a, aAa, a, aAa)N
    Aa *a;N
    aAa *aAa;N
    a Aa *a;N
    aAa aAa;N
{N
    a_a a;N
    a a;N
N
    a.a_a = (Aa*)a;N
    a.a_a = (aAa)aAa;N
    /* Aa a a > 0A a 0-a a: */N
    a ((aAa)a.a_a != aAa) a A_A_A;N
N
    a.a_a = a;N
    a.a_a = (aAa)*aAa;N
    a ((aAa)a.a_a != *aAa) a A_A_A;N
N
    a.a = (a_a)0;N
    a.a = (a_a)0;N
N
    a = aAa(&a);N
    a (a != A_A) a a;N
N
    a = a(&a, A_A);N
    a (a != A_A_A) {N
        aAa(&a);N
        a (a == A_A_A || (a == A_A_A && a.a_a == 0))N
            a A_A_A;N
        a a;N
    }N
    *aAa = a.a_a;N
N
    a = aAa(&a);N
    a a;N
}N
