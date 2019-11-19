/*N
 * Aa (A) Aa Aa Aa, Aa. ("A")N
 *N
 * Aa Aa Aa Aa a a a a a a a Aa AaN
 * Aa, a. 0.0. Aa a a a a A a a a a aN
 * a, Aa a a a a a://a.a/A/0.0/.N
 *N
 * Aa a A a a a a a a aN
 * a a a a.N
 */N
N
/*! \aN
 *N
 * \aN
 * Aa a, a a == A, a a a a a, a a aN
 * a a a.  Aa a != A a a == A, a a a aN
 * a a a a a.  Aa a a A, a a a a.N
 *N
 */N
N
#a <a.a>N
#a <a.a>N
#a <a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>         /* Aa a A/A (a a?) */N
#a <a/a.a>N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
N
#a A_A_A             A_A('A', 'a', 'a', 'a')N
#a A_A_A(a)          A_A_A(a, A_A_A)N
#a A_A_A         A_A('a', 'a', 'a', 'A')N
#a A_A_A(a)      A_A_A(a, A_A_A)N
#a A_A_A     A_A('a', 'a', 'A', 'A')N
#a A_A_A(a)  A_A_A(a, A_A_A)N
#a A_A_A     A_A('a', 'a', 'a', 'A')N
#a A_A_A(a)  A_A_A(a, A_A_A)N
#a A_A_A        A_A('a', 'a', 'a', 'A')N
#a A_A_A(a)     A_A_A(a, A_A_A)N
#a A_A_A        A_A('a', 'a', 'A', '0')N
#a A_A_A(a)     A_A_A(a, A_A_A)N
#a A_A0_A       A_A('a', 'a', 'A', '0')N
#a A_A0_A(a)    A_A_A(a, A_A0_A)N
N
/*!N
 * Aa a 0 a a a, a a a a a a aN
 * a a a a.  A Aa a a a a a a, a.N
 * Aa a a a a a a a a a A/A aN
 * a a a a a a Aa.N
 */N
#a A_A_A       0      /*%< a */N
#a A_A_A       0   /*%< a (0 = 0 a) */N
#a A_A_A        0    /*%< a */N
N
/*%N
 * Aa a a a a a a A a a a a a aN
 * a a a a a a.N
 * A: Aa a a a a a a-a.N
 */N
#a A_A_AN
#a A_A_A        0N
#aN
N
#a A_A              0      /*%< a a a a a */N
#a A_A              0      /*%< a a a a a */N
N
#a A_A_A (-0)      /*%< a a a */N
N
#a A_A_A      (0A*0A)     /*%< 0 Aa */N
N
a A_A(a_a_a) a_a_a;N
a a a_a a_a_a;N
a A_A(a_a_a) a_a_a;N
a a a_a a_a_a;N
a A_A(a_a_a) a_a_a;N
a a a_a a_a_a;N
a a a_a0 a_a0_a;N
N
/*% a a a */N
a a_a {N
	a a                    a;N
N
	a_a_a                     a;N
	a_a_a                     a; /*%< Aa a, a */N
	a_a_a                     a; /*%< Aa a */N
	a_a_a                      *a;N
	a_a_a                     *a;N
N
	a_a_a                  *a;N
	a_a_a                     *a;N
	a_a_a                     *a;N
N
	a_a_a                  a_a;N
	a                             a_a;N
N
	a a                    a;N
	a a                    a;N
N
	a_a_a                     a;N
	a_a_a                  *a;    /*%< a_a_a */N
	a_a_a                  *a;   /*%< a_a_a */N
	a_a_a                  *a;   /*%< a_a_a */N
	a_a_a                  *a;    /*%< a_a_a */N
	a_a_a                  *a;   /*%< a_a_a */N
	a_a_a                  *a;   /*%< a_a_a */N
	a_a_a                  *a;   /*%< a_a_a */N
N
	/*!N
	 * Aa a a a a a.N
	 *N
	 * A  Aa a a-a a a a a a a?N
	 */N
	a a			a;N
	a_a_a                     a;N
	a a			a;N
	a_a_a               *a;N
	a_a_a               *a;N
	a_a_a                     *a;N
	a                   *a_a;N
	a a                    *a_a;N
N
	/*!N
	 * Aa a a a a a.N
	 *N
	 * A  Aa a a-a a a a a a a?N
	 */N
	a a			a;N
	a_a_a                     a;N
	a a			a;N
	a_a_a              *a;N
	a_a_a              *a;N
	a_a_a                     *a;N
	a                   *a_a; /*%< a a */N
	a a                    *a_a;N
N
	a_a_a                     a;N
	a                   a_a;N
	a                   a_a;N
	a_a_a                 a;N
	a_a_a			a;N
	a			a_a;N
	a_a_a			a;N
	a			a_a;N
N
	a0_a			a;N
	a0_a			a_a;N
	a				a_a;N
	a				a_a;N
	a				a_a;N
};N
N
/*N
 * A  Aa a a.N
 */N
N
/*% a_a a */N
a a_a {N
	a a                    a;N
	a_a_a                      a;N
	a_a_a                      *a;N
	a a                    a_a;N
	a a                    a;N
	a                             a_a;N
	a_a_a                      a;N
	a_a_a                   a_a;N
	a_a_a                   a_a0;N
	a_a_a                   a_a0;N
	a a                    a;N
	a_a_a           a0;N
	a_a_a           a0;N
	a_a_a                 *a_a;N
	a_a_a                 *a_a;N
	a a                    a_a;N
	a a                    a0_a;N
	a_a_a               a;N
	/* a A-a a */N
	a_a_a                   a_a;N
N
	A_A(a_a_a)         a;N
};N
N
/*% Aa a a */N
a a_a {N
	a a                    a;N
	a_a_a                    *a;N
	a_a_a                  a;N
	a a			a;N
};N
N
/*%N
 * Aa a a a a a a a a a_a_a.  Aa a aN
 * a a a a a a a a, a a a a a aN
 * a a a a a a a a a a.N
 */N
a a_a {N
	a a                    a;N
	a_a_a                 *a;N
	A_A(a_a_a)     a;N
};N
N
/*%N
 * Aa a a a a a a a-a a a aN
 * a.  Aa a a a, a a a a a aN
 * a a a a a a a a.N
 */N
a a_a {N
	a a                    a;N
N
	a_a_a                      a;N
	a_a_a                 a;N
	a_a_a                   a_a;N
N
	A_A(a_a_a)     a;N
};N
N
/*%N
 * Aa a a.  Aa a a a a a a a a,N
 * a a a (a "a"), a, a a a a a aN
 * a a.N
 */N
a a_a {N
	a a                    a;N
N
	a                             a_a;N
	a a                    a;N
	a a                    a;N
N
	a a                    a;N
	a a                    a;N
	a0_a			a;N
	a a			a;N
	a a			a;N
	a a			a;N
	a a			a;N
	a a			a;N
	a a			a0;		/* Aa a. */N
N
	a0_a			a;N
	a0_a			a;N
	a0_a			a;N
	a				a;N
N
	/*N
	 * Aa a a Aa0/Aa0 A a a a.N
	 * Aa 0 - A(0) - A0(0) - A(0) = 0.N
	 */N
	a a			a0;		/* Aa */N
	a a			a0;		/* Aa0 a */N
	a a			a0;		/* a A */N
	a_a_a                  a;N
	a a *			a;N
	a0_a			a;N
N
	a_a_a                   a;N
	a_a_a			a;N
	/*%<N
	 * A a 'a' a a a a a aN
	 * a a a a.  Aa a a aN
	 * a a_a_a() a a a a a aN
	 * a a a a a a a a aN
	 * a.N
	 */N
N
	A_A(a_a_a)     a;N
	A_A(a_a_a)        a;N
};N
N
/*N
 * Aa a (a a).N
 */N
a a a_a_a *a_a(a_a_a *, a a_a_a *);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a(a_a_a *,N
						 a_a_a *);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a(a_a_a *,N
						 a a_a_a *,N
						 a_a_a);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a(a_a_a *);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a(a_a_a *);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a(a_a_a *, a_a_a *,N
						 a_a_a);N
a a a_a_a *a_a(a_a_a *);N
a a a a_a(a_a_a *, a_a_a **);N
a a a_a_a *a_a_a_a(a_a_a *,N
						a a_a_a *,N
						a a, a *);N
a a a_a_a *a_a_a_a(a_a_a *,N
						  a a_a_a *,N
						  a *, a_a_a);N
a a a_a(a_a_a *, A *, a a, a_a_a);N
a a a_a_a(A *, a a_a_a *);N
a a a_a_a(A *, a a *a,N
				a_a_a *a,N
				a_a_a *a,N
				a a,N
				a_a_a a);N
a a a_a_a(A *, a_a_a *);N
a a a_a_a(A *, a_a_a *);N
a a a a_a_a(a_a_a *);N
a a a a_a_a(a_a_a *);N
a a a a_a_a(a_a_a *);N
a a a a_a_a(a_a_a *, a_a_a *,N
				    a);N
a a a a_a_a(a_a_a *, a,N
					     a_a_a *, a);N
a a a a_a_a(a_a_a *, a_a_a *);N
a a a_a(a_a_a *, a_a_a *);N
a a a_a(a_a_a *, a_a_a *);N
a a a_a_a_a(a_a_a *, a_a_a, a a);N
a a a_a_a(a_a_a *, a_a_a);N
a a a_a_a(a_a_a *, a_a_a **,N
					a_a_a);N
a a a_a_a_a(a_a_a *);N
a a_a_a a_a(a_a_a *, a_a_a,N
				a_a_a);N
a a_a_a a_a(a_a_a *, a,N
			       a a, a_a_a *a,N
			       a_a_a);N
a a a a_a(a_a_a *);N
a a a(a_a_a *);N
a a a_a(a_a_a *);N
a a a_a(a_a_a *);N
a a a a_a(a_a_a *, a, a_a_a *);N
a a a a_a(a_a_a *, a_a_a *);N
a a a a_a(a_a_a *, a, a_a_a *);N
a a a a_a(a_a_a *, a_a_a *);N
a a a_a(a_a_a **, a_a_a);N
a a a(a *, a);N
a a a_a(A *, a_a_a *, a_a_a *,N
		       a, a_a_a);N
a a a(a_a_a *a, a a a,N
		       a a a, a_a_a a);N
a a a_a(a_a_a *a, a_a_a *a);N
a a a_a(a_a_a *a, a a *a, ...)N
     A_A_A(0, 0);N
N
/*N
 * A A a A_A_* a!N
 */N
#a A_A_A         0a0N
#a A_A_A        0a0N
#a A_A(a)       (((a)->a & A_A_A) != 0)N
#a A_A(a)      (((a)->a & A_A_A) != 0)N
N
#a A_A_A         0a0N
#a A_A_A            0a0N
#a A_A_A            A_A_AN
#a A_A_A            A_A_AN
#a A_A        A_A_AN
#a A_A(a)            (((a)->a & A_A_A) != 0)N
#a A_A(a)       (((a)->a & A_A_A) != 0)N
#a A_A(a)          (((a)->a & A_A_A) != 0)N
#a A_A(a)          (((a)->a & A_A_A) != 0)N
N
/*N
 * Aa a(a) a a.N
 * A A a A_A_a a A_A_A0.N
 */N
#a A_A_A		0a0N
N
/*N
 * Aa a a, a a a a a a a.  Aa a a aN
 * A0 a a a'a a a a a a a A a.N
 */N
#a A_A_A0(a)          (!A_A_A((a)->a0))N
#a A_A_A0(a)          (!A_A_A((a)->a0))N
#a A_A_A(a)       (A_A_A0(a) || A_A_A0(a))N
N
/*N
 * Aa a a a a A a A a.  Aa a a,N
 * a, a a a a a a a a a a a a,N
 * a A0 a A0 a.N
 * Aa: a a a a a a a A0 a a, A_A a A_AN
 * a a a a A_A0 a A_A0, a.N
 */N
#a A_A_A(a)         ((a)->a_a != A)N
#a A_A_A(a)      ((a)->a_a != A)N
#a A_A_A0(a)        (A_A_A(a))N
#a A_A_A0(a)        (A_A_A(a))N
#a A_A(a)           (A_A_A0(a) || A_A_A0(a))N
N
/*N
 * Aa a a a a a a a a a a a a.N
 */N
#a A_A(a)      (((a)->a & A_A_A) != 0)N
#a A_A(a) (((a)->a & A_A_A) != 0)N
#a A_A(a)   (((a)->a & A_A_A) \N
				 != 0)N
#a A_A(a)    (((a)->a & A_A_A) \N
				 != 0)N
#a A_A(a)         (((a)->a & A_A_A) != 0)N
#a A_A(a)         (((a)->a & A_A_A) != 0)N
#a A_A_A(a)      (!A_A_A((a)->a))N
#a A_A(a)     (((a)->a & A_A_A) != 0)N
N
/*N
 * Aa a a a a a a a, a a aN
 * a a a a a a a.N
 */N
#a A_A(a)            (((a) & A_A_A) != 0)N
#a A_A0(a)           (((a) & A_A_A0) != 0)N
N
#a A_A(a, a)     ((a == A_A) || (a < a))N
N
/*N
 * Aa a a a a a a a (a) a a a a a a aN
 * a, a a a a a a a a a a, a a aN
 * a a a.N
 */N
#a A_A(a, a) (!A_A(a) || (((a) & A_A_A) != 0))N
#a A_A(a, a) (!A_A(a) || (((a) & A_A_A) != 0))N
#a A_A(a, a) (A_A(a, a) || A_A(a, a))N
#a A_A(a, a) (((a)->a & A_A) == \N
				    ((a) & A_A_A))N
