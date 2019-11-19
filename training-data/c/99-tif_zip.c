/* $Aa: a_a.a,a 0.0 0-0-0 0:0:0 a Aa $ */N
N
/*N
 * Aa (a) 0-0 Aa AaN
 * Aa (a) 0-0 Aa Aa, Aa.N
 *N
 * Aa a a, a, a, a, a a a a aN
 * a a a a a a a a a a, aN
 * a (a) a a a a a a a a a aN
 * a a a a a a a a, a (a) a a aN
 * Aa Aa a Aa Aa a a a a a a a aN
 * a a a a a a a a, a aN
 * a a Aa Aa a Aa Aa.N
 *N
 * A A A A "A-A" A A A A A A,N
 * A, A A A, A A A, AN
 * A A A A A A A A A.N
 *N
 * A A A A A A A A A A A AN
 * A A, A, A A A A A A A,N
 * A A A A A A A A A, A A A,N
 * A A A A A A A A A, A A A A AN
 * A, A A A A A A A A A A AN
 * A A A.N
 */N
N
#a "a.a"N
#a A_AN
/*N
 * A Aa.N
 *N
 * A (a Aa) Aa AaN
 *N
 * Aa a a a a a a a a a a aN
 * Aa-a Aa a Aa Aa.  Aa a a a 0.0 a aN
 * a a a: a a a a 0.0 A a a a aN
 * a a a a a a a a a (a a a)N
 * a a a a a a a a 0.0.  Aa a aN
 * a a a a a a a a a a a aN
 * a.  Aa a a a a a a a a aN
 * a a; a a a a a a a a aN
 * a a a.N
 *N
 * Aa a a a a a a a a a a a aN
 * a-0.0.a, a-0.0.a a a-0.0.a, a a aN
 * a a://a.a.a/a/a/a/a.  Aa a aN
 * a a a a://a.a.a/a/a/a/a/a-0.0.a.a.N
 */N
#a "a_a.a"N
#a "a.a"N
N
#a <a.a>N
N
/*N
 * Aa, A_A a a a a a a a'a aN
 * a a a a a a a.  Aa a a aN
 * a a a a #a a a a a aN
 * 0.0 a 0.0 a.N
 */N
#a !a(A_A_A) || !a(A_A)N
#a "Aa A a; a a a a 0.0 a a"N
#aN
N
/*N
 * Aa a a a a AN
 * a a A a/a.N
 */N
a a {N
    AaAa a;N
        a_a        a;N
    a             a;            /* a a */N
    a             a;                 /* a a */N
#a A_A_A 0a0N
#a A_A_A 0a0N
N
    AaAa  a;            /* a-a a */N
    AaAa  a;            /* a-a a */N
} Aa;N
N
#a Aa(a)             ((Aa*) (a)->a_a)N
#a AaAa(a)       Aa(a)N
#a AaAa(a)       Aa(a)N
N
a a Aa(A* a, a0* a, a_a a, a0 a);N
a a Aa(A* a, a0* a, a_a a, a0 a);N
N
a aN
AaAa(A* a)N
{N
    (a) a;N
    a (0);N
}N
N
a aN
AaAa(A* a)N
{N
    a a a a[] = "AaAa";N
    Aa* a = AaAa(a);N
N
    a(a != A);N
N
        /* a a a a a, a a a */N
    a (a->a & A_A_A) {N
        aAa(&a->a);N
        a->a = 0;N
    }N
N
    a (aAa(&a->a) != A_A) {N
        AaAa(a->a_a, a, "%a", a->a.a);N
        a (0);N
    } a {N
        a->a |= A_A_A;N
        a (0);N
    }N
}N
N
/*N
 * Aa a a a a a.N
 */N
