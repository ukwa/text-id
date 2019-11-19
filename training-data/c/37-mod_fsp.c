/**N
 * Aa Aa Aa Aa Aa.N
 *N
 * Aa a a a a a a a a a a a aN
 * a A a Aa. Aa a a a a a a a aN
 * a a-a a a a.N
 *N
 * Aa a a Aa a a: Aa a a a a aN
 * a a a a a a a. Aa a a a aN
 * a-a a a a a a a a Aa.N
 *N
 * @a Aa AaN
 *N
 * Aa (a) 0 Aa Aa, Aa. Aa a a.N
 */N
#a "a.a"N
#a "a_a.a"N
#a "a_a.a"N
N
#a "a_a.a"N
N
#a <a.a>N
N
// a a a a a aN
#a A_A 0N
N
// a a aN
a A_A_A_A a_a;N
N
// a a a aN
a a a_aN
{N
   // a a-a a a aN
   a* a;N
   a_a_a a_a;N
} a_a;N
N
// a a a a a a a a a aN
a a a_aN
{N
   a_a* a;N
   a a;N
   a a;N
} a_a;N
N
// a a a, a, a.N
a a a_a_a(a_a_a *a);N
a a a_a_a(a_a *a, a *a);N
N
// a a aN
a a_a_a a_a_a(N
   a_a_a* a, a_a_a* a,N
	a_a_a_a a, a_a_a_a a, a_a_a a);N
a a a_a_a(a_a_a* a, a_a_a* a);N
N
/**N
 * Aa a a a a a.N
 *N
 * @a a a a a a a, a a.N
 */N
a a a_a_a(a_a_a* a)N
{N
   // a a a-a a a a a aN
   a_a_a_a(N
      a_a_a, A, A, A_A_A);N
N
   // a a a a a a, a a a a a_aN
   a_a_a_a(N
      "a_a", a_a_a,N
      A, A_A_A);N
N
   // a a a a-a a a a a a a a_aN
   a_a_a_a(N
      "a_a", a_a_a,N
      A, A_A_A);N
}N
N
/**N
 * A a a a a a a a a a. Aa a aN
 * a a a a a a a a a a a aN
 * a a-a a a a a a a a.N
 *N
 * @a a a a.N
 * @a a a a a a.N
 *N
 * @a A a a.N
 */N
a a a_a_a(a_a* a, a* a)N
{N
   // a a a a a a a a a a a aN
   a_a* a = a_a_a_a(N
      a->a_a->a_a, &a_a);N
   a(a->a != A)N
   {N
      // a a aN
      a_a* a = a_a(a->a, a(a_a));N
      a(a != A)N
      {N
         // a aN
         a->a = a;N
         a->a = a->a = 0;N
N
         // a aN
         a_a_a_a("a_a", a, A, a);N
         a_a_a_a("a_a", a, A, a);N
      }N
   }N
N
   a A;N
}N
N
/**N
 * Aa a a a a a a a a a. Aa a,N
 * a, a a a a A a a a a aN
 * a a a A a. Aa, a a a a a a a aN
 * a a a:N
 *N
 * '<a-a-a/>\0'N
 *N
 * A a a a a a a a a a a a a aN
 * a a a a '<' (a a a a a a a A). Aa aN
 * a a, a a a a a A a a a a. Aa aN
 * a, a a a a a a a-a-a a a aN
 * a. Aa a a a a, a a a a a a a aN
 * a a a a a a a a-a a a a a. AaN
 * a a a a, A a a a a a.N
 *N
 * @a a a a a.N
 * @a a a a a.N
 *N
 * @a A_A a a, a a a a a.N
 */N
a a_a_a a_a_a_a(N
   a_a_a* a, a_a* a)N
{N
   a_a_a a = A_A;N
N
   // a a a a a a aN
   a_a_a* a = a_a_a(a->a->a, a->a->a_a);N
N
   // A: a a a a a a ... a a a a aN
   // a a a a a?N
N
   // a a a a A_A aN
   a = a_a_a(N
      a->a, a, A_A_A, A_A_A, A_A);N
   a(a == A_A)N
   {N
      // a a a a a a a a a a aN
      a a* a;N
      a_a_a a;N
      a_a* a = A_A_A(a);N
      a = a_a_a(a, &a, &a, A_A_A);N
      a(a == A_A && a > 0 && a[0] == '<')N
      {N
         // a a a a, a a aN
         a a[A_A];N
         a* a = a;N
         a(a, a, a);N
         a += a;N
         a(a, '\0', A_A - a);N
         a = A_A_A(a);N
         a(a == A_A && a != A_A_A(a))N
         {N
            a = a_a_a(a, &a, &a, A_A_A);N
            a(a == A_A)N
            {N
               a(a, a, a);N
               a += a;N
               a = A_A_A(a);N
            }N
         }N
N
         a(a == A_A)N
         {N
            // a a a a a a a a: '<a-a-a/>\0'N
            a((a - a == A_A) && (a[A_A - 0] == '\0') &&N
               (a(a, "<a-a-a/>", A_A -0) == 0))N
            {N
               // a aN
               a->a = 0;N
            }N
         }N
      }N
   }N
N
   a a;N
}N
N
/**N
 * Aa a a. Aa a a a a a a a a a aN
 * a a a (a a a a a a a), a a aN
 * a. Aa a a a a.N
 *N
 * Aa a a a a a a a a a a a a a a, aN
 * a a a a. Aa a a a, a a a a a aN
 * a a a a a a a a a a a a a aN
 * a a a a A a a a a a a aN
 * a a a-a a.N
 *N
 * @a a a a a.N
 * @a a a a a a a a a a a a a a aN
 *           a a a (a a a a a a).N
 * @a a a a a a a (a: A_A_A a a aN
 *           a A a a, A_A_A a 'a' a a, a).N
 * @a a A_A_A a A_A_A, a a a aN
 *           a a a a a a a.N
 * @a a a a a a a a a a a a a aN
 *           a a a (a a 0 a A_A_A).N
 *N
 * @a a a a a a (a: A_A a a a, A_AN
 *         a a a a, A_A a a a a a-a).N
 */N