N
#a A_A             A_A_A(0)N
#a A_A              A_AN
#a A_A             A_A_A(0)N
#a A_A               A_A_A(0)N
#a A_A            A_A_A(0)N
N
#a A_A(a)        ((a) == A_A_A || \N
				 (a) == A_A_A)N
#a A_A(a)              ((a) == A_A_A || \N
				 (a) == A_A_A)N
#a A_A(a)      ((a) == A_A_A || \N
				 (a) == A_A_A)N
#a A_A(a)       ((a) == A_A_A || \N
				 (a) == A_A_A || \N
				 (a) == A_A_A)N
N
/*N
 * Aa a a.N
 */N
N
#a A_A_A                0  /* a a */N
#a A_A_A               0N
#a A_A_A                0N
#a A_A_A               0N
#a A_A_A                0N
#a A_A_A             0N
#a A_A_A               0N
#a A_A_A                    0N
N
a a a *a[] = {N
	"a",N
	"a",N
	"a",N
	"a",N
	"a",N
	"a",N
	"a_a"N
};N
N
#a A(a, a)        (A_A((a), (a)))N
N
a a_a_a a_a_a[A_A_A] = {N
	A_A_A,N
	A_A_A,N
	A_A_A,N
	A_A_A,N
	A_A_A,N
	A_A_A,N
	A_A_A          /* a A a */N
};N
N
a aN
A(a a, a a *a, ...) A_A_A(0, 0);N
N
a aN
A(a a, a a *a, ...) {N
	a_a a;N
N
	a_a(a, a);N
	a_a_a(a_a,N
		       A_A_A, A_A_A,N
		       a, a, a);N
	a_a(a);N
}N
N
/*%N
 * Aa a-a a a.N
 */N
a a aN
a_a(a_a_a *a, a_a_a a) {N
	a (a->a->a != A)N
		a_a_a(a->a->a, a);N
}N
N
/*%N
 * Aa a-a a a.N
 */N
a a aN
a_a(a_a_a *a, a0_a a, a_a_a a) {N
	a (a->a->a != A)N
		a_a_a(a->a->a, a, a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a a) {N
	a (a->a->a != A)N
		a_a_a(a->a->a, a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a a) {N
	a (a->a->a != A)N
		a_a_a(a->a->a, a);N
}N
N
a a a_a_aN
a(a_a_a a) {N
	a (a < A_A_A)N
		a = A_A_A;N
	a (a > A_A_A)N
		a = A_A_A;N
N
	a (a);N
}N
N
/*N
 * Aa a a a a a a a a a a.N
 * Aa a a a a a a a a 0^a aN
 * 0.0 * 0^a, a a a a a 0 a 0.  (Aa a aN
 * a a a a 0^0 a.)N
 */N
a a a a[] = { 0, 0, 0, 0, 0, 0,N
				     0, 0, 0, 0, 0,N
				     0, 0, 0, 0, 0,N
				     0, 0, 0, 0, 0,N
				     0, 0, 0, 0,N
				     0, 0, 0, 0,N
				     0, 0, 0, 0,N
				     0, 0, 0,N
				     0, 0 };N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a *a_a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a a *a_a = A;N
	a a a, a, a;N
N
	a = a->a_a;N
	A(A_A_A(a));N
N
	a_a_a(&a);N
N
	a = a_a_a(a);N
	a (a != A_A_A)N
		a a_a;N
N
	a = 0;N
	a (a[a] != 0 && a->a >= a[a])N
		a++;N
	a (a[a] != 0)N
		a = a[a];N
	aN
		a a;N
N
	A(A_A_A, "a: a_a a %a a", a);N
N
	/*N
	 * Aa a a a?N
	 */N
	a (a = 0; a < a->a; a++)N
		a (a->a_a[a])N
			a a;N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a = a_a_a(a->a, a(*a) * a);N
	a = a_a_a(a->a, a(*a) * a);N
	a = a_a_a(a->a, a(*a) * a);N
	a_a = a_a_a(a->a, a(*a_a) * a);N
	a_a = a_a_a(a->a, a(*a_a) * a);N
	a (a == A || a == A ||N
	    a == A || a_a == A ||N
	    a_a == A)N
		a a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a_a_a(a, a);N
N
	a (a = 0; a < a; a++) {N
		A_A_A(a[a]);N
		A_A_A(a[a]);N
		a_a[a] = a;N
		a_a[a] = 0;N
		a->a++;N
	}N
N
	/*N
	 * Aa a a a a.N
	 */N
	a (a = 0; a < a->a; a++) {N
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			A_A_A(a->a[a], a, a);N
			a = a_a_a(&a->a, a) % a;N
			a->a_a = a;N
			A_A_A(a[a], a, a);N
			A(a->a_a[a] > 0);N
			a->a_a[a]--;N
			a_a[a]++;N
			a = A_A_A(a->a[a]);N
		}N
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			A_A_A(a->a[a], a, a);N
			a = a_a_a(&a->a, a) % a;N
			a->a_a = a;N
			A_A_A(a[a], a, a);N
			A(a->a_a[a] > 0);N
			a->a_a[a]--;N
			a_a[a]++;N
			a = A_A_A(a->a[a]);N
		}N
		A(a->a_a[a] == 0);N
		a->a--;N
	}N
N
	/*N
	 * Aa a a.N
	 */N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
N
	/*N
	 * Aa a a.N
	 */N
	a->a = a;N
	a->a = a;N
	a->a = a;N
	a->a_a = a_a;N
	a->a_a = a_a;N
	a->a = a;N
N
	a_a(a, a->a, a_a_a);N
N
	/*N
	 * Aa a a a a a a->a_a a a.N
	 * Aa a a a a a a a a a.N
	 */N
	a->a_a = a;N
	a a;N
N
 a:N
	a (a != A)N
		a_a_a(a->a, a,N
			    a(*a) * a);N
	a (a != A)N
		a_a_a(a->a, a,N
			    a(*a) * a);N
	a (a != A)N
		a_a_a(a->a, a,N
			    a(*a) * a);N
	a (a_a != A)N
		a_a_a(a->a, a_a,N
			    a(*a_a) * a);N
	a (a_a != A)N
		a_a_a(a->a, a_a,N
			     a(*a_a) * a);N
 a:N
	a_a_a(a);N
N
 a_a:N
	A(&a->a);N
	a (a_a_a(a))N
		a_a(a);N
	A(&a->a);N
	A(A_A_A, "a: a_a a");N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a *a_a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a a *a_a = A;N
	a a a, a, a;N
N
	a = a->a_a;N
	A(A_A_A(a));N
N
	a_a_a(&a);N
N
	a = a_a_a(a);N
	a (a != A_A_A)N
		a a_a;N
N
	a = 0;N
	a (a[a] != 0 && a->a >= a[a])N
		a++;N
	a (a[a] != 0)N
		a = a[a];N
	aN
		a a;N
N
	A(A_A_A, "a: a_a a %a a", a);N
N
	/*N
	 * Aa a a a?N
	 */N
	a (a = 0; a < a->a; a++)N
		a (a->a_a[a])N
			a a;N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a = a_a_a(a->a, a(*a) * a);N
	a = a_a_a(a->a, a(*a) * a);N
	a = a_a_a(a->a, a(*a) * a);N
	a_a = a_a_a(a->a, a(*a_a) * a);N
	a_a = a_a_a(a->a, a(*a_a) * a);N
	a (a == A || a == A ||N
	    a == A || a_a == A ||N
	    a_a == A)N
		a a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a_a_a(a, a);N
N
	a (a = 0; a < a; a++) {N
		A_A_A(a[a]);N
		A_A_A(a[a]);N
		a_a[a] = a;N
		a_a[a] = 0;N
		a->a++;N
	}N
N
	/*N
	 * Aa a a a a.N
	 */N
	a (a = 0; a < a->a; a++) {N
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			A_A_A(a->a[a], a, a);N
			a = a_a_a(&a->a, a) % a;N
			a->a_a = a;N
			A_A_A(a[a], a, a);N
			A(a->a_a[a] > 0);N
			a->a_a[a]--;N
			a_a[a]++;N
			a = A_A_A(a->a[a]);N
		}N
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			A_A_A(a->a[a], a, a);N
			a = a_a_a(&a->a, a) % a;N
			a->a_a = a;N
			A_A_A(a[a], a, a);N
			A(a->a_a[a] > 0);N
			a->a_a[a]--;N
			a_a[a]++;N
			a = A_A_A(a->a[a]);N
		}N
		A(a->a_a[a] == 0);N
		a->a--;N
	}N
N
	/*N
	 * Aa a a.N
	 */N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
N
	/*N
	 * Aa a a.N
	 */N
	a->a = a;N
	a->a = a;N
	a->a = a;N
	a->a_a = a_a;N
	a->a_a = a_a;N
	a->a = a;N
N
	a_a(a, a->a, a_a_a);N
N
	/*N
	 * Aa a a a a a a->a_a a a.N
	 * Aa a a a a a a a a a.N
	 */N
	a->a_a = a;N
	a a;N
N
 a:N
	a (a != A)N
		a_a_a(a->a, a, a(*a) * a);N
	a (a != A)N
		a_a_a(a->a, a, a(*a) * a);N
	a (a != A)N
		a_a_a(a->a, a, a(*a) * a);N
	a (a_a != A)N
		a_a_a(a->a, a_a, a(*a_a) * a);N
	a (a_a != A)N
		a_a_a(a->a, a_a,N
			     a(*a_a) * a);N
 a:N
	a_a_a(a);N
N
 a_a:N
	A(&a->a);N
	a (a_a_a(a))N
		a_a(a);N
	A(&a->a);N
	A(A_A_A, "a: a_a a");N
}N
N
/*N
 * Aa a a a a a a a a a a a a.N
 *N
 * Aa a a A a A a a.N
 */N
a a_a_aN
a_a(a_a_a *a, a_a_a *a,N
		a_a_a a)N
{N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a a = A_A_A;N
	a a_a a;N
	a a0_a a0a;N
	a_a_a a;N
	a_a_a *a;  /* A A A! */N
	a a_a;N
	a a_a_a;N
	a_a_a a;N
	a a a;N
	a_a_a *a;N
N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	a = a->a;N
	A((a == a_a_a) || (a == a_a_a));N
	a (a == a_a_a)N
		a = A_A_A;N
	aN
		a = A_A_A0;N
N
	a_a = A_A_A;N
	a_a_a = a;N
N
	a = A;N
	a = a_a_a(a);N
	a (a == A_A_A) {N
		a_a_a(&a);N
		a_a_a(a, &a);N
		a (a == a_a_a) {N
			A(a.a == 0);N
			a(&a.a_a, a.a, 0);N
			a_a_a(&a, &a, 0);N
			a = &a->a0;N
		} a {N
			A(a.a == 0);N
			a(a0a.a0_a, a.a, 0);N
			a_a_a0(&a, &a0a, 0);N
			a = &a->a0;N
		}N
N
		A(a == A);N
		a = a_a(a, A);N
		a (a == A) {N
			a->a_a |= a;N
			a = A_A_A;N
			a a;N
		}N
N
		a = a_a_a_a(a, &a, &a_a,N
						 a);N
		a (a == A) {N
			a_a_a *a;N
N
			a = a_a(a);N
			a (a == A) {N
				a->a_a |= a;N
				a = A_A_A;N
				a a;N
			}N
N
			a->a = a;N
			a->a = 0;N
			a->a = 0;N
N
			a->a = a;N
N
			a_a(a, a_a, a);N
		} a {N
			a (a = A_A_A(*a);N
			     a != A;N
			     a = A_A_A(a, a))N
				a (a->a == a)N
					a;N
			a (a == A) {N
				a->a++;N
				a->a++;N
				a->a = a;N
			} aN
				a_a(a, &a);N
		}N
N
		a_a_a = a;N
		a (a != A)N
			A_A_A(*a, a, a);N
		a = A;N
		a = a_a_a(a);N
	}N
N
 a:N
	a (a != A)N
		a_a(a, &a);N
N
	a (a_a != A_A_A)N
		A(&a->a[a_a]);N
N
	a (a->a == a_a_a ||N
	    a->a == a_a_a)N
		a->a = A_A_A;N
	a a (a->a == a_a_a)N
		a->a = 0;N
	aN
		a->a = a(a->a);N
N
	a (a == a_a_a) {N
		A(A_A, "a_a0 a a A(%a,%a) a_a",N
		   a->a_a0, a + a->a);N
		a->a_a0 = A_A(a->a_a0,N
					     A_A(a + A_A_A,N
						     a + a->a));N
	} a {N
		A(A_A, "a_a0 a a A(%a,%a) a_a",N
		   a->a_a0, a + a->a);N
		a->a_a0 = A_A(a->a_a0,N
					     A_A(a + A_A_A,N
						     a + a->a));N
	}N
N
	a (a_a_a) {N
		/*N
		 * Aa a a a.  Aa a a a a a a a aN
		 * a a a a a a a a a a a.N
		 */N
		a (A_A_A);N
	}N
N
	a (a);N
}N
N
/*N
 * Aa a a'a a a a.N
 */N