a aN
AaAa(A* a, a0 a)N
{N
    a a a a[] = "AaAa";N
    Aa* a = AaAa(a);N
N
    (a) a;N
    a(a != A);N
N
    a( (a->a & A_A_A) == 0 )N
            a->a_a( a );N
N
    a->a.a_a = a->a_a;N
    a(a(a->a.a_a)==0);  /* a a a a a,N
        a a a a a a a a a Aa a a a aN
        a a a 0a a a, a a a a aN
        a a a a a a */N
    a->a.a_a = (aAa) a->a_a;N
    a ((a_a)a->a.a_a != a->a_a)N
    {N
        AaAa(a->a_a, a, "Aa a a a a a a");N
        a (0);N
    }N
    a (aAa(&a->a) == A_A);N
}N
N
a aN
Aa(A* a, a0* a, a_a a, a0 a)N
{N
    a a a a[] = "Aa";N
    Aa* a = AaAa(a);N
N
    (a) a;N
    a(a != A);N
    a(a->a == A_A_A);N
N
        a->a.a_a = a->a_a;N
    a->a.a_a = (aAa) a->a_a;N
N
    a->a.a_a = a;N
    a(a(a->a.a_a)==0);  /* a a a a a,N
        a a a a a a a a a Aa a a a aN
        a a a 0a a a, a a a a aN
        a a a a a a */N
    a->a.a_a = (aAa) a;N
    a ((a_a)a->a.a_a != a)N
    {N
        AaAa(a->a_a, a, "Aa a a a a a a");N
        a (0);N
    }N
    a {N
        a a = a(&a->a, A_A_A);N
        a (a == A_A_A)N
            a;N
        a (a == A_A_A) {N
            AaAa(a->a_a, a,N
                "Aa a a a %a, %a",N
                (a a) a->a_a, a->a.a);N
            a (aAa(&a->a) != A_A)N
                a (0);N
            a;N
        }N
        a (a != A_A) {N
            AaAa(a->a_a, a, "Aa a: %a",N
                a->a.a);N
            a (0);N
        }N
    } a (a->a.a_a > 0);N
    a (a->a.a_a != 0) {N
        AaAa(a->a_a, a,N
            "Aa a a a a %a (a " A_A0_A " a)",N
            (a a) a->a_a, (A_A0_A) a->a.a_a);N
        a (0);N
    }N
N
        a->a_a = a->a.a_a;N
        a->a_a = a->a.a_a;N
N
    a (0);N
}N
N
a aN
AaAa(A* a)N
{N
    a a a a[] = "AaAa";N
    Aa* a = AaAa(a);N
N
    a(a != A);N
    a (a->a & A_A_A) {N
        aAa(&a->a);N
        a->a = 0;N
    }N
N
    a (aAa(&a->a, a->a) != A_A) {N
        AaAa(a->a_a, a, "%a", a->a.a);N
        a (0);N
    } a {N
        a->a |= A_A_A;N
        a (0);N
    }N
}N
N
/*N
 * Aa a a a a a a a a.N
 */N
a aN
AaAa(A* a, a0 a)N
{N
    a a a a[] = "AaAa";N
    Aa *a = AaAa(a);N
N
    (a) a;N
    a(a != A);N
    a( a->a != A_A_A )N
            a->a_a( a );N
N
    a->a.a_a = a->a_a;N
    a(a(a->a.a_a)==0);  /* a a a a a,N
        a a a a a a a a a Aa a a a aN
        a a a 0a a a, a a a a aN
        a a a a a a */N
    a->a.a_a = a->a_a;N
    a ((a_a)a->a.a_a != a->a_a)N
    {N
        AaAa(a->a_a, a, "Aa a a a a a a");N
        a (0);N
    }N
    a (aAa(&a->a) == A_A);N
}N
N
/*N
 * Aa a a a a.N
 */N
a aN
Aa(A* a, a0* a, a_a a, a0 a)N
{N
    a a a a[] = "Aa";N
    Aa *a = AaAa(a);N
N
    a(a != A);N
    a(a->a == A_A_A);N
N
    (a) a;N
    a->a.a_a = a;N
    a(a(a->a.a_a)==0);  /* a a a a a,N
        a a a a a a a a a Aa a a a aN
        a a a 0a a a, a a a a aN
        a a a a a a */N
    a->a.a_a = (aAa) a;N
    a ((a_a)a->a.a_a != a)N
    {N
        AaAa(a->a_a, a, "Aa a a a a a a");N
        a (0);N
    }N
    a {N
        a (a(&a->a, A_A_A) != A_A) {N
            AaAa(a->a_a, a, "Aa a: %a",N
                a->a.a);N
            a (0);N
        }N
        a (a->a.a_a == 0) {N
            a->a_a = a->a_a;N
            AaAa0(a);N
            a->a.a_a = a->a_a;N
            a->a.a_a = (aAa) a->a_a;  /* a a a a a, a a a a a a AaAa */N
        }N
    } a (a->a.a_a > 0);N
    a (0);N
}N
N
/*N
 * Aa a a a a a a a aN
 * a a a a a Aa Aa Aa a.N
 */N