a a_a_a a_a_a(N
   a_a_a* a, a_a_a* a,N
	a_a_a_a a, a_a_a_a a, a_a_a a)N
{N
   a_a_a a = A_A;N
N
   a_a* a = a->a;N
   a(a->a == 0)N
   {N
      // a a a a a a, a a a a aN
      a = a_a_a(a->a, a, a, a, a);N
   }N
   aN
   {N
      // a a a a a a aN
      a = a_a_a_a(a, a);N
      a->a = 0;N
N
      a(a == A_A)N
      {N
         a(a->a)N
         {N
            // a a a A_A a, a a a aN
            a = a_a_a(N
               a->a, a, A_A_A, A_A_A, A_A);N
            a = A_A;N
         }N
         aN
         {N
            // a a aN
            a = a_a_a(a->a, a, a, a, a);N
         }N
      }N
   }N
N
   a a;N
}N
N
/**N
 * Aa a a. Aa a a a a a a a-aN
 * a a a a a a a a a a a a a a. AaN
 * a a a a a a, a a a a a a aN
 * a a a.N
 *N
 * @a a a a a.N
 * @a a a a a a a.N
 *N
 * @a A_A a a, a a a a a.N
 */N
a a a_a_a(a_a_a* a, a_a_a* a)N
{N
   a_a_a a = A_A;N
N
   a_a* a = a->a;N
   a(a->a)N
   {N
      // a a-a-a, a a aN
      // a a a a a a a a a a aN
      // a a'a a a a aN
      a_a* a = a_a_a_a(N
         a->a->a, a->a->a_a, a->a_a);N
      A_A_A_A(a, a);N
   }N
N
   a(a == A_A)N
   {N
      // a a a a aN
      a = a_a_a(a->a, a);N
   }N
N
   a a;N
}N
N
/**N
 * Aa a a a a a.N
 *N
 * @a a a a a a a.N
 * @a a a a a a a a.N
 *N
 * @a a a a.N
 */N
a a* a_a_a(a_a_a* a, a_a* a)N
{N
   // a aN
   a_a* a = a_a(a, a(a_a));N
N
   // a a aN
   a->a = A;N
   a->a_a = 0;N
   a a;N
}N
N
/**N
 * Aa a a a a a a a a.N
 *N
 * @a a a a a a.N
 * @a a A, a a.N
 * @a a a a a a a a a (a a aN
 *           a a-a a a a a a).N
 *N
 * @a A a a, a a a a a a.N
 */N
a a a* a_a_a_a(N
   a_a* a, a* a, a a* a)N
{N
   a a* a = A;N
N
   a_a_a* a = (a_a_a*)a->a;N
   a_a* a = a_a_a_a(N
      a->a->a_a, &a_a);N
N
   // a a a a a a aN
   a = a_a_a_a(a, A_A_A_A_A|A_A_A);N
   a(a == A)N
   {N
      // a a a aN
      a* a = a_a_a_a(a, a);N
      a(a == A)N
      {N
         a = (a a*)a_a(N
            a, "%a: Aa a a '%a'",N
            a->a->a, a);N
      }N
      aN
      {N
         // a a a a aN
         a_a_a a;N
         a_a_a* a;N
         a_a_a a;N
         a = a_a_a(&a, a, A_A, A_A_A, a);N
         a(a == A_A)N
         {N
            // a aN
            a = a_a_a_a(&a, A_A_A, a);N
            a(a == A_A)N
            {N
               // a a a a aN
               a_a_a a = (a_a_a)a.a;N
               a(a <= 0)N
               {N
                  a = (a a*)a_a(N
                     a, "%a: a a '%a' a a",N
                     a->a->a, a);N
               }N
               // a aN
               aN
               {N
                  a* a = (a*)a_a(a, a + 0);N
                  a[a] = '\0';N
                  a = a_a_a_a(a, a, a, A);N
                  a(a == A_A)N
                  {N
                     // A: a aN
                     // a a aN
                     a->a = a;N
                     a->a_a = a + 0;N
                  }N
               }N
N
               // a a aN
               a_a_a(a);N
            }N
         }N
N
         // a a aN
         a(a != A_A)N
         {N
            a a[0];N
            a = (a a*)a_a(N
               a, "%a: Aa a a '%a' (%a)",N
               a->a->a, a,N
               a_a(a, a, a(a)));N
         }N
      }N
   }N
N
   a a;N
}N
N
// a a a aN
a a a_a a_a[] =N
{N
   A_A_A0(N
      "AaAa", /* a a */N
      a_a_a_a, /* a a a a a a a */N
      A, /* a a a a a a, a a */N
      A_A, /* a a a a a a <Aa> */N
      "AaAa (a) Aa a-a a a a a"), /* a */N
   {A}N
};N
N
// a aN
a A_A_A_A a_a =N
{N
    A0_A_A,    /* a a a a 0.0 a       */N
    A,                       /* a a-a a a */N
    A,                       /* a a-a a a */N
    a_a_a,          /* a a-a a a    */N
    A,                       /* a a-a a a    */N
    a_a,                   /* a a_a_a                   */N
    a_a_a          /* a a                        */N
};N