a aN
a_a(a_a_a **a, a_a_a a) {N
	a_a_a *a;N
	a a = a;N
	a a0, a0;N
	a a;N
	a_a_a *a;N
N
	A(a != A);N
	a = *a;N
	*a = A;N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	A(A_A, "a a %a", a);N
N
	/*N
	 * Aa a'a a a, a a a a a a a aN
	 * a a a a.N
	 */N
	a (A_A(a) && !A_A(a)) {N
		a = a_a(a, a);N
		a_a(a, &a);N
		a (a)N
			a = a_a_a(a);N
		a (a);N
	}N
N
	/*N
	 * Aa a a a'a a a.  Aa a a aN
	 * a a a a a a a a.N
	 */N
	a_a_a_a(a, a, A_A_A);N
	a0 = a_a(a, &a->a0);N
	a0 = a_a(a, &a->a0);N
	a_a(a, &a->a);N
	a = (a0 || a0);N
N
	/*N
	 * Aa a a a, a a.  Aa a a a, a aN
	 * a a a a a.N
	 */N
	a (!A_A(a)) {N
		A(a == a);N
		a = a_a(a, a);N
		a_a(a, &a);N
		a (a)N
			a = a_a_a(a);N
	} a {N
		a_a_a_a(a);N
		a (!A_A(a)) {N
			a = a->a_a;N
			A_A_A(a->a[a], a, a);N
			A_A_A(a->a[a], a, a);N
			a->a |= A_A_A;N
		}N
	}N
	a (a);N
}N
N
/*N
 * Aa a a'a a a a a a a a a a.N
 */N
a aN
a_a_a(a_a_a *a, a_a_a a) {N
	a_a_a *a;N
	a a0 = a;N
	a a0 = a;N
N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	/*N
	 * Aa a a a a a a a a a0 aN
	 */N
	a (!A_A_A0(a) && A_A(a->a_a0, a)) {N
		a (A_A_A0(a)) {N
			A(A_A, "a a0 a a %a", a);N
			a0 = a_a(a, &a->a0);N
			a->a_a &= ~A_A_A;N
		}N
		a->a_a0 = A_A;N
		a->a_a = A_A_A;N
	}N
N
	/*N
	 * Aa a a a a a a a a a0 aN
	 */N
	a (!A_A_A0(a) && A_A(a->a_a0, a)) {N
		a (A_A_A0(a)) {N
			A(A_A, "a a0 a a %a", a);N
			a0 = a_a(a, &a->a0);N
			a->a_a &= ~A_A_A0;N
		}N
		a->a_a0 = A_A;N
		a->a0_a = A_A_A;N
	}N
N
	/*N
	 * Aa a a a a a a a a a a.N
	 */N
	a (A_A(a->a_a, a)) {N
		a_a(a, &a->a);N
		a->a_a = A_A;N
	}N
	a (a0 || a0);N
}N
N
/*N
 * Aa a a'a a a a.N
 */N
a a aN
a_a(a_a_a *a, a a, a_a_a *a) {N
	A(a->a_a == A_A_A);N
N
	A_A_A(a->a[a], a, a);N
	a->a_a = a;N
	a->a_a[a]++;N
}N
N
/*N
 * Aa a a'a a a a.N
 */N
a a aN
a_a(a_a_a *a, a_a_a *a) {N
	a a;N
	a a = a;N
N
	a = a->a_a;N
	A(a != A_A_A);N
N
	a (A_A(a))N
		A_A_A(a->a[a], a, a);N
	aN
		A_A_A(a->a[a], a, a);N
	a->a_a = A_A_A;N
	A(a->a_a[a] > 0);N
	a->a_a[a]--;N
	a (a->a_a[a] && a->a_a[a] == 0)N
		a = a;N
	a (a);N
}N
N
/*N
 * Aa a a'a a a a.N
 */N
a a aN
a_a(a_a_a *a, a a, a_a_a *a) {N
	a a;N
	a_a_a *a;N
N
	a (a_a_a(a->a)) {N
		a (a = 0; a < 0; a++) {N
			a = A_A_A(a->a[a]);N
			a (a == A)N
				a;N
			a (a->a == 0) {N
				a_a(a, a);N
				a_a(a, &a);N
				a;N
			}N
			A((a->a & A_A_A) == 0);N
			a->a |= A_A_A;N
			A_A_A(a->a[a], a, a);N
			A_A_A(a->a[a], a, a);N
		}N
	}N
N
	A_A_A(a->a[a], a, a);N
	a->a_a = a;N
	a->a_a[a]++;N
}N
N
/*N
 * Aa a a'a a a a.N
 */N
a a aN
a_a(a_a_a *a, a_a_a *a) {N
	a a;N
	a a = a;N
N
	a = a->a_a;N
	A(a != A_A_A);N
N
	a ((a->a & A_A_A) != 0)N
		A_A_A(a->a[a], a, a);N
	aN
		A_A_A(a->a[a], a, a);N
	a->a_a = A_A_A;N
	A(a->a_a[a] > 0);N
	a->a_a[a]--;N
	a (a->a_a[a] && a->a_a[a] == 0)N
		a = a;N
	a (a);N
}N
N
a a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a (a_a_a(a) != A_A_A) {N
		A(a);N
		A(a);N
		A(a);N
	}N
}N
N
/*N
 * Aa A _A_ a a a a.  Aa, a a a aN
 * a a a a a.N
 */N
a aN
a_a(a_a_a *a) {N
	a a a;N
	a a = a;N
	a_a_a *a;N
	a_a_a *a_a;N
N
	a (a = 0; a < a->a; a++) {N
		A(&a->a[a]);N
		a->a_a[a] = a;N
N
		a = A_A_A(a->a[a]);N
		a (a == A) {N
			/*N
			 * Aa a a a a.  Aa a a aN
			 * a a, a a a a aN
			 * a a a a a a a.N
			 */N
			A(a == a);N
			a = a_a_a(a);N
		} a {N
			/*N
			 * Aa a a a.  Aa a a, a a aN
			 * a a, a a a a a.  AaN
			 * a a a a a, a a a aN
			 * a.N
			 */N
			a (a != A) {N
				a_a = A_A_A(a, a);N
				A(a == a);N
				a = a_a(&a,N
						   A_A_A);N
				a = a_a;N
			}N
		}N
N
		A(&a->a[a]);N
	}N
	a (a);N
}N
N
/*N
 * Aa A _A_ a a a a.  Aa, a a a aN
 * a a a a a.N
 */N
a aN
a_a(a_a_a *a) {N
	a a a;N
	a a = a;N
	a_a_a *a;N
	a_a_a *a_a;N
N
	a (a = 0; a < a->a; a++) {N
		A(&a->a[a]);N
		a->a_a[a] = a;N
N
		a = A_A_A(a->a[a]);N
		a (a->a_a[a] == 0) {N
			/*N
			 * Aa a a a a.  Aa a a aN
			 * a a, a a a a aN
			 * a a a a a a a.N
			 */N
			a = a_a_a(a);N
		} a {N
			/*N
			 * Aa a a a.  Aa a a aN
			 * a a a, a a a a a a.N
			 */N
			a (a != A) {N
				a_a = A_A_A(a, a);N
				a (a->a == 0 &&N
				    a->a != 0) {N
					a = a_a(a, a);N
					a_a(a, &a);N
					a (a)N
						a = a_a_a(a);N
				}N
				a = a_a;N
			}N
		}N
N
		A(&a->a[a]);N
	}N
	a (a);N
}N
N
/*N
 * Aa a a a aN
 */N
a aN
a_a_a_a(a_a_a *a) {N
	a (A_A_A(a))N
	    a_a_a(a->a_a->a);N
N
	a (A_A_A(a))N
	    a_a_a(a->a_a->a);N
}N
N
/*N
 * Aa a a a a a.N
 */N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a a_a;N
	a a = a;N
	a a = a_a_a(a->a);N
N
	a_a = A_A_A;N
	a = A_A_A(*a);N
	a (a != A) {N
		A(A_A_A(a));N
N
		/*N
		 * Aa a a a a a.N
		 */N
		a = a->a;N
		a (a != A) {N
			A(A_A_A(a));N
N
			a (a_a != a->a_a) {N
				a (a_a != A_A_A)N
					A(&a->a[a_a]);N
				a_a = a->a_a;N
				A(a_a != A_A_A);N
				A(&a->a[a_a]);N
			}N
N
			a->a--;N
			a = a_a_a(a, a, a,N
						  a);N
		}N
N
		/*N
		 * Aa a aN
		 */N
		a->a = A;N
		A_A_A(*a, a, a);N
		a_a(a, &a);N
N
		a = A_A_A(*a);N
	}N
N
	a (a_a != A_A_A)N
		A(&a->a[a_a]);N
	a (a);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a (a_a_a(a) > 0) {N
		a_a_a(a, a->a);N
		a_a_a(a, A);N
	}N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a, a a_a_a *a,N
	   a_a_a *a, a_a_a *a)N
{N
	a_a_a a;N
	a_a_a a;N
	a a a;N
	a a;N
	a_a_a a = A_A_A;N
	a_a_a a0, a0;N
	a_a_a *a, *a_a;N
N
	A(a_a_a(a) == 0);N
N
	a (a->a == a_a_a) {N
		a_a_a_a a;N
N
		/*N
		 * Aa a A'a a a a a a.N
		 */N
		a = a_a_a(a);N
		a (a != A_A_A)N
			a (a);N
		a_a_a(a, &a);N
		a = a_a_a(&a, &a, A);N
		a (a != A_A_A)N
			a (a);N
		a = a_a_a(&a.a, a->a, a);N
		a_a_a(&a);N
		a (a != A_A_A)N
			a (a);N
	} a {N
		a_a_a_a a;N
N
		A(a->a == a_a_a);N
		a = a_a_a(a, a, &a, &a);N
		A(a == a_a_a);N
		/*N
		 * Aa a a a a a A.N
		 */N
		a = a_a_a(a);N
		a (a != A_A_A)N
			a (a);N
		a_a_a(a, &a);N
		a = a_a_a(&a, &a, A);N
		a (a != A_A_A)N
			a (a);N
		/*N
		 * Aa a a a a.N
		 */N
		a = a_a_a(&a0);N
		a_a = a_a_a(&a0);N
		a_a_a(a, a, a, A);N
		a = a_a_a(a, &a.a, a_a,N
					      A);N
		a_a_a(&a);N
		a (a != A_A_A)N
			a (a);N
		a = a_a_a(a_a, a->a, a);N
		a (a != A_A_A)N
			a (a);N
	}N
N
	a (A_A_A);N
}N
N
/*N
 * Aa a a a, a a a a a a a.N
 */N
a aN
a_a(a_a_a *a) {N
	a_a_a *a;N
N
	A(a != A);N
	a = a->a_a_a;N
	A(A_A_A(a));N
N
	A(&a->a);N
	a->a |= A_A_A;N
	a->a_a_a = A;N
	A(&a->a);N
}N
N
/*N
 * Aa a a a a a.N
 */N
