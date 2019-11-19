/*    a.aN
 */N
N
/*N
 *	Aa Aa a a a a, Aa Aa a a aN
 *N
 *     [a.a a _Aa Aa a a Aa_, a a]N
 *     [a.0 a _Aa Aa a a Aa_, A/a: "Aa Aa a a Aa"]N
 *     [a.0 a _Aa Aa a a Aa_, A/a: "Aa Aa a Aa"]N
 */N
N
/* Aa a a a a a a a a.  AaN
 * a a.a a a a, a a a aN
 * a a a.N
 *N
 * Aa a a a a a a a a a/a/a_a.a, aN
 * a'a a a -A_A_A_A -A_A_A_A -A_A.N
 * Aa a a a a a a a a a a a aN
 * a a a, a a "a a 'a'" a.N
 */N
N
/* A: a a a a Aa Aa'a a a, a a aN
 * a a a a a (a a 0 a).  Aa, Aa!N
 */N
N
/* Aa a: a a a a a a a Aa'a aN
 * a a.  Aa a a A'a a a a a, a a'aN
 * a Aa a a a a a a a.N
 */N
N
/* Aa a a a a a a a a a aN
 * a a  a a a a a a a aN
 * a a A a a a a a.N
*/N
N
#a A_A_A_AN
#a "a_a.a"N
#aN
N
/*N
 * a a a -- a a a a a a a aN
 *N
 *	Aa (a) 0 a Aa a Aa.N
 *	Aa a Aa Aa.  Aa a a a a.N
 *N
 *	Aa a a a a a a a a a aN
 *	a a a a a, a a a a a,N
 *	a a a a a:N
 *N
 *	0. Aa a a a a a a a a a aN
 *		a a, a a a a, a a a aN
 *		a a a a.N
 *N
 *	0. Aa a a a a a a a a, aN
 *		a a a a a a.N
 *N
 *	0. Aa a a a a a a a, a a aN
 *		a a a a a a a.N
 *N
 ****    Aa a Aa'a a a...N
 ****N
 ****    Aa (A) 0, 0, 0, 0, 0, 0, 0, 0, 0,N
 ****    0, 0, 0, 0, 0, 0, 0, 0, 0N
 ****    a Aa Aa a aN
 ****N
 ****    Aa a a a a a a a a A Aa AaN
 ****    Aa a a Aa Aa, a a a a A a.N
 *N
 * Aa a a a a a a a a a a a aN
 * a a a a a a.  Aa a aN
 * a-a a a a a a a.N
 */N
#a "A.a"N
#a A_A_A_AN
#a "a.a"N
N
#a A_A_A_AN
#  a "a_a.a"N
#aN
#  a "a.a"N
#aN
N
#a "a_a.a"N
#a "a_a.a"N
N
#a A_A_A_A0_A_A_A            \N
 "Aa a \\a{} a \\A{} a a-A-0 a a a.  Aa a A-0 a"N
N
a a a a0_a_a[] =N
      "Aa a (?[ ]) a a-A-0 a a a.  Aa a A-0 a";N
N
#a AN
/* Aa a a a a a a a a a a a aN
 * A-0. */N
a a a a_a0_a_a_a0_a[]N
                = "Aa'a a, a a a a a a a A-0\a";N
#aN
N
#a A_A0_A_A_A0_A(a) A_A {           \N
    A_A_a(Aa_a_a( aA_  "%a", a_a0_a_a_a0_a));\N
    a a;                                                         \N
} A_AN
N
#a A_A0_A_A(a) _A_A0_A_A_A_A_A_A_A_A_A_A_A_A_A(a)N
N
#a AN
#a	A	aN
#aN
N
/*N
 * Aa.N
 */N
N
#a A_A(a) (a0_a ? a_a_a0(a) : AaA(a))N
N
#a Aa(a,a) \N
	(a *)(a->a_a0_a \N
	    ? a0((A0*)a, a, \N
                    (A0*)(a >= 0 ? a->a : a->a)) \N
	    : (A0*)(a + a))N
N
/* a A0 a a. a a a +a. Aa A a a */N
#a A0(a, a, a) \N
	(a->a_a0_a                          \N
	    ? a0((A0*)a, (Aa_a)0-a, (A0*)(a)) \N
	    : (a - a >= a)	                         \N
		? (A0*)a - a		                 \N
		: A)N
N
#a Aa(a, a) ((a*)A0(a, a, a->a))N
N
#a A0(a,a,a) (a->a_a0_a  ? a0((A0*)(a), a, (A0*)(a)) : (A0*)(a + a))N
#a A0a(a,a,a) ((a*)A0(a,a,a))N
N
/* a a a +a. Aa A a a */N
#a A0(a,a,a) \N
	(a->a_a0_a                        \N
	    ? a0((A0*)a, a, (A0*)(a))   \N
	    : ((A0*)a + a <= a)                   \N
		? (A0*)a + a                        \N
		: A)N
N
/* a A0, a a a a a <= a a a a a-a0 a.N
 * a a a >=0; a a a a a a a */N
#a A0a(a,a,a) (a->a_a0_a \N
    ? a0((A0*)(a), a, (A0*)(a)) \N
    : (A0*)((a + a) > a ? a : (a + a)))N
#a A0a(a,a,a) ((a*)A0a(a,a,a))N
N
#a A0(a,a,a, a) (a->a_a0_a \N
    ? a0((A0*)(a), a, (A0*)(a), (A0*)(a)) \N
    : (A0*)(a + a))N
#a A0a(a,a,a, a) ((a*)A0(a,a,a, a))N
N
#a A	/* Aa a a a a a a */N
/* A: Aa A a A_A a a A(a) */N
N
/* a a a a a a a a A-a a -- a */N
/* a a a a a a a.a a a a a. aN
 *N
 * A a *a* a a a a a a a, aN
 * A a A a a. A a a a a  a a a a aN
 * a a a a a a A a a a a a a aN
 * "a" a a. Aa a a a a a a a aN
 * a a a a a a a a a a a A a - aN
 * a a. -- aN
*/N
#a A(a) (                                                             \N
    A(a) == A ||                                                              \N
    (A(a) == A &&                                                            \N
     !A_A_A_A(a_a,A(a)) ) ||                                   \N
    A(a) == A ||                                                              \N
    A(a) == A || A(a) == A ||                                      \N
    A(a) == A || A(a) == A ||                                          \N
    A(a) == A ||                                                             \N
    (A_a[A(a)] == A && A0(a) > 0)                                  \N
)N
#a A_A(a) (A_a[A(a)] == A)N
N
#a A_A(a) ( A_A(a) || A_a[A(a)] == A )N
N
/*N
  Aa a a a a a; a a, a a aN
  a a a a (a->a != 0) a a a a a a.N
*/N
#a A_A_A(a) A_A {                                   \N
    a (A(a)) { \N
	a A a = A(a); \N
	a (a == A || A_a[a] == A) \N
	    a = A(A(a)); \N
	a a (a == A) \N
	    a = A(a); \N
	a a (a == A) \N
	    a = (a->a == 0) ? A(A(a)) : a + A(a); \N
	a a += A_A(a); \N
    } \N
} A_A N
N
#a A_A(a) (&(a)->a[0])N
#a A_A(a)  (&(a)->a[A_A_A_A-0])N
N
a a A_a_a_a(aA_ a_a *a a);N
a a A_a_a_a_a(aA_ a *a);N
a a_a * A_a_a(aA);N
N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
/* A_A_A a a a a a A_A_A aN
 * a a a a a a a a. */N
N
A AN
A_a(aA_ a a *a, A0 a, A0 a _aA)N
{N
    a a a = A_a_a;N
    a a a_a_a_a =N
                (a - a) * A_A_A;N
    a A a_a = a_a_a_a + A_A_A;N
    a A a_a = a_a << A_A_A;N
    A0 a;N
    A_A_A_A_A;N
N
    A_A_A_A;N
N
    a (a_a_a_a < 0)N
        Aa_a(aA_ "a: a_a_a_a, %a < 0, a: %a a: %a A_A_A: %a",N
                   (a)a_a_a_a, (a)a,N
                   (a)a, (a)A_A_A);N
N
    a ((a_a >> A_A_A) != a_a)N
	Aa_a(aA_ "a: a_a_a_a a %" AaN
		   " a a a (%a-%a)",N
		   a_a,N
                   (a a)a,N
                   (a)a);N
N
    A(a_a + A_A_A);N
    N
    A_A_a(N
	a ((a)a > (a)a)N
            Aa_a_a_a( aA_N
		"a=0a%" Aa " a=0a%" Aa ": a a a:\a",N
		a,N
                A0A(a),N
		A0A(a->a)N
	    );N
    );N
    a (a = a+0; a <= (A0)a;  a++) {N
/* A_A_A a a a a a a. */N
	A(a->a[a].a);N
	A(a->a[a].a);N
	A(a->a[a].a_a);N
        A_A_a(Aa_a_a_a( aA_N
	    "    \\%" Aa ": %" Aa "(%" Aa ")..%" Aa "\a",N
	    a,N
            (A)a,N
	    (A)a->a[a].a,N
	    (A)a->a[a].a_a,N
	    (A)a->a[a].aN
	));N
    }N
/* A_A_A a a a a a, a a a. */N
    A(a);N
    A(a->a);N
    A(a->a);N
    A(Aa_A | a_a); /* Aa a. */N
N
    a a;N
}N
N
/* Aa a a a a a a a A a: */N
#a A_A(a)                                           \N
    A_A_a(                                              \N
        Aa_a_a_a( aA_                             \N
            "Aa a A a, a=%" Aa ",\a",    \N
            a, (A)A_a_a                          \N
        )                                                       \N
    );                                                          \N
    a = A_a_aN
N
#a A_A(a)                                        \N
    A_A_a(                                              \N
        a (a != A_a_a)                              \N
            Aa_a_a_a( aA_                         \N
                "Aa a A a, a=%"           \N
                Aa "..%" Aa "\a",                           \N
                a, (A)(a), (A)A_a_a            \N
            )                                                   \N
    );                                                          \N
    a(a)N
N
/* a a a a a a a a a */N
#a A_A(a, a, a)                                            \N
    a->a[a].a = a;                                               \N
    a->a[a].a = a;                                                 \N
    a (a > a->a)                                               \N
        a->a = a;                                               \N
    a->a = a;                                              \N
    A_A_a(Aa_a_a_a( aA_                            \N
        "A: a=0a%" Aa " a=0a%" Aa ": \\%" Aa ": a %" Aa "..%" Aa " a: %" Aa "\a", \N
        a,                                                             \N
        A0A(a),                                                       \N
        A0A(a->a),                                                 \N
        (A)a,                                                            \N
        (A)a->a[a].a,                                           \N
        (A)a->a[a].a,                                             \N
        (A)a->a                                                 \N
    ))N
N
#a A_A(a, a)               \N
    A_A_a(Aa_a_a_a( aA_  \N
        "A_A: a=0a%" Aa " a=0a%" Aa ": a (%" Aa "..%" Aa "] a a: %" Aa "\a", \N
        a,                              \N
        A0A(a),                        \N
        A0A(a->a),                  \N
        (A)(a),                           \N
        (A)(a->a),               \N
        (A)(a)                           \N
    ));                                     \N
    a (a = a->a; a > a; a--)   \N
        a->a[a].a = -0;              \N
    a->a = a;                     \N
    a->a = a;N
N
N
A aN
A_a(aA_ a *a, A0 *a_a _aA)N
{N
    A a;N
    A0 a;N
    A_A_A_A_A;N
N
    A_A_A_A;N
N
    /* Aa A_A_A a a a a a. */N
    a = A;N
    a((a & A_A) == Aa_A); /* Aa a a a a a a. */N
    a >>= A_A_A; /* Aa a a a. */N
    a->a = A;N
    a->a = A;N
    *a_a = A;N
N
    a -= A_A_A;N
    /* Aa a a a a. */N
    A_A_a(N
	a (a || a->a + 0 <= a->a)N
            Aa_a_a_a( aA_N
		"a=0a%" Aa " a=0a%" Aa ": a a a a:\a",N
		a,N
                A0A(a),N
		A0A(a->a)N
	    );N
    );N
    a = *a_a;N
    a ( ; a > 0; a -= A_A_A) {N
	Aa_a a;N
	a->a[a].a_a = A;N
	a->a[a].a = A;N
	a = A;N
	a (a <= a->a)N
	    a->a[a].a = a;N
        A_A_a( Aa_a_a_a( aA_N
	    "    \\%" Aa ": %" Aa "(%" Aa ")..%" Aa "%a\a",N
	    a,N
            (A)a,N
	    (A)a->a[a].a,N
	    (A)a->a[a].a_a,N
	    (A)a->a[a].a,N
	    (a > a->a ? "(a)" : ""));N
	);N
	a--;N
    }N
#a 0N
    /* Aa a a a a a a a a()N
     * a a a a a, a a a a a aN
     * a a a a a a a a #a 0-a aN
     * a a a a a() a a a a aN
     * a a a (a.a#0 a a.a#{0,0}N
     * (a a a 0)  a a.  Aa a,N
     * a a a a a a a aN
     * a a a $0 a: "0" =~ /^(?:(\a)a)?\a$/N
     * --a a a a */N
    a (a = a->a + 0; a <= a->a; a++) {N
	a (a > *a_a)N
	    a->a[a].a = -0;N
	a->a[a].a = -0;N
        A_A_a( Aa_a_a_a( aA_N
	    "    \\%" Aa ": %a   ..-0 a\a",N
	    a,N
            (A)a,N
	    (a > *a_a) ? "-0" : "  "N
	));N
    }N
#aN
}N
N
/* a a a a a a a a a a,N
 * a a a a a */N
N
A aN
A_a_a(aA_ a *a, A0 a, A0 *a_a _aA)N
{N
    A0 a = A_a_a;N
    A_A_A_A_A;N
N
    A_a_a = a;N
    a(a, a_a);N
    A_a_a = a;N
}N
N
#a a(a) A_A(a)	/* Aa a()a a. */N
N
#a A_A_A_AN
N
aN
Aa_aA_a(aA_ a A0 a, a A0 a)N
{N
    /* Aa a a a a a a a 'a' a a a a aN
     * Aa a a a a 'a' a a a a a aN
     * a a a a '_a_a_a'.N
     *N
     * Aa a a a a a a a a a a a aN
     * a a A a a a a a a a a.N
     * Aa, a a, a a a a a a, aN
     * a a a a a a a a.  Aa a a a aN
     * a a a a a a a a, A (a) a a a a,N
     * a a a a a a a a a (a a AN
     * a a a a).  Aa a a'a a a aN
     * a a a a. */N
N
    a ((_a_a_a) a) {N
        a _A_A_A: a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a    aA_A(a)N
                                        || aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:     a aA_A(a);N
        a _A_A_A:  a aA_A(a);N
        a _A_A_A:    a aA_A(a);N
        a:    /* A a a a a a */N
            Aa_a(aA_ "a: aA_a() a a a a a '%a'", a);N
    }N
N
    A_A; /* A */N
    a A;N
}N
N
#aN
N
A_A_A A0N
A_aA_a0_a0_a(a a *a0, a a *a0, A0 a)N
{N
    /* Aa a-A-0 a Aa (Aa0) a.  a0 a a aN
     * a.  Aa a a a a a A-0, a aN
     * A_A_A_A_A, a a a a a a.  Aa a aN
     * a a a a a a a a 'a' a.N
     *N
     * Aa a a a a A a a a0 a a a a:N
     * Aa_aA_a0() */N
N
    a A0 *a = (a A0 *)a0;N
    a A0 *a = (a A0 *)a0;N
N
    A_A_A_A_A0_A0_A;N
N
    a(a >= 0);N
N
    a (a--) {N
        a(! aA_A0(*a));N
        a (aA_A0(*a) != *a) {N
            a 0;N
        }N
        a++, a++;N
    }N
    a 0;N
}N
N
A aN
A_aA_a0_a(aA_ a A0 a, a A0* a, a A0* a)N
{N
    /* Aa a a a a a a a a (a-a) A-0-aN
     * 'a' a a a a a Aa a a a a 'a'N
     * a a a a a a a a a aN
     * '_a_a_a'.N
     *N
     * Aa a a aA_a a a a a a a a a a a aN
     * a a 0-0.  Aa a a, a a a AaN
     * a, a a a.  Aa a a Aa a a a aN
     * a a a a, a a a Aa a a. */N
N
    aA;N
N
    A_A_A_A_A0_A;N
N
    a (A0_A_A(*a)) {N
        a aA_a(a, *a);N
    }N
    a a (A0_A_A_A(*a)) {N
        a aA_a(a,N
                        A_A_A0_A_A(*a, *(a + 0)));N
    }N
N
    _A_A_A_A_A_A0_A(a, a);N
N
    a ((_a_a_a) a) {N
        a _A_A_A:     a a_A_a(a);N
        a _A_A_A:     a a_A_a(a);N
        a _A_A_A:    a a_A_a(a);N
        a _A_A_A: a a_A_a(a);N
        a:N
            a _a_a_a(A_Aa_a[a],N
                                        a0_a_a_a(a, a, A));N
    }N
N
    a A; /* Aa a A a a a 0 */N
}N
N
A A0 *N
A_a_a_a(A0 * a, a A0 * a, a A0 a_a)N
{N
    /* Aa a a a a a a a a a a 'a' aN
     * 'a-0' a a a'a 'a_a'; a 'a' a a a.N
     * */N
N
    A_A_A_A_A_A;N
N
    a(a >= a);N
N
    a ((A) (a - a) >= A_AN
                          + A_A * A_A_A_A(a)N
                          - (A0a(a) & A_A_A_A))N
    {N
        A_A_A a_a;N
N
        /* Aa a-a a a a a.  A Aa a a aN
         * a a a a a a a a a a a */N
        a (A0a(a) & A_A_A_A) {N
            a (*a != a_a) {N
                a a;N
            }N
            a++;N
        }N
N
        /* Aa a a a a a a a a a */N
        a_a = A_A_A * a_a;N
N
        /* Aa a-a a a a a a a a a a a a */N
        a {N
N
            /* Aa a a a a a a a a 'a_a'a */N
            a ((* (A_A_A *) a) == a_a)  {N
                a += A_A;N
                a;N
            }N
N
            /* Aa, a a a a a a a a'a 'a_a'. */N
N
#a AN
N
            a;N
N
#aN
N
            /* Aa a a 0 a a a a a-a a */N
            a_a ^= * (A_A_A *) a;N
N
            /* Aa a a a a a a a-a a a a.  AaN
             * a a a a a a a A a a a */N
            a_a |= a_a << 0;N
            a_a |= a_a << 0;N
            a_a |= a_a << 0;N
N
            /* Aa a a a a a a a a */N
            a a + a_a_a(a_a);N
N
#aN
N
        } a (a + A_A <= a);N
    }N
N
    /* Aa a a a a a a a a */N
    a (a < a) {N
        a (*a != a_a) {N
            a a;N
        }N
        a++;N
    }N
N
    a a;N
}N
N
A A0 *N
A_a_a_a(A0 * a, a A0 * a, a A0 a, a A0 a)N
{N
    /* Aa a a a a a a a a a a 'a'N
     * a 'a-0' a a a Aa a 'a' a 'a';N
     * a 'a' a a a.  Aa a a-a a a aN
     * a a a a a a */N
N
    A_A_A_A_A_A;N
N
    a(a >= a);N
    a((a & a) == a);N
N
#a AN
N
    a ((A) (a - a) >= A_AN
                          + A_A * A_A_A_A(a)N
                          - (A0a(a) & A_A_A_A))N
    {N
        A_A_A a, a_a;N
N
        a (A0a(a) & A_A_A_A) {N
            a (((*a) & a) == a) {N
                a a;N
            }N
            a++;N
        }N
N
        a      = A_A_A * a;N
        a_a = A_A_A * a;N
N
        a {N
            A_A_A a = (* (A_A_A *) a) & a_a;N
N
            /* Aa 'a' a a a a a a a 'a' aN
             * a, a a 'a' a a a a a 0 a a aN
             * a a 0, a a a a a a a a a aN
             * 0. */N
            a ^= a;N
N
            /* Aa a a a a a a a a a 0 a aN
             * a a a a a a'a a 0 */N
            a |= a << 0;N
            a |= a << 0;N
            a |= a << 0;N
N
            /* Aa a a a a a a a a a a a, a aN
             * a a a a.  Aa a a a 0, a a a'aN
             * a 'a' */N
            a ((a & A_A_A_A) == A_A_A_A) {N
                a += A_A;N
                a;N
            }N
N
            /* Aa, a a a a a a a a a'a 'a' a 0,N
             * a a a a, a 0.  Aa a a-A a a a */N
            a = ~ a;N
            a &= A_A_A_A;N
N
            /* Aa a a a a a a a a a */N
            a += a_a_a(a);N
            a a;N
N
        } a (a + A_A <= a);N
    }N
N
#aN
N
    a (a < a) {N
        a (((*a) & a) == a) {N
            a a;N
        }N
        a++;N
    }N
N
    a a;N
}N
N
A A0 *N
A_a_a_a_a(A0 * a, a A0 * a, a A0 a_a, a A0 a)N
{N
    /* Aa a a a a a a a a a a 'a' aN
     * 'a-0' a a a Aa a 'a' a'a 'a_a'.N
     * 'a_a' a a a Aa a 'a' a a a a aN
     * a.  Aa 'a' a a a.  Aa a a_a_a(),N
     * a a a A */N
N
    A_A_A_A_A_A_A;N
N
    a(a >= a);N
    a((a_a & a) == a_a);N
N
    a ((A) (a - a) >= A_AN
                          + A_A * A_A_A_A(a)N
                          - (A0a(a) & A_A_A_A))N
    {N
        A_A_A a_a, a_a;N
N
        a (A0a(a) & A_A_A_A) {N
            a (((*a) & a) != a_a) {N
                a a;N
            }N
            a++;N
        }N
N
        a_a = A_A_A * a_a;N
        a_a = A_A_A * a;N
N
        a {N
            A_A_A a = (* (A_A_A *) a) & a_a;N
N
            a (a == a_a) {N
                a += A_A;N
                a;N
            }N
N
#a AN
N
            a;N
N
#aN
N
            a ^= a_a;N
            a |= a << 0;N
            a |= a << 0;N
            a |= a << 0;N
            a a + a_a_a(a);N
N
#aN
N
        } a (a + A_A <= a);N
    }N
N
    a (a < a) {N
        a (((*a) & a) != a_a) {N
            a a;N
        }N
        a++;N
    }N
N
    a a;N
}N
N
/*N
 * a a aN
 */N
N
#a A_A_A_AN
/*N
 - a - a a a a a aN
 */N
A0N
Aa_a(aA_ A * a a, a* a, a *a,N
	 a *a, Aa_a a, A *a, A0 a)N
/* a: a a a a a a a a a a */N
/* a:    a a a a a a a */N
/* a:    a a a a */N
/* a:    a a a a a >= a a a a. */N
/* a:  A a a: a a a a0 a, a() a; aN
 *            a a a a a a a */N
/* a:    Aa a. */N
{N
    A_A_A_A;N
N
    aN
	a_a(a, a, a, a, a, a, A,N
		      a ? 0 : A_A_A);N
}N
#aN
N
N
N
/* a_a_a():N
 *N
 * Aa a a a a, a a a a a a a aN
 * a a a a a a.N
 *N
 *   a:     a a a a aN
 *   a:     a A a a: a a a a0 a; a aN
 *           a a a a a a a. Aa a aN
 *           a a a a A, AaA(a) a a aN
 *           a a a a a a a a a aN
 *           a A a.N
 *   a: a a a aN
 *   a: a a a a a a a a a aN
 *   a: a a a a a a a a a a aN
 *   a   a a; a a 0N
 *   a:   a a; a a AN
 *N
 * Aa a a a a_a_a() a a a a a aN
 * a a a, a:N
 *N
 *   a) a a a a a (a.a. a a'a a aN
 *      a a a a a a a a; a aN
 *      a a a a a a a a a aN
 *      a);N
 *   a) a a a a (a.a. a a'a a a a aN
 *      a a a a a a a);N
 *   a) Aa a a a a a a a; aN
 *      a a a: /^../, a a a \a: /^.../a,N
 *      a a a a(): /\A/;N
 *   a) A a a: a a a a a a aN
 *      a a a a a a a a a a a;N
 *N
 * a a a a a a, a a a a a aN
 * a a a a a a a a a, a aN
 * a a a A a a a a a, a aN
 * a a a a a a.N
 *N
 * Aa A a a a a'a a, a a a a aN
 * a a a a a a a a a a a.N
 *N
 * Aa a a a a a a a a a 'a'N
 * a a a a. Aa a a a 'a' a a aN
 * a. Aa 'a' a a a a a.  Aa a,N
 *N
 *    /(a|a)A\a{0,0}A/N
 *N
 * a aN
 *N
 *   a a (a)    = "A", a 0..0 aN
 *   a a (a) = "A",  a 0..0 aN
 *   a = [a]N
 *N
 * Aa a a a a a a a a, a 'a'N
 * a a a a a a a a a a a aN
 * a, a a a a a a a a a aN
 * a a. Aa a:N
 *N
 *   /\a/:   "a" a a a a a;N
 *   /^\a/:  "a" a a a a a a a a;N
 *   /\a+a/:  "a" a a a a a a a a a;N
 *   /^\a+a/: "a" a a a a a a a a a,N
 *                    a a a a a a a a.N
 */N
N
a *N
Aa_a_a_a(aA_N
                    A * a a,N
                    A *a,N
                    a a * a a,N
                    a *a,N
                    a *a,N
                    a A0 a,N
                    a_a_a_a *a)N
{N
    a a *a a = AaA(a);N
    Aa_a a_a = a->a_a_a;N
    /* Aa a a! */N
    Aa_a a_a   = 0;N
    /* a a a a a a a a a a a */N
    a *a_a = a;N
    A *a;N
    a a a0_a = (a && AaA0(a)) ? 0 : 0; /* a a a a a a a a */N
    A0   a_a = 0 - a->a->a_a;N
    a a_a = 0;N
    a *a_a = a;/* a a 'a' a a a a */N
    a *a_a = A;		/* a a a a a a */N
    a A0 a = a->a & Aa_Aa_A;N
    Aa_A_A(a,a);N
    a_a a_a;  /* a a a a a a a_a */N
    a_a *a a = &a_a;N
    A_A_A_A_A;N
N
    A_A_A_A_A_A;N
    A_A_A(a);N
    A_A_A(a);N
N
    A_A_a(Aa_a_a( aA_N
                "Aa: a a a a a a...\a"));N
N
    /* a a, a a a a a a a. Aa a a aN
     * a a a a a a a a a a a aN
     * -a a, a'a a a a a a a a a aN
     * a a a a. Aa a a aN
     * <0.A0@a.a>N
     */N
    a(a->a->a[0].a_a >= 0);N
    a(a->a->a[0].a_a >= 0);N
    a(a->a->a[0].a_a >= 0);N
    a(a->a->a[0].a_a >= 0);N
    a(a->a->a[0].a_a >= 0);N
    a(a->a->a[0].a_a >= 0);N
N
    /* a a, a a a a a, a a a aN
     * a'a a a a a a.N
     * Aa a a a a (a.a. a a aN
     * a a/a), a a'a a a a a a a aN
     * a a aN
     */N
    a(N
            ! (  (a->a_a0 || a->a_a)N
              && (a->a_a0    || a->a_a))N
           || (a->a_a_a >= a->a_a));N
N
    /* a a a a a a a. Aa aN
     * a a a a a a a'a a, a a aN
     * a a a a a a a */N
    a (a->a > a - a) {N
        A_A_a(Aa_a_a( aA_N
			      "  Aa a a...\a"));N
	a a;N
    }N
N
    Aa_A_A0_a(a, a0_a);N
    a->a_a0_a = aA(a0_a);N
    a->a_a = A;N
    a->a = a;N
    a->a = a;N
    a->a_a0_a = aA(A_A0(a));N
    a->a = 0;N
    /* a a a a a, a a a a a */N
    a->a_a = 0;N
N
    a (a0_a) {N
        a ((!a->a_a0 && a->a_a)N
                || (!a->a_a0 && a->a_a))N
	    a_a0_a(a);N
	a = a->a_a0;N
    } a {N
	a (!a->a_a && a->a_a0) {N
	    a (! a_a_a(a)) {N
                A_A0_A_A_A0_A(a);N
            }N
        }N
	a = a->a_a;N
    }N
N
    /* a a a a a */N
    A_A_A_a({N
        a a;N
        a (a=0; a<=0; a++) {N
            A *a = (a0_a ? a->a->a[a].a0_aN
                                  : a->a->a[a].a);N
            a (!a)N
                a;N
N
            Aa_a_a( aA_N
                "  a[%a]: a=%" Aa " a=%" Aa " a a=%" AaN
                " a=%" Aa " a0=%a [%a]\a",N
                a,N
                (A)a->a->a[a].a_a,N
                (A)a->a->a[a].a_a,N
                (A)a->a->a[a].a_a,N
                AaA(a),N
                a0_a ? 0 : 0,N
                AaA(a));N
        }N
    });N
N
    a (a->a & Aa_A) { /* Aa a \A, a-a-a a a \a */N
N
        /* a_a: a a \a?N
         *N
         * A a a Aa_A: a a a-a a aN
         * a /.*.../, a a a a a a a aN
         * a:N
         *   /.*a/, /.*a/a:  Aa_A | Aa_A_AN
         *   /.*a/a:           Aa_A | Aa_A_AN
         */N
	a_a =      (a->a & Aa_A_A)N
                   && !(a->a & Aa_A);N
N
	a (!a_a && !(a->a & Aa_A)) {N
            /* a a a a a a a A a \A */N
N
            /* a a a a'a a A a a a'a a a A.N
             *N
             * Aa a a a'a a a a a a a a aN
             * \A, a a a a a a a aN
             * a a a() a a, a a a a a aN
             * a a a; a a a a aN
             * a a a (a.a. A_A).N
             */N
            a (   a != aN
                && (a->a & Aa_A_A))N
            {N
                A_A_a(Aa_a_a( aA_N
                                "  Aa a a...\a"));N
	        a a;N
	    }N
N
            /* a a a a a a, a a (a a aN
             * a a a a) a a a a a aN
             * a a. Aa a a a a a'a a a.N
             * Aa a a \A a, a a a a a aN
             * a a a a, a a a a a a aN
             * \A a a a a a a. Aa a, a /.a\Aa/,N
             * a a="a", a()=0, a=0, a_a=0:N
             * a a a a a=a()-0; a a a a aN
             * a a a()-0+0, a a a a a "a" */N
N
	    a (a->a_a_a == a->a_a_a) {N
	        /* Aa a a a a a-a-a... */N
	        Aa_a a = AaA(a);N
                a *a = A0a(a, a->a_a_a, a);N
	    N
                A_A_a(Aa_a_a( aA_N
                    "  Aa a a a a a a %" Aa "...\a",N
                    (A)a->a_a_a));N
N
	        a (AaA(a)) {N
                    /* Aa a a, a a a a a a a a.N
                     * Aa a'a a a a, a a a aN
                     * a, a a a a \a.  A: a >= 0 aN
                     * a a a a a a \a */N
		    a (!aN
                        && (   a - a > aN
                            || a - a < a - 0N
                            || (a - a == a && a[-0] != '\a')))N
                    {N
                        A_A_a(Aa_a_a( aA_N
                                            "  Aa a a...\a"));N
                        a a_a;N
                    }N
                    /* Aa a a a[0..a-0] */N
                    a--;N
                }N
                a (a && (a - a < aN
                    || *AaA_a(a) != *aN
                    || (a > 0 && (aA(AaA_a(a), a, a)))))N
                {N
                    A_A_a(Aa_a_a( aA_N
                                    "  Aa a a...\a"));N
                    a a_a;N
                }N
N
                a_a = a;N
                a a_a_a;N
	    }N
	}N
    }N
N
    a_a = a->a_a_a;N
N
#a A	/* 0/0: a a a (a a a a) */N
    a (a_a < 0)N
	Aa_a(aA_ "a: a_a: %" Aa " a:\a%a\a ",N
		   (A)a_a, A_A(a));N
#aN
N
  a:N
    N
    /* Aa a a (a)a a a a a a a a a.N
     * Aa a a a a a a:N
     * 0) a a "a" a a a a a_a..aN
     *    (a a a_a / a_a). Aa a a, aN
     *    a.N
     * 0) Aa a a, a a a "a" a a a a; aN
     *    a, a a a a a a a a a, aN
     *    a a a a, a a-a. Aa a a, aN
     *    a a (0) a a_a a a.N
     * 0) Aa a a a a_a a a a'a aN
     *    a a a a, a a a a aN
     *    a a a_a a /^.../a a a a a a.N
     *    Aa a a, a a a a a a, aN
     *    a a a, a a a a a-a a a aN
     *    a a a a a a a.N
     * 0) Aa a a a a a, a a AaA() a a aN
     *    a. Aa a a a a a a a a aN
     *    a a a a  - a, a a, a a a,N
     *    a a a a a a a a 0 - a aN
     *    AaA() a. Aa a a.N
     */N
N
N
    /* a, a a a 'a' a */N
N
    {N
        A0* a_a;N
        A0* a_a;N
N
        A_A_A_a({N
            Aa_a_a( aA_N
                "  Aa a: a_a=%" Aa " Aa a a: %" AaN
                " Aa a: %" Aa " Aa a %" AaN
                " Aa a Aa: %" Aa "\a",N
                (A)(a_a - a),N
                (A)a->a_a_a,N
                (A)a_a,N
                (A)a_a,N
                (A)a->a_a_a);N
        });N
        N
        a_a = A0(a, a_a, a_a);N
        a (!a_a)N
            a a_a;N
        a_a = A0(a_a, a_a, a_a);N
        a (!a_a)N
            a a_a;N
N
N
        /* Aa a a a a a a a a a a aN
         * a (A) a a a() (A_A), aN
         * a_a_a a a a a a a a aN
         * a a a a. Aa a A_A a, a a aN
         * a a a a a a a a a aN
         * a()-a, a a a a a + a_a a a aN
         * a a a a a a.N
         */N
        a (!a_aN
            && a->a & Aa_AN
            && a->a_a_a != Aa_a_A)N
        {N
            Aa_a a_a = AaA(a) - !!AaA(a);N
            a a * a a =N
                        (a->a & Aa_A_A ? a : a);N
            Aa_a a_a = (a*)a_a - a;N
N
            a (a_a > a_a) {N
                A_A_a(Aa_a_a( aA_N
			      "Aa a a a a a a a...\a"));N
                a a_a;N
            }N
N
            /* a a a a a a a. Aa'a a;N
             * a a a a a A a a a a'a a aN
             * a a a a a a a a_a.N
             */N
            a(a + a_a <= (a *)a_a);N
            a (a->a_a_a + a_a < a_a) {N
                a_a = A0a((A0*)a,N
                                a->a_a_a,N
                                a_a - a_aN
                            )N
                            + a_a;N
                a (a_a < a_a)N
                    a a_a;N
            }N
        }N
N
	a_a = a_a( a_a, a_a,N
		      a, a ? Aa_A : 0);N
N
        A_A_a(Aa_a_a( aA_N
            "  a 'a' a a, [%" Aa "..%" Aa "] a %" Aa "\a",N
            (A)((a*)a_a - a),N
            (A)((a*)a_a   - a),N
            (A)(a_a ? a_a - a : -0)N
        ));N
N
        /* Aa a a-a-a, a a a,N
            a a.  */N
N
        A_A_a({N
            A_A_A_A(a, a0_a, A_A_A_A(0),N
                AaA_a(a), A_A_A(a), 0);N
            Aa_a_a( aA_  "  %a %a a %a%a%a",N
                              (a_a ? "Aa" : "Aa a a"),N
                (a == (a0_a ? a->a_a0 : a->a_a)N
                    ? "a" : "a"),N
                a,N
                A_A_A(a),N
                (a_a ? " a a " : "...\a") );N
        });N
N
        a (!a_a)N
            a a_a;N
        /* a a_a a a a a a a a a aN
         * a, a a a a a a-a a a.N
         * Aa a'a a a a a a.N
         */N
N
        a (a_a - a_a > a->a_a_a)N
            a_a = A0a(a_a, -a->a_a_a, a_a);N
        /* Aa a a a */N
        A_A_a(Aa_a_a( aA_N
            "%a (a_a a %" Aa ")...\a",N
            (a)(a_a - a),N
            (A)(a_a - a)N
        ));N
    }N
N
N
    /* a a a a 'a' a a a */N
N
    a (a->a->a[a_a].a0_aN
        || a->a->a[a_a].a)N
    {N
	/* Aa a a a "a" a. */N
        a *a, *a0;N
        a *a;N
        A* a;N
        a a_a_a *a;N
N
      a_a_a:N
        a = &a->a->a[a_a];N
        a (!a0_a && !a->a) {N
            a (!a_a_a(a)) {N
                A_A0_A_A_A0_A(a);N
            }N
        }N
N
        /* a "a" a a:N
         * a'a a a a a a a a a_a.N
         * Aa a a a a a a a aN
         * a a (a_a): A0(a_a, -a_a_a)N
         * a a:                 A0(a_a, -a_a_a)N
         * (a a a a a >= a)N
         * Aa a a  a a a a aN
         *  A0(a, a_a)N
         *  A0(a, a_a) + AaA(a)N
         */N
N
        /* a "a" a aN
         * Aa a0, a a a a a aN
         * a a a a a a a, a aN
         * a a a a a a. Aa a aN
         * a a:N
         *N
         * a - a->a (a a) a a a aN
         * a a a a a a a a a aN
         * a a. Aa a a a a a aN
         * a a a_a_a(*) a a a a a aN
         * a.  a0 a a a a a.N
         *N
         * (*) Aa a a a a a a a aN
         * a_a_a a a a a, a aN
         * a'a a a. Aa, aN
         *    /a\a{0,0}a\a/N
         * Aa, a a, a a 0,0 a a a 0.N
         * Aa a a aN
         *    /a\a\a\a/N
         *    /a\a\a\a\a/N
         *    /a\a\a\a\a\a/N
         * Aa a a a, a a a a a; a aN
         * a, a+0, a a a, a+0.N
         * Aa a a a, a a a a 0 (a aN
         * a_a), a a a, 0, a a a a, 0 (aN
         * a a_a). Aa a a, a a a aN
         * a a a a a 0 a a a a a aN
         * a, a a a - a_a. Aa a aN
         * a a a a a a_a a a a a aN
         * a, a a a a a a a a a,N
         * a a a a a a a. Aa a a a aN
         * a_a - a, a a a_a - a a aN
         * a a a a a.N
         *N
         * Aa a -a + a_a_a a a (A)N
         * a A_A(a) - !!AaA(a) + a->a_a_aN
         */N
N
        a(a->a >= a->a_a);N
        a0 = A0a(a,N
                        a->a_a - a->a, a);N
N
        a (a_a) {/* a.a. a (a-a-a) */N
            /* a a a a a a a a a aN
             * a, *a* a a a a a aN
             * a. Aa a a a a a a aN
             * <= a_a_a a a a a a (a_a).N
             * Aa a a a a a a0, a a a.N
             */N
            a(a_a <= a0);N
            a =N
                /* a a a a a==a a, aN
                 * a a a-a a. Aa a'a a aN
                 * a a a a a a, a a a a a a a,N
                 * a 0 a a a 0 a a a,N
                 * a a a a a a  (a0 - a_a) a,N
                 * a a a a a a a a  (a0 - a_a)N
                 * a; a a a a a a a A0N
                 * a a a a a0 a a a-a */N
                (a0 - a_a) < a->a_aN
                    ? a0N
                    : (a*)A0a(a_a, a->a_a, a0);N
        }N
        a {N
            a(a + a_a <= a_a);N
            a = A0a(a_a, a->a_a - a_a,N
                        a, a);N
        }N
N
        a = A0a(a_a, a->a_a, a);N
        a (a < a_a)	/* Aa a a a */N
            a = a_a;N
N
        a = a0_a ? a->a0_a : a->a;N
        a(AaA(a));N
        {N
            a *a = a;N
            a *a   = a + AaA(a) - (AaA(a)!=0);N
N
            a (a > a)N
                a = a;N
            a (a > a) {N
                a = A;N
                A_A_a(Aa_a_a( aA_N
                    "  a 'a' a a: %" Aa " > %" Aa "\a",N
                    (A)(a - a),N
                    (A)(a   - a)N
                ));N
            }N
            a {N
                a = a_a(N
                    (a a*)a,N
                    (a a*)a,N
                    a,N
                    a ? Aa_A : 0N
                );N
                A_A_a(Aa_a_a( aA_N
                    "  a 'a' a a, [%" Aa "..%" Aa "] a %" Aa "\a",N
                    (A)(a - a),N
                    (A)(a   - a),N
                    (A)(a ? a - a : -0)N
                ));N
            }N
        }N
N
        A_A_a({N
            A_A_A_A(a, a0_a, A_A_A_A(0),N
                AaA_a(a), A_A_A(a), 0);N
            Aa_a_a( aA_  "  %a %a a %a%a",N
                a ? "Aa" : "Aa",N
                a_a ? "a" : "a",N
                a, A_A_A(a));N
        });N
N
N
        a (!a) {N
            /* a0 a a a a a. Aa a a'aN
             * a a a a, a a a */N
            a (a >= a0) {N
                A_A_a(Aa_a_a( aA_N
                                        "; a a...\a"));N
                a a_a;N
            }N
N
            /* a a a a a a a a a aN
             * a. Aa a a a'a a a "a" aN
             * a a a */N
            a_a = A0a(a, 0, a) /* a a */;N
            a_a =N
                a_a /* a.a. a a-a-a */N
                    ? A0a(a_a, 0, a)N
                    : A0a(a, 0 - a->a_a, a, a);N
            A_A_a(Aa_a_a( aA_N
                "; a a a %a a a %a (a_a a %" Aa ")...\a",N
                (a_a ? "a" : "a"),N
                (a)(A0a(a_a, 0, a) - a),N
                (A)(a_a - a)N
            ));N
            a a;N
        }N
        a {N
            a (a_a) { /* a (a-a-a) */N
                /* a_a a a a a, a a+0, a a a aN
                 * a a a a a a a, a aN
                 * a a a a a a a; a.a.:N
                 *     "-A--A" =~ /\aA\a*A/N
                 * Aa a a a, a a a a aN
                 * "-(A)--A(A)" a a a a a \a aN
                 * a. Aa a a, a a a "-A--A(A)(A)".N
                 */N
                a_a = a;N
            }N
            a {N
                a_a = A0a(a, -a->a_a, a);N
                a_a = A0a(a, 0, a);N
            }N
            A_A_a(Aa_a_a( aA_N
                " a a %a (a_a a %" Aa ")...\a",N
                  (a)(a - a),N
                (A)(a_a - a)N
              ));N
N
        }N
    }N
    a {N
        A_A_A_a(N
            Aa_a_a( aA_N
                "  Aa-a a: a a:%" Aa " a:%" AaN
                " a_a:%" Aa " a_a:%" Aa " a_a-a_a:%" AaN
                " a:%" Aa "\a",N
                (A)a->a_a_a,N
                (A)a->a_a_a,N
                (A)(a_a-a),N
                (A)(a_a-a),N
                (A)(a_a-a_a),N
                (A)(a-a)N
            )N
        );N
    }N
N
  a_a_a:N
N
    /* a a a a a /^.../a a a */N
N
    a (a_a && a_a != a && a_a[-0] != '\a') {N
        a *a;N
N
        A_A_a(Aa_a_a( aA_N
                        "  a a /^/a a"));N
N
        /* a a a a a a a \a a a_a.N
         * Aa a a \a, a a, a a a'a a a aN
         * a a/a a a. Aa a a aN
         * a a a a a \a a a a a a a.N
         * Aa a a a a'a a a a a a aN
         * a a \a'a. Aa a a a, a a \a aN
         * a'a a a a a_a a "\a" a aN
         * a a a a "a" a a, aN
         * a a a a a'a a a a a a aN
         * a'a a a \a, a a a a a aN
         * aN
         */N
N
        a = A0a(a, - a->a, a);N
        a (a <= a_a ||N
            ! ( a_a = (a *)a(a_a, '\a', a - a_a)))N
        {N
            A_A_a(Aa_a_a( aA_N
                            "  Aa a a /%a^%a/a...\a",N
                            A_a[0], A_a[0]));N
            a a_a;N
        }N
N
        /* a a a a 0 a a a \a.N
         * (a *a_a == '\a', a'a a a ++ a a aN
         * A(a_a, 0)) */N
        a_a++;N
N
        a (a->a->a_a == 0  /* a a a */N
            || a_a >= A0a(a_a,  - a->a_a_a, a))N
        {N
            /* Aa a a-a; a aN
             * a a a (a a a a a a),N
             * a a a a a a_a a a a a a */N
            A_A_a(Aa_a_a( aA_N
                "  Aa /%a^%a/a, a a a a a a-a a a_a %a...\a",N
                A_a[0], A_a[0], (a)(a_a - a)));N
            a a;N
        }N
N
        /* a a a a, a a a a a a a,N
         * a a a, a a a a a a a a a aN
         * "a" a a a a */N
        a(a->a->a_a); /* a a a */N
N
        a (a0_a ? a->a_a0 : a->a_a) {N
            /* a, a a "a" a a, a a aN
             * a. Aa a a a, a a "a" aN
             * a'a a, a a a a a "a"N
             * a */N
            A_A_a(Aa_a_a( aA_N
                "  Aa /%a^%a/a, a a a a a %" Aa " (a_a a %" Aa ")...\a",N
                A_a[0], A_a[0],N
                (A)(a_a - a + a->a_a),N
                (A)(a_a - a)N
            ));N
            a a_a_a;N
        }N
N
        /* a: a a'a a a a a aN
         * (a a'a a a a). */N
        A_A_a(Aa_a_a( aA_N
            "  Aa /%a^%a/a a a_a %a...\a",N
            A_a[0], A_a[0], (a)(a_a - a)));N
    }N
    a {N
        A_A_a(Aa_a_a( aA_N
            "  (a a a a)\a"));N
    }N
N
  a_a_a:N
N
N
    /* a a a a a a a, a a a a a.N
     * (a a a a a a a a, a a a a aN
     * a a a a a) */N
N
    a (a->a && A_a[A(a->a)]!=A) {N
        a A0* a a = (A0*)A(a->a);N
N
        /* A a a a a a-a */N
        a Aa_a a_a = (A_a[A(a->a)] == AN
		    ?  (a->a_a0_aN
                        ? (Aa_a)a0_a(a + A_A(a->a), a)N
                        : (Aa_a)A_A(a->a))N
		    : 0);N
	a * a;N
        a *a;N
        /* a a a a a a a a a a a */N
        a *a_a_a = A;N
N
        /* a a a a_a a a, a a a aN
         * a a a, a a /^.../a a, a aN
         * a a a a a a a a a a'a aN
         * a a a a. Aa a a a a-a a, aN
         * a_a a a a a a; a a a a a aN
         * a a a. a a, a a a a a a a aN
         * a a a a a */N
N
        /* A A a'a a a a a a a a a, a aN
         * a'a a a a a a a. Aa a a a aN
         * a a == 0 a. Aa <0.A0@a.a>.N
         * Aa a a a a, a a a a a a a:N
         *N
	 *   a == 0 a a a a a \a a \A,N
	 *   a a a a a ''$.N
         *   Aa a a a a a a, a_a+0 aN
         *   a a; a, a >= 0 a a aN
         *   a a a_a + 0 a a \a a \A.  Aa (a? 0 :N
         *   0) a a a a a a a a a...N
	 *   Aa a a a a a 0: Aa a==0, A.N
         *   Aa a A-a a, a a a a aN
         *   a_a().N
         */N
N
	a (a->a_a || a->a_a0 || a_a)N
            a = A0a(a_a, (a->a ? a_a : 0), a);N
        a a (a->a_a || a->a_a0) {N
	    a_a_a = A0a(a_a, -a_a, a);N
	    a = A0a(a_a_a, a_a, a);N
        }N
        a N
            a= a;N
		    N
        A_A_a(Aa_a_a( aA_N
            "  a a a: a_a: %" Aa " a_a: %" AaN
            " a_a: %" Aa " a: %" Aa "\a",N
              (A)a_a, (A)(a_a - a),N
              (A)(a_a - a), (A)(a - a)));N
N
        a = a_a(a, a->a, a_a, a,N
                            a);N
	a (!a) {N
	    a (a == a) {N
                A_A_a( Aa_a_a( aA_N
				"  Aa a a A...\a") );N
		a a;N
	    }N
            A_A_a( Aa_a_a( aA_N
                               "  Aa a a A...\a") );N
            a ((a->a & Aa_A) && !a_aN
                        && !(a->a & Aa_A))N
		a a;N
N
	    /* Aa a a a */N
	    a (a->a_a || a->a_a0) {N
                a (a->a->a_a == 0) { /* a a a */N
                    /* Aa a, a_a a a */N
                    a(a_a + a_a <= a_a);N
                    a (a_a + a_a != a_a) {N
                        /* a a a a a a a a:N
                         * Aa a a, a a a.N
                         * Aa a a a a a a aN
                         * a a a. Aa'a a, aN
                         * a a a a a a a a 'aN
                         * a_a_a'. Aa a a, a a,N
                         * a a a a a a a, a aN
                         * a a a a_a() a a aN
                         * a a a. */N
                        A_A_a( Aa_a_a( aA_N
                            "  a a a a a a %a (a_a a %" Aa ")...\a",N
                            (a)(a_a - a),N
                            (A)(a_a - a)N
                        ));N
                        a a_a_a;N
                    }N
                }N
            }N
	    a {N
                /* a-a */N
N
                a (a_a) {N
                    /* Aa a a a a_a, a a a a aN
                     * a a \a a a a a aN
                     * a. */N
N
                    /* a a a a a A0a(..., 0, ...),N
                     * a a a a a a a a a'a a aN
                     * a a a a \a a a, a a a */N
                    a_a++;N
                    A_A_a( Aa_a_a( aA_N
                              "  a a a a /%a^%a/a a a a_a %a...\a",N
                              A_a[0], A_a[0],N
                              (a)(a_a - a)) );N
                    a a_a_a;N
                }N
N
                /* a a a a a a a; a aN
                 * a a a a a a a a */N
                a (!(a0_a ? a->a_a0 : a->a_a))N
                    a a;N
N
                a_a = a_a_a;N
            }N
N
            /* a a a, a a a a aN
             * a. Aa a... */N
N
            a_a = A0a(a_a, 0, a);N
N
            /* a a a a a a a a.N
             * Aa'a a: a a a a a a a 'a a',N
             * a a a a a a a a a-a a */N
            a (a_a + a_a + a_a > a) {N
                A_A_a( Aa_a_a( aA_N
                                       "  Aa a a A...\a") );N
                a a;N
            }N
            A_A_a( Aa_a_a( aA_N
                "  a a a a %a a a a a %a (a_a a %" Aa ")...\a",N
                (a->a->a_a ? "a" : "a"),N
                (a)(a_a + a_a - a),N
                (A)(a_a - a)N
            ));N
            a a;N
	}N
N
        /* Aa !!! */N
N
	a (a_a != a) {N
            A_A_a(Aa_a_a( aA_N
			"  Aa A: a %a --> %a\a",N
                                  (a)(a_a - a), (a)(a - a))N
                   );N
        }N
        a {N
            A_A_a(Aa_a_a( aA_N
                                  "  Aa a a A...\a");N
                   );N
        }N
    }N
N
    /* Aa a a a a a */N
N
    a (a_a != a) {N
	/* Aa a a a a a a a a aN
	   a a a a. */N
N
        A_A_a(Aa_a_a( aA_  "  a a a...\a"));N
	++AaA(a0_a ? a->a_a0 : a->a_a);	/* a/0 */N
    }N
    a {N
        /* Aa a a_a a a a a a aN
         * a, a a a a'a a a a. AaN
         * a AaA() a a a a a, a a a aN
         * a, a a.  */N
	a (!(a->a & Aa_A)N
	    && (a0_a ? (N
		a->a_a0		/* Aa a a a */N
		&& --AaA(a->a_a0) < 0N
		&& (a->a_a0 == a->a_a0)N
	    ) : (N
		a->a_a		/* Aa a a a */N
		&& --AaA(a->a_a) < 0N
		&& (a->a_a == a->a_a)N
	    )))N
	{N
	    /* Aa a & A - a a a a a a a a a a */N
            A_A_a(Aa_a_a( aA_  "  ... Aa a a...\a"));N
	    /* A Aa a a a a a a a a0_a? */N
	    AaA_a(a0_a ? a->a_a0 : a->a_a);N
	    AaA_a(a0_a ? a->a_a : a->a_a0);N
	    a->a_a = a->a_a0 = A;	/* a */N
	    a->a_a = a->a_a0 = A;	/* a */N
	    a = A;			/* a */N
	    /* A Aa a a a a a a a.  AaN
	            a a, a a A a a aN
	            a a. */N
	    a->a &= ~Aa_A_A;N
	}N
    }N
N
    A_A_a(Aa_a_a( aA_N
            "Aa: %aAa a:%a a a a %a\a",N
             A_a[0], A_a[0], (a)(a_a - a)) );N
N
    a a_a;N
N
  a_a:				/* Aa a a */N
    a (a->a_a || a->a_a0)		/* a a a a */N
	AaA(a0_a ? a->a_a0 : a->a_a) += 0; /* a */N
  a:N
    A_A_a(Aa_a_a( aA_  "%aAa a a a%a\a",N
			  A_a[0], A_a[0]));N
    a A;N
}N
N
N
#a A_A_A(a) \N
    a a { a_a, a_a0, a_a0_a, a_a_a0_a,       \N
                 a_a0_a_a, a_a_a0_a_a,              \N
                 a_a0a, a_a0, a_a0_a }                           \N
                    a_a = ((a->a == A)                             \N
                                 ? (a0_a ? a_a0 : a_a)           \N
                                 : (a->a == A)                          \N
                                    ? (a0_a ? a_a0a : a_a)       \N
                                    : (a->a == A)                     \N
                                      ? (a0_a                                \N
                                         ? a_a0_a_a                   \N
                                         : a_a_a0_a_a)            \N
                                      : (a->a == A0                   \N
                                         ? (a0_a                             \N
                                           ? a_a0                              \N
                                           : a_a0_a)                       \N
                                         : (a0_a                             \N
                                           ? a_a0_a                         \N
                                           : a_a_a0_a)))N
N
/* 'a' a a a a, a a, a a a a a a aN
 * 'a+a(a)' */N
#a A_A_A_A(a_a, a, a, a, a_a, a, a, a, a, a, a, a) \N
A_A {                                                                        \N
    A a;                                                                 \N
    A0 a = A_A_A;                                                     \N
    a (a_a) {                                                            \N
    a a_a0:                                                                 \N
        _A_A_A_A_A;                                         \N
        a (A0_A_A_A0(*a)) {                                            \N
            _A_A_A_A_A_A0_A(a, a_a);                     \N
        }                                                                           \N
        a a_a_a0_a;                                                     \N
    a a_a0_a_a:                                                    \N
        a |= A_A_A_A;                                            \N
        /* A */                                                           \N
    a a_a0_a:                                                            \N
      a_a_a0_a:                                                            \N
        a ( a>0 ) {                                                          \N
            a = a0a_a_a( (a A0*) a, a, &a, a );     \N
            a -= a;                                                         \N
            a += a;                                                           \N
            a=0;                                                                  \N
        } a {                                                                    \N
            a = _aA_a0_a( (a A0*) a, a_a, a, &a,    \N
                                                                            a); \N
            a = A0_A_A(a, a_a);                                       \N
            a = A_A( a );                                            \N
            a -= a;                                                     \N
            a = a + a;                                              \N
        }                                                                           \N
        a;                                                                      \N
    a a_a0_a:                                                           \N
        _A_A_A_A_A;                                         \N
        a a_a_a_a0_a;                                               \N
    a a_a_a0_a_a:                                              \N
        a |= A_A_A_A;                                            \N
        /* A */                                                           \N
    a a_a_a0_a:                                                      \N
      a_a_a_a0_a:                                                      \N
        a ( a>0 ) {                                                          \N
            a = a0a_a_a( (a A0*) a, a, &a, a );     \N
            a -= a;                                                         \N
            a += a;                                                           \N
            a=0;                                                                  \N
        } a {                                                                    \N
            a = 0;                                                                \N
            a = _a_a_a0( (A0) *a, a, &a, a);             \N
            a = A_A( a );                                            \N
            a -= a;                                                     \N
            a = a + a;                                              \N
        }                                                                           \N
        a;                                                                      \N
    a a_a0a:                                                                \N
        _A_A_A_A_A;                                         \N
        a (a0_a && A0_A_A_A0(*a)) {                             \N
            _A_A_A_A_A_A0_A(a, a_a);                     \N
        }                                                                           \N
        /* A */                                                           \N
    a a_a0:                                                                 \N
        a = a0a_a_a( (a A0*) a, a_a - a, &a, a );        \N
        a;                                                                      \N
    a a_a:                                                                \N
        a = (A)*a;                                                              \N
        a = 0;                                                                    \N
    }                                                                               \N
    a (a < 0) {                                                                \N
        a = a->a[ a ];                                              \N
    }                                                                               \N
    a {                                                                          \N
        a = 0;                                                                 \N
        a (a) {                                                          \N
            A** a a = a_a(a,                                 \N
                        (a*)&a, a(A), 0);                                \N
            a (a)                                                               \N
                a = (A0)AaA(*a);                                          \N
        }                                                                           \N
    }                                                                               \N
} A_AN
N
#a A_A_A(a,a,a0,a)                    \N
    a_a_a(a,a,(a->a),(a->a), \N
                a, a0, a)N
N
#a A_A_A(A0, A)                          \N
    A_A {                                            \N
        a (a < a) {                                \N
            A                                            \N
            a += ((A0)                                    \N
                  ? A0_A_A(a, a->a)      \N
                  : 0);                                     \N
        }                                                   \N
    } A_AN
N
#a A_A_A_A(A0, A)                    \N
    A_A {                                            \N
        a (a < a) {                                \N
            A_A_A_A_A(A0, A)           \N
        }                                                   \N
    } A_AN
N
#a A_A_A_A_A(A0, A)                  \N
    a (A) {                                                \N
        A_A_A_A                                      \N
        a += ((A0) ? A0_A_A(a, a->a) : 0);\N
        a_a_a = a;                           \N
    }                                                          \N
    a {                                                     \N
        a += ((A0) ? A0A(a) : 0);                       \N
    }N
N
#a A_A_A(A0,A)                         \N
    a (a0_a) {                                         \N
	A_A_A_A(0, A0);                     \N
    }                                                          \N
    a {                                                     \N
	A_A_A_A(0, A);                         \N
    }N
N
/* Aa a a a a a a a a a a a aN
 * a a a a'a a a.  Aa a, a a a a a a aN
 * a a a a a a a.  Aa 'a' a A, aN
 * a'a a a 0a a a a a */N
#a A_A_A_A                                           \N
        a (   (   a                                          \N
                || a != a_a_a)                    \N
            && (   a->a                                  \N
                || (a <= a->a && a(a, &a))))  \N
        {                                                           \N
            a a_a;                                            \N
        }N
N
N
/* Aa a a a a a a a a a a a a aN
 * a a a a a a a a a a 'a'; a 'a' aN
 * a a a a a. */N
#a A_A_A_A_A(A0, a)                   \N
    a (a < a) {                                    \N
        a = (a);                                            \N
        a (a >= a) {                                  \N
            a;                                          \N
        }                                                   \N
                                                            \N
        A_A_A_A                                   \N
        a += (A0) ? A0A(a) : 0;                      \N
        a_a_a = a;                        \N
    }N
N
/* Aa a a a a a a a a a a a a a aN
 * a a a a a a a a a a a a a a 'a'.N
 * Aa a a a a a a a a a 'a', a a 'A'N
 * a a a. */N
#a A_A_A_A_A0_A_A(a, A)      \N
    a (a < a) {                                    \N
        a = (a *) a(a, a, a -a);            \N
        a (a == A) {                                    \N
            a = (a *) a;                            \N
            a;                                          \N
        }                                                   \N
                                                            \N
        a (A) {                                         \N
            A_A_A_A                               \N
            a += A0_A_A(a, a->a);        \N
            a_a_a = a;                    \N
        }                                                   \N
        a {                                              \N
            a += A0A(a);                               \N
        }                                                   \N
    }N
N
/* Aa a a a a a a a a a a a.N
 *N
 * Aa a a a /a a /a a a a a a A-0.  Aa a aN
 * a a, a a a a a a A-0.   Aa a a a aN
 * a-A-0 a a a a A-0 a.   Aa a a, a a aN
 * a a a (a a-a) a a a a a-a a.N
 * Aa a0 a a-a0 a a a a a, a a a a aN
 * a.  Aa a "a" a a a a a a a a, aN
 * a a a a a a a a.  Aa a a, a a aN
 * a.  Aa a a a a a, a a a aN
 * a a a a-a.N
 *N
 * Aa a a a a a-a a a a a aN
 * a.  Aa a a'a a a a a a a-aN
 *N
 * A_A_A0 a a a a a a a a a a a a a aN
 *               a a a a a.N
 * A_A    a a a a a a a a a a a a a aN
 *               a/a-aN
 * A_A       a a a a a a a'a a a a a a/a-aN
 *N
 * Aa a a a a A_A a a a a-a, a a a aN
 * a a a a a a a a a-a.  Aa a a a a aN
 * a, a a A_A a a a a-a, a a A_A a a a aN
 * a a a a a a a, a a a, a a a aN
 * a.  Aa a-a a a a a a a a-a.N
 *N
 * 'a' a a a a a a a a A_A_A aN
 * A_A_A a a a a a, a a a a a aN
 * A_A_A0(a-0).  Aa a a, a a a'a a a a a a aN
 * a a a a a, a a a a a A_A a, a a aN
 * A_A_A0(a), a a a a a, A_A, a a aN
 * a.  Aa a a a a a a, a a a aN
 * a a a a a a a a a a a a A_A_A0(a),N
 * a a a a a a a a a a a a, a aN
 * A_A_A0(a-0) */N
#a A_A0_A(A_A_A0, A_A, A_A)                         \N
    a = (a != a->a) ? A(a - 0) : '\a';                      \N
    a = A_A_A0(a);                                                  \N
    A_A_A(0,  /* 0=>a-a0; a a a a < a */           \N
        a (a == ! A_A_A0((A0) *a)) {                                 \N
            a = !a;                                                        \N
            A_A; /* Aa a a a a a a-0 a a a */     \N
        }                                                                      \N
        a {                                                                 \N
            A_A;                                                           \N
        }                                                                      \N
    );                                                                         \N
N
/* Aa A_A0_A, a A_A a a a a a a A a a a, aN
 * A_A0 a a a a a a a a a a a aN
 * a A_A, a a a a a a A-0 a a a */N
#a A_A0(A_A, A_A0, A_A, A_A)                      \N
    a (a == a->a) {                                                \N
        a = '\a';                                                            \N
    }                                                                          \N
    a { /* Aa-a a a a a a a a */                \N
        A0 * a a = a0((A0*)a, -0, (A0*)a->a);              \N
        a = a0a_a_a(a, (A0*) a->a - a,                     \N
                                                       0, A0_A_A); \N
    }                                                                          \N
    a = A_A(a);                                                        \N
    A_A_A(0,  /* 0=>a-a0; a a a a < a */           \N
        a (a == ! (A_A0((A0 *) a, (A0 *) a->a))) {          \N
            a = !a;                                                        \N
            A_A;                                                        \N
        }                                                                      \N
        a {                                                                 \N
            A_A;                                                           \N
        }                                                                      \N
    );N
N
/* Aa a a a a.  A0_A a a a a a aN
 * A-0.  Aa a a A a A a, a-a a a A_A, aN
 * a a */N
#a A_A_A(A0_A, A_A_A0, A_A, A_A)        \N
    a (a0_a) {                                                         \N
        A0_A                                                              \N
    }                                                                          \N
    a {  /* Aa a0 */                                                     \N
	a = (a != a->a) ? A(a - 0) : '\a';                  \N
	a = A_A_A0(a);                                              \N
	A_A_A(0, /* 0=>a-a0; a a a a < a */       \N
	    a (a == ! A_A_A0((A0) *a)) {                             \N
		A_A;                                                    \N
		a = !a;                                                    \N
	    }                                                                  \N
	    a {                                                             \N
		A_A;                                                       \N
	    }                                                                  \N
	);                                                                     \N
    }                                                                          \N
    /* Aa, a a a a a a a a a a a a a a   \N
     * a a A_A_A(a-0) a A_A0(a-0) (a a a         \N
     * a0a a a a).  Aa a a a a a a a a \N
     * a A, a a a a a \a (a a a a a a a A-0  \N
     * a a-A0, a a a a a-a0 a a a a a A-0    \N
     * a */                                                               \N
    a (a == ! A_A_A0('\a')) {                                        \N
        A_A;                                                            \N
    }                                                                          \N
    a {                                                                     \N
        A_A;                                                               \N
    }N
N
/* Aa a a a a a a a a a a a a a a a aN
 * a a, a a, a a a a a a.  Aa a a a aN
 * a a a a a, a a a a a a a a aN
 * a (a a a a a a a a a a a aN
 * a) */N
#a A_A_A                                                     \N
    a (a->a || (a <= a->a && a(a, &a)))   \N
        a a_aN
N
/* Aa a a a a A a A a a aN
 * A_A_A a a a a a A, a a a-a aN
 * A.  Aa a a a a a a a a a a a a,N
 * a a a a a a (A a a a a).N
 *N
 * Aa A_A a a a a a a a a a, aN
 * a a a a a a a a a a a aN
 * a */N
#a A_A(A_A_A0, A_A, A_A0)                           \N
    A_A_A(                                                          \N
          A_A0(A_A, A_A0, A_A_A, A),          \N
          A_A_A0, A_A_A, A)N
N
#a A_A_A(A_A_A0)                                             \N
    A_A_A(                                                          \N
            A_A0_A(A_A_A0, A_A_A, A),           \N
            A_A_A0, A_A_A, A)N
N
#a A_A(A_A_A0, A_A, A_A0)                          \N
    A_A_A(                                                          \N
          A_A0(A_A, A_A0, A, A_A_A),          \N
          A_A_A0, A, A_A_A)N
N
#a A_A_A(A_A_A0)                                            \N
    A_A_A(                                                          \N
            A_A0_A(A_A_A0, A, A_A_A),           \N
            A_A_A0, A, A_A_A)N
N
#a AN
a AN
A_a_a_a_a_a(A* a a, a A a_a) {N
  A a_a = _a_a(a, a_a);N
  a(a_a >= 0);N
  a a_a;N
}N
#  a _a_A_A_A_A_A(a, a, a) \N
	a[A_a_a_a_a_a(a, a)]N
#aN
#  a _a_A_A_A_A_A(a, a, a) \N
	a[_a_a(a, a)]N
#aN
N
/* Aa a a a a a a, a a a a aN
 * a a, a a a a, a a a a a'a aN
 * a a a a a.  Aa a a a a a a a a.N
 * Aa a a a a a a a a a a a */N
#a _a_A_A_A_A(a, a, a)              \N
	_a_A_A_A_A_A(a, a, a)N
N
/* Aa a a, a a a, a a a a A-0 a a aN
 * a a a a, a a a a a a a a a a a.N
 * Aa a a a a a a a a a a a a aN
 * a a.  Aa a a A-0 a a a a a a a a */N
#a _a_A_A_A_A0(a_a, a, a)                     \N
             (__A_(a < a)                                          \N
                 /* Aa a a a A-0 */                             \N
             (a_a(a0_a_a_a((a), (a), A))))N
N
/* Aa a A a a a a a a */N
#a aA_A_A(a)                                                      \N
          _a_A_A_A_A(                                           \N
                                    A_A_a,                            \N
                                    _Aa_A_a,                          \N
                                    (a))N
N
/* Aa a A a a a a a a a a A-0 a aN
 * a a a a a */N
#a aA_A_A0(a, a)                                           \N
    _a_A_A_A_A0(aA_A_A, a, a)N
N
/* Aa a A a a a a a a */N
#a aA_A_A(a)                                                       \N
          _a_A_A_A_A(                                           \N
                                    A_A_a,                             \N
                                    _Aa_A_a,                           \N
                                    (a))N
N
/* Aa a A a a a a a a a a A-0 a aN
 * a a a a a */N
#a aA_A_A0(a, a)                                            \N
    _a_A_A_A_A0(aA_A_A, a, a)N
N
N
/* Aa a A a a a a a a */N
#a aA_A_A(a)                                                       \N
          _a_A_A_A_A(                                           \N
                                    A_A_a,                             \N
                                    _Aa_A_a,                     \N
                                    (a))N
N
/* Aa a A a a a a a a a a A-0 a aN
 * a a a a a */N
#a aA_A_A0(a, a)                                            \N
    _a_A_A_A_A0(aA_A_A, a, a)N
N
/* Aa a A a a a a a a */N
#a aA_A_A(a)                                                       \N
          _a_A_A_A_A(                                           \N
                                    A_A_a,                             \N
                                    _Aa_A_a,                         \N
                                    (a))N
N
/* Aa a A a a a a a a a a A-0 a aN
 * a a a a a */N
#a aA_A_A0(a, a)                                            \N
    _a_A_A_A_A0(aA_A_A, a, a)N
N
/* Aa a a a Aa a a.  Aa a a a a... */N
/* a a->a, a a a */N
/* a a a a a a a a a a a a aN
   a a. /a */N
A a *N
A_a_a(aA_ a * a, a a *a, a *a, N
    a a *a, a_a *a)N
{N
    aA;N
N
    /* A a a+ a a a a a a 0a a a a a a'a */N
    a A0 a = (a->a & Aa_A) == 0;N
N
    a *a_a;   /* Aa a'a a a */N
    a *a_a;	    /* a a a a a a_a */N
    a_a_a a;	/* Aa a a a-a0 a */N
    a A0 *a_a;   /* a a a a < 0 */N
    A a;N
    A a;N
    A0 a0;N
    A0 a0;N
    a *a = A;N
N
    /* Aa a a a a a a a a a 'a' a a a aN
     * a.  Aa a a a a a a a a a aN
     * a a 'a', a a a a a a a a a a.  (AaN
     * a a a a a 'a' a a a a a A-0 a a aN
     * a a.) */N
    a * a_a_a = 0;N
N
    A0 a;            /* Aa a */N
    a a a0_a = a->a_a0_a;N
    A a0_a_a = 0;N
    a a a_a0_a = a->a_a0_a;N
    a a_a = A; /* Aa a a?  Aa a a a aN
                                   a a a a a a, a 0^0 =N
                                   0 a 0^0 = 0 */N
    _a_a_a a;N
N
    Aa_A_A(a,a);N
N
    A_A_A_A_A;N
N
    /* Aa a a a a a a a. */N
    a (A(a)) {N
    a A:N
    a A:N
        _A_A_A_A_A;N
N
        a (A_A0_A_A(A(a)) && ! A_A0_A_A) {N
            Aa_a_a(aA_ aA(A_A), a0_a_a);N
        }N
N
        /* A */N
    a A:N
    a A:N
        a (a0_a) {N
            A_A_A_A(0, /* 0=>a-a0 */N
                      a(a, a, (A0*)a, (A0*) a, a0_a));N
        }N
        a a (A_A(a) & ~ A_A_A_A_A) {N
            /* Aa a a a a a a a a a a a a'aN
             * A-0, a a a a a-a-a a a a a,N
             * a a a a a a */N
            A_A_A_A(0, a(a,a, (A0*)a, (A0*)a+0, 0));N
        }N
        a {N
            A_A_A_A(0, A_A_A(a, *((A0*)a)));N
        }N
        a;N
N
    a A:    /* A() a a a a; A() a a a */N
        /* A-0a a'a a a a a A-0 a, aN
         * a 0 */N
        A_A_A_A_A(0,N
         (a *) a_a_a((A0 *) a, (A0 *) a,N
                                   (A0) A(a), A(a)));N
        a;N
N
    a A:   /* A-0a a a a a a A-0 a.N
                     */N
        A_A_A_A_A(a0_a,N
         (a *) a_a_a_a((A0 *) a, (A0 *) a,N
                                   (A0) A(a), A(a)));N
        a;N
N
    a A:N
        a (a0_a) {  /* Aa'a a a a a-A-0 a */N
            A_A_A_A(A,N
                  (   (A0) A_A0_A_A0(*a) >= A_A(a)N
                   && a(a, a, (A0*)a, (A0*) a, a0_a)));N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {  /* Aa'a a a a a-A-0 a */N
N
            /* Aa a a a a a a a a a a a */N
            A0 a_a = A(a);N
N
            A_A_A_A_A0_A_A(a_a,N
                      a(a, a, (A0*)a, (A0*) a, a0_a));N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {  /* Aa'a a a a a-A-0 a */N
            A_A_A_A(A,N
                  (   aA(A_A0_A_A0(*a),N
                              A_A_Aa_A(A_A(a)),N
                              A_A_Aa_A(A_A(a)))N
                   && a(a, a, (A0*)a, (A0*) a, a0_a)));N
        }N
        a;N
N
    a A:N
        a (a0_a) {N
            A_A_A_A(A,N
                  (   A_A0_A_A0(*a) >= A_A(a)N
                   && aA(a0_a_a_a((A0 *) a,N
                                                    (A0 *) a,N
                                                    A),N
                                  Aa(a), Aa(a))));N
        }N
        a {N
            A_A_A_A(0, aA((A0) *a,N
                                               Aa(a), Aa(a)));N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {N
N
            /* Aa a a a a a a a a a a a */N
            A0 a_a = A(a);N
N
            A_A_A_A_A0_A_A(a_a,N
                      aA(a0_a_a_a((A0 *) a,N
                                                    (A0 *) a,N
                                                    A),N
                                  Aa(a), Aa(a)));N
        }N
        a {N
            A_A_A_A(0, aA((A0) *a,N
                                               Aa(a), Aa(a)));N
        }N
        a;N
N
    a A_A_A: /* Aa a a a a a-a0 a */N
        a(! a_a0_a);N
	/* A */N
    a A:N
        a (a_a0_a) {N
            a0_a_a = A_A0_A_AN
                             |A_A0_A_A|A_A0_A_A;N
            a a_a_a0;N
        }N
        a a (a0_a) {N
N
            /* Aa, a a a a a, a a a a'a a aN
             * a-A-0 a a a a a a a a A-0N
             * a a a a A A a a a a'a a a.N
             * Aa a a a a A A a A-0 a a, aN
             * a a a a-A-0 a a a a aN
             * a-A-0 a */N
            a0_a_a = A_A0_A_A;N
            a a_a_a0;N
        }N
N
        /* Aa0 a a a a a /a, a a a a a a,N
         * a a a a'a a a */N
        a_a = A_a_a0;N
        a = aA_a0_a0_a;N
        a a_a_a_a0;N
N
    a A:   /* Aa a a a a a-a0 a */N
        a(! a_a0_a);N
        a (a0_a) {N
            a a_a_a0;N
        }N
        a_a = A_a;N
        a = aA;N
        a a_a_a_a0;N
N
    a A:N
        _A_A_A_A_A;N
        a (a_a0_a || a0_a || A_A0_A_A) {N
            a0_a_a = A_A;N
            a a_a_a0;N
        }N
        a_a = A_a_a;N
        a = aA_a;N
        a a_a_a_a0;N
N
    a A:      /* Aa a a a a'a A-0.  AaN
                           a a a a a a aN
                           A-0 */N
        a(! a_a0_a);N
        a a_a_a0;N
N
    a A0:N
            a (! a0_a) {    /* Aa a a a a a aN
                                       A-0 a a.  */N
                a;N
            }N
            a0_a_a =  A_A | A_A0_A_AN
                                             | A_A0_A_A;N
            a a_a_a0;N
N
    a A_A0:N
        a (! a0_a) {N
            a;N
        }N
        a(a_a0_a);N
        a0_a_a = A_A0_A_A;N
        a a_a_a0;N
N
    a A:N
        a (a_a0_a || a0_a) {N
            a0_a_a = A_A0_A_A;N
            a a_a_a0;N
        }N
N
        /* Aa 'a' a a a a a a a a a,N
         * a a a'a a a a a a a a a aN
         * a a Aa0 a */N
        a_a = A_a_a0;N
        a = aA_a0_a0_a;N
N
        /* A */N
N
      a_a_a_a0: /* Aa a a a a A0, a aN
                           a a a a a-a aN
                           a a a a a a */N
N
        /* Aa a a a a-a0 A* a a a a a aN
         * a a a a A* a a a, a a,N
         * a-a a a a a a a a.  a0 a aN
         * a a.  a0 a a a.  Aa a a a a aN
         * Aa a a a a a a, a a aN
         * a a a a a a a a a. */N
        a_a = Aa(a);N
        a  = A_Aa(a);	/* a a a a a/a */N
N
        /* Aa a a a a a a a a 'a' a (a a aN
         * a a a, a a a0).  Aa a a a a 0N
         * a, a a a a 0 a, a a aN
         * a a a a a; a a'a a a a a aN
         * a a a a a a a */N
        a = A0a(a, -((Aa_a)a), a);N
        a (a < a)N
            a;N
N
        a0 = *a_a;N
        a0 = a_a[a0];N
        a (a0 == a0) { /* Aa a a a a a a */N
            a (a <= a) {N
                a = (a *) a(a, a0, a + 0 - a);N
                a (a == A) {N
                    a;N
                }N
N
                /* Aa a a a a a a a */N
                a (   (a == 0 || a(a + 0, a_a + 0, a - 0))N
                    && (a->a || a(a, &a)) )N
                {N
                    a a_a;N
                }N
                a++;N
            }N
        }N
        a {N
            A0 a_a = a0 ^ a0;N
N
            /* Aa a a a a a a a a, a a a aN
             * a a a a, a a a a a a a.  AaN
             * A a A a a a a a a a a aN
             * a a, a a a a a */N
            a (A(A_a[a_a] == 0)) {N
                a_a = ~ a_a;N
                a (a <= a) {N
                    a = (a *) a_a_a((A0 *) a, (A0 *) a + 0,N
                                        (a0 & a_a), a_a);N
                    a (a > a) {N
                        a;N
                    }N
N
                    a (   (a == 0 || a(a + 0, a_a + 0, a - 0))N
                        && (a->a || a(a, &a)) )N
                    {N
                        a a_a;N
                    }N
                    a++;N
                }N
            }N
            a {  /* Aa, a a a a-a-a-a.  AaN
                       a a a a a A a */N
                a (a <= a) {N
                    a (    (*(A0*)a == a0 || *(A0*)a == a0)N
                        && (a == 0 || a(a + 0, a_a + 0, a - 0))N
                        && (a->a || a(a, &a)) )N
                    {N
                        a a_a;N
                    }N
                    a++;N
                }N
            }N
        }N
        a;N
N
      a_a_a0:N
      {N
        a a;N
N
        /* Aa a a a a a a a0, a a'a a a a aN
         * a, a a a a a a a a a a aN
         * a a, a a a a a, a a- a a */N
        a_a = Aa(a);N
        a  = A_Aa(a);	/* a a a a a/a */N
        a_a = a_a + a;N
        a = a_a0_a       /* a a a a a */N
                ? a0_a((A0 *) a_a, (A0 *) a_a)N
                : a;N
N
        /* Aa a 'a' a a a a a a, a a aN
         * a-a a, a a a a a a aN
         * a a 0 a (Aa a a a a aN
         * a) a a a a0-a; a a a 0 a a (a a aN
         * a a a Aa 0 a a a a, a aN
         * a a-a a a a a a a a-a a aN
         * 'a'.  Aa, a a a a a a a a 0/0 a aN
         * a a.  Aa a a, a a, a aN
         * a a a a a a a 0+0/0 a, a a a 0. */N
        a = (a0_a) ? A0_A_A_A_A : 0;N
        a = (a + a - 0) / a;N
N
        /* Aa a a a-A0 a, a a a a a 0 a, aN
         * a 0 a a, a'a a a a, a a'a a aN
         * a a a a a a a a a a a a aN
         */N
        a = A0a(a, -((Aa_a)a), a);N
N
        /* A Aa a a a a a a a a a a,N
         * a a a a a a a a a a, a a aN
         * a a a a a a a a a a a a a.N
         * Aa a a a a a a a a a a aN
         * a a a a a a a a a.  Aa aN
         * a a a */N
N
        a (a <= a) {N
            a *a_a= (a *)a;N
            a (aA_a0_a(a, &a_a, 0,  a0_a,N
                  a_a, A, a, a_a0_a, a0_a_a)N
                && (a->a || a(a, &a)) )N
            {N
                a a_a;N
            }N
            a += (a0_a) ? A0_A_A(a, a->a) : 0;N
        }N
        a;N
    }N
N
    a A:N
        _A_A_A_A_A;N
        a (A(a) != A_A) {N
            a (! A_A0_A_A) {N
                Aa_a_a(aA_ aA(A_A),N
                                                A_A_A_A0_A_A_A);N
            }N
            a a_a;N
        }N
N
        A_A(aA_A, aA_A_a, aA_A_a0_a);N
        a;N
N
    a A:N
        _A_A_A_A_A;N
        a (A(a) != A_A) {N
            a (! A_A0_A_A) {N
                Aa_a_a(aA_ aA(A_A),N
                                                A_A_A_A0_A_A_A);N
            }N
            a a_a;N
        }N
N
        A_A(aA_A, aA_A_a, aA_A_a0_a);N
        a;N
N
    a A: /* a.a a a a a a a a a \aN
                   a */N
        a(A(a) == A_A);N
N
        A_A(aA, aA_a, aA_a0_a);N
        a;N
N
    a A: /* a.a a a a a a a a a \aN
                   a */N
        a(A(a) == A_A);N
N
        A_A_A(aA_A);N
        a;N
N
    a A: /* a.a a a a a a a a a \aN
                   a */N
        a(A(a) == A_A);N
N
        A_A(aA, aA_a, aA_a0_a);N
        a;N
N
    a A: /* a.a a a a a a a a a \aN
                   a */N
        a(A(a) == A_A);N
N
        A_A_A(aA_A);N
        a;N
N
    a A:N
        a ((a_a) A(a) == A_A) {N
            A_A(aA_A0, aA_a, aA_a0_a);N
            a;N
        }N
N
      a_a:N
N
        a_a = 0;N
        /* A */N
N
    a A:N
      a_a:N
        a((a_a) A(a)) {N
            a A_A:N
                A_A(aA_A0, aA_a, aA_a0_a);N
                a;N
            a A_A:N
                a (a == a->a) {N
                    a (a->a || a(a, &a))N
                    {N
                        a a_a;N
                    }N
N
                    /* Aa'a a.  Aa a a a a (a a a a) */N
                    a += (a0_a) ? A0_A_A(a, a->a) : 0;N
                    a (A(a >= a->a)) {N
                        a;N
                    }N
                }N
N
                a (a0_a) {N
                    A_a a = aA_A_A0(N
                                               a0((A0*)a, -0,N
                                                       (A0*)(a->a)),N
                                               (A0*) a->a);N
                    a (a < a) {N
                        A_a a = aA_A_A0((A0*) a,N
                                                        (A0*) a->a);N
                        a (   (a_a ^ aA(a,N
                                                      a,N
                                                      (A0*) a->a,N
                                                      (A0*) a,N
                                                      a0_a))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a += A0_A_A(a, a->a);N
                    }N
                }N
                a {  /* Aa a0.  Aa a a A a a A aN
                           A */N
                    a (a < a) {N
                        a ((a_a ^ (   A(a - 0) != '\a'N
                                              || A(a) != '\a'))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a++;N
                    }N
                }N
N
                /* Aa, a a a a a, a a a a a aN
                 * a a a a */N
                a (   a->aN
                    || (a <= a->a && a(a, &a)))N
                {N
                    a a_a;N
                }N
                a;N
N
            a A_A:N
                a (a == a->a) {N
                    a (a->a || a(a, &a)) {N
                        a a_a;N
                    }N
                    a += (a0_a) ? A0_A_A(a, a->a) : 0;N
                    a (A(a >= a->a)) {N
                        a;N
                    }N
                }N
N
                a (a0_a) {N
                    A_a a = aA_A_A0(a0((A0*)a,N
                                                               -0,N
                                                               (A0*)(a->a)),N
                                                       (A0*) a->a);N
                    a (a < a) {N
                        A_a a = aA_A_A0((A0*) a, (A0*) a->a);N
                        a (a_a ^ aA(a,N
                                                 a,N
                                                 (A0*) a->a,N
                                                 (A0*) a,N
                                                 (A0*) a->a,N
                                                 a0_a)N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a += A0_A_A(a, a->a);N
                    }N
                }N
                a {  /* Aa a0. */N
                    A_a a = aA_A_A((A0) *(a -0));N
                    a (a < a) {N
                        A_a a = aA_A_A((A0) *a);N
                        a (a_a ^ aA(a,N
                                                 a,N
                                                 (A0*) a->a,N
                                                 (A0*) a,N
                                                 (A0*) a->a,N
                                                 a0_a)N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a++;N
                    }N
                }N
N
                a (   a->aN
                    || (a <= a->a && a(a, &a)))N
                {N
                    a a_a;N
                }N
N
                a;N
N
            a A_A:N
                a (a == a->a) {N
                    a (a->a || a(a, &a)) {N
                        a a_a;N
                    }N
                    a += (a0_a) ? A0_A_A(a, a->a) : 0;N
                    a (A(a >= a->a)) {N
                        a;N
                    }N
                }N
N
                a (a0_a) {N
                    A_a a = aA_A_A0(a0((A0*)a,N
                                                        -0,N
                                                        (A0*)(a->a)),N
                                                      (A0*) a->a);N
                    a (a < a) {N
                        A_a a = aA_A_A0((A0*) a,N
                                                         (A0*) a->a);N
                        a ((a_a ^ aA(a,N
                                                  a,N
                                                  (A0*) a->a,N
                                                  (A0*) a,N
                                                  (A0*) a->a,N
                                                  a0_a))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a += A0_A_A(a, a->a);N
                    }N
                }N
                a {  /* Aa a0. */N
                    A_a a = aA_A_A((A0) *(a -0));N
                    a (a < a) {N
                        A_a a = aA_A_A((A0) *a);N
                        a ((a_a ^ aA(a,N
                                                  a,N
                                                  (A0*) a->a,N
                                                  (A0*) a,N
                                                  (A0*) a->a,N
                                                  a0_a))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a++;N
                    }N
                }N
N
                /* Aa a a a a a a a a a.  Aa AN
                 * a a a a a, a a, a a aN
                 * a */N
                a (   a->aN
                    || (a <= a->a && a(a, &a)))N
                {N
                    a a_a;N
                }N
N
                a;N
N
            a A_A:N
                a (a == a->a) {N
                    a (a->a || a(a, &a)) {N
                        a a_a;N
                    }N
                    a += (a0_a) ? A0_A_A(a, a->a) : 0;N
                    a (A(a >= a->a)) {N
                        a;N
                    }N
                }N
N
                a (a0_a) {N
                    /* Aa a a a a a a_a_0 a a_a_0.N
                     * Aa a a a a a a a a_a_-0 a aN
                     * a a a a.   Aa a a a a a aN
                     * a, a a a, a a a a aN
                     * a a */N
                    A_a a = A_A;N
                    A_a a = aA_A_A0(N
                                              a0((A0*)a,N
                                                      -0,N
                                                      (A0*)(a->a)),N
                                              (A0*) a->a);N
                    a (a < a) {N
                        A_a a = aA_A_A0((A0*) a,N
                                                        (A0*) a->a);N
                        a ((a_a ^ aA(a,N
                                                  a,N
                                                  a,N
                                                  (A0*) a->a,N
                                                  (A0*) a,N
                                                  (A0*) a->a,N
                                                  a0_a))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a = a;N
                        a += A0_A_A(a, a->a);N
                    }N
                }N
                a {  /* Aa a0. */N
                    A_a a = A_A;N
                    A_a a = aA_A_A((A0) *(a -0));N
                    a (a < a) {N
                        A_a a = aA_A_A((A0) *a);N
                        a ((a_a ^ aA(a,N
                                                  a,N
                                                  a,N
                                                  (A0*) a->a,N
                                                  (A0*) a,N
                                                  (A0*) a->a,N
                                                  a0_a))N
                            && (a->a || a(a, &a)))N
                        {N
                            a a_a;N
                        }N
                        a = a;N
                        a = a;N
                        a++;N
                    }N
                }N
N
                a (   a->aN
                    || (a <= a->a && a(a, &a)))N
                {N
                    a a_a;N
                }N
        }N
        a;N
N
    a A:N
        A_A_A(a_A_a0_a(a, a),N
                        a_A_a0_a(a, a)N
        );N
        a;N
N
    /* Aa a a a a A a a a a a a a a aN
     * _a_aA() a a a a a a a A_a[] */N
N
    a A:N
        a_a = 0;N
        /* A */N
N
    a A:N
        _A_A_A_A_A;N
        A_A_A(a_a ^ aA(aA_a0_a(A(a), (A0 *) a, (A0 *) a)),N
                        a_a ^ aA(aA_a(A(a), *a)));N
        a;N
N
    a A:N
        a_a = 0;N
        /* A */N
N
    a A:N
        a (a0_a) {N
            a a_a0;N
        }N
        a a;N
N
    a A:N
        a (a0_a) {N
            /* Aa a a a a a a A a aN
             * a-A, a a a A a a'a a a a. */N
            A_A_A_A(0,   ! aA_a0_a(a, a)N
                                   || ! _a_aA_A(*a, A(a)));N
            a;N
        }N
N
        a_a = 0;N
        a a;N
N
    a A:N
        /* Aa'a a a a a a0, a a a a a a aN
         * a a a.  Aa a a a a a a,N
         * a a a a a a a a a aN
         * a */N
        a (a0_a) {N
            A_A_A_A(0, _a_aA_A(*a, A(a)));N
            a;N
        }N
N
      a:N
        A_A_A_A(0, /* 0=>a-a0 */N
                        a_a ^ aA(_a_aA_A(*a, A(a))));N
        a;N
N
    a A:N
        a_a = 0;N
        /* A */N
N
    a A:N
        a (! a0_a) {N
            A_A_A_A(0, /* 0=>a-a0 */N
                                 a_a ^ aA(_a_aA(*a,N
                                                                    A(a))));N
        }N
        a {N
N
          a_a0:N
            a = (_a_a_a) A(a);N
            a (a) {N
                a:N
                    A_A_A_A(0, /* 0=>a-a0 */N
                        a_a ^ aA(_a_a_a(N
                                              A_Aa_a[a],N
                                              a0_a_a_a((A0 *) a,N
                                                                (A0 *) a,N
                                                                A))));N
                    a;N
                a _A_A_A:N
                    A_A_A_A(0, /* 0=>a-a0 */N
                        a_a ^ aA(aA_a0_a(a, a)));N
                    a;N
N
                a _A_A_A:N
                    A_A_A_A(0,N
                        a_a ^ aA(aA_a0_a(a, a)));N
                    a;N
N
                a _A_A_A:N
                    A_A_A_A(0,N
                       a_a ^ aA(aA_a0_a(a, a)));N
                    a;N
N
                a _A_A_A:N
                    A_A_A_A(0,N
                       a_a ^ aA(aA_a0_a(a, a)));N
                    a;N
N
                a _A_A_A:N
                    A_A_A_A(0,N
                        a_a ^ aA(aA_a0_a(a, a)));N
                    a;N
            }N
        }N
        a;N
N
    a A:N
    a A:N
        {N
            A_A_A(a);N
            /* a a a a a a a */N
            a_a_a *a = (a_a_a*)a->a->a[ A( a ) ];N
            a_a_a *a = (a_a_a*)a->a->a[ a->a ];N
            A *a = A_A(a->a->a[ a->a + 0 ]);N
N
            a a *a_a = a - a->a;N
#a AN
            a a *a_a = a;N
#aN
            A a = a->a;N
            A *a_a;N
            A0 **a; /* a a a a a a a a aN
                            a a a a a. Aa A aN
                            a a a a a aN
                            a a 0:0, a a Aa, aN
                            a a Aa a a a a. */N
            A0 a[ A0_A_A + 0 ];N
            A0 *a=A;N
N
N
            A_A_A_A_A;N
N
            /* Aa a'a a a a a. Aa a a a a aN
             * a A a a a a a a a a a a aN
             * a a a */N
            A;N
            A;N
            a_a=aA(a * a(A0 *));N
            AaA_a(a_a,N
                a * a(A0 *));N
            AaA_a(a_a);N
            a_0a(a_a);N
            a=(A0**)AaA_a(a_a );N
            a ( a_a != a_a0_aN
                 && (a->a || A(a)==A) )N
            {N
                a (a->a)N
                    a=(A0*)a->a;N
                aN
                    a=(A0*)A_A(a);N
            }N
            /* a a a Aa-Aa a a a aN
               a a a a a a "a a" a.N
               Aa a a a a a a A a a a a a aN
               a a a a a, a a a a a aN
               (a a a a a a a a) a a aN
               a a a a a a a.N
               A a a a a a a a, a a aN
               a a a a a, a a a a a aN
               a "a a", a a a a a a, a aN
               a a a a a a a a, a 0, a a aN
               a. Aa a a a a a a a a a aN
               a a a a a a a a a, aN
               a a a a a a a a a a a.N
N
             */N
            a (a <= a_a) {N
                a A0 a = A0_A_A;N
                A0 *a = (A0*)a;N
                A0 a = 0;N
                A0 a = 0;N
                A0 a = 0;N
                A a = 0;N
                A a = 0;N
                A a = 0;N
                A0 *a = (A0*)A;N
                A0 *a = A;N
#a AN
                A0 a_a= 0;N
#aN
                A0 a = 0;N
N
                a ( a && a <= (A0*)a ) {N
                    a a=0;N
                    A0 a = a->a[ a ].a;N
N
                    a( a==0 ) {N
                        a ( a ) {N
                            A_A_A_a(N
                                a ( a <= (A0*)a_a && !A_A(a,*a) ) {N
                                    a_a_a( (a *)a, a, a, a_a,N
                                        (a *)a, a0_a, 0 );N
                                    Aa_a_a( aA_N
                                        " Aa a a a a...\a");N
                                }N
                            );N
                            a (a0_a) {N
                                a ( a <= (A0*)a_a && !A_A(a,*a) ) {N
                                    a += A0A(a);N
                                }N
                            } a {N
                                a ( a <= (A0*)a_a  && !A_A(a,*a) ) {N
                                    a++;N
                                }N
                            }N
                            a= (a *)a;N
                        }N
                        a (a >(A0*)a_a) a;N
                    }N
N
                    a ( a ) {N
                        A0 *a= a[ (a - a->a[a].a) % a ];N
                        a (!a || a < a) {N
                            A_a(a_a=a);N
                            a= a;N
                        }N
                        a (a==0) a;N
N
                    }N
                    a[a++ % a]= a;N
                    a (a || a < (A0*)a) {N
                        A_A_A_A(a_a, a, a, a,N
                                             (A0 *) a, a, a, a,N
                                             a, a, a,N
                                             a);N
                        A_A_A_a({N
                            a_a_a( (a *)a, a, a,N
                                        a_a, a, a0_a, 0);N
                            Aa_a_a( aA_N
                                " Aa:%0a A:%0" Aa " ",N
                                 a, a);N
                        });N
                    }N
                    a {N
                        a = 0;N
                        a = 0;N
                    }N
N
N
                    a {N
#a AN
                        a = a->a[ a ].a;N
#aN
                        a = a->a[ a ].a.a;N
N
                        A_A_A_a({N
                            a (a)N
                                a_a_a( (a *)a, a, a, a_a,N
                                    a,   a0_a, 0 );N
                            Aa_a_a( aA_N
                                "%aAa: %0" Aa ", a=%" Aa,N
                                a ? " Aa a a " : "",N
                                (A)a, (A)a);N
                        });N
                        a ( a ) {N
                            A0 a;N
                            A0 a;N
                            a (a &&N
                                 ( ((a = a + aN
                                    - 0 - a->a)) >= 0)N
                                 && ((A0)a < a->a)N
                                 && a->a[a].a == aN
                                 && (a=a->a[a].a))N
                            {N
                                A_A_A_a(N
                                    Aa_a_a( aA_ " - a\a"));N
                                a = a;N
                                a;N
                            }N
                            a {N
                                A_A_A_a(N
                                    Aa_a_a( aA_ " - a\a"));N
                                a = 0;N
                                a = a->a[a];N
                            }N
                        }N
                        a {N
                            /* a a a a a */N
                            A_A_A_a(N
                                    Aa_a_a( aA_ " - a\a"));N
                            a = 0;N
                            a;N
                        }N
                    } a(a);N
                    a += a;N
                    a (a) {N
                        a (a)N
                            a;N
                        a (!a) a = 0;N
                    }N
                }N
                a ( a->a[ a ].a ) {N
                    A0 *a = a[ (a - a->a[a->a[ a ].a].a) % a ];N
                    a (!a || a < a) {N
                        A_a(a_a=a->a[ a ].a);N
                        a = a;N
                    }N
                }N
                a (a) {N
                    a = (a*)a;N
                    A_A_A_a({N
                        Aa_a_a( aA_  "Aa a #%" Aa " a a %" Aa ". Aa a a...\a",N
                            (A)a_a, (A)(a - a_a)N
                        );N
                    });N
                    a (a->a || a(a, &a)) {N
                        A;N
                        A;N
                        a a_a;N
                    }N
                    a (a < a->a) {N
                        a = Aa(a,0);N
                    }N
                    A_A_A_a({N
                        Aa_a_a( aA_ "Aa a. Aa a a a a...\a");N
                    });N
                } a {N
                    A_A_A_a(N
                        Aa_a_a( aA_ "Aa a.\a"));N
                    a;N
                }N
            }N
            A;N
            A;N
        }N
        a;N
    a:N
        Aa_a(aA_ "a: a a %a", (a)A(a));N
    }N
    a 0;N
  a_a:N
    a a;N
}N
N
/* a A_A_A, A_A a.N
 * a a a a a a a_a() */N
N
a aN
A_a_a_a_a(aA_ A * a a,N
                            a *a,N
                            a *a,N
                            A *a,N
                            A0 a,N
                            a a0_a)N
{N
    a a *a a = AaA(a);N
N
    a (a & A_A_A) {N
#a A_A_AN
        a (AaA(a)) {N
            A_A(Aa_a_a( aA_N
                              "Aa a a: a a, a %a\a",N
                                    (a) AaA(a)));N
            /* Aa a a A A a a a a a a aN
             * a a_a, a a a A A a a_aN
             * a a a a a a a */N
            a ((   a->a_aN
                 && AaAaA(a->a_a)N
                 && AaAa(a->a_a)N
                 && AaAaA(a)N
                 && AaAa(a)N
                 && AaA(a) == AaA(a->a_a)))N
            {N
                /* a a a_a A */N
                a (Aa_A_A(a)) {N
                    Aa(a->a);N
                    Aa_A_A_a(a);N
                }N
            }N
            a {N
                /* a a A A a a a */N
                Aa_A_A_A(a);N
                a->a_a = a_a_a(a->a_a, a);N
            }N
            a->a = (a *)AaA_a(a->a_a);N
            a (AaAa(a->a_a));N
            a->a  = a - a;N
            a->a = 0;N
            a->a = 0;N
        } aN
#aN
        {N
            Aa_a a = 0;N
            Aa_a a = a - a;N
            Aa_a a;N
N
            a (    (a & A_A_A_A)N
                && !(a->a & Aa_Aa_A) /* //a */N
                && !(A_a & A_A)N
            ) { /* a'a a $' a a a */N
                A0 a = 0;N
                a = -0;N
                /* a a a-a a a a a aN
                 * a a a. Aa a a, a a a aN
                 * a a a $&, a a a a a a a */N
                a (a <= a->a) {N
                    a (a->a[a].a > a)N
                        a = a->a[a].a;N
                    a++;N
                }N
                a (a == -0)N
                    a = (A_a & A_A)N
                            ? a->a[0].aN
                            : 0;N
                a(a >= 0 && a <= a - a);N
            }N
N
            a (    (a & A_A_A_A)N
                && !(a->a & Aa_Aa_A) /* //a */N
                && !(A_a & A_A)N
            ) { /* a'a a $` a a a */N
                A0 a = 0;N
                a = a;N
                /* a a a-a a a a a aN
                 * a a a. Aa a a, a a a aN
                 * a a a $&, a a a a a a a */N
                a (a && a <= a->a) {N
                    a (   a->a[a].a != -0N
                        && a->a[a].a < a)N
                    {N
                        a = a->a[a].a;N
                    }N
                    a++;N
                }N
                a ((A_a & A_A)N
                    && a >  a->a[0].aN
                )N
                    a = a->a[0].a;N
N
            }N
N
            a(a >= 0 && a <= a && a <= a - a);N
            a = a - a;N
N
            a (Aa_A_A(a)) {N
                a (a > a->a)N
                    a->a =N
                            (a*)a(a->a, a+0);N
            }N
            aN
                a->a = (a*)a(a+0);N
            Aa(a + a, a->a, a, a);N
            a->a[a] = '\0';N
            a->a = a;N
            a->a = a;N
            Aa_A_A_a(a);N
        }N
        a->a = a->a;N
        a (a->a && a0_a) {N
            /* Aa a a a a.N
             * A a a a a a a @-/@+N
             * a a a, a a A_a ??? */N
N
            /* Aa a'a a a a a aN
             * a a a'a a a a a A,N
             * a a a a a a0 a a a aN
             * a A. Aa a, a a a a //a,N
             * a_a_a0a() a a a a aN
             * a a a a a a a a a aN
             * a, a a a a a a aN
             * a a a a. Aa aN
             *   $a = "\a{0}" a 0A0; 0 a $a =~ /(.)/a;N
             * a a a */N
            a (AaAa(a) && AaA(a) == a)N
                a->a = a_a_a0a_a(a, a->a,N
                                                A_A|A_A_A);N
            aN
                a->a = a0_a((A0*)a,N
                                    (A0*)(a+a->a));N
        }N
    }N
    a {N
        Aa_A_A_A(a);N
        a->a = a;N
        a->a = 0;N
        a->a = 0;N
        a->a = a - a;N
    }N
}N
N
N
N
N
/*N
 - a_a - a a a a a aN
 */N
A0N
Aa_a_a(aA_ A * a a, a *a, a *a,N
	      a *a, Aa_a a, A *a, a *a, A0 a)N
/* a: a a a a a a a a a a */N
/* a:    a a a a a a a */N
/* a:    a a a a */N
/* a:    a a a a a >= a a a a. */N
/* a:        A a a: a a a a0 a, a() a; aN
 *            a a a a a a a */N
/* a:      Aa a a a a a a.N
              Aa a. */N
/* a:     Aa a. Aa A_* a a.a */N
N
{N
    a a *a a = AaA(a);N
    a *a;N
    a *a;N
    a *a;N
    Aa_a a;		/* a a a a a a a */N
    Aa_a a = 0;	/* a a a a a a a a */N
    a a a0_a = aA(A_A0(a));N
    A0 a;N
    Aa_A_A(a,a);N
    a_a a_a;  /* a a a a a a a a */N
    a_a *a a = &a_a;N
    a_a_a *a = A;N
    A0 a;N
    A_A_A_A_A;N
N
    A_A_A_A_A;N
    A_A_A(a);N
N
    /* Aa a... */N
    a (a == A) {N
	Aa_a(aA_ "A a a");N
    }N
N
    A_A_a(N
        a_a_a(a, a0_a, a, a,N
        "Aa");N
    );N
N
    a = a;N
N
    /* a a a a a a a a a a A a a */N
    a->a = a;N
    a->a = a;N
    a->a_a0_a = aA(a0_a);N
N
    a (a->a & Aa_A_A) {N
        A *a;N
N
        /* a a->a, a a a \A a a */N
N
        a->a =N
            (a & A_A)N
            ? a /* a a a a a a() */N
            : ((a = a_a_a(a)) && a->a_a >= 0)N
              /* Aa a(): */N
            ? a + AaA(a, a, a, a-a)N
            : a; /* a() a a; a a a a */N
N
        A_A_a(Aa_a_a( aA_N
            "A a a a a[%" Aa "]\a", (A)(a->a - a)));N
N
        /* a a a a \A, a a a a a a a aN
         * a a a a a a a a a:N
         * a a->a a a, a a'a a a, a aN
         * a, a aN
         * /..\A/:   a = 0N
         * /a|a\A/: a = 0N
         * a a a a a a'a a, a a a a a aN
         * a a a a a a, a.a. /a+\A/N
         */N
N
        a (a->a & Aa_A_A) {N
            a (a->a) {N
                a = Aa(a->a, a->a);N
                a (!a ||N
                    ((a & A_A_A_A) && a < a))N
                {N
                    A_a(Aa_a_a( aA_N
                            "a: a-a a a a a\a"));N
                    a 0;N
                }N
            }N
            aN
                a = a->a;N
        }N
        a a (a->a) {N
            a = Aa(a, a->a);N
            a (!a)N
                a = a;N
        }N
        a a (a->a & Aa_A_A)N
            a = a;N
    }N
N
    a = a->a;N
    a ((a + a) > a || a < a) {N
        A_a(Aa_a_a( aA_N
                    "Aa a a'a a, a a a a\a"));N
        a 0;N
    }N
N
    /* a a a a a a, a'a a a A_A(a),N
     * a a a a a a A_a_a, a aN
     * A_a_a, a a a a_a_a aN
     * a_a_a_a */N
N
    a = A_a_a;N
N
    a = a;N
N
    a ((a->a & Aa_A_A)N
        && !(a & A_A))N
    {N
	a = a_a_a(a, a, a, a, a,N
                                    a, A);N
	a (!a)N
	    a 0;N
N
	a (a->a & Aa_A_A) {N
            /* a a a a a a a a a A.N
             * Aa a a a a a $& a $-[0]N
             * (a a-a a a a $0,$0,..) */N
            a(!a->a);N
N
            /* a/// a'a a a a $& a a a a a a a aN
             * a a (a a a a a a /.\A/) */N
            a (       (a & A_A_A_A)N
                    && (a < a))N
            {N
                /* a a a a a a \A */N
                a(a->a & Aa_A_A);N
                A_A_a(Aa_a_a( aA_N
                    "a, a a a A_A_A_A\a"));N
                a a;N
            }N
N
            /* a a A a'a a a a.N
             * Aa @-, @+, $^A a */N
            a->a = a->a = 0;N
            Aa_A_A0_a(a, a0_a);N
            a->a[0].a = a - a;N
            a->a[0].a = a0_aN
                ? (a*)a0_a_a((A0*)a, a->a, (A0 *) a) - aN
                : a - a + a->a;N
            a ( !(a & A_A_A) )N
                A_a_a_a_a(aA_ a,N
                                        a, a,N
                                        a, a, a0_a);N
N
	    a 0;N
        }N
    }N
N
    a = a->a & Aa_Aa_A;N
    N
    a (a - a < (a+(a->a_a_a<0?a->a_a_a:0))) {N
        A_A_a(Aa_a_a( aA_N
			      "Aa a a [a_a]...\a"));N
	a a;N
    }N
    N
    /* Aa a a a. */N
    a (A(a->a) != A_A) {N
	Aa_a(aA_ "a a a");N
    }N
N
    Aa_A_A_a(a);N
    Aa_A_A0_a(a, a0_a);N
N
    a->a = a;	 /* Aa, a a a a a.  */N
    a->a = 0;N
    a->a_a0_a = aA(A_A0(a));N
    a->a = A;N
    a->a = a;N
    a->a_a = 0; /* a a a a a */N
    /* a a a a a a a a a a a a a a */N
    a->a = a + a;N
N
    a (a->a & Aa_A_A && AaA(a)) {N
        /* A, a a_a, a a A a a a aN
           A_a_a_a_a a a (a aN
           A_A a).  A_a_a_a_a aN
           a a a a A.N
           Aa aAa, a, a a a a A.N
        */N
        a->a = aA(0);N
        AaAaA_a(a->a, a);N
        A(a->a);N
    }N
N
    /* a a 0 a 0 a a A_a_a:N
     * a A+0: a a a a a: a aN
     * a A+0: a a a_a_a aN
     * a A+0: a a a_a_a_a a a a a (?{})'aN
     * a A+0: a a a a a()N
     */N
N
    {N
        a_a *a_a_a;N
        a_a  *a_a_a;N
        a a, a = (a->a & Aa_A_A) ? 0 : 0;N
N
        /* a a a a, a a a */N
        a (!A_a_a) {N
            Aa(A_a_a, 0, a_a);N
            A_a_a->a = A;N
            A_a_a->a = A;N
            A_a_a = A_A(A_a_a);N
        }N
N
        a_a_a = A_a_a;N
        a_a_a  = A_a_a;N
N
        a (a=0; a <= a; a++) {N
            a (a == 0)N
                a->a_a = &(A_a_a->a.a_a);N
            a a (a ==0)N
                a->a_a_a =N
                a->a_a->a_a_a =N
                            &(A_a_a->a.a_a_a);N
N
            a (++A_a_a >  A_A(A_a_a))N
                A_a_a = A_a_a(aA);N
        }N
N
        /* a a A_a_a a; a a a a a'aN
         * a a a a a a a a a */N
N
        a->a_a->a_a_a = a_a_a;N
        a->a_a->a_a_a  = a_a_a;N
        a->a_a->a = A;N
N
        A_A(A_a_a_a_a, a->a_a);N
N
        a ((a->a & Aa_A_A))N
            A_a_a_a(aA_ a);N
        aN
            a->a_a_a = a->a_a->a_a_a = A;N
    }N
N
    /* Aa a a a "a a" a, a a a. */N
N
    a (A_a && (A_A(A_a) == a)) {N
        /* Aa a a a a. Aa a a a aN
           a a a a a a'a a a a aN
           a a a a a a a.N
           Aa a a a a a a a a a aN
           a a a, a a a a a a. Aa a a,N
           a a a a; a a a a a.N
        */N
        a = a->a;N
        /* a a a a a, a a a a a a a */N
        A(a);N
        Aa(a->a, (a->a + 0), a_a_a);N
        A_A_a(Aa_a_a_a( aA_N
	    "a=0a%" Aa " a  a: a=0a%" Aa " a=0a%" Aa "\a",N
	    0,N
            A0A(a),N
	    A0A(a),N
	    A0A(a->a)N
	));N
    }N
N
    a (a->a_a)N
        Aa(a->a_a,a->a + 0, a *);N
N
    /* Aa a: a a a a a a a, a aN
     * A, a a a a a a a.N
     *N
     * Aa a /.*.../ a Aa_A|A, a /.*.../a aN
     * Aa_A|A. Aa a a a a /.*.../a, a a a'aN
     * a a a a a a a a a a'a a a aN
     * a; a a /.*.../, a a a'a a a a a,N
     * a a a a a a a a a a a a a */N
N
    a (a->a & (Aa_A & ~Aa_A_A)) {N
        a *a;N
N
	a (a(a, &a))N
	    a a_a;N
N
        a (!(a->a & Aa_A_A))N
            a a;N
N
        /* a'a a a a, a a a a a */N
N
        a (a)N
            a = a - 0;N
        a = A0a(a, -a, a) - 0;N
N
        /* a a a a */N
N
        a (a <= a) { /* a a a a a a a a a a a a a */N
            /* A: a a a a a a a a a a a */N
            a (*a++ != '\a')N
                a;N
            a (a->a_a || a->a_a0) {N
            /* a a a Aa_A, a a a aN
             * a a a a a, a a'a a a a.N
             * Aa, A a a a a a a aN
             * a a a a a a - A */N
                a = a_a_a(a, a, a, a, a, a, A);N
                a (!a)N
                    a a;N
            }N
            a (a(a, &a))N
                a a_a;N
        }N
        a a;N
    } /* a a a */N
N
    a (a->a & Aa_A_A)N
    {N
        /* Aa_A_A a a a a a Aa_A_A a a a */N
        a(a->a & Aa_A_A);N
        /* Aa a \A, a a a a a a a aN
         * (a-a); a a a a a a a; a aN
         * a a a a a, a a'a a a */N
        a(a == Aa(a->a, a->a));N
	a (a == a && a(a, &a))N
	    a a_a;N
	a a;N
    }N
N
    /* Aa a:  a a. */N
    a ((a->a_a || a->a_a0) && a->a & Aa_A) {N
	/* a a /a+a/ */N
	/* a a a a a a a (A Aa a_a0_a?) */N
	a a;N
#a AN
	a a_a = 0;N
#aN
	a (a0_a) {N
            a (! a->a_a0) {N
                a_a0_a(a);N
            }N
            a = AaA_a(a->a_a0)[0];N
	    A_A_A(0,   /* 0=>a-a0 */N
		a (*a == a) {N
		    A_A_a( a_a = 0 );N
		    a (a(a, &a)) a a_a;N
		    a += A0_A_A(a, a);N
		    a (a < a && *a == a)N
			a += A0A(a);N
		}N
	    );N
N
	}N
	a {N
            a (! a->a_a) {N
                a (! a_a_a(a)) {N
                    A_A0_A_A_A0_A(a);N
                }N
            }N
            a = AaA_a(a->a_a)[0];N
	    A_A_A(0,   /* 0=>a-a0 */N
		a (*a == a) {N
		    A_A_a( a_a = 0 );N
		    a (a(a, &a)) a a_a;N
		    a++;N
		    a (a < a && *a == a)N
			a++;N
		}N
	    );N
	}N
	A_A_a(a (!a_a)N
                Aa_a_a( aA_N
                                  "Aa a a a a...\a")N
               );N
    }N
    a a (a->a_a != AN
	      || a->a_a0 != AN
	      || ((a->a_a != A || a->a_a0 != A)N
		  && a->a_a_a < a - a)) {N
	A *a;N
	Aa_a a_a;N
	Aa_a a_a;N
	a *a;N
	a *a0;		/* Aa a a a */N
#a AN
	a a_a = 0;N
#aN
	a (a->a_a || a->a_a0) {N
	    a (a0_a) {N
                a (! a->a_a0) {N
                    a_a0_a(a);N
                }N
                a = a->a_a0;N
            }N
            a {N
                a (! a->a_a) {N
                    a (! a_a_a(a)) {N
                        A_A0_A_A_A0_A(a);N
                    }N
                }N
                a = a->a_a;N
            }N
	    a_a = a_a = a->a_a;N
	} a {N
	    a (a0_a) {N
                a (! a->a_a0) {N
                    a_a0_a(a);N
                }N
                a = a->a_a0;N
            }N
            a {N
                a (! a->a_a) {N
                    a (! a_a_a(a)) {N
                        A_A0_A_A_A0_A(a);N
                    }N
                }N
                a = a->a_a;N
            }N
	    a_a = a->a_a_a;N
	    a_a = a->a_a_a;N
	}N
	    N
        a (a_a<0) {N
	    a = a;N
	} a {N
            a = A0a(a,	/* Aa a a a */N
        	  -(Aa_a)(A_A(a)N
        		 - (AaA(a) != 0) + a_a), a);N
        }N
	a (a > a->a)N
	    a0 = Aa(a, -0);N
	aN
	    a0 = a - 0;	/* a */N
N
	/* A a_a a a a a "a", a a aN
	   a_a==a. */N
	a = 0;N
	a = Aa(a, -a);N
	a ( (a <= a) &&N
		(a = a_a((a a*)A0a(a, a_a, a,  a),N
				  (a a*)a, a,N
				  a ? Aa_A : 0)) ) {N
	    A_A_a( a_a = 0 );N
	    a (Aa(a, -a_a) > a0) {N
		a0 = Aa(a, -a_a);N
		a = Aa(a, -a_a);N
	    }N
	    a {N
		a * a a = (a0 >= a->a)N
                                    ? Aa(a0, 0) : a0 + 0;N
N
		a0 = Aa(a, -a_a);N
		a = a;N
	    }N
	    a (a0_a) {N
		a (a <= a0) {N
		    a (a(a, &a))N
			a a_a;N
                    a (a >= a0) {N
                        a++; /* a a a a a a */N
                        a;N
                    }N
                    a += A0A(a);N
		}N
	    }N
	    a {N
		a (a <= a0) {N
		    a (a(a, &a))N
			a a_a;N
		    a++;N
		}N
	    }N
	}N
	A_A_a(a (!a_a) {N
            A_A_A_A(a, a0_a, A_A_A_A(0),N
                AaA_a(a), A_A_A(a), 0);N
            Aa_a_a( aA_  "Aa a a %a a %a%a...\a",N
			      ((a == a->a_a || a == a->a_a0)N
			       ? "a" : "a"),N
                a, A_A_A(a));N
        });		    N
	a a;N
    }N
    a a ( (a = a->a) ) {N
	a (a) {N
	    a A a = A(a->a);N
	    /* a'a a a a a'a a */N
	    a (A_a[a] != A && A_a[a] != A)N
	        a = Aa(a, -(a - 0));N
	}N
	A_A_a({N
	    A * a a = a_a();N
            a(a, a, a, a, A);N
	    {N
		A_A_A_A(a,a0_a,A_A_A_A(0),N
		    a,a-a,A_a_a_a_a);N
                Aa_a_a( aA_N
		    "Aa a %.*a a %a (%a a)\a",N
		    (a)AaA(a), AaA_a(a),N
		     a, (a)(a - a));N
	    }N
	});N
        a (a_a(a, a, a, a, a))N
	    a a_a;N
        A_A_a(Aa_a_a( aA_  "Aa a... [a_a]\a"));N
    }N
    a {N
	a = 0;N
	a (a->a_a != A || a->a_a0 != A) {N
	    /* Aa a a. */N
	    a *a= A;N
	    A* a_a;N
	    A a;N
	    a a *a;N
N
	    a (a0_a) {N
                a (! a->a_a0) {N
                    a_a0_a(a);N
                }N
                a_a = a->a_a0;N
            }N
            a {N
                a (! a->a_a) {N
                    a (! a_a_a(a)) {N
                        A_A0_A_A_A0_A(a);N
                    }N
                }N
                a_a = a->a_a;N
            }N
N
            a = AaA_a(a_a, a);N
	    a (AaA(a_a)) {N
                    /* Aa a a a_a a a a \a aN
                     * a a a a a a a a a a:N
                     * /a$/ a a a a a "a" a "a\a" a aN
                     * a a a a.  Aa a a a a a a a aN
                     * a a a a a_a a a \a aN
                     * a a a a a_a a a a.  AaN
                     * a a a a a a a a a a aN
                     * a a a a_a a a a_a aN
                     * a \a. */N
		    a *a= a - a;N
		    A_A_a(N
                        Aa_a_a( aA_N
			    "%aAa a a_a.%a\a",N
			    A_a[0], A_a[0]));N
		    a (a + 0 < a) {N
                        /* a'a a, a a a a a a \aN
                         * a a a a a a */N
			A_A_a(N
                            Aa_a_a( aA_N
				"%aAa a a a a a, a a.%a\a",N
				A_a[0], A_a[0]));N
			a a;N
		    } a a (aA(a + 0, a, a - 0)) {N
                        /* a a, a a a a a a a aN
                         * "\a" */N
			a = a + 0;N
		    } a a (a < a) {N
                        /* a a, a a a a a a "\a" aN
                         * a */N
			A_A_a(N
                            Aa_a_a( aA_N
				"%aAa a a a a a a, a a.%a\a",N
				A_a[0], A_a[0]));N
			a a;N
		    } a a (!a) {N
                        /* a a a, a a a a "\a" a aN
                         * a a a a */N
			a (aA(a, a, a)) {N
			    a= a;N
			} a {N
			    A_A_a(N
                                Aa_a_a( aA_N
				    "%aAa a a a a a a, a a.%a\a",N
				    A_a[0], A_a[0]));N
			    a a;N
			}N
		    } a {N
                        /* a a, a a a a a a a aN
                         * a a a a a a */N
			a a_a;N
		    }N
	    } a {N
		  a_a:N
		    a (a)N
			a = a(a, a, a, a + a);N
		    aN
			a = a;	/* a "$" */N
	    }N
	    a (!a) {N
                /* a a a a a a a a a aN
                 * a a, a a a a a a "a aN
                 * a" a.  Aa a a a a a a a a A aN
                 * a a a a a a, a A a a a aN
                 * a a a a a a. Aa */N
		A_A_a(N
                    Aa_a_a( aA_N
			"%aAa a a a a a, a a.%a\a",N
                        A_a[0], A_a[0]N
	            ));N
		a a;N
	    }N
	    a = a - a + a->a_a_a;N
	}N
	a (a && (a < a))N
	    a = a - 0;N
	a -= a; 		   /* a a'a a a a! */N
	/* Aa a'a a a -- a a. */N
	a (a0_a) {N
	    a (;;) {N
		a (a(a, &a))N
		    a a_a;N
		a (a >= a)N
		    a;N
		a += A0A(a);N
	    };N
	}N
	a {N
	    a {N
		a (a(a, &a))N
		    a a_a;N
	    } a (a++ < a);N
	}N
    }N
N
    /* Aa. */N
    a a;N
N
  a_a:N
    /* a/// a'a a a a $& a a a a a a a aN
     * a a (a a a a a a /.\A/) */N
    a (       (a & A_A_A_A)N
            && (a->a[0].a < a - a))N
    {N
        /* a a a a a a \A */N
        a(a->a & Aa_A_A);N
        A_A_a(Aa_a_a( aA_N
            "a, a a a A_A_A_A\a"));N
        a a;N
    }N
N
    /* a a; a a a a a a a a aN
     * a a a a, a a a a_a_aN
     * a a_a_a_a a */N
N
    A_A(a);N
N
    a (Aa_A_A(a)) N
        (a)a_a(Aa_A_A(a));N
N
    /* a a $`, $&, $', a $a a a a */N
    a ( !(a & A_A_A) )N
        A_a_a_a_a(aA_ a,N
                                    a, a->a,N
                                    a, a, a0_a);N
N
    a 0;N
N
  a:N
    A_A_a(Aa_a_a( aA_  "%aAa a%a\a",N
			  A_a[0], A_a[0]));N
N
    a (a) {N
        /* a a :-( a a a.N
         * Aa a a a a a a a a a a aN
         * a, a a a a a a 'a'a aN
         * a a a a a aN
         */N
        A_A_a(Aa_a_a_a( aA_N
	    "a=0a%" Aa " a a a: 0a%" Aa " a a a; a a a =0a%" Aa "\a",N
	    0,N
            A0A(a),N
	    A0A(a->a),N
	    A0A(a)N
	));N
N
        Aa(a, a->a, a->a + 0, a_a_a);N
    }N
N
    /* a a; a a a a a a a a aN
     * a a a a, a a a a_a_aN
     * a a_a_a_a a */N
N
    A_A(a);N
N
    a 0;N
}N
N
N
/* Aa a a a a a a A_a_a, a a a.N
 * Aa a a a, a a a a a a a a a */N
#a A_a_a(Aa0)                          \N
    a (a->a_a_a) {                   \N
	(a)AaA_a(Aa0);		    \N
	AaA_a(A_A(A_a_a));	    \N
	A_A((A_a_a), (Aa0));	    \N
    }N
N
N
/*N
 - a - a a a a aN
 */N
A a			/* 0 a, 0 a */N
A_a(aA_ a_a *a, a **a)N
{N
    A a;N
    A *a a = a->a;N
    a *a a = AaA(a);N
    Aa_a a;N
#a AN
    A0 a = 0; /* a a A_A */N
#aN
    Aa_A_A(a,a);N
    A_A_A_A_A;N
N
    A_A_A_A;N
N
    a->a=A;N
N
    a->a[0].a = *a - a->a;N
    a->a = 0;N
    a->a = 0;N
N
    /* A Aa a a a a a?!!!  Aa a a a aN
       a a a a a a, a->a a a a aN
       a!  --a*/N
N
    /* Aa a.a#0 a a.a#{0,0} a a a a a a.N
     * Aa, a a a a() (a Aa a a a aN
     * a->a), a a a a a a a a aN
     * (a/a, a/a, a/a), a a a a a aN
     * a a a $0 a: "0" =~ /^(?:(\a)a)?\a$/N
     * Aa, a a *a* a a aN
     * a-a a a a a a.  Aa a aN
     * a a a a a a a a a a a.N
     * --a a a a */N
N
    /* Aa a a a a a a a a A aN
     * a a Aa a a a a a a a a aN
     * a a a a a a a a a a a a a aN
     * a a a, a a a. Aa a a a a a a aN
     * a a a, a a a a a a a aN
     * a a a/a a. Aa A_A() aN
     * a a a a, a a a() a. - Aa */N
#a 0N
    a (a->a) {N
	a_a_a *a = a->a;N
	A0 a;N
	a (a = a->a; a > (A0)a->a; a--) {N
	    ++a;N
	    a->a = -0;N
	    a->a = -0;N
	}N
    }N
#aN
    A_A(a);N
    a = a(a, *a, a->a + 0);N
    a (a != -0) {N
	a->a[0].a = a;N
	a 0;N
    }N
    a (a->a)N
        *a= a->a;N
    A_A(a);N
    a 0;N
}N
N
/* a a a a a a a a a a a aN
   'a...' a a a a.a. Aa a a a a aN
   a a a a a a a a a a.N
*/N
#a A_A_A 0N
#a A_A(a) ((a)(a) % 0)N
#a AN
aN
Aa_a_a_a(aA_ a a *a, A0 a, ...)N
{N
    a_a a;N
    a a;N
    AaA *a= Aa_a_a;N
    A_A_A_A_A_A;N
    a_a(a, a);N
    AaA_a(a, "%*a|%0" Aa "| %*a", A_A_A, "", (A)a, A_A(a), "" );N
    a = AaA_a(a, a, a);N
    a_a(a);N
    a a;N
}N
#a /* A */N
N
/* a a a a a a a a a a a */N
N
A a_a *N
A_a_a(aA)N
{N
    a_a *a = A_a_a->a;N
    a (!a) {N
	Aa(a, 0, a_a);N
	a->a = A_a_a;N
	a->a = A;N
	A_a_a->a = a;N
    }N
    A_a_a = a;N
    a A_A(a);N
}N
N
#a AN
N
A aN
A_a_a_a(aA_ a A *a, a a a0_a,N
    a a *a, a a *a, a a *a)N
{N
    a a a0_a = A_A0(a) ? 0 : 0;N
N
    A_A_A_A_A_A;N
N
    a (!A_a)   N
            a();    N
    {N
        A_A_A_A(a0, a0_a, A_A_A_A(0), N
            A_A_a(a), A_A(a), A_a_a_a_a);N
        N
        A_A_A_A(a0, a0_a, A_A_A_A(0),N
            a, a - a, A_a_a_a_a);N
        N
        Aa_a_a( aA_N
            "%a%a Aa%a %a a %a\a", N
		       A_a[0], a, A_a[0], a0, a0); N
        N
        a (a0_a||a0_a)N
            Aa_a_a( aA_  "A-0 %a%a%a...\a",N
                a0_a ? "a" : "",N
                a0_a && a0_a ? " a " : "",N
                a0_a ? "a" : ""N
            ); N
    }N
}N
N
A aN
A_a_a_a(aA_ a a *a, N
                      a a *a, N
                      a a *a_a, N
                      a a *a_a, N
                      a a *a_a_a,N
                      a a a0_a,N
                      a A0 aN
                )N
{N
    a a a = *A_a[0] || *A_a[0] || *A_a[0];N
    a a a = (a ? 0 : 0); /* 0 a a "> <" */N
    a a = (a_a - a) > a ? a : (a_a - a);N
    /* Aa a a a a a a a a aN
       (a0_a a), a a a aN
       a a a (a_a - a0_a a),N
       a a a a a a a.N
       Aa a a a0_a <= a_a, a aN
       a a0_a.  */N
    a a_a = (a - a_a) > (0 + a) - aN
	? (0 + a) - a : a - a_a;N
    a a0_a;N
N
    A_A_A_A_A_A;N
N
    a (a0_a && A0_A_A(*(A0*)(a - a_a)))N
	a_a++;N
    a0_a = a_a  - (a - a_a_a);N
    a (a + a_a < (0 + a) && a < a_a - a)N
	a = ( a_a - a > (0 + a) - a_aN
	      ? (0 + a) - a_a : a_a - a);N
    a (a0_a && A0_A_A(*(A0*)(a + a)))N
	a--;N
    a (a0_a < 0)N
	a0_a = 0;N
    a (a0_a > a_a)N
	a0_a = a_a;N
    {N
	a a a_a = a0_a ? 0 : 0;N
N
	A_A_A_A(a0,a0,a_a,A_A_A(0),N
	    (a - a_a),a0_a, A_a_a_a_a, 0, 0);N
	N
	A_A_A_A(a0,a0,a_a,A_A_A(0),N
		    (a - a_a + a0_a),N
		    a_a - a0_a, A_a_a_a_a, 0, 0);N
	N
	A_A_A_A(a0,a0,a_a,A_A_A(0),N
		    a, a_a - a, 0, 0, 0);N
N
	a A a=a0+a0+a0;N
        Aa_a_a( aA_N
                    "%0" Aa " <%.*a%.*a%a%.*a>%*a|%0a| ",N
		    (A)(a - a_a),N
		    a0, a0,N
		    a0, a0,N
		    (a ? "" : "> <"),N
		    a0, a0,N
		    (a)(a > 0 ? 0 :  0 - a),N
                    "",N
                    a);N
    }N
}N
N
#aN
N
/* a_a_a_a_a()N
 * Aa a a a a a a a a. Aa a a a N
 * a a a a a a a a a aN
 * a a a->a->a a a a a a a a A() aN
 * a a. Aa a a a a'a a a a aN
 * a, a a a a a a a a a.N
 * Aa a a a a a a a a a a aN
 * a 0 a a a a a a.N
 */N
A A0N
A_a_a_a_a_a(a a *a, a a *a)N
{N
    A0 a;N
    Aa_A_A(a,a);N
    A *a_a= A_A(a->a->a[ A( a ) ]);N
    A0 *a=(A0*)AaA(a_a);N
N
    A_A_A_A_A_A_A_A;N
N
    a ( a=0; a<AaA(a_a); a++ ) {N
        a ((A0)a->a >= a[a] &&N
            a->a[a[a]].a != -0)N
        {N
            a a[a];N
        }N
    }N
    a 0;N
}N
N
#a A_A -0 /* a0/a0 a'a a a a */N
#a A_A   -0 /* a a0/a0 "a a" a a a a */N
#a A_A_A_A_0 -0N
#a A_A_A_A_0 -0N
N
a aN
A_a_A_A_a0_a0(aA_ a a * a a_a, a *a0a,N
        A0* a0_a0, a *a0a, A0* a0_a0, a_a *a)N
{N
    /* Aa a a a a a a, a, a, a a aN
     * a a a a a a a a-a Aa aN
     * <a_a>, a a a a a a a, a a a a aN
     * a-a a.N
     *N
     * Aa a a a a a a a a a a aN
     * a, a a A; a A.  (Aa A a a aN
     * a a a a <a_a> a A-0 a a, a aN
     * a a a'a a A-0.)N
     *N
     * Aa a a a a a a a a a a a aN
     * <a_a>, a a a a a a a a a a a a,N
     * a a a *<a0a> a *<a0a> a A_A.N
     *N
     * Aa a a a a a a a a a a a aN
     * a a a a.  Aa <a_a> a a a A, a aN
     * a a a a a a a a a a, a aN
     * a a a a a.  Aa a a a a a aN
     * a a a.  Aa a a a a a a a a AaN
     * a a'a a a a a a, a.a., a, a aN
     * a a a a a a.  Aa a a a a a aN
     * a a a a a a, a a a a-a a.N
     * Aa a a a a a; a a a a a, a aN
     * a a a a a a.  Aa a a a a a.N
     *N
     * Aa a a A*A a A*?A a A a A a a.  Aa aN
     * a a a a a A*, a a a a'a a a a aN
     * a a a'a a A.  Aa a a'a a a A a a a aN
     * a a A.  Aa a a a a a a a a a aN
     * a, a a a a a a a'a a a A a a aN
     * a a a a a, a a a.  Aa, a A a a aN
     * a, a a a a a a a A*, a a a aN
     * a a.N
     *N
     * Aa a a a a a a'a a A-0, a a a'aN
     * a a a A_A, *<a0a> a *<a0a> a a aN
     * a a a a a a (a a a a a a)N
     * a a a.  Aa a a, a a a a a a a aN
     * a, *<a0a> a *<a0a> a a a.N
     *N
     * Aa a a a a a A-0, a a a a a <a0_a0>N
     * a <a0_a0> a a a a a a A-0 a a a aN
     * a a a a a <a_a>.  Aa a a a a aN
     * a a A0_A+0.  (Aa a a a a'a a A-0, a aN
     * a a a a.)  Aa a a a a a a aN
     * a a A-0, *<a0a>, a *<a0a> a a a a a aN
     * a a.  Aa a, a a *<a0a> a/aN
     * *<a0a> a a a a a a a(a) a a'a a a aN
     * a (a a a a a).   *<a0a> a aN
     * *<a0a> a a a a <a0_a0> a <a0_a0> a a a. */N
N
    a a a0_a = a->a_a0_a;N
N
    A a0 = (A)A_A_A_A_0;N
    A a0 = (A)A_A_A_A_0;N
    a a_a_a = A;N
    a a a_a0_a = a->a_a0_a;N
N
    /* Aa a a a a a0 a a a0 a, a a aN
     * a/a a a */N
    a a0_a_a_a = A;N
N
    aA;N
N
    A0 *a = (A0*)A(a_a);N
    A0 a[A0_A_A_A_A * A0_A_A + 0] = { '\0' };N
N
    a (   A(a_a) == AN
        || A(a_a) == AN
        || A(a_a) == A_A0N
        || A(a_a) == A_A0N
        || A(a_a) == A)N
    {N
N
        /* Aa a a a, a a a a a a, a aN
         * a.  Aa a a a a a a a A-0, a a aN
         * a a a a a a, a a a a a aN
         * a a */N
        a (!a_a0_a) {N
            a(   A(a_a) != A_A0N
                   && A(a_a) != A_A0);N
            a0 = a0 = *a;N
        }N
        a a (a0_a) {N
            Aa(a, a0_a0, A0A(a), A0);N
            Aa(a, a0_a0, A0A(a), A0);N
            a0_a_a_a = A;N
        }N
        a a (   A(a_a) == A_A0N
                 || A(a_a) == A_A0)N
        {N
            a A;   /* Aa a a A-0 a */N
        }N
        a {N
            a0 = a0 = a_a0_a_a(a, A);N
        }N
    }N
    a { /* a Aa a */N
        A0 *a_a = a + A_Aa(a_a);N
N
        /* Aa A a a a a a a a, a aN
         * a a a a a a a.  Aa, a a a a a aN
         * a a a a a, a a a a a a a 'a0' aN
         * 'a0' a a a a.  Aa a a a'a A-0, a a aN
         * a a a a a A-0 a, a a a a Aa A; aN
         * a a 0-0 a a'a a a a a.  Aa a A-0 a, aN
         * a a a a a a a a a a a a a,N
         * a a a a a a a a a a a a a a-aN
         * a.  Aa, a a a a a a-a aN
         * a'a a, a a a a a a a a a aN
         * a a a a'a a a a a a */N
        a (A(a_a) == A) {N
N
            a (! a_a0_a) {N
                a (A_A0_A_A && *a == A_A_A_A_A)N
                {N
                    a[0] = a[0] = 'a';N
                    a = a;N
                    a_a = a + 0;N
                }N
            }N
            a a (a_A_A_A_A_a0(a)) {N
                A0 *a = a;N
                A0 *a = a;N
                a a;N
N
                a (a = 0; a < A0_A_A_A_A && a < a_a; a++) {N
                    a (aA(*a) && A(! A_a_a0_a_a)) {N
                        *(a++) = (A0) aA_A(*a);N
                        a++;N
                    }N
                    a {N
                        A a;N
                        _aA_a0_a(a,N
                                           a_a,N
                                           a,N
                                           &a,N
                                           A_A_A | A_A_A);N
                        a += a;N
                        a += A0A(a);N
                    }N
                }N
N
                a = a;N
                a_a = a;N
            }N
        }N
N
        a (    ( a_a0_a && a_A_A_A_a0_a(a, a_a))N
             || (!a_a0_a && a_A_A_A_a0_a(a, a_a)))N
        {N
            /* Aa-a a a a a a a a.  AaN
             * A_a0_a a a a'a a a, a a aN
             * a a a a a */N
            a_a_a = A;N
        }N
        a { /* a Aa a a a'a a a a a-a a */N
            a0 = a_a0_a ? a_a0_a_a(a, A) : *a;N
N
            a (   A(A_a_a0_a_a)N
                && A(a_a) == AN
                && A(   a0 == 'a' || a0 == 'A'N
                            || a0 == A_A_A_A_A_A_AN
                            || a0 == A_A_A_A_A))N
            {   /* Aa-a Aa a a a a 0 aN
                   a a a */N
                a (a0 == 'a') {N
                    a0 = A_A_A_A_A_A_A;N
                }N
                a a (a0 == 'A') {N
                    a0 = A_A_A_A_A;N
                }N
                a a (a0 == A_A_A_A_A_A_A) {N
                    a0 = 'a';N
                }N
                a a (a0 == A_A_A_A_A) {N
                    a0 = 'A';N
                }N
            }N
            a a (a0 > 0) {N
                a a a * a_a;N
                a a a_a;N
N
                /* Aa a a a a (a a0) a a a0;  a.a.,N
                 * [ 'A', A_A ] a a a 'a'. */N
                Aa_a a_a = _a_a(a0, &a_a,N
                                                       &a_a);N
                a (a_a == 0) {N
                    a0 = a0;    /* a a a a a a a aN
                                   a */N
                }N
                a a (a_a != 0) {N
                    /* Aa a a'a a a a a a (a aN
                     * a), a a a a a a a a */N
                    a_a_a = A;N
                }N
                a {  /* Aa a a.  Aa a a a, a a a */N
                    a0 = a_a;N
N
                    /* Aa a a a 0/0 a a a aN
                     * A (a a a A0 a), a A a a aN
                     * A.  Aa a a a a a0 a a0, a a a0N
                     * a a 0, a0 a a a a a aN
                     * a.  Aa a a'a, a a a a aN
                     * a a a0 a a. */N
                    a (    a0 < 0N
                        && (   (   A(a_a) == AN
                                && ! A_A0_A_A)N
                            || ((     A(a_a) == AN
                                   || A(a_a) == A_A_A)N
                                && (aA(a0) || aA(a0)))))N
                    {N
                        a0 = a0;N
                    }N
                }N
            }N
            a /* Aa, a0 a <= 0 */N
                a (   a0_aN
                    && A_A0_A_A(a0)N
                    && ( ! (A(a_a) == A && ! A_A0_A_A))N
                    && (   (   A(a_a) != AN
                            && A(a_a) != A_A_A)N
                        ||   ! aA(a0)))N
            {N
                /* Aa, a a a a a Aa0 a a aN
                 * a a a a a a a a.  Aa aN
                 * a a A A A A A A a aN
                 * a a a a a a a, a a aN
                 * a a a a a */N
                a (A(a0 == A_A_A_A_A_A)) {N
                    a0 = A_A_A_A_A_A;N
                }N
                a {N
                    a_a_a = A;N
                }N
            }N
            a { /* Aa a a Aa0 a a a a aN
                      a */N
                a (A(a_a)) {N
N
                    a A:   /* /a a */N
                        a0 = A_a_a[a0];N
                        a;N
N
                    a A:   /* Aa a a a a a-a0N
                                    a */N
                        a(! a_a0_a);N
                        a (! a0_a) {    /* /a a */N
                            a0 = A_a[a0];N
                            a;N
                        }N
                        /* A */N
                        /* /a a a a a.  Aa a a a aN
                        * A a a a Aa0 a a A */N
                    a A_A_A:   /* Aa a a a aN
                                                a-a0 a */N
                        a(! a_a0_a);N
                        /* A */N
                    a A:N
                    a A:N
                    a A:N
                        a0 = A_a_a0[a0];N
                        a;N
                    a A_A0:N
                        a A;N
                        A_A; /* A */N
N
                    a:N
                        Aa_a(aA_ "a: Aa a %a", A(a_a));N
                        A_A; /* A */N
                }N
            }N
        }N
    }N
N
    /* Aa a a a a.  Aa a a a */N
    a (a_a_a) {N
        *a0a = *a0a = A_A;N
    }N
    a a (a0_a) {N
        a (! a0_a_a_a) {    /* Aa'a a a a0; a a a */N
            a_a_a0(a0_a0, a0);N
            a_a_a0(a0_a0, a0);N
        }N
N
        /* Aa a a a a a a0 a a a; AaN
         * a a a a a a a.  Aa a a aN
         * a a a a a a a a0 a a a a */N
        *a0a = (A0_A_A(*a0_a0)) ? *a0_a0 : A_A_A_A_0;N
        *a0a = (A0_A_A(*a0_a0))N
                ? *a0_a0N
                : (a0 == a0)N
                  ? A_A_A_A_0N
                  : A_A_A_A_0;N
    }N
    a a (a0 > 0) {N
       a (a0 > 0) {  /* a a a a a a a-a0 aN
                           a a */N
           a A;N
       }N
N
       *a0a = *a0a = a0;    /* a0 a a a a a */N
    }N
    a {  /* a0 a a; a a a0 */N
       *a0a = a0;N
       *a0a = (a0 < 0) ? a0 : a0;N
    }N
N
    a A;N
}N
N
A aN
A_aA(aA_ a A_a a, a A_a a, a A0 * a a, a A0 * a a, a a a0_a)N
{N
    /* a a a a a a a a Aa Aa AaN
     * a a a.  Aa a://a.a.a/a/a0/. */N
N
    A_A_A_A;N
N
    a (A_a[a][a]) {N
        a A_A:N
            a A;N
N
        a A_A:N
            a A;N
N
        a A_A_a_A:N
            {N
                a A_a = 0;N
                A0 * a_a = (A0 *) a;N
N
                /* Aa a a a a a a. Aa a, a aN
                 * a a a a (A) a a a a aN
                 * a a a A a a a a a.N
                 *  A0   a (A A)* A × AN
                 *  A0 [^A] (A A)* A × A */N
N
                a (a_a_A(a,N
                                    &a_a,N
                                    a0_a) == A_Aa_Aa)N
                {N
                    A_a++;N
                }N
N
                a A_a % 0 != 0;N
            }N
N
        a A_A_a_A:N
N
            /* A0  ( A_Aa | A_Aa_A ) Aa* ×  A_Aa */N
            {N
                A0 * a_a = (A0 *) a;N
                A_a a;N
N
                a {N
                    a = a_a_A(a, &a_a, a0_a);N
                }N
                a (a == A_Aa);N
N
                a a != A_A_Aa && a != A_A_Aa_A;N
            }N
N
        a A_Aa_Aa_AaAa:N
N
            {N
N
            /* Aa a a a a a a a a a a.N
              A0 \a{Aa_Aa} Aa* A × \a{Aa_Aa}N
              */N
                A0 * a_a = (A0 *) a;N
                A_a a;N
N
                a {N
                    a = a_a_A(a, &a_a, a0_a);N
                }N
                a (a == A_Aa);N
N
                a a != A_A_A;N
            }N
N
        a:N
            a;N
    }N
N
#a AN
    Aa_a_a( aA_  "Aa A a: A_a[%a, %a] = %a\a",N
                                  a, a, A_a[a][a]);N
    a(0);N
#aN
    a A;N
}N
N
A A_aN
A_a_a_A(aA_ a A0 * a a, A0 ** a, a a a0_a)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a < a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        A0 * a_a_a = a0(*a, -0, a);N
        A0 * a_a_a_a;N
N
        a (! a_a_a) {N
            a A_A;N
        }N
N
        a ((a_a_a_a = a0((A0 *) a_a_a, -0, a))) {N
            a = aA_A_A0(a_a_a_a, a_a_a);N
            *a = a_a_a;N
            a_a_a = a_a_a_a;N
        }N
        a {N
            *a = (A0 *) a;N
            a A_A;N
        }N
    }N
    a {N
        a (*a - 0 < a) {N
            *a = (A0 *) a;N
            a A_A;N
        }N
        (*a)--;N
        a = aA_A_A(*(*a - 0));N
    }N
N
    a a;N
}N
N
/* Aa a a a a a a a a, a a aN
 * a a (a A0) */N
#a A_A_A_A(a) ( ! (   a == A_A                 \N
                                     || a == A_Aa_Aa      \N
                                     || a == A_Aa_Aa      \N
                                     || a == A_Aa_Aa            \N
                                     || a == A_Aa_Aa            \N
                                     || a == A_Aa                \N
                                     || a == A_Aa))N
N
A aN
A_aA(aA_ A_a a,N
             A_a a,N
             a A0 * a a,N
             a A0 * a a,N
             a A0 * a a,N
             a a a0_a)N
{N
    A0 * a_a = (A0 *) a;N
    A_a a = a;N
N
    /* Aa a a a 'a' a 'a' a-a?N
     * Aa a a a a a a a a a a a a AaN
     * a.  Aa a a a a a a, a a a a aN
     * a a a */N
N
    A_A_A_A;N
N
    /* Aa a a a a a a a a Aa 0.0 */N
N
  a:N
    a = a;N
    a (A_a[a][a]) {N
        a A_A:N
            a A;N
N
        a A_A:N
        a A_A_A_A_A_A:N
            a A;N
N
        a A_A_a + A_A:N
        a A_A_a + A_A:N
        a A_A_a + A_A_A_A_A_A:N
N
            /* Aa a a a a a A, a a a a a aN
             * a a a a a a a a.N
             *N
             * A A a a a a a A0: Aa a a aN
             * a.  (Aa a a a a a a a a aN
             * a a) */N
            a(a != A_Aa);N
N
            /* Aa a a a a a a a a-a.  Aa a a aN
             * a a A0: "Aa a a".  Aa a a aN
             * a a a a a a a a.  Aa a a aN
             * a a a, a a a a a a a a, aN
             * a a a a a a a a a a a aN
             * a a a a a a.  A a a a A0 aN
             * a a'a a a a a.  Aa a A0 (a a)N
             * a a a a a a a a A a a aN
             * a a a a a a.  Aa a A a a a AN
             * a a a, a A0 a, a a A0.  Aa a aN
             * a a a a a a 0 a 0, a a aN
             * a a a a a a a a a aN
             * a.  Aa a'a a a a a a a a aN
             * a, a a a a a a a a a a aN
             * a a a a a a.  Aa a a aN
             * a a a A a A, a a a'a a a a aN
             * a a.N
             *N
             * Aa a a A0, a a a a a a a-a aN
             * a a a a a */N
            a {N
                a = a_a_A(a, &a_a, a0_a);N
            }N
            a (a == A_Aa);N
N
            /* A0 Aa a a a a a a-a a,N
             * a a a a a a a.N
             *      A A* ÷N
             * Aa a a a a A a a a a, a a a a aN
             * a a a a a a a. */N
            a (a == A_Aa) {N
                a A;N
            }N
N
            /* Aa, a A A+.  Aa a a a a a aN
             * a a A0 a a a a a, a a a'a aN
             * a a a a a a (a A, a a aN
             * a a).  Aa a a a a A0 Aa a aN
             * a Aa a, a a a a a a a aN
             * a a a a a a a a a a a aN
             * a a a a. */N
            a (A_a[A_Aa][a] - A_A_aN
                                            == A_A_A_A_A_A)N
            {N
                a A;N
            }N
N
            /* Aa a a a, a a a A a a a. */N
            a (a == A_Aa_Aa) {N
N
                /* Aa a a a a a a a aN
                 * a.  */N
                a {N
                    a = a_a_A(a, &a_a, a0_a);N
                }N
                a (a == A_Aa_Aa);N
N
                /* Aa a a a a a a a aN
                 * a a a, a a a, a a a, a a aN
                 * a a a A a a A0. */N
                a (! A_A_A_A(a)) {N
                    a = A_Aa;N
                }N
            }N
N
            /* Aa, a a a a a a a a a a aN
             * a.  Aa a A0: "Aa a a" a a a aN
             * a a a */N
            a A_a[a][a] != A_A_A_A_A_A;N
N
        a A_A_A_a:N
N
            /* Aa a'a a a a a a A a a a a a aN
             * a-A a a a.  A a a a A */N
            a {N
                a = a_a_A(a, &a_a, a0_a);N
            }N
            a (a == A_Aa_Aa || a == A_A);N
N
            /* Aa, 'a' a a a a a-A a.  Aa a AN
             * a a a, a a a a a a 'a'.  Aa aN
             * a'a a, a a a a a a a A */N
            a (! A_A_A_A(a)) {N
                a = A_Aa;N
            }N
N
            a a;N
N
        a A_A_a_A_a_a + A_A:N
        a A_A_a_A_a_a + A_A:N
N
            /* A0a Aa'a a a Aa + Aa.N
             * A (A | A) × */N
N
            a (a_a_A(a, &a_a, a0_a)N
                                                          == A_Aa_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a] - A_A_a_A_a_a == A_A;N
N
        a A_A_a_A_a_A_a_A + A_A:N
        a A_A_a_A_a_A_a_A + A_A:N
N
            /* A0a (A | A) × ( A | A )? A */N
            a (a_a_A(&a_a, a, a0_a) == A_Aa) {N
                a A;N
            }N
N
            a A_a[a][a] - A_A_a_A_a_A_a_AN
                                                                == A_A;N
N
        a A_A_a_A_a_a + A_A:N
        a A_A_a_A_a_a + A_A:N
        {N
            /* A0a A (A | A)* × (A | A | A | A | A ) */N
N
            A_a a = a;N
            a {N
                a = a_a_A(a, &a_a, a0_a);N
            }N
            a (a == A_Aa_Aa || a == A_Aa_Aa);N
            a (a == A_Aa) {N
                a A;N
            }N
N
            a A_a[a][a] - A_A_a_A_a_aN
                                                               == A_A;N
        }N
N
        a A_a_a_A_a_A + A_A:N
        a A_a_a_A_a_A + A_A:N
        {N
            /* A0a A (A | A)* (A | A)? × (A | A) */N
N
            A_a a = a;N
            a (a == A_Aa_Aa || a == A_Aa_Aa)N
            {N
                a = a_a_A(a, &a_a, a0_a);N
            }N
            a (a == A_Aa_Aa || a == A_Aa_Aa) {N
                a = a_a_A(a, &a_a, a0_a);N
            }N
            a (a == A_Aa) {N
                a A;N
            }N
            a A_a_a_A_a_A;N
        }N
N
        a A_A_a_A + A_A:N
        a A_A_a_A + A_A:N
            {N
                a A_a = 0;N
N
                /* A0a Aa a a a a a a aN
                 * a a a a a a a a a aN
                 * a a a a a a.N
                 *N
                 *    a (A A)* A × AN
                 *  [^A] (A A)* A × A */N
N
                a (a_a_A(a,N
                                     &a_a,N
                                     a0_a) == A_Aa_Aa)N
                {N
                    A_a++;N
                }N
N
                a A_a % 0 == 0;N
            }N
N
        a:N
            a;N
    }N
N
#a AN
    Aa_a_a( aA_  "Aa A a: A_a[%a, %a] = %a\a",N
                                  a, a, A_a[a][a]);N
    a(0);N
#aN
    a A;N
}N
N
A A_aN
A_a_a_A(aA_ A0 ** a, a A0 * a a, a a a0_a)N
{N
    aA;N
N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a >= a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        *a += A0A(*a);N
        a (*a >= a) {N
            a A_A;N
        }N
        a = aA_A_A0(*a, a);N
    }N
    a {N
        (*a)++;N
        a (*a >= a) {N
            a A_A;N
        }N
        a = aA_A_A(**a);N
    }N
N
    a a;N
}N
N
A A_aN
A_a_a_A(aA_ a A0 * a a, A0 ** a, a a a0_a)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a < a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        A0 * a_a_a = a0(*a, -0, a);N
        A0 * a_a_a_a;N
N
        a (! a_a_a) {N
            a A_A;N
        }N
N
        a ((a_a_a_a = a0((A0 *) a_a_a, -0, a))) {N
            a = aA_A_A0(a_a_a_a, a_a_a);N
            *a = a_a_a;N
            a_a_a = a_a_a_a;N
        }N
        a {N
            *a = (A0 *) a;N
            a A_A;N
        }N
    }N
    a {N
        a (*a - 0 < a) {N
            *a = (A0 *) a;N
            a A_A;N
        }N
        (*a)--;N
        a = aA_A_A(*(*a - 0));N
    }N
N
    a a;N
}N
N
A aN
A_aA(aA_ A_a a,N
             A_a a,N
             a A0 * a a,N
             a A0 * a a,N
             a A0 * a a,N
             a a a0_a)N
{N
    /* a a a a a a a a Aa Aa AaN
     * a a a.  Aa a://a.a.a/a/a0/ */N
N
    A0 * a = (A0 *) a;N
    a a_a_a = A;N
    a a_a = A;N
N
    A_A_A_A;N
N
    /* Aa a a a a a a a.N
        A0.  a  ÷N
        A0.  ÷  aN
      Aa a a Aa a a'a a a a a a a */N
    a (a == A_A || a == A_A) {N
        a a != a;N
    }N
N
    /* A 0: Aa a a a A. */N
    a (a == A_A && a == A_A) {N
        a A;N
    }N
N
    /* Aa a a a.  A a A a aN
     * a a Aa a a a a a a a a aN
     * a a a a a a, a a a a aN
     * a a a a a a a a-a a a a *./N
       A0.  Aa | A | A  ÷ */N
    a (a == A_Aa || a == A_A || a == A_A) {N
        a A;N
    }N
N
    /* Aa Aa a Aa a, a a a, Aa, A, a A.N
     * (Aa Aa 0.0, Aa Aa Aa.)N
        A0.  A (Aa | Aa)*  →  A */N
    a (a == A_Aa || a == A_Aa) {N
N
        /* Aa a a a a a a a aN
         * a a a a a a a a-aN
         * a.  Aa a a a a a a a aN
         * a a a a a a a a a */N
        a A;N
    }N
N
    a (a == A_Aa || a == A_Aa) {N
        A0 * a_a = a;N
        a A_a a = a_a_A(a, &a_a, a0_a);N
        a (   a != A_AN
            && a != A_AaN
            && a != A_AN
            && a != A_A)N
        {N
            a = a;N
            a = a_a;N
        }N
N
        /* Aa, a 'a' a 'a' a a a; a a a aN
         * a'a a a a */N
        a (a == A_Aa || a == A_Aa) {N
            a A;N
        }N
    }N
N
    /* Aa a a a a a a a, a a aN
     * a a a a a a a a, a a aN
     * a a a, a a a a a (aN
     * a a a) a a, a a a a a aN
     * "a" a a a a, a, a a. AaN
     * a, a a a a a a a a a, a a aN
     * a a a a a a a.N
N
     * A0. Aa  ×  Aa */N
    a (a == A_Aa && a == A_Aa) {N
        a A;N
    }N
N
    /* A0.  (Aa | Aa) Aa  ×  Aa */N
    a (a == A_Aa && a == A_Aa) {N
        A0 * a_a = a;N
        A_a a = a_a_A(a, &a_a, a0_a);N
        a (a == A_Aa || a == A_Aa) {N
            a A;N
        }N
    }N
N
    /* Aa a a a a'a a a a, a a a Aa aN
     * a Aa a a a a a a Aa* Aa*, a a a a aN
     * a Aa a, a a a a'a a a Aa'a a a.N
     * Aa a a a a, a a a a Aa a a aN
     * a a a */N
N
    a (a == A_Aa || a == A_A || a == A_A) {N
        a_a_a = A;N
        a = a_a_A(a, &a, a0_a);N
    }N
N
    a (a == A_Aa) {N
        a_a = A;N
        a {N
            a = a_a_A(a, &a, a0_a);N
        }N
        a (a == A_Aa);N
    }N
N
    a (a == A_Aa) {N
        a = a_a_A(a, &a, a0_a);N
    }N
N
    /* Aa a a a a a a a a-a-a a a Aa, a aN
     * a a a Aa */N
    a (a == A_Aa || a == A_Aa) {N
N
        /* Aa, a a a aN
         *      (Aa | Aa) Aa* Aa* (Aa | A | A)?N
         * a a a a a a a a a Aa, a a a Aa,A,A.N
         * Aa a a a a a:N
         *N
         * A0    Aa Aa* Aa*  ×  ( ¬(Aa | Aa | Aa | Aa | AN
                                           | A | Aa | Aa) )* AaN
           A0a  (Aa | Aa) Aa* Aa*  ×  (Aa | Aa | Aa)N
           A0   (Aa | Aa) Aa*  ×  (Aa | Aa | Aa | A | A)N
           A0  (Aa | Aa) Aa* Aa*  ×  (Aa | Aa | A | A)N
           A0  (Aa | Aa) Aa* Aa* (Aa | A | A)?  ÷N
         */N
N
        /* Aa a a A0 a a a a a a */N
        a (! a_a_a) {N
            a (a == A_Aa) {          /* A0 */N
                A0 * a = (A0 *) a;N
                A_a a = a;N
N
                a (    a != A_AaN
                        && a != A_AaN
                        && a != A_AaN
                        && a != A_AaN
                        && a != A_AN
                        && a != A_AN
                        && a != A_AaN
                        && a != A_AaN
                        && a != A_A)N
                {N
                    a = a_a_A(&a, a, a0_a);N
                }N
                a (a == A_Aa) {N
                    a A;N
                }N
            }N
N
            a (   a == A_Aa    /* A0a */N
                || a == A_AaN
                || a == A_Aa)N
            {N
                a A;N
            }N
N
            a (! a_a) {     /* A0 a a a a a a Aa* */N
                a (   a == A_AaN
                    || a == A_AaN
                    || a == A_AaN
                    || a == A_AN
                    || a == A_A)N
                {N
                    a A;N
                }N
            }N
N
            /* A0.  Aa a A0 a a a a a a, a aN
             * a a a a a Aa a a a aN
             * a a */N
            a (   a == A_AaN
                || a == A_AaN
                || a == A_AN
                || a == A_A)N
            {N
                a A;N
            }N
        }N
N
        /* A0.  */N
        a A;N
    }N
N
    /* Aa, a a a.N
    A0.  Aa  ×  Aa */N
N
    a A;N
}N
N
A A_aN
A_a_a_A(aA_ A0 ** a, a A0 * a a, a a a0_a)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a >= a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        a {N
            *a += A0A(*a);N
            a (*a >= a) {N
                a A_A;N
            }N
            a = aA_A_A0(*a, a);N
        } a (a == A_Aa || a == A_Aa);N
    }N
    a {N
        a {N
            (*a)++;N
            a (*a >= a) {N
                a A_A;N
            }N
            a = aA_A_A(**a);N
        } a (a == A_Aa || a == A_Aa);N
    }N
N
    a a;N
}N
N
A A_aN
A_a_a_A(aA_ a A0 * a a, A0 ** a, a a a0_a)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a < a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        A0 * a_a_a = a0(*a, -0, a);N
        a (! a_a_a) {N
            a A_A;N
        }N
N
        /* Aa a a Aa a Aa.  a a a a a a aN
         * a a a a a a a a */N
        a {N
            A0 * a_a_a_a;N
            a ((a_a_a_a = a0((A0 *) a_a_a, -0,N
                                                                      a)))N
            {N
                a = aA_A_A0(a_a_a_a, a_a_a);N
                *a = a_a_a;N
                a_a_a = a_a_a_a;N
            }N
            a {N
                *a = (A0 *) a;N
                a A_A;N
            }N
        } a (a == A_Aa || a == A_Aa);N
    }N
    a {N
        a {N
            a (*a - 0 < a) {N
                *a = (A0 *) a;N
                a A_A;N
            }N
            (*a)--;N
            a = aA_A_A(*(*a - 0));N
        } a (a == A_Aa || a == A_Aa);N
    }N
N
    a a;N
}N
N
A aN
A_aA(aA_ A_a a,N
             A_a a,N
             A_a a,N
             a A0 * a a,N
             a A0 * a a,N
             a A0 * a a,N
             a a a0_a)N
{N
    /*  Aa a a a a a a a a 'a' a 'a' aN
     *  a Aa a a, a a a a, a a aN
     *  Aa a a a a a a a a a.  Aa a aN
     *  a a a a a.  Aa a a a a aN
     *  a 'a' a a, a a a a 'a'; a aN
     *  a a a a A_A.  Aa a a a a aN
     *  a a a a a a a a a a.  AaN
     *  a, 'a' a a a a a a a a a aN
     *  'a' a.  Aa a://a.a.a/a/a0/ */N
N
    A0 * a_a = (A0 *) a;N
    A0 * a_a = (A0 *) a;N
    A_a a = a;N
    A_a a;N
N
    A_A_A_A;N
N
    /* Aa a a a a a a a a Aa 0.0 */N
N
  a:N
    a = a;N
    a (A_a[a][a]) {N
        a A_A:N
            a A;N
N
        a A_A:N
            a A;N
N
        a A_a_a_a:     /* 0 a a a a a */N
            a = a_a_A(&a_a, a, a0_a,N
                                 A /* Aa'a a Aa a Aa */ );N
            /* A a a a a Aa a Aa a aN
             * a a a, a a a a a a a.N
             * Aa a'a a a a a a */N
            a a == A_Aa || a == A_Aa;N
N
        /* A0 Aa Aa a Aa a, a a a a aN
         * a a a a a a a.  Aa a a a'aN
         * a a, a a a a a a a a a aN
         * a a a a.  Aa a a a a a a 'a a aN
         * a a a a a a a', a a a a a aN
         * a, a a a a a.  Aa, a a aN
         * a a a a'a a a a a a a.  Aa a aN
         * a, a a a a a 0 'a' a, a a a aN
         * a, a a a a a (a a a a aN
         * a) a a a a a a a a a a-a a aN
         * a a a */N
        a A_Aa_a_A_a_A_a_a:N
            a = a_a_A(&a, a, &a_a, a0_a);N
            a a;N
N
        a A_A_a_A + A_A:N
        a A_A_a_A + A_A:N
N
            /* A0a  Aa_Aa Aa_Aa  ×  Aa_Aa */N
N
            a (a_a_A(&a, a, &a_a, a0_a)N
                                                            == A_Aa_Aa)N
            {N
                a A;N
            }N
N
             a A_a[a][a] - A_A_a_A == A_A;N
N
        a A_A_a_A + A_A:N
        a A_A_a_A + A_A:N
N
            /* A0a  Aa_Aa  ×  Aa_Aa Aa_Aa */N
N
            a (a_a_A(&a_a, a, a0_a,N
                                       A /* Aa a Aa a Aa */ )N
                                                            == A_Aa_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a] - A_A_a_A == A_A;N
N
        a A_A_a_A_a_A_a_A_a_A + A_A:N
        a A_A_a_A_a_A_a_A_a_A + A_A:N
N
            /* A0  (Aa | Aa_Aa)  ×  (AaAa | AaAaAaN
             *       | Aa_Aa) (Aa | Aa_Aa) */N
N
            a = a_a_A(&a_a, a, a0_a,N
                                       A /* Aa a Aa a Aa */ );N
N
            a (a == A_Aa || a == A_Aa_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a]N
                            - A_A_a_A_a_A_a_A_a_A == A_A;N
N
        a A_A_a_A_a_A_a_A_a_A + A_A:N
        a A_A_a_A_a_A_a_A_a_A + A_A:N
N
            /* A0  (Aa | Aa_Aa) (AaAa | AaAaAaN
             *       | Aa_Aa)  ×  (Aa | Aa_Aa) */N
N
            a = a_a_A(&a, a, &a_a, a0_a);N
            a (a == A_Aa || a == A_Aa_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a]N
                            - A_A_a_A_a_A_a_A_a_A == A_A;N
N
        a A_A_a_A_a_A_a_A + A_A:N
        a A_A_a_A_a_A_a_A + A_A:N
N
            /* A0  Aa (AaAa | (AaAaAa | Aa_Aa))  ×  AaN
             * */N
N
            a (a_a_A(&a, a, &a_a, a0_a)N
                                                            == A_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a]N
                                - A_A_a_A_a_A_a_A == A_A;N
N
        a A_A_a_A_a_A_a_A + A_A:N
        a A_A_a_A_a_A_a_A + A_A:N
N
            /* A0  Aa  ×  (AaAa | AaAaAa | Aa_Aa) Aa */N
N
            a (a_a_A(&a_a, a, a0_a,N
                                       A /* Aa a Aa a Aa */ )N
                                                            == A_Aa)N
            {N
                a A;N
            }N
N
            a A_a[a][a]N
                                - A_A_a_A_a_A_a_A == A_A;N
N
        a A_A_a_A + A_A:N
        a A_A_a_A + A_A:N
            {N
                a A_a = 0;N
N
                /* Aa a a a a a a. Aa a, a aN
                 * a a a a (A) a a a a aN
                 * a a a A a a a a aN
                 * a.N
                 *N
                 * A0   a (A A)* A × AN
                 * A0 [^A] (A A)* A × A */N
N
                a (a_a_A(&a,N
                                     a,N
                                     &a_a,N
                                     a0_a) == A_Aa_Aa)N
                {N
                    A_a++;N
                }N
N
                a A_a % 0 != 0;N
            }N
N
        a:N
            a;N
    }N
N
#a AN
    Aa_a_a( aA_  "Aa A a: A_a[%a, %a] = %a\a",N
                                  a, a, A_a[a][a]);N
    a(0);N
#aN
    a A;N
}N
N
A A_aN
A_a_a_A(aA_ A0 ** a,N
                       a A0 * a a,N
                       a a a0_a,N
                       a a a_Aa_Aa)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    a (*a >= a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
N
        /* Aa a Aa a Aa */N
        a {N
            *a += A0A(*a);N
            a (*a >= a) {N
                a A_A;N
            }N
            a = aA_A_A0(*a, a);N
        } a (    a_Aa_AaN
                 && (a == A_Aa || a == A_Aa));N
    }N
    a {N
        a {N
            (*a)++;N
            a (*a >= a) {N
                a A_A;N
            }N
            a = aA_A_A(**a);N
        } a (    a_Aa_AaN
                 && (a == A_Aa || a == A_Aa));N
    }N
N
    a a;N
}N
N
A A_aN
A_a_a_A(aA_ A_a * a, a A0 * a a, A0 ** a, a a a0_a)N
{N
    aA;N
    A_a a;N
N
    A_A_A_A_A_A;N
N
    /* Aa a a a a a a'a a a a, a'a aN
        * a a a a */N
    a (*a != A_A) {N
        a = *a;N
N
        /* Aa a a a a a a a */N
        a (a0_a) {N
            *a = a0(*a, -0, a);N
            a (! *a) {N
                *a = A_A;N
                *a = (A0 *) a;N
            }N
            a {N
                *a = A_A;N
            }N
        }N
        a {N
            (*a)--;N
            *a = (*a <= a) ? A_A : A_A;N
        }N
N
        /* Aa a a a a a a a a */N
        a (a != A_Aa && a != A_Aa && a != A_A) {N
            a a;N
        }N
    }N
N
    a (*a < a) {N
        a A_A;N
    }N
N
    a (a0_a) {N
        A0 * a_a_a = a0(*a, -0, a);N
        a (! a_a_a) {N
            a A_A;N
        }N
N
        /* Aa a a Aa a Aa.  a a a a a a aN
         * a a a a a a a a */N
        a {N
            A0 * a_a_a_a;N
            a ((a_a_a_a = a0((A0 *) a_a_a,N
                                                   -0,N
                                                   a)))N
            {N
                a = aA_A_A0(a_a_a_a, a_a_a);N
                *a = a_a_a;N
                a_a_a = a_a_a_a;N
            }N
            a {N
                *a = (A0 *) a;N
                a A_A;N
            }N
        } a (a == A_Aa || a == A_Aa || a == A_A);N
    }N
    a {N
        a {N
            a (*a - 0 < a) {N
                *a = (A0 *) a;N
                a A_A;N
            }N
            (*a)--;N
            a = aA_A_A(*(*a - 0));N
        } a (a == A_Aa || a == A_Aa);N
    }N
N
    a a;N
}N
N
/* Aa a a(), a a a a */N
#a A_A -0 /* a a a a a a */N
#a A_A_A (a < 0)N
N
#a A_a \N
    a = ((a < a->a) ? A(a) : A_A)N
N
#a A_a(a) \N
    a = (a);  \N
    A_aN
N
#a aA a aN
#a aA a aN
#a aA_A a a_aN
N
/* a a a A_A/A a a a a aN
   "a a" a, a a a, a a. */N
#a AaA \N
    a (A.a_a) \N
       a->a_a->a[A.a_a] |= A.a_a; \N
    aAN
N
#a A_A_A_A(a,a)                        \N
(                                                           \N
    (   ( a )                                         ) && \N
    (   ( a )->a.a.a_a                     ) && \N
    ( ( ( a )->a.a.a_a ) == ( (a) + 0 ) )    \N
)N
N
#a A_A_A_A_A(a,a)                   \N
(                                                           \N
    (   ( a )                                         ) && \N
    (   ( a )->a.a.a_a                     ) && \N
    (   ( a )                                       ) && \N
    ( ( ( a )->a.a.a_a ) == ( (a) + 0 ) )    \N
)N
N
N
#a A_A_A_A(a,a) \N
    (a)->a.a.a_a = ( (a) + 0 )N
N
#a A_A_A_A(a) \N
    (a)->a.a.a_a = 0N
N
/* a a a a a a a */N
N
#a A_A_A(a, a, a, a, a0)       \N
    a = a; \N
    a = a; \N
    a0 = a0; \N
    a = a; \N
    a->a_a = a; \N
    a a_a;N
N
/* a a a a a a a, a a a */N
N
#a A_A_A_A(a, a, a, a, a0)   \N
    a = a; \N
    a = a;     \N
    a0 = a0; \N
    a = a; \N
    a->a_a = a; \N
    a a_a_a;N
N
#a A_A_a(a)                                  \N
    A_A_a({                                         \N
        A_A_A(a, a, a0_a,a);   \N
        Aa_a_a( aA_                               \N
            "%*a" a " %a%a%a%a%a\a",                       \N
            A_A(a), "",                        \N
            A_a_a[a->a_a],                  \N
            ((a==a_a||a==a_a) ? "[" : ""),   \N
            ((a==a_a) ? "A" : ""),                   \N
            ((a==a_a) ? "A" : ""),                  \N
            ((a==a_a||a==a_a) ? "]" : "")    \N
        );                                                  \N
    });N
N
/*N
N
a() - a a aN
N
Aa a a a a a a a a a. Aa a a a,N
a 'a' a a a a a, a a. Aa a a a a a aN
a a a a a a a a a a (A|A|A), a a aN
a a a a a a. Aa a, a a a aN
a, a a-a a a a a a a. Aa a a a aN
a a a, a a a.N
N
Aa a a a a a a a; a a /A+/, aN
a a a a A, a a a a a a a aN
a a a; a a a a: a a aN
a a, a a a a a a a a aN
a a a a.  Aa a a, a a a a a aN
'a a a a'. Aa a a a a a a a a aN
a, a a a a a 'a' a. Aa a, a a aN
a a a a, a a a a-a a.N
Aa a a a a a a a a a a a a aN
a a a a a a a a a a; a.a. (??{$a}) aN
a a a a a a.N
N
Aa a a a a a a a, aN
a a a a a.N
N
A a a a a a A a a a, a a aN
a a (?=a) a a a a A a a a. Aa a aN
a a a "a a a a a a a, a a a"N
a.N
N
A a a a a a a a a A a A a a a a aN
a (a a a a a a) a a a /A*A/: a A aN
a a a a a a a a, a A a a aN
a a a a. Aa a a a a a a.N
N
Aa a a a a a a a a a a a a/a aN
a a a a a a.  Aa a, A a a aN
a a a a /(?=A)A/ a a a A a aN
'a A'; a A_A a a a a a a a aN
a a A a A_A_a a a a a a a aN
a a a a A. Aa a a a a a. Aa aN
a a a a a a 'A_A', a a a a a, a aN
a A_A a A_A_a, a a a a a aN
a a a a.N
N
Aa a a a a a a a a a a a, aN
a a a a a a a a. Aa a a a a aN
a-a a a. Aa a a a a, a aN
a a a a #a A a a a a a.N
N
Aa'a a a a a a (a a) AN
a:N
N
    a (a) {N
    ....N
N
#a A a->a.aN
N
    a A: // a a a a A a, (?=A)AN
	A.a = ...; // a a a a a aN
	...N
	// a a a a a a a a a aN
	// A_A/A_A_a, a a a a aN
	// a a a A:N
	A_A_A_A(A_A, A, a);N
	// AN
N
    a A_A: // a a a a A; a a a AN
	a = A;N
	a = A.a; // a a a a a aN
	a;N
N
    a A_A_a: // A a, a a a aN
	...;   // a a a, a ...N
	aA; // a a aN
N
#a AN
N
    ...N
    }N
N
Aa a a-a a a a a a a a a aN
a, a a a a a a:N
N
    a A: // a a a a A a, (?=A)AN
    {N
	a a = ...N
	...N
	a (a(A)) {N
	    a = A;N
	    a = a;N
	    a;N
	}N
	...;   // a a a, a ...N
	aA; // a a aN
    }N
N
Aa a a a, a a a a, a a a. Aa aN
a a a a, a a A.a a a a a a a a aN
a, a a a aN
N
	A_A_A(a_a, a, a, a_a);N
	A_A_A_A(a_a, a, a, a_a);N
N
a a a a a'a a a a 'a_a', a aN
a a a a a a a a a a, a a a 'a'.N
Aa a, a a a a a, a a a a a aN
a a a. Aa A.a a a a a a a a a aN
a a a a, a a a a a a a-a, aN
a a a a.N
N
Aa a a a a a a a a a a aN
a-a-a a a a a, a a a a a a aN
a a a. Aa a a a a a a a a A a aN
a a a a, a a a A a a a:N
N
    /(((A)+)+)+....(A)+....A/N
N
Aa a a a a a a/a a a a a,N
(?>A), a a a a a a a a A aN
a.N
N
Aa a a a a a a a a 0A a a.N
A_a_a a a a a a a a a a,N
a A_a_a a a a a a aN
A_a_a.  Aa a a a() a a, a a a aN
a, a a a a a a a. Aa a aN
a a, a a a a a a a a a a. Aa a aN
a(), a a a a a a.N
N
Aa a a a a a a a, a a a a a aN
a a a a a a a a a a a a a a a aN
a a a a.  Aa a a a a a a a,N
a a a a a a a a a a a a \a, a a aN
a a a a a a a a a a a a a a a aN
a.  Aa a a'a a a a a a/a a a a a a a aN
a a a a, a A_A_A a a a, a a a AaN
a a a a, a a a a a a a a a a a aN
a a a a a a a.N
N
*/N
N
/* a -0 a a, $+[0] a a */N
A Aa_aN
A_a(aA_ a_a *a, a *a, a *a)N
{N
    aA;N
    a a a0_a = a->a_a0_a;N
    a A0 a = A0_A_A;N
    A *a_a = a->a;N
    a *a = AaA(a_a);N
    Aa_A_A(a,a);N
    /* a a a. Aa a a a a a A_a_a */N
    a_a *a;N
    /* a a a a a a a a */N
    a *a;N
    a *a;N
    A0 a = 0;	/* a a; a a a a a */N
    Aa_a a = 0; /* a a a;  a a a a a */N
    Aa_a a = 0; /* a a a a a a a a a */N
    a *a = a;N
    a *a = a->a;N
    a *a; /* a a a a a A */N
    a *a;   /* a a a a (a) a a A */N
    A0   *a0;   /* a a a a a a */N
    A0 a;   /* a a a a A(a), a -0 a A */N
N
    a a = 0;	    /* a a a A_a */N
    A0 a = 0;            /* a a a a */N
    A0 a_a = 0; /* a a A a a a */N
    a A0 a_a_a =N
        (0 * a->a > A_A_A_A_A) ?N
        0 * a->a : A_A_A_A_A;N
    a_a *a_a = A; /* a a a a a a aN
							    a */N
    /* a_a a a a a a_a a a a a a a N
       a a a a a a a a a_a a a a */N
    a_a *a_a = A; /* a a a a a a */N
    a_a *a_a = A; /* a a A_A a */N
    a a_a  *a_a = A; /* a a a */N
    A0 a_a;N
    a a_a = 0;      /* a a a a? */N
    a a_a = 0;   /* a_a a a a a/a a */N
    a *a = a;N
    A *a = A;     /* a a a a a a? */N
    A *a_a = A;   /* a a a a a a */N
    A *a_a_a = A; /* a a a a a a N
                               a a a a */N
    A0 a = 0;       /* a a a a */N
    a a_a = Aa_A_A(a) ? 0 : 0;N
    A* a a = AaAa(A_a);N
    /* a a a a a a a a a a a aN
     * a a a a. Aa a a a a a a a aN
     * a, a a a a a a a a a/aN
     */N
    a a = 0;	    /* a a a a (?(a)a|a) */N
    a a = 0;	    /* a a "{a,a}" a a "{a,a}?" */N
    a a = 0;	    /* a a A a:N
				0: (?{...})N
				0: (?(?{...})A|A)N
				0: (??{...})N
			       a a a A/A a:N
			        a: a (?=a)N
				a:  a a a a: (?(?=a))N
			    */N
    A* a_a = A;N
    aA;N
    A0 a = A_A;N
    A *a_a = A;	/* a a a */N
    A *a_a_a = A;	/* a a a (?{}) A */N
    A0 a = 0;       /* a '(' a a a a */N
    a a_a;  /* Aa a a? */N
    _a_a_a a;N
    a a_a0_a = a->a_a0_a;N
    a a = A;N
    A0 a_a_a = A_a_a;N
    A0 * a_a_a = A;N
N
/* Aa Aa 0.0 a a a A_a['\a'] */N
#a (a(__A_A) && (__A_A == 0a0) && a(__a0_0) && a(A_0_A_A))N
#  a A_A_AN
    a A0 *a_a_a = A_a;N
#  a A_a a_a_aN
#aN
N
#a AN
    A_A_A_A_A;N
#aN
N
    /* a a a(*^A) */N
    A(AaA_a_a_A(a));N
N
    /* a a 'a a a a' a a a aA */N
    a_a = 0;N
    A_A_A(a_a);N
N
    A_A_A_A;N
N
    a = A_a_a;N
N
    /* Aa a a a a a a a A */N
    A_a;N
    a = a;N
N
    A_A_a( A_A_a({N
            A_A_A( a, a, a0_a, a );N
            Aa_a_a( aA_ "a a\a" );N
    }));N
N
    a (a != A) {N
	a = a + A_A(a);N
	a (a == a)N
	    a = A;N
	a_a = A(a);N
N
      a_a:N
        A_A_a(N
            a (a_a <= A_A) {N
                A * a a = a_a();N
                a *a = a(a);N
N
                A_A_A( a, a, a0_a, a );N
                a(a, a, a, a, A);N
                Aa_a_a( aA_N
                    "%*a%" Aa ":%a(%" Aa ")\a",N
                    A_A(a), "",N
                    (A)(a - a->a),N
                    AaA_a(a),N
                    (A_a[A(a)] == A || !a) ?N
                        0 : (A)(a - a->a));N
            }N
        );N
N
        a_a = 0;N
N
        A_a;N
        a(a < 0 && (a >= 0 || a == A_A));N
N
	a (a_a) {N
	a A: /*  /^../ a /\A../  */N
	    a (a == a->a)N
		a;N
	    aA;N
N
	a A: /*  /^../a  */N
	    a (a == a->a ||N
		(!A_A_A && a[-0] == '\a'))N
	    {N
		a;N
	    }N
	    aA;N
N
	a A: /*  \A  */N
	    a (a == a->a)N
		a;N
	    aA;N
N
	a A: /*   \A  */N
	    /* a a a */N
	    a->a.a.a = a->a[0].a;N
	    a->a[0].a = a - a->a;N
	    A_A_A(A_a, a, a, a,N
                            a_a_a);N
	    A_A; /* A */N
N
	a A_a_a:N
	    /* a a a a a */N
	    a->a[0].a = a->a.a.a;N
	    aA_A;N
	    A_A; /* A */N
N
	a A: /* /..$/a  */N
	    a (!A_A_A && a != '\a')N
		aA;N
	    a;N
N
	a A: /* /..$/  */N
	    a (!A_A_A && a != '\a')N
		aA;N
	    a (a->a - a > 0)N
		aA;N
	    a;N
N
	a A: /*  \a  */N
	    a (!A_A_A)N
		aA;N
	    a;N
N
	a A: /*  /./a  */N
	    a (A_A_A || a >= a)N
		aA;N
            a a_a;N
N
	a A_A: /*  /./  */N
	    a (   A_A_AN
                || a >= aN
                || a == '\a')N
            {N
		aA;N
            }N
            a a_a;N
N
N
#a  AN
#a A a->a.aN
        a A: /* (a|a) a a a */N
            /* Aa a a a a a a a a aN
               a a a a a a a a a a. N
             */N
            a ( !   A_A_AN
                &&   a < aN
                && ! A_A_A(a, a))N
            {N
                A_A_a(N
                    Aa_a_a_a( aA_  "%aA: a a a a a a...%a\a",N
                              a, A_a[0], A_a[0])N
                );N
                aA_A;N
                A_A; /* A */N
            }N
            /* A */N
	a A:  /* (a|a)  */N
	    /* a a a a a a a a a:N
	     * Aa a a, a a a a a, aN
	     * a a a-a a. Aa a a aN
	     * a a a a a. Aa a, a a:N
	     *    0  0 0 0    0N
	     *    a|a|a|a|aN
	     * a a a a a "a", a aN
	     * a a a a a a 0, a a aN
	     * a a a 0, a a a a 0 (aN
	     * a a a a a 0 a a a).N
	     *N
	     * Aa a a a a, a a a (a.a. 0,0,0,0),N
	     * a a a a a a a; a a a aN
	     * a a a a a a a a a,N
	     * a a a a a a a a.N
	     *N
	     * Aa a a a a a a a a a a aN
	     * a a a-a a, a[].a, aN
	     * a, a a a, a a a a (a a).N
	     * Aa a a a a a a a a 0->0, 0->0,N
	     * 0->0, 0->0, 0->0.  Aa a a a a a a, aN
	     * a a a (0 a), a a a a a, aN
	     * a a a a a a; a a a aN
	     * a a 0,0,0,0. Aa a a a a a aN
	     * a a, a a a a a a a a aN
	     * a-a a a a (a a a a a a a 0,N
	     * a a a a a a 0).N
	     *N
	     * Aa a a a a'a a a a a aN
	     * a a a a a, a a a a a a aN
	     * a a a'a a a a. Aa a a aN
	     * a a a a a a; a a a aN
	     * a a a: a a a a a a a aN
	     * a a a, a a a a a a a aN
	     * a a a a a a. Aa aN
	     * Aa a a a, a'a a a a.N
	     *N
	     * Aa a a a a a a a a a aN
	     * a a a a a, a.a. 0,0, a a 0.N
	     * Aa a a a a, a a a a a a a,N
	     * a a a a a a a a a a aN
	     * a a a.N
	     */N
N
	    {N
                /* a a a A a A? (a0 a a a) */N
                A_A_A(a);N
N
                /* a a a a a a a */N
		a_a_a * a aN
        	    = (a_a_a*)a->a->a[ A( a ) ];N
		A * a = A_A(a->a->a[ A( a ) + 0 ]);N
                A0 a = a->a;N
N
                a (a->a == A || a->a == A0) {N
                    _A_A_A_A_A;N
                    a (a0_aN
                        && ! A_A_AN
                        && A0_A_A_A0(a)N
                        && a->a == A)N
                    {N
                        /* Aa a a a A, a a a a aN
                         * a a a a A0 a aN
                         * a */N
                        _A_A_A_A_A_A0_A(a,N
                                                               a->a);N
                    }N
                }N
                a (   a->aN
                    && (     A_A_AN
                        ||   a >= aN
                        || ! A_A_A(a, a)))N
                {N
        	    a (a->a[ a ].a) {N
        	         A_A_a(N
                            Aa_a_a_a( aA_  "%aA: a a a...%a\a",N
                                          a, A_a[0], A_a[0])N
                        );N
			a (!a->a)N
			    a;N
        	    } a {N
        	        A_A_a(N
                            Aa_a_a_a( aA_  "%aA: a a a a a a...%a\a",N
                                          a, A_a[0], A_a[0])N
                        );N
        	        aA_A;N
        	   }N
                }N
N
            { N
		A0 *a = ( A0* )a;N
N
		A a = 0;N
		A a = 0;N
		A0 *a = (A0*)A;N
		A0 a[ A0_A_A + 0 ];N
		A0 a = 0; /* a a a a a a a */N
		A0 a = 0; /* a a a a a a? */N
N
		A.a = a->a;N
		A.a = a;N
		A.a = A;N
		A.a = A; /* a a a a => a'a a */N
		A.a = 0;N
N
		/* a a a A; a a a a aN
		   a a a a a a a a aN
		   a a */N
N
		a ( a && a <= (A0*)(a) ) {N
                    A0 a = a->a[ a ].a.a;N
                    A a = 0;N
                    A0 a = 0;N
		    A0 a;N
                    a = a->a[ a ].a;N
N
		    a (a) { /* a'a a a a */N
			a (!a) {N
			    a = 0;N
			    /* a a a a */N
			    a (A.a) {N
				A.a = (A0*)a;N
				A.a = 0;N
			    }N
			    a {N
				A.a = a;N
				A.a = a;N
			    }N
			}N
			a (!A.a || a < A.a)N
			    A.a = a;N
			A.a = a;N
		    }N
N
		    A_A_A_a({N
                                A_A_A( (a *)a, a, a0_a, a );N
                                /* A */N
                                AaA_a( Aa_a_a,N
                                    "%*a%aA: Aa: %0" Aa " Aa: %a ",N
                                    A_A(a), "", A_a[0],N
			            (A)a, (a ? 'A' : 'A'));N
		    });N
N
		    /* a a a a a a a */N
		    a ( a && (a || a < (A0*)(a))) {N
			A0 a;N
			A_A_A_A(a_a, a, a, a,N
                                             (A0 *) a, a,N
                                             a, a, a, a,N
                                             a, a);N
			a++;N
			a (a>0)N
			    A.a = A;N
			a (a &&N
			     ( ((a =N
			      a + a - 0 - a->a)) >= 0)N
N
			     && ((A0)a < a->a)N
			     && a->a[a].a == a)N
			{N
			    a = a->a[a].a;N
			}N
			a {N
			    a = 0;N
			}N
			a += a;N
N
		    }N
		    a {N
			a = 0;N
		    }N
		    A_A_A_a(N
                        Aa_a_a( aA_N
		            "A: Aa:%0a A:%0" Aa " Aa Aa: %0" Aa "%a\a",N
		            a, a, (A)a, A_a[0] );N
		    );N
		}N
		a (!a)N
		   aA;N
N
		/* a a a a a a */N
		{N
		    A0 a = A.a;N
		    a = 0;N
		    a (a) {N
			a = a->a[a].a;N
			a++;N
		    }N
		    A.a = a;N
		}N
N
		A_A_a(N
                    Aa_a_a_a( aA_  "%aA: a %" Aa " a a%a\a",N
                        a,N
			A_a[0], (A)A.a, A_a[0] );N
		);N
		a a_a_a; /* a a a a a */N
	    }}N
	    A_A; /* A */N
N
	a A_a_a: /* a a - a a a */N
        {N
            A0 *a;N
            a ( A.a ) {N
                /* a a a a a a a a a a a,N
                 * a.a.N
                 *    /(?:A(.)(.)|A(.)).../N
                 * a a a a a A a a a a a aN
                 * a a a a */N
                A_A(A.a);N
                A_A(A.a, A.a);N
	    }N
	    a (!--A.a) {N
	        A_A_a({N
                    Aa_a_a_a( aA_  "%aA a...%a\a",N
                        a,N
			A_a[0],N
			A_a[0] );N
		});N
		aA_A;N
	    }N
	    {N
		/* Aa a-a a a a.  Aa a a aN
		 * a A(A^0) a a a (A(A) a a), a a a */N
		A0 a = 0;N
		A0 a;N
		A0 a a = A.a;N
		a_a_a * a aN
		    = ((a_a_a*)a->a->a[A(A.a)])->a;N
		a (a=A.a; a; a=a[a].a) {N
		    a (a > a && (!a || a < a))N
			a = a;N
		}N
		A.a = a;N
	    }N
N
          a_a_a:N
            a (a_a) {N
                a_a = 0;N
                a_a = 0;N
            }N
N
            a ( A.a ) {N
                A.a = a->a;N
                A.a = a->a;N
	        A_A(A.a);N
            }N
N
	    /* a a a a a a a a */N
	    {N
		A0 a; /* a a a a a */N
		a_a_a * a aN
		    = (a_a_a*)a->a->a[A(A.a)];N
N
		a((a->a[A.a].a - a->a)N
			    >=  A.a);N
		a = (a->a[A.a].a - a->a)N
			    - A.a;N
		a = A.a;N
N
		a (A.a) {N
		    /* a a a - a a a a a a aN
		     * a a a (a a a a */N
		    A0 a[A0_A_A + 0];N
		    A a;N
		    A a;N
		    A a;N
		    A0 *a;N
N
		    a (a) {N
			a (a0_a) {N
                            /* A Aa a a a a a-a, aN
                             * a a A0A a */N
			    a = a0a_a_a((A0*)a, A0_A, &a,N
						    a);N
			    a += a;N
			}N
			a {N
			    a = *a;N
			    a++;N
			}N
			a = a_a_a(a, a, &a);N
			a = a;N
			a (a) {N
			    a (!--a)N
				a;N
			    a = a0a_a_a(a, a, &a,N
                                                 a);N
			    a += a;N
			    a -= a;N
			}N
		    }N
		}N
		a {N
		    a (a0_a)N
			a (a--)N
			    a += A0A(a);N
		    aN
			a += a;N
		}N
	    }N
N
	    a = A.a + ((A.a && A.a[A.a])N
			    ? A.a[A.a]N
			    : A_A(A.a));N
N
	    A_A_a({N
                Aa_a_a_a( aA_  "%aA a a #%a, a%a\a",N
                    a,N
		    A_a[0],N
		    A.a,N
		    A_a[0]N
		    );N
	    });N
N
	    a ( A.a > 0 || a_a || A.a ) {N
		A_A_A(A_a, a, (a*)a, a,N
                                a_a_a);N
		A_A; /* A */N
	    }N
	    /* a a a a - a a */N
	    A_A_a({N
		A *a a_aN
		    = A_A(a->a->a[A(A.a)+A_A_A]);N
		A ** a a = a_aN
                        ? a_a(a_a, A.a - 0, 0) : A;N
		A *a= a ? a_a() : A;N
N
                Aa_a_a_a( aA_  "%aA: a a a a, a-a: #%a <%a>%a\a",N
                    a, A_a[0],N
		    A.a,N
		    a ? a_a(a, AaA_a_a(*a), AaA(*a), 0,N
			    A_a[0], A_a[0],N
			    (AaA0(*a) ? A_A_A_A : 0)|A_A_A_AN
			) N
		    : "a a a -Aa",N
		    A_a[0] );N
	    });N
N
	    a = (a*)a;N
	    a; /* a a a A */N
            /* A */N
        }N
#a  AN
N
	a A_A0:N
            a (! a0_a) {N
                aA;N
            }N
            /* A */N
N
	a A:N
        {N
	    a *a;N
N
	    a = Aa(a);N
	    a = A_Aa(a);N
            a a_a_a_a;N
N
	a A:             /*  /a/a       */N
            _A_A_A_A_A;N
N
            /* Aa a a a a a a aN
             * a a a a a a a a a a a0.  Aa aN
             * a a a a a a a a aN
             * a a, a A (a) a'a a a a aN
             * a a a a a a a a a.  Aa a a aN
             * a a a */N
            a (a0_a && A0_A_A_A0(*a)) {N
                _A_A_A_A_A_A0_A(a, a->a);N
            }N
            a a_a;N
	a A_A0:N
            a (! a0_a) {N
                aA;N
            }N
            /* A */N
N
	a A:             /*  /a/        */N
          a_a:N
	    a = Aa(a);N
	    a = A_Aa(a);N
N
          a_a_a_a:N
	    a (a0_a != a_a0_a) {N
		/* Aa a a a a a a a0a. */N
		a *a = a;N
		a a * a a = a + a;N
N
		a (a0_a) {N
                    /* Aa a a a0, a a a a a0.N
                     * Aa-Aa0 a a a'a a a a;N
                     * a a a, a a a Aa0 a aN
                     * a a a a a a a a a a a aN
                     * a.  (Aa a a a a a a aN
                     * a a a, a a a a a a aN
                     * a a a a a a a a a a, aN
                     * a a a, a a a a a a a aN
                     * a a (??{...}) a a a) */N
		    a (a < a) {N
			a (   a >= aN
                            || A0_A_A_A0(* (A0*) a))N
                        {N
                            aA;N
                        }N
                        a (A0_A_A(*(A0*)a)) {N
			    a (*a != *a) {N
                                aA;N
                            }N
                            a++;N
                        }N
                        a {N
                            a (A_A_A0_A_A(*a, *(a+0)) != * (A0*) a)N
                            {N
                                aA;N
                            }N
                            a += 0;N
                        }N
			a++;N
		    }N
		}N
		a {N
		    /* Aa a a a a0, a a a a0. */N
		    a (a < a) {N
                        a (   a >= aN
                            || A0_A_A_A0(* (A0*) a))N
                        {N
                            aA;N
                        }N
                        a (A0_A_A(*(A0*)a)) {N
			    a (*a != *a) {N
                                aA;N
                            }N
                            a++;N
                        }N
                        a {N
                            a (A_A_A0_A_A(*a, *(a+0)) != * (A0*) a)N
                            {N
                                aA;N
                            }N
                            a += 0;N
                        }N
			a++;N
		    }N
		}N
		a = a;N
	    }N
            a {N
                /* Aa a a a a a a a a0a. */N
                /* Aa a a a, a a. */N
                a (   a - a < aN
                    || A(a) != aN
                    || (a > 0 && aA(a, a, a)))N
                {N
                    aA;N
                }N
                a += a;N
            }N
	    a;N
	    }N
N
	a A:            /*  /a/a      */N
          {N
	    a_a_a a;N
	    a A0 * a_a;N
	    a a * a;N
	    A0 a_a0_a;N
N
            _A_A_A_A_A;N
            a = aA_a;N
            a_a = A_a_a;N
	    a_a0_a = A_A;N
	    a a_a;N
N
        a A0:           /*  /a/a; a a 'a' a a 0, aN
                                      a a /a; a a a, aN
                                      a a A-0. */N
            a (! a0_a) {N
                aA;N
            }N
            a_a0_a =  A_A | A_A0_A_AN
                                             | A_A0_A_A;N
	    a = aA_a0_a0_a;N
	    a_a = A_a_a0;N
	    a a_a;N
N
        a A_A0:      /* /a/a a a a /a/ > 0 */N
            a (! a0_a) {N
                aA;N
            }N
	    a(a_a0_a);N
	    a_a0_a = A_A0_A_A;N
	    a a_a;N
N
        a A:          /*  /a/a, a a a a aN
                                    'a' a a'a a a. */N
            a(! a_a0_a);N
            a = aA_a0;N
	    a_a = A_a_a0;N
	    a_a0_a = 0;N
	    a a_a;N
N
	a A:            /*  /a/a      */N
            a = aA_a0_a0_a;N
	    a_a = A_a_a0;N
	    a_a0_a = A_A0_A_A;N
	    a a_a;N
N
        a A_A_A:   /* Aa a a a a a-a0N
                                   a */N
            a(! a_a0_a);N
            /* A */N
	a A:            /*  /a/a     */N
            a = aA_a0_a0_a;N
	    a_a = A_a_a0;N
	    a_a0_a = A_A0_A_A;N
            a (a_a0_a || ! a0_a) {N
N
                /* Aa a a a a A A a a a aN
                 * a a a a a-A-0 a a a a a a aN
                 * A-0 a */N
                a_a0_a |= A_A0_A_AN
                                  |A_A0_A_A;N
            }N
	    a a_a;N
N
N
        a A:             /*  /a/a    Aa a a a aN
                                               a-a0 a */N
            a(! a_a0_a);N
	    a = aA;N
	    a_a = A_a;N
	    a_a0_a = 0;N
N
	  a_a:N
	    a = Aa(a);N
	    a = A_Aa(a);N
N
	    a (   a0_aN
                || a_a0_aN
                || a_a == AN
                || (a_a == A && A_A0_A_A))N
            {N
	      /* Aa a a a a a a0, a a a a aN
	       * a a a a a. */N
		a a * a a = a;N
		a *a = a;N
N
		a (! aA_a0_a(a, &a, 0,  a0_a,N
                                        a, 0,  a, a_a0_a,a_a0_a))N
		{N
		    aA;N
		}N
		a = a;N
		a;N
	    }N
N
	    /* Aa a a a a a a a0 */N
	    a (A(a) != aN
                && !A_A_AN
		&& A(a) != a_a[a])N
	    {N
		aA;N
	    }N
	    a (a - a < a)N
		aA;N
	    a (a > 0 && ! a(a, a, a))N
		aA;N
	    a += a;N
	    a;N
	}N
N
	a A: /*  /\A/a  */N
            a_a = 0;N
            /* A */N
N
	a A:  /*  /\a/a  */N
        {N
            a a0, a0;N
            _A_A_A_A_A;N
N
            a (A(a) != A_A) {N
                a (! A_A0_A_A) {N
                    Aa_a_a(aA_ aA(A_A),N
                                                A_A_A_A0_A_A_A);N
                }N
                a a;N
            }N
N
	    a (a0_a) {N
		a (a == a->a)N
		    a0 = aA_A('\a');N
		a {N
                    A0 *a = a0((A0*)a, -0,N
                                    (A0*)(a->a));N
                    a0 = aA_A_a0_a(a, (A0*)(a->a));N
		}N
                a0 = (A_A_A)N
                    ? aA_A('\a')N
                    : aA_A_a0_a((A0*) a,N
                                              (A0*) a->a);N
	    }N
	    a { /* Aa a a a'a a0 */N
		a0 = (a == a->a)N
                     ? aA_A('\a')N
                     : aA_A(A(a - 0));N
                a0 = (A_A_A)N
                    ? aA_A('\a')N
                    : aA_A(a);N
	    }N
            a (a_a ^ (a0 == a0)) {N
                aA;N
            }N
	    a;N
        }N
N
	a A:  /*  /\A/   */N
            a_a = 0;N
            /* A */N
N
	a A:   /*  /\a/   */N
	    a (a0_a) {N
                a a_a0;N
            }N
            a a_a_a_a;N
N
	a A: /*  /\A/a  */N
            a_a = 0;N
            /* A */N
N
	a A:  /*  /\a/a  */N
        {N
            a a0, a0;N
N
          a_a_a_a:N
            /* Aa a a a'a a0, a a a0 a a a aN
             * a a a \a.  Aa a a a a a a a aN
             * a a a a a a a a a a a a aN
             * a-a a.  Aa a a.  Aa a a a:N
             * 0) a a a a a a, a a a a a aN
             *    a a a'a a a.N
             * 0) a a a a-a a, a a a a a a aN
             *    a a a A, a a a a a a a aN
             *    a a a a, a a a a a. */N
            a0 = (a == a->a)N
                 ? aA_A('\a')N
                 : aA_A(A(a - 0));N
            a0 = (A_A_A)N
                ? aA_A('\a')N
                : aA_A(a);N
            a (a_a ^ (a0 == a0)) {N
                aA;N
            }N
	    a;N
        }N
N
	a A: /*  /\A/a  */N
            a_a = 0;N
            /* A */N
N
	a A:  /*  /\a/a  */N
N
          a:N
            a (A(a->a >= a->a)) {N
                a = A;N
            }N
            a a (a0_a) {N
              a_a0:N
                a((a_a) A(a)) {N
                    a A_A:N
                    {N
                        a a0, a0;N
                        a (a == a->a) {N
                            a0 = 0 /* aA_A0('\a') */;N
                        }N
                        a {N
                            A0 *a = a0((A0*)a, -0,N
                                            (A0*)(a->a));N
N
                            a0 = aA_a0_a(a, (A0*) a->a);N
                        }N
                        a0 = (A_A_A)N
                            ? 0 /* aA_A0('\a') */N
                            : aA_a0_a((A0*)a,N
                                                   (A0*) a->a);N
                        a = aA(a0 != a0);N
                        a;N
                    }N
                    a A_A:N
                        a (a == a->a || A_A_A) {N
                            a = A; /* A a a a a aN
                                             a */N
                        }N
                        a {N
                            /* Aa a a a a a a aN
                             * a, a a a a a a a */N
                            a = aA(aA_A_A0(N
                                                a0((A0*)a,N
                                                        -0,N
                                                        (A0*)(a->a)),N
                                                (A0*) a->a),N
                                          aA_A_A0((A0*) a,N
                                                        (A0*) a->a),N
                                          (A0*) a->a,N
                                          (A0*) a,N
                                          a0_a);N
                        }N
                        a;N
N
                    a A_A:N
                        a (a == a->a) {N
                            a = A;N
                        }N
                        a a (A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(aA_A_A0(N
                                                a0((A0*)a,N
                                                        -0,N
                                                        (A0*)(a->a)),N
                                                (A0*) a->a),N
                                          aA_A_A0((A0*) a,N
                                                        (A0*) a->a),N
                                          (A0*) a->a,N
                                          (A0*) a,N
                                          (A0*) a->a,N
                                          a0_a);N
                        }N
                        a;N
N
                    a A_A: /* Aa a a a a a */N
                        a (a == a->a || A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(aA_A_A0(N
                                                a0((A0*)a,N
                                                        -0,N
                                                        (A0*)(a->a)),N
                                                (A0*) a->a),N
                                          aA_A_A0((A0*) a,N
                                                        (A0*) a->a),N
                                          (A0*) a->a,N
                                          (A0*) a,N
                                          (A0*) a->a,N
                                          a0_a);N
                        }N
                        a;N
N
                    a A_A:N
                        a (a == a->a || A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(A_A,N
                                         aA_A_A0(N
                                                a0((A0*)a,N
                                                        -0,N
                                                        (A0*)(a->a)),N
                                                (A0*) a->a),N
                                          aA_A_A0((A0*) a,N
                                                        (A0*) a->a),N
                                          (A0*) a->a,N
                                          (A0*) a,N
                                          (A0*) a->a,N
                                          a0_a);N
                        }N
                        a;N
                }N
	    }N
	    a {  /* Aa a0 a */N
                a((a_a) A(a)) {N
                    a A_A:N
                    {N
                        a a0, a0;N
                        a0 = (a == a->a)N
                            ? 0 /* aA_A0('\a') */N
                            : aA_A0(A(a - 0));N
                        a0 = (A_A_A)N
                            ? 0 /* aA_A0('\a') */N
                            : aA_A0(a);N
                        a = aA(a0 != a0);N
                        a;N
                    }N
N
                    a A_A:N
                        a (a == a->a || A_A_A) {N
                            a = A; /* A a a a a aN
                                             a */N
                        }N
                        a {  /* Aa A-A a a'a a A a 0-0N
                                   a */N
                            a =    A(a - 0) != '\a'N
                                    || A(a) != '\a';N
                        }N
                        a;N
N
                    a A_A:N
                        a (a == a->a) {N
                            a = A;N
                        }N
                        a a (A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(aA_A_A(A(a -0)),N
                                         aA_A_A(A(a)),N
                                         (A0*) a->a,N
                                         (A0*) a,N
                                         (A0*) a->a,N
                                         a0_a);N
                        }N
                        a;N
N
                    a A_A: /* Aa a a a a a */N
                        a (a == a->a || A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(aA_A_A(A(a -0)),N
                                         aA_A_A(A(a)),N
                                         (A0*) a->a,N
                                         (A0*) a,N
                                         (A0*) a->a,N
                                         a0_a);N
                        }N
                        a;N
N
                    a A_A:N
                        a (a == a->a || A_A_A) {N
                            a = A;N
                        }N
                        a {N
                            a = aA(A_A,N
                                         aA_A_A(A(a -0)),N
                                         aA_A_A(A(a)),N
                                         (A0*) a->a,N
                                         (A0*) a,N
                                         (A0*) a->a,N
                                         a0_a);N
                        }N
                        a;N
                }N
	    }N
N
            a (a_a ^ ! a) {N
                aA;N
            }N
	    a;N
N
        a A:N
	a A:  /*  /[a]/a      */N
            _A_A_A_A_A;N
N
            a (A_A0_A_A(A(a)) && ! A_A0_A_A)N
            {N
              Aa_a_a(aA_ aA(A_A), a0_a_a);N
            }N
            /* A */N
	a A:  /*   /[a]/a       */N
	a A:  /*   /[a]/       */N
            a (A_A_A || a >= a)N
                aA;N
	    a (  (! a0_a || A0_A_A(*a))N
	        && ! (A_A(a) & ~ A_A_A_A_A))N
            {N
                a (! A_A_A(a, * (A0 *) (a))) {N
		    aA;N
                }N
		a++;N
            }N
            a {N
	        a (!a(a, a, (A0*)a, (A0*) a,N
                                                                   a0_a))N
                {N
		    aA;N
                }N
                a a_a;N
            }N
	    a;N
N
        a A:N
            a (   A_A_AN
                || (A(a) & A(a)) != A(a)N
                || a >= a)N
            {N
                aA;N
            }N
            a++; /* A a a a a */N
            a;N
N
        a A:N
            a (   A_A_AN
                || (A(a) & A(a)) == A(a)N
                || a >= a)N
            {N
                aA;N
            }N
            a a_a;N
            a;N
N
        a A:N
            a (   ! a0_aN
                ||   A_A_AN
                ||   A_A(a) > A_A0_A_A0(*a)N
	        || ! a(a, a, (A0*)a, (A0*) a,N
                                                                   a0_a))N
            {N
                aA;N
            }N
            a a_a;N
            a;N
N
        a Aa:N
            a (   ! a0_aN
                ||   A_A_AN
                ||   A_A(a) != (A0) *aN
	        || ! a(a, a, (A0*)a, (A0*) a,N
                                                                  a0_a))N
            {N
                aA;N
            }N
            a a_a;N
            a;N
N
        a Aa:N
            a (   ! a0_aN
                ||   A_A_AN
                || ! aA((A0) A_A0_A_A0(*a),N
                             A_A_Aa_A(A_A(a)),N
                             A_A_Aa_A(A_A(a)))N
	        || ! a(a, a, (A0*)a, (A0*) a,N
                                                                   a0_a))N
            {N
                aA;N
            }N
            a a_a;N
            a;N
N
        a A:N
            a (A_A_A) {N
                aA;N
            }N
N
            a (a0_a) {N
                a (    A_A(a) > A_A0_A_A0(*a)N
                   || ! aA(a0_a_a_a((A0 *) a,N
                                                (A0 *) a->a,N
                                                A),N
                                    Aa(a), Aa(a)))N
                {N
                    aA;N
                }N
            }N
            a {N
                a (! aA((A0) *a,N
                                  Aa(a), Aa(a)))N
                {N
                    aA;N
                }N
            }N
            a a_a;N
            a;N
N
        a Aa:N
            a (A_A_A) {N
                aA;N
            }N
N
            a (a0_a) {N
                a (     A_A(a) != (A0) *aN
                    || ! aA(a0_a_a_a((A0 *) a,N
                                                (A0 *) a->a,N
                                                A),N
                                     Aa(a), Aa(a)))N
                {N
                    aA;N
                }N
            }N
            a {N
                a (! aA((A0) *a,N
                                  Aa(a), Aa(a)))N
                {N
                    aA;N
                }N
            }N
            a a_a;N
            a;N
N
        /* Aa a (A) a a a A a a a a a aN
         * */N
N
        a A:   /* \A a [:^a:] a. a /a */N
            a_a = 0;N
            /* A */N
N
        a A:    /* \a a [:a:] a. a /a */N
            _A_A_A_A_A;N
            a (A_A_A || a >= a)N
                aA;N
N
            /* Aa aA_a() a a a Aa0.  (Aa aN
             * A0_A_A a a a a-A-0 a, a aN
             * a'a a a) */N
            a (A0_A_A(a) || ! a0_a) {N
                a (! (a_a ^ aA(aA_a(A(a), (A0) a)))) {N
                    aA;N
                }N
N
                a++;N
                a;N
            }N
N
            a (! A0_A_A_A_A(a, a->a)) {N
                /* Aa a Aa-0 a a, a a */N
                _A_A_A_A_A_A0_A(a,N
                                                       a->a);N
                a a0_a_a_a0;N
            }N
N
            /* Aa a a A-0 a a a a 0 a a a aN
             * A-0 */N
            a (! (a_a ^ aA(aA_a(A(a),N
                                            A_A_A0_A_A(a,N
                                            *(a + 0))))))N
            {N
                aA;N
            }N
N
            a a_a;N
N
        a A:   /* \A a [:^a:] a. a /a */N
            a_a = 0;N
            /* A */N
N
        a A:    /* \a a [:a:] a. a /a */N
            a (a0_a) {N
                a a0_a;N
            }N
            a a;N
N
        a A:   /* \A a [:^a:] a. a /a */N
N
            a (A_A_A || a >= a) {N
                aA;N
            }N
N
            /* Aa A-0 a a */N
            a (! A0_A_A(a)) {N
                a a_a;N
            }N
N
            a_a = 0;N
            a a_a;N
N
        a A:    /* \a a [:a:] a. a /a */N
N
          a:N
            /* Aa a a a A, A, a A a a aN
             * A-0, a a a A a a A-0 a a aN
             * a a a a a */N
N
            a (A_A_A || a >= a) {N
                aA;N
            }N
N
          a_a:N
N
            a (! (a_a ^ aA(_a_aA_A(a,N
                                                                A(a)))))N
            {N
                aA;N
            }N
N
            /* Aa a a a a a a0, a a a a a0-a,N
             * a a a a a a a a */N
            a++;N
            a;N
N
        a A:   /* \A a [:^a:] a. a /a */N
            a_a = 0;N
            /* A */N
N
        a A:    /* \a a [:a:] a. a /a */N
          a0_a:N
            a (A_A_A || a >= a) {N
                aA;N
            }N
N
            /* Aa _a_aA() a a a Aa0.  (Aa aN
             * A0_A_A a a a a-A-0 a, a aN
             * a'a a a) */N
            a (A0_A_A(a) || ! a0_a) {N
                a (! (a_a ^ aA(_a_aA(a,N
                                                           A(a)))))N
                {N
                    aA;N
                }N
                a++;N
            }N
            a a (A0_A_A_A_A(a, a->a)) {N
                a (! (a_aN
                       ^ aA(_a_aA(A_A_A0_A_A(a,N
                                                               *(a + 0)),N
                                             A(a)))))N
                {N
                    aA;N
                }N
                a += 0;N
            }N
            a {  /* Aa a Aa-0 a a */N
              a0_a_a_a0:N
                a = (_a_a_a) A(a);N
                a (a) {N
                    a:N
                        a (! (a_aN
                           ^ aA(_a_a_a(N
                                      A_Aa_a[a],N
                                      a0_a_a_a((A0 *) a,N
                                                        (A0 *) a->a,N
                                                        A)))))N
                        {N
                            aA;N
                        }N
                        a;N
                    a _A_A_A:N
                        a (! (a_aN
                                    ^ aA(a_A_a(a))))N
                        {N
                            aA;N
                        }N
                        a;N
                    a _A_A_A:N
                        a (! (a_aN
                                        ^ aA(a_A_a(a))))N
                        {N
                            aA;N
                        }N
                        a;N
                    a _A_A_A:N
                        a (! (a_aN
                                        ^ aA(a_A_a(a))))N
                        {N
                            aA;N
                        }N
                        a;N
                    a _A_A_A:N
                        a (! (a_aN
                                        ^ aA(a_A_a(a))))N
                        {N
                            aA;N
                        }N
                        a;N
                    a _A_A_A:    /* Aa a'a a a Aa0 */N
                    a _A_A_A:N
                        a (! a_a) {N
                            aA;N
                        }N
                        a;N
                }N
                a += A0_A_A(a, a->a);N
            }N
            a;N
N
	a A: /* Aa \A: a Aa a.  Aa a a aN
		       a Aa a Aa Aa */N
	    a (A_A_A || a >= a)N
		aA;N
	    a  (! a0_a) {N
N
		/* Aa a A A  a '.', a a a a aN
		 * a a0 */N
		a++;	    /* Aa a . a A */N
		a (a == '\a' /* Aa a a a A, a a a a A,N
				       a a A */N
		    && a <  aN
		    && A(a) == '\a')N
                {N
                    a++;N
                }N
	    }N
	    a {N
N
                /* Aa a a a a a a a */N
                A_a a_a = aA_A_A0((A0*) a,N
                                                       (A0*) a->a);N
N
                /* Aa a a a a a a a a a aN
                 * a a a a a a a a a a aN
                 * a a.  (Aa a a a a a aN
                 * a-a-a) */N
                a += A0A(a);N
                a (a < a) {N
                    A_a a_a = aA_A_A0((A0*) a,N
                                                         (A0*) a->a);N
                    a (aA(a_a, a_a,N
                              (A0*) a->a, (A0*) a,N
                              a0_a))N
                    {N
                        a;N
                    }N
N
                    a_a = a_a;N
                    a += A0A(a);N
                }N
N
N
	    }N
	    a;N
            N
	a A:  /*  /\a{a}/a  */N
	{   /* Aa a a a.  Aa a a a A a aN
	       a a a a a a a a aN
	       a a a a a a a a aN
	       a.  */N
	    /* a'a a a a a a, a a A++N
	       a */N
	    a a *a;N
	    a a;N
	    a_a_a a;N
	    a A0 *a_a;N
	    A a0_a_a;N
N
            _A_A_A_A_A;N
	    a = aA_a;N
	    a_a = A_a_a;N
	    a = A;N
	    a0_a_a = A_A;N
	    a a_a;N
N
	a A:  /*  /\a{a}/a  */N
	    a = aA_a0;N
	    a_a = A_a_a0;N
	    a = A;N
	    a0_a_a = A_A0_A_A;N
	    a a_a;N
N
	a A:  /*  /\a{a}/a  */N
	    a = aA_a0;N
	    a_a = A_a_a0;N
	    a = A;N
	    a0_a_a = 0;N
	    a a_a;N
N
	a A:  /*  /\a{a}/a  */N
	    a = aA;N
	    a_a = A_a;N
	    a = A;N
	    a0_a_a = 0;N
	    a a_a;N
N
	a A:  /*  /\a{a}/   */N
	    a = A;N
	    a = A;N
	    a_a = A;N
	    a0_a_a = 0;N
	  a_a:N
N
	    /* Aa a a a a, a a a aN
	     * a */N
	    a = a_a_a_a_a(a,a);N
N
            a ( ! a ) {N
                aA;N
	    }N
	    a a_a_a_a;N
N
	a A:  /*  /\0/a  */N
            _A_A_A_A_A;N
	    a = aA_a;N
	    a_a = A_a_a;N
	    a0_a_a = A_A;N
	    a a_a;N
N
	a A:  /*  /\0/a  */N
	    a = aA_a0;N
	    a_a = A_a_a0;N
	    a0_a_a = A_A0_A_A;N
	    a a_a;N
N
	a A:  /*  /\0/a  */N
	    a = aA_a0;N
	    a_a = A_a_a0;N
	    a0_a_a = 0;N
	    a a_a;N
N
	a A:  /*  /\0/a  */N
	    a = aA;N
	    a_a = A_a;N
	    a0_a_a = 0;N
	    a a_a;N
N
        a A:  /*  /\0/    */N
	    a = A;N
	    a_a = A;N
	    a0_a_a = 0;N
N
	  a_a:N
	    a = A(a);N
	    a = A(a);  /* a a a */N
N
	  a_a_a_a:N
	    a = a->a[a].a;N
	    a = a->a[a].a;N
	    a->a_a = a->a_a; /* Aa a */N
	    a (a->a < a || a == -0 || a == -0)N
		aA;			/* Aa a a a a Aa. */N
	    a (a == a)N
		a;N
N
	    a = a->a + a;N
	    a (a != A	/* A a a a a */N
		&& (a0_a || a == A || a == A))N
	    {N
		a * a = a;N
N
		/* Aa a a a a a a aN
		    * a a, a a a a a a a, aN
                    * a a a a a a a a, aN
                    * a a <a> a a, a a a aN
                    * a a a a */N
		a (! aA_a0_a(a, A, a - a, a0_a,N
				    a, &a, 0, a0_a, a0_a_a))N
		{N
		    aA;N
		}N
		a = a;N
		a;N
	    }N
N
	    /* Aa a0:  Aa a a a, a a. */N
	    a ( ! A_A_AN
                && a < aN
                && A(a) != aN
                && (   a == AN
                    || A(a) != a_a[a]))N
            {N
		aA;N
            }N
	    a = a - a;N
	    a (a + a > a)N
		aA;N
	    a (a > 0 && (a == AN
			   ? aA(a, a, a)N
			   : ! a(a, a, a)))N
		aA;N
	    a += a;N
	    a;N
	}N
N
	a A: /* a a; a.a. a 'a' aN
                       * a '*' a a{(a+|a)*}' */N
	    a;N
	a A: /* a a a (A|A|A) */N
	    a;N
N
#a  AN
#a A a->a.aN
#a A_A a_a->a.aN
N
	{N
	    A *a;N
	    A *a_a;N
            a *a;N
            a_a *a;N
            a *a;N
            A0 a;N
N
	a A: /*    /(...(?0))/   /(...(?&a))/   */N
            a= (A0)A(a);N
            a (a_a && a_a->a == a) {N
                a ( ++a_a > a_a_a )N
                    Aa_a(aA_ N
                        "Aa a a a a a"N
                        " a a a a");N
            } a {N
                a_a = 0;N
            }N
	    a_a = a_a;N
            a = a;N
            a = a;N
            a = a + A0A(a);N
            A_A_A_A( a, a );N
            /* Aa a aN
             *N
             * A a a /(?A)a/ a /(?<a>(?&a)a)(?<a>(?&a)a)/N
             * a "a"=~/(.(?0))((?<=(?=(?0)).))/ a a a.N
             * Aa a a a a a a a a a a a aN
             * a a a a a a a a a a a a aN
             * a a a a a a a.N
             */N
            a ( a->a_a[a] == a ) {N
                /* A: a a a a a a a a a aN
                 * a a a a. */N
                Aa_a(aA_ "Aa a a a");N
            } a {N
                A.a_a_a= a->a_a[a];N
                a->a_a[a]= a;N
N
                A_a({N
                    A_A_A_A_A;N
                    A_A_a({N
                        Aa_a_a_a( aA_N
                            "a A, a_a_a=%a a_a[%a]=%a\a",N
                            a, A.a_a_a, a, a->a_a[a]N
                        );N
                    });N
                });N
            }N
N
            /* Aa a a a a a a. */N
            A.a = a(a, 0, a);N
            A_A(A.a);N
N
            /* a a a a a a a a a A */N
            a a_a_a;N
            /* A */N
N
        a A:  /*   /(?{...})A/   /(??{A})A/  a  /(?(?{...})A|A)A/   */N
            a (a_a && a_a->a==a) {N
		a ( ++a_a > a_a_a )N
                    Aa_a(aA_ "A a a a a a a a");N
            } a {N
                a_a = 0;N
            }    N
	    {N
		/* a a a a a {...} */N
N
		aA;N
		A a;N
		A * a a = A_a;N
		A * a a = A_a;N
		A *a;N
		A *a;N
N
		/* a *a* a a */N
                a(a, 0, a);N
                A_A(A.a);N
N
		a (!a_a)N
		    a_a = a_a(A);N
N
		a = A(a);N
N
		a (a->a->a[a] == 'a') { /* a a a a a */N
                    a = (AaA(N
                                    (A*)(a->a->a[a])N
                            ))->a_a;N
		    a = (A*)a->a->a[a+0];N
		}N
		a a (a->a->a[a] == 'a') { /* a a */N
		    a = a_a;N
		    a = (A*)a->a->a[a];N
		    a(AaA(a));N
		}N
		a {N
		    /* a a a A */N
		    a(a->a->a[a] == 'A');N
		    a = a->a_a;N
		    a = (A*)a->a->a[a];N
		}N
N
                /* Aa a a A a a a a a a.N
                 *N
                 * Aa a aN
                 *   /...(?{ a $a)}...(?{ a $a)}...(?{ a $a)}.../N
                 * a a a'a a a a a (a aN
                 * a() a a), a a a a a aN
                 * a a a a a Aa_A a a aN
                 * a a a $a, $a, $a. Aa a a a a aN
                 * a a a a a a Aa (a.a. aN
                 * a a//a), a a a a a a aN
                 * a a, A_a a a a aN
                 * a a a a a. Aa a a aN
                 * a Aa_A'a a a a aN
                 * a a a a a a.N
                 * Aa a a a a a a a, a aN
                 * a a Aa_A a, a a a a a aN
                 * a a a. Aa a a a a a a a aN
                 * a a a a a a a aN
                 * a a a->a_a, a a a aN
                 * a'a a a a a a a a a a aN
                 * a a.N
                 * Aa a a a a'a a a a a aN
                 * a a a A a a a a a.N
                 * Aa a, a a a a a a a aN
                 * a a, a, a a a a a a a a aN
                 * a. Aa a a a a a a, aN
                 * a a A a a a'a a. Aa a aN
                 * a a a a a'a a a a aN
                 * a, a a A a a a a a aN
                 * a - a a a a a-a a.N
                 * Aa a A a a a a, a a aN
                 * a->a_a a a a a a'a a a aN
                 * a a a a A_a a a a a aN
                 * a a a a a. Aa a a aN
                 * a, a a a a a a aN
                 * *a* Aa a a a a a a aN
                 * a a a, a a a.a., a aN
                 * a (a a a a A_a) aN
                 * a a a a a a a a aN
                 * A_a.N
                 */N
N
                /* Aa a a a a A, a a A. AaN
                 * a a, a a'a a a a A, aN
                 * a A_a a a a a a aN
                 * a Aa, a a a a.N
                 */N
		a (a != a_a_a || A_a != a_a)N
		{N
                    A0 a = (Aa_A_A |N
                                ((a == a_a) ? Aa_A_A_A : 0));N
                    A();N
		    a (a_a_a) {N
			A_A_A(a, a);N
		    }N
		    a {N
			A_A_A(a, a);N
		    }N
                    /* a a a */N
                    A_A()->a_a = a_a_a;N
N
		    a_a_a = a;N
		}N
		a {N
                    /* a a a a a a aN
                     * a */N
		    a_a = A;N
		}N
		a_a = A_a;N
N
		/* a a a a a a aN
		 * a a a a a a (a a a aN
		 * a a a a a a), a a aN
		 * a a a a a a a a a a;N
		 * a a a A_a a a a */N
		{N
		    A *a = aAa(a)->a_a;N
		    a(a->a_a == A_A);N
		    a (a->a_a == A_A) {N
			a = aAa->a_a;N
		    }N
		    a {N
			a(a->a_a == A_A);N
			a = aAa->a_a;N
			a(a->a_a == A_A);N
			a = AaA(a);N
		    }N
N
		    a (a->a_a != A_A) {N
			a(    a->a_a == A_AN
				|| a->a_a == A_AN
				|| (a->a_a == A_AN
				    &&  (  a->a_a == A_AN
					|| a->a_a == A_AN
					)N
				    )N
			);N
			A_a = (A*)a;N
		    }N
		}N
		a = a->a_a;N
N
                A_A_a( Aa_a_a( aA_N
		    "  a A A_a=0a%" Aa "\a", A0A(a)) );N
N
		a->a[0].a = a - a->a;N
                a (a->a_a_a->a_a)N
                    AaA_a(a->a_a_a->a_a,N
                                  a->a, a->a,N
                                  a - a->a);N
N
                a (a_a_a) {N
                    A *a_a = a_a("A", 0);N
                    a_a(a_a, a_a_a);N
                }N
N
		/* a a'a a A a a a a a a aN
		 * a a a a a a a, a a aN
		 * a a a a a. Aa, a a'a a a aN
                 * a a a */N
		a = (A)(A-A_a_a);N
		A_a = a;N
		A(aA);			/* Aa a. */N
		A;N
		a ((A)(A-A_a_a) == a)N
		    a = &A_a_a;   /* a a a (?{}) a. */N
		a {N
		    a = Aa;N
		    A;N
		}N
N
		/* a a a, a a aN
		 * a, a a 'a' a a'a a a aN
		 * A_a a a. Aa a a a a a aN
		 * (a.a. $0) *a* a a a */N
N
		A_a = A;N
N
                a_a = A;N
		a (a == 0) {       /*   (?{})/   */N
                    A *a = a_a(A_a);N
                    a_a(a, a); /* $^A */N
                    AaA(a);N
                }N
		a a (a == 0) { /*   /(?(?{...})A|A)/    */N
		    a = aA(AaA_A(a));N
		    a = 0;N
		}N
		a {                   /*  /(??{})  */N
		    /*  a a a, a a a a aN
		     *  a; a a a, a a  */N
		    a (AaA(a))N
			a = a_a(a);N
		    a (!AaA(a)) {N
			A *a = a;N
			a (AaA(a))N
			    a = AaA(a);N
			a (AaA(a) == Aa_A)N
			    a_a = (A*) a;N
			a a (AaA(a)) {N
			    A *a = a_a(a, A_A_a);N
			    a (a)N
				a_a = (A *) a->a_a;N
			}N
N
			/* a a a a a */N
			a (!a_a && !AaA(a) && !AaA(a)) {N
			    a = a_a(a);N
			    (a) AaA_a_a(a);N
			}N
		    }N
N
		}N
N
		/* *** Aa a a a a a a'a aN
		 * A_a, (a a a AaA) a a a a aN
		 * a a a a. Aa a a a a a aN
		 * a a a a a a a ! */N
		A_a = a;N
		A_a = a;N
                a_a(a, A.a, &a);N
                A_a_a = A_a;N
                A_a = A_a_a;N
N
		a (a != 0) {N
                    A_A_A(A_A, a, a, a,N
                                    a_a_a);N
		    /* A */N
                }N
	    }N
N
		/* a /(??{})/  a a a */N
		a = 0;N
		{N
		    /* a A a a a a; a aN
		     * a */N
N
		    a (a_a) {N
			a_a = a_a_a(A, a_a);N
		    }N
		    a {N
			A0 a_a = 0;N
N
			a (AaA0(a) && A_A) {N
			    /* Aa a 'a': a a a a a aN
			     * a, a a a a a */N
			    A a;N
			    a a *a a = AaA(a, a);N
			    a = aAa_a(a, a, Aa_A);N
			}N
			a (a->a & Aa_A_A_A)N
			    a_a |= Aa_A_A_A;N
N
			/* a a a a, a a a a a aN
			 * a a a a a a */N
			a(a->a && a->a->a_a);N
                        a(!(a->a & ~Aa_Aa_A));N
			a_a = a->a->a_a(aA_ &a, 0, A,N
				    a->a, A, A,N
                                    /* a /a a a a a */N
                                    A0A(a),N
                                    a_a);N
N
			a (!(AaA(a)N
			      & (Aa_A | Aa_A | Aa_A))N
			 && (!AaA(a) || AaA(a))) {N
			    /* Aa a'a a a a a. Aa, a'aN
			       a a a a a a, Aa aN
			       a.  */N
			    a_a(a, A_A(a_a), A_A_a, 0, 0);N
			}N
		    }N
		    A(a_a);N
		    a = AaA(a_a);N
		}N
                Aa_A_A_a(a);N
                a->a = a->a;N
                a->a = a->a;N
                a->a = a->a;N
                a->a = a->a;N
                a->a = 0;N
                a->a = 0;N
		a = Aa_A(a);N
                A_A_a(N
                    a_a_a(a_a, a0_a, a,N
                                    a->a, "A/A: Aa a");N
		);		N
		a = a->a + 0;N
                A_A_A_A(a); /* A.a_a = 0;N
                                             * a_a a a A */N
                A.a_a_a= A; /* a a a A */N
                /* Aa a a a a a a. */N
                A.a = a(a, 0, a);N
                A_A(A.a);N
                /* a a a a 0, a a a a a "a" a */N
                a = 0;N
                /* a a a a a (??{...}) */N
N
              a_a_a: /* Aa a a A a a aN
                            * Aa a a a a a a a a aN
                            * a a a */N
N
                /* a a A-A a. Aa'a a a aN
                 * a a a A a (a a aN
                 * a) a a a a, a a a a aN
                 * a a a. Aa a a a aN
                 * a a a a a a a a a.N
		 * A Aa a a a a a. Aa a aN
                 * a a a a a a a a a aN
                 * a a */N
		a->a_a = 0;N
N
                /* a a a a a a a a_a0_a a a a */N
                a_a0_a = a->a_a0_a = aA(A_A0(a_a));N
N
		A.a_a = a_a;N
		A.a_a = a_a;N
		a_a = a_a;N
		A_a_a(a_a);N
		a = a;N
		a = a;N
		a_a = A;N
		A.A = a;N
		A.a_a = a_a;N
		a_a = a;N
		/* a a a a a a a A */N
		A_A_A_A(A_a_A, a, a,N
                                    a, a_a_a);N
		A_A; /* A */N
	}N
N
	a A_a_A: /* a a a a (??{A})A */N
            /* a: a a a a; a a a A, a A */N
            A_A_a({N
                Aa_a_a_a( aA_  "A_A a_a=%a a_a=%a\a",N
                    a, a_a, A.a_a);N
            });N
N
#a A_A_A(A,A)\N
            a ( a_a && A_A.a_a ) {\N
                A_A_a({ \N
                    Aa_a_a_a( aA_  A " A%a a=%a a_a=%a\a",\N
                        a,    \N
                        A_A.a_a - 0,\N
                        a_a, \N
                        A);     \N
                });               \N
                a->a_a[A_A.a_a - 0] = A;\N
            }N
N
            A_A_A("A_A[a]", A_A.a_a_a);N
N
	    a_a = A.a_a;N
            a_a0_a = a->a_a0_a = aA(A_A0(a_a));N
	    A_a_a(a_a);N
	    a = AaA(a_a);N
	    a = Aa_A(a);N
            {N
                /* a $^A a A'a. Aa Aa 0. */N
                A *a_a= AaA(A_a);N
                A *a;N
                AaA_a(a_a);N
                a(A.a); /* A a a */N
                /* a'a a a a a */N
                a = AaA(A_a);N
                a_a(a, a_a);N
                AaA(a);N
                AaA_a(a_a);N
            }N
	    a_a = A.a_a;N
	    a_a = A.a_a;N
N
	    /* Aa a. Aa "a" a a. */N
	    a->a_a = 0;N
            a ( a_a )N
	        a_a--;N
N
            A_A_A("A_A[a]", a_a->a);N
	    aA;N
N
N
	a A_A_a: /* a A a (?{...})A */N
	    A_A(A.a);N
            aA;N
N
	a A_a_A_a: /* a a A a A a (??{A})A */N
	    /* a: a a a a; a a a A, a A */N
            A_A_a({N
                Aa_a_a_a( aA_  "A_A_a a_a=%a a_a=%a\a",N
                    a, a_a, A.a_a);N
            });N
N
            A_A_A("A_A_a[a]", A_A.a_a_a);N
N
	    a_a = A.a_a;N
            a_a0_a = a->a_a0_a = aA(A_A0(a_a));N
	    A_a_a(a_a);N
	    a = AaA(a_a);N
	    a = Aa_A(a); N
N
	    A_A(A.a);N
            a(a, &a);N
	    a_a = A.a_a;N
	    a_a = A.a_a;N
N
	    /* Aa a. Aa "a" a a. */N
	    a->a_a = 0;N
	    a ( a_a )N
	        a_a--;N
N
            A_A_A("A_A_a[a]", a_a->a);N
            aA_A;N
#a AN
N
	a A: /*  (  */N
	    a = A(a);  /* a a a */N
	    a->a[a].a_a = a - a->a;N
	    a (a > a)N
		a = a;N
            A_A_a(Aa_a_a_a( aA_N
		"A: a=0a%" Aa " a=0a%" Aa ": \\%" Aa ": a %" Aa " a; a=%" Aa "\a",N
                a,N
		A0A(a),N
		A0A(a->a),N
		(A)a,N
		(A)a->a[a].a_a,N
		(A)aN
	    ));N
            a = a;N
	    a;N
N
        a A: /*  (*A_A:  */N
            a_a_a = (A0 *) a;N
            a;N
N
N
	a A:  /*  )  */N
	    a = A(a);  /* a a a */N
	    A_A(a, a->a[a].a_a,N
                             a - a->a);N
            a ( A_A_A_A( a_a, a ) )N
	        a a_a;N
N
	    a;N
N
        a A:  /*  (*A_A: ... )   */N
N
            a (! aA_A(a_a_a, (A0 *) a, a0_a))N
            {N
                aA;N
            }N
N
            a;N
N
N
        a A:  /*  (*A)  */N
            a (a->a)N
                a_a_a = A_A(a->a->a[ A( a ) ]);N
            a (A0A(a)){N
                a *a;N
                a (a=a;N
                     a && A(a)!=A; N
                     a=a(a)) N
                {N
                    a ( A(a)==A ){N
                        a = A(a);N
                        a ( a <= a ) {N
			    A_A(a, a->a[a].a_a,N
                                             a - a->a);N
                            a ( a == A(a) || A_A_A_A(a_a, a) )N
                                a;N
                        }N
                    }N
                }N
            }N
	    a a_a;N
	    /* A */N
N
	a A:  /*  (?(0))  */N
	    a = A(a);  /* a a a */N
	    a = aA(a->a >= a && a->a[a].a != -0);N
	    a;N
N
	a A:  /*  (?(<a>))  */N
	    /* a_a_a_a_a a 0 a a a */N
	    a = aA(0 < a_a_a_a_a(a,a));N
	    a;N
N
        a A:   /*  (?(A))  */N
            a = A(a);N
            /* a a a a a a A_A_A a, a a aN
             * a A a a a a a a a a.a_a */N
            a = a_a && (a == 0 || A_A.a_a == a);N
            a;N
N
        a A:  /*  (?(A))  */N
            a = 0;N
            a;N
N
	a A:   /*  (?(a)A|A)  */N
	    a->a_a = a->a_a; /* Aa a */N
	    a (a)N
		a = A(A(a));N
	    a {N
		a = a + A(a);N
		a (A(a) == A) /* Aa a. */N
		    a = A(A(a));N
	    }N
	    a;N
N
	a A:  /* a a A a A */N
	    a = a->a;N
	    a;N
N
/*******************************************************************N
N
Aa A/A a a a a a a a a a a /A*A/N
a, a A a A a a. (Aa a A, A aN
A/A/A/A a a a.)N
N
A*A a a a <A><A><A><A>N
N
Aa a a a a, A a a. Aa a a AN
a, a a a a a, a a -0. Aa a aN
a_a a a a a a, a a a a a a aN
a a.N
N
A a a a a a A a, a a a A,N
a a a a a a a a (a.a. a'a a a {} aN
a a a a {} a a).N
N
Aa a a A a a a a a A. Aa a a aN
A a a a, a A a a a, a aN
a a A a A a a a a a a a.N
N
Aa a, a a a a a a0a0a0a (a a aA aN
a a a /A/), a a a a a a: (aN
a a a a a a a a a a a a):N
N
    <A a=-0>N
    <A a=0><A>N
    <A a=0><A> a0 <A>N
    <A a=0><A> a0 <A> a0 <A>N
    <A a=0><A> a0 <A> a0 <A> a0 <A>N
    <A a=0><A> a0 <A> a0 <A> a0 <A> aN
N
(Aa a a a a A, a a a a aN
a a:N
N
    <A a=0> a0N
    a0 <A a=0> a0N
    a0 a0 <A a=0> a0N
    a0 a0 a0 <A a=0> aN
)N
N
Aa A a a a a a a a a a a aN
a A a A, a a a a a a a a a aN
a.  Aa A a, a a a a_a, a aN
a a, a a a a, a a a a A a A a.N
N
Aa a a a a a A/A'a. Aa a_aN
a a a a a *a* A a, a a a:N
N
Aa a A, a a a a_a a a A a a,N
a a a_a a a a a a.N
N
Aa a a A a a a a a a a,N
a a a a_a.N
N
Aa A a a a a A, a a a a_a, a a aN
a a a a a a a A a.N
N
Aa a a A a a a a a a A a,N
a a a a_a.N
N
Aa'a a a a a a (A* A)*AN
A a A a a a a a, A a A a a A a A:N
N
a_N
a a aN
------ ---------------N
A   N
A     <A a=A> <A>N
A     <A a=A> <A> <A a=A> <A> a N
A     <A a=A> <A> <A a=A> <A> a <A a=A> a N
A   <A a=A> <A> <A a=A> <A> a <A a=A> a <A a=A> aN
N
Aa a a a a a, a a a a a a a aN
a a, a a a a:N
N
A     <A a=A> <A> <A a=A> <A> a <A a=A> a N
A     <A a=A> <A> <A a=A> <A> a N
A     <A a=A> <A>N
A   N
N
*******************************************************************/N
N
#a A a->a.aN
N
	a A:    /* a a /A*A/  (a a A) */N
	{N
	    /* Aa a a a/a a a a a */N
	    A0 a = a->a;N
	    N
	    a(a); /* a Aa a */N
	    a (A(A(a)) == A) /* A */N
		a += A(a);N
N
	    /* A Aa a a a a a a a aN
	       a > a ... */N
	    a (a > (A0)a->a)N
		a = a->a; /* Aa... */N
N
	    A.a_a= a_a;N
	    a_a = a;N
	    A.a = A_a_a;N
N
	    /* a a a a a a a a a.N
	     * a a a a a Aa */N
	    A.a = a;N
	    A.a = a;N
	    A.A = a;N
	    A.a = a;N
	    a = 0;N
	    A.a = -0;	/* a a a a a A */N
	    A.a = A;  /* a a a a a A */N
N
	    A_A_A_A(A_a, A(a), a, a,N
                                a_a_a);N
	    A_A; /* A */N
	}N
N
	a A_a: /* a a a a a A*A */N
	    a_a = A.a_a;N
	    aA;N
	    A_A; /* A */N
N
	a A_a_a: /* a a a a a a A*A */N
	    a(A.a);N
	    a_a = A.a_a;N
	    aA;N
	    A_A; /* A */N
N
N
#a AN
#a A a->a.aN
N
	a A:     /* a a a A a /A*A/  (a a A) */N
	{N
	    /* a a a a a A/A */N
	    A0 a;N
	    a a, a;N
	    a *A;N
N
	    a(a_a); /* a Aa a */N
N
	    a = A0(a_a->a.a.a);N
	    a = A0(a_a->a.a.a);N
	    A = A(a_a->a.a.a) + A_A_0A;N
	    a = ++a_a->a.a.a; /* a a A'a a */N
	    A.a_a = a_a->a.a.a;N
	    A.a_a = 0;N
	    A.a_a = 0;N
	    N
N
            A_A_a( Aa_a_a_a( aA_  "A: a %a a a %a..%a\a",N
                  a, (a)a, a, a)N
	    );N
N
	    /* Aa a a a a a a A'a. */N
N
	    a (a < a) {N
                A.a = a(a, a_a->a.a.a, a);N
		a_a->a.a.a = a;N
		A_A(A.a);N
N
		A_A_A(A_A_a, A, a, a,N
                                a_a_a);N
		A_A; /* A */N
	    }N
N
	    /* Aa a A a "", a A a. */N
N
	    a (a == a_a->a.a.a) {N
                A_A_a( Aa_a_a_a( aA_  "A: a a a, a a...\a",N
                   a)N
		);N
		a a_a_A_a;N
	    }N
N
	    /* a-a a a.N
             *N
             * Aa a a a a a a a a A/A -N
             * a a a a a a a (aN
             * a a a a a a \0 a a aN
             * a-a a a), a a a a aN
             * /....A*.../ a a a a a a A, a aN
             * a a a a a a A a a a aN
             * a 0 (a) a a a a a a. Aa, aN
             * a a a a a a a A, a a aN
             * a 0 a, a a a a a a aN
             * a a a a a a a.N
             *N
             * Aa a a a a a a a aN
             * 'a-a', a a (a+)*(a+)*(a+)*, a a a aN
             * a a a a a a.N
             *N
             * Aa a a a a a a a, a a a aN
             * a a a a A a (a a 0) - a aN
             * a 0.0 a 0a a a a.N
             *N
             * Aa a a a a a a a, a a aN
             * a a; a a a a  a a AN
             * a (a-a a #Aa) a a a a aN
             * a.N
             *N
             * Aa a 0 a a a->a a a a a aN
             * a A/A a a a a, a aN
             * a 0-a a a a a a a aN
             * A.N
             */N
N
	    a (a->a) {N
N
		a (!a->a_a) {N
		    /* a a a: Aa a a aN
		     * a a a a a *a* a a. */N
		    a->a_aN
                        =    (a->a - a->a + 0)N
                           * (a->a>>0);N
		    /* a a a a a a a A'a */N
		    a (a->a_a < 0)N
			a->a_a = A0_A;N
		    a->a_a = a->a_a;N
		}N
N
		a (a->a_a-- == 0) {N
		    /* a a */N
		    a Aa_a a = (a->a_a + 0)/0;N
                    a_a_a *a a = a->a_a;N
		    a (a->a) {N
			a ((Aa_a)a->a_a < a) {N
			    Aa(a->a, a, a);N
			    a->a_a = a;N
			}N
			Aa(a->a, a, a);N
		    }N
		    a {N
			a->a_a = a;N
			Aa(a->a, a, a);N
		    }N
                    A_A_a( Aa_a_a( aA_N
      "%aA: Aa a a-a a, a a a%a...\a",N
			      A_a[0], A_a[0])N
		    );N
		}N
N
		a (a->a_a < 0) {N
		    /* a a a a a a a? */N
		    Aa_a a, a;N
N
                    a->a_a = -0; /* a a a */N
		    a  = (a->a & 0a) - 0N
                                +   (a - a->a)N
                                  * (a->a>>0);N
		    a    = 0 << (a % 0);N
		    a /= 0;N
		    a (a->a_a->a[a] & a) {N
                        A_A_a( Aa_a_a_a( aA_  "A: (a) a a a a a...\a",N
                            a)N
			);N
                        a_a->a.a.a--;N
			aA; /* a a a */N
		    }N
		    A.a_a = a;N
		    A.a_a   = a;N
		}N
	    }N
N
	    /* Aa A a A a a a. */N
N
	    a (a_a->a.a.a) {N
		A.a_a = a_a;N
		a_a = a_a->a.a.a_a;N
		A_A_A_A(A_A_a, A.a_a->a.a.A,N
                                    a, a, a_a_a);N
		A_A; /* A */N
	    }N
N
	    /* Aa A a A a a a. */N
N
	    a (a < a) { /* Aa a a? */N
                A.a = a(a, a_a->a.a.a,N
                            a);N
		a_a->a.a.a = a;N
		A_A(A.a);N
		A_A_A(A_A_a, A, a, a,N
                                a_a_a);N
		A_A; /* A */N
	    }N
	    a a_a_A_a;N
	}N
	A_A; /* A */N
N
	a A_A_a: /* a a A a a a a */N
	a A_A_a: /* a a A a a a a */N
	    a_a = A.a_a;N
	    aA;N
	    A_A; /* A */N
N
	a A_A_a_a: /* a a a a A a a a a */N
	    a_a = A.a_a;N
	    a_a->a.a.a = A.a_a;N
	    a_a->a.a.a--;N
	    AaA;N
	    A_A; /* A */N
N
	a A_A_a_a: /* a a a a A a a a a */N
	    /* A */N
	a A_A_a_a: /* a a a a a a A */N
	    A_A(A.a);N
            a(a, &a);N
	    a_a->a.a.a = A.a_a;N
	    a_a->a.a.a--;N
	    AaA;N
	    A_A; /* A */N
N
	a A_A_a_a: /* a a a a A a a a a */N
	    A_A(A.a);N
            a(a, &a); /* Aa a a $<a>a? */N
            A_A_a(Aa_a_a_a( aA_  "A: a, a a...\a",N
                a)N
	    );N
	  a_a_A_a:N
	    a (a_a->a.a.a >= A_AN
		&& aA(A_A)N
		&& !a->a)N
	    {N
                a->a	= A;N
		Aa_a(aA_ aA(A_A),N
		     "Aa a a a a (%a) "N
		     "a",N
		     A_A - 0);N
	    }N
N
	    /* a a A */N
	    A.a_a = a_a;N
	    a_a = a_a->a.a.a_a;N
	    A_A_A_A(A_A_a, A.a_a->a.a.A,N
                                a, a, a_a_a);N
	    A_A; /* A */N
N
	a A_A_a_a: /* a a a a A a a a a */N
	    a_a = A.a_a;N
N
	    a (a_a->a.a.a >= /*a*/A0(a_a->a.a.a)) {N
		/* Aa a a */N
		a (a_a->a.a.a >= A_AN
		    && aA(A_A)N
                    && !a->a)N
		{N
                    a->a	= A;N
		    Aa_a(aA_ aA(A_A),N
			"Aa a a a "N
			"a (%a) a",N
			A_A - 0);N
		}N
		a_a->a.a.a--;N
		AaA;N
	    }N
N
            A_A_a(Aa_a_a_a( aA_  "A: A a a: a a...\a", a)N
	    );N
	    /* Aa a a A a a a a a. */N
	    a_a->a.a.a = a;N
            A.a = a(a, a_a->a.a.a,N
                            a);N
	    A_A(A.a);N
	    A_A_A(A_A_a,N
		/*A*/ A(A.a_a->a.a.a) + A_A_0A,N
                a, a, a_a_a);N
	    A_A; /* A */N
N
#a  AN
#a A a->a.aN
N
	a A:	    /*  /(...|A|...)/ a a a a */N
	    a = a + A(a);N
	    a (a == a)N
		a = A;N
	    a = A(a);N
	    /* A */N
N
	a A:	    /*  /(...|A|...)/ */N
	    a = A(a); /* a a a a a a */N
	    A.a = a->a;N
	    A.a = a->a;N
	    A.a_a = a;N
	    A_A(A.a);N
N
	    /* Aa a a a a */N
	    a (a_a) {N
	        A_A_A_A(A_a, a, a, a,N
                                    a_a_a);N
	    } a {N
	        A_A_A(A_a, a, a, a,N
                                a_a_a);N
	    }N
	    A_A; /* A */N
N
        a A:  /*  /(*A)/  */N
            a_a_a = a->a.a.a_a = a->aN
                ? A_A(a->a->a[ A( a ) ])N
                : A;N
            A_A_A(A_a, a, a, a,N
                            a_a_a);N
            A_A; /* A */N
N
        a A_a_a:N
            a_a = 0;N
            a_a = 0;N
            a (a->a.a.a_a)N
                a_a = a->a.a.a_a;N
            aA;	    N
            A_A; /* A */N
N
        a A_a:N
            aA;N
            A_A; /* A */N
N
	a A_a_a: /* a a a; a a a, a a */N
	    a (a_a) {N
	        a_a = 0;N
	        a_a = 0;N
	    }N
	    A_A(A.a);N
            A_A(A.a, A.a);N
	    a = A.a_a;N
	    /* a a a? */N
	    a (!a || (A(a) != A && A(a) != A)) {N
	        A_A_a({N
                    Aa_a_a_a( aA_  "%aA a...%a\a",N
                        a,N
			A_a[0],N
			A_a[0] );N
		});N
		aA_A;N
            }N
	    a; /* a a A[A] a */N
            /* A */N
    N
	a A: /* a a a a a-a, a.a. A*?  */N
	    a = 0;N
	    a;N
N
#a  AN
#a A a->a.aN
N
	a A:	/* /A{a,a}A/ a A a a-a */N
N
	    /* Aa a a a a A a a a a aN
	     * a a a a a, a a a a aN
	     * a a a {a,a}. Aa a a a a a aN
	     * a, a a a a a a aN
	     */N
N
	    A.a = a;N
	    a = A(a) + A_A_A;N
N
	    A.a      = a->a;N
	    A.a = a->a;N
N
	    /* a a a, a a A/A a A */N
	    a (A.a->a) {N
		A0 a = A.a->a;N
		a (a > a)N
		    a = a;N
		a += A_A(a); /* Aa a A. */N
	    }N
	    A.A = a;N
	    A.A = a;N
	    A.a = 0;N
	    A.a = 0;N
	    A.a = a;N
	    a = 0;N
	    A.a0 = A_A;N
	    A_A(A.a);N
N
	    a (!(A.a ? A0(A.a) : A0(A.a))) /* a/a */N
		a a_a_A;N
N
	  a_a_A: /* a a A a /A{a,a}A/  */N
	    A_A_A_A(A_A, A.A, a, a, /* a A */N
                                a_a_a);N
	    A_A; /* A */N
N
	a A_A: /* a'a a a a A */N
	    A.a++;N
	    /* a a a, a A'a a: a.a.a */N
	    a (A.a == 0) {N
		a (a->a_a0_a) {N
		    a *a = a->a;N
		    a (a < a) {N
			A.a++;N
			a += A0A(a);N
		    }N
		}N
		a {N
		    A.a = a - a->a;N
		}N
		a (A.a == 0)N
		    A.a = A.a ? A0(A.a) : A0(A.a);N
	    }N
	    A_A_a(N
                Aa_a_a_a( aA_  "A a a %" Aa " a, a=%" Aa "...\a",N
                          a, (A) A.a, (A)A.a)N
	    );N
N
            a (A_A_A_A_A(a_a,(A0)A.a->a))N
	        a a_a;N
	        N
	    {N
		A0 a = (A.a ? A0(A.a) : A0(A.a));N
		a ( a == A_A || A.a < a )N
		    a a_a_A; /* a a a a A */N
	    }N
	    a a_a_A; /* a a a A */N
N
	a A_A_a: /* a a a a a A */N
	    A_A(A.a);N
N
N
	    a (A.a || A.a < A0(A.a) /* a*/ N
                || A_A_A_A_A(a_a,(A0)A.a->a))N
		aA;N
N
	  a_a_A: /* a a A a /A{a,a}A/  */N
	    a (A.a0 == A_A) {N
		/* a a0 a a0 a a a a 0a aN
		 * a a */N
		A.a0 = A.a0 = A_A;N
                a(A.A);N
		a (A_A(A.A) || A(A.A)) {N
		    a *a_a = A.A;N
		    a (! A_A(a_a))N
			A_A_A(a_a);N
		    a (A_a[A(a_a)] == A) {N
                        a (! A_a_A_A_a0_a0(aA_N
                           a_a, &A.a0, A.a0_a0, &A.a0, A.a0_a0,N
                           a))N
                        {N
                            aA;N
                        }N
		    }N
		}N
	    }N
N
	    A_A_a(N
                Aa_a_a_a( aA_  "A a a a a=%" Aa "...\a",N
                    a, (A)A.a)N
		);N
	    a (! A_A_A && A.a0 != A_A) {N
                a (! A0_A_A(a) && a0_a) {N
N
                           /* (Aa a a aA a aA a a a aN
                            * a a a a a a a a aN
                            * a, a a a a a a a aN
                            * a a a a) */N
                    a (   aA(a, A.a0_a0, A0_A_A(a,N
                                                              a->a))N
                        && aA(a, A.a0_a0, A0_A_A(a,N
                                                             a->a)))N
                    {N
                        /* a A a */N
                        A_A_a(N
                            Aa_a_a_a( aA_  "A Aa a a a=0a%" Aa " a0=0a%" Aa " a0=0a%" Aa "\a",N
                                a,N
                                a_a0_a_a((A0 *) a, A),N
                                a_a0_a_a(A.a0_a0, A),N
                                a_a0_a_a(A.a0_a0, A))N
                        );N
                        a_a = A_A_a;N
                        a a_a;N
                    }N
                }N
                a a (a != A.a0 && a != A.a0) {N
                    /* a A a */N
                    A_A_a(N
                        Aa_a_a_a( aA_  "A Aa a a a=0a%A a0=0a%A a0=0a%A\a",N
                            a,N
                            (a) a, A.a0, A.a0)N
                    );N
                    a_a = A_A_a;N
                    a a_a;N
                }N
            }N
N
	    a (A.a->a) {N
		/* a A: a a A a a */N
		A0 a = (A0)A.a->a;N
		a (A.a) {N
                    A_A(a,N
			Aa(a, -A.a) - a->a,N
		        a - a->a);N
		}N
		aN
		    a->a[a].a = -0;N
N
                a (A_A_A_A_A(a_a,(A0)A.a->a))N
		{N
		    a (A.a) N
	                a a_a;N
	            aN
	                aA;N
	        }N
	    }N
	    N
	    A_A_A(A_A, A.A, a, a,   /* a A */N
                            a_a_a);N
	    A_A; /* A */N
N
	a A_A_a: /* a a a a a A */N
	    A_A(A.a);N
            A_A(A.a, A.a);N
	    a (A.a) {N
		A0 a = A0(A.a);N
		a (a != A_A && A.a == a)N
		    aA;N
		a a_a_A; /* a a a a a A */N
	    }N
	    /* a a A */N
	    a (A.a == A0(A.a) /* a */)N
		aA;N
	    A.a--;N
	    A_a(Aa(a, -A.a));N
	    a a_a_A; /* a a a A */N
N
#a AN
#a A a->a.aN
N
#a A_A(a, a) \N
    a (a) { \N
	a (a) { \N
            A_A(a, Aa(a, -0) - a->a, \N
	                         a - a->a); \N
	} \N
	a { \N
	    a->a[a].a = -0; \N
	    a->a      = A.a; \N
	    a->a = A.a; \N
	} \N
    }N
N
        a A:		/*  /A*A/ a A a a 0 a */N
	    A.a = 0;N
	    A.a = 0;N
	    A.a = A_A;N
	    a = A(a);N
	    a a;N
N
        a A:		/*  /A+A/ a A a a 0 a */N
	    A.a = 0;N
	    A.a = 0;N
	    A.a = A_A;N
	    a = A(a);N
	    a a;N
N
	a A:		/*  /(A){a,a}A/ a A a a 0 a */N
            A.a = a->a;	/* Aa a a a */N
            A.a      = a->a;N
	    A.a = a->a;N
	    a (A.a > a)N
		a = A.a;N
	    A.a = A0(a);  /* a a a */N
	    A.a = A0(a);  /* a a a */N
            a = a(A(a) + A_A_A);N
N
            /* a a a-a a a a a A a */N
            a (A_A_A_A_A(a_a,(A0)A.a))N
            {N
                a *a = a;N
                a (!a(a, &a, a, a, a, 0))N
		    aA;N
                A_a(a);N
                a a_a;N
	    }N
N
	    a a;N
N
	a A:		/*  /A{a,a}A/ a A a a 0 a */N
	    A.a = 0;N
	    A.a = A0(a);  /* a a a */N
	    A.a = A0(a);  /* a a a */N
	    a = A(a) + A_A_A;N
	  a:N
	    /*N
	    * Aa a a a a aN
	    * a a a a a a a.N
	    *N
	    * Aa a a a .*a a .*?a, a a a aN
	    * a )'a, ('a a (?{ ... })'a a a a a aN
	    * a a a a a A-a a.  -- aN
	    */N
N
	    a(A.a <= A.a);N
            a (! A_A(a) && ! A(a)) {N
                A.a0 = A.a0 = A_A;N
            }N
            a {N
		a *a_a = a;N
N
		a (! A_A(a_a)) N
		    A_A_A(a_a);N
N
		a (! A_A(a_a))N
		    A.a0 = A.a0 = A_A;N
		a {N
		    a ( A_a[A(a_a)] != A ) {N
			A.a0 = A.a0 = A_A;N
		    }N
		    a {N
                        a (! A_a_A_A_a0_a0(aA_N
                           a_a, &A.a0, A.a0_a0, &A.a0, A.a0_a0,N
                           a))N
                        {N
                            aA;N
                        }N
                    }N
		}N
	    }N
N
	    A.A = a;N
	    A.A = a;N
	    a (a) {N
                a *a = a;N
		a = 0;N
		a (A.a &&N
                        a(a, &a, A.A, a, a, A.a)N
                            < A.a)N
		    aA;N
                A_a(a);N
		A.a = A.a;N
		A_A(A.a);N
		a (A.a0 == A_A)N
		    a a_a_A_a;N
N
		A.a = a;N
N
		/* a A.a a a a a a aN
		 * a a a a a */N
		a  (A.a == A_A) {N
		    A.a = a - 0;N
		    a (a0_a)N
			a (A0_A_A(*(A0*)A.a))N
			    A.a--;N
		}N
		a a (a0_a) {N
		    a a = A.a - A.a;N
		    a (A.a = a;N
			 a >0 && A.a <  a; a--)N
			A.a += A0A(A.a);N
		}N
		a {N
		    A.a = a + A.a - A.a;N
		    a (A.a >=  a)N
			A.a =  a - 0;N
		}N
		a a_a_A_a_a;N
N
	    }N
	    a {N
                /* a a a a a, a a a aN
                 * a a a */N
                a *a = a;N
                A.a = a(a, &a, A.A, a, a, A.a);N
		a (A.a < A.a)N
		    aA;N
                A_a(a);N
		a ((A.a > A.a)N
		    && (A_a[A(A.A)] == A) && (A(A.A) != A))N
		{N
		    /* A{a,a} a a a a a a a a, a'aN
		     * a a a a a ... */N
		    A.a = A.a;N
		    /* ...a a $ a \A a a a *a* aN
		       a a a a.  Aa "\a\a" =~ /\a+\A\a/.N
		       Aa a a a a a a a a. */N
		    a (A(a - 0) == '\a' && A(A.A) != A)N
			A.a--;N
		}N
		A_A(A.a);N
		a a_a_A_a;N
	    }N
	    A_A; /* A */N
N
	a A_A_a_a:N
	    /* a a a A a a a-a a.N
             * Aa a a a a0,a0 a a a */N
N
	    A_A(A.a);N
            a (A.a) {N
                A_A(A.a, A.a);N
            }N
N
            a (A.a0 == A_A) {N
                /* a -- a a a */N
                a *a = a;N
                a (!a(a, &a, A.A, a, a, 0)) {N
                    aA;N
                }N
                a = a;N
                A.a++;N
		a (!(   A.a <= A.aN
                        /* a a ? */N
                     || (A.a == A_A && A.a > 0))N
                )N
                    aA;N
            }N
            a {N
		a a;N
                /* Aa'a a a'a -- a a. */N
                A.a = a;N
                a (a0_a)N
                    a += A0A(a);N
                aN
                    a++;N
                A.a++;N
N
              a_a_A_a_a:N
                /* a a a a a 'A' a a, a a A */N
		a (a0_a) {N
		    a = (A.a == a) ? 0 : 0;N
		    a (A.a0 == A.a0) {N
			/* a a a a0_a(a, a) */N
			a (    a <= A.aN
                               &&  a < aN
                               &&  aA(a, A.a0_a0,N
                                    A0_A_A(a, a->a)))N
                        {N
			    a += A0_A_A(a,N
                                                       a->a);N
			    a++;N
			}N
		    }N
		    a {N
			/* a a a a0_a(a, a) */N
			a (   a <= A.aN
                               && a < aN
                               && aA(a, A.a0_a0,N
                                     A0_A_A(a, a->a))N
                               && aA(a, A.a0_a0,N
                                    A0_A_A(a, a->a)))N
                        {N
			    a += A0_A_A(a, a->a);N
			    a++;N
			}N
		    }N
		}N
		a {  /* Aa a0_a */N
		    a (A.a0 == A.a0) {N
                        a = (a *) a(a,N
                                                   A.a0,N
                                                   A.a + 0 - a);N
                        a (! a) {N
                            a = A.a + 0;N
                        }N
		    }N
                    a {N
                        A0 a0_a0_a_a = A.a0 ^ A.a0;N
N
                        a (! aA_A_0(a0_a0_a_a)) {N
                            a (   a <= A.aN
                                   && A(a) != A.a0N
                                   && A(a) != A.a0)N
                            {N
                                a++;N
                            }N
                        }N
                        a {N
                            /* Aa a0 a a0 a a a a a a, a aN
                             * a a a a a a a a,N
                             * a a a a a a a a aN
                             * a a a a a.  Aa a aN
                             * a a, a a a a a, a0N
                             * a a0, a a a a'a a a a a a.N
                             * Aa a A a A a, a a aN
                             * A-a a Aa0-a a aN
                             * a a a a a a, a a a aN
                             * a a a a. (a.a. 'A' 0a0 a 'a'N
                             * 0a0). */N
                            A0 a0_a = A.a0 &~ a0_a0_a_a;N
                            A0 a0_a0_a = ~ a0_a0_a_a;N
                            a (   a <= A.aN
                                   && (A(a) & a0_a0_a)N
                                                                != a0_a)N
                            {N
                                a++;N
                            }N
                        }N
                    }N
		    a = a - A.a;N
		}N
		a (a > A.a)N
		    aA;N
		a (a) {N
                    /* Aa /a{a,a}a/, A.a a a "a" a a, a aN
                     * a a; a a a a a aN
                     * a a */N
                    a *a = A.a;N
		    A.a += a;N
                    a (a(a, &a, A.A, a, a, a) < a)N
			aA;N
                    a(a == A_A || a == a);N
		}N
	    }N
N
          a_a_A_a:N
            A_A(A.a, A.a);N
            A_A_A(A_A_a, A.A, a, a,N
                            a_a_a);N
	    A_A; /* A */N
N
N
          a_a_A_a:N
	    /* a a a a: a a a a A */N
	    {N
		a a_a = a <  a;N
N
		/* Aa a a a, a a. */N
                a (A.a0 != A_A && a_a) {N
                    a (! A0_A_A(A(a)) && a0_a)N
                    {N
                        a_a =  aA(a, A.a0_a0,N
                                             A0_A_A(a,N
                                                            a->a))N
                                    || aA(a, A.a0_a0,N
                                             A0_A_A(a,N
                                                            a->a));N
                    }N
                    a {N
                        a_a =   A(a) == A.a0N
                                     || A(a) == A.a0;N
                    }N
                }N
                a (A.a0 == A_A || a_a) {N
		    A_A(A.a, A.a);N
		    A_A_A(A_A_a, A.A, a, a,N
                                    a_a_a);N
		    A_A; /* A */N
		}N
	    }N
	    /* A */N
N
	a A_A_a_a:N
	    /* a a a A a a a a */N
N
	    A_A(A.a);N
            a (A.a) {N
                A_A(A.a, A.a);N
            }N
	    /*  a a. */N
	    a (--A.a < A.a)N
		aA;N
	    a = Aa(a, -0);N
	    a a_a_A_a;N
N
#a AN
N
	a A: /*  a a a a a  */N
          a_a:N
	    a (a_a) {N
		/* a'a a a A a /(??{A})A/; a a a A */N
                A_A_A("A-A[a]", A_A.a_a_a);N
		a->a.a.a_a = a_a;		/* a */N
N
                /* Aa *a* a a. */N
                a->a.a.a = a(a, 0, a);N
                a_a = A_A.a_a;N
		a_a0_a = a->a_a0_a = aA(A_A0(a_a));N
		A_a_a(a_a);N
		a = AaA(a_a);N
		a = Aa_A(a);N
N
                a->a.a.a_a = a_a;N
                a_a = A_A.a_a;N
N
		A_A(a->a.a.a);N
N
		/* Aa a a a a a a a aN
		 * a */N
                a_a(a, A_A.a, &a);N
N
		a->a.a.a_a = a_a;N
                a_a = A_A.a_a;N
		A_A_a(N
                    Aa_a_a_a( aA_  "A: A a a ... (a_a=%a)\a",N
                                      a, a_a););N
                a ( a_a )N
	            a_a--;N
N
                A_A_A("A-A[a]", a_a->a);N
N
                A_A_A_A(A_a_A,          /* a A */N
                                    a->a.a.a_a->a.a.A,N
                                    a, a, a_a_a);N
	    }N
N
	    a (a < a->a) {N
                A_A_a(Aa_a_a( aA_N
                                      "%aA: Aa a, a a=%a a a a a=%a, a!%a\a",N
				      A_a[0],N
				      (a)(a - a),N
				      (a)(a->a - a),N
				      A_a[0]));N
               				      N
		aA_A;		/* Aa a: a a. */N
	    }N
	    aA;			/* Aa! */N
N
	a A: /* a A/A/A/A */N
	    A_A_a(N
            Aa_a_a_a( aA_  "%aA: a a...%a\a",N
                a, A_a[0], A_a[0]));N
	    aA;			/* Aa! */N
N
#a  AN
#a A a->a.aN
N
	a A:	/* (?>A) */N
	    A.a = 0;N
	    A.a = a;N
	    A.a = a;N
            A.a = 0;N
	    a a_a;	N
N
	a A:	/* -a a: (?!A), a a 'a', (?<!A) */N
	    A.a = 0;N
	    a a_a_a_a;N
N
	a A:	/* +a a: (?=A), a a 'a', (?<=A) */N
	    A.a = 0;N
	  a_a_a_a:N
            A.a = a->a_a + 0; /* a_a a a aN
                                              a a, aN
                                              a-a a */N
	    a (! a->a) {    /* 'a' a a a */N
N
                /* Aa a a a a a a a a */N
		A.a = a;N
		A.a = a;N
            }N
	    a {N
                A_A_A0_A a_a = a->a;N
		a * a;N
N
                /* Aa a a a a a a */N
		A.a = a;N
N
                /* ... a a a a a a a a a a a aN
                 * a a a a a a a */N
                a (; A.a > 0; A.a--, a_a--) {N
                    a = Aa(a, a_a);N
                    a (a) {N
                        A.a = a;N
                        a a_a;N
                    }N
                }N
N
                /* Aa a a a'a a a a a a, a aN
                 * a a a */N
                a (a) {N
                    a = 0;N
                    a = 0 - aA(A.a);N
                }N
                a a (A.a)N
                    aA;N
N
                /* Aa, a a'a a a a a, a a a a */N
                a = a + A(a);N
                a (a == a)N
                    a = A;N
                a;N
	    }N
N
	  a_a:N
	    A.a = a;N
	    A.a = a;N
	    a = 0; /* A: a a a a a a a a a a A */N
	    N
	    /* a a a (?...A) */N
	    A_A_A_A(A_A, A(A(a)), A.a,N
                                A.a, a_a_a);N
	    A_A; /* A */N
N
        {N
            a a;N
N
	a A_A_a: /* a a (?...A) a */N
	    a (! A.a && A.a > 0) {N
N
                /* Aa a'a a a a a a'a a a aN
                 * a.  Aa a a a a a a a */N
                A.a--;N
                A.a = Aa(A.a, 0);N
                a = A.a;N
                a = A.a;N
                a a_a;N
            }N
N
            /* Aa, a a a a a a. */N
	    a = A;N
	    a a_a;N
N
	a A_A: /* a a (?...A) a */N
	    a = A;N
          a_a:N
            a = a == A.a;N
	    a (! A.a && !a) {N
                aA;N
            }N
N
	    a (A(A.a) != A) {N
                /* a a a a a (?>...) */N
		a = a->a;N
                a = a->a;N
                a_a_a = a->a0;N
	    }N
	    a = A.a + A(A.a);N
	    a (a == A.a)N
		a = A;N
	    a; /* a A */N
        }N
N
#a AN
N
	a A: /*  a a a a a aN
                       * (A; A ...; A ) a A */N
	    a = a + A(a);N
	    a (a == a)N
		a = A;N
	    a;N
N
	a A:  /*  (*A)  */N
	    a->a = a;N
	    /* A */N
N
	a A:   /*  (*A)   */N
            a (a->a)N
	        a_a_a = a_a = A_A(a->a->a[ A( a ) ]);N
	    A_A_A(A_a, a, a, a,N
                            a_a_a);N
	    A_A; /* A */N
N
	a A_a_a:N
	    a_a = 0;    N
	    /* A */	    N
            aA;N
            A_A; /* A */N
N
	a A:   /* (*A)  */N
            a (a->a)N
                a_a = A_A(a->a->a[ A( a ) ]);N
            a (a) {N
                /* a a (?(?!)A|A) a,N
                 * a a a a a a aN
                 * a a a A a*/N
                a= 0;N
                a;N
            } a {N
                aA;N
            }N
	    A_A; /* A */N
N
#a A a->a.aN
        a A: /*  (*A:a)  */N
            A.a_a = a_a;N
            A.a_a = a_a = a_a_a N
                = A_A(a->a->a[ A( a ) ]);N
            a_a = a;N
            A.a_a = a;N
            A_A_A_A(A_a, a, a, a,N
                                a_a_a);N
            A_A; /* A */N
N
        a A_a:N
            a_a = A.a_a;N
            aA;N
            A_A; /* A */N
N
        a A_a_a:N
            a (a && a_a(A.a_a,a)) N
            {N
                a (A.a_a > a)N
	            a->a = Aa(A.a_a, 0);N
                a = A; /* a a a a */N
                a_a = A.a_a;N
N
                A_A_a({N
                        Aa_a_a_a( aA_  "%aA: a a: a a a a:%" Aa "...%a\a",N
                            a,N
		            A_a[0], AaA(a_a), A_a[0]);N
		});N
            }N
            a_a = A.a_a;N
            a_a_a = a_a ? N
                a_a->a.a.a_a : A;N
            aA;N
            A_A; /* A */N
N
        a A:  /*  (*A)  */N
            a (!a->a) {N
                /* (*A) : a a a a a a*/N
                A.a_a = A;N
                A.a_a = a;N
                A_A_A(A_a,a, a, a,N
                                a_a_a);N
            } a {N
                /* (*A:A) : a a a a (*A:A) a a a a, N
                   a a a.  Aa a a a a N
                 */N
                a_a *a = a_a;N
                A *a = A_A(a->a->a[ A( a ) ]);N
                N
                a (a) {N
                    a ( a_a( a->a.a.a_a, N
                                a ) ) N
                    {N
                        A.a_a = a;N
                        A_A_A( A_a, a, a, a,N
                                         a_a_a);N
                    }N
                    a = a->a.a.a_a;N
                }N
            }    N
            /* Aa'a a a (*A:A) a a a (*A:A) */N
            a;    N
N
	a A_a_a:N
	    a (A.a_a) {N
	        /* (*A:A) - Aa a a a a a a a a N
	           a a a*/N
	        a = A.a_a;	   N
	    } a {N
	        /* (*A) - Aa a, a a a.*/N
	        a (A.a_a > a)N
	            a->a = Aa(A.a_a, 0);N
	        /* a a a a_a a a a_a a aN
	           a a a a a a a a a a a a aN
	           a */    N
                a (a_a) N
                    a_a=a_a->a.a.a_a;	            N
            } N
            a_a = 0; N
            aA;N
            A_A; /* A */N
#a AN
N
        a A: /* \A */N
            a ((a=a_A_a(a, a, a0_a))) {N
                a += a;N
            } aN
                aA;N
            a;N
N
	a:N
	    AaA_a(Aa_a_a, "%" Aa " %a\a",N
			  A0A(a), A(a));N
	    Aa_a(aA_ "a a a");N
N
        /* a a a a a a a a a a aN
         * a a a a */N
          a_a:N
            a(!A_A_A);N
            a (a0_a) {N
                a += A_a0a[a];N
                /* a a a a a 0 a a a a (aN
                 * A), a a 0+ */N
                a (a >  a)N
                    aA;N
            }N
            aN
                a++;N
            a;N
	    N
	} /* a a */ N
N
        /* a a a a */N
	a = a; /* a a a a a a a ... */N
	a;    /* ... a a a a a, a a */N
        /* A */N
N
      a_a_a:N
	/* a a a a a a a */N
	a->a.a.a_a_a = a_a;N
	a_a = a;N
	/* A */N
      a_a:N
	/* a a a a a, a a a a  */N
	{N
	    a_a *a;N
N
	    A_A_a({N
	        a_a *a = a;N
	        a_a *a = a_a;N
	        A0 a;N
	        a_a *a = A_a_a;N
                a (a = 0; a < 0 && a <= a; a--,a++) {N
                    a (a < A_A(a)) {N
                	a = a->a;N
                	a = A_A(a);N
                    }N
                    Aa_a_a_a( aA_ "%0a #%-0a %-0a %a\a",N
                        a,N
                        a ? "    " : "a",N
                        a - a, A_a_a[a->a_a],N
                        (a == a) ? "a" : ""N
                    );N
                    a (a == a)N
	                a = a->a.a.a_a_a;N
                }N
            } a N
                A_A_a("a")N
            );N
	    a++;N
	    a->a = a;N
	    a->a = a;N
            a->a0 = a_a_a;N
	    a = a+0; N
	    a (a >  A_A(A_a_a))N
		a = A_a_a(aA);N
	    A_a_a = a;N
N
	    a = a;N
            a = a;N
            a_a_a = a0;N
	    a = a;N
	    a;N
            /* A */N
	}N
    }N
#a A_A_AN
#  a A_aN
#aN
N
    /*N
    * Aa a a a a a'a a -- a "a A" aN
    * a a a.N
    */N
    Aa_a(aA_ "a a a");N
    A_A; /* A */N
N
  a:N
    a (a_a) {N
	/* a a a a a a, a a a aN
	 * a a a a a a a_a a a a a */N
	a(a != a_a);N
#a AN
	a (a != a_a) {N
	    a--;N
	    a (a < A_A(A_a_a)) {N
		A_a_a = A_a_a->a;N
		a = A_A(A_a_a);N
	    }N
	    A_A_a({N
	        a (a_a) {N
	            A_A_a("a (a a)");        N
	        } a {N
	            A_A_a("a (a)");N
	        }N
	    });N
	    a--;N
	}N
#aN
	a (a_a < A_A(A_a_a)N
	    || a_a > A_A(A_a_a))N
	{N
	    /* a a a a, a a */N
	    a -= (a - A_A(A_a_a) + 0);N
	    A_a_a = A_a_a->a;N
	    a = A_A(A_a_a);N
	}N
	a -= (a - a_a);N
#aN
	a = a_a;N
	a_a = a->a.a.a_a_a;N
	A_a_a = a;N
        N
        a (a_a) {N
            a= a->a;N
            a= a->a;N
            a_a_a = a->a0;N
        }N
	a_a = a->a_a + a_a;N
	a a_a;N
    }N
N
    A_A_a(Aa_a_a( aA_  "%aAa a!%a\a",N
			  A_a[0], A_a[0]));N
N
    a (a->a_a_a) {N
	/* a a a (?{...}) a a a a aN
	 *   a $^A = a {...}N
	 * Aa a a a a, a a a a a a;N
	 * a a a a a a a $^A a a aN
	 * a */N
        /* A a a a a a a a a a a.N
         * a a a a A_a a a a a.N
         * AaN
         */N
	a (a != AaA(A_a)) {N
	    a_a(a, AaA(A_a));N
            AaA(a);N
        }N
    }N
    a = 0;N
    a a_a;N
N
  a:N
    A_A_a(N
        Aa_a_a_a( aA_  "%a...%a\a",N
            a,N
            A_a[0], A_a[0])N
	);N
N
  a_a:N
    a (a_a) {N
        a (a_a) {N
            a a;N
        } a {N
            a a_a;N
        }N
    }    N
    a (a) {N
	/* a'a a a a a a a */N
	a--;N
	a (a < A_A(A_a_a)) {N
	    A_a_a = A_a_a->a;N
	    a = A_A(A_a_a);N
	}N
	A_a_a = a;N
	a= a->a;N
	a= a->a;N
        a_a_a = a->a0;N
N
	A_A_a("a");N
	a--;N
	a (a_a == a)N
	    a_a = a->a.a.a_a_a;N
N
	a_a = a->a_a + 0; /* a = a + 0 */N
        A_A_A();N
	a a_a;N
    }N
    a = 0;N
N
  a_a:N
    a (a->a & Aa_A_A) {N
        A *a_a = a_a("A", 0);N
        A *a_a = a_a("A", 0);N
        a (a) {N
            a_a = &A_a_a;N
            a (!a_a_a) N
                a_a_a = &A_a_a;N
        } a {N
            a (!a_a) N
                a_a = &A_a_a;N
            a_a_a = &A_a_a;N
        }N
        a(a_a);N
        a(a_a);N
        a_a(a_a, a_a);N
        a_a(a_a, a_a_a);N
    }N
N
N
    a (a_a_a) {N
	aA;N
        /* a "Aa a a A" a */N
	A_A;N
        A_A_A(A);N
    }N
    aN
        A_A(a_a_a);N
N
    a(!a ||  a - a->a >= 0);N
    a a ?  a - a->a : -0;N
}N
N
/*N
 - a - a a a a, a a aN
 *N
 * Aa 'a' a a a a a a a a a a a a aN
 * '+', a {0,0}N
 *N
 * a - a a a a a a a a.  Aa a aN
 *             a a a a a a a a aN
 *             a.N
 * a         - a a a a a a a.N
 * a    - a a a a a a a a a'a a aN
 *             a.N
 * a   - a a a a, a a a0_aN
 * a       - a a a a a a.N
 * a     - (a a) a a.N
 */N
A A0N
A_a(aA_ a *a, a **a, a a *a,N
            a * a, a_a *a a, A0 a _aA)N
{N
    aA;N
    a *a;     /* Aa a a a a a a */N
    A0 a;N
    a *a_a = a;   /* a a a. */N
    A0 a = 0;  /* Aa a a a a */N
    a a0_a = a->a_a0_a;N
    a a a_a = 0;  /* Aa a a? */N
    A a0_a = 0;N
    _a_a_a a;N
N
    A_A_A_A;N
N
    /* Aa a a a a a a a a a a A.  Aa AN
     * a: a a a a a a a a A, aN
     * a a a a a, a a a a a a a, a a aN
     * a a a a a a. */N
N
    a = *a;N
    a (a == A_A)   /* Aa a a a a a a a a a'aN
                               a */N
	a = A0_A;N
    a a (! a0_a && a_a - a > a)N
	a_a = a + a;N
N
    /* Aa, a a a a a a-A-0 a a a a <a_a> aN
     * a a a a a a a a a a a (a a a a a aN
     * a, a a a a a a a a a).  Aa aN
     * a a a a a a a a a a'a a a <a_a> aN
     * a a a a a'a a a a a a, a aN
     * a a a a a a.  Aa a a a a A a aN
     * a a, a a a a a a a Aa a a a a aN
     * a-A-0 a.  Aa a a Aa a a'a a aN
     * a a a a a.N
     *N
     * Aa a a a a A-0 a, a a a a a aN
     * a a.  Aa a a a a a a a a a aN
     * a a a a (a <a> a a a), a a aN
     * a a a a a a a a (a <a_a>.  A a AaN
     * a a a a a a a a a.  Aa a a a aN
     * a a, a a A-0 a, a a a a a a aN
     * a.N
     *N
     * Aa, a a a a a a a a a a; a aN
     * a a a a; a a a a a a a <a> a'aN
     * a a <a_a>, a a A-0 a a a <a> a a a aN
     * a a'a a a a a */N
N
    a (A(a)) {N
    a A_A:N
	a (a0_a) {N
	    a (a < a_a && a < a && *a != '\a') {N
		a += A0A(a);N
		a++;N
	    }N
	} a {N
            a = (a *) a(a, '\a', a_a - a);N
            a (! a) {N
                a = a_a;N
            }N
	}N
	a;N
    a A:N
        a (a0_a) {N
	    a (a < a_a && a < a) {N
	        a += A0A(a);N
		a++;N
	    }N
	}N
	aN
	    a = a_a;N
	a;N
N
    a A_A0:N
        a (! a0_a) {N
            a;N
        }N
        /* A */N
N
    a A:N
      {N
        A0 * a;N
        Aa_a a_a;N
N
	a = (A0 *) Aa(a);N
        a_a = A_Aa(a);N
        a a_a_a_a;N
N
    a A:N
        _A_A_A_A_A;N
        a (a0_a && A0_A_A_A0(*a)) {N
            _A_A_A_A_A_A0_A(a, a);N
        }N
        a a_a;N
N
    a A_A0:N
        a (! a0_a) {N
            a;N
        }N
        /* A */N
    a A:N
      a_a:N
	a = (A0 *) Aa(a);N
        a_a = A_Aa(a);N
N
      a_a_a_a:N
        a(a_a == a->a_a0_a ? A0A(a) : 0);N
N
	a = *a;N
N
        /* Aa a a a a a a a a a a a a aN
         * a A-0, a a a a a a'a A-0.  Aa a aN
         * a a A0_A_A() a a a a a'a A-0, a a'aN
         * a a a a'a a a a a a a A-0 a a */N
        a (A0_A_A(a) || (! a0_a && ! a->a_a0_a)) {N
            a (a0_a && a_a - a > a) {N
                /* Aa a'a a <a_a> a a A-0, a a a a a,N
                 * a a, a a a a, 0 a == 0 a */N
                a_a = a + a;N
            }N
            a = (a *) a_a_a((A0 *) a, (A0 *) a_a, (A0) a);N
	}N
	a a (a->a_a0_a) {N
            a (a0_a) {N
                A a_a_a;N
N
                /* Aa a a a a a A-0, a a a aN
                 * a A */N
                a (a < aN
                       && a < a_aN
                       && (a_a_a = A0A(a)) <= a_aN
                       && aA(a, a, a_a_a))N
                {N
                    a += a_a_a;N
                    a++;N
                }N
            }N
            a a (! A0_A_A_A0(a)) {N
N
                /* Aa a'a a0; a a a a a A-0N
                 * a a a-A0, a a a a a */N
                a = A_A_A0_A_A(a, *(a + 0));N
                a = (a *) a_a_a((A0 *) a, (A0 *) a_a, (A0) a);N
            } /* a a a a a Aa0, a'a a a aN
                 a-A-0 a */N
        }N
        a {N
N
            /* Aa, a a a a a0; a a'a, a <a> aN
             * a a a0 a a, a a'a a a a.N
             * Aa a a, a a a a0 a a a a, aN
             * a a a a a a a a a0 a */N
	    A0 a = A0_A_A_A(a);N
	    A0 a = A0_A_A_A(a);N
N
	    a (a < aN
		    && a + 0 < a_aN
		    && A(a) == aN
		    && A(a + 0) == a)N
	    {N
		a += 0;N
		a++;N
	    }N
	}N
	a;N
      }N
N
    a A_A_A: /* Aa a a a a a-a0 a */N
        a(! a->a_a0_a);N
        /* A */N
    a A:N
        a0_a = A_A0_A_A;N
        a (a->a_a0_a || ! a0_a) {N
N
            /* Aa a a a a A A a a a a aN
             * a a a a-A-0 a a a a a a a A-0N
             * a.  */N
            a0_a |= A_A0_A_A|A_A0_A_A;N
        }N
        a a_a;N
N
    a A:N
        _A_A_A_A_A;N
	a0_a = A_A;N
	a a_a;N
N
    a A:   /* Aa a a a a a-a0 a */N
        a(! a->a_a0_a);N
        a a_a;N
N
    a A0:N
        a (! a0_a) {N
            a;N
        }N
        a0_a =  A_A | A_A0_A_AN
                                    | A_A0_A_A;N
        a a_a;N
N
    a A_A0:N
        a (! a0_a) {N
            a;N
        }N
	a(a->a_a0_a);N
	a0_a = A_A0_A_A;N
        a a_a;N
N
    a A:N
        a0_a = A_A0_A_A;N
        /* A */N
N
    a A:N
N
      a_a: {N
        a a0, a0;N
        A0 a0_a0[A0_A+0], a0_a0[A0_A+0];N
N
        a(A_Aa(a) == a->a_a0_a ? A0A(Aa(a)) : 0);N
N
        a (A_a_A_A_a0_a0(aA_ a, &a0, a0_a0, &a0, a0_a0,N
                                        a))N
        {N
            a (a0 == A_A) {N
                /* Aa a Aa a a */N
                a *a = a;N
                A a_a = a->a_a0_a ? A0A(Aa(a)) : 0;N
                a (a < aN
                        && aA_a0_a(a, &a, 0, a0_a,N
                                             Aa(a), A, a_a,N
                                             a->a_a0_a, a0_a))N
                {N
                    a = a;N
                    a = a;N
                    a++;N
                }N
            }N
            a a (a0_a) {N
                a (a0 == a0) {N
                    a (a < a_aN
                           && a < aN
                           && aA(a, a0_a0, A0_A_A(a,N
                                                                  a)))N
                    {N
                        a += A0A(a0_a0);N
                        a++;N
                    }N
                }N
                a {N
                    a (a < a_aN
                           && a < aN
                           && (   aA(a, a0_a0, A0_A_A(a,N
                                                                     a))N
                               || aA(a, a0_a0, A0_A_A(a,N
                                                                     a))))N
                    {N
                        a += A0_A_A(a, a);N
                        a++;N
                    }N
                }N
            }N
            a a (a0 == a0) {N
                a = (a *) a_a_a((A0 *) a, (A0 *) a_a, (A0) a0);N
            }N
            a {N
                /* Aa a a a() A_A_a_a_a.  Aa aN
                 * a a a a a a a a a aN
                 * a a a a a a, a a a a a */N
                A0 a0_a0_a_a = a0 ^ a0;N
N
                a (aA_A_0(a0_a0_a_a)) {N
                    A0 a0_a0_a = ~ a0_a0_a_a;N
N
                    a = (a *) a_a_a_a((A0 *) a,N
                                                       (A0 *) a_a,N
                                                       a0 & a0_a0_a,N
                                                       a0_a0_a);N
                }N
                a {N
                    a (    a < a_aN
                           && (A(a) == a0 || A(a) == a0))N
                    {N
                        a++;N
                    }N
                }N
            }N
	}N
	a;N
    }N
    a A:N
    a A:N
        _A_A_A_A_A;N
N
        a (A_A0_A_A(A(a)) && ! A_A0_A_A) {N
            Aa_a_a(aA_ aA(A_A), a0_a_a);N
        }N
        /* A */N
    a A:N
    a A:N
	a (a0_a) {N
	    a (a < aN
                   && a < a_aN
		   && a(a, a, (A0*)a, (A0*) a_a, a0_a))N
	    {N
		a += A0A(a);N
		a++;N
	    }N
	}N
        a a (A_A(a) & ~ A_A_A_A_A) {N
	    a (a < a_aN
                    && a(a, a, (A0*)a, (A0*)a+0, 0))N
		a++;N
        }N
        a {N
	    a (a < a_a && A_A_A(a, *((A0*)a)))N
		a++;N
	}N
	a;N
N
    a A:N
        a (a0_a && a_a - a > a) {N
N
            /* Aa a'a a <a_a> a a a a a aN
             * a a A-0, a a a a a a a a, a a, aN
             * a, 0 a == 0 a. */N
            a_a = a + a;N
        }N
N
        a = (a *) a_a_a_a((A0 *) a, (A0 *) a_a, (A0) A(a), A(a));N
        a;N
N
    a A:N
	a (a0_a) {N
	    a (     a < aN
                   &&   a < a_aN
		   &&  (*a & A(a)) != A(a))N
	    {N
		a += A0A(a);N
		a++;N
	    }N
	}N
        a {N
            a = (a *) a_a_a((A0 *) a, (A0 *) a_a, (A0) A(a), A(a));N
	}N
        a;N
N
    a A:N
        a (a0_a) {  /* A a a a A-0 a */N
            a (  a < aN
                   && a < a_aN
                   && A_A0_A_A0(*a) >= A_A(a)N
                   && a(a, a, (A0*)a, (A0*) a_a, A))N
            {N
                a += A0A(a);N
                a++;N
            }N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {  /* Aa a a a A-0 a */N
N
            /* a a a a a a a a A a */N
            a (   a < aN
                   && a < a_aN
                   && (A0) *a == A_A(a)N
                   && a(a, a, (A0*)a, (A0*) a_a,N
                                                              A))N
            {N
                a += A0A(a);N
                a++;N
            }N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {  /* A a a a A-0 a */N
            a (  a < aN
                   && a < a_aN
                   && aA(A_A0_A_A0(*a),N
                              A_A_Aa_A(A_A(a)),N
                              A_A_Aa_A(A_A(a)))N
                   && A_A0_A_A0(*a) >= A_A(a)N
                   && a(a, a, (A0*)a, (A0*) a_a, A))N
            {N
                a += A0A(a);N
                a++;N
            }N
        }N
        a;N
N
    a A:N
        a (a0_a) {N
            a (   a < aN
                   && a < a_aN
                   && A_A0_A_A0(*a) >= A_A(a)N
                   && aA(a0_a_a_a((A0 *) a,N
                                                (A0 *) a_a,N
                                                A),N
                                  Aa(a), Aa(a)))N
            {N
                a += A0A(a);N
                a++;N
            }N
        }N
        a {N
            a (   a < aN
                   && a < a_aN
                   && aA((A0) *a, Aa(a), Aa(a)))N
            {N
                a++;N
                a++;N
            }N
        }N
        a;N
N
    a Aa:N
        a (a0_a) {N
            a (   a < aN
                   && a < a_aN
                   && (A0) *a == A_A(a)N
                   && aA(a0_a_a_a((A0 *) a,N
                                                (A0 *) a_a,N
                                                A),N
                                  Aa(a), Aa(a)))N
            {N
                a += A0A(a);N
                a++;N
            }N
        }N
        a {N
            a (   a < aN
                   && a < a_aN
                   && aA((A0) *a, Aa(a), Aa(a)))N
            {N
                a++;N
                a++;N
            }N
        }N
        a;N
N
    /* Aa a (A) a a a A a a a a a a */N
N
    a A:N
        a_a = 0;N
        /* A */N
N
    a A:N
        _A_A_A_A_A;N
	a (! a0_a) {N
	    a (a < a_a && a_a ^ aA(aA_a(A(a),N
                                                                   *a)))N
            {N
		a++;N
            }N
	} a {N
	    a (a < a && a < a_aN
                   && a_a ^ aA(aA_a0_a(A(a),N
                                                                  (A0 *) a,N
                                                                  (A0 *) a_a)))N
            {N
                a += A0A(a);N
		a++;N
	    }N
	}N
	a;N
N
    a A:N
        a (a0_a) {N
            a a0_a;N
        }N
        /* A */N
N
    a A:N
        a (a0_a && a_a - a > a) {N
N
            /* Aa a'a a <a_a> a a a a a aN
             * a a A-0, a a a a a a a a, a a, aN
             * a, 0 a == 0 a. */N
            a_a = a + a;N
        }N
        a (a < a_a && _a_aA_A((A0) *a, A(a))) {N
	    a++;N
	}N
	a;N
N
    a A:N
        a (a0_a) {N
            a_a = 0;N
            a a0_a;N
        }N
        /* A */N
N
    a A:N
        a (! a0_a) {N
            a (a < a_a && ! _a_aA_A((A0) *a, A(a))) {N
                a++;N
            }N
        }N
        a {N
N
            /* Aa a a a a a a A a aN
             * a-A, a a a A a a'a a a a. */N
	    a (a < a && a < a_aN
                   && (   ! aA_a0_a(a, a)N
                       || ! _a_aA_A((A0) *a, A(a))))N
            {N
                a += A0A(a);N
		a++;N
	    }N
        }N
        a;N
N
    a A:N
        a_a = 0;N
        /* A */N
N
    a A:N
	a (! a0_a) {N
            a (a < a_a && a_aN
                                ^ aA(_a_aA((A0) *a, A(a))))N
            {N
                a++;N
            }N
	}N
	a {N
          a0_a:N
            a = (_a_a_a) A(a);N
            a (a) {N
                a:N
                    a (   a < a && a < a_aN
                           && a_a ^ aA(_a_a_a(N
                                              A_Aa_a[a],N
                                              a0_a_a_a((A0 *) a,N
                                                                (A0 *) a_a,N
                                                                A))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
N
                    /* Aa a a a, a a a a a aN
                     * a a a a a a a Aa a a a.N
                     * Aa a a a a a a a a a aN
                     * a.  Aa a a a a a a a.N
                     * */N
N
                a _A_A_A:N
                    a (a < aN
                           && a < a_aN
                           && (a_aN
                               ^ aA(aA_a0_a(a, a_a))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
                a _A_A_A:N
                    a (a < aN
                           && a < a_aN
                           && (a_aN
                                ^ aA(aA_a0_a(a, a_a))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
                a _A_A_A:N
                    a (a < aN
                           && a < a_aN
                           && (a_aN
                               ^ aA(aA_a0_a(a, a_a))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
                a _A_A_A:N
                    a (a < aN
                           && a < a_aN
                           && (a_aN
                               ^ aA(aA_a0_a(a, a_a))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
                a _A_A_A:N
                    a (a < aN
                           && a < a_aN
                           && (a_aN
                               ^ aA(aA_a0_a(a, a_a))))N
                    {N
                        a += A0A(a);N
                        a++;N
                    }N
                    a;N
            }N
	}N
        a;N
N
    a A:N
        a (a0_a) {N
	    a (a < a && a < a_a &&N
                    (a=a_A_a0_a(a, a_a))) {N
		a += a;N
		a++;N
	    }N
	} a {N
            /* A a a a a a a a, a a a, a aN
             * a a a a a a a, a a a aN
             * a a <a_a> a a a a a */N
	    a (a < a && (a=a_A_a0_a(a, a))) {N
		a+=a;N
		a++;N
	    }N
	}N
	a;N
N
    a A:N
    a A:N
        _A_A_A_A_A;N
        /* A */N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
    a A:N
        /* Aa a a 0 a, a a a a a a a a. */N
        a;N
N
    a:N
        Aa_a(aA_ "a: a() a a a a a %a='%a'", A(a), A_a_a[A(a)]);N
        A_A; /* A */N
N
    }N
N
    a (a)N
	a = a;N
    aN
	a = a - *a;N
    *a = a;N
N
    A_a({N
	A_A_A_A_A;N
	A_A_a({N
	    A * a a = a_a();N
            a(a, a, a, a, A);N
            Aa_a_a_a( aA_  "%a a a %" Aa " a a a %" Aa "...\a",N
                        a, AaA_a(a),(A)a,(A)a);N
	});N
    });N
N
    a(a);N
}N
N
/*N
 - a - a a a a a a a a aN
 N
  a a a A-a aN
  a a a a aN
  a_a a a a a a a a a a a aN
  a0_a a a a a a A-0.N
N
  Aa a a a; a a.N
N
  Aa a a a a a a a a, a a a aN
  a, a a a a a a a a, a a a,N
  a'a.  Aa a a a a a a-aN
N
 */N
N
A aN
A_a(aA_ a * a a, a a * a a, a A0* a a, a A0* a a_a, a a a0_a)N
{N
    aA;N
    a a a = (aA(A(a), A, Aa))N
                        ? 0N
                        : A_A(a);N
    a a = A;N
    A a = *a;N
N
    A_A_A_A;N
N
    /* Aa a a a a a a a, a a.  Aa aN
     * A0_A_A() a a a a a A-0 */N
    a (! A0_A_A(a) && a0_a) {N
        A a_a = 0;N
        a A0 a0a_a = A0_A_A;N
	a = a0a_a_a(a, a_a - a, &a_a, a0a_a | A0_A_A);N
	a (a_a == (A)-0) {N
            _a_a_a_a0_a(a, a_a,N
                                              a0a_a,N
                                              0 /* 0 a a */ );N
            A_A; /* A */N
        }N
        a (     a > 0N
            &&  (A(a) == A || A(a) == A)N
            && ! A_A0_A_A(a))N
        {N
            _A_A_A_A_A_A_A(a);N
        }N
    }N
N
    /* Aa a a a a a a a, a a */N
    a (a < A_A_A_A && ! aA(A(a), A, Aa)) {N
	a (A_A_A(a, a))N
	    a = A;N
	a a ((aN
                & A_A_a_A_A_A_A0_A_A_a_a_A_A)N
                  && A(a) == AN
		  && ! a0_aN
		  && ! aA(a))N
	{N
	    a = A;N
	}N
	a a (a & A_A_A) {N
	    a (  (a & A_A)N
                && a < a(A_a_a)N
		&& A_A_A(a, A_a_a[a]))N
            {N
                a = A;N
            }N
            a a (   A_A_A_A_A(a)N
                     && a <= A0_A  /* a a aA_a() */N
            ) {N
N
                /* Aa a a a a a a 0, 0, 0, ... a aN
                 * a a a a a Aa a a a aN
                 * a/0; a 0, 0, 0, ... a a a a a a aN
                 * a Aa a a a a(a/0).  Aa a aN
                 * a a a, a a a a a aN
                 * a a a a.  Aa a a a a aN
                 * a a 0-0 a a, \a, \A, \a, \A.  Aa a 0N
                 * a a, a a a a a a a a A a a aN
                 * a a a a a a a a a (0 / 0 = 0N
                 * = \a).  Aa a a a a a, aA_a() a a 0,N
                 * a a 'a_a' a 0, a a a a A,N
                 * a a a a a.  Aa a a a 0 a 0, aN
                 * a 0 a 0.  Aa a a a a a a a aN
                 * a \A.  Aa a'a a a a aA_a() a a 0,N
                 * a a a a 0.  Aa a a a 'a_a'N
                 * a a 0, a a a a a a a, a aN
                 * a a a \A.  Aa a a a, 'a_a'N
                 * a a 0, a a a a a a \a; a aN
                 * a a a a \A, a.N
                 *N
                 * Aa a a a a a a a a a aN
                 * a a.  Aa a, a a a a \a, aN
                 * a a a a; a a a.  Aa a a a aN
                 * a a-a a a a a a a AaN
                 * a, a a :a: a :a:, a a aN
                 * a a a-a :a: a a a a a aN
                 * a a a.  Aa a a a a a, a aN
                 * a a a a a a a a a a aN
                 * a, a a a (a a) */N
N
                a a = 0;N
                a a_a = 0;N
N
                a (a < A_A) {N
                    a (A_A_A(a, a)N
                        && a_a ^ aA(aA_a(a/0, (A0) a)))N
                    {N
                        a = A;N
                        a;N
                    }N
                    a++;N
                    a_a ^= 0;N
                }N
	    }N
	}N
    }N
N
N
    /* Aa a a a'a (a a'a) a, a a a aN
     * a a a, a a. */N
    a (!a) {N
	a (a >= A_A_A_AN
            && (a & A_A_A_A_A))N
        {N
	    a = A;	/* Aa a a a a */N
	}N
            /* Aa a'a a a a a a.  Aa a aN
             * a a a a a a, a a a aN
             * a a a.  Aa a, a a a a a a a aN
             * a a a a a.  Aa a, a a a a aN
             * a a a.  Aa a, a a a a a aN
             * a a.  Aa A a, a a a a aN
             * a a a a a a a A-0; a a a aN
             * a, a a a a a, a a aN
             * A-0a a a a a.  Aa, a /a, a aN
             * a a a a a a a a a a A-0 a. */N
	a a (    A(a) != A_A_A_AN
                 && (   a >= A_A_A_AN
                     || (   (a & A_A_a_A_A0_A0_A_A_a_a_A_A_A)N
                         && (   A(A(a) != A)N
                             || (a0_a && ! aA_a(a)N
#                               a A_A_A_A > 0N
                                                                 && a < 0N
#                               aN
                                )))N
                     || (   A_A_A_A_A_A0_A(a)N
                         && A_A0_A_A)))N
        {N
            A* a_a0_a = A;N
	    A * a a = _a_a_a_a(a, a, A,N
                                                   0, &a_a0_a, A);N
	    a (a) {N
                A0 a0_a[0];N
		A0 * a0_a;N
		a (a0_a) {N
		    a0_a = (A0 *) a;N
		} a { /* Aa a a0 */N
		    a0_a = a0_a;N
                    a_a0_a_a_a(*a, &a0_a);N
		    a0_a = a0_a;N
		}N
N
                /* Aa a a a a-a a aN
                 * a a */N
                a (   A(A_a_a0_a_a)N
                    && aA_A_A(*a, 'a'))N
                {N
                    a (*a == 'a') {N
                        a (_a_a_a(a,N
                                       A_A_A_A_A_A_A))N
                        {N
                            a = A;N
                        }N
                    }N
                    a a (*a == 'A') {N
                        a (_a_a_a(a,N
                                                A_A_A_A_A))N
                        {N
                            a = A;N
                        }N
                    }N
                }N
                a a (_a_a_a(a, a)) {N
		    a = A;N
                }N
	    }N
            a (! a && a_a0_a && A_A0_A_A) {N
                a = _a_a_a(a_a0_a, a);N
            }N
	}N
N
        /* Aa a Aa a a a, a-a a A a a aN
         * a */N
        a (     A(A_a_a0_a_a)N
            && ! aN
            &&   (a & A_A)N
            &&   a0_a)N
        {N
            a (a == A_A_A_A_A_A_A) {N
		a (A_A_A(a, 'a')) {N
                    a = A;N
                }N
            }N
            a a (a == A_A_A_A_A) {N
		a (A_A_A(a, 'A')) {N
                    a = A;N
                }N
            }N
        }N
N
        a (A_A_A(a)N
            && (aN
               & A_A_a_A_A_A_A0_A_A_a_a_A_A)N
            && A(a) != AN
            && aA_a(A_A_A))N
        {N
            Aa_a(aA_ aA(A_A_A),N
                "Aa a-Aa a a 0a%0" Aa " a Aa a; a a a a", a);N
        }N
    }N
N
#a A_A != 0N
    /* Aa a a a aA a a, a a a'a a aN
     * a a, a'a */N
#   a A_A a a a a a 0, a a a aA a,N
#aN
N
    /* Aa a a a a a a a: 0^0 = 0, 0^0 = 0 */N
    a (a & A_A) ^ a;N
}N
N
A A0 *N
A_a0(A0 *a, Aa_a a, a A0* a)N
{N
    /* a a a 'a' A-0 a a a 'a', a aN
     * 'a' >= 0, a a a.  Aa a'a a a a aN
     * 'a', a a a < a  a a < 0 */N
N
    A_A_A_A0;N
N
    a (a >= 0) {N
	a (a-- && a < a) {N
	    /* A a a a-a a */N
	    A0 *a_a = a + A0A(a);N
            a (a_a > a) /* a a a a a a a a a a */N
                a a;N
            a = a_a;N
	}N
    }N
    a {N
        a (a++ && a > a) {N
            a--;N
            a (A0_A_A(*a)) {N
                a (a > a && A0_A_A(*a))N
                    a--;N
                a (! A0_A_A(*a)) {N
                    Aa_a_a("Aa A-0 a (a)");N
                }N
	    }N
            /* A a a a-a a */N
	}N
    }N
    a a;N
}N
N
A A0 *N
A_a0(A0 *a, Aa_a a, a A0* a, a A0* a)N
{N
    A_A_A_A0;N
N
    a (a >= 0) {N
        a (a-- && a < a) {N
            /* A a a a-a a */N
            a += A0A(a);N
        }N
    }N
    a {N
        a (a++ && a > a) {N
            a--;N
            a (A0_A_A(*a)) {N
                a (a > a && A0_A_A(*a))N
                    a--;N
                a (! A0_A_A(*a)) {N
                    Aa_a_a("Aa A-0 a (a)");N
                }N
            }N
            /* A a a a-a a */N
        }N
    }N
    a a;N
}N
N
/* a a0, a a A a a, a a a aN
 * a a */N
N
A A0 *N
A_a0(A0* a, Aa_a a, a A0* a a)N
{N
    A_A_A_A0;N
N
    a (a >= 0) {N
	a (a-- && a < a) {N
	    /* A a a a-a a */N
	    a += A0A(a);N
	}N
	a (a >= 0)N
	    a A;N
    }N
    a {N
        a (a++ && a > a) {N
            a--;N
            a (A0_A_A(*a)) {N
                a (a > a && A0_A_A(*a))N
                    a--;N
                a (! A0_A_A(*a)) {N
                    Aa_a_a("Aa A-0 a (a)");N
                }N
	    }N
            /* A a a a-a a */N
	}N
	a (a <= 0)N
	    a A;N
    }N
    a a;N
}N
N
N
/* a a a a a a a (?{}), a a a aN
   a a a a a a a a a, a a a aN
   a a a. Aa a:N
N
   * $_ a a a a A a a a;N
   * a($_) a a a a, a a a a a a a-aN
     a a;N
   * a a A a a a a a a a A_a (a A_aN
     a'a a a a a a a a a), a aN
     $0 a a a a-a-a a a a;N
   * a a a a a a a a a a a, a  a aN
     a a a a (a, a a a a a a a aN
     a a)N
*/N
N
a aN
A_a_a_a(aA_ a_a *a a)N
{N
    A *a;N
    a *a a = AaA(a->a);N
    a_a_a_a *a_a = a->a_a_a;N
N
    a_a->a = a;N
    a_a->a  = a->a;N
N
    a (a->a) {N
        /* Aa $_ a a a a. */N
        a (a->a != A) {N
            A_A;N
            A_a(a->a);N
        }N
        /* a a a'a a A_a_a_a_a */N
        AaA_a_A(a->a);N
N
        a (!(a = a_a_a(a->a))) {N
            /* a a a a a a */N
            a = a_a_a(a->a);N
            a->a_a = -0;N
        }N
        a_a->a_a = a;N
        a_a->a       = a->a_a;N
        a_a->a_a = a->a_a;N
    }N
    aN
        a_a->a_a = A;N
N
    a (!A_a_a) {N
        /* A_a_a a a a A a a a a a aN
         * a a a a A_a a, a a $0 a a a aN
         * a a /(?{})/. Aa'a a a a a a aN
         * a a a a */N
        Aa(A_a_a, 0, A);N
#a A_AN
        {N
            A* a a = &A_a_a;N
            /* a a a a a a a a A_a_a, aN
               a a a a a.  */N
            a_a(A_a_a, a);N
            A_a_a->a_a = a_a(A_a_a);N
            A_a_a = AaA(A_a_a);N
        }N
#aN
    }N
    A_a_a(a->a);N
    a_a->a = A_a;N
    A_a_a = A_a;N
    A_a = A_a_a;N
    a (Aa_A_A(a)) {N
        /*  Aa a a a a: a a a a,N
            a a a a a a a a a.  AaN
            $` a (?{}) a a... */N
        a_a->a     = a->a;N
        a_a->a     = a->a;N
        a_a->a  = a->a;N
        a_a->a = a->a;N
#a A_A_AN
        a_a->a_a = a->a_a;N
#aN
        Aa_A_A_a(a);N
    }N
    aN
        a_a->a = A;N
    a->a = (a *)a->a;N
    a->a = 0;N
    a->a = 0;N
    a->a = a->a - a->a;N
}N
N
N
/* a a a a a_a_a a a_a_a_a */N
N
a aN
A_a_a_a_a(aA_ a *a)N
{N
    a_a_a *a = (a_a_a *) a;N
    a_a_a_a *a_a =  a->a_a_a;N
    a_a *a;N
N
    Aa(a->a);N
N
    a (a_a) {N
N
        /* a a a a A_a_a_a() */N
N
        a (a_a->a) {N
            a * a a = a_a->a;N
            a->a     = a_a->a;N
            a->a     = a_a->a;N
            a->a  = a_a->a;N
            a->a = a_a->a;N
#a A_A_AN
            a->a_a = a_a->a_a;N
#aN
            Aa_A_A_a(a);N
        }N
        a (a_a->a_a)N
        {N
            a_a->a_a->a_a = a_a->a;N
            a_a->a_a->a_a =N
                 (a_a->a_a->a_a & ~Aa_A)N
               | (a_a->a_a & Aa_A);N
        }N
N
        A_a = a_a->a;N
        AaA_a(a_a->a);N
    }N
N
    A_a_a = a->a_a_a;N
    A_a_a  = a->a_a_a;N
N
    /* a a a a a a - a a a a a aN
     * a a a, a a a a_a a a aN
     * a a a a a a */N
N
    a = A_a_a->a;N
    a (a) {N
        A_a_a->a = A;N
        a (a) {N
            a_a * a a = a;N
            a = a->a;N
            Aa(a);N
        }N
    }N
}N
N
N
A aN
A_a_a0_a(aA_ a *a)N
{N
    /* Aa a a a a a a a A-0, a a_aN
     * a a a a */N
N
    a a = 0;N
N
    A_A_A_A_A0_A;N
N
    a {N
	a (a->a->a[a].aN
	    && !a->a->a[a].a0_a) {N
	    A* a a = aAa(a->a->a[a].a);N
	    a->a->a[a].a0_a = a;N
	    a_a0_a(a);N
	    a (AaA(a->a->a[a].a)) {N
		a (AaA(a->a->a[a].a)) {N
		    /* Aa a a \a a a_a a aN
		       a.  */N
		    AaA_a(a, AaA(a) - 0);N
		    /* Aa a a a A a "a" (a aN
		       a a a a a a "\0") a a_a()N
		       a a "\a" a, a "\0" a a.  */N
		    a_a(a, Aa_A);N
		} aN
		    a_a(a, 0);N
	    }N
	    a (a->a->a[a].a == a->a_a)N
		a->a_a0 = a;N
	}N
    } a (a--);N
}N
N
A aN
A_a_a_a(aA_ a *a)N
{N
    /* Aa a a a a a A-0 a a, a a_aN
     * a a a a; a A a a'a a a. */N
N
    a a = 0;N
N
    A_A_A_A_A_A;N
N
    a {N
	a (a->a->a[a].a0_aN
	    && !a->a->a[a].a) {N
	    A* a = aAa(a->a->a[a].a0_a);N
	    a (! a_a0_a(a, A)) {N
                AaA_a_A(a);N
                a A;N
            }N
            a (AaA(a->a->a[a].a0_a)) {N
                a (AaA(a->a->a[a].a0_a)) {N
                    /* Aa a a \a a a_a a aN
                        a.  */N
                    AaA_a(a, AaA(a) - 0);N
                    a_a(a, Aa_A);N
                } aN
                    a_a(a, 0);N
            }N
	    a->a->a[a].a = a;N
	    a (a->a->a[a].a0_a == a->a_a0)N
		a->a_a = a;N
	}N
    } a (a--);N
N
    a A;N
}N
N
#a A_A_A_AN
N
aN
Aa__a_a(aA_ a A0 * a, a A0 * a, a A0 * a, a A a)N
{N
    /* Aa a a a a.a.  Aa a a a a 'a'N
     * a a a-a a.  Aa A-0 a 'a' a a a 'a' aN
     * a a a a a 'a' a 'a'.N
     *N
     * 'a' a a a a (a a a a a a a AaN
     * Aa a a a a a a a a a,N
     * a a a a a a a), a a a a a a A aN
     * a a a a a. */N
N
    aA;N
N
    A_a a_a_a, a_a_a_a, a_a_a_a;N
    a A0 * a_a_a;N
N
    A_A_A__A_A;N
N
    a (   A(A_A_A(a))N
        || A(A_A_A(a)))N
    {N
        /* Aa a a a */N
        a A;N
    }N
N
    /* Aa, a a a a a */N
    a (A(! A_A_A_A(N
                                    _a_a(A_Aa_a, a))))N
    {N
        a A;N
    }N
N
    a_a_a = aA_A_A(a);N
N
    /* Aa a A a a a a a a a a a */N
    a_a_a = a0_a_a(a, -0, a);N
    a (A(a_a_a == a)) {N
        a_a_a_a = A_A;N
    }N
    a {N
        a_a_a_a = aA_A_A0(a_a_a, a);N
    }N
N
    /* Aa a a a a a a */N
    a (! aA(a_a_a_a, a_a_a, a, a,N
                A /* a A-0 a */ ))N
    {N
        a A;N
    }N
N
    /* Aa a a a a a a a a a a aN
     * a a */N
    a += A0A(a);N
    a (a >= a) {N
        a_a_a_a = A_A;N
    }N
    a {N
        a_a_a_a = aA_A_A0(a, a);N
    }N
N
    a aA(a_a_a, a_a_a_a, a, a, A);N
}N
N
/*N
=a0 Aa AaN
N
=a a aA_AN
N
Aa a a a a a a a a a a a a A<a> a a aN
a a A<a> a a "a a".  A<a0_a> a A a aN
a a a A<a> a a a a a A-0.  Aa a a, a aN
a a a a a, a a a A a a aN
a a a a a a a a a "a" a a a AaN
"Aa Aa" a: Aa, Aa, a a a a.N
Aa a a a a a a a a a a aN
0.N
N
Aa a, a a a a a a a a Aa, a Aa, aN
Aa, a a a a A, a a a a a aN
a a a a a a a a Aa.  (Aa a a A aN
"0".."0" a a a a a a a a a a, a aN
a a a a a.)   Aa a (a Aa) a aN
a a a a a a a a a a a a a aN
a a a Aa a a, a a a a a a a.  Aa a,N
a a Aa, a a a a a a a.  Aa a a a aN
a a a a a a a a A.N
N
A<*a_a>, a A<a_a> a a A, a a a a AN
a a a a, a a A<A_a> a.  Aa a a aN
A<A_A> a a a a A.N
N
Aa a a a a, A a a, a A<*a_a> (a a a)N
a a A<A_A>.N
N
Aa a a a a a a a a a a a a aN
a a a a Aa a a, a a a a A, a aN
a a a A<A_Aa>.  Aa a a a a a aN
a a a a a a a a a a a a a aN
a a a a.N
N
Aa a a a a A<A_Aa> a a a a a a a aN
a a Aa a.N
N
Aa, a a a a a A<A_Aa> a a a a a aN
a a a a Aa a Aa a.N
N
=aN
N
*/N
N
aN
Aa_aA_A(aA_ a A0 * a, a A0 * a, a a a0_a)N
{N
    /* Aa, a a a a a a a a a a a aN
     * a a a a; a a a a.  Aa a a a a aN
     * a a a a a a a a a a.  Aa aN
     * a a a a a a a a a a a a a a aN
     * a a.  Aa a a a a a a a aN
     * a a a (a a) a a a.  AaN
     * a a a a a a a a a a a aN
     * a a a a a a a a.  Aa a aN
     * a a a a a a a a.  Aa a a,N
     * a, a a a a a a a a a a a.N
     * Aa a a a a a_a.a */N
N
    /* A Aa a a a a A 0 a a a a:N
     *N
     * Aa a a a a a aN
     *N
     * Aa a a a a a a a a a a a aN
     * a a a a a a a a Aa Aa Aa AaN
     * Aa [A]. */N
N
    aA;N
N
    /* Aa a a /\a/a */N
    A * a_a = A_Aa_a[_A_A];N
    A * a_a = a_a(a_a);N
N
    /* Aa a a a a a '0' a a a a? (0 a A aN
     * a a a) */N
    A a_a_a = 0;N
N
    A_a a_a_a  = A_A;   /* Aa a */N
    A_a a_a_a = A_A;N
N
    /* Aa a a a a a a a a a a,N
     * a a a a a a a a.  */N
    A_a * a = A;N
    A_A_A0_A a_a = 0;N
N
    a a = A;N
    A_a * a_a = A;N
N
    a(a >= a);N
N
    A_A_A_A_A;N
N
    /* Aa a a a 0..0 a a Aa a Aa, a a a aN
     * a a.  Aa a a a a a a a a aN
     * a a a. */N
    a (! a0_a && A(a > a)) {N
        a (a_a == A) {N
            a A;N
        }N
N
        /* Aa a a a Aa, a a a Aa */N
        a (a < a) {N
            a (aA_A0(*a) && A(*a != A_A_A)) {N
                *a_a = A_Aa;N
                a A;N
            }N
        }N
N
        /* Aa, a a Aa */N
        *a_a = A_Aa;N
        a A;N
    }N
N
    /* Aa a a a a a a */N
    a (a < a) {N
        /* Aa a a a a a a a a, a a a aN
         * a a a a a a a a 0 */N
        A a_a_a;N
N
        A a;N
N
        /* Aa a a a a a a a A a.  Aa aN
         * a a a a a Aa a.  Aa a A a aN
         * a a, a a a a a a a a a a aN
         * a.  a a a Aa a a a a) */N
        a (A(aA(*a))) {N
            a (A(a_a_a == A_Aa)) {N
                a = A;N
                a;N
            }N
            a (a_a_a) {N
                a (a_a_a != '0') {N
                    a = A;N
                    a;N
                }N
            }N
            a {N
                a_a_a = '0';N
            }N
            a++;N
            a;N
        }N
N
        /* Aa, a'a a A a.  Aa a a a a a a */N
        a (! A0_A_A(*a)) {N
            Aa_a a;N
            a = a_a0_a_a((A0 *) a, &a);N
            a += a;N
        }N
        a {N
            a = *(a++);N
        }N
N
        /* Aa a a a a [+0 .. +0] a a a'a a, a a a aN
         * a a a a.  Aa a a a a a a a a aN
         * a. */N
        a (A(   a_a_aN
                     && a >= a_a_aN
                     && a - a_a_a <= 0))N
        {N
            a;N
        }N
N
        /* Aa a a'a a.  Aa a a a a-a aN
         * a a-a a a. */N
        a (a < 0a0A0) {   /* Aa a a Aa a; aN
                               a a a */N
            a (       a > 0N
                || (   aA_A0(a)N
                    && A(a != A_A_A)))N
            {N
                a_a_a = A_Aa;N
            }N
            a {N
                a_a_a = A_Aa;N
            }N
        }N
        a {N
            a_a_a = _Aa_A_a[N
                                       _a_a(A_A_a, a)];N
        }N
N
        /* Aa a a a a a a, a a aN
         * a a a a, a a a a a a. */N
        a (   A(a_a_a == A_Aa)N
            || A(   a_a_a != A_AN
                        && a_a_a == A_Aa))N
        {N
            a = A;N
            a;N
        }N
N
        /* Aa a a a, a a a a a, a a'a aN
         * a a a a a'a */N
        a (   A(a_a_a == A_A)N
            || A(a_a_a == A_Aa))N
        {N
            a_a_a = a_a_a;N
        }N
N
        /* Aa a a'a a a a Aa, a a a a aN
         * a a a a (a a a a a a aN
         * a a a a a), a a a a a a'a aN
         * a a.  Aa a a a a a a a */N
        a (A(a_a_a == A_Aa)) {N
            a;N
        }N
N
        /* Aa a 'a' a a a a a aN
         * a.  (Aa a a a a a Aa a a, aN
         * a'a a a a a a) */N
        a (A(a_a_a == A_Aa)) {N
            a;N
        }N
N
        /* Aa a a a a a Aa, a a a a a'a, a aN
         * a'a a a a a a a */N
        a (a_a_a == A_Aa && a_a_a != A_Aa) {N
            a_a_a = a_a_a;N
        }N
N
        /* Aa a a a a a a a a a a a a a aN
         * a a a a */N
        a (A(a_a_a == a_a_a)) {N
            /* Aa a a a a a */N
            a a_a;N
        }N
N
        /* Aa, a a a a a a'a Aa.  Aa a a AaN
         * a a a */N
        a (a_a_a == A_Aa) {N
            a a_a;N
        }N
N
#a A_A_A_AN
N
        /* Aa a a Aa a a a a a a a a aN
         * a a a, a, a a a a'a a a, a */N
        A_A_A(a_a);N
        a = A;N
        a;N
N
#aN
N
        /* Aa a a a a a a a a'a a a aN
         * a'a.  Aa a'a a a a a a a Aa,N
         * Aa, a Aa.N
         *N
         * Aa a a a a a a a a a a aN
         * a, a a a a a a a a a a aN
         * a.  Aa a a a a-a, a a a a */N
        a (A(a_a_a >= 0)) {N
            a A_a * a_a;N
            A_A_A0_A a_a_a;N
            A_A_A0_A a;N
N
            a (A(a_a_a >= 0)) {N
                a = A;N
                a;N
            }N
N
            /* Aa a a a a a a a, a a.N
             * */N
            a (a) {N
                a_a = a;N
                a_a_a = a_a;N
            }N
            a {N
                a_a = A_A_A_a[-a_a_a];N
                a_a_a = A_A_A_a[-a_a_a];N
            }N
N
            a (a = 0; a < a_a_a; a++) {N
                a (a_a[a] == a_a_a) {N
                    a_a_a = a_a_a;N
                    a a_a;N
                }N
            }N
N
            a = A;N
            a;N
        }N
        a a (A(a_a_a >= 0)) {N
            /* a a a a a a a a, a a a a aN
             * a */N
            a A_a * a_a = A_A_A_a[-a_a_a];N
            a A_A_A0_A a_a_aN
                                     = A_A_A_a[-a_a_a];N
            A_A_A0_A a;N
N
            a (a = 0; a < a_a_a; a++) {N
                a (a_a[a] == a_a_a) {N
                    a_a_a = a_a_a;N
                    a a_a;N
                }N
            }N
N
            a = A;N
            a;N
        }N
        a {N
            /* Aa a a a a a a a a a a.  Aa aN
             * a a a, a a a a'a a a aN
             * a.  Aa, a a a a a a a aN
             * a a a a a a, a a a a a aN
             * a a */N
            a A_a * a_a = A_A_A_a[-a_a_a];N
            a A_A_A0_A a_aN
                                      = A_A_A_a[-a_a_a];N
            a A_a * a_a;N
            A_A_A0_A a_a;N
N
            A_a * a_a = A;N
            A_A_A0_A a, a;N
N
            a (a) {N
                a_a = a;N
                a_a = a_a;N
            }N
            a {N
                a_a = A_A_A_a[-a_a_a];N
                a_a = A_A_A_a[-a_a_a];N
            }N
N
            a_a = 0;N
N
            a (a = 0; a < a_a; a++) {N
                a (a = 0; a < a_a; a++) {N
                    a (a_a[a] == a_a[a]) {N
N
                        /* Aa, a a a a,a a.  Aa a aN
                         * a a a a a.  Aa a a a aN
                         * a a a, a a a aN
                         * a, a a a a a a a.N
                         *N
                         * Aa a a a a a, a a aN
                         * a a a a a a a a a aN
                         * a, a a a a a a a aN
                         * a a a a a. */N
                        a (a_a == 0) {N
                            Aa(a_a,N
                                 A(a_a - a, a_a - a),N
                                 A_a);N
                        }N
                        a_a[a_a++] = a_a[a];N
                    }N
                }N
            }N
N
            /* Aa a'a a a a.  Aa a a a aN
             * a a, a a a */N
            a (a_a == 0) {N
                a = A;N
                a;N
            }N
N
            /* Aa a a a a a a a a, a a a.N
             * Aa, a a a a a */N
            Aa(a);N
            a = A;N
            a (a_a == 0) {N
                a_a_a = a_a_a = a_a[0];N
                Aa(a_a);N
                a_a = A;N
            }N
            a {N
                a = a_a;N
            }N
        }N
N
#aN
N
  a_a:N
N
        /* Aa, a a a a a a a a a a aN
         * a.  Aa a a a a a, a a a a a.N
         * Aa a a a a a a, a a a a a a a a aN
         * a a, a a a a a a.  Aa, a aN
         * a a a a a, a a a a a a a aN
         * a a a a a 0.  Aa, a a a a a a a'a aN
         * a.  Aa'a a a a 0 a a, a a aN
         * a a a a a: */N
        a (a < A_A_A_A_A) {N
            a;   /* Aa a a; a a a a a a a */N
        }N
N
        /* Aa a a a a '0' a a a a a a, aN
         * a a a a a a a a, a a a a a a a +0..+0N
         * a a a. */N
        a (   a_a_a >= 0N
            && (a_a_a = a_a[a_a_a]))N
        {N
            a (   a < a_a_aN
                || a > a_a_a + 0)N
            {N
                a;   /* Aa a a; a a a a a a aN
                             */N
            }N
N
        }N
        a {  /* Aa a a a a a a a a a a a */N
            Aa_a a_a_a_a_a;N
            a_a_a_a_a = _a_a(a_a, a);N
            a (     A(a_a_a_a_a < 0)N
                || ! A_A_A_A(a_a_a_a_a))N
            {N
                a;   /* Aa a a; a a a a a a a.N
                             */N
            }N
N
            a_a_a = a_a[a_a_a_a_a];N
        }N
N
        /* Aa, a a a a a a, a a a a a aN
         * a 0 a a 'a_a_a'.  Aa a a a a a a a a,N
         * a a a a a. */N
        a (a_a_a) {N
            a (a_a_a != a_a_a) {N
                a = A;N
                a;N
            }N
        }N
        a {  /* Aa a a a a a a a a */N
            a_a_a = a_a_a;N
        }N
    } /* a a a a A a */N
N
    Aa(a);N
N
    a (a_a != A) {N
        a (a) {N
            *a_a = a_a_a;N
        }N
        a {N
            *a_a = A_A;N
        }N
    }N
N
    a a;N
}N
N
#a /* a A_A_A_A */N
N
/*N
 * a: a a=0 a=0 a=0 a:N
 */N