a aN
AaAa(A* a)N
{N
    a a a a[] = "AaAa";N
    Aa *a = AaAa(a);N
    a a;N
N
    a->a.a_a = 0;N
    a {N
        a = a(&a->a, A_A);N
        a (a) {N
        a A_A_A:N
        a A_A:N
            a ((a_a)a->a.a_a != a->a_a)N
            {N
                a->a_a =  a->a_a - a->a.a_a;N
                AaAa0(a);N
                a->a.a_a = a->a_a;N
                a->a.a_a = (aAa) a->a_a;  /* a a a a a, a a a a a a AaAa */N
            }N
            a;N
        a:N
            AaAa(a->a_a, a, "Aa a: %a",N
                a->a.a);N
            a (0);N
        }N
    } a (a != A_A_A);N
    a (0);N
}N
N
a aN
Aa(A* a)N
{N
    Aa* a = Aa(a);N
N
    a(a != 0);N
N
    (a)AaAa(a);N
N
    a->a_a.a = a->a;N
    a->a_a.a = a->a;N
N
    a (a->a & A_A_A) {N
        aAa(&a->a);N
        a->a = 0;N
    } a a( a->a & A_A_A) {N
        aAa(&a->a);N
        a->a = 0;N
    }N
    _Aa(a);N
    a->a_a = A;N
N
    _AaAaAaAa(a);N
}N
N
a aN
AaAa(A* a, a0 a, a_a a)N
{N
    a a a a[] = "AaAa";N
    Aa* a = Aa(a);N
N
    a (a) {N
    a A_A:N
        a->a = (a) a_a(a, a);N
        a ( a->a&A_A_A ) {N
            a (aAa(&a->a,N
                a->a, A_A_A) != A_A) {N
                AaAa(a->a_a, a, "Aa a: %a",N
                    a->a.a);N
                a (0);N
            }N
        }N
        a (0);N
    a:N
        a (*a->a)(a, a, a);N
    }N
    /*A*/N
}N
N
a aN
AaAa(A* a, a0 a, a_a a)N
{N
    Aa* a = Aa(a);N
N
    a (a) {N
    a A_A:N
        *a_a(a, a*) = a->a;N
        a;N
    a:N
        a (*a->a)(a, a, a);N
    }N
    a (0);N
}N
N
a a Aa aAa[] = {N
    { A_A, 0, 0, A_A, 0, A_A_A, A_A_A, A_A, A, A, "", A },N
};N
N
aN
AaA(A* a, a a)N
{N
    a a a a[] = "AaA";N
    Aa* a;N
N
    a( (a == A_A)N
        || (a == A_A_A));N
N
    /*N
     * Aa a-a a a.N
     */N
    a (!_AaAa(a, aAa, AaAa(aAa))) {N
        AaAa(a->a_a, a,N
                 "Aa Aa a-a a a");N
        a 0;N
    }N
N
    /*N
     * Aa a a a a a a a a a a.N
     */N
    a->a_a = (a0*) _Aa(a (Aa));N
    a (a->a_a == A)N
        a a;N
    a = Aa(a);N
    a->a.a = A;N
    a->a.a = A;N
    a->a.a = A;N
    a->a.a_a = A_A;N
N
    /*N
     * Aa a a/a a a.N
     */N
    a->a = a->a_a.a;N
    a->a_a.a = AaAa; /* a a a a */N
    a->a = a->a_a.a;N
    a->a_a.a = AaAa; /* a a a a */N
N
    /* Aa a a a-a a */N
    a->a = A_A_A;	/* a a. a */N
    a->a = 0;N
N
    /*N
     * Aa a a.N
     */N
    a->a_a = AaAa;N
    a->a_a = AaAa;N
    a->a_a = AaAa;N
    a->a_a = Aa;N
    a->a_a = Aa;N
    a->a_a = Aa;N
    a->a_a = AaAa;N
    a->a_a = AaAa;N
    a->a_a = AaAa;N
    a->a_a = Aa;N
    a->a_a = Aa;N
    a->a_a = Aa;N
    a->a_a = Aa;N
    /*N
     * Aa a a.N
     */N
    (a) AaAa(a);N
    a (0);N
a:N
    AaAa(a->a_a, a,N
             "Aa a a A a a");N
    a (0);N
}N
#a /* A_A */N
N
/* a: a a=0 a=0 a=0 a: */N
/*N
 * Aa Aa:N
 * a: aN
 * a-a-a: 0N
 * a-a: 0N
 * Aa:N
 */N