a aN
a_a_a_a(a_a_a *a, a_a_a a,N
		    a a a)N
{N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a_a;N
	a a;N
	a a a, a;N
N
	A(A_A,N
	   "A a_a_a_a, a %a, a %0a, a %0a",N
	   a, a, a);N
N
	a = A_A_A(a->a);N
	a (a != A) {N
		A(&a->a);N
		a_a = A_A_A(a, a);N
N
		a = a;N
		a = a->a & A_A_A;N
		a = a & a;N
N
		a (a) {N
		a A_A_A:N
			A(A_A_A(0), "A_A_A");N
			a ((a) != 0) {N
				a->a &= ~a;N
				a = a;N
			}N
			a;N
		a A_A_A:N
			A(A_A_A(0), "A_A_A");N
			a->a &= ~a;N
			a = a->a & A_A_A;N
			a (a == 0)N
				a = a;N
			a;N
		a:N
			a->a &= ~a;N
			a = a;N
		}N
N
		a (a) {N
			A(A_A, "a: a a %a", a);N
			/*N
			 * Aa a a a a a, a a aN
			 * a a_a_a() a a a a a aN
			 * a.N
			 */N
			A_A_A(a->a, a, a);N
			a->a = A;N
			a->a_a = A_A_A;N
N
			A(!A_A(a));N
N
			a = &a->a;N
			a = a->a_a;N
			a->a_a = a;N
			a->a_a0 = a_a_a[a->a_a];N
			a->a_a0 = a_a_a[a->a0_a];N
			a->a_a = a;N
			a->a_a = a_a;N
			a->a_a_a = a;N
N
			A(A_A,N
			   "a a %a a a %a a a %a",N
			   a, a, a);N
N
			a_a_a(&a, (a_a_a **)&a);N
			a->a |= A_A_A;N
		} a {N
			A(A_A, "a: a a %a", a);N
		}N
N
		A(&a->a);N
		a = a_a;N
	}N
	A(A_A, "A a_a_a_a, a %a", a);N
}N
N
a a aN
a_a(a_a_a *a) {N
	a_a_a *a;N
	/*N
	 * Aa a a a a a a a.N
	 */N
	a (a->a_a) {N
		/*N
		 * Aa a a'a a a a a, a'aN
		 * a.  Aa a a a a a a.N
		 */N
		A(!a->a_a);      /* Aa a. */N
		A_A_A(&a->a, a(a->a), 0, A,N
			       A_A_A, a_a, a,N
			       a, A, A);N
		a = &a->a;N
		a_a_a(a->a, &a);N
		a->a_a = a;N
	}N
}N
N
a a aN
a_a_a(a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a a = a;N
N
	A(&a->a);N
N
	A(a->a > 0);N
	a->a--;N
N
	a (a->a == 0) {N
		a = A_A_A(a->a);N
		a (a != A) {N
			A_A_A(a->a, a, a_a);N
			a = a->a_a;N
			a->a_a = a;N
			a_a_a(&a, &a);N
			a = A_A_A(a->a);N
		}N
	}N
N
	a (a->a == 0 && a->a == 0)N
		a = a;N
	A(&a->a);N
	a (a);N
}N
N
a a aN
a_a_a(a_a_a *a) {N
	A(&a->a);N
	a->a++;N
	A(&a->a);N
}N
N
a a aN
a_a_a(a_a_a *a) {N
	A(&a->a);N
	a->a++;N
	A(&a->a);N
}N
N
a a aN
a_a_a(a_a_a *a, a_a_a *a, a a) {N
	a a;N
N
	a = a->a_a;N
N
	a (a)N
		A(&a->a[a]);N
N
	a->a++;N
N
	a (a)N
		A(&a->a[a]);N
}N
N
a a aN
a_a_a(a_a_a *a, a a, a_a_a *a,N
		 a a)N
{N
	a a;N
	a a_a;N
	a a = a;N
N
	a = a->a_a;N
N
	a (a)N
		A(&a->a[a]);N
N
	A(a->a > 0);N
	a->a--;N
N
	a_a = a;N
	a (a->a == 0 &&N
	    (a->a_a[a] || a->a == 0 || a ||N
	     (a->a & A_A_A) != 0)) {N
		a_a = a;N
		a = a_a(a, a);N
	}N
N
	a (a)N
		A(&a->a[a]);N
N
	a (!a_a)N
		a (a);N
N
	a->a_a = A_A_A;N
N
	a_a(a, &a);N
	a (a)N
		a = a_a_a(a);N
N
	a (a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a, a a_a_a *a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a_a_a(&a->a, A);N
	a (a_a_a(a, a->a, &a->a) != A_A_A) {N
		a_a_a(a->a, a);N
		a (A);N
	}N
	a_a_a(&a->a, A);N
	a->a = A_A_A;N
	a->a = a;N
	a->a_a = 0;N
	a->a = 0;N
	a->a_a0 = A_A;N
	a->a_a0 = A_A;N
	a->a_a = A_A;N
	a->a = 0;N
	a->a_a = A_A_A;N
	A_A_A(a->a0);N
	A_A_A(a->a0);N
	a->a_a = A;N
	a->a_a = A;N
	a->a_a = A_A_A;N
	a->a0_a = A_A_A;N
	A_A_A(a->a);N
	A_A_A(a, a);N
N
	A(&a->a);N
	a->a++;N
	a_a(a, a_a_a);N
	a (!a->a_a && a->a != A &&N
	    a->a > (a->a * 0))N
	{N
		a_a_a *a = &a->a;N
		a_a_a(a);N
		a_a_a(a->a, &a);N
		a->a_a = a;N
	}N
	A(&a->a);N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(!A_A_A0(a));N
	A(!A_A_A0(a));N
	A(!A_A(a));N
	A(A_A_A(a->a));N
	A(!A_A_A(a, a));N
	A(a->a_a == A_A_A);N
	A(a->a == a);N
N
	a->a = 0;N
	a_a_a(&a->a, a->a);N
N
	a_a_a(a->a, a);N
	A(&a->a);N
	a->a--;N
	a_a(a, a_a_a);N
	A(&a->a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a->a = A_A_A;N
	a->a = a;N
	A_A_A(a, a);N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(a->a == A);N
	A(!A_A_A(a, a));N
N
	a->a = 0;N
	a_a_a(a->a, a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a, a a_a_a *a,N
		a_a_a a)N
{N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a_a_a(&a->a, A);N
	a (a_a_a(a, a->a, &a->a) != A_A_A) {N
		a_a_a(a->a, a);N
		a (A);N
	}N
	a->a = A_A_A;N
	a->a_a = 0;N
	a->a = a;N
	A_A_A(a, a);N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(!A_A_A(a, a));N
N
	a_a_a(&a->a, a->a);N
N
	a->a = 0;N
N
	a_a_a(a->a, a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a->a = A_A_A;N
	a->a_a = A_A_A;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a0 = 0;N
	a->a0 = 0;N
	a->a0 = 0;N
	a->a0 = 0;N
	a->a = A;N
	a->a = 0;N
	a->a = (a_a_a(0a0a)) + 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = a->a;N
	a->a = 0.0;N
	A_A_A(a->a);N
	A_A_A(a, a);N
	A(&a->a);N
	a->a++;N
	a_a(a, a_a_a);N
	a (!a->a_a && a->a != A &&N
	    a->a > (a->a * 0))N
	{N
		a_a_a *a = &a->a;N
		a_a_a(a);N
		a_a_a(a->a, &a);N
		a->a_a = a;N
	}N
	A(&a->a);N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(a->a_a == A_A_A);N
	A(a->a == 0);N
	A(!A_A_A(a, a));N
N
	a->a = 0;N
N
	a (a->a != A)N
		a_a_a(a->a, a->a, a->a);N
N
	a = A_A_A(a->a);N
	a (a != A) {N
		A_A_A(a->a, a, a);N
		a_a(a, &a);N
		a = A_A_A(a->a);N
	}N
N
	a_a_a(a->a, a);N
	A(&a->a);N
	a->a--;N
	a_a(a, a_a_a);N
	A(&a->a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	/*N
	 * Aa a.N
	 */N
	a->a = 0;N
	a->a = a;N
	a->a_a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a_a0 = A_A_A;N
	a->a_a0 = A_A_A;N
	A_A_A(a, a);N
	A_A_A(a, a);N
	A_A_A(a->a);N
	a->a = A;N
	a->a_a = A_A_A;N
N
	/*N
	 * a aN
	 */N
	a_a_a(&a->a);N
N
	A_A_A(&a->a, a(a_a_a), 0, 0, 0, A, A,N
		       A, A, a);N
N
	a_a_a(a);N
	a->a = A_A_A;N
	a (a);N
}N
N
a a a_a_a *N
a_a(a_a_a *a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a->a = 0;N
	a->a = A;N
N
	a_a_a(&a->a);N
N
	a->a = A_A_A;N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	a->a = 0;N
N
	a (a_a_a(&a->a))N
		a_a_a(&a->a);N
N
	a_a_a(a->a, a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(!A_A_A(a));N
	A(!A_A_A(a, a));N
	A(!A_A_A(a, a));N
	A(a->a_a == A_A_A);N
	A(a->a == A);N
N
	a->a = 0;N
N
	a_a_a(&a->a);N
	a_a_a(a->a, a);N
	a (a_a_a(a));N
}N
N
/*N
 * Aa a a a a a a a a a.  Aa aN
 * a a a, a a a a a a a a a aN
 * a a a a a a a.N
 */N
a a a_a_a *N
a_a(a_a_a *a, a_a_a *a, a_a_a a) {N
	a_a_a *a;N
N
	a = a_a_a(a->a);N
	a (a == A)N
		a (A);N
N
	a->a = A_A_A;N
	a->a = a->a;N
	a_a_a(&a->a, a);N
	a->a = a->a;N
	a->a = a->a;N
	a->a = a;N
	a->a = -0;N
	A_A_A(a, a);N
N
	a (a);N
}N
N
a a aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(a->a == A);N
	A(!A_A_A(a, a));N
N
	a->a = 0;N
N
	a_a_a(a->a, a);N
}N
N
/*N
 * Aa a a a.  A:  Aa a a a a a aN
 * a a a, a a a a a a a a a!N
 *N
 * Aa a a a a a a, *a a a a aN
 * A_A_A.N
 */N
a a a_a_a *N
a_a_a_a(a_a_a *a, a a_a_a *a,N
		   a a a, a *a)N
{N
	a_a_a *a;N
	a a;N
N
	a = a_a_a(a, a) % a->a;N
N
	a (*a == A_A_A) {N
		A(&a->a[a]);N
		*a = a;N
	} a a (*a != a) {N
		A(&a->a[*a]);N
		A(&a->a[a]);N
		*a = a;N
	}N
N
	a = A_A_A(a->a[a]);N
	a (a != A) {N
		a (!A_A(a)) {N
			a (a_a_a(a, &a->a)N
			    && A_A(a, a)N
			    && A_A(a, a))N
				a (a);N
		}N
		a = A_A_A(a, a);N
	}N
N
	a (A);N
}N
N
/*N
 * Aa a a a.  A:  Aa a a a a a aN
 * a a a, a a a a a a a a a.N
 *N
 * Aa a a a a a a, *a a a a aN
 * A_A_A.  Aa a a a a a a.  AaN
 * a a (a a a "a a") a a a a a, aN
 * a a a a a a a a a a a aN
 * a a a.N
 */N
a a a_a_a *N
a_a_a_a(a_a_a *a, a a_a_a *a, a *a,N
	a_a_a a)N
{N
	a_a_a *a, *a_a;N
	a a;N
N
	a = a_a_a(a, a) % a->a;N
N
	a (*a == A_A_A) {N
		A(&a->a[a]);N
		*a = a;N
	} a a (*a != a) {N
		A(&a->a[*a]);N
		A(&a->a[a]);N
		*a = a;N
	}N
N
	/* Aa a a, a a a a a. */N
	a (a = A_A_A(a->a[a]);N
	     a != A;N
	     a = a_a) {N
		a_a = A_A_A(a, a);N
		(a)a_a_a(a, &a, a);N
		a (a != A &&N
		    (a->a == 0 || a->a > a) &&N
		    a_a_a(a, &a->a)) {N
			A_A_A(a->a[a], a, a);N
			A_A_A(a->a[a], a, a);N
			a (a);N
		}N
	}N
N
	a (A);N
}N
N
/*N
 * Aa a A a a!N
 */N
a aN
a_a_a(a_a_a *a, a_a_a *a, a a_a_a *a,N
	      a_a_a a, a_a_a a)N
{N
	a_a_a *a, *a_a;N
	a a_a;N
N
	a_a = a;N
N
	a = A_A_A(a->a);N
	a (a == A)N
		a (a);N
	a (a != A) {N
		a_a = A_A_A(a, a);N
N
		/*N
		 * Aa a a a?N
		 */N
		a (a->a_a < a) {N
			A_A_A(a->a, a, a);N
			a_a(a, &a);N
		}N
N
		/*N
		 * Aa a a a a a a.N
		 *N
		 * Aa a a a a a a a a a aN
		 * a a a a a a a.N
		 */N
		a (a != A && !a_a && a->a == a &&N
		    a_a_a(a, &a->a))N
			a_a = a;N
N
		a = a_a;N
	}N
N
	a (a_a);N
}N
N
a aN
a_a(a_a_a *a, a a *a, ...) {N
	a_a a;N
	a a[0];N
	a a[A_A_A];N
	a_a_a a;N
N
	a_a(a, a);N
	a(a, a(a), a, a);N
	a_a(a);N
N
	a_a_a(&a, &a->a);N
	a_a_a(&a, a, a(a));N
N
	a_a_a(a_a, A_A_A, A_A_A,N
		      A_A_A, "a: a %a (%a/%a): %a",N
		      a, a->a, a->a, a);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a,N
		    a a_a_a *a, a_a_a a,N
		    a_a_a *a, a_a_a a)N
{N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
N
	a = A_A_A;N
N
	a ((a->a & A_A_A) != 0) {N
		a = A_A_A(a->a0);N
		a (a != A) {N
			a = a->a;N
			a = a->a_a;N
			A(a != A_A_A);N
			A(&a->a[a]);N
N
			a (a->a != 0 &&N
			    a->a >= a->a)N
			{N
				a->a |=N
					(A_A_A|N
					 A_A_A);N
				a a0;N
			}N
N
			a (!A_A(a)N
			    && a_a_a(a, a, a, a, a)) {N
				a->a |= A_A_A;N
				a a0;N
			}N
			a = a_a(a, a, a->a);N
			a (a == A) {N
				a->a_a |= A_A_A;N
				a a;N
			}N
			/*N
			 * Aa a a a.  Aa a a a a'a a.N
			 */N
			a_a_a(a, a, a);N
			A_A_A(a->a, a, a);N
			a = A;N
		a0:N
			A(&a->a[a]);N
			a = A_A_A;N
			a = A_A_A(a, a);N
		}N
	}N
N
	a ((a->a & A_A_A0) != 0) {N
		a = A_A_A(a->a0);N
		a (a != A) {N
			a = a->a;N
			a = a->a_a;N
			A(a != A_A_A);N
			A(&a->a[a]);N
N
			a (a->a != 0 &&N
			    a->a >= a->a)N
			{N
				a->a |=N
					(A_A_A|N
					 A_A_A);N
				a a0;N
			}N
N
			a (!A_A(a)N
			    && a_a_a(a, a, a, a, a)) {N
				a->a |= A_A_A;N
				a a0;N
			}N
			a = a_a(a, a, a->a);N
			a (a == A) {N
				a->a_a |= A_A_A0;N
				a a;N
			}N
			/*N
			 * Aa a a a.  Aa a a a a'a a.N
			 */N
			a_a_a(a, a, a);N
			A_A_A(a->a, a, a);N
			a = A;N
		a0:N
			A(&a->a[a]);N
			a = A_A_A;N
			a = A_A_A(a, a);N
		}N
	}N
N
 a:N
	a (a != A_A_A)N
		A(&a->a[a]);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
N
	A(a);N
N
	a = a->a_a;N
	A(A_A_A(a));N
N
	a_a_a(&a);N
	/*N
	 * Aa a a a a_a() a a a a.N
	 */N
	A(&a->a);N
	A(&a->a);N
	a(a);N
}N
N
/*N
 * Aa a a a a; a a a a; a a a a.N
 */N
a aN
a_a_a(a_a_a **a, a_a_a a) {N
	a_a_a *a;N
	a a = a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
N
	a (A_A_A0(a) || A_A_A0(a))N
		a (a);N
	a (A_A(a))N
		a (a);N
	a (!A_A(a->a_a0, a))N
		a (a);N
	a (!A_A(a->a_a0, a))N
		a (a);N
	a (!A_A(a->a_a, a))N
		a (a);N
N
	/*N
	 * Aa a a a.  Aa a.N
	 */N
	a = a_a(&a, A_A_A);N
	*a = A;N
N
	/*N
	 * Aa a, a a a a a, a a a a_a() aN
	 * a a, a a a'a a a a a a.N
	 */N
	a (a);N
}N
N
/*%N
 * Aa a a a a a A a a a a a a a a aN
 * (a a a a); a a, a a a a a a.  Aa a AN
 * a a a a a, a a a a a a a aN
 * a a a a (a a a a a a).N
 * Aa a'a a a a a a 'a' a a a a a aN
 * a a a a a a a a a, a a a'a aN
 * a a A (a a'a a a).N
 *N
 * Aa a a a a; a a a a; a a a a.N
 */N
a aN
a_a_a(a_a_a *a, a a, a_a_a a) {N
	a a, a_a;N
	a_a_a *a, *a_a;N
	a a = a_a_a(a->a);N
	a a = 0;N
N
	A(a != A_A_A);N
N
	a_a = a ? 0 : 0;N
N
	/*N
	 * Aa a a a a a a a 0 (a a)N
	 * a a a a a a a a a a a aN
	 * a a a a a (a a a a, a aN
	 * a).N
	 */N
	a = A_A_A(a->a[a]);N
	a (a = 0;N
	     a != A && a < a_a && a < 0;N
	     a = a_a) {N
		A(!A_A(a));N
		a++;N
		a_a = A_A_A(a, a);N
		(a)a_a_a(&a, a);N
		a (a == A) {N
			a++;N
			a a;N
		}N
N
		a (!A_A(a) &&N
		    (a || a->a_a + A_A_A <= a)) {N
			A_A(a_a(&a,N
						A_A_A) ==N
				      a);N
			a++;N
		}N
N
	a:N
		a (!a)N
			a;N
	}N
}N
N
/*N
 * Aa a a a a; a a a a; a a a a.N
 */N
a aN
a_a_a(a_a_a *a, a_a_a **a, a_a_a a)N
{N
	a_a_a *a;N
	a a = a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
N
	a (a->a != 0)N
		a (a);N
N
	a (a->a == 0 || a->a > a)N
		a (a);N
N
	/*N
	 * Aa a a a a a.  Aa a.N
	 */N
	A(A_A, "a a %a", a);N
	A(A_A_A(a, a));N
	a = a_a(a, a);N
	a_a(a, &a);N
	a (a)N
		a_a_a(a);N
	*a = A;N
	a (a);N
}N
N
/*N
 * A a a a, a a a a a.N
 */N
a aN
a_a(a_a_a *a, a a, a_a_a a) {N
	a_a_a *a;N
	a_a_a *a_a;N
	a a = a;N
N
	A(A_A, "a a a %a", a);N
N
	A(&a->a[a]);N
	a (a->a_a[a]) {N
		A(&a->a[a]);N
		a (a);N
	}N
N
	a = A_A_A(a->a[a]);N
	a (a != A) {N
		a_a = A_A_A(a, a);N
		A(a == a);N
		a = a_a_a(a, a);N
		a (!a)N
			a = a_a_a(&a, a);N
		a = a_a;N
	}N
	A(&a->a[a]);N
	a (a);N
}N
N
/*N
 * A a a a, a a a a a.N
 */N
a aN
a_a(a_a_a *a, a a, a_a_a a) {N
	a_a_a *a, *a_a;N
	a a = a;N
N
	A(A_A, "a a a %a", a);N
N
	A(&a->a[a]);N
	a = A_A_A(a->a[a]);N
	a (a != A) {N
		a_a = A_A_A(a, a);N
		A(a == a);N
		a = a_a_a(a, &a, a);N
		a = a_a;N
	}N
	A(&a->a[a]);N
	a (a);N
}N
N
a aN
a(a_a_a *a) {N
	a->a = 0;N
N
	a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a,N
		    a(*a->a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
	a_a_a(a->a, a->a_a,N
		    a(*a->a_a) * a->a);N
N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
N
	a_a_a(&a->a, a, a(a_a_a));N
}N
N
N
/*N
 * Aa a.N
 */N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	       a_a_a *a, a_a_a **a)N
{N
	a_a_a *a;N
	a_a_a a;N
	a a a;N
N
	A(a != A);N
	A(a != A);N
	A(a != A); /* a a a a */N
	A(a != A);N
	A(a != A && *a == A);N
N
	A(a);N
N
	a = a_a_a(a, a(a_a_a));N
N
	/*N
	 * Aa a a a a a, a a aN
	 * a a a A a a a a a a a.N
	 */N
	a->a = 0;N
	a->a = 0;N
	a->a = 0;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = a;N
	a->a = a;N
	a->a_a = 0;N
	A_A_A(&a->a, a(a->a),N
		       0, A, 0, A, A, A, A, A);N
	a->a_a = a;N
	a->a_a = a;N
	A_A_A(a->a);N
N
	a->a = a[0];N
	a->a = 0;N
	a->a = A;N
	a->a = A;N
	a->a_a = A;N
	a->a_a = A;N
	a->a = A;N
	A_A_A(&a->a, a(a->a), 0, A,N
		       A_A_A, a_a, a,N
		       a, A, A);N
	a->a_a = a;N
N
	a->a = 0;N
	a->a_a = 0;N
	a->a_a = 0.0;N
	a->a_a = 0.0;N
	a->a_a = 0.0;N
N
	a->a = a[0];N
	a->a = 0;N
	a->a = A;N
	a->a = A;N
	a->a_a = A;N
	a->a_a = A;N
	a->a = A;N
	A_A_A(&a->a, a(a->a), 0, A,N
		       A_A_A, a_a, a,N
		       a, A, A);N
	a->a_a = a;N
N
	a = a_a_a(a->a, &a->a);N
	a (a != A_A_A) {N
		A(A_A, "a: a-a a a, "N
			      "a a a a %a\a",N
			      a[0]);N
		a->a = a[0];N
		a->a = a[0];N
	}N
N
	a_a_a(a, &a->a);N
N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
N
#a A(a, a) \N
	a { \N
		(a)->a = a_a_a((a)->a, \N
				     a(*(a)->a) * (a)->a); \N
		a ((a)->a == A) { \N
			a = A_A_A; \N
			a a0; \N
		}\N
	} a (0)N
	A(a, a);N
	A(a, a);N
	A(a, a);N
	A(a, a_a);N
	A(a, a_a);N
#a AN
N
#a A(a, a) \N
	a { \N
		(a)->a = a_a_a((a)->a, \N
				     a(*(a)->a) * (a)->a); \N
		a ((a)->a == A) { \N
			a = A_A_A; \N
			a a0; \N
		}\N
	} a (0)N
	A(a, a);N
	A(a, a);N
	A(a, a);N
	A(a, a_a);N
	A(a, a_a);N
#a AN
N
	/*N
	 * Aa a a a a a a a.N
	 * Aa a a a a a a, a.N
	 */N
	a_a_a(a->a, a->a);N
N
	a (a = 0; a < a->a; a++) {N
		A_A_A(a->a[a]);N
		A_A_A(a->a[a]);N
		a->a_a[a] = a;N
		a->a_a[a] = 0;N
		a->a++;N
	}N
	a (a = 0; a < a->a; a++) {N
		A_A_A(a->a[a]);N
		A_A_A(a->a[a]);N
		a->a_a[a] = a;N
		a->a_a[a] = 0;N
		a->a++;N
	}N
	a_a_a(a->a, a->a);N
N
	/*N
	 * Aa aN
	 */N
#a A(a, a, a) a { \N
	a = a_a_a(a, a(a), &(a)); \N
	a (a != A_A_A) \N
		a a0; \N
	a_a_a((a), A_A); \N
	a_a_a((a), A_A); \N
	a_a_a((a), a); \N
	a_a_a((a), &a->a); \N
	} a (0)N
N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
	A(a_a_a, a->a, "a");N
N
#a AN
N
	/*N
	 * Aa a a a.N
	 */N
	a = a_a_a(a->a, 0, &a->a);N
	a (a != A_A_A)N
		a a0;N
N
	a_a_a(a->a, "A", a);N
N
	a = a_a_a(a->a, &a->a, a_a_a);N
	a (a != A_A_A)N
		a a0;N
N
	a_a(a, a->a, a_a_a);N
	a_a(a, a->a, a_a_a);N
N
	/*N
	 * Aa a.N
	 */N
	a->a = A_A_A;N
	*a = a;N
	a (A_A_A);N
N
 a0:N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	/* a a a */N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a);N
N
 a0: /* a a a a a */N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a_a != A)N
		a_a_a(a->a, a->a_a,N
			    a(*a->a_a) * a->a);N
	a (a->a_a != A)N
		a_a_a(a->a, a->a_a,N
			    a(*a->a_a) * a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a,N
			    a(*a->a) * a->a);N
	a (a->a_a != A)N
		a_a_a(a->a, a->a_a,N
			    a(*a->a_a) * a->a);N
	a (a->a_a != A)N
		a_a_a(a->a, a->a_a,N
			    a(*a->a_a) * a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a_a_a(&a->a, a, a(a_a_a));N
N
	a (a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a **a) {N
N
	A(A_A_A(a));N
	A(a != A && *a == A);N
N
	a_a_a(a);N
	*a = a;N
}N
N
aN
a_a_a(a_a_a **a) {N
	a_a_a *a;N
	a a_a_a;N
N
	A(a != A && A_A_A(*a));N
N
	a = *a;N
	*a = A;N
N
	A(a->a > 0);N
N
	A(&a->a);N
	a->a--;N
	a_a_a = (a->a == 0 && a->a == 0);N
	A(&a->a);N
N
	a (a_a_a) {N
		A(&a->a);N
		A(a->a_a);N
		a_a(a);N
		A(&a->a);N
	}N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
N
	/*N
	 * Aa '*a' a 'a' a 'a' a a.N
	 */N
N
	A(A_A_A(a));N
	A(a != A);N
N
	a = *a;N
	*a = A;N
N
	A(&a->a);N
	A(&a->a);N
N
	a = (a->a == 0);N
N
	a (a->a_a && a &&N
	    a_a_a(a->a) == 0) {N
		/*N
		 * Aa'a a a.  Aa a a.N
		 */N
		a->a_a = a;N
		a_a_a(a, &a);N
	} a {N
		a = A;N
		a_a_a(a, &a);N
		a->a_a = a;N
		A_A_A(a->a, a, a_a);N
	}N
N
	A(&a->a);N
	A(&a->a);N
}N
N
a aN
a_a0(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
N
	A(a);N
N
	a = a->a_a;N
	A(A_A_A(a));N
N
	A(&a->a);N
	A(a->a_a);N
	a->a_a = a;N
	(a)a_a(a);N
	(a)a_a(a);N
	a (a_a_a(a))N
		a_a(a);N
	A(&a->a);N
}N
N
aN
a_a_a(a_a_a *a) {N
	a_a_a *a;N
N
	/*N
	 * Aa 'a'.N
	 */N
N
	A(&a->a);N
N
	a (!a->a_a) {N
		a->a_a = a;N
		a_a_a(a->a, a, a, 0, 0);N
		/*N
		 * Aa a_a a a_a a.N
		 */N
		a_a_a(a);N
		A_A_A(&a->a, a(a->a), 0, A,N
			       A_A_A, a_a0, a,N
			       a, A, A);N
		a->a_a = a;N
		a = &a->a;N
		a_a_a(a->a, &a);N
	}N
N
	A(&a->a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a a,N
		   a *a, a a_a_a *a, a a_a_a *a,N
		   a_a_a a, a a a,N
		   a_a_a a, a_a_a *a,N
		   a_a_a a, a a a, a_a_a *a,N
		   a_a_a **a)N
{N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
	a a_a, a_a_a, a, a_a;N
	a_a_a a;N
	a a a_a;N
	a a a_a;N
	a a a_a;N
	a a[A_A_A];N
N
	A(A_A_A(a));N
	a (a != A) {N
		A(a != A);N
	}N
	A(a != A);N
	A(a != A);N
	A(a != A && *a == A);N
	A(a == A || a_a_a(a));N
N
	A((a & A_A_A) != 0);N
N
	a = A_A_A;N
	A(a);N
	a_a = (a & A_A_A);N
	a_a = 0;N
	a_a = 0;N
	a_a = a;N
	a_a_a = a;N
	a = a;N
N
	a (a == 0)N
		a_a_a(&a);N
N
	/*N
	 * A  Aa a a a a!N
	 *N
	 * Aa a a a a a a a.N
	 *N
	 * Aa:  Aa a a a a a a.N
	 *N
	 *      Aa a a.  Aa a a, a a a a a aN
	 *      a a a a a.  Aa a a a aN
	 *      a, a a a a A_A_A.N
	 *N
	 *      Aa a, a a a.  Aa a aN
	 *      a a a a a a a a a a aN
	 *      a a a a a.N
	 *N
	 *      Aa a, a a.  Aa a a, a a a aN
	 *      a a, a a a a, a a a a a'a aN
	 *      a a a a a a a a a a aN
	 *      a a a a.N
	 */N
N
	a = a_a(a);N
	a (a == A)N
		a (A_A_A);N
N
	a->a = a;N
N
	/*N
	 * Aa a a a a a a a a.N
	 */N
	a->a = a;N
	a->a |= a_a;N
	a (A_A(a)) {N
		A(a != A);N
	}N
N
	a (a_a_a(a_a, A_A))N
		a_a_a(a, a, a(a));N
	aN
		a[0] = 0;N
N
	/*N
	 * Aa a a a a a a a a a a a.N
	 */N
	a = A_A_A;N
	a = a_a_a_a(a, a, a->a, &a);N
	A(a != A_A_A);N
	a (a->a_a[a]) {N
		A(A_A,N
		   "a_a_a: a A_A_A");N
		A_A(a_a(a, &a) == a);N
		a = A_A_A;N
		a a;N
	}N
N
	/*N
	 * Aa a.  Aa a a a a a a a.N
	 */N
	a (a == A) {N
		/*N
		 * Aa a a a a a a a a a a a, a aN
		 * a a a.N
		 */N
		a_a_a(a, a, a);N
N
		a = a_a(a, a);N
		a (a == A) {N
			A_A(a_a(a, &a) == a);N
			a = A_A_A;N
			a a;N
		}N
		a_a(a, a, a);N
		a (A_A(a))N
			a->a |= A_A_A;N
		a (A_A(a))N
			a->a |= A_A_A;N
		a (A_A(a))N
			a->a |= A_A;N
	} a {N
		/* Aa a a a a a A a */N
		A_A_A(a->a[a], a, a);N
		A_A_A(a->a[a], a, a);N
	}N
	a->a_a = a;N
N
	/*N
	 * Aa a a, a.N
	 */N
	A_A(a_a_a(a, a) == a);N
N
	/*N
	 * Aa a a a a a a a a?N
	 */N
	a (!A_A(a->a_a, a)) {N
		/*N
		 * Aa, a a.N
		 */N
		A(A_A,N
		   "a_a_a: a %a (%a) a a a (a)",N
		   a, a);N
		a = a;N
		a a_a;N
	}N
N
	/*N
	 * Aa a a a a a a a a/aN
	 * a a.  Aa a a a a A aN
	 * a a a.N
	 */N
	a (!A_A_A0(a) && A_A(a->a_a0, a)N
	    && A_A(a_a)) {N
		a = a_a(a, a, a_a_a);N
		a (a == A_A_A) {N
			A(A_A,N
			   "a_a_a: a A a a %a (%a) a a",N
			   a, a);N
			a a0;N
		}N
N
		/*N
		 * Aa a a a A a A?N
		 */N
		a (a == A_A_A) {N
			A(A_A,N
			   "a_a_a: a %a (%a) a a a",N
			   a, a);N
			a = a;N
			a a_a;N
		}N
N
		/*N
		 * Aa a a a'a a a a, a'a a aN
		 * a0 a; a a'a a.N
		 *N
		 * Aa a a a a a a a'a a a a, aN
		 * a a a A.N
		 *N
		 * Aa a a a a a a, a a a a A.N
		 */N
		a (A_A(a))N
			a a;N
		a a (A_A(a))N
			a a0;N
N
		a (!A_A_A0(a))N
			a_a |= A_A_A;N
	}N
N
 a0:N
	a (!A_A_A0(a) && A_A(a->a_a0, a)N
	    && A_A0(a_a)) {N
		a = a_a(a, a, a_a_a);N
		a (a == A_A_A) {N
			A(A_A,N
			   "a_a_a: a A a a %a (%a)",N
			   a, a);N
			a a;N
		}N
N
		/*N
		 * Aa a a a A a A?N
		 */N
		a (a == A_A_A) {N
			A(A_A,N
			   "a_a_a: a %a (%a) a a a",N
			   a, a);N
			a = a;N
			a a_a;N
		}N
N
		/*N
		 * Aa a a a a, a a'a aN
		 * a a.N
		 */N
		a (A_A(a) || A_A(a))N
			a a;N
N
		a (!A_A_A0(a))N
			a_a |= A_A_A0;N
	}N
N
 a:N
	a ((A_A(a_a) && A_A_A0(a)) ||N
	    (A_A0(a_a) && A_A_A0(a)))N
		a_a = a;N
	aN
		a_a = a;N
	a (a_a != 0 &&N
	    ! (A_A(a) && a_a)) {N
		/*N
		 * Aa'a a a a a a a.  Aa aN
		 * a a'a a a a a a, a a a'aN
		 * a a a a a a a a a aN
		 * a a a a a a a a.N
		 */N
N
		a (A_A(a))N
			a_a_a = a;N
N
		/*N
		 * Aa A0.N
		 */N
		a (A_A(a_a) &&N
		    a_a(a, a_a_a, a, a,N
			       a_a_a) == A_A_A) {N
			A(A_A, "a_a_a: "N
			   "a A a a a %a (%a)",N
			   a, a);N
		}N
N
		/*N
		 * Aa A0.N
		 */N
		a (A_A0(a_a) &&N
		    a_a(a, a_a_a, a, a,N
			       a_a_a) == A_A_A) {N
			A(A_A, "a_a_a: "N
			   "a A a a a %a (%a)",N
			   a, a);N
		}N
	}N
N
	/*N
	 * Aa a a a a a a a a a aN
	 * a a.N
	 */N
	a_a_a(a, a, a, a, a, a);N
N
 a_a:N
	a (A_A_A0(a))N
		a_a |= A_A_A;N
	a (A_A_A0(a))N
		a_a |= A_A_A0;N
N
	/*N
	 * Aa a a a'a a a a a a aN
	 * a a, a a a a a a.N
	 */N
	a_a = a;N
	a (!A_A(a))N
		a_a = a;N
	a (A_A(a) && A_A_A(a))N
		a_a = a;N
	a ((a_a & a_a) == 0)N
		a_a = a;N
	a (a)N
		a_a = a;N
	a (a_a) {N
		a->a = a;N
		a->a_a = a;N
		a a = A_A_A(a->a);N
		A_A_A(a->a, a, a);N
		a->a_a = (a_a & a_a);N
		a->a &= ~A_A_A;N
		a->a |= (a->a_a & A_A_A);N
		A(A_A, "a: a a %a a a "N
			      "%a %a",N
		   a, a, a);N
	} a {N
		/*N
		 * Aa a a a a a a a a aN
		 * a a a, a a a a a a aN
		 * a a a a a a, a a_a_a() aN
		 * a a a a.N
		 */N
		a->a_a = (a_a & a_a);N
		a->a &= ~A_A_A;N
		a->a |= (A_A_A | A_A_A);N
		a->a &= ~A_A_A;N
	}N
N
	a->a_a |= (a->a_a & a_a);N
	a (a) {N
		a (a != A) {N
			a_a_a(&a->a, a);N
		}N
		a = A_A_A;N
	} aN
		a = A_A_A;N
N
	/*N
	 * Aa a a a a a a a a a a.N
	 */N
	a->a_a0 = a_a_a[a->a_a];N
	a->a_a0 = a_a_a[a->a0_a];N
N
 a:N
	a (a != A) {N
		*a = a;N
N
		a (a_a) {N
			a_a_a *a;N
N
			A((a->a & A_A_A) != 0);N
			a = A;N
			a_a_a(a, &a);N
			a->a.a_a = a;N
			a->a.a_a = a;N
			a->a.a_a = a;N
		}N
	}N
N
	A(&a->a[a]);N
N
	a (a);N
}N
N
aN
a_a_a(a_a_a **a) {N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
	a_a_a *a;N
	a a;N
N
	A(a != A && A_A_A(*a));N
	a = *a;N
	*a = A;N
N
	A(&a->a);N
N
	A(A_A, "a_a_a a a %a", a);N
N
	a = a->a;N
	A(A_A_A(a));N
N
	A(A_A(a));N
N
	a = a->a_a;N
	A(a == A_A_A);N
N
	A(&a->a);N
N
	/*N
	 * Aa a a'a a a a a, a a a a.N
	 * Aa a a a a a a, a a a a'aN
	 * a a.N
	 */N
	a = a_a_a(a->a);N
	a = A_A_A(a->a);N
	a (a != A) {N
		A_A_A(a->a, a, a);N
		a = a->a;N
		a->a = A;N
		A(A_A_A(a));N
		A_A(a_a_a(a, a, a, a) ==N
			      a);N
		a_a(a, &a);N
		a = A_A_A(a->a);N
	}N
N
	/*N
	 * A:  Aa a a a a a a a.  Aa a aN
	 * a a a a a a a a a a, a aN
	 * a a a a a a a a a, a a aN
	 * a, a a, a a a a a a a a a a, a aN
	 * a a a.N
	 */N
	A(&a->a);N
	a (a_a(a, &a))N
		a_a(a);N
	A(&a->a);N
}N
N
aN
a_a_a(a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
	a a_a;N
N
	A(&a->a);N
N
	A(A_A, "a_a_a a a %a", a);N
N
	a = a->a;N
	A(A_A_A(a));N
N
	A(!A_A(a));N
	A(A_A(a));N
N
	a = a->a_a;N
	a (a == A_A_A)N
		a a;N
N
	/*N
	 * Aa a a a a a'a a a a a a.N
	 */N
	a_a = a;N
	a_a_a(&a->a, &a->a[a_a]);N
	a = a->a_a;N
	a (a != A_A_A) {N
		A_A_A(a->a->a, a, a);N
		a->a = A;N
		a->a_a = A_A_A;N
	}N
	A(&a->a[a_a]);N
	a = A_A_A;N
	A(a);N
N
 a:N
N
	a (!A_A(a)) {N
		a = &a->a;N
		a = a->a_a;N
		a->a_a = a;N
		a->a_a = A_A_A;N
		a->a_a = a_a;N
		a->a_a_a = a;N
		a->a_a0 = A_A_A;N
		a->a_a0 = A_A_A;N
N
		A(A_A, "a a %a a a %a a a %a",N
		   a, a, a);N
N
		a_a_a(&a, (a_a_a **)&a);N
	}N
N
	A(&a->a);N
}N
N
aN
a_a_a(a_a_a *a, A *a) {N
	a a a;N
	a_a_a a;N
N
	A(A_A_A(a));N
	A(a != A);N
N
	/*N
	 * Aa a a a, a a a a a, a a aN
	 * a a a.  Aa a a a a a a a aN
	 * a a a, a a a a a a aN
	 * a a a a.N
	 */N
N
	A(&a->a);N
	a_a_a(&a);N
N
	a (a = 0; a < a->a; a++)N
		A_A(a_a(a, a, a) == a);N
	a (a = 0; a < a->a; a++)N
		A_A(a_a(a, a, a) == a);N
N
	a_a(a, a, a, a);N
	A(&a->a);N
}N
N
a aN
a_a(A *a, a a *a, a_a_a a, a_a_a a) {N
	a (a == A_A)N
		a;N
	a(a, " [%a A %a]", a, (a)(a - a));N
}N
N
a aN
a_a(a_a_a *a, A *a, a a, a_a_a a) {N
	a_a_a *a;N
	a_a_a *a;N
N
	a(a, ";\a; Aa a a\a;\a");N
	a(a, "; [a a/0 a/0 a/0 a/"N
		"0 a]\a");N
	a(a, "; [a a/a]\a;\a");N
	a (a)N
		a(a, "; a %a, a %a, a %a, a a %a\a",N
			a, a->a, a->a,N
			a_a_a(a->a));N
N
/*N
 * Aa A a a a a a a a a, a AN
 * a'a a a a 0 a a a a a.N
 * Aa a a a a a a a a a a aN
 * a a.N
 */N
#a __A_A__N
	a (a_a a = 0; a < a->a; a++) {N
		A(&a->a[a]);N
	}N
	a (a_a a = 0; a < a->a; a++) {N
		A(&a->a[a]);N
	}N
#aN
N
	/*N
	 * Aa a aN
	 */N
	a (a_a a = 0; a < a->a; a++) {N
#a __A_A__N
		A(&a->a[a]);N
#aN
		a = A_A_A(a->a[a]);N
		a (a == A) {N
#a __A_A__N
			A(&a->a[a]);N
#aN
			a;N
		}N
		a (a) {N
			a(a, "; a %a\a", a);N
		}N
		a (;N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a (a) {N
				a(a, "; a %a (a %0a)\a",N
					a, a->a);N
			}N
			a(a, "; ");N
			a_a_a(a, &a->a);N
			a (a_a_a(&a->a) > 0) {N
				a(a, " a ");N
				a_a_a(a, &a->a);N
			}N
N
			a_a(a, "a0", a->a_a0, a);N
			a_a(a, "a0", a->a_a0, a);N
			a_a(a, "a", a->a_a, a);N
N
			a(a, " [a0 %a] [a0 %a]",N
				a[a->a_a],N
				a[a->a0_a]);N
N
			a(a, "\a");N
N
			a_a_a(a, "a0", a,N
					    &a->a0, a, a);N
			a_a_a(a, "a0", a,N
					    &a->a0, a, a);N
N
			a (a) {N
				a_a_a(a, a);N
				a_a_a(a, a);N
			}N
		}N
#a __A_A__N
		A(&a->a[a]);N
#aN
	}N
N
	a(a, ";\a; Aa a\a;\a");N
N
	a (a_a a = 0; a < a->a; a++) {N
#a __A_A__N
		A(&a->a[a]);N
#aN
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			a (a->a == 0)N
				a_a(a, a, a, a, a);N
			a = A_A_A(a, a);N
		}N
#a __A_A__N
		A(&a->a[a]);N
#aN
	}N
N
#a __A_A__N
	/*N
	 * Aa aN
	 */N
	a (a_a a = a->a-0; a >= 0; a--) {N
		A(&a->a[a]);N
	}N
	a (a_a a = a->a-0; a >= 0; a--) {N
		A(&a->a[a]);N
	}N
#aN
}N
N
a aN
a_a(A *a, a_a_a *a, a_a_a *a,N
	   a a, a_a_a a)N
{N
	a a[A_A_A];N
	a a[A_A_A];N
	a_a_a a;N
	a_a_a *a;N
N
	a_a_a(&a, &a->a);N
	a_a_a(&a, a, a(a));N
N
	a (a)N
		a(a, ";\a%a: a %a\a", a, a->a);N
N
	a(a, ";\a%a [a %a] [a %0a] [a %a/%a/%a/%a/%a] "N
		"[a %a/%a]", a, a->a, a->a,N
		a->a, a->a0, a->a0, a->a0,N
		a->a0, a->a, a->a);N
	a (a->a != 0A)N
		a(a, " [a %a]", a->a);N
	a (a->a != A) {N
		a a a;N
		a(a, " [a=");N
		a (a = 0; a < a->a; a++)N
			a(a, "%0a", a->a[a]);N
		a(a, "]");N
	}N
	a (a->a != 0)N
		a(a, " [a %a]", (a)(a->a - a));N
N
	a (a != A && a->a != 0 && a->a_a != 0) {N
		a(a, " [a %0.0a] [a %a]",N
			a->a, a->a);N
	}N
N
	a(a, "\a");N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a(a, ";\a\a");N
		a_a_a(a, &a->a);N
		a_a_a(a->a, a, a(a));N
		a(a, " %a [a A %a]\a", a,N
			(a)(a->a_a - a));N
	}N
}N
N
aN
a_a_a(a_a_a *a, A *a) {N
	a a[0];N
	a a *a;N
	a_a_a *a;N
	a_a_a *a;N
N
	/*N
	 * Aa a a, a a A Aa Aa Aa aN
	 * a a a a a a a/a a a.N
	 */N
N
	A(&a->a);N
N
	a(a, ";Aa %a\a", a);N
	a(a, ";\a %0a a %0a a %0a a %0a\a",N
		a->a_a, a->a_a,N
		a->a, a->a);N
	a(a, ";\a_a %a, a %a, a a %a\a",N
		a->a_a, a->a, a->a.a_a);N
N
	a = A_A_A(a->a);N
	a (a != A)N
		a(a, "\aAa:\a");N
	a (a != A) {N
		a = &a->a;N
		a (a->a.a.a_a) {N
		a A_A:N
			a = a_a(A_A, &a->a.a.a_a,N
					 a, a(a));N
			a;N
		a A_A0:N
			a = a_a(A_A0, &a->a.a0.a0_a,N
					 a, a(a));N
			a;N
		a:N
			a = "AaAa";N
		}N
N
		a (a == A)N
			a = "AaAa";N
N
		a(a, "\a\a %a, a %0a"N
			" a %a a %a\a",N
			a->a, a->a, a->a, a);N
N
		a = A_A_A(a, a);N
	}N
N
	A(&a->a);N
}N
N
a aN
a_a_a(A *a, a a_a_a *a) {N
	a a[A_A_A];N
N
	A(a != A);N
N
	a_a_a(a, a, a(a));N
	a(a, "%a", a);N
}N
N
a aN
a_a_a(A *a, a a *a,N
		    a_a_a *a, a_a_a *a,N
		    a a, a_a_a a)N
{N
	a_a_a *a;N
N
	a (a = A_A_A(*a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a)N
			a(a, ";\aAa(%a) %a\a", a, a);N
		a_a(a, a, a->a, a, a);N
	}N
}N
N
a a aN
a_a(A *a, a_a_a *a, a a *a) {N
	a(a, "\a\aAa(%a): %a -> { a %a }\a",N
		a, a, a->a);N
}N
N
a aN
a_a_a(A *a, a_a_a *a) {N
	a (A_A_A(a))N
		a_a(a, a->a_a, "A");N
	a (A_A_A(a))N
		a_a(a, a->a_a, "A");N
}N
N
a aN
a_a_a(A *a, a_a_a *a) {N
	a_a_a *a;N
N
	a = A_A_A(a->a);N
	a (a != A) {N
		a_a_a(a, a);N
		a = A_A_A(a, a);N
	}N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a a, a_a_a a)N
{N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a *a;N
N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
	A(a == a_a_a || a == a_a_a);N
N
	a = a_a_a(&a);N
	a_a_a(&a);N
N
	a (a == a_a_a)N
		a->a_a = A_A_A;N
	aN
		a->a0_a = A_A_A;N
N
	/*N
	 * Aa a a a a a a a-a a (aN
	 * a) a a a a a a "a a a" a,N
	 * a.a., a a'a a "a" a.  Aa a'a a (a aN
	 * a A_A a a) a a a a a a a aN
	 * a a-a a a a a a a a aN
	 * a a a a a a a a a a.N
	 */N
	a = a_a_a(a->a, &a->a, a, a,N
			       A_A(a) ? A_A_A : 0,N
			       A_A(a),N
			       ((a->a & A_A) != 0),N
			       A, A, a, &a, A);N
N
	/* A a a a a a a a a a a a. */N
	a (a) {N
	a A_A_A:N
	a A_A_A:N
	a A_A_A:N
		/*N
		 * Aa a a a.  Aa a a a'a a aN
		 * a a, a a, a a a aN
		 * a a a, a a a a a a.N
		 */N
		a (a == a_a_a)N
			a->a_a = A_A_A;N
		aN
			a->a0_a = A_A_A;N
		a = a_a(a, &a, a);N
		a;N
	a A_A_A:N
	a A_A_A:N
		/*N
		 * Aa'a a a a a a'a a.N
		 * Aa a a a a a a a a'a a aN
		 * a a a.N
		 *N
		 * A  Aa a a a a?  A'a a a 0 aN
		 * a a.N
		 */N
		a (a == a_a_a) {N
			a->a_a0 = a + 0;N
			A(A_A,N
			   "a a %a: Aa a a a a A",N
			   a);N
			a (a == A_A_A)N
				a->a_a = A_A_A;N
			aN
				a->a_a = A_A_A;N
		} a {N
			A(A_A,N
			   "a a %a: Aa a a a a A",N
			   a);N
			a->a_a0 = a + 0;N
			a (a == A_A_A)N
				a->a0_a = A_A_A;N
			aN
				a->a0_a = A_A_A;N
		}N
		a;N
	a A_A_A:N
	a A_A_A:N
		/*N
		 * Aa a a a a a.  Aa a A a aN
		 * a a a'a a a a a a.N
		 */N
		a.a = a(a.a);N
		a (a == a_a_a) {N
			a->a_a0 = a.a + a;N
			a (a == A_A_A)N
				a->a_a = A_A_A;N
			aN
				a->a_a = A_A_A;N
			A(A_A,N
			  "a a %a: Aa a a a A (a %a)",N
			   a, a.a);N
		} a {N
			A(A_A,N
		       "a a %a: Aa a a a A (a %a)",N
			   a, a.a);N
			a->a_a0 = a.a + a;N
			a (a == A_A_A)N
				a->a0_a = A_A_A;N
			aN
				a->a0_a = A_A_A;N
		}N
		a;N
	a A_A_A:N
	a A_A_A:N
		/*N
		 * Aa a a a a a, a a a aN
		 * a a.N
		 */N
		a->a &= ~(A_A_A | A_A_A);N
N
		a.a = a(a.a);N
		a_a(a, &a->a);N
		a->a_a = A_A;N
		a = a_a(a, &a->a, a, &a,N
				    &a->a);N
		a (a == A_A_A) {N
			a = A_A_A;N
			A(A_A,N
			   "a a %a: a a a",N
			   a);N
			a->a_a = a.a + a;N
		}N
		a (a == a_a_a)N
			a->a_a = A_A_A;N
		aN
			a->a0_a = A_A_A;N
		a;N
	}N
N
	a (a_a_a(&a))N
		a_a_a(&a);N
N
	a (a);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
	a_a_a a_a;N
	a_a_a a;N
	a_a_a a;N
	a a a_a;N
	a a_a_a = a;N
N
	A(a);N
N
	A(a->a_a == A_A_A);N
	a = (a_a_a *)a;N
	a = a->a_a;N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	a = a->a_a;N
	A(&a->a[a]);N
N
	A(A_A_A(a) || A_A_A(a));N
	a_a = 0;N
	a (A_A_A(a) && (a->a_a->a == a->a)) {N
		a_a = A_A_A;N
		a = a->a_a;N
		a->a_a = A;N
	} a a (A_A_A(a)N
		   && (a->a_a->a == a->a)) {N
		a_a = A_A_A0;N
		a = a->a_a;N
		a->a_a = A;N
	} aN
		a = A;N
N
	A(a_a != 0 && a != A);N
N
	a_a_a(&a->a);N
	a->a = A;N
N
	a_a = A_A_A;N
N
	/*N
	 * Aa a a a'a a a.N
	 */N
	a (a->a != A)N
		a_a_a(a->a, &a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	/*N
	 * Aa a a a a a a, a a, a aN
	 * a a a.N
	 */N
	a (A_A(a)) {N
		a_a(a, &a);N
		a_a_a(&a);N
N
		a_a_a = a_a(&a, A_A_A);N
N
		A(&a->a[a]);N
N
		a (a_a_a) {N
			A(&a->a);N
			a_a(a);N
			A(&a->a);N
		}N
N
		a;N
	}N
N
	a_a_a(&a);N
N
	/*N
	 * Aa a a a a a a, a a.N
	 */N
	a (A_A(a->a)) {N
		a->a->a = a(a->a->a);N
		a (a_a == A_A_A) {N
			A(A_A, "a a a %a: "N
			   "a a a a A (a %a)",N
			   a, a->a->a);N
			a->a_a0 = A_A(a->a_a0,N
						  a->a->a + a);N
			a (a->a == A_A_A)N
				a->a_a = A_A_A;N
			aN
				a->a_a = A_A_A;N
			a_a(a, a_a_a0a);N
		} a {N
			A(A_A, "a a a %a: "N
			   "a a a a A (a %a)",N
			   a, a->a->a);N
			a->a_a0 = A_A(a->a_a0,N
						  a->a->a + a);N
			a (a->a == A_A_A)N
				a->a0_a = A_A_A;N
			aN
				a->a0_a = A_A_A;N
			a_a(a, a_a_a0a);N
		}N
		a a;N
	}N
N
	/*N
	 * Aa A/A.N
	 */N
	a (a->a == A_A_A || a->a == A_A_A) {N
		a->a->a = a(a->a->a);N
		a_a(a, &a->a);N
		a->a_a = A_A;N
		a = a_a(a, &a->a,N
				    a_a_a(&a->a),N
				    a->a,N
				    &a->a);N
		a (a == A_A_A) {N
			A(A_A,N
			   "a a a %a: a a a",N
			   a);N
			a->a_a = a->a->a + a;N
		}N
		a a_a;N
	}N
N
	/*N
	 * Aa a a a a?  Aa a, a a a a a aN
	 * a a a, a a a a a a.N
	 */N
	a (a->a != A_A_A) {N
		a a[A_A_A];N
N
		a_a_a(&a->a, a, a(a));N
		A(A_A, "a: a a '%a' %a a: %a",N
		   a, a_a == A_A_A ? "A" : "A",N
		   a_a_a(a->a));N
		/*N
		 * Aa'a a a a a a a a aN
		 * a a a a.N
		 */N
		a (a->a > 0)N
			a a;N
		/* A Aa'a a a a a. */N
		a (a_a == A_A_A) {N
			a->a_a0 = A_A(a->a_a0, a + 0);N
			a->a_a = A_A_A;N
			a_a(a, a_a_a0a);N
		} a {N
			a->a_a0 = A_A(a->a_a0, a + 0);N
			a->a0_a = A_A_A;N
			a_a(a, a_a_a0a);N
		}N
		a a;N
	}N
N
	/*N
	 * Aa a a a a.N
	 */N
	a = a_a(a, &a->a, a);N
N
 a_a:N
	a (a == A_A_A) {N
		a_a = A_A_A;N
		a (a_a == A_A_A)N
			a->a_a = A_A_A;N
		aN
			a->a0_a = A_A_A;N
	}N
N
 a:N
	a_a(a, &a);N
	a_a_a(&a);N
N
	a_a_a_a(a, a_a, a_a);N
N
	A(&a->a[a]);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a,N
	   a a a, a_a_a *a, a_a_a a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a *a;N
	a a a;N
N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	A((a == a_a_a && !A_A_A0(a)) ||N
	       (a == a_a_a && !A_A_A0(a)));N
N
	a->a_a = A_A_A;N
N
	a = A;N
	a = A;N
	a_a_a(&a);N
N
	a = A_A_A;N
	a (a_a_a) {N
		A(A_A,N
		   "a_a: a a a a a %a",N
		   a);N
		a = a_a_a(&a);N
		a = a_a_a(a->a, &a->a, a,N
					      A, 0, 0, a, a,N
					      &a, A);N
		a (a != A_A_A && a != A_A_A)N
			a a;N
		a = &a;N
		a |= A_A_A;N
	}N
N
	a = a_a(a);N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
	a->a = a;N
N
	/*N
	 * Aa'a a a a a, a a a-a aN
	 * a a a.N
	 * Aa, a a'a a a a a a a'a a a aN
	 * a a a a a a a a'a aN
	 * a a a.N
	 */N
	a = a_a_a(a->a->a, &a->a,N
					  a, a, a, A,N
					  A, 0, a, a, a,N
					  a->a, a_a, a,N
					  &a->a, A,N
					  &a->a);N
	a (a != A_A_A) {N
		A(A_A,N
		   "a_a: a a a %a",N
		   a_a_a(a));N
		a a;N
	}N
N
	a (a == a_a_a) {N
		a->a_a = a;N
		a_a(a, a_a_a0);N
	} a {N
		a->a_a = a;N
		a_a(a, a_a_a0);N
	}N
	a = A;  /* Aa a a a a a a. */N
N
 a:N
	a (a != A)N
		a_a(a, &a);N
	a (a_a_a(&a))N
		a_a_a(&a);N
N
	a (a);N
}N
N
/*N
 * A Aa a a a a a a a a a, a a a a,N
 * a a a a a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		 a a_a_a *a, a_a_a a,N
		 a_a_a a_a)N
{N
	a_a_a *a;N
	a a;N
	a_a_a a = A_A_A;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
	A(a != A);N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
	a = A_A_A(a->a->a);N
	a (a != A &&N
	       (a->a != a || !a_a_a(a, &a->a)))N
		a = A_A_A(a, a);N
	a (a != A) {N
		a (a_a > a->a_a)N
			a->a_a = a_a;N
		a a;N
	}N
	a = a_a(a, a, a);N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	a->a_a = a_a;N
N
	A_A_A(a->a->a, a, a);N
 a:N
	A(&a->a[a]);N
N
	a (a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a,N
		   a a a, a a a)N
{N
	a a;N
	a_a_a a = 0;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
	A(a <= 0);N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a (a->a->a == 0 || a == A_A_A)N
		a_a_a(&a);N
	a(a, a, a, a);N
N
	A(&a->a[a]);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a(a, 0, A_A_A, a);N
N
	A(&a->a[a]);N
}N
N
a aN
a(a_a_a *a, a a a, a a a,N
	   a_a_a a)N
{N
	a0_a a_a;N
N
	a (a == A_A_A) {N
		a (a->a->a != a) {N
			a_a = a->a->a;N
			a_a <<= 0;N
			a_a -= a->a->a;N
			a_a >>= 0;N
			a->a->a = a;N
		} aN
			a_a = a->a->a;N
	} aN
		a_a = ((a0_a)a->a->a / 0 * a)N
			+ ((a0_a)a / 0 * (0 - a));N
N
	a->a->a = (a a) a_a;N
	a->a = (a a) a_a;N
N
	a (a->a->a == 0)N
		a->a->a = a + A_A_A;N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a,N
		    a a a, a a a)N
{N
	a a;N
	a_a_a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	A((a & A_A_A) == 0);N
	A((a & A_A_A) == 0);N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a->a->a = (a->a->a & ~a) | (a & a);N
	a (a->a->a == 0) {N
		a_a_a(&a);N
		a->a->a = a + A_A_A;N
	}N
N
	/*N
	 * Aa a a a a a a a a a a->a aN
	 * a a a a a a->a->a.N
	 */N
	a->a = (a->a & ~a) | (a & a);N
N
	A(&a->a[a]);N
}N
N
/*N
 * Aa a a a (0 / ((0 + a) / 0)^(0/0)) <0..0> aN
 * a a a a, a a a a a a a a 0-0%.N
 *N
 * Aa a a a a a a a.N
 */N
a a a_a[] = {N
	0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,N
	0, 0, 0, 0, 0, 0, 0, 0, 0N
};N
N
#a A_A_A (a(a_a)/a(a_a[0]))N
N
/*N
 * Aa a a a aN
 */N
a aN
a_a_a(a_a_a *a, a_a_a *a,N
		   a a)N
{N
	a a;N
N
	A(a);N
N
	a (a->a == 0 || a->a_a == 0)N
		a;N
N
	a (a)N
		a->a->a++;N
N
	a (a->a->a++ <= a->a_a)N
		a;N
N
	/*N
	 * Aa a a a a a a a aN
	 *N
	 * A: Aa a a a a a a aN
	 */N
	a = (a) a->a->a / a->a->a;N
	a->a->a = a->a->a = 0;N
	A(a->a->a >= 0.0);N
	A(a->a->a <= 0.0);N
	A(a->a_a >= 0.0);N
	A(a->a_a <= 0.0);N
	a->a->a *= 0.0 - a->a_a;N
	a->a->a += a * a->a_a;N
	a->a->a = A_A(a->a->a, 0.0, 0.0);N
N
	a (a->a->a < a->a_a && a->a->a > 0) {N
		a->a->a = a->a *N
			a_a[--a->a->a] / 0;N
		a_a(a->a, "a %0.0a, a a a %a",N
			  a->a->a, a->a->a);N
	} a a (a->a->a > a->a_a &&N
		   a->a->a < (A_A_A - 0)) {N
		a->a->a = a->a *N
			a_a[++a->a->a] / 0;N
		a_a(a->a, "a %0.0a, a a a %a",N
			  a->a->a, a->a->a);N
	}N
N
	/* Aa a a'a a a a */N
	a (a->a->a == 0)N
		a->a->a = 0;N
}N
N
#a A 0AN
aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
	a a = a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a (a->a->a == 0A &&N
	    (a->a->a > A || a->a->a0 > A)) {N
		a (((a->a->a + a->a->a0) & 0a0a) != 0) {N
			a = a;N
		} a {N
			/*N
			 * Aa a a a a'a a a.N
			 */N
			a->a->a++;N
			a (a->a->a == 0a) {N
				a->a->a >>= 0;N
				a->a->a0 >>= 0;N
				a->a->a0 >>= 0;N
				a->a->a0 >>= 0;N
				a->a->a0 >>= 0;N
				a->a->a >>= 0;N
				a->a->a >>= 0;N
			}N
		 }N
	}N
	A(&a->a[a]);N
	a (a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a_a_a(a, a, a);N
N
	a->a->a++;N
	a (a->a->a == 0a) {N
		a->a->a >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a >>= 0;N
		a->a->a >>= 0;N
	}N
	A(&a->a[a]);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a_a_a(a, a, a);N
N
	/*N
	 * Aa a a a a a a a a a aN
	 * a a a.N
	 */N
	a (a->a->a == 0 && a->a->a == 0) {N
		a->a->a0 = 0;N
		a->a->a0 = 0;N
		a->a->a0 = 0;N
		a->a->a0 = 0;N
	} a {N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
	}N
N
	a->a->a++;N
	a (a->a->a == 0a) {N
		a->a->a >>= 0;N
		a->a->a >>= 0;N
		a->a->a >>= 0;N
	}N
	A(&a->a[a]);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a, a a a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a_a_a(a, a, a);N
N
	a (a <= 0A) {N
		a (a->a->a0 <= A) {N
			a->a->a0++;N
			a->a->a0++;N
			a->a->a0++;N
			a->a->a0++;N
		}N
	} a a (a <= 0A) {N
		a (a->a->a0 <= A) {N
			a->a->a0++;N
			a->a->a0++;N
			a->a->a0++;N
		}N
	} a a (a <= 0A) {N
		a (a->a->a0 <= A) {N
			a->a->a0++;N
			a->a->a0++;N
		}N
	} a {N
		a (a->a->a0 <= A)N
			a->a->a0++;N
	}N
N
	a (a->a->a0 == 0a) {N
		a->a->a >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a >>= 0;N
		a->a->a >>= 0;N
	}N
	A(&a->a[a]);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a, a a a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
	a (a < 0A)N
		a = 0A;N
	a (a > a->a->a)N
		a->a->a = a;N
N
	a_a_a(a, a, a);N
N
	a->a->a++;N
	a (a->a->a == 0a) {N
		a->a->a >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a0 >>= 0;N
		a->a->a >>= 0;N
		a->a->a >>= 0;N
	}N
	A(&a->a[a]);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
	a a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
	a = a->a->a;N
	A(&a->a[a]);N
N
	a (a);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a, a a) {N
	a a;N
	a a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
	a (a->a->a0 > A || a >= 0)N
		a = 0;N
	a a (a->a->a0 > A || a >= 0)N
		a = 0;N
	a a (a->a->a0 > A)N
		a = 0;N
	aN
		a = 0;N
	/*N
	 * Aa'a a a a a a a a a a a aN
	 * a.N
	 */N
	a (a > 0 &&N
	    a < a->a->a && a->a->a < 0)N
		a = a->a->a;N
	A(&a->a[a]);N
N
	a (a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a,N
		  a a a *a, a_a a)N
{N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a (a->a->a != A &&N
	    (a == A || a != a->a->a)) {N
		a_a_a(a->a, a->a->a,N
			    a->a->a);N
		a->a->a = A;N
		a->a->a = 0;N
	}N
N
	a (a->a->a == A && a != A && a != 0A) {N
		a->a->a = a_a_a(a->a, a);N
		a->a->a = (a0_a)a;N
	}N
N
	a (a->a->a != A)N
		a(a->a->a, a, a);N
	A(&a->a[a]);N
}N
N
a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		  a a *a, a_a a)N
{N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
	a (a != A && a->a->a != A &&N
	    a >= a->a->a)N
	{N
		a(a, a->a->a, a->a->a);N
		a = a->a->a;N
	} aN
		a = 0;N
	A(&a->a[a]);N
N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a a_a_a *a,N
		     a_a_a **a, a_a_a a)N
{N
	a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a a;N
N
	A(A_A_A(a));N
	A(a != A && *a == A);N
N
	A(a);N
N
	a = A_A_A;N
	a = A_A_A;N
	a = a_a_a_a(a, a, &a, a);N
	A(a != A_A_A);N
	a (a->a_a[a]) {N
		a = A_A_A;N
		a a;N
	}N
	a (a == A) {N
		/*N
		 * Aa a'a a a a a a.N
		 */N
		a = a_a(a);N
		a (a == A) {N
			a = A_A_A;N
			a a;N
		}N
		a->a = *a;N
		a_a(a, a, a);N
		A(A_A, "a: a a %a", a);N
	} aN
		A(A_A, "a: a a %a", a);N
N
	a = a_a_a(a);N
	a = a_a(a, a, a);N
	a (a == A) {N
		a = A_A_A;N
	} a {N
		a_a_a(a, a, a);N
		*a = a;N
	}N
N
 a:N
	A(&a->a[a]);N
N
	a (a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
	a_a_a a;N
	a a_a_a = a;N
	a a;N
N
	A(A_A_A(a));N
	A(a != A);N
	a = *a;N
	A(A_A_A(a));N
	a = a->a;N
	A(A_A_A(a));N
N
	*a = A;N
	a = a_a_a(a->a);N
N
	a = a->a->a_a;N
	A(&a->a[a]);N
N
	a (a->a == 0) {N
		a_a_a(&a);N
		a->a = a + A_A_A;N
	}N
N
	a_a_a = a_a_a(a, a, a, a);N
N
	A(&a->a[a]);N
N
	a->a = A;N
	a_a(a, &a);N
N
	a (a_a_a) {N
		A(&a->a);N
		a_a(a);N
		A(&a->a);N
	}N
}N
N
aN
a_a_a(a_a_a *a) {N
	a a a;N
N
	A(A_A_A(a));N
N
	A(&a->a);N
N
	/*N
	 * Aa a a a.N
	 */N
	a (a = 0; a < a->a; a++)N
		A_A(a_a(a, a, A_A) == a);N
	a (a = 0; a < a->a; a++)N
		A_A(a_a(a, a, A_A) == a);N
N
#a A_A_A_AN
	a_a(a, a, a, A_A);N
#aN
N
	A(&a->a);N
}N
N
aN
a_a_a(a_a_a *a, a a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
	a a;N
N
	A(A_A_A(a));N
	A(a != A);N
N
	A(&a->a);N
	a = a_a_a(a, a) % a->a;N
	A(&a->a[a]);N
	a = A_A_A(a->a[a]);N
	a (a != A) {N
		a = A_A_A(a, a);N
		a (!A_A(a) &&N
		    a_a_a(a, &a->a)) {N
			A_A(a_a(&a,N
						A_A_A) ==N
				      a);N
		}N
		a = a;N
	}N
	A(&a->a[a]);N
	A(&a->a);N
}N
N
aN
a_a_a(a_a_a *a, a a_a_a *a) {N
	a_a_a *a, *a;N
	a a a;N
N
	A(A_A_A(a));N
	A(a != A);N
N
	A(&a->a);N
	a (a = 0; a < a->a; a++) {N
		A(&a->a[a]);N
		a = A_A_A(a->a[a]);N
		a (a != A) {N
			a a;N
			a = A_A_A(a, a);N
			a (!A_A(a) &&N
			    a_a_a(&a->a, a))N
			{N
				a = a_a(&a,N
						A_A_A);N
				A_A(a == a);N
			}N
			a = a;N
		}N
		A(&a->a[a]);N
	}N
	A(&a->a);N
}N
N
a aN
a(a *a, a a) {N
	/*N
	 * Aa'a a a a a a a a a a: aN
	 * a_a_a() a a a a a a a a,N
	 * a a a a a a a a a.N
	 * Aa a a a, a a a a a-a a aN
	 * a, a, a a a a a a.N
	 */N
N
	a_a_a *a = a;N
	a a = (a == A_A_A);N
N
	A(A_A_A(a));N
N
	A(A_A_A(0),N
	   "a a %a a a", a ? "a" : "a");N
}N
N
aN
a_a_a(a_a_a *a, a_a a) {N
	a_a a, a;N
N
	A(A_A_A(a));N
N
	a (a != 0A && a < A_A_A)N
		a = A_A_A;N
N
	a = a - (a >> 0);   /* Aa 0/0a. */N
	a = a - (a >> 0);   /* Aa 0/0a. */N
N
	a (a == 0A || a == 0A || a == 0A)N
		a_a_a(a->a, a, a, 0, 0);N
	aN
		a_a_a(a->a, a, a, a, a);N
}N
N
aN
a_a_a(a_a_a *a, a0_a a, a0_a a,N
		 a a, a a, a a)N
{N
	A(A_A_A(a));N
N
	a->a = a;N
	a->a_a = a;N
	a->a_a = a;N
	a->a_a = a;N
	a->a_a = a;N
}N
N
aN
a_a_a(a_a_a *a) {N
	A(A_A_A(a));N
	a (a->a != 0 && a->a >= a->a);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
N
	A(&a->a[a]);N
	a->a->a++;N
	A(&a->a[a]);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a;N
N
	A(A_A_A(a));N
	A(A_A_A(a));N
N
	a = a->a->a_a;N
N
	A(&a->a[a]);N
	a (a->a->a > 0)N
		a->a->a--;N
	A(&a->a[a]);N
}N
