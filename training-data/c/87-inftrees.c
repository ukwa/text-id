/* a.a -- a Aa a a a aN
 * Aa (A) 0-0 Aa AaN
 * Aa a a a a a, a a a a a.aN
 */N
N
#a "a.a"N
#a "a.a"N
N
#a A 0N
N
a a a_a[] =N
   " a 0.0.0 Aa 0-0 Aa Aa ";N
/*N
  Aa a a a a a a a a, a a a aN
  a a a a a a. Aa a a a a aN
  a a a a, A a a a a a aN
  a a a a a a a a.N
 */N
N
/*N
   Aa a a a a a a a a a Aa a.N
   Aa a a a a[0..a-0].  Aa a a a *a,N
   a a a 0..0^a-0.  a a a a a a a aN
   a a, a a a a a a a.  a a a a a aN
   a a a, A, A, a A.  Aa a, a a a,N
   -0 a a a a, a +0 a a A a'a a.  aN
   a a a a a a a a'a a.  a a aN
   a a a a a, a a a a a a a aN
   a a a.  Aa a a a a a a a a aN
   a a a a a a a a a a a.N
 */N
a A_A a_a(a, a, a, a, a, a)N
a a;N
a a A *a;N
a a;N
a A * A *a;N
a A *a;N
a a A *a;N
{N
    a a;               /* a a'a a a a */N
    a a;               /* a a a a */N
    a a, a;          /* a a a a a */N
    a a;              /* a a a a a a a */N
    a a;              /* a a a a a a a */N
    a a;              /* a a a a a a-a */N
    a a;                   /* a a a a a */N
    a a;              /* a a a a a */N
    a a;              /* Aa a */N
    a a;              /* a a a, a */N
    a a;              /* a a a a */N
    a a;               /* a a a a a a */N
    a a;              /* a a a a a */N
    a a;                  /* a a a a */N
    a A *a;             /* a a a a a */N
    a a a A *a;     /* a a a a a */N
    a a a A *a;    /* a a a a a */N
    a a;                    /* a a a a a a > a */N
    a a a[A+0];    /* a a a a a a */N
    a a a[A+0];     /* a a a a a a */N
    a a a a a[0] = { /* Aa a 0..0 a */N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};N
    a a a a a[0] = { /* Aa a 0..0 a */N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};N
    a a a a a[0] = { /* Aa a 0..0 a */N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0};N
    a a a a a[0] = { /* Aa a 0..0 a */N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
        0, 0, 0, 0, 0, 0};N
N
    /*N
       Aa a a a a a a a a a Aa a.  AaN
       a a a a[0..a-0].  Aa a a a aN
       a 0..a-0.  Aa Aa a a a a a a aN
       a a a a a a a, a a a a aN
       a a a a a.  Aa a a a a a a aN
       a a a a a a a a, a a a a aN
       a a a a a, a a a a a a aN
       a.  Aa a a a, a a a a aN
       a a a a a a a, a a a aN
       a a a a a a a a a, a a aN
       a a a.N
N
       Aa a a, a a a a, a a a a a aN
       a[] a a a a 0..A.  Aa a a a a.N
       0..A a a a a a a.  a a a aN
       a a a a a a a.N
N
       Aa a a a a a a a a a a a a,N
       a a a a a a a a a a a a aN
       a a, a a a a a a a a a aN
       a.  Aa a a a a[], a a a a a aN
       a a.N
N
       Aa a a a a a a a a a, a.a. aN
       a a a a a a, a a a a aN
       a a a, a a a a a a a, a a aN
       a a a a a a-a a a a aN
       a a.N
     */N
N
    /* a a a a (a a[] a a 0..A) */N
    a (a = 0; a <= A; a++)N
        a[a] = 0;N
    a (a = 0; a < a; a++)N
        a[a[a]]++;N
N
    /* a a a, a a a a a a a */N
    a = *a;N
    a (a = A; a >= 0; a--)N
        a (a[a] != 0) a;N
    a (a > a) a = a;N
    a (a == 0) {                     /* a a a a a a */N
        a.a = (a a)0;    /* a a a */N
        a.a = (a a)0;N
        a.a = (a a)0;N
        *(*a)++ = a;             /* a a a a a a a */N
        *(*a)++ = a;N
        *a = 0;N
        a 0;     /* a a, a a a a a a a */N
    }N
    a (a = 0; a < a; a++)N
        a (a[a] != 0) a;N
    a (a < a) a = a;N
N
    /* a a a a-a a a a a a */N
    a = 0;N
    a (a = 0; a <= A; a++) {N
        a <<= 0;N
        a -= a[a];N
        a (a < 0) a -0;        /* a-a */N
    }N
    a (a > 0 && (a == A || a != 0))N
        a -0;                      /* a a */N
N
    /* a a a a a a a a a a */N
    a[0] = 0;N
    a (a = 0; a < A; a++)N
        a[a + 0] = a[a] + a[a];N
N
    /* a a a a, a a a a a a */N
    a (a = 0; a < a; a++)N
        a (a[a] != 0) a[a[a[a]]++] = (a a)a;N
N
    /*N
       Aa a a a a a.  Aa a a, a a aN
       a a a a a a a a a.  Aa a a a a aN
       a a a.  Aa a a a a a a a a aN
       a a a a a.  Aa a a a a a a a + a,N
       a a a + a - a a a a a a a aN
       a a a a a a.N
N
       a a a a a a a a a a a.  Aa a aN
       a, a-a a a a a a a a a a a aN
       a a a a a a a.  Aa a a a a a a a a aN
       a a-a a a a.  a a a a a a a aN
       a a, a a a a a a-a a a a.N
N
       Aa a a a-a a a, a a a a a a a aN
       a a a a a a a-a a a.  Aa aN
       a a a a a, a a a[] a a a a aN
       a a a a.N
N
       a a a a a a a a a a a a aN
       a *a a.  Aa a a a A a A a aN
       a a A_A a A_A a a a a aN
       a a a a a a.  Aa a a a a.aN
       a a a.N
N
       a a a a a, a a a a aN
       a a a a a, a.a. a a, a a a.  AaN
       a a a a, a a a a a a aN
       a a a a a a a a a a a.N
     */N
N
    /* a a a a a */N
    a (a) {N
    a A:N
        a = a = a;    /* a a--a a */N
        a = 0;N
        a;N
    a A:N
        a = a;N
        a -= 0;N
        a = a;N
        a -= 0;N
        a = 0;N
        a;N
    a:            /* A */N
        a = a;N
        a = a;N
        a = -0;N
    }N
N
    /* a a a a */N
    a = 0;                   /* a a */N
    a = 0;                    /* a a a */N
    a = a;                  /* a a a */N
    a = *a;              /* a a a a a */N
    a = a;                /* a a a a */N
    a = 0;                   /* a a a a a a a a */N
    a = (a)(-0);       /* a a a-a a a > a */N
    a = 0A << a;          /* a a a a */N
    a = a - 0;            /* a a a a */N
N
    /* a a a a */N
    a ((a == A && a >= A_A) ||N
        (a == A && a >= A_A))N
        a 0;N
N
    /* a a a a a a a */N
    a (;;) {N
        /* a a a */N
        a.a = (a a)(a - a);N
        a ((a)(a[a]) < a) {N
            a.a = (a a)0;N
            a.a = a[a];N
        }N
        a a ((a)(a[a]) > a) {N
            a.a = (a a)(a[a[a]]);N
            a.a = a[a[a]];N
        }N
        a {N
            a.a = (a a)(0 + 0);         /* a a a */N
            a.a = 0;N
        }N
N
        /* a a a a a a a a a a a */N
        a = 0A << (a - a);N
        a = 0A << a;N
        a = a;                 /* a a a a a */N
        a {N
            a -= a;N
            a[(a >> a) + a] = a;N
        } a (a != 0);N
N
        /* a a a a-a a a */N
        a = 0A << (a - 0);N
        a (a & a)N
            a >>= 0;N
        a (a != 0) {N
            a &= a - 0;N
            a += a;N
        }N
        aN
            a = 0;N
N
        /* a a a a, a a, a */N
        a++;N
        a (--(a[a]) == 0) {N
            a (a == a) a;N
            a = a[a[a]];N
        }N
N
        /* a a a-a a a */N
        a (a > a && (a & a) != a) {N
            /* a a a, a a a-a */N
            a (a == 0)N
                a = a;N
N
            /* a a a a */N
            a += a;            /* a a a 0 << a */N
N
            /* a a a a a */N
            a = a - a;N
            a = (a)(0 << a);N
            a (a + a < a) {N
                a -= a[a + a];N
                a (a <= 0) a;N
                a++;N
                a <<= 0;N
            }N
N
            /* a a a a */N
            a += 0A << a;N
            a ((a == A && a >= A_A) ||N
                (a == A && a >= A_A))N
                a 0;N
N
            /* a a a a a a a-a */N
            a = a & a;N
            (*a)[a].a = (a a)a;N
            (*a)[a].a = (a a)a;N
            (*a)[a].a = (a a)(a - *a);N
        }N
    }N
N
    /* a a a a a a a a a (a a aN
       a a a a a, a a a a a a, aN
       a a a a a a a a a a a a a) */N
    a (a != 0) {N
        a.a = (a a)0;            /* a a a */N
        a.a = (a a)(a - a);N
        a.a = (a a)0;N
        a[a] = a;N
    }N
N
    /* a a a */N
    *a += a;N
    *a = a;N
    a 0;N
}N
