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
/*! \a */N
N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a/a.a>N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a0.a>N
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
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
N
#a <a0/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a0.a>N
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
#a <a/a.a>N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a a(A_A0)N
#a <a/a.a>N
#a /* A_A0 */N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a A_AN
#a <a/a_a.a>N
#a <a.a>N
#aN
N
#a A_AN
#a <a.a>N
#a a_a a_a_aN
#a a_a a_a_aN
#a a a_aN
#a  /* A_A */N
#a a_a a_a_aN
#a a_a a_a_aN
#a a a_aN
#a /* A_A */N
N
#a A_AN
#a A_A ((a_a)-0)N
#aN
N
#a A_A_AN
#a A_A_A ((a_a)-0)N
#aN
N
#a A_AN
#a A_A 0N
#a A 0N
#a A 0N
#aN
#a A_A 0N
#a A 0N
#a A 0N
#a /* A_A */N
N
#a A_A_A 0N
N
/*%N
 * Aa a a a a.  Aa a a aN
 * a a a a 'a' a a a 'a' a.N
 */N
#a A(a) \N
	a { a = (a);					  \N
	       a (a != A_A_A) a a;	  \N
	} a (0)N
N
#a A(a) \N
	a { a = (a);					  \N
		a (a != A_A_A) {			  \N
			a_a_a(*a);		  \N
			a a;	 			  \N
		}						  \N
	} a (0)N
N
#a A(a, a) \N
	a { a = (a);					  \N
	       a (a != A_A_A) {			  \N
			a_a_a(a_a_a,		  \N
				      A_A_A,  \N
				      A_A_A,	  \N
				      A_A_A,		  \N
				      "%a: %a", a,		  \N
				      a_a_a(a)); \N
			a a;				  \N
		}						  \N
	} a (0)						  \N
N
#a A(a, a, a) \N
	a { a = (a);					  \N
	       a (a != A_A_A) {			  \N
			a_a_a(a_a_a,		  \N
				      A_A_A,  \N
				      A_A_A,	  \N
				      A_A_A,		  \N
				      "%a '%a': %a", a, a,	  \N
				      a_a_a(a)); \N
			a a;				  \N
		}						  \N
	} a (0)						  \N
N
#a A(a, a) \N
	a { a = (a);					  \N
	       a (a != A_A_A)			  \N
			a(a, a);			  \N
	} a (0)						  \N
N
/*%N
 * Aa A a a a a a a a.  Aa a a a aN
 * a a a a a, a a a a a a a aN
 * a a.  Aa a a a a a-a-a a a.N
 * Aa a a a a a 0A.N
 */N
#a A_A_A_A_A	0AN
N
a a_a {N
	a_a_a			a;N
	a a			a;N
	a_a_a			*a;N
	A_A(a a_a)	a;N
};N
N
a a_a {N
	a_a_a			*a;N
	a_a_a			*a;N
	a			a;N
	a			a;N
	a_a_a		a;N
	A_A(a_a_a)		a;N
};N
N
a a {N
	a_a_a			*a;N
	a			a;N
	a			a;N
	a			a;N
	a			a;N
	a			a;N
	A				*a;N
	A_A(a a)	a;N
	a a		*a;N
	a a		*a;N
	a_a_a			*a;N
	a_a_a			*a;N
	a_a_a			*a;N
	a_a_a			*a;N
	a_a_a			*a;N
};N
N
a a {N
	a_a_a			*a;N
	A_A(a a)	a;N
	A_A(a a)	a;N
};N
N
a a {N
	a_a_a			*a;N
	A_A(a a)	a;N
};N
N
/*%N
 * Aa a a a a a a a aN
 * a a a a a a a.N
 */N
a a a_a {N
	a_a_a *			a;N
	a_a_a *			a_a;N
	a_a_a *			a_a;N
	a_a_a *			a;N
	a_a_a *			a;N
	a_a_a *			a_a;N
	a_a_a *		a;N
} a_a_a;N
N
/*%N
 * A a a a a a-a a a a a_a_aN
 * a a 'a'. Aa a a a_a().N
 */N
a a_a_a (*a_a)(a a_a_a *a, a_a_a *a);N
N
/*%N
 * Aa a a a a a a a a.N
 * Aa a a_a a a a a a a aN
 * a a a a, a a a a a.N
 */N
a a {N
		a_a_a *a;N
		a a;N
		a_a_a a;N
} a_a_a;N
N
a a {N
	a_a_a *a;N
} a_a_a_a;N
N
a a a_a_a {N
	A_A_A(a a_a_a);N
	a_a_a_a *a;N
	a_a_a_a *a;N
	a_a_a *a;N
	a_a_a_a *a;N
	a a;N
} a_a_a_a;N
N
a a {N
	a a a;N
#a A_A		A_A('A', 'a', 'a', 'a')N
	a_a_a **a;N
	a_a_a a;N
} a_a_a;N
N
/*N
 * Aa a a a a a a Aa.N
 */N
a a *a_a[] = {N
	/* A 0 */N
	"0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
N
	/* A 0 */N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
	"0.0.A-A.A",N
N
	/* A 0 a A 0 */N
	"0.A-A.A",	/* A A */N
	"0.A-A.A",	/* A */N
	"0.0.A-A.A",	/* A A */N
	"0.0.0.A-A.A",	/* A A */N
	"0.0.0.A-A.A",	/* A A 0 */N
	"0.0.0.A-A.A",	/* A A 0 */N
	"0.0.0.0.A-A.A",	/* A */N
N
	/* Aa Aa0 Aa Aa */N
	"0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.A0.A",N
	"0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.A0.A",N
	/* A A A A A */N
	"A.A.A0.A",N
	"0.A.A.A0.A",	/* A A */N
	"0.A.A.A0.A",	/* A A */N
	"A.A.A.A0.A",	/* A A */N
	"A.A.A.A0.A",	/* A A */N
N
	/* Aa Aa, A 0. */N
	"0.A.A.0.0.0.0.0.A0.A",N
N
	/* A 0 */N
	"A.A0.A",N
N
	/* A 0 */N
	"A.A",N
N
	AN
};N
N
A_A_A_A a aN
a(a a *a, a_a_a a) A_A_A_A;N
N
a aN
a_a_a(a_a_a *a, a_a_a *a);N
N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			a_a_a *a, a_a_a *a,N
			a0_a a, a_a_a **a);N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			 a_a_a *a, a_a_a *a,N
			 a0_a a, a_a_a **a);N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		  a a_a_a *a, a a_a_a *a,N
		  a a_a_a *a);N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		     a a_a_a *a);N
N
a a_a_aN
a_a(a a_a_a *a, a a_a_a *a,N
	       a a_a_a *a, a_a_a *a, a_a_a *a,N
	       a_a_a *a, a_a_a* a,N
	       a_a_a *a, a a, a a_a_a,N
	       a a);N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
		   a_a_a *a, a_a_a *a);N
N
a a_a_aN
a_a_a(a_a_a *a, a a *a, a_a_a *a);N
N
a aN
a_a_a(a_a_a *a, a a);N
N
a aN
a_a_a(a **a);N
N
a a a_a_aN
a(a_a_a **a, a a *a);N
N
a a_a_aN
a(a_a_a **a, a a *a, a_a a);N
N
a a_a_aN
a0(a_a_a **a, a0_a a);N
N
a a a_a_aN
a(a_a_a **a);N
N
a aN
a_a(a a_a_a *a);N
N
#a A_AN
a a_a_aN
a_a(a_a_a *a);N
N
a a_a_aN
a_a(a_a_a *a);N
N
a a_a_aN
a_a(a_a_a *a, a a a, A_a **a, A_a *a);N
N
a a_a_aN
a_a_a(a_a_a *a);N
N
a aN
a_a_a(a_a_a *a);N
N
a a_a_aN
a_a(A_a **a, a a);N
N
a a_a_aN
a_a(a_a_a *a, a *a);N
#aN
a a_a_aN
a_a(a_a_a *a, a a_a_a *a);N
#aN
N
/*%N
 * Aa a a a A a '*a'.  Aa a a aN
 * 'a' (a a-a a) a a a 'a'N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
		   a a_a_a *a, a a *a,N
		   a a *a, a_a_a *a,N
		   a_a_a *a, a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a *a[0];N
	a a_a_a *a = A;N
	a a = 0;N
N
	a (*a != A) {N
		a_a_a(a);N
	}N
	a (a != A) {N
		a[a++] = a_a_a(a, "a");N
	}N
	a (a != A) {N
		a a_a_a *a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			a[a++] = a;N
		}N
	}N
	a (a != A) {N
		a a_a_a *a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			a[a++] = a;N
		}N
	}N
	a[a] = A;N
N
	(a)a_a_a(a, a, &a);N
	a (a == A) {N
		/*N
		 * Aa a a.	*a == A.N
		 */N
		a (A_A_A);N
	}N
N
	a (a != A) {N
		/*N
		 * Aa a A a a a a a a, a a.N
		 * Aa a a a a a a a a aN
		 * a.N
		 */N
		a = a_a_a(a, a);N
	}N
N
	a = a_a_a(a, a, a_a_a,N
				    a, a, 0, a);N
N
	a (a);N
}N
N
/*%N
 * Aa a a a '*a'.  Aa a a aN
 * a_a_a() a a a a_a_a a aN
 * a_a a a 0.N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			a_a_a *a, a_a_a *a,N
			a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a *a[0];N
	a a_a_a *a = A;N
	a a = 0;N
N
	a (*a != A)N
		a_a_a(a);N
	a (a != A)N
		a[a++] = a_a_a(a, "a");N
	a (a != A) {N
		a a_a_a *a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A)N
			a[a++] = a;N
	}N
	a[a] = A;N
N
	(a)a_a_a(a, "a", &a);N
	a (a == A)N
		a (A_A_A);N
N
	/*N
	 * Aa a a a a 0 a a "a a" a a a;N
	 * a a a a a a a a a a a aN
	 * a a a a, a Aa, a a a aN
	 * a A a a a a a a Aa.N
	 */N
	a = a_a_a(a, a, a_a_a,N
				    a, a, 0, a);N
N
	a (a);N
}N
N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			 a a *a, a a *a,N
			 a_a_a *a, a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a *a[0];N
	a a_a_a *a = A;N
	a a_a_a *a;N
	a a = 0;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a a *a;N
	a a_a_a *a;N
N
	a (*a != A)N
		a_a_a(a);N
	a (a != A)N
		a[a++] = a_a_a(a, "a");N
	a (a != A) {N
		a a_a_a *a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A)N
			a[a++] = a;N
	}N
	a[a] = A;N
N
	(a)a_a_a(a, a, &a);N
	a (a == A)N
		/*N
		 * Aa a a.	*a == A.N
		 */N
		a (A_A_A);N
N
	a (a != A) {N
		a = a_a_a(a, a);N
		a (a_a_a(a))N
			a (A_A_A);N
	}N
N
	a = a_a_a(a, A, A, a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(&a);N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a)) {N
		a = a_a_a(a);N
		a = a_a_a(a);N
		a_a_a(&a, a, a(a));N
		a_a_a(&a, a(a));N
		A(a_a_a(a, &a, a_a, 0, A));N
		/*N
		 * Aa a'a a a a a, a a a a a a aN
		 * a a a a a a a a.  Aa a, aN
		 * a a a.a.a a a.a.a, a'a a a aN
		 * a a.a.a, a a a a a a.N
		 * Aa a a (a *)0 a a a a.N
		 */N
		a = a_a_a(*a, a, (a *)0);N
		a (a != A_A_A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a a %a a %a: %a",N
				    a, a, a_a_a(a));N
			a a;N
		}N
N
	}N
N
	a (a);N
N
  a:N
	a_a_a(a);N
	a (a);N
N
}N
N
a a_a_aN
a_a(a a_a_a *a, a *a, a_a_a **a,N
	      a_a_a_a **a, a a **a, a_a_a *a)N
{N
	a_a_a_a a;N
	a_a_a_a *a = A;N
	a0_a a0, a0, a0;N
	a a *a = A, *a = A;N
	a a a[0];N
	a_a_a a;N
	a a a[0];N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a = A;N
	a a *a = A;N
	a {N
		A_A,N
		A_A,N
		A_A,N
		A_A,N
		AN
	} a;N
N
	A(a != A && *a == A);N
	A(a != A && *a == A);N
	A(a != A && *a == A);N
N
	/* a A, a; a A, a a */N
	a0 = a_a_a0(a_a_a(a, "a0"));N
N
	/* a A, a; a A, a */N
	a0 = a_a_a0(a_a_a(a, "a0"));N
N
	/* a A, a; a A, a a */N
	a0 = a_a_a0(a_a_a(a, "a0"));N
N
	a = a_a_a(a_a_a(a, "a"));N
	*a = a;N
N
	a = a_a_a(&a);N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	A(a_a_a(a, &a, a_a, 0, A));N
N
	a (*a) {N
		a = a_a_a(a_a_a(a, "a"));N
N
		a (a(a, "a-a") == 0) {N
			*a = a;N
			a = A_A;N
		} a a (a(a, "a-a") == 0) {N
			*a = a;N
			a = A_A;N
		} a a (a(a, "a-a") == 0) {N
			a = A_A;N
		} a a (a(a, "a-a") == 0) {N
			a = A_A;N
		} a {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a '%a': "N
				    "a a a '%a'",N
				    a, a);N
			a = A_A_A;N
			a a;N
		}N
	} a {N
		a = A;N
	}N
N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a, a(a));N
N
	a(a) {N
	a A_A:N
	a A_A:N
	a A:N
		/*N
		 * Aa a a a a a a aN
		 * a a a AN
		 */N
		a.a.a = a_a_a;N
		a.a.a = a_a_a;N
N
		/*N
		 * Aa a a a a a a a a.N
		 */N
		a.a = A;N
N
		A_A_A(&a.a, a);N
N
		a (a0 > 0a) {N
			A(A_A_A, "a a");N
		}N
		a (a0 & A_A_A) {N
			A(A_A_A, "a a a a a");N
		}N
		a (a0 > 0a) {N
			A(A_A_A, "a a");N
		}N
		a (a0> 0a) {N
			A(A_A_A, "a a");N
		}N
N
		a.a = (a0_a)a0;N
		a.a = (a0_a)a0;N
		a.a = (a0_a)a0;N
N
		a = a_a_a(a_a_a(a, "a"));N
		A(a_a0_a(a, &a));N
		a_a_a(&a, &a);N
		a.a = a.a;N
		a.a = a.a;N
N
		A(a_a_a(A, a.a.a,N
					   a.a.a,N
					   &a, &a));N
		A(a_a_a(a, a_a_a,N
				      &a, a, &a));N
N
		*a = a;N
		a;N
N
	a A_A:N
	a A_A:N
		a = a_a_a(a, a(*a));N
		a->a.a = a_a_a;N
		a->a.a = a_a_a;N
		a->a = A;N
N
		A_A_A(&a->a, a);N
N
		a (a0 > 0a) {N
			A(A_A_A, "a a");N
		}N
		a (a0 > 0a) {N
			A(A_A_A, "a a");N
		}N
		a (a0 > 0a) {N
			A(A_A_A, "a a");N
		}N
N
		a->a_a = (a0_a)a0;N
		a->a = (a0_a)a0;N
		a->a_a = (a0_a)a0;N
N
		a = a_a_a(a_a_a(a, "a"));N
		A(a_a_a(a, &a));N
		a_a_a(&a, &a);N
N
		a (a->a_a) {N
		a A_A_A0:N
			a (a.a != A_A0_A) {N
				A(A_A_A);N
			}N
			a;N
		a A_A_A0:N
			a (a.a != A_A0_A) {N
				A(A_A_A);N
			}N
			a;N
		a A_A_A0:N
			a (a.a != A_A0_A) {N
				A(A_A_A);N
			}N
			a;N
		}N
N
		a->a = a;N
		a->a = a.a;N
		a->a = a_a_a(a, a.a);N
		a(a->a, a.a, a.a);N
N
		*a = a;N
		a = A;N
		a;N
N
	a:N
		A(0);N
		A_A();N
	}N
N
	a (A_A_A);N
N
 a:N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a != A) {N
		a_a_a(a);N
		a_a_a(a, a, a(*a));N
	}N
N
	a (a);N
}N
N
/*%N
 * Aa 'a' a a a a a a 'a'.  Aa a,N
 * a a a a 'a' a a a a a a a a:N
 *N
 *   - 'a_a' a A a a a a a a a 'a',N
 *   - a a a a a a 'a' a a a a 'a'N
 *     a a a a a 'a'.N
 *N
 * 'a' a a a a a a a a a a.  'a' aN
 * a a a a a a a a.N
 */N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
	    a a_a_a *a_a, a_a_a *a,N
	    a a, a_a_a *a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a a *a = A;N
	a_a_a *a = A;N
	a_a_a_a *a = A;N
	a a a;N
	a_a_a a;N
	a a = a;N
N
	a = a_a(a, &a, &a, &a,N
			       &a, a);N
N
	a (a) {N
	a A_A_A:N
		/*N
		 * Aa a a a a. Aa a aN
		 * a A, a a a a a a, a aN
		 * a a a a a a, a a a aN
		 * a. Aa a a A, a a a a AN
		 * a a a.N
		 */N
		a (a != A) {N
			a = a_a_a(a);N
			a = a_a_a(a);N
		} a {N
			a_a_a a;N
N
			A(a != A);N
N
			a_a_a(&a, a, a(a));N
			a_a_a(&a, a(a));N
			a = a_a_a(&a);N
			a = a_a_a(a, &a,N
						   a_a, 0, A);N
			a (a != A_A_A) {N
				a (a);N
			}N
			a = a->a;N
		}N
		a;N
	a A_A_A:N
	a A_A_A:N
		/*N
		 * Aa a a a, a a a a a; a a aN
		 * a a a - a a a a a a a a,N
		 * a a a a a a a a a a.N
		 */N
		a_a_a(a, a_a_a, A_A_A,N
			    "a %a a '%a': %a",N
			    a ? "a-a" : "a-a",N
			    a, a_a_a(a));N
		a (A_A_A);N
	a A_A_A:N
		/*N
		 * Aa a a a a.N
		 */N
		a_a_a(a, a_a_a, A_A_A,N
			    "a %a a '%a': a a a",N
			    a ? "a-a" : "a-a",N
			    a);N
		a (a);N
	a:N
		/*N
		 * Aa a a; a a a a a aN
		 * a a a a a a a a aN
		 * a a.N
		 */N
		a_a_a(a, a_a_a, A_A_A,N
			    "a %a a '%a': %a",N
			    a ? "a-a" : "a-a",N
			    a, a_a_a(a));N
		a (A_A_A);N
	}N
N
	/*N
	 * Aa a a a a a a a a a a a aN
	 * a a a a a a a a a a a a, a aN
	 * a a.N
	 */N
	a (a_a != A && !a_a_a(a_a, a)) {N
		a a;N
	}N
N
	/*N
	 * Aa a 'a' a a a a a a a aN
	 * a a a.  Aa a a a, a a a a a a a aN
	 * a, a a a a a a a a a.N
	 */N
	a (!a_a_a_a(a, a, a)) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a %a a '%a': a a a",N
			    a ? "a-a" : "a-a",N
			    a);N
		a a;N
	}N
N
	/*N
	 * Aa a a a 'a'.  Aa a a "a-a" aN
	 * "a-a" a a a a a a aN
	 * a. Aa a'a a a, a a'a a a a a aN
	 * a, a a a 'a' a a, a a aN
	 * 'a' a 'a' a a a_a_a().N
	 */N
	a = a_a_a(a, a,N
				  a, a,N
				  a != A ? &a : A,N
				  a);N
N
 a:N
	/*N
	 * Aa 'a' a a a.  Aa a a a_a_a()N
	 * a, a a a a a a a a a aN
	 * a, a.a. 'a' a a a A.N
	 */N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa 'a'.N
	 */N
	a (a != A) {N
		a_a_a(a);N
		a_a_a(a, a, a(*a));N
	}N
N
	a (a);N
}N
N
/*N
 * Aa a a a a a a. Aa 'a' a a,N
 * a a a a a a. Aa 'a' a a, a a a aN
 * a a a.N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a_a_a *a, a a,N
	       a a_a_a *a, a_a_a *a)N
{N
	a a_a_a *a, *a0;N
	a a_a_a *a;N
	a_a_a a;N
	a_a_a *a = A;N
N
	A(a_a_a(a, &a));N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a = a_a_a(a);N
N
		a (a0 = a_a_a(a);N
		     a0 != A;N
		     a0 = a_a_a(a0))N
		{N
			A(a_a(a_a_a(a0),N
					  a, a, a->a,N
					  a, a));N
		}N
	}N
N
 a:N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a == A_A_A) {N
		a = A_A_A;N
	}N
	a (a);N
}N
N
/*%N
 * Aa a a a a a a a.N
 */N
a aN
a(a_a_a *a, a a_a_a *a) {N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
N
	a = a_a_a(a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a, &a);N
N
	a (a != A)N
		a_a_a(a, &a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a == A_A_A);N
}N
N
/*%N
 * Aa A a a a a.N
 *N
 * Aa a-a a a a a a-a a a aN
 * a 'a' a 'a'.N
 */N
a a_a_aN
a_a_a(a_a_a *a, a a_a_a *a,N
			  a a_a_a *a, a a_a_a *a,N
			  a a_a, a_a_a *a)N
{N
	a_a_a a = A_A_A;N
	a a_a_a *a_a = A;N
	a a_a_a *a_a = A;N
	a a_a_a *a_a_a = A;N
	a a_a_a *a_a_a = A;N
	a a_a_a *a_a_a = A;N
	a a_a_a *a_a_a = A;N
	a a_a_a *a[0];N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a *a;N
	a a = 0;N
N
	/* Aa a'a a a a a a _a a */N
	a (a(a->a, "_a") == 0 &&N
	    a->a == a_a_a)N
	{N
		a (A_A_A);N
	}N
N
	a (a != A) {N
		a = a_a_a(a, "a");N
		a (a != A) {N
			(a) a_a_a(a, "a-a",N
					   &a_a);N
N
			/* a-a a a-a a a. */N
			(a) a_a_a(a, "a-a",N
					   &a_a_a);N
			(a) a_a_a(a, "a-a",N
					   &a_a_a);N
N
			a[a++] = a;N
		}N
	}N
N
	a (a != A) {N
		(a)a_a_a(a, "a-a", &a_a);N
N
		/* a-a a a-a a a. */N
		(a)a_a_a(a, "a-a", &a_a_a);N
		(a)a_a_a(a, "a-a", &a_a_a);N
N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			a[a++] = a;N
		}N
	}N
N
	a[a++] = a_a_a;N
	a[a] = A;N
N
	a = a_a_a(a, a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a'a a a");N
		a (A_A_A);N
	}N
N
	a = a_a_a(a, a_a_a, a_a_a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a'a a A a");N
		a (A_A_A);N
	}N
N
	a (a_a && a->a == a_a_a) {N
		a a_a_a *a_a = A;N
N
		/*N
		 * Aa a.a a a a a, a aN
		 * a a-a a a-a a a_a_a.N
		 */N
		a (a != A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a a %a "N
				      "a '%a'",N
				      a->a, a_a_a->a);N
N
			(a)a_a_a(a, "a-a",N
					  &a_a);N
N
			a (a_a == A) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a-a a: "N
					      "A: a a a "N
					      "a a");N
			}N
		}N
N
		a (a_a == A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a-a a a a a %a",N
				      a->a);N
N
			(a)a_a_a(a_a_a, "a-a",N
					  &a_a);N
		}N
N
		a (a_a != A) {N
			A(a_a_a(a_a, a, a,N
					     a_a, a));N
		}N
N
		a (!a(a, a_a)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a");N
			a = A_A_A;N
			a a;N
		}N
	}N
N
	a (a->a == a_a_a) {N
		A(a_a_a(a_a, a, a, A, a));N
		A(a_a_a(a_a_a, a, a, A,N
				     a));N
		A(a_a_a(a_a_a, a, a, A,N
				     a));N
N
		A(a_a_a(a_a, a, a, A, a));N
		A(a_a_a(a_a_a, a, a,N
				     A, a));N
		A(a_a_a(a_a_a, a, a,N
				     A, a));N
	}N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a = (a != A ? a_a_a(a) : A);N
	a (a != A)N
		a = a_a_a(a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a-a-a %a: %a",N
			      a, a_a_a(a));N
		a a;N
N
	} a a (a != A) {N
		a (!a_a_a(a)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a-a-a '%a' "N
				      "a a a", a);N
			a = A_A_A;N
			a a;N
		}N
	}N
N
	A(a_a_a(a, a, a_a_a));N
N
  a:N
	a (a);N
}N
N
a a_a_aN
a(a a_a_a *a, a_a_a *a) {N
	a a_a_a *a;N
	a a_a_a *a;N
	a a *a;N
	a_a_a a;N
	a_a_a *a;N
	a a;N
	a_a_a a;N
	a_a_a a;N
N
	a = a_a_a(&a);N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a = a_a_a(a);N
		a = a_a_a(a_a_a(a, "a"));N
		a_a_a(&a, a, a(a));N
		a_a_a(&a, a(a));N
		A(a_a_a(a, &a, a_a, 0, A));N
		a = a_a_a(a_a_a(a, "a"));N
		A(a_a_a(a, a, a));N
	}N
N
	a = A_A_A;N
N
 a:N
	a (a);N
}N
N
/*%N
 * Aa a a a a a a a a a a.N
 */N
a a_a_aN
a_a_a_a(a a_a_a **a, a a,N
			      a_a_a **a, a_a_a *a,N
			      a a_a)N
{N
	a_a_a a = A_A_A;N
	a_a_a *a;N
	a_a_a a;N
	a a a, a;N
	a a_a_a *a = A;N
	a a a = A;N
	a_a_a a = -0;N
N
	a (a) {N
	a A_A:N
		a = a_a_a(a, "a-a", &a);N
		A(a == A_A_A);N
		a;N
	a A_A0:N
		a = a_a_a(a, "a-a-a0", &a);N
		A(a == A_A_A);N
		a;N
	a:N
		A(0);N
		A_A();N
	}N
N
	a = *(a_a_a(a));N
	A(a_a_a(&a) == a);N
N
	a = a_a_a(a);N
	a (a != -0 && a != A)N
		*a = a;N
N
	/*N
	 * Aa a a'a a a a a, a'a a!N
	 */N
	a (a) {N
	a A_A:N
		a = a_a_a0();N
		a;N
	a A_A0:N
		a = a_a_a0();N
		a;N
	a:N
		A(0);N
		A_A();N
	}N
	a (a != A_A_A)N
		a (A_A_A);N
N
	/*N
	 * Aa a a a a a a a a.N
	 */N
	a = 0;N
	a |= A_A_A;N
	a (a) {N
	a A_A:N
		a |= A_A_A0;N
		a;N
	a A_A0:N
		a |= A_A_A0;N
		a;N
	}N
	a (a_a_a(&a) == 0) {N
		a |= A_A_A;N
		a = A;N
	} a {N
		A(a != A);N
		a (a_a) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a a-a a "N
				    "a a a a a a "N
				    "a.");N
		}N
	}N
N
	a = 0;N
	a |= A_A_A;N
	a |= A_A_A;N
	a |= A_A_A0;N
	a |= A_A_A0;N
N
	a = A;N
	a = a_a_a(a_a_a, a_a_a,N
				     a_a_a, &a, 0,N
				     a, 0, 0, 0,N
				     a, a, &a);N
	a (a != A_A_A) {N
		a_a_a a;N
		a a[A_A_A];N
N
		a (a) {N
		a A_A:N
			a_a_a(&a);N
			a;N
		a A_A0:N
			a_a_a0(&a);N
			a;N
		}N
		a (a_a_a(&a, &a))N
			a (A_A_A);N
		a_a_a(&a, a, a(a));N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a a a (%a)",N
			      a);N
		a (a);N
	}N
N
	*a = a;N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a) {N
	a_a_a a;N
	a_a_a a;N
	a a_a_a *a;N
	a_a_a a;N
	a a a = 0;N
	a a *a;N
	a_a_a a;N
	a_a_a a;N
	a a;N
N
	a = a_a_a(a_a_a(a, "a"),N
				    a_a_a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a_a_a(a, "a"),N
				   a_a_a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, "a");N
	a (a_a_a(a))N
		a = a_a_a(a);N
	aN
		a = "*";N
	a = (a(a, "*") == 0);N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	a_a_a(&a);N
	a = a_a_a(a_a_a(&a), &a,N
				   a_a, 0, A);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, "a");N
	A(a_a_a(a));N
	a = a_a_a(a);N
	a (!a(a, "a")) {N
#a A_A_AN
		a = A_A_A;N
#aN
		a = A_A_A;N
#a /* A_A_A */N
	} a a (!a(a, "a")) {N
		a = A_A_A;N
	} a a (!a(a, "a")) {N
		a = A_A_A;N
	} a a (!a(a, "a")) {N
		a = A_A_A;N
	} a {N
		A(0);N
		A_A();N
	}N
N
	/*N
	 * "*" a a a a a a (A 0 a).N
	 * Aa a_a_a(".", "*.") a A a aN
	 * a a a "." a a a a "*".N
	 */N
	a (a) {N
		a = a_a_a(a, a_a,N
				       a, a, a);N
		a (a != A_A_A)N
			a (a);N
	}N
N
	a (a_a_a(a, a_a_a(&a),N
			      a, a, a));N
}N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a_a_a *a;N
	a a_a_a *a;N
	a a *a;N
	a_a_a a;N
	a a a;N
N
	a_a_a(a_a_a(a), &a, &a);N
N
	a = A;N
	a = a_a_a(a, &a, a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a != A) {N
		a0_a a = a_a_a0(a);N
		a (a < 0A)N
			a = 0A;N
		a (a > 0A)N
			a = 0A;N
		A(a_a_a(a, (a0_a)a));N
	}N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A) {N
		a0_a a = a_a_a0(a);N
		a (a > 0A)N
			a = 0A;N
		A(a_a_a(a, (a0_a)a));N
	}N
N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a != A) {N
		a0_a a = a_a_a0(a);N
		a (a < 0A)N
			a = 0A;N
		a (a > 0A)N
			a = 0A;N
		A(a_a_a(a, (a0_a)a));N
	}N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a != A) {N
		a0_a a = a_a_a0(a);N
		a (a > 0A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a a a "N
				    "a 0: a");N
			a = 0A;N
		}N
		A(a_a_a(a, (a0_a)a));N
	}N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a(a)));N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a != A)N
		A(a_a_a(a, a_a_a0(a)));N
N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A) {N
		a = a_a_a(a);N
		a (a(a, "a-a") == 0) {N
			A(a_a_a(a,N
							 a_a_a));N
		} a a (a(a, "a-a") == 0) {N
			A(a_a_a(a,N
							 a_a_a));N
		} a {N
			A(0);N
			A_A();N
		}N
	}N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a != A) {N
		a = a_a_a(a, a_a_a(a));N
		a (a != A_A_A)N
			a a;N
	}N
N
	a = A;N
	a (a.a == A_A)N
		(a)a_a_a(a, "a-a", &a);N
	aN
		(a)a_a_a(a, "a-a-a0", &a);N
	a (a != A) {N
		a = a_a_a(a,N
						    a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a = a_a_a(a, a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a_a_a_a(a_a_a,N
					    a_a_a(a));N
	}N
N
	a = A;N
	a (a.a == A_A)N
		(a)a_a_a(a, "a-a", &a);N
	aN
		(a)a_a_a(a, "a-a-a0", &a);N
	a (a != A) {N
		a = a_a_a(a,N
						  a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a = a_a_a(a, a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a_a_a_a(a_a_a,N
					    a_a_a(a));N
	}N
N
	a = A;N
	a (a.a == A_A)N
		(a)a_a_a(a, "a-a", &a);N
	aN
		(a)a_a_a(a, "a-a-a0", &a);N
	a (a != A) {N
		a = a_a_a(a,N
						 a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a = a_a_a(a, a_a_a(a));N
		a (a != A_A_A)N
			a a;N
		a_a_a_a(a_a_a,N
					    a_a_a(a));N
	}N
N
	*a = a;N
	a (A_A_A);N
N
 a:N
	a_a_a(&a);N
	a (a);N
}N
N
#a A_AN
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		a a_a_a *a)N
{N
	a_a_a a = A_A_A;N
	a a_a_a *a;N
	a a *a, *a;N
N
	/* Aa a a a a a a a a a a . */N
	a = a_a_a(a_a_a(a, "a"));N
	a = a_a_a(a_a_a(a, "a"));N
N
	a = a_a_a(a, "a");N
	a (a != A)N
		a = a_a_a(a, a, a_a_a(a),N
					a_a_a(a), a_a_a(a),N
					a, a);N
N
	a (a != A_A_A)N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a '%a' a a: %a",N
			      a, a_a_a(a));N
	a (a);N
}N
#aN
N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a *a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
N
	a = a_a_a(&a);N
	a = a_a_a(a_a_a(a, "a"));N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	A(a_a_a(a, &a, a_a, 0, A));N
N
	a = a_a_a(a, "a");N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a a;N
		a_a_a a;N
N
		A_A(a_a_a(a_a_a(a)), a.a);N
		a.a = a(a.a);N
N
		a = a_a_a(&a, &a);N
		a (a != A_A_A) {N
			a0_a a;N
			a = a_a_a0(&a, a.a, 0);N
			a = a;N
		}N
		a (a != A_A_A) {N
			a_a_a(a_a_a(a),N
				    a_a_a, A_A_A,N
				    "a a");N
			A(a);N
		}N
		A(a_a_a_a(a, a, a));N
	}N
 a:N
	a (a);N
}N
N
a a_a_aN
a_a_a(a a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a *a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
N
	a = a_a_a(&a);N
	a = a_a_a(a_a_a(a, "a"));N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	A(a_a_a(a, &a, a_a, 0, A));N
N
	a = a_a_a(a, "a");N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a a;N
		a_a_a a;N
N
		A_A(a_a_a(a_a_a(a)), a.a);N
		a.a = a(a.a);N
N
		/* a_a_a a a a. */N
		a = a_a_a(&a, &a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a(a),N
				    a_a_a, A_A_A,N
				    "a a");N
			A(a);N
		}N
		A(a_a_a_a_a(a, a, a));N
	}N
 a:N
	a (a);N
}N
N
a aN
a_a_a(a a_a_a *a, a_a_a *a) {N
	a a_a_a *a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a a_a_a *a;N
	a a *a;N
	a_a_a a;N
N
	a = a_a_a(&a);N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a = a_a_a(a);N
		a = a_a_a(a);N
		a_a_a(&a, a, a(a));N
		a_a_a(&a, a(a));N
		a = a_a_a(a, &a, a_a,N
					   0, A);N
		A_A(a == A_A_A);N
		a (a_a_a(a, a))N
			a (a);N
	}N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a a, a a **a,N
	     a_a_a *a)N
{N
	a **a = A;N
	a a a;N
	a_a_a a = A_A_A;N
N
	A(a_a_a(a, &a, a));N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a (a = 0; a < a; a++)N
		a (a[a] == A || a(a[a], a[a]) != 0)N
			A(A_A_A);N
N
	/*N
	 * Aa a a a a a a.N
	 */N
	a (a == a && a[a] != A)N
		a = A_A_A;N
N
 a:N
	a_a_a(a, a);N
	a (a);N
}N
N
a a_a_aN
a(a_a_a *a, a_a_a *a, a_a_a_a a) {N
	a_a_a a;N
	a_a_a *a;N
N
	a_a_a(a, a);N
N
	a = A;N
	a (a == a_a_a) {N
		a = a_a_a(a, &a,N
					  a_a_a);N
		a (a != A_A_A)N
			a (a);N
	}N
	a_a_a(a, a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (A_A_A);N
}N
N
a a_a_a *N
a_a(a_a_a *a, a a *a,N
	       a_a_a a)N
{N
	a_a_a *a;N
N
	a (a = A_A_A(*a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a (a->a == a &&N
		    a(a_a_a(a->a), a) == 0)N
			a (a);N
	}N
N
	a (A);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a,N
	       a a_a_a_a)N
{N
	a (a->a != a->a ||N
	    a->a != a->a ||N
	    a_a_a(a->a) !=N
	    a_a_a_a ||N
	    a->a != a->a ||N
	    a->a != a->a ||N
	    a->a != a->a ||N
	    a->a != a->a) {N
		a (a);N
	}N
N
	a (a);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a,N
	       a a_a_a_a,N
	       a0_a a_a_a_a,N
	       a0_a a_a_a)N
{N
	/*N
	 * Aa a a a a a a a a a, a a aN
	 * a a a a.N
	 */N
	a (!a_a(a, a, a_a_a_a))N
		a (a);N
N
	/*N
	 * Aa a a a a a a a a aN
	 * a a a.N
	 */N
	a (a_a_a(a->a) != a_a_a ||N
	    a_a_a(a->a) != a_a_a_a) {N
		a (a);N
	}N
N
	a (a);N
}N
N
/*N
 * Aa a A a a a a a a a a aN
 */N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a) {N
	a_a_a *a = a_a_a(a);N
	a_a_a a = a->a;N
	a_a_a a;N
N
	a = a_a_a(a_a_a->a, a);N
	a (a != A_A_A)N
		a (a);N
	a_a_a(a, a_a_a->a);N
N
	a (a_a_a_a_a(a, a,N
						   a, a));N
}N
N
a a_a_aN
a0_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	      a a a, a a *a,N
	      a a *a)N
{N
	a a[0+a("a0.a.")] = { 0 };N
	a a[a("a.a.")];N
	a a *a0_a[0] = { "_a0", "a0", ".", "." };N
	a a *a = ": a ";N
	a a *a = a->a;N
	a a a *a0;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a a0_a = 0;N
	a_a_a a;N
	a_a_a a;N
N
	A(a == 0 || a == 0 || a == 0 ||N
		a == 0 || a == 0 || a == 0);N
N
	a (!a(a, "_a")) {N
		a = "";N
		a = "";N
	}N
N
	/*N
	 * Aa a a a a a a.N
	 */N
	a0 = a->a.a0.a0_a;N
	a (a > 0) {N
		a -= 0;N
		a(a, a(a), "%a.%a.", a0[a/0] & 0a,N
			 (a0[a/0] >> 0) & 0a);N
		a(a, a, a(a));N
	}N
	a(a, "a0.a.", a(a));N
N
	/*N
	 * Aa a a a.N
	 */N
	a (a != A)N
		a0_a[0] = a;N
	a (a != A)N
		a0_a[0] = a;N
	a = a_a_a(&a);N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	A(a_a_a(a, &a, a_a, 0, A));N
	A(a_a_a(&a, a));N
	A(a_a_a(a, a));N
	a_a_a(a, a);N
	A(a_a_a(a_a_a->a, a));N
	a_a_a(a, a->a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, a_a_a->a);N
	a_a_a(a, a0_a, a0_a);N
	a (a->a != A)N
		a_a_a(a, a->a);N
	a (a->a != A)N
		a_a_a(a, a->a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, A_A_A, a);N
	A(a(a, a, a_a_a));	/* A */N
	A(a_a_a(a, a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a0 a a%a%a: %a", a,N
		      a, a);N
N
a:N
	a (a != A)N
		a_a_a(&a);N
	a (a);N
}N
N
#a A_AN
a a a_a_a a_a_a_a;N
a a_a_a {N
	a_a_a	a;N
	a		*a;N
	a_a		a_a;N
	a_a_a	*a;N
};N
N
/*N
 * Aa a a A a a.N
 */N
a aN
a_a_a(a_a_a_a *a, a a *a, ...) {N
	a_a a_a, a_a, a_a_a;N
	a *a_a;N
	a_a a;N
N
	a (a->a == A) {N
		a->a = a_a_a(a->a, 0);N
		a->a[0] = '\0';N
		a->a_a = 0;N
	}N
N
	a_a = a(a->a);N
	a_a(a, a);N
	a_a = a(a->a + a_a, a->a_a - a_a,N
			    a, a) + 0;N
	a_a(a);N
N
	a (a_a + a_a <= a->a_a)N
		a (a);N
N
	a_a_a = ((a_a + a_a)/0 + 0) * 0;N
	a_a = a_a_a(a->a, a_a_a);N
N
	a(a_a, a->a, a_a);N
	a_a_a(a->a, a->a, a->a_a);N
	a->a_a = a_a_a;N
	a->a = a_a;N
N
	/* a a a a a a a a_a()a a a */N
	a_a(a, a);N
	a(a->a + a_a, a->a_a - a_a, a, a);N
	a_a(a);N
	a (a);N
}N
N
/*N
 * Aa a A a a a a a a a aN
 * a a a.  Aa a a a.N
 */N
a aN
a_a_a(a a_a_a **a_a,N
		a a_a_a **a ,a a_a_a *a,N
		a a *a, a_a_a_a *a)N
{N
	a (a != A && a->a != A_A_A) {N
		*a_a = A;N
		a (a);N
	}N
N
	*a_a = a_a_a(a, a);N
	a (a_a_a(*a_a)) {N
		*a_a = A;N
		a (a != A &&N
		    A_A_A != a_a_a(a, a, a_a))N
			*a_a = A;N
	}N
	a (a);N
}N
N
/*N
 * Aa a A a a a a a a a aN
 * a a a a.N
 */N
a aN
a_a_a_a(a a_a_a *a, a a* a,N
		   a_a_a_a *a)N
{N
	a a_a_a *a_a;N
N
	a (!a_a_a(&a_a, A, a, a, a))N
		a;N
	a (a_a == A)N
		a;N
	a (a == A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "\"%a\" a \"a-a a\"",N
			    a);N
		a;N
	}N
N
	a_a_a(a, " %a %a", a,N
			 a_a_a(a_a) ? "a" : "a");N
}N
N
a aN
a_a_a(a a_a_a *a, a a *a,N
		a_a_a_a *a)N
{N
	a a_a_a *a_a;N
N
	a (!a_a_a(&a_a, A, a, a, a))N
		a;N
	a (a_a == A)N
		a;N
	a (a == A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "\"%a\" a \"a-a a\"",N
			    a);N
		a;N
	}N
N
	a (a_a_a(a_a)) {N
		a_a_a(a, " %a %a", a,N
				 a_a_a(a_a));N
	} a {N
		a_a_a(a, " %a %a", a,N
				 a_a_a0(a_a));N
	}N
}N
N
/*N
 * Aa a a A a a a a a aN
 * a_a_a_a().N
 */N
a a_a_aN
a_a(a_a_a *a, a a_a_a **a,N
	    a a_a, a a_a,N
	    a_a_a_a *a_a, a_a_a_a *a_a,N
	    a **a_a, a_a *a_a_a,N
	    a a_a_a *a_a, a a_a_a *a_a)N
{N
	a_a_a_a a;N
	a a_a_a *a_a, *a;N
	a_a_a_a a_a;N
	a a;N
	a a *a;N
N
	a(&a, 0, a(a));N
	a.a = A_A_A;N
	a.a = a->a;N
N
	a (a_a = 0;N
	     a_a != A && a.a == A_A_A;N
	     ++a_a) {N
		a_a = a_a_a(a_a);N
N
		a = a_a_a(a_a_a(a_a, "a a"));N
		a_a_a(&a, "a \"%a\"", a);N
N
		a = a_a_a(a_a, "a");N
		a (!a_a_a(a)) {N
			a = a_a_a(a_a_a(a, "a a"));N
			a_a_a(&a, " a %a", a);N
			a (a(a, "a") == 0) {N
				a = a_a_a(a_a_a(a,N
								   "a"));N
				a_a_a(&a, " %a", a);N
			}N
		}N
N
		a_a_a_a(a_a, "a-a", &a);N
		a_a_a_a(a_a, "a", &a);N
		a_a_a(a_a, "a-a-a", &a);N
		a = a_a_a(a_a, "a-a");N
		a (!a_a_a(a)) {N
			a (a_a_a(a))N
				*a_a |= A_A_A(a_a);N
			aN
				*a_a &= ~A_A_A(a_a);N
		}N
		a = ((*a_a & A_A_A(a_a)) != 0);N
		a (a_a != a)N
			a_a_a(&a, a ? " a-a a " :N
					  " a-a a ");N
		a = a_a_a(a_a, "a-a");N
		a (!a_a_a(a)) {N
			a (a_a_a(a))N
				*a_a |= A_A_A(a_a);N
			aN
				*a_a &= ~A_A_A(a_a);N
		}N
		a = ((*a_a & A_A_A(a_a)) != 0);N
		a (a_a != a)N
			a_a_a(&a, aN
						 ? " a-a a "N
						 : " a-a a ");N
		a_a_a(&a, ";\a");N
		a_a = a_a_a(a_a);N
	}N
N
	a_a_a_a(a_a, "a-a",  &a);N
	a_a_a(a_a, "a-a-a",  &a);N
	a_a_a(a_a, "a-a-a",  &a);N
	a_a_a_a(a_a, "a-a-a",  &a);N
	a_a_a_a(a_a, "a-a",  &a);N
	a (!a_a)N
		a_a_a(&a, " a-a a ");N
	a (!a_a)N
		a_a_a(&a,  " a-a a ");N
N
	/*N
	 * Aa a a a a a a a-aN
	 * a a a a a a a a.N
	 */N
	a (a_a_a(&a, a, a_a, "a-a", &a) &&N
	    a != A)N
		a_a_a(&a, " %a\a", a_a_a(a));N
N
	a (a.a == A_A_A) {N
		*a_a = a.a;N
		*a_a_a = a.a_a;N
	} a {N
		a (a.a != A)N
			a_a_a(a.a, a.a, a.a_a);N
		*a_a = A;N
		*a_a_a = 0;N
	}N
	a (a.a);N
}N
#aN
N
a a_a_aN
a_a_a(a_a_a *a, a a_a_a *a, a_a_a *a,N
		   a a *a, a a *a)N
{N
	a_a_a a;N
N
	a = a_a_a(a, a, A_A_A, a->a);N
	a (a != A_A_A)N
		a_a_a(a, a_a_a, A_A_A_A,N
			    "a %a '%a'", a, a);N
	a (a);N
}N
N
a a_a_aN
a_a_a0(a_a_a *a, a a_a_a *a, a_a_a *a,N
		    a a *a, a a_a_a *a)N
{N
	a_a_a a;N
N
	a = a_a_a0(a, a, a, A_A_A,N
				      a->a);N
	a (a != A_A_A)N
		a_a_a(a, a_a_a, A_A_A_A,N
			    "a a '%a'", a);N
	a (a);N
}N
N
a a_a_aN
a_a_a(a_a_a *a, a a_a_a *a,N
		   a a_a_a,N
		   a a_a_a,N
		   a_a_a a_a,N
		   a0_a a_a,N
		   a a_a_a_a *a,N
		   a *a_a_a)N
{N
	a a_a_a *a_a, *a;N
	a a *a;N
	a_a_a_a *a = A;N
	a_a_a a;N
	a_a_a_a a_a;N
N
	A(a != A || !*a_a_a);N
N
	a_a = a_a_a(a);N
N
	a (a->a->a.a_a >= A_A_A_A) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "a a %a a a a a",N
			    A_A_A_A);N
		a (A_A_A);N
	}N
N
	a = a_a_a_a(a->a, &a);N
	a (a != A_A_A) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "Aa a a A a : %a",N
			    a_a_a(a));N
		a (a);N
	}N
N
	a = a_a_a(a_a, "a-a");N
	a (a_a_a(a) ?N
	    a_a_a : a_a_a(a))N
	{N
		a->a->a.a_a_a &= ~A_A_A(a->a);N
	} a {N
		a->a->a.a_a_a |= A_A_A(a->a);N
	}N
N
	a = a_a_a(a_a, "a");N
	a (!a_a_a(a) && !a_a_a(a)) {N
		a->a->a.a_a |= A_A_A(a->a);N
	} a {N
		a->a->a.a_a &= ~A_A_A(a->a);N
	}N
N
	a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a)) {N
		a->a_a_a = a_a_a(a);N
	} a {N
		a->a_a_a = a_a;N
	}N
N
	a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a)) {N
		a->a_a_a = a_a_a(a);N
	} a {N
		a->a_a_a = a_a;N
	}N
N
	a (*a_a_a && a->a_a_a != a->a_a_a)N
		*a_a_a = a;N
N
	a = a_a_a(a_a_a(a_a, "a a"));N
	a = a_a_a(a, a_a, &a->a, a, "a");N
	a (a != A_A_A)N
		a (a);N
	a (a_a_a(&a->a, a_a)) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "a a a '%a'", a);N
		a (A_A_A);N
	}N
	a (!a->a->a.a_a) {N
		a (a_a = 0;N
		     a_a < a->a->a.a_a - 0;N
		     ++a_a)N
		{N
			a (a_a_a(&a->a->a[a_a]->a,N
					   &a->a)) {N
				a_a_a(a_a, a_a_a,N
					    A_A_A_A,N
					    "a '%a'", a);N
				a = A_A_A;N
				a (a);N
			}N
		}N
	}N
	a (*a_a_a && !a_a_a(&a->a, &a->a))N
		*a_a_a = a;N
N
	a = a_a_a0(a, a_a, &a->a_a,N
				     A_A_A_A_A, &a->a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a0(a, a_a, &a->a,N
				     A_A_A_A, &a->a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a0(a, a_a, &a->a,N
				     A_A_A_A, &a->a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a0(a, a_a, &a->a,N
				     A_A_A_A, &a->a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a_a, &a->a,N
				    A_A_A_A, "a");N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a_a, &a->a,N
				    A_A_A_A, "a");N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a_a, &a->a_a,N
				    A_A_A_A_A, "a");N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a_a, "a");N
	a (a_a_a(a)) {N
		a->a = A_A_A_A;N
	} a {N
		a = a_a_a(a_a_a(a, "a a"));N
		a->a = a_a_a0a(a);N
		A(a->a != A_A_A_A);N
		a (a->a == A_A_A_A) {N
			a = a_a_a(a_a_a(a, "a"));N
			a = a_a_a(a, a_a, &a->a,N
						    a, "a");N
			a (a != A_A_A)N
				a (a);N
		}N
	}N
	a (*a_a_a && (a->a != a->a ||N
			     !a_a_a(&a->a, &a->a)))N
		*a_a_a = a;N
N
	a = a_a_a(a_a, "a-a");N
	a (a_a_a(a)) {N
		a->a = a_a_a;N
	} a {N
		a->a = a_a_a(a);N
	}N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a **a,N
	      a a_a_a *a_a, a *a_a_a)N
{N
	a a_a;N
	a a_a_a *a_a;N
	a *a_a;N
	a_a a_a_a;N
	a a_a_a *a_a;N
	a a_a_a, a_a_a;N
	a a_a, a_a;N
	a_a_a_a a_a, a_a;N
	a_a_a a_a;N
	a0_a a_a;N
	a_a_a_a *a;N
	a a_a_a_a *a;N
	a_a_a *a;N
	a a_a_a_a *a_a;N
	a_a_a a;N
	a a;N
N
	*a_a_a = a;N
N
	a_a = a_a_a(a_a_a(a_a, "a a"));N
	a (a_a == A)N
		a (A_A_A);N
N
	a_a = a;N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a)) {N
		a_a = a_a_a(a_a);N
	}N
	a_a = a_a ? A_A_A_A : 0;N
N
	a_a = a;N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a)) {N
		a_a = a_a_a(a_a);N
	}N
	a_a = a_a ? A_A_A_A : 0;N
N
	/*N
	 * "a-a a|a" a a a a a a a-aN
	 * a.N
	 */N
	a_a = a;N
	a_a = A;N
	a_a_a = 0;N
	a_a = A;N
	(a)a_a_a(a, "a-a", &a_a);N
	a (a_a != A) {N
		a_a = a_a_a(a_a);N
	}N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a)) {N
		a_a = a_a_a(a_a);N
	}N
#a A_AN
	a (a_a) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "\"a-a a\" a"N
			    " a `./a --a-a`");N
		a (A_A_A);N
	}N
#aN
	a (a_a) {N
		a (a == A) {N
			a_a_a(a_a, a_a_a, A_A_A_A,N
				    "\"a-a a\" a %a",N
				    a_a_a_a.a);N
			a (A_A_A);N
		}N
N
		/*N
		 * Aa a A Aa Aa AaN
		 * a a.N
		 */N
		a = a_a(a, a,N
				      a_a, a_a,N
				      &a_a, &a_a,N
				      &a_a, &a_a_a,N
				      a_a, a_a);N
		a (a != A_A_A)N
			a (a);N
	}N
#aN
N
	a = a_a_a_a(&a->a, a_a,N
				   a_a_a, a->a,N
				   a_a_a, a_a_a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a->a;N
N
	a->a.a_a = a_a;N
	a->a.a_a = a_a;N
N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a) && !a_a_a(a_a)) {N
		a_a_a = a;N
	} a {N
		a_a_a = a;N
	}N
N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a) && !a_a_a(a_a)) {N
		a_a_a = a;N
	} a {N
		a_a_a = a;N
	}N
N
	a_a = a_a_a(a_a, "a-a");N
	a (!a_a_a(a_a) && a_a_a(a_a)) {N
		a->a.a_a = a;N
	} a {N
		a->a.a_a = a;N
	}N
N
	a_a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a_a))N
		a_a = a_a_a(a_a);N
	aN
		a_a = A_A_A_A_A;N
N
	a_a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a_a))N
		a_a = a_a_a(a_a);N
	aN
		a_a = A_A_A_A;N
N
	a_a = a_a_a(a_a, "a-a-a");N
	a (a_a_a0(a_a))N
		a->a.a_a_a = a_a_a0(a_a) + 0;N
	aN
		a->a.a_a_a = 0;N
N
	a_a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a_a) || a_a_a(a_a))N
		a->a.a_a_a = a;N
	aN
		a->a.a_a_a = a;N
N
	a_a = a_a_a(a_a, "a-a-a");N
	a (a_a_a(a_a) || a_a_a(a_a))N
		a->a.a_a_a = a;N
	aN
		a->a.a_a_a = a;N
N
	a = A;N
	a = a_a_a(&a_a_a->a,N
				   a->a, a->a, &a);N
	a (a == A_A_A) {N
		a = a->a;N
	} a {N
		a = A;N
	}N
	a (a == A) {N
		*a_a_a = a;N
	} a {N
		*a_a_a = a;N
	}N
N
	a (a = 0;N
	     a_a != A;N
	     ++a, a_a = a_a_a(a_a))N
	{N
		A(!*a_a_a || a != A);N
		a (*a_a_a && a < a->a.a_a) {N
			a_a = a->a[a];N
		} a {N
			*a_a_a = a;N
			a_a = A;N
		}N
		a = a_a_a(a, a_a,N
					    a_a_a,N
					    a_a_a,N
					    a_a,N
					    a_a,N
					    a_a, a_a_a);N
		a (a != A_A_A) {N
			a (a != A)N
				a_a_a(&a);N
			a (a);N
		}N
	}N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a a a, a a a a a a.N
	 * Aa a a a a a a a a a a.N
	 */N
	a (*a_a_a) {N
		a (a != A &&N
		    a(&a->a, &a->a, a(a->a)) != 0)N
		{N
			*a_a_a = a;N
		} a a ((a == A || a->a_a == A) !=N
			   (a->a_a == A))N
		{N
			*a_a_a = a;N
		} a a (a != A &&N
			   a->a_a != A &&N
			   a(a->a_a, a->a_a) != 0)N
		{N
			*a_a_a = a;N
		}N
	}N
N
	a (*a_a_a) {N
		a_a_a_a(&a->a);N
		a_a_a_a(a->a, &a->a);N
	} a a (a != A && a != A) {N
		++a->a->a_a;N
		a->a->a_a = a->a->a_a;N
		a_a_a(a_a, a_a_a, A_A_A_A0,N
			    "a A a: a %a",N
			    a->a->a_a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (A_A_A);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a0) {N
	a_a_a_a *a = (a_a_a_a *) a0;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a a[A_A_A];N
	a a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a;N
	a_a_a *a = A;N
N
	a = (a_a_a *) a->a->a_a_a;N
	a (a == A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a-a-a a a a "N
			      "a; a a a a a a");N
		a a;N
	}N
N
	a_a_a(&a, a, A_A_A);N
	a_a_a(a_a_a_a(a->a), a, &a);N
	a_a_a0(&a, 0);N
N
	/* Aa a'a a a */N
	a = a_a_a(a->a->a,N
			     a_a_a_a(a->a), 0, A, &a);N
N
	a (a->a == a) {N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a: a \"%a\" a a a "N
				      "a a \"%a\"",N
				      a_a_a(a),N
				      a);N
			a a;N
		} a {N
			a (!a_a_a(a)) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a: "N
					      "a_a_a: "N
					      "a '%a' a a a a "N
					      "a a",N
					      a);N
				a a;N
			}N
			a (a_a_a_a(a) != a->a) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a: a_a_a: "N
					      "a '%a' a a a "N
					      "a a",N
					      a);N
				a a;N
			}N
			a_a_a(&a);N
		}N
N
	} a {N
		a (a == A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a: a \"%a\" a a "N
				      "a a a a",N
				      a);N
			a a;N
		} a a (a != A_A_A &&N
			   a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a: a \"%a\" a a a "N
				      "a a \"%a\"",N
				      a_a_a(a),N
				      a);N
			a a;N
		} a { /* a a a a a a A_A_A */N
			a (a != A)N
				a_a_a(&a);N
		}N
	}N
	A_A(a == A);N
	/* Aa a a a a a */N
	a = A;N
	a = a_a_a_a(a->a, a->a, &a);N
	a (a == A_A_A) {N
		a_a_a(a->a_a);N
		a = a_a_a(a->a_a, a, "a", 0,N
					  &a_a_a, 0, &a);N
		a_a_a(&a);N
	}N
	/*N
	 * Aa a a a_a_a_a() a a_a_a0()N
	 * a.N
	 */N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a \"%a\" a a a a "N
			      "a a a \"%a\"",N
			      a_a_a(a), a);N
		a a;N
	}N
	A(a_a_a(a, "a", &a));N
	a (!a_a_a(a))N
		A(A_A_A);N
N
	/* Aa a a a a a a a a a a */N
	a = a_a_a(a_a_a(a));N
N
	/* Aa a a a a a a a a */N
N
	a = a_a_a(a);N
	A_A(a == A_A_A);N
	a_a_a(a->a);N
	a = a_a(a->a, a, a->a,N
				a->a->a->a, a->a,N
				&a->a->a->a,N
				&a->a->a->a, a->a,N
				a, a, a->a);N
	a_a_a(a->a);N
	a_a_a(a);N
N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a a a a \"%a\" - %a",N
			      a, a);N
		a a;N
	}N
N
	/* Aa a a a? */N
	A(a_a_a(a->a->a,N
			a_a_a_a(a->a), 0, A, &a));N
N
	/*N
	 * Aa a a a a a a.	Aa a a, a'aN
	 * a a a a a a'a a a.N
	 */N
	a = a_a_a(a, a);N
	a (a != A_A_A) {N
		a_a_a *a = A;N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a_a_a() a "N
			      "a %a; a.",N
			      a_a_a(a));N
N
		/* Aa a a a a, a a */N
		a (a_a_a(a, &a) == A_A_A) {N
			a_a_a(&a);N
			a_a_a(a);N
		}N
N
		/* Aa a a a a a a */N
		a_a_a(a->a->a, a);N
		a a;N
	}N
N
	/* Aa a a a a a a a a */N
	a_a_a(a, a);N
	a_a_a_a(a, a->a);N
N
 a:N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(a->a_a, &a);N
	a_a_a_a(a->a, &a->a);N
	a_a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(A_A_A(&a));N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a0) {N
	a_a_a_a *a = (a_a_a_a *) a0;N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a[A_A_A];N
	a a * a;N
N
	a = a_a_a(a);N
	A_A(a == A_A_A);N
N
	a_a_a(a_a_a_a(a->a), a,N
			A_A_A);N
	a = a_a_a(a->a->a,N
			     a_a_a_a(a->a), 0, A, &a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a_a_a: "N
			      "a '%a' a a", a);N
		a a;N
	}N
N
	a (!a_a_a(a)) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a_a_a: "N
			      "a '%a' a a a a a a",N
			      a);N
		a a;N
	}N
N
	a (a_a_a_a(a) != a->a) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a: a_a_a: a "N
			      "'%a' a a a a a",N
			      a);N
		a a;N
	}N
N
	/* Aa a a a a */N
	a (a_a_a(a, &a) == A_A_A) {N
		a_a_a(&a);N
		a_a_a(a);N
	}N
N
	A(a_a_a(a->a->a, a));N
	a = a_a_a(a);N
	a (a != A)N
		a_a_a(a);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a: a_a_a: "N
		      "a '%a' a", a);N
  a:N
	a_a_a(a);N
	a (a != A)N
		a_a_a(&a);N
	a_a_a_a(a->a, &a->a);N
	a_a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(A_A_A(&a));N
}N
N
a a_a_aN
a_a_a_a(a_a_a_a *a, a_a_a_a *a,N
		     a_a_a *a, a_a_a *a, a *a,N
		     a_a_a a)N
{N
	a_a_a_a *a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a a = A;N
N
	a (a) {N
	a A_A_A:N
	a A_A_A:N
		a = a_a_a;N
		a;N
	a A_A_A:N
		a = a_a_a;N
		a;N
	a:N
		A(0);N
	}N
N
	a = (a_a_a_a *) a_a_a(a->a, a,N
							    a, a, A,N
							    a(*a));N
N
	a->a = (a_a_a_a *) a;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = (a == A_A_A);N
	a_a_a_a(a, &a->a);N
	a_a_a_a(a, &a->a);N
	a_a_a(a, &a->a);N
N
	a = A;N
	a = a_a_a(a, &a);N
	A(a == A_A_A);N
	a_a_a(a, A_A_A(&a));N
	a_a_a(&a);N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a_a *a, a_a_a_a *a,N
	     a_a_a *a, a_a_a *a, a *a)N
{N
	a (a_a_a_a(a, a, a, a, a,N
				     A_A_A));N
}N
N
a a_a_aN
a_a(a_a_a_a *a, a_a_a_a *a,N
	     a_a_a *a, a_a_a *a, a *a)N
{N
	a (a_a_a_a(a, a, a, a, a,N
				     A_A_A));N
}N
N
a a_a_aN
a_a(a_a_a_a *a, a_a_a_a *a,N
	     a_a_a *a, a_a_a *a, a *a)N
{N
	a (a_a_a_a(a, a, a, a, a,N
				     A_A_A));N
}N
N
a a_a_aN
a_a_a(a_a_a *a, a a_a_a *a,N
		    a a_a_a *a)N
{N
	a a_a_a *a_a, *a;N
	a_a_a_a *a = A;N
	a a *a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a_a *a;N
	a_a_a *a = A;N
N
	a_a_a(&a, A);N
	a_a = a_a_a(a);N
N
	a = a_a_a(a_a_a(a_a, "a a"));N
N
	a = a_a_a(&a, a, A_A_A,N
				     a->a);N
	a (a == A_A_A && a_a_a(&a, a_a))N
		a = A_A_A;N
N
	a (a != A_A_A) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "a: a a a '%a'", a);N
		a a;N
	}N
N
	a = a_a_a_a(a->a, &a, &a);N
	a (a != A_A_A && a != A_A_A) {N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "a: a a a a a '%a', "N
			    "a %a",N
			    a, a_a_a(a));N
		a a;N
	}N
N
	a (a == A_A_A) {N
		a_a_a_a *a = A;N
N
		a = a_a_a(&a_a_a->a,N
					   a->a,N
					   a->a, &a);N
		A_A(a == A_A_A);N
N
		/*N
		 * a a: a a a!!!!N
		 */N
		a_a_a(a_a, a_a_a, A_A_A_A,N
			    "a: a a '%a' a a a a",N
			    a);N
		/*N
		 * Aa a a a a a a a a a aN
		 * a a a aN
		 */N
		a = a_a_a_a(a, &a);N
		a (a != A_A_A) {N
			a_a_a(a_a, a_a_a,N
				    A_A_A_A,N
				    "a: a a a a");N
			a a;N
		}N
N
		a (a = a_a_a_a(a);N
		     a == A_A_A;N
		     a = a_a_a_a(a))N
		{N
			a_a_a *a = A;N
			a_a_a *a = A;N
			a_a_a_a *a = A;N
			a_a_a a;N
N
			a_a_a_a(a, (a **) &a);N
			a = a_a_a_a(a);N
N
			a = a_a_a(a, a, &a);N
			A_A(a == A_A_A);N
N
			a_a_a(a, a);N
			a_a_a(a, a);N
N
			/*N
			 * Aa a_a_a() a a a aN
			 * a'a a a, a a a a aN
			 * a.  Aa, a a_a_a() a aN
			 * a a a A, a a a aN
			 * a a a a a a a a.N
			 */N
			a_a_a(&a);N
		}N
N
		a_a_a_a(&a);N
N
		a = A_A_A;N
	}N
N
	a_a_a_a(a);N
	a = a_a_a_a(a);N
N
	a = a_a_a(a_a, "a-a");N
	a (a != A && a_a_a(a))N
		a = a_a_a(a, a,N
						   a->a, &a->a);N
N
	a = a_a_a(a_a, "a-a");N
	a (a != A && a_a_a(a))N
		a->a_a = a_a_a(a);N
N
	a = a_a_a(a_a, "a-a");N
	a (!a->a_a && a != A && a_a_a(a)) {N
		a->a = a_a_a(a->a,N
					       a_a_a(a));N
		a (a_a_a(a->a) != A_A_A) {N
			a_a_a(a, a_a_a, A_A_A_A,N
				    "a: a-a '%a' "N
				    "a a; a a a a a "N
				    "a", a->a);N
			a->a_a = a;N
		}N
	}N
N
	a = a_a_a(a_a, "a-a-a");N
	a (a != A && a_a_a(a))N
		a->a_a_a = a_a_a(a);N
N
  a:N
	a (a != A)N
		a_a_a(&a);N
	a_a_a(&a, a->a);N
N
	a (a);N
}N
N
a a_a_a_a a_a_a;N
a a_a_a_a a_a_a = {N
	a_a,N
	a_a,N
	a_a,N
	&a_a_aN
};N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a,N
	       a a_a_a *a_a)N
{N
	a a_a_a *a_a;N
	a a_a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
N
	/* a A a a a, a, a */N
	a_a_a.a = a_a_a;N
N
	a_a = a_a_a(a_a_a(a_a, "a a"));N
	a (a_a == A)N
		a (A_A_A);N
N
	A(a_a_a_a(&a->a, &a_a_a,N
				 a->a, a_a_a,N
				 a_a_a));N
N
	a = a_a_a(&a_a_a->a, a->a,N
				   a->a, &a);N
	a (a == A_A_A)N
		a = a->a;N
N
	a (a != A) {N
		a_a_a_a(&a->a);N
		a_a_a_a(a->a, &a->a);N
		a_a_a(a->a);N
	}N
N
	a (a_a != A) {N
		A(a_a_a(a, a, a_a));N
		a_a = a_a_a(a_a);N
	}N
N
	a (a != A)N
		a_a_a(a->a);N
N
	a = A_A_A;N
N
  a:N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
#a A_A(a, a, a0, a0)				\N
	a {								\N
		a (!(a)) {						\N
			a_a_a(a, a_a_a, A_A_A,	\N
				    a, a0, a0);			\N
			a = A_A_A;				\N
			a a;					\N
		    }							\N
	} a (0)N
N
#a A_A_A(a, a, a_a, a)			\N
	a {								\N
		a = A;						\N
		a->a.a = a;					\N
		a = a_a_a(a, a, &a);			\N
		a (a == A_A_A) {				\N
			a->a.a = a_a_a0(a);		\N
			A_A(a->a.a <= a_a,		\N
				  a" %a > %a",			\N
				  a->a.a, a_a);		\N
		} a {						\N
			a->a.a = a;				\N
		}							\N
		a->a.a = a->a.a;				\N
	} a (0)N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a, a a_a_a *a) {N
	a a_a_a *a;N
	a_a_a *a;N
	a_a_a a;N
	a a_a, a, a;N
N
	/*N
	 * Aa A a a a a, a a aN
	 * a a a a a a a.N
	 * Aa a a a a a a a a a aN
	 * a a a-a a.N
	 */N
	a_a = 0;N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	a (a == A_A_A) {N
		a_a = a_a_a0(a);N
		a (a_a < 0)N
			a_a = 0;N
	}N
	a = a_a_a(&a, a, a_a);N
	a (a != A_A_A)N
		a (a);N
N
	a = A_A(0, a_a);N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a0(a);N
		A_A(a >= a_a,N
			  "a-a-a %a < a-a-a %a",N
			  a, a_a);N
	}N
	a->a_a = a;N
N
	A_A_A(a_a_a, 0, A_A_A_A,N
		       "a-a-a");N
	A_A_A(a_a_a,N
		       a->a_a_a.a, A_A_A_A,N
		       "a-a-a");N
	A_A_A(a_a_a,N
		       a->a_a_a.a, A_A_A_A,N
		       "a-a-a");N
	A_A_A(a_a_a,N
		       a->a_a_a.a, A_A_A_A,N
		       "a-a-a");N
	A_A_A(a_a_a,N
		       a->a_a_a.a, A_A_A_A,N
		       "a-a-a");N
N
	A_A_A(a_a_a, 0, A_A_A_A,N
		       "a-a-a");N
N
	A_A_A(a, 0, A_A_A_A,N
		       "a");N
N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A) {N
		a = a_a_a0(a);N
		A_A(a >= 0 && a <= A_A_A_A,N
			  "a %a < 0 a > %a", a, A_A_A_A);N
	}N
	a->a = a;N
N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a0(a);N
		A_A(a >= 0, "a 'a-a %a'%a", a, "");N
	}N
	a->a_a = a;N
	a->a = 0.0;N
N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a0-a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a0(a);N
		A_A(a >= 0 && a <= 0,N
			  "a 'a0-a-a %a'%a", a, "");N
	}N
	a->a0_a = a;N
	a (a == 0)N
		a->a0_a = 0a;N
	aN
		a->a0_a = a(0a << (0-a));N
N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a0-a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a0(a);N
		A_A(a >= 0 && a <= A_A_A_A,N
			  "a0-a-a %a < 0 a > %a",N
			  a, A_A_A_A);N
	}N
	a->a0_a = a;N
	a (a = 0; a < 0; ++a) {N
		a (a <= 0) {N
			a->a0_a[a] = 0;N
		} a a (a < 0) {N
			a->a0_a[a] = a(0a << (0-a));N
		} a {N
			a->a0_a[a] = 0a;N
		}N
		a -= 0;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a(a, a, a_a_a,N
					    a_a_a, a_a_a,N
					    0, &a->a);N
		A_A(a == A_A_A,N
			  "a %a%a", "a a a", "");N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A && a_a_a(a))N
		a->a_a = a;N
	aN
		a->a_a = a;N
N
	a (A_A_A);N
N
 a:N
	a_a_a_a(a);N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a a_a_a *a,N
	a a_a_a *a, a a_a_a *a)N
{N
	a_a_a *a = A;N
	a_a_a a = A_A_A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a a a[A_A_A];N
N
	A(a_a_a(a, a, a_a_a(a),N
				 0, 0, 0, 0, 0, a, &a));N
N
	a_a_a(&a);N
	a.a = a.a;N
	a.a = a.a;N
	a.a = 0;N
	A_A_A(a.a, &a, a);N
N
	a_a_a(&a);N
	A(a_a_a(&a, &a));N
	A(a_a_a(a, a, a, &a));N
	A(a_a_a(a, a, a, 0, &a, 0, A));N
N
 a:N
	a (a != A)N
		a_a_a(a, &a);N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a a_a_a *a,N
       a a_a_a *a)N
{N
	a_a_a *a = A;N
	a_a_a_a a;N
	a_a_a a = A_A_A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a a a[A_A_A];N
N
	a_a_a(&a, a, a(a));N
N
	a.a.a = a_a_a;N
	a.a.a = a_a_a(a);N
	a.a = A;N
	a_a_a(&a.a, A);N
	a_a_a(a, &a.a);N
	A(a_a_a(&a, a_a_a(a), a_a_a,N
				   &a, &a));N
N
	a_a_a(&a);N
	a.a = a.a;N
	a.a = a.a;N
	a.a = 0;N
	A_A_A(a.a, &a, a);N
N
	a_a_a(&a);N
	A(a_a_a(&a, &a));N
	A(a_a_a(a, a, a, &a));N
	A(a_a_a(a, a, a, 0, &a, 0, A));N
N
 a:N
	a (a != A)N
		a_a_a(a, &a);N
	a (a);N
}N
N
a a_a_aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
		  a a_a_a *a, a a **a_a,N
		  a a_a, a_a_a_a a)N
{N
	a a[A_A_A];N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a *a_a[0] = { "a" };N
	a a *a = ": a ";N
	a a *a;N
	a a *a = a->a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a a_a = 0;N
	a_a_a a;N
	a_a_a a;N
	a a;N
	a a a;N
N
	a = a_a_a(&a);N
	a = a_a_a(&a);N
	a = a_a_a(&a);N
N
	/*N
	 * Aa a a "a" a a a a a a aN
	 * a a a a a a a a.N
	 */N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a)) {N
N
		a = a_a_a(a);N
		a = a_a_a(a_a_a(a, "a"));N
		A(a_a_a(a, a, 0, A));N
		a = a_a_a(a, a, &a, &a);N
		a (a != a_a_a)N
			a;N
N
		a = a_a_a(a, "a");N
N
		a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A &&N
		    a(a_a_a(a), "a") == 0) {N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			a (a == A)N
				a;N
			a (a(a_a_a(a), "a") != 0)N
				a;N
		}N
		a (a == A) {N
			A(a_a_a(a->a, "a", a,N
					    a_a_a, a->a,N
					    0, A, &a));N
			A(a_a_a(a, &a));N
			a (a(a_a[0], "@") == 0)N
				a_a_a(a, a);N
			aN
				A(a_a_a(a, a_a[0],N
							  0, A));N
			A(a_a_a(a, a_a[0],N
						  0, A));N
			A(a_a(a, a, a, a, a));N
			A(a_a(a, a, a, a));N
		}N
		A(a_a(a, a, a, a_a));N
	}N
N
	/*N
	 * Aa a a a a a a a?N
	 */N
	a (a != A) {N
		a a a;N
		a a **a;N
N
		a (a != A) {N
			a = a_a;N
			a = a_a;N
		} a {N
			a = a_a;N
			a = a_a;N
		}N
N
		a = a_a(a, a, a, a->a);N
		a (a != A_A_A)N
			a = A;N
N
		a (a != A && a_a_a(a) != a_a_a)N
			a = A;N
		a (a != A && a_a_a(a) != A)N
			a = A;N
		a (a != A) {N
			a_a_a(a, &a);N
			a (a != A) {N
				a_a_a(&a);N
				a = A;N
			}N
		}N
	}N
N
	a (a == A) {N
		A(a_a_a(a_a_a->a, &a));N
		a = a;N
		A(a_a_a(a, a));N
		A(a_a_a(a_a_a->a, a));N
		a (a == A) {N
			a_a_a(a, a_a, a_a);N
		}N
		a_a_a(a, a->a);N
		a_a_a(a, a_a_a);N
		a_a_a(a, a_a_a->a);N
	}N
N
	a_a_a(a, ~A_A_A, a);N
	a_a_a(a, A_A_A, a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, a);N
	a (a->a != A)N
		a_a_a(a, a->a);N
	aN
		a_a_a(a);N
	a (a->a != A)N
		a_a_a(a, a->a);N
	aN
		a_a_a(a);N
	a_a_a(a);N
	a (a->a != A)N
		a_a_a(a, a->a);N
	aN
		a_a_a(a);N
N
	A(a(a, a->a, a));N
	a (a != A) {N
		a_a_a(a, &a, a);N
		A(a_a_a(a, a, a));N
	}N
	a_a_a(a, A_A_A, a);N
	a_a_a(a, a);N
	A(a_a_a(a, a));N
N
	a (!a(a, "_a")) {N
		a = "";N
		a = "";N
	}N
	a_a_a(a, a, a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a%a%a: %a",N
		      a, a, a);N
N
 a:N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(a, &a, a);N
	a (a != A)N
		a_a_a(&a);N
N
	A(a == A);N
N
	a (a);N
}N
N
#a A_AN
a a_a_aN
a_a(a a_a_a **a, a_a_a *a) {N
	a_a_a a;N
	a a_a_a *a, *a0;N
	a a_a_a *a;N
	a a *a;N
	a a_a_a *a = A;N
	a_a_a a = 0;N
	a a a;N
	a a_a_a *a = A;N
N
	a = a_a_a(a, "a", &a);N
	a (a != A_A_A)N
		a (A_A_A);N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a *a;N
		a_a_a a = 0;N
N
		a = a_a_a(a);N
		a0 = a_a_a(a, "a");N
		a = a_a_a(a0);N
		a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A;N
		} a a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A;N
		} a a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A;N
		} a a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A;N
		} a a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A;N
		} a a (a(a, "a") == 0) {N
			a |= A_A_A|A_A_A|N
			      A_A_A|A_A_A|N
			      A_A_A|A_A_A|N
			      A_A_A|A_A_A|N
			      A_A_A|A_A_A;N
		}N
N
		a0 = a_a_a(a, "a");N
		a (a0 == A || a_a_a(a0)) {N
			a |= a;N
			a;N
		}N
N
		a = a_a_a(a0);N
		a (a(a, "a") == 0) {N
			a &= ~A_A_A;N
		} a a (a(a, "a") == 0) {N
			a &= ~A_A_A;N
		}N
N
		a |= a;N
	}N
N
	a (a_a_a->a == A && a != 0) {N
		a_a_a a;N
		a0_a a_a = 0;N
		a0_a a = 0;N
		a_a_a_a a = a_a_a_a;N
N
		a = A;N
		A(a_a_a(a, "a-a", &a),N
		       "'a-a' a a a a 'a' a a");N
N
		a0 = a_a_a(a, "a");N
		a (a0 == A)N
			A(A_A_A, "a-a a a a");N
		a (a(a_a_a(a0), "a") == 0)N
			a = a_a_a;N
		aN
			a = a_a_a;N
N
		a0 = a_a_a(a, "a");N
		a (a0 == A)N
			A(A_A_A, "a-a a a a");N
N
		a = a_a_a(a0);N
N
		a0 = a_a_a(a, "a");N
		a (a0 != A && a_a_a0(a0)) {N
			a_a = a_a_a0(a0);N
			a (a_a > A_A) {N
				a_a_a(a0, a_a_a,N
				    A_A_A,N
				    "'a-a a "N
				    "%" Aa0 "' "N
				    "a a a a a "N
				    "a; a a %a",N
				    a_a, (a a)A_A);N
				a_a = A_A;N
			}N
		}N
N
		a0 = a_a_a(a, "a");N
		a (a0 != A && a_a_a0(a0)) {N
			a = a_a_a0(a0);N
		} a {N
			a = A_A_A;N
		}N
N
		a0 = a_a_a(a, "a");N
		a (a0 != A && a_a_a(a0) &&N
		    a(a_a_a(a0), "a") == 0)N
		{N
			a = a_a_a_a;N
		}N
N
		a = a_a_a_a();N
		a_a_a_a_a_a_a(a, a_a_a);N
		a_a_a_a_a_a(a,N
						 A_A_A_A_A);N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a", &a);N
		a (a == A_A_A) {N
			a = a_a_a0(a);N
			a_a_a_a_a_a(a, a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a",N
					  &a);N
		a (a == A_A_A) {N
			a = a_a_a0(a);N
			a_a_a_a_a_a(a, a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a-a",N
				       &a);N
		a (a == A_A_A) {N
			a = a_a_a0(a);N
			a_a_a_a_a_a_a(a, a);N
		}N
N
		a = A;N
		a = a_a_a(a,N
				       "a-a-a-a-a",N
				       &a);N
		a (a == A_A_A) {N
			a = a_a_a0(a);N
			a_a_a_a_a_a_a(a,N
								       a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a-a",N
				       &a);N
		a (a == A_A_A) {N
			a (a(a_a_a(a), "a") == 0)N
				a = A_A_A_A_A;N
			aN
				a = A_A_A_A_A;N
			a_a_a_a_a_a(a, a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a-a",N
				       &a);N
		a (a == A_A_A) {N
			a = a_a_a0(a);N
			a_a_a_a_a_a_a(a, a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a-a",N
				       &a);N
		a (a == A_A_A) {N
			a = a_a_a(a);N
			a_a_a_a_a_a(a, a);N
		}N
N
		A(a_a_a(a_a_a, a, a,N
				      &a, a_a_a->a,N
				      &a_a_a->a),N
		       "a a a a a");N
N
		A(a_a_a(a_a_a->a,N
					a_a, a, a),N
		       "a a a a a a");N
	}N
N
	a (a_a_a->a == A)N
		a (A_A_A);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a != A_A_A) {N
		/* a a; a a a a a */N
		a_a_a(a_a_a->a, A " " A);N
	} a a (a == A_A_A && !a_a_a(a)) {N
		/* Aa a */N
		a_a_a(a_a_a->a, a_a_a(a));N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A && a_a_a(a)) {N
		/* "a" a a a a a */N
		a a[0];N
		a = a_a_a(a, a(a));N
		a (a == A_A_A)N
			a_a_a(a_a_a->a, a);N
	} a a (a == A_A_A && !a_a_a(a)) {N
		/* Aa a */N
		a_a_a(a_a_a->a,N
				   a_a_a(a));N
	}N
N
	a_a_a(a_a_a->a, &a->a);N
	a->a = a;N
N
	a = A_A_A;N
N
 a:N
	a (a != A)N
		a_a_a_a(&a);N
N
	a (a);N
}N
#a /* A_A */N
N
a a_a_aN
a_a_a(a) {N
	a_a_a a;N
	a_a_a *a = A;N
	a a0_a a0 = A0A_A0A_A;N
	a_a_a a;N
N
	a_a_a0(&a, &a0);N
N
	a = a_a_a(a_a_a, 0, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a->a, &a, 0, a);N
	a (a == A_A_A)N
		a_a_a(a, &a_a_a);N
	a_a_a(&a);N
	a (a);N
}N
N
#a A_AN
/*%N
 * A a a a a_a_a() a a a_a() a.N
 * Aa a a a a, a a a a aN
 * a.N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
		    a a *a_a, a a *a,N
		    a *a_a)N
{N
	a_a_a *a = a_a;N
	a a_a[A_A];N
	a_a_a a;N
N
	a = a_a_a(a_a,N
				      a_a, a(a_a));N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "%a: a a a: "N
			      "a a a a a a: %a",N
			      a_a, a_a_a(a));N
		a (a);N
	}N
N
	a = a_a_a(a_a, a, a,N
				    a_a_a(a), a_a_a(a),N
				    a_a_a, a_a_a,N
				    a_a_a, a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "%a: a a a: %a",N
			      a_a, a_a_a(a));N
	}N
N
	a (a);N
}N
#aN
N
/*N
 * Aa 'a' a a 'a', a a a 'a'N
 * a a a a a 'a'.N
 *N
 * Aa a a a a, 'a' a a A a aN
 * a a a 'a' a a.N
 */N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	       a_a_a *a, a_a_a *a,N
	       a_a_a *a, a a_a_a *a,N
	       a_a_a *a, a_a_a *a, a a_a)N
{N
	a a_a_a *a[0];N
	a a_a_a *a[0];N
	a a_a_a *a[0];N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a a;N
	a **a;N
	a a_a_a *a_a, *a_a;N
	a a_a_a *a;N
	a a_a_a *a, *a0;N
	a a_a_a *a;N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a a_a_a;N
	a0_a a_a_a_a = 0;N
	a_a a_a_a;N
	a0_a a_a, a_a;N
	a0_a a_a_a;N
	a_a_a_a *a = A;N
	a_a_a *a = A;	/* Aa a */N
	a_a_a *a = A, *a = A;N
	a_a_a *a0 = A;N
	a_a_a *a0 = A;N
	a a_a = a;N
	a a_a = a;N
	a a = 0, a = 0, a = 0;N
	a a *a;N
	a a *a = A;N
	a_a_a *a = A;N
	a0_a a;N
	a0_a a;N
	a a a = 0;N
	a_a_a *a = A;N
	a0_a a_a_a_a;N
	a a_a_a;N
	a a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a_a = a;N
	a_a_a *a;N
	a a_a_a;N
	a_a_a *a = A, *a = A, *a = A;N
	a a a_a, a;N
	a a_a_a = a;N
	a_a_a a0 = -0, a0 = -0;N
	a_a_a *a = A;N
	a a a_a;N
	a_a_a *a = A;N
	a a *a = A;N
N
	A(A_A_A(a));N
N
	a (a != A)N
		(a)a_a_a(a, "a", &a);N
N
	/*N
	 * a: a a, a, aN
	 * a: a a, aN
	 * a: a a, aN
	 */N
	a (a != A) {N
		a = a_a_a(a, "a");N
		a[a++] = a;N
		a[a++] = a;N
		a[a++] = a;N
	}N
	a (a != A) {N
		a[a++] = a;N
		a[a++] = a;N
	}N
N
	a[a++] = a_a_a;N
	a[a] = A;N
	a[a] = A;N
	a (a != A)N
		a[a++] = a;N
	a[a] = A;N
N
	/*N
	 * Aa a a'a a a a a a.N
	 */N
	A(a_a_a(a, &a), "a");N
	a_a_a(a, a);N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a a a a a a a a a a.N
	 */N
	a = A;N
	a (a->a == a_a_a && a_a &&N
	    a_a_a(a, "a-a", &a) == A_A_A) {N
		A(a_a(a, a, a, &a_a_a));N
	}N
N
	a = A;N
	a (a->a == a_a_a && a_a &&N
	    a_a_a(a, "a-a", &a) == A_A_A) {N
		A(a_a(a, a, a));N
	}N
N
	/*N
	 * Aa a a.N
	 */N
	a = A;N
	a (a != A)N
		(a)a_a_a(a, "a", &a);N
	aN
		(a)a_a_a(a, "a", &a);N
N
	/*N
	 * Aa a aN
	 */N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
		A(a_a(a, a, a, a, a,N
				     a, a, a, a,N
				     a_a_a, a));N
	}N
N
	/*N
	 * Aa a a a a a a a a a aN
	 * a a a a a a aN
	 * a a a a A a a.N
	 */N
	a (a->a != A && !a->a->a.a_a) {N
		a_a_a_a a;N
N
		a (a = 0; a < a->a->a.a_a; ++a) {N
			a ((a->a->a & A_A_A(a)) == 0) {N
				a a[A_A_A];N
N
				a_a_a(&a->a->a[a]->a,N
						a, a(a));N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A_A, "a '%a'"N
					      " a a a a a a a",N
					      a);N
				a = A_A_A;N
				a a;N
			}N
		}N
	}N
N
	/*N
	 * Aa a'a a a a, a a a aN
	 * a a a a a a a a a a aN
	 * a.N
	 */N
	A(a_a(a, a, a, a, a));N
N
	/*N
	 * Aa Aa Aa Aa a.N
	 */N
	a = A;N
	a (a != A)N
		(a)a_a_a(a, "a", &a);N
	aN
		(a)a_a_a(a, "a", &a);N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a = a_a_a(a);N
N
		a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			a_a_a *a = A;N
			a a_a_a *a, *a = A;N
			a *a = a_a_a(a, a_a_a(a));N
N
			a (a == A) {N
				a = A_A_A;N
				a a;N
			}N
N
			a = a_a_a(a, a, &a,N
							   &a, 0);N
			a (a != A_A_A) {N
				a_a_a(a, a);N
				a a;N
			}N
N
			a = a_a_a(a);N
			a = a_a(a, a_a_a(a),N
					       a[0], a, a,N
					       &a);N
			a_a_a(a, a);N
			a_a_a(a, a, a * a(*a));N
			a (a != A_A_A)N
				a a;N
N
			/*N
			 * Aa a A a a a,N
			 * a a a, a a a aN
			 * a a.  Aa a a, a'a aN
			 * a a a a a a a a a.N
			 */N
			(a)a_a_a(a, "a", &a);N
			a (a == A || a_a_a(a)) {N
				a->a = a;N
				a = a_a(a, a,N
							a_a);N
				a (a != A_A_A)N
					a a;N
				A_A_A(a->a_a,N
						a, a);N
			} a {N
				a->a = a;N
				A_A_A(a->a_a,N
						a, a);N
			}N
N
		}N
	}N
N
	/*N
	 * Aa a a a a a a a aN
	 * a a a/a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a (a_a_a(a)) {N
		a = a_a_a(a);N
		A(a(a, "a") == 0);N
		a_a_a = 0;N
	} a a (a_a_a(a)) {N
		a_a_a = A_A_A;N
		a_a_a_a = a_a_a(a);N
	} a {N
		a_a_a a;N
		a = a_a_a0(a);N
		a (a > A_A) {N
			a_a_a(a, a_a_a,N
				    A_A_A,N
				    "'a-a-a "N
				    "%" Aa0 "' "N
				    "a a a a a "N
				    "a; a a %a",N
				    a, (a a)A_A);N
			a = A_A;N
		}N
		a_a_a = (a_a) a;N
	}N
N
	a (a_a_a == A_A_A) {N
		a0_a a = a_a_a();N
N
		a_a_a =N
			(a_a) (a * a_a_a_a/0);N
		a (a == 0) {N
			a_a_a(a, a_a_a,N
				A_A_A,N
				"Aa a a a a a "N
				"a, a 'a-a-a' a "N
				"a");N
		} a {N
			a_a_a(a, a_a_a,N
				A_A_A,N
				"'a-a-a %a%%' "N
				"- a a %" Aa0 "A "N
				"(a a %" Aa0 "A)",N
				a_a_a_a,N
				(a0_a)(a_a_a / (0*0)),N
				a / (0*0));N
		}N
	}N
N
	/* Aa-a. */N
	a = A;N
	a = a_a_a(a, "a", &a);N
	A(a == A_A_A);N
N
	a = a_a_a(a);N
	a (a(a, "a") == 0) {N
		a |= A_A_A |N
			A_A_A;N
		a->a = a;N
	} a a (a(a, "a") == 0) {N
		a |= A_A_A;N
		a->a = a;N
	} a a (a(a, "a") == 0) {N
		a->a = a;N
	} a {N
		A(0);N
		A_A();N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a0", &a);N
	a (a == A_A_A && a(a->a, "_a") &&N
	    a(a->a, "_a")) {N
		a_a_a a, a, *a;N
		a a a;N
		a a *a, *a;N
		a a_a_a *a;N
N
		a = A;N
		a = a_a_a(a, "a0-a", &a);N
		a (a == A_A_A)N
			a = a_a_a(a);N
		aN
			a = A;N
N
		a = A;N
		a = a_a_a(a, "a0-a", &a);N
		a (a == A_A_A)N
			a = a_a_a(a);N
		aN
			a = A;N
N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a a_a_a *a = a_a_a(a);N
			a_a0_a *a0 = A;N
			a a a0a = 0;N
N
			a_a_a(a_a_a(a), &a,N
					    &a);N
N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			a (a != A) {N
				a = &a;N
				a_a_a(a,N
						      a_a_a(a));N
			} aN
				a = A;N
N
			a = a = a = A;N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			a (a != A) {N
				a = a_a_a(a, a,N
							    a_a_a, a,N
							    a, 0, &a);N
				a (a != A_A_A)N
					a a;N
			}N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			a (a != A) {N
				a = a_a_a(a, a,N
							    a_a_a, a,N
							    a, 0, &a);N
				a (a != A_A_A)N
					a a;N
			}N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			a (a != A) {N
				a = a_a_a(a, a,N
							    a_a_a, a,N
							    a, 0, &a);N
				a (a != A_A_A)N
					a a;N
			} a {N
				a (a_a_a == A) {N
					a = a_a_a();N
					a (a != A_A_A)N
						a a;N
				}N
				a_a_a(a_a_a, &a);N
			}N
N
			a = A;N
			(a)a_a_a(a, "a-a", &a);N
			a (a != A && a_a_a(a))N
				a0a |= A_A0_A_A;N
N
			a = A;N
			(a)a_a_a(a, "a-a", &a);N
			a (a != A && a_a_a(a))N
				a0a |= A_A0_A_A;N
N
			a = a_a0_a(a, &a, a, a,N
						  a, a, a,N
						  a0a, &a0);N
			a (a != A_A_A)N
				a a;N
			a_a0_a(&a->a0, a0);N
			a->a0a++;N
			a = a0_a(a, a, &a, a,N
					       a, a);N
			a (a != A_A_A)N
				a a;N
			a (a != A)N
				a_a_a(&a);N
			a (a != A)N
				a_a_a(&a);N
			a (a != A)N
				a_a_a(&a);N
		}N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	/* 'a', a 'a': a'a a a_a_a a */N
	(a)a_a_a(a, "a-a", &a);N
	a (a == A) {N
		/*N
		 * Aa a A_A a a a a.a.N
		 */N
		(a)a_a_a(a_a_a, "a-a", &a);N
		A(a != A);N
	}N
	a (a != A) {N
		a (a_a_a(a)) {N
			a->a = a_a_a(a);N
		} a {N
			/*N
			 * Aa a-a a a a a a,N
			 * a a a a "a"N
			 */N
			a->a = a;N
			a_a = a;N
		}N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a = A_A(a_a_a(a), 0);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = a_a_a(&a_a_a->a, a->a,N
				   a->a, &a);N
	a (a == A_A_A) {N
		a->a = a->a;N
		a_a_a(&a);N
	} aN
		a->a = a_a_a_a;N
N
	/*N
	 * Aa a a'a a.N
	 *N
	 * Aa, a a a a a a a a-a a.  Aa a,N
	 * a a a a a a a a a a a a.  AaN
	 * a a a a, a a a a a a a a a;N
	 * a a a a a.N
	 *N
	 * Aa a a A a a a a a a a a.N
	 *N
	 * Aa a a a a a, a a a a aN
	 * a a a.N
	 *N
	 * A Aa a a a a a a a a a a a a.N
	 * Aa a a'a a a, a a a a aN
	 * a a a a a a a a a a.  Aa aN
	 * a a a a a a a a a aN
	 * a a a a a, a a a a aN
	 * a a a a a.  Aa a, a a a a aN
	 * a, a a a a a a aN
	 * a a.  Aa a a, a'a a a'a a aN
	 * a a a a a'a a a/a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A)N
		a = a_a_a(a);N
	aN
		a = a->a;N
	a = A;N
	a = a_a(a, a, a->a);N
	a (a != A) {N
		a (!a_a(a->a, a, a_a_a,N
				    a_a_a, a_a_a))N
		{N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a a %a a'a a a a "N
				      "a a a a a",N
				      a->a->a, a->a);N
			a = A_A_A;N
			a a;N
		}N
		a_a_a(a->a, &a);N
		a_a = a;N
	} a {N
		a (a(a, a->a) == 0) {N
			a = a_a_a(&a_a_a->a,N
						   a, a->a,N
						   &a);N
			a (a != A_A_A && a != A_A_A)N
				a a;N
			a (a != A) {N
				a (!a_a(a, a,N
						    a_a_a)) {N
					a_a_a(a_a_a,N
						      A_A_A,N
						      A_A_A,N
						      A_A_A(0),N
						      "a a a a "N
						      "a a %a a a "N
						      "a a "N
						      "a", a->a);N
				} a {N
					A(a->a != A);N
					a_a_a(a_a_a,N
						      A_A_A,N
						      A_A_A,N
						      A_A_A(0),N
						      "a a a");N
					a_a = a;N
					a_a_a(a->a, &a);N
				}N
				a_a_a(a, &a);N
				a_a_a(a,N
							  &a);N
				a_a_a(&a);N
			}N
		}N
		a (a == A) {N
			/*N
			 * Aa a a a a a a.  Aa aN
			 * a a a a, a a a a a aN
			 * a a a a a a a a a aN
			 * a a a a a a.  Aa a a a aN
			 * a a a a a a a a, a aN
			 * a a a a a a a a a.N
			 *N
			 * Aa a a a a a a aN
			 * a, a a a a a a a aN
			 * a.N
			 */N
			a_a_a(&a);N
			a_a_a(a, "a", A);N
			a_a_a(&a);N
			a_a_a(a, "a_a", A);N
			A(a_a_a(a, a, a_a_a,N
					       a_a_a, a->a,N
					       a, "a", 0, A,N
					       &a));N
			a_a_a(&a);N
			a_a_a(&a);N
		}N
		a = a_a_a(a, a(*a));N
		a->a = A;N
		a_a_a(a, &a->a);N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a->a = a->a;N
		A_A_A(a, a);N
		A_A_A(*a, a, a);N
	}N
	a_a_a(a, a, a_a);N
N
	/*N
	 * a-a a a a a a a a, a aN
	 * a a a a a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A && a(a->a, "_a") != 0) {N
		A(a_a_a(a, a_a_a(a)));N
		a (!a_a && !a_a)N
			A(a_a_a(a));N
	}N
N
	a_a_a(a, a_a_a);N
	a_a_a(a, a_a_a);N
N
	a_a_a(&a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = A_A(a_a_a(a), 0);N
N
	/*N
	 * Aa.N
	 *N
	 * A  Aa a a a.N
	 */N
	A(a_a_a_a(a, A_A, &a0, &a0,N
					    (A_A_A(a, a) == A)));N
	A(a_a_a_a(a, A_A0, &a0, &a0,N
					    (A_A_A(a, a) == A)));N
	a (a0 == A && a0 == A) {N
		A_A(__A__, __A__,N
				 "a a a a a Aa0 a"N
				 " a Aa0 a");N
		a = A_A_A;N
		a a;N
	}N
N
	a (a == A) {N
		A(a_a_a(a, &a,N
				       a_a_a));N
	}N
	a_a_a(a, a);N
	a (a == A)N
		A(a_a_a(a, &a));N
	a_a_a(a, a);N
N
	a = 0 * A_A(a_a_a, A_A_A);N
	A(a_a_a(a, a_a_a, A_A,N
				      a, a_a_a,N
				      a_a_a, a,N
				      a_a_a,N
				      a0, a0));N
N
	a (a0 == -0)N
		a0 = a_a_a;N
	a (a0 == -0)N
		a0 = a_a_a;N
	a (a0 != -0)N
		a_a_a0(a->a, a0);N
	a (a0 != -0)N
		a_a_a0(a->a, a0);N
N
	/*N
	 * Aa a A a a a 0/0a a a a-a-a aN
	 * A_A_A_A_A a a a a a.N
	 */N
	a_a_a = 0;N
	a (a_a_a != 0A) {N
		a_a_a = a_a_a / 0;N
		a (a_a_a == 0A)N
			a_a_a = 0;	/* Aa a. */N
		a (a != a->a &&N
		    a_a_a > A_A_A_A_A) {N
			a_a_a = A_A_A_A_A;N
			a (!a->a) {N
				a_a_a(a->a->a,N
						   A_A_A_A_A);N
				a->a = a;N
			}N
		}N
	}N
	a_a_a(a->a, a_a_a);N
N
	/*N
	 * Aa a A aN
	 */N
	{N
		a0_a a, a;N
		a a, a, a;N
N
		a = A;N
		a = a_a_a(a, "a-a-a", &a);N
		A(a == A_A_A);N
		a0 = a_a_a(a, "a");N
		a = a_a_a0(a0);N
		a0 = a_a_a(a, "a");N
		a (!a_a_a(a0)) {N
			a a *a = a_a_a(a0);N
			a_a_a a = A_A_A;N
N
			a (a(a, "a") == 0) {N
				a = A_A_A;N
			} a a (a(a, "a") == 0) {N
				a = A_A_A;N
			} a {N
				A(0);N
				A_A();N
			}N
N
			a_a_a(a->a,N
						      a_a_a, a);N
		}N
N
		a = A;N
		a = a_a_a(a, "a-a-a", &a);N
		A(a == A_A_A);N
N
		a0 = a_a_a(a, "a");N
		a = a_a_a0(a0);N
N
		a0 = a_a_a(a, "a");N
		a = (a) a_a_a(a0) / 0.0;N
N
		a0 = a_a_a(a, "a");N
		a = (a) a_a_a(a0) / 0.0;N
N
		a0 = a_a_a(a, "a");N
		a = (a) a_a_a(a0) / 0.0;N
N
		a_a_a(a->a, a, a, a, a, a);N
	}N
N
	/*N
	 * Aa a'a a-a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a = a_a_a(a);N
	a (a_a > 0)N
		a_a = 0;N
	a_a_a(a->a, a_a);N
N
	/*N
	 * Aa a a'a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a = a_a_a0(a);N
	a_a_a(a->a, a_a);N
N
	/* Aa a a a 0-A a a a a A a */N
	a_a_a(a->a, a_a_a);N
N
	/*N
	 * Aa a a'a A A a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a < 0)N
		a = 0;N
	a (a > 0)N
		a = 0;N
	a_a_a(a->a, (a0_a)a);N
N
	/*N
	 * Aa a a A a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a < 0)N
		a = 0;N
	a (a > 0)N
		a = 0;N
	a->a = a;N
N
	/*N
	 * Aa a a A a a A a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a < 0)N
		a = 0;N
	a (a > a->a)N
		a = a->a;N
	a->a = a;N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a != 0 && a < 0)N
		a = 0;N
	a (a > 0)N
		a = 0;N
	a->a = a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a = A;N
	A(a_a_a(a, "a-a-a", &a));N
	a_a = a_a_a0(a);N
	a (a_a > 0)N
		a_a_a(a->a, a_a);N
N
	a = A;N
	A(a_a_a(a, "a-a-a", &a));N
	a_a = a_a_a0(a);N
	a (a_a > 0)N
		a_a_a(a->a, a_a);N
N
	/*N
	 * Aa a A a.N
	 */N
	a_a_a_a(a->a);N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A) {N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
			A(a_a(a_a_a(a),N
						 a->a));N
	}N
N
	/*N
	 * Aa a A a a.N
	 */N
	a_a_a_a_a(a->a);N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a != A) {N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
			A(a_a_a(a_a_a(a),N
						 a->a));N
	}N
N
	/*N
	 * A a a a "a" a, a a,N
	 * a a a a "." a a a a.N
	 */N
	a = A;N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	(a)a_a_a(a, "a", &a);N
	a (a != A)N
		A(a_a(a, a, a_a,N
					a, a));N
N
	/*N
	 * Aa Aa Aa.N
	 */N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a != A)N
		A(a_a(a, a, a));N
N
	/*N
	 * Aa a a a a a A a a a a.N
	 */N
	a (a->a == a_a_a && a->a == A)N
		a_a_a(a, a_a_a->a_a);N
N
	/*N
	 * Aa a a a a a, a a a a-A a a aN
	 * "a a" a.  Aa a a, a a aN
	 * a a a a.  Aa a a a a aN
	 * a a, a a'a a a a a a aN
	 * a.N
	 */N
	a (a->a == A) {N
		a_a_a *a = A;N
		(a)a_a_a(a, a_a, &a);N
		a (a != A) {N
			a_a_a(&a);N
			a_a = a;N
		}N
		a (a_a)N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a a '%a'",N
				      a->a);N
	}N
N
	/*N
	 * Aa a a'a A a.N
	 */N
	A(a_a_a(a, a,N
					   a->a, &a));N
	a (a_a_a->a != A) {N
		A(a_a_a(a,N
					  a_a_a->a_a,N
					  a_a_a->a));N
	}N
	a_a_a(a, a);N
	a_a_a(&a);N
N
	/*N
	 * Aa a a a a-a a a a a.N
	 */N
	a = a_a_a(&a_a_a->a, a->a,N
				   a->a, &a);N
	a (a != A_A_A && a != A_A_A)N
		a a;N
	a (a != A) {N
		a_a_a(a, &a);N
		a (a != A)N
			a_a_a(a, a);N
		a_a_a(&a);N
		a_a_a(&a);N
	} aN
		a_a_a(a);N
N
	/*N
	 * Aa a a'a a a.N
	 */N
	{N
		a a_a_a *a = A;N
		a_a_a *a = A;N
N
		(a)a_a_a(a, "a", &a);N
		A(a_a_a(a, &a));N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a a_a_a *a = a_a_a(a);N
			a_a_a *a;N
N
			A(a_a(a, a, &a));N
			a_a_a(a, a);N
			a_a_a(&a);N
		}N
		a_a_a(&a->a);N
		a->a = a; /* Aa a. */N
	}N
N
	/*N
	 *	Aa a a a-a.N
	 */N
	{N
		a a_a_a *a = A;N
N
		(a)a_a_a(a, "a-a", &a);N
		A(a_a_a(a, &a));N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a a_a_a *a = a_a_a(a);N
N
			A(a_a(a, a));N
		}N
		a (a->a != A)N
			a_a_a(&a->a);N
		a_a_a(a, &a->a);N
		a_a_a(&a);N
	}N
	/*N
	 * Aa a a a.N
	 */N
	a_a_a(&a->a,N
		a_a_a(a_a_a->a));N
N
	/*N
	 * Aa a "a-a" a "a-a" A.N
	 * (Aa a a a a a a a, a 'a'N
	 * a a a a a a Aa a a a a aN
	 * a a a.)N
	 */N
	A(a_a_a(a, a, A, "a-a",N
				 A, a, a_a_a,N
				 &a->a));N
	A(a_a_a(a, a, A, "a-a",N
				 A, a, a_a_a,N
				 &a->a));N
N
	/*N
	 * Aa a "a-a-a" a.N
	 */N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a != A && a_a_a(a))N
		a->a = a;N
	aN
		a->a = a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a(a);N
	A(a != A);N
	a (!a(a, "a")) {N
		a->a = a;N
		a->a_a = a;N
	} a a (!a(a, "a")) {N
		a->a = a;N
		a->a_a = a;N
	} a { /* "a" a "a" */N
		a->a = a;N
		a->a_a = a;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a_a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a (a_a_a(a)) {N
		a (a_a_a(a))N
			a->a = a_a_a;N
		aN
			a->a = a_a_a;N
	} a {N
		a = a_a_a(a);N
		a (a(a, "a-a") == 0) {N
			a->a = a_a_a;N
		} a a (a(a, "a-a-a") == 0) {N
			a->a = a_a_a;N
		} a {N
			A(0);N
			A_A();N
		}N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a(a);N
	a (a(a, "a-a") == 0) {N
		a->a_a = a_a_a;N
	} a a (a(a, "a-a") == 0) {N
		a->a_a = a_a_a;N
	} a {N
		A(0);N
		A_A();N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a_a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a_a_a = a_a_a(a);N
N
	/*N
	 * Aa a "a-a", "a-a-a", "a-a",N
	 * "a-a-a" a "a-a-a-a" Aa aN
	 * a a a.a, a A a a a a.N
	 * Aa a a a a a a a a a_a_a()N
	 * A.N
	 *N
	 * Aa a a a a a a a AaN
	 * a a a a a.  Aa a a a a aN
	 * a a a a, a'a a a a a aN
	 * a a.N
	 */N
N
	/* a.a a */N
	A(a_a_a(a, a, A,N
				 "a-a", A, a,N
				 a_a_a, &a->a));N
N
	/* a.a a */N
	A(a_a_a(a, a, A,N
				 "a-a-a", A, a,N
				 a_a_a, &a->a));N
	/* a.a a */N
	A(a_a_a(a, a, A,N
				 "a-a-a-a", A, a,N
				 a_a_a, &a->a));N
N
	a (a(a->a, "_a") != 0 &&N
	    a->a != a_a_a)N
	{N
		/* a.a a */N
		A(a_a_a(a, a, A,N
					 "a-a", A, a,N
					 a_a_a, &a->a));N
		/* a.a a */N
		A(a_a_a(a, a, A,N
					 "a-a-a", A, a,N
					 a_a_a, &a->a));N
	}N
N
	a (a->a) {N
		/*N
		 * "a-a-a" a a "a-a" a a,N
		 * a a "a-a" a a.N
		 */N
		a (a->a == A) {N
			a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			} a a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			}N
		}N
N
		/*N
		 * "a-a" a a "a-a-a" a a,N
		 * a a "a-a" a a.N
		 */N
		a (a->a == A) {N
			a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			} a a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			}N
		}N
N
		/*N
		 * "a-a-a-a" a a "a-a-a"N
		 * a a.N
		 */N
		a (a->a == A) {N
			a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			}N
		}N
N
		/*N
		 * "a-a-a" a a "a-a-a-a"N
		 * a a.N
		 */N
		a (a->a == A) {N
			a (a->a != A) {N
				a_a_a(a->a,N
					       &a->a);N
			}N
		}N
N
		/*N
		 * Aa a a a a a a a, a a a aN
		 * a a a a a a.N
		 */N
N
		a (a->a == A) {N
			/* a a a */N
			A(a_a_a(A, A, a_a_a,N
						 "a-a", A,N
						 a, a_a_a,N
						 &a->a));N
		}N
		a (a->a == A) {N
			/* a a a */N
			A(a_a_a(A, A, a_a_a,N
						 "a-a-a", A,N
						 a, a_a_a,N
						 &a->a));N
		}N
		a (a->a == A) {N
			/* a a a */N
			A(a_a_a(A, A, a_a_a,N
						 "a-a-a", A,N
						 a, a_a_a,N
						 &a->a));N
		}N
		a (a->a == A) {N
			/* a a a */N
			A(a_a_a(A, A, a_a_a,N
						 "a-a-a-a", A,N
						 a, a_a_a,N
						 &a->a));N
		}N
	} a {N
		/*N
		 * Aa'a a a; a a a-a Aa a'aN
		 * a a a a a/a a, a a a a.N
		 */N
		a (a->a == A) {N
			A(a_a_a(a, &a->a));N
		}N
		a (a->a == A) {N
			A(a_a_a(a, &a->a));N
		}N
	}N
N
	/*N
	 * Aa a a a a-a Aa, a a aN
	 * a a a a-a a a a a'a a a a.aN
	 */N
	a (a->a == A) {N
		/* a a a */N
		A(a_a_a(A, A, a_a_a,N
					 "a-a", A,N
					 a, a_a_a,N
					 &a->a));N
	}N
N
	/*N
	 * Aa a a a a a a aN
	 * a. Aa a a a a a a a,N
	 * a a a a a a a.N
	 */N
	A(a_a_a(a, a, a_a_a,N
				 "a-a-a", A, a,N
				 a_a_a, &a->a));N
N
	/*N
	 * Aa a a a, a a a aN
	 * a A a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	/*N
	 * Aa a a a a a a a.N
	 */N
	A(a_a_a(a, a, a_a_a,N
				 "a-a-a", "a",N
				 a, a_a_a,N
				 &a->a));N
	A(a_a_a(a, a, "a-a-a",N
				       "a-a", a_a_a,N
				       &a->a_a));N
N
	/*N
	 * Aa a a a (A/A a) a a a a.N
	 */N
	A(a_a_a(a, a, "a-a-a",N
				       "a", a_a_a,N
				       &a->a));N
	A(a_a_a(a, a, "a-a-a",N
				       "a-a", a_a_a,N
				       &a->a_a));N
N
	/*N
	 * Aa a, a aN
	 */N
	A(a_a_a(a, a, a, a_a_a,N
				      &a->a));N
N
	/*N
	 * Aa a a-a a a-a-a Aa,N
	 * a a a a a a a. (A: Aa a aN
	 * a a a a/a a a. Aa, a a aN
	 * a a a a a.a:a_a_a() a.)N
	 */N
	a (a->a == A) {N
		A(a_a_a(A, A, a_a_a,N
					 "a-a", A, a,N
					 a_a_a, &a->a));N
	}N
	a (a->a == A) {N
		A(a_a_a(A, A, a_a_a,N
					 "a-a-a", A, a,N
					 a_a_a, &a->a));N
	}N
N
	/*N
	 * Aa a a-a a a-a Aa a aN
	 * a a a a a.N
	 */N
	a (a->a == A) {N
		A(a_a_a(a, a, a_a_a,N
					 "a-a", A, a,N
					 a_a_a, &a->a));N
	}N
	a (a->a == A) {N
		A(a_a_a(a, a, a_a_a,N
					 "a-a", A, a,N
					 a_a_a, &a->a));N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a (a->a_a != A)N
		a_a_a(&a->a_a);N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a a_a_a *a = a_a_a(a, "a-a");N
		a a_a_a *a = a_a_a(a, "a");N
		a0_a a = a_a_a0(a);N
N
		a (a > 0A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a-a a-a a "N
				    "a 0: a");N
			a = 0A;N
		}N
		a->a = (a0_a)a;N
		A(a_a_a(a, a, a_a_a,N
					 a, a_a_a, 0,N
					 &a->a_a));N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a0-a", &a);N
	A(a == A_A_A);N
	a->a0a = a_a_a0(a) * 0;N
N
	a = A;N
	a = a_a_a(a, "a-a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a_a = a_a_a0(a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a,N
					a_a_a0(a),N
					a_a_a_a);N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a0 = a_a_a(a, "a");N
	a_a_a(a->a, a_a_a0(a0));N
	a0 = a_a_a(a, "a");N
	a (!a_a_a(a0)) {N
		a a *a = a_a_a(a0);N
		a_a_a a = A_A_A;N
N
		a (a(a, "a") == 0) {N
			a = A_A_A;N
		} a a (a(a, "a") == 0) {N
			a = A_A_A;N
		} a {N
			A(0);N
			A_A();N
		}N
N
		a_a_a(a->a,N
					      a_a_a, a);N
	}N
N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A) {N
		a a_a_a *a, *a;N
N
		a = a_a_a(a, "a");N
		a->a_a = a_a_a0(a);N
		a (a->a_a > 0)N
			a->a_a = 0;N
		a = a_a_a(a, "a");N
		a (a_a_a(a)) {N
			a a;N
			a (a = 0; a[a] != A; a++) {N
				a = A;N
				a = a_a_a(&a[a],N
						       "a", &a);N
				A(a == A_A_A);N
				a = a_a_a(a, "a");N
				a (a_a_a0(a))N
					a;N
			}N
			A(a_a_a0(a));N
		}N
		a->a_a = a_a_a0(a);N
		a (a->a_a < a->a_a + 0)N
			a->a_a = a->a_a + 0;N
	}N
N
	/*N
	 * Aa a, a a a a a a a a, aN
	 * "a a".N
	 */N
	A(a_a_a(a, a, a, a,N
					a_a, a));N
	a_a_a(a->a);N
	a = A;N
	a = a_a_a(a, "a-a-a-a", &a);N
	a (a == A_A_A)N
		A(a(a, a->a));N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a_a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a(a);N
		a (a(a, "a") == 0)N
			a->a_a = a_a_a;N
		a a (a(a, "a") == 0)N
			a->a_a = a_a_a;N
		aN
			a->a_a = 0;N
	} aN
		a->a_a = 0;N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	a (a == A_A_A)N
		a_a_a(a, a);N
	a (a == A_A_A && ! a_a_a(a)) {N
		a a_a_a *a;N
		a_a_a a;N
		a_a_a *a;N
N
		a = a_a_a(&a);N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a = a_a_a(a);N
			A(a_a_a(a,N
						  a_a_a(a),N
						  0, A));N
			A(a_a_a(a, a));N
		}N
	} aN
		a_a_a(a, a);N
N
	/*N
	 * Aa AaA a.N
	 */N
	a_a = A;N
	a (a != A) {N
		(a)a_a_a(a, "a", &a_a);N
	} a {N
		(a)a_a_a(a, "a", &a_a);N
	}N
N
#a A_AN
	a (a = a_a_a(a_a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
N
		a (a == A) {N
			a a *a = a_a_a_a();N
			A(a_a_a(a, a,N
						  a_a_a, a,N
						  a_a_a->a,N
						  a_a_a->a,N
						  a_a_a, &a));N
		}N
N
		A(a_a(a, a, a));N
	}N
#aN
N
	/*N
	 * Aa a.N
	 */N
	a_a = A;N
	a (a != A) {N
		(a)a_a_a(a, "a", &a_a);N
	} a {N
		(a)a_a_a(a, "a", &a_a);N
	}N
N
#a A_AN
	a (a_a != A) {N
		A(a->a == A);N
		A(a_a_a(a->a,N
				  (a_a_a **) &a->a));N
		a->a_a = a_a_a;N
N
		a_a_a(a->a, (a_a_a **)&a->a);N
		a->a_a = a_a_a;N
N
		A(a_a_a(a, a_a, a_a_a,N
					     a_a_a, a));N
	}N
#aN
N
	/*N
	 * Aa a a a.  Aa a a a aN
	 * a a a a a.N
	 */N
	a = A;N
	(a)a_a_a(a, "a-a-a", &a);N
	(a)a_a_a(a, "a-a-a", &a);N
	a (a == A && a == A &&N
	    a->a == a_a_a) {N
		a_a_a = a->a;N
	} a a (a->a == a_a_a) {N
		a (a != A)N
			a_a_a = a_a_a(a);N
		aN
			a_a_a = a->a;N
	} a {N
		a_a_a = a;N
	}N
N
	a (a_a_a) {N
		a a *a;N
		a a_a = 0;N
		a_a_a a;N
		a_a_a *a;N
		a_a_a a;N
		a a[A_A_A + 0];N
		a a[A_A_A + 0];N
		a a *a_a[0] =N
				    { "_a", "a", A, A };N
		a a_a = 0;N
		a_a_a_a a = a_a_a;N
N
		a = a_a_a(&a);N
N
		a = A;N
		a = a_a_a(a, "a-a", &a);N
		a (a == A_A_A) {N
			A(a_a_a(a, a_a_a(a),N
						  0, A));N
			a_a_a(&a, a, a(a) - 0);N
			A(a_a_a(a, a, &a));N
			a[a_a_a(&a)] = 0;N
			a_a[0] = a;N
		} aN
			a_a[0] = "@";N
N
		a = A;N
		a = a_a_a(a, "a-a", &a);N
		a (a == A_A_A) {N
			A(a_a_a(a, a_a_a(a),N
						 0, A));N
			a_a_a(&a, a, a(a) - 0);N
			A(a_a_a(a, a, &a));N
			a[a_a_a(&a)] = 0;N
			a_a[0] = a;N
		} aN
			a_a[0] = ".";N
N
		a = A;N
		a = a_a_a(a, "a-a", &a);N
		A(a == A_A_A);N
		a (a_a_a(a)) {N
			a (a_a_a(a))N
				a = a_a_a;N
			aN
				a = a_a_a;N
		} a {N
			a a *a = a_a_a(a);N
			a (a(a, "a") == 0) {N
				a = a_a_a;N
			} a a (a(a, "a") == 0) {N
				a = a_a_a;N
			} a a (a(a, "a") == 0) {N
				a = a_a_a;N
			} a {N
				A(0);N
				A_A();N
			}N
		}N
N
		a (a = a_a[a_a];N
		     a != A;N
		     a = a_a[++a_a])N
		{N
			a_a_a *a = A;N
N
			/*N
			 * Aa a a a a a.N
			 */N
			A(a_a_a(a, a, 0, A));N
			a (a != A &&N
			    a_a_a(a, a))N
				a;N
N
			/*N
			 * Aa a a a.N
			 */N
			(a)a_a_a(a, a, &a);N
			a (a != A) {N
				a_a_a(&a);N
				a;N
			}N
N
			/*N
			 * Aa a a a a a a'a a aN
			 * a a a a.N
			 */N
			a = a_a_a(a->a, a,N
						   A, &a);N
			a (a == A_A_A &&N
			    a->a == a_a_a)N
				a;N
N
			/*N
			 * Aa a a a a-a a a a.N
			 */N
			a = a_a_a(&a_a_a->a,N
						   a->a, a->a,N
						   &a);N
			a (a != A_A_A &&N
			    a != A_A_A)N
				a a;N
N
			a (a != A) {N
				(a)a_a_a(a, a, &a);N
				a_a_a(&a);N
			}N
N
			A(a_a_a(a, a, a, a,N
						a_a, a_a,N
						a));N
			a (a != A)N
				a_a_a(&a);N
		}N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a = a_a(a, a, a);N
		a (a != A_A_A)N
			a a;N
	}N
N
	/*N
	 * Aa a a-a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a  = a_a_a(a);N
	a (a_a > 0)N
		a_a = 0;N
	a_a_a(a, a_a);N
N
	/*N
	 * Aa a a a a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a_a_a *a = a_a_a(&a->a);N
		A(a_a_a(a, a_a_a(a), 0,N
					  A));N
		a->a = a;N
	} a {N
		a->a = A;N
	}N
N
	/*N
	 * Aa a A a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a(a, &a);N
	}N
	a (a == A_A_A) {N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a_a_a a;N
			a_a_a *a;N
N
			a = a_a_a(&a);N
			a = a_a_a(a);N
			A(a_a_a(a,N
						  a_a_a(a),N
						  0, A));N
			A(a_a_a(a, a,N
					       a, 0, 0aA));N
		}N
	}N
N
#a A_AN
	/*N
	 * Aa a a a a a a aN
	 * a a a.N
	 */N
	A(a_a(a, a));N
#a /* A_A */N
N
	a = A_A_A;N
N
 a:N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a0 != A) {N
		a_a_a(&a0);N
	}N
	a (a0 != A) {N
		a_a_a(&a0);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a *a) {N
	a_a_a a;N
	a_a_a *a;N
N
	a = A;N
	a = a_a_a(a->a, a->a, a, &a);N
	a (a == A_A_A) {N
		a_a_a(a, a);N
		a_a_a(&a);N
	}N
N
	a (a);N
}N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		     a a_a_a *a)N
{N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a_a_a a = A_A_A;N
	a_a_a a;N
N
	/*N
	 * Aa a a a a a a.N
	 */N
	A(a_a_a(a, &a), "a");N
N
	a (a != A) {N
		a = a_a_a(a, "a");N
		a (a_a_a0(a)) {N
			a0_a a = a_a_a0(a);N
			a (a > A0_A) {N
				a_a_a(a, a_a_a,N
					    A_A_A,N
					    "a '%a' a a a", a);N
				a (A_A_A);N
			}N
			a = (a_a_a) a;N
		}N
	}N
N
	a = A;N
	a (a != A)N
		a = a_a_a(a, "a");N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
		a_a_a a;N
N
		a (!a_a_a(a)) {N
			a_a_a a;N
			a_a_a *a;N
			a a *a = a_a_a(a_a_a(N
							   a, "a"));N
			a_a_a a;N
			a_a_a a = a;N
N
			a_a_a(&a, a, a(a));N
			a_a_a(&a, a(a));N
			a = a_a_a(&a);N
			A(a_a_a(a, &a, a_a, 0,N
						A));N
N
			a = a_a_a(a, "a");N
			a (a_a_a0(a)) {N
				a0_a a = a_a_a0(a);N
				a (a > A0_A) {N
					a_a_a(a, a_a_a,N
						    A_A_A,N
						    "a '%a' a a a",N
						     a);N
					a (A_A_A);N
				}N
				a = (a_a_a) a;N
			}N
			A(a_a_a(a->a, A,N
							a, a));N
			a;N
		}N
N
		a = *a_a_a(a);N
		a (a_a_a(&a) == 0)N
			a_a_a(&a, a);N
		A(a_a_a(a->a, &a,N
						A, 0));N
	}N
N
 a:N
	a (a);N
}N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		  a a_a_a *a, a a_a_a *a,N
		   a a_a_a *a)N
{N
	a a_a_a *a, *a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a_a_a a = a_a_a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a = -0;N
N
	A_A_A(a);N
N
	/*N
	 * Aa a a a a a a a.N
	 */N
	A(a_a_a(a, &a), "a");N
N
	a (a != A) {N
		a = a_a_a(a, "a");N
		a (a_a_a0(a)) {N
			a0_a a = a_a_a0(a);N
			a (a > A0_A) {N
				a_a_a(a, a_a_a,N
					    A_A_A,N
					    "a '%a' a a a", a);N
				a (A_A_A);N
			}N
			a = (a_a_a) a;N
		}N
	}N
N
	/*N
	 * A a a a a.N
	 */N
	a = a_a_a;N
	a (a != A) {N
		a = a_a_a(a, "a");N
		a (a_a_a0(a)) {N
			a (a_a_a0(a) > 0) {N
				a_a_a(a, a_a_a,N
					    A_A_A,N
					    "a a '%a' a a a a",N
					    a_a_a0(a));N
				a (A_A_A);N
			}N
			a = (a_a_a)a_a_a0(a);N
		}N
	}N
N
	a = A;N
	a (a != A)N
		a = a_a_a(a, "a");N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
		a = a_a_a(a->a, a(a_a_a));N
		a->a = *a_a_a(a);N
		a (a_a_a(&a->a) == 0)N
			a_a_a(&a->a, a);N
		a->a = a_a_a(a);N
		a (a->a == -0)N
			a->a = a;N
		A_A_A(a, a);N
		A_A_A(a, a, a);N
	}N
N
	a (A_A_A(a)) {N
		a (a != A)N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a a; a "N
				    "a");N
		a = a_a_a;N
	} a {N
		a (a == A) {N
			a = a_a_a;N
		} a {N
			a a *a = a_a_a(a);N
			a (a(a, "a") == 0) {N
				a = a_a_a;N
			} a a (a(a, "a") == 0) {N
				a = a_a_a;N
			} a {N
				A(0);N
				A_A();N
			}N
		}N
	}N
N
	a = a_a_a(a->a, a, &a,N
				     a);N
	a (a != A_A_A) {N
		a a[A_A_A];N
		a_a_a(a, a, a(a));N
		a_a_a(a, a_a_a, A_A_A,N
			    "a a a a a a a '%a': %a",N
			    a, a_a_a(a));N
		a a;N
	}N
N
	a = A_A_A;N
N
 a:N
N
	a (!A_A_A(a)) {N
		a = A_A_A(a);N
		A_A_A(a, a, a);N
		a_a_a(a->a, a, a(a_a_a));N
	}N
N
	a (a);N
}N
N
a a_a_aN
a_a(a a_a_a *a, a a **a,N
	     a_a_a *a)N
{N
	a_a_a a = A_A_A;N
	a a *a;N
	a_a_a a;N
N
	A(a != A && *a == A);N
	A(a != A);N
N
	a (a != A) {N
		a a_a_a *a = A;N
N
		a = a_a_a(a_a_a(a, "a"));N
		a = a_a_a(a, "a");N
		A(a_a_a(a, a_a_a,N
					 &a));N
		a (a_a_a(a)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a '%a': a a a a a",N
				      a);N
			A(A_A_A);N
		}N
	} a {N
		a = "_a";N
		a = a_a_a;N
	}N
N
	*a = a;N
	*a = a;N
N
a:N
	a (a);N
}N
N
/*N
 * Aa a a a a a a a a a a a.N
 *N
 * Aa 'a' a A, a a a a a.N
 */N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
	  a_a_a **a)N
{N
	a_a_a a;N
	a a *a = A;N
	a_a_a a;N
	a_a_a *a = A;N
N
	a = a_a(a, &a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a, a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	*a = a;N
	a (A_A_A);N
}N
N
/*N
 * Aa a a a a a a a a a.N
 *N
 * Aa 'a' a A, a a a a.N
 *N
 * Aa a a a a a '*a'.N
 */N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
	    a_a_a **a)N
{N
	a_a_a a;N
	a a *a = A;N
	a_a_a a;N
	a_a_a *a = A;N
N
	a = a_a(a, &a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a(a, a, a, &a);N
	a (a == A_A_A)N
		a (A_A_A);N
	a (a != A_A_A)N
		a (a);N
	A(a == A);N
N
	a = a_a_a(a_a_a, a, a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a_a_a(a->a, a(a->a));N
N
	A_A_A(*a, a, a);N
	a_a_a(a, a);N
	a (A_A_A);N
}N
N
/*N
 * Aa a a a a.N
 */N
a a_a_aN
a_a(a a_a_a *a, a a_a_a *a,N
	       a a_a_a *a, a_a_a *a, a_a_a *a,N
	       a_a_a *a, a_a_a *a,N
	       a_a_a *a, a a, a a_a_a,N
	       a a)N
{N
	a_a_a *a = A;	/* Aa a */N
	a_a_a *a = A;	/* Aa a a a */N
	a_a_a *a = A;		/* Aa a a a a */N
	a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a a *a;N
	a_a_a a;N
	a a *a;N
	a_a_a_a a_a;N
	a a_a_a = a;N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
N
	a = a_a_a(a, "a");N
N
	/*N
	 * Aa a a a a a a_a_a.N
	 */N
	a = a_a_a(a_a_a(a, "a"));N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	a_a_a(&a);N
	A(a_a_a(a_a_a(&a),N
				&a, a_a, 0, A));N
	a = a_a_a(&a);N
N
	A(a_a_a(a_a_a(a, "a"),N
				 a->a, &a));N
	a (a != a->a) {N
		a a *a = A;N
		a (a != A)N
			a = a_a_a(a_a_a(a,N
							       "a"));N
		aN
			a = "<a a>";N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a '%a': a a a a '%a'",N
			      a, a);N
		a = A_A_A;N
		a a;N
	}N
N
	(a)a_a_a(a, "a-a", &a);N
	a (a != A) {N
		a a *a = a_a_a(a);N
		a_a_a *a = A;N
N
		a (a == A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "'a-a' a a a a a "N
				    "a a a");N
			a = A_A_A;N
			a a;N
		}N
N
		a = a_a_a(a, a, a->a,N
					   &a);N
		a (a != A_A_A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a '%a' a a a a.", a);N
			a = A_A_A;N
			a a;N
		}N
N
		a = a_a_a(a, a, &a);N
		a_a_a(&a);N
		a (a != A_A_A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a '%a' a a a a '%a'",N
				    a, a);N
			a = A_A_A;N
			a a;N
		}N
N
		A(a_a_a(a, a));N
		a_a_a(&a);N
N
		/*N
		 * Aa a a a a 'a' a, aN
		 * a a.  Aa: a a a a a aN
		 * a a.N
		 */N
		a = A;N
		a = a_a_a(a, "a", &a);N
		a (a == A_A_A) {N
			a = A;N
			(a)a_a_a(a, "a", &a);N
			A(a_a(a, a, a,N
						a, a));N
		}N
		a = A_A_A;N
		a a;N
	}N
N
	(a)a_a_a(a, "a", &a);N
	a (a == A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a '%a' 'a' a a", a);N
		a = A_A_A;N
		a a;N
	}N
	a = a_a_a(a);N
N
	/*N
	 * "a a" a'a a.	Aa a'a a a,N
	 * a a a a.N
	 */N
	a (a(a, "a") == 0) {N
		a a_a_a *a = A;N
		a (a_a_a(a, "a", &a) != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a '%a': 'a' a a",N
				      a);N
			a = A_A_A;N
			a a;N
		}N
		a (a_a_a(a, a_a)) {N
			a a *a = a_a_a(a);N
N
			A(a_a(a, a));N
N
			/*N
			 * Aa a a a a a a a a.N
			 */N
			a = A;N
			a = a_a_a(a, "a-a",N
					      &a);N
			a (a == A_A_A && a_a_a(a))N
				A(a_a_a(a, a));N
		} a {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a-a a a '%a'",N
				      a);N
			a = A_A_A;N
		}N
		/* Aa a a a. */N
		a a;N
	}N
N
	/*N
	 * "a a" a'a a a.  Aa a a aN
	 * a a a a a a a.N
	 */N
	a (a(a, "a") == 0) {N
		a = A;N
		a = A;N
N
		(a)a_a_a(a, "a", &a);N
		(a)a_a_a(a, "a", &a);N
		A(a_a(a, a, a, a,N
					a));N
N
		/*N
		 * Aa a a a a a a.N
		 */N
		a = A;N
		a = a_a_a(a, "a-a", &a);N
		a (a == A_A_A && a_a_a(a))N
			A(a_a_a(a, a));N
		a a;N
	}N
N
	/*N
	 * "a-a a" a'a a a.N
	 */N
	a (a(a, "a-a") == 0) {N
		a = a_a_a(a, a);N
		a a;N
	}N
N
	/*N
	 * Aa a a a a a.N
	 */N
	a (a(a, "a") == 0) {N
		a (a->a != A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a a a");N
			a = A_A_A;N
			a a;N
		}N
		a = a_a_a(a, a->a,N
					   a->a, &a);N
		a (a != A_A_A && a != A_A_A)N
			a a;N
		a (a != A && a->a != A) {N
			a_a_a(a->a, &a);N
			a_a_a(a, a);N
		} a {N
			A(a_a_a(a_a_a->a,N
						     &a));N
			A(a_a_a(a, a));N
			a_a_a(a, a);N
			A(a_a_a(a_a_a->a,N
						     a));N
			a_a_a(a, a_a_a->a);N
		}N
		A(a_a_a(a, a, a, a,N
					   a, a, A));N
		a_a_a(a, &a->a);N
		a a;N
	}N
N
	a (!a) {N
		/*N
		 * Aa a a a a a a a.N
		 */N
		a = a_a_a(a, a, &a);N
		a (a == A_A_A) {N
			/*N
			 * Aa a a a a!N
			 */N
			a_a_a(a, a_a_a, A_A_A,N
				    "a '%a' a a", a);N
			a_a_a(&a);N
			a = A_A_A;N
			a a;N
		}N
		A(a == A);N
	}N
N
	/*N
	 * Aa a a a a a a a a a a a a,N
	 * a a a a A a a.  Aa a a, aN
	 * A a a a a a a a a a a a a'a a.N
	 */N
	a (a_a = 0; ; ++a_a) {N
		a (a->a == A || a_a >= a->a->a.a_a ||N
		    a->a->a.a_a)N
		{N
			a_a = A_A_A_A;N
			a;N
		}N
		a (a_a_a(&a->a->a[a_a]->a, a))N
			a;N
	}N
N
	a (a->a != A &&N
	    a_a_a_a(a->a, a) != A)N
		a_a_a = a;N
N
	/*N
	 * Aa a a a a a a a.  Aa aN
	 * a a a a a a a a:N
	 *   - Aa a'a a aN
	 *   - A a a a a a a a a aN
	 *   - Aa a a a a a aN
	 *     a (a.a., a a a a aN
	 *     a a a a a a a a a)N
	 *   - Aa a a a a a a a a a a aN
	 *     a a a a a a a a a a aN
	 *     a a a a a a a a a a.N
	 */N
	a = a_a_a(&a_a_a->a, a->a,N
				   a->a, &a);N
	a (a != A_A_A && a != A_A_A)N
		a a;N
	a (a != A)N
		a = a_a_a(a, a, &a);N
	a (a != A_A_A && a != A_A_A)N
		a a;N
N
	a (a != A && !a_a_a(a, a))N
		a_a_a(&a);N
N
	a (a != A && (a_a != a_a_a_a_a(a) ||N
			     (a_a != A_A_A_A && !a_a_a)))N
		a_a_a(&a);N
N
	a (a != A) {N
		/*N
		 * Aa a a a a.  Aa a a aN
		 * a a.N
		 */N
		a_a_a(a, a);N
	} a {N
		/*N
		 * Aa a a a a a, a aN
		 * a a a a a.N
		 */N
		A(a_a_a(a_a_a->a, &a));N
		A(a_a_a(a, a));N
		a_a_a(a, a);N
		A(a_a_a(a_a_a->a, a));N
		a_a_a(a, a_a_a->a);N
	}N
	a (a_a != A_A_A_A) {N
		a = a_a_a_a(a, a->a, a_a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a '%a': a"N
				      " a-a a a"N
				      " a a a a a",N
				      a);N
			a a;N
		}N
	}N
N
	a (a_a_a)N
		a_a_a_a(a, a->a);N
N
	/*N
	 * Aa a a a a 'a' a, aN
	 * a a.N
	 */N
	a = A;N
	a (a_a_a(a, "a", &a) == A_A_A)N
	{N
		a = A;N
		(a)a_a_a(a, "a", &a);N
		A(a_a(a, a, a, a,N
					a));N
	}N
N
	/*N
	 * Aa a a a a a a a a a a.N
	 */N
	a = A;N
	a (a_a_a(a, "a-a", &a) == A_A_A)N
	{N
		a (a_a_a(a))N
			A(a_a_a(a, a));N
	}N
N
	/*N
	 * Aa a a a a a a a a a aN
	 */N
	a_a_a(a, a);N
N
	a = A;N
	a ((a(a, "a") == 0 ||N
	     a(a, "a") == 0 ||N
	     a(a, "a") == 0 ||N
	     a(a, "a") == 0) &&N
	    ((a_a_a(a, "a-a", &a) ==N
	      A_A_A && a_a_a(a)) ||N
	     (a_a_a(a, "a-a", &a) ==N
	      A_A_A && a != A &&N
	      a(a_a_a(a), "a") != 0)))N
	{N
		a_a_a(a, &a);N
		a (a == A) {N
			A(a_a_a(&a, a));N
			A(a_a_a(a, a));N
			a_a_a(a, a);N
			a_a_a(a, a_a_a->a);N
			A(a_a_a(a, a));N
		}N
		a (a_a_a(a, "a-a-a",N
				&a) == A_A_A)N
		{N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a '%a': 'a-a-a' a "N
				      "a a a-a a",N
				      a);N
		}N
	}N
N
	/*N
	 * Aa a a.N
	 */N
	A(a_a_a(a, a, a, a, a,N
				   a, a));N
N
	/*N
	 * Aa a a a a a a a a a a.N
	 */N
	a (!a)N
		A(a_a_a(a, a));N
N
	a (a_a_a) {N
		/*N
		 * a a a a a a a a;N
		 * a a'a a a'a a a a a aN
		 */N
		a_a_a *a = A;N
N
		a = a_a_a(a, &a);N
		a (a == A_A_A) {N
			a_a_a_a(a, a->a);N
			a_a_a(&a);N
		}N
N
	}N
N
	/*N
	 * Aa a a a a a a aN
	 */N
	a ((a_a_a(a) & A_A_A) != 0)N
		a_a_a(a, a);N
N
 a:N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
/*N
 * Aa a-a a a a a-a a.N
 */N
a a_a_aN
a_a_a(a_a_a *a, a a *a, a_a_a *a) {N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a[A_A];N
	a a;N
N
	A(a != A);N
N
	/* Aa a a a a-a a a a a. */N
	a = a_a_a(&a_a_a->a,N
				   a->a, a->a, &a);N
	a (a != A_A_A && a != A_A_A) {N
		a (a);N
	}N
N
	a (a != A) {N
		a (a->a_a != A) {N
			a_a_a(a->a_a,N
					&a->a_a);N
			a_a_a(a->a_a, a);N
			a_a_a(&a);N
			a_a_a(a->a_a);N
			a (A_A_A);N
		}N
N
		a_a_a(&a);N
	}N
N
	/* Aa a a a a a; a a */N
	A(a_a_a(a_a_a->a, &a));N
	A(a_a_a(a, a_a));N
N
	a = (a(a->a, "_a") == 0);N
	A(a_a_a(a,N
				a ? "a-a" : a->a,N
				a ? "a" : "a",N
				a, a(a)));N
	A(a_a_a(a, a, a_a_a,N
			       &a_a_a_a));N
N
	a_a_a(a, a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, a->a);N
N
	A(a_a_a(a_a_a->a, a));N
N
	A(a_a_a(a, &a));N
	a_a_a(a, a);N
	a_a_a(a, a);N
	a_a_a(&a);N
N
	a_a_a(a, a_a_a);N
	a_a_a(a, a_a_a);N
	a_a_a(a, A_A_A, a);N
	a_a_a(a, 0);N
N
	a_a_a(a, a_a_a->a);N
	A(a(a, a, a_a_a));N
N
	a (a->a_a != A) {N
		a_a_a(&a->a_a);N
	}N
	a_a_a(a, &a->a_a);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a a a %a, a '%a'",N
		      a->a, a);N
N
a:N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a);N
}N
N
/*N
 * Aa a a a a.N
 */N
a aN
a_a_a(a a_a_a **a, a a *a,N
		       a_a_a *a)N
{N
	a a_a_a *a = A;N
	a_a_a a;N
N
	a = a_a_a(a, a, &a);N
	A(a == A_A_A);N
	a_a_a(a, a_a_a0(a));N
}N
N
/*N
 * Aa a a a a a a a 'a' a a aN
 * a.  Aa a a a a a a a a a.N
 */N
a a_a_aN
a_a(a a *a, a a_a_a *a, a *a) {N
	a_a_a a;N
	a a *a;N
N
	A(a("a", a) == 0);N
N
	A(a);N
	A(a);N
N
	/*N
	 * Aa a.N
	 */N
	a = a_a_a(a);N
N
	a (! a_a_a(a))N
		a_a_a(a, a_a_a, A_A_A,N
			    "a 'a' a a a '%a'",N
			    a);N
N
	a (!a_a_a(a)) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a '%a' a a a",N
			      a);N
		a (A_A_A);N
	}N
N
	a = a_a_a(a);N
	a (a != A_A_A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a a a '%a' a: %a",N
			    a, a_a_a(a));N
		a (a);N
	}N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	      a_a_a a, a a_a)N
{N
	a_a_a *a = A;N
	a_a_a *a_a = A;N
	a_a_a a;N
	a_a_a a_a0;N
	a_a_a a;N
N
	A(a_a_a(a) == A_A0);N
N
	a_a_a0(&a_a0);N
	a (!a_a_a(&a_a0, a) &&N
	    (a_a || a_a_a(a) != 0)) {N
		a_a_a0(&a, &a->a.a0.a0_a);N
N
		a = a_a_a(a, 0, &a_a);N
		a (a != A_A_A)N
			a (a);N
N
		a = a_a_a(a_a->a, &a,N
					       0, a);N
		a (a != A_A_A)N
			a a;N
N
		a = a_a_a(a, a_a_a(a),N
					     a, a_a, &a);N
		a (a != A_A_A)N
			a a;N
		A_A_A(a->a, a, a);N
	}N
N
	a (A_A_A);N
N
 a:N
	A(a == A);N
	a_a_a(&a_a);N
N
	a (a);N
}N
N
/*N
 * Aa a a a a-a a a a a_a_a()N
 * a a a a a a.N
 * Aa a a a Aa0, a a a a Aa0 aN
 * a.N
 */N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a;N
	a_a_a *a, *a;N
	a_a_a a, *a;N
	a_a_a a = -0;N
N
	a = a_a_a(a, &a);N
	a (a != A_A_A)N
		a;N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a_a_a *a0;N
N
		a0 = a_a_a0(a->a);N
		a (a0 == A)N
			a;N
		a = a_a_a(a0, &a);N
		a (a != A_A_A)N
			a a;N
N
		/*N
		 * Aa a a a-a a a a aN
		 * a a a 'a' (a a a a A): a a a aN
		 * a, a a a a a a a a a a aN
		 * a a; a a'a a, a'a a aN
		 * a a, a a a a a a a aN
		 * a Aa0 a.N
		 */N
		/* A a a */N
		a = a_a(a, a, &a, a, a);N
		a (a != A_A_A)N
			a a;N
	}N
N
	a = A;N
	a (a = a_a_a(a->a, &a);N
	     a == A_A_A;N
	     a = A, a = a_a_a(a, &a), a = a) {N
		a_a_a *a;N
N
		/*N
		 * Aa a a a a a a a a a aN
		 * a a a a a.  Aa a a a,N
		 * a a a a a a a a a a a.N
		 * Aa a a a a a a a a a a aN
		 * a a a a a a a a a aN
		 * (a == A).N
		 */N
		a = a_a_a(a);N
		a (a == A)N
			a;N
		a (a = A_A_A(a->a);N
		     a != A && a != a;N
		     a = A_A_A(a, a))N
			;N
		a (a == A)N
			a;N
N
		a = a_a_a0(a);N
		a = a_a_a0a(a);N
		a = a_a(a, a, a, a, a);N
		a (a != A_A_A)N
			a a;N
N
		a = a_a_a0(a);N
		a = a_a_a0a(a);N
		a = a_a(a, a, a, a, a);N
		a (a != A_A_A)N
			a a;N
	}N
N
	a_a_a(a->a, a, a);N
N
 a:N
	a_a_a(&a);N
	a;N
N
 a:N
	/*N
	 * Aa a a a a a, a a a aN
	 * a a a.  Aa a a a a.N
	 */N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a-a a; "N
		      "a a a a a");N
	a a;N
}N
N
/*N
 * Aa a a a a a a a a aN
 * a.N
 */N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a = (a_a_a *) a->a_a;N
	A(a == a->a);N
	A(a);N
N
	a_a_a(&a);N
	a_a_a(a->a, a);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a = (a_a_a *) a->a_a;N
	a_a_a *a;N
N
	A(a);N
	a_a_a(&a);N
	a = A_A_A(a->a);N
	a (a != A) {N
		a_a_a(a);N
		a = A_A_A(a, a);N
	}N
}N
N
a a {N
       a_a_a       *a;N
       a_a_a      *a;N
       a_a_a  a;N
       a_a_a  a;N
       a_a_a     *a;N
} a_a_a;N
N
a aN
a(a a *a, a a *a) {N
	a a0_a a = *(a a0_a *)a;N
	a a0_a a = *(a a0_a *)a;N
	a (a < a)N
		a (-0);N
	a a (a > a)N
		a (0);N
	aN
		a (0);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a;N
	a_a_a *a;N
N
	A(a);N
	A(a != A && a->a_a == A_A_A);N
	A(a->a_a != A);N
N
	a = a->a_a;N
	a = (a_a_a *) a;N
N
	/* Aa a a a a a a */N
	a (a->a != A)N
		a_a_a(a->a, &a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a_a_a(&a);N
	a_a_a(&a->a);N
	a (a_a_a(&a->a))N
		a_a_a(&a->a);N
	a (a_a_a(&a->a))N
		a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a, a, a(*a));N
}N
N
a a_a {N
	a_a_a *a;N
	a_a_a *a;N
};N
N
/*%N
 * Aa a A a a A a a a a a a a aN
 * a a a 'a' a 'a'.  Aa a a a 'a' aN
 * a a a a 'a' a a a a 'a'.N
 *N
 * A a a 0 a Aa a a a a a a A a a a aN
 * 0-a a a a a a a a a a a.  Aa a aN
 * a a 0 a a a 'a', a a a 0 a aN
 * a a a A a.N
 */N
a a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
	      a_a_a *a, a_a_a *a)N
{N
	a_a_a *a = a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a a, a = 0;N
	a0_a a[0];N
	a_a_a a;N
	a a[0];N
	a a;N
N
	a ((a = a_a_a(a)) != A) {N
		a_a_a a;N
N
		a (a = a_a_a(a);N
		     a == A_A_A;N
		     a = a_a_a(a))N
		{N
			a_a_a a = A_A_A;N
			a_a_a_a a;N
N
			a_a_a(&a);N
			a_a_a(a, &a);N
			a = a_a_a(&a, &a, A);N
			A_A(a == A_A_A);N
			a (a < (a(a)/a(a[0]))) {N
				a[a] = a.a_a;N
				a++;N
			}N
		}N
	} a {N
		a {N
			a_a_a *a = a_a_a(a);N
			a (a != A) {N
				a (a < (a(a)/a(a[0]))) {N
					a[a] = a_a_a(a);N
					a++;N
				}N
			}N
			a = A;N
			(a)a_a_a(a, a,N
						       &a);N
			a (a != a) {N
				a_a_a(a, &a);N
			}N
			a = a;N
		} a (a != A);N
	}N
N
	a (a == 0) {N
		a (A_A_A);N
	}N
N
	a (a > 0) {N
		a(a, a, a(a[0]), a);N
	}N
N
	/*N
	 * Aa a "_a-a\(-a\)*" a a a a a a aN
	 * a a a.N
	 */N
	a[0] = 0;N
	a.a = a;N
	a.a = a(a);N
	a = a(a.a, a.a, "_a");N
	a (a < 0 || (a)a > a.a) {N
		a (A_A_A);N
	}N
	a_a_a(&a, a);N
	a (a = 0; a < a; a++) {N
		a = a(a.a, a.a, "-%0a", a[a]);N
		a (a < 0 || (a)a > a.a) {N
			a (A_A_A);N
		}N
		a_a_a(&a, a);N
	}N
N
	a (a_a_a0(a, a, a, 0, A));N
}N
N
a aN
a(a_a_a *a, a_a_a *a,N
      a_a_a *a, a *a)N
{N
	a a_a *a_a = a;N
	a a[A_A_A];N
	a_a_a a, a;N
	a_a_a *a, *a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
N
	A(a != A);N
	A(a != A);N
	A(a_a != A);N
N
	a = a_a->a;N
	a = a_a->a;N
N
	a = a_a_a(&a);N
	a = a_a_a(a, a, a, a);N
	a (a != A_A_A) {N
		a;N
	}N
N
	a_a_a(a, a, a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		     "%a: a a-a-a a '%a/A'",N
		     a->a, a);N
N
	a = a_a_a(a_a->a->a, a(*a));N
N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(a_a->a->a, &a->a);N
	a_a_a(a, &a->a);N
N
	/*N
	 * A a a a a a a a a a a aN
	 * a.  Aa a a a a a a a a aN
	 * a a a a a, a a_a_a() aN
	 * A 'a' a 'a' a a a 'a' a aN
	 * a a, a a a A a a.N
	 *N
	 * Aa a a a a a a_a_a() a.  AaN
	 * a a a a a, a A Aa a a a a aN
	 * a a a a a a; a a a a, a a aN
	 * a a a a a a a a a a.  Aa a a,N
	 * a a a a a_a_a() a a aN
	 * a a A a 'a' a a a a aN
	 * a a a a a a a a a aN
	 * a a a a a a a a a a A aN
	 * a.N
	 *N
	 * Aa a a_a_a() a, 'a' a a aN
	 * a a a a a a a 'a' a 'a' aN
	 * a a A Aa a a a a.N
	 */N
	a = a_a_a(&a);N
	a_a_a(&a);N
	a = a_a_a(a, a, a, A, 0, 0,N
				      a, a, &a, A);N
	a (a == A_A_A) {N
		a = a_a_a(a->a, a,N
						  a_a_a, a,N
						  &a, A, A, 0,N
						  0, 0, A, a->a,N
						  a_a, a,N
						  &a->a,N
						  &a->a,N
						  &a->a);N
	}N
N
	/*N
	 * 'a' a a a_a_a a a a a_a_a a.N
	 * a_a_a() a a a a a 'a' a aN
	 * a.  Aa, 'a' a a a a.N
	 *N
	 * Aa a a_a_a() a a a aN
	 * A_A_A, a a a a a 'a'.N
	 * a_a_a() a a a a a 'a' aN
	 * a a.  Aa, a a a a a 'a' aN
	 * a a a a a a a.N
	 */N
	a (a_a_a(&a)) {N
		a_a_a(&a);N
	}N
N
	a (a != A_A_A) {N
		a_a_a(&a->a);N
		a_a_a(&a->a, a, a(*a));N
	}N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a_a_a *a = (a_a_a *) a->a_a;N
	a a_a a;N
	a_a_a *a;N
	a_a_a *a = A;N
N
	a_a_a(&a);N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (!a->a_a_a ||N
		    !a->a)N
		{N
			a;N
		}N
N
		a = a_a_a(a, &a);N
		a (a != A_A_A) {N
			a;N
		}N
N
		a.a = a;N
		a.a = a;N
		(a)a_a_a(a, a, &a);N
		a_a_a(&a);N
	}N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a a a = 0;N
	a a a = a_a_a(&a_a_a);N
N
	A(a);N
	a_a_a(&a);N
N
	/*N
	 * Aa'a a a a a a a a a a a.N
	 */N
	a_a = (a - a) / 0;N
	a = a;N
}N
N
/*N
 * Aa a a a a '*a', a a aN
 * a a A, a a a a a a aN
 * a-a a a a a 'a', a A.N
 */N
a a_a_aN
a(a_a_a *a, a **a, a a *a) {N
	a *a;N
N
	a (a != A) {N
		a = a_a_a(a->a, a);N
	} a {N
		a = A;N
	}N
N
	a (*a != A)N
		a_a_a(a->a, *a);N
N
	*a = a;N
	a (A_A_A);N
}N
N
/*N
 * Aa a a a a '*a', a a aN
 * a a A, a a a a aN
 * a A a a 'a' a a a a a a, a.N
 */N
a a_a_aN
a(a_a_a *a, a **a, a a_a_a *a) {N
	a (a_a_a(a))N
		a (a(a, a, A));N
	aN
		a (a(a, a, a_a_a(a)));N
}N
N
a aN
a_a(a a_a_a **a, a a *a,N
	  a a *a, a_a_a a,N
	  a_a_a a)N
{N
	a a_a_a *a = A;N
	a a *a;N
	a_a_a a;N
	a_a_a a;N
N
	a (a_a_a(a, a, &a) != A_A_A)N
		a;N
N
	a (a_a_a(a)) {N
		a = a_a_a(a);N
		a (a(a, "a") == 0)N
			a = A_A_A;N
		a {N
			A(a(a, "a") == 0);N
			a = a;N
		}N
	} aN
		a = a_a_a0(a);N
N
	a = a_a_a(a, a);N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A,N
		      a == A_A_A ?N
			A_A_A(0) : A_A_A,N
		      "a a %a a %" Aa0 ": %a",N
		      a, a, a_a_a(a));N
}N
N
#a A(a, a, a) \N
	a_a(a, a, a, a_a_ ## a, \N
		  a_a_a ## a)N
N
a aN
a_a(a a_a_a **a) {N
	A("a", a, "a a");N
	A("a", a, "a a");N
	A("a", a, "a a");N
	A("a", a, "a a");N
}N
N
a aN
a_a(a_a_a *a, a a_a_a *a,N
		 a a)N
{N
	a a_a_a *a;N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a)) {N
		a a_a_a *a = a_a_a(a);N
N
		a (a_a_a0(a)) {N
			a_a_a a = (a_a_a)a_a_a0(a);N
N
			a (a)N
				a_a_a(a, a);N
			aN
				a_a_a(a, a);N
		} a {N
			a a_a_a *a_a, *a_a;N
			a_a_a a, a;N
N
			a_a = a_a_a(a, "a");N
			a = (a_a_a)a_a_a0(a_a);N
			a_a = a_a_a(a, "a");N
			a = (a_a_a)a_a_a0(a_a);N
N
			a (a)N
				a_a_a(a, a, a);N
			a {N
				a_a_a(a, a,N
							a);N
			}N
		}N
	}N
}N
N
a a_a_aN
a(a_a_a *a, a *a) {N
	a a *a;N
N
	a (a_a_a(a) != a)N
		a (A_A_A);N
N
	a (a_a_a(a)) {N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a-a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a:N
		a = "a";N
		a;N
	}N
	a_a_a(a, A_A_A, "(%a) a", a);N
	a (A_A_A);N
}N
N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a (a->a_a != A) {N
		a_a_a(a->a_a);N
		a_a_a(a, a->a_a);N
		a->a_a = A;N
	}N
N
	a (a->a_a != A) {N
		a (a_a_a(a->a_a))N
			a_a_a(a->a_a, a);N
		a_a_a(a, a->a_a, a(a_a_a));N
		a->a_a = A;N
	}N
N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a->a_a = A_A_A;N
	a->a_a = 0;N
}N
N
a a_a_aN
a_a_a(a a *a, a a *a,N
		     a a_a_a *a, a a *a,N
		     a a_a_a *a, a a a,N
		     a0_a a, a_a_a *a,N
		     a_a_a **a)N
{N
	a_a_a a = A_A_A;N
	a_a_a *a = A;N
	a_a_a a_a;N
	a_a_a a_a;N
	a a_a[0];N
	a a_a[0];N
	a_a_a a_a;N
	a_a_a a;N
	a_a_a *a = A;N
	A *a = A;N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a A");N
N
	/* a a */N
	a = a_a_a(a, a, a, 0, 0,N
				  A_A_A, a_a_a,N
				  a, &a, A);N
	a (a != A_A_A)N
		a (a);N
N
	/*N
	 * Aa a a a a a a a a.  Aa a a aN
	 * a a a a a a a a.N
	 */N
	a_a_a(&a_a, &a_a, a(a_a));N
	A(a_a_a(a, &a_a));N
N
	a_a_a(&a_a, &a_a);N
	a_a_a(&a_a, &a_a, a(a_a));N
	A(a_a0_a(&a_a, -0, "", &a_a));N
N
	/* Aa a a a a. */N
	a_a_a(&a);N
	A(a_a_a(a_a_a(a), a, a,N
					a, A, a, a, a, A,N
					&a));N
N
	/* Aa a a a a a a. */N
	a = a_a_a(a, A_A|A_A, a);N
	a (a == A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a %a", a);N
		a = A_A_A;N
		a a;N
	}N
N
	a(a, "a \"%a\" {\a"N
		"\a %a;\a"N
		"\a \"%.*a\";\a};\a", a, a,N
		(a) a_a_a(&a_a),N
		(a*) a_a_a(&a_a));N
N
	A(a_a_a(a));N
	a = a_a_a(a);N
	a = A;N
	a (a != A_A_A)N
		a a;N
N
	a_a_a(&a);N
N
	*a = a;N
N
	a (A_A_A);N
N
  a:N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a "N
		      "a a A: %a", a_a_a(a));N
	a (a != A) {N
		(a)a_a_a(a);N
		(a)a_a_a(a);N
	}N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a a_a_aN
a_a_a(a a_a_a **a, a_a_a *a,N
		      a_a_a *a)N
{N
	a a *a, *a, *a;N
	a a a;N
	a_a_a a;N
	a_a_a *a;N
	a a_a_a *a;N
	a_a_a a;N
	a0_a a;N
	a a_a_a *a;N
	a a_a = a;N
	a a_a = a;N
	a_a_a a;N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a (a_a_a(a))N
			a = A; /* a a */N
		aN
			a = a_a_a(a);N
	} aN
		a = a_a_a;N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a(a);N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	a = a_a_a(&a);N
	a = a_a_a(a, &a, a_a, 0, A);N
	a (a != A_A_A)N
		a (a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a(a);N
	a = A;N
	a = a_a_a0(a, &a, &a,N
					       &a);N
	a (a != A_A_A) {N
		a a *a = " (a a a)";N
N
		a_a_a(a, a_a_a, A_A_A, "a-a: "N
			    "a a a a '%a'%a",N
			    a,N
			    a->a_a != A ? a : "");N
		a (a);N
	}N
N
	/* Aa a a a a (a)a a a a. */N
	a (a == A) {N
		a (a->a_a != A)N
			a_a = a;N
	} a a (a->a_a == A)N
		a_a = a;N
	a a (a(a, a->a_a) != 0 ||N
		 !a_a_a(a->a_a, a) ||N
		 a->a_a != a ||N
		 a->a_a != a) {N
		a_a = a;N
		a_a = a;N
	}N
N
	a (a_a) {N
		A(a->a_a != A);N
		A(a->a_a != A);N
		A(a->a != A);N
N
		a_a_a(a, a);N
	}N
N
	a (a_a) {N
		A(a->a == A);N
		A(a->a_a == A);N
		A(a->a_a == A);N
		A(a->a_a == A_A_A);N
		A(a->a_a == 0);N
N
		a->a_a = a_a_a(a,N
						      a(a_a_a));N
		a_a_a(a->a_a, A);N
		A(a_a_a(a, a, a->a_a));N
N
		a->a_a = a_a_a(a, a);N
N
		a->a_a = a;N
		a->a_a = a;N
N
		A(a_a_a(a, a, a, a,N
					   a, a, a, a,N
					   &a->a));N
	}N
N
	a (a);N
N
  a:N
	a_a_a(a, a);N
	a (a);N
}N
N
#a A_AN
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a *a_a) {N
	a_a_a a;N
N
	/* Aa a a a a a a. Aa a A. */N
	a (!a_a_a(a->a_a_a)) {N
		*a_a = 0;N
		a (A_A_A);N
	}N
N
	/*N
	 * Aa a a a A a, a a a a a aN
	 * a a a a a.N
	 *N
	 * Aa a a a a a a, a a aN
	 * a a a a.N
	 */N
	a_a_a(a_a_a);N
	a = a_a_a(a_a_a, a->a_a_a,N
				&a_a_a, &a->a_a);N
	a (a == A_A_A) {N
		a a_a;N
N
		a_a = a_a(a->a_a);N
		a_a_a(a_a_a,N
			      A_A_A, A_A_A,N
			      A_A_A,N
			      "A a '%a' a %a a",N
			      a->a_a_a, a_a);N
		a (a_a != A)N
			*a_a = a_a;N
	} a {N
		a_a_a(a_a_a,N
			      A_A_A, A_A_A,N
			      A_A_A,N
			      "Aa a A a '%a': %a",N
			      a->a_a_a,N
			      a_a_a(a));N
	}N
N
	a (a);N
}N
N
#a /* A_A */N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a *a_a) {N
	a_a_a a;N
	a a;N
N
	A(a);N
N
	A(a_a != A);N
N
	A(a_a(a));N
N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A, "a A a a a '%a' "N
		      "a a '%a'",N
		      a->a_a_a, a->a);N
N
	A(a_a(a, &a));N
N
	*a_a = a;N
N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A,N
		      "A a '%a' a %a a",N
		      a->a_a_a, a);N
N
 a:N
	a (a != A_A_A)N
		*a_a = 0;N
N
	a (A_A_A);N
}N
N
#a /* A_A */N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	       a_a_a *a_a, a_a_a *a,N
	       a *a_a)N
{N
	a_a_a a = A_A_A;N
	a a = a;N
	a_a_a *a = A;N
	a a_a_a *a[0];N
	a a_a_a *a = A, *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a *a = A;N
	a a_a_a *a = A;N
	a a = 0;N
	a0_a a = 0A;N
N
	A(a != A);N
N
	a (a != A)N
		a = a_a_a(a, "a");N
	a (a != A)N
		a[a++] = a;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A)N
		a[a++] = a;N
	a[a++] = a_a_a;N
	a[a] = A;N
N
	a = a_a_a(a, "a-a-a", &a);N
	a (a == A_A_A)N
		a = a_a_a(a);N
	a = a_a_a(a, "a-a-a", &a);N
	a (a == A_A_A) {N
		a = a_a_a(a);N
		a (a != A) {N
			a = a_a_a(a);N
		}N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a-a-a %a: %a",N
				      a, a_a_a(a));N
			a (a);N
		}N
		a (!a_a_a(a)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a-a-a '%a' "N
				      "a a a", a);N
			a (A_A_A);N
		}N
N
		a_a_a(a, a);N
	}N
N
#a A_AN
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A && a != A) {N
		a = a_a_a0(a);N
		a (a < (0A << 0)) { /* 0 a */N
			a_a_a(a, a_a_a,N
				    A_A_A,N
				    "'a-a "N
				    "%" Aa0 "' "N
				    "a a a",N
				    a);N
			a (A_A_A);N
		} a a (a > (0A << 0)) { /* 0 a */N
			a_a_a(a, a_a_a,N
				    A_A_A,N
				    "'a-a "N
				    "%" Aa0 "' "N
				    "a a a",N
				    a);N
			a (A_A_A);N
		}N
	}N
#aN
	A(a);N
#a /* A_A */N
N
	/*N
	 * A a-a a-a a a a-a-aN
	 */N
	a (!a) {N
		a a_a_a *a = A;N
		a = a_a_a(a, "a-a", &a);N
		a (a == A_A_A) {N
			a a_a_a *a =N
				a_a_a(a_a_a(a, "a a"));N
			a (a != A)N
				a = a;N
		}N
	}N
N
	a (!a) {N
		a_a_a(a, a, A, A, 0A);N
		a (a_a != A)N
			*a_a = 0;N
		a (A_A_A);N
	}N
N
	a = a_a_a(a->a, a(*a));N
N
	/*N
	 * Aa a a a a a a a a a aN
	 * a a a a a a a a a a, a aN
	 * a a a a.N
	 */N
	a(a, 0, a(*a));N
	a_a_a(a_a, &a->a_a);N
	a_a_a(a_a_a, &a->a_a);N
	a_a_a(a->a, &a->a);N
	a_a_a(a, &a->a);N
N
	a = a_a_a(a, a, a,N
				      a_a_a, a);N
	a (a != A_A_A) {N
		a_a_a(a, a, A, A, 0A);N
		a (a);N
	}N
N
	a_a_a(a, &a->a);N
	a (a != A)N
		a_a_a(a, &a->a);N
N
	a = a_a(a, a, a_a);N
	a (a);N
}N
N
a aN
a_a_a(a_a_a a, a a_a_a *a,N
			     a_a_a *a)N
{N
	a a *a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a0;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
N
	a = a_a_a(a_a_a(a, "a"));N
	a = a_a_a(&a);N
N
	a0 = a_a_a(a, a, 0, A);N
	a (a0 != A_A_A) {N
		a;N
	}N
N
	a0 = a_a_a(&a_a_a->a, a->a,N
				    a->a, &a);N
	a (a0 != A_A_A) {N
		a;N
	}N
N
	a0 = a_a_a(a, a, &a);N
	a (a0 != A_A_A) {N
		a_a_a(&a);N
		a;N
	}N
N
	a_a_a(a, &a);N
N
	a (a == A_A_A) {N
		a_a_a(a);N
		a (a != A)N
			a_a_a(a);N
	} a {N
		a_a_a(a);N
		a (a != A)N
			a_a_a(a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a_a_a(&a);N
	a_a_a(&a);N
}N
N
#a A_AN
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
		   a_a_a *a, a_a_a *a)N
{N
	a_a_a a;N
	a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a;N
N
	a = a->a_a_a;N
	a (a == A || a->a_a == A) {N
		a (A_A_A);N
	}N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a '%a'",N
		      a->a);N
N
	a = A;N
	a_a_a(a->a_a, "a", &a);N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
		A(a_a(a, a, a, a, a,N
				     &a_a_a->a,N
				     &a_a_a->a, a, a,N
				     a, a));N
	}N
N
	a = A_A_A;N
N
 a:N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a = a_a_a(a);N
		a_a_a(a, a, a);N
	}N
N
	a (a);N
}N
N
#a /* A_A */N
N
a a_a_aN
a_a_a(a_a_a *a, A_a *a, A_a *a,N
	   a_a_a **a, a_a_a **a)N
{N
	a_a_a a;N
	a a *a_a;N
	a_a a_a_a;N
	a a *a_a;N
	a_a a_a_a;N
	a_a_a *a = A;N
N
	A(a != A);N
	A(a != A);N
	A(a != A);N
	A(a != A);N
	A(a != A && *a == A);N
N
	a (*a == A) {N
		a = a_a_a(a->a, a, 0);N
		a (a != A_A_A)N
			a a;N
	} a {N
		a_a_a(*a);N
	}N
N
	a_a = (a a *) a->a_a;N
	a_a_a = a->a_a;N
	A(a_a != A && a_a_a > 0);N
N
	a_a = (a a *) a->a_a;N
	a_a_a = a->a_a;N
	A(a_a != A && a_a_a > 0);N
N
	/* a a { a; }; */N
	a = a_a_a(a, 0 + a_a_a + 0 +N
				    a_a_a + 0);N
	a (a != A_A_A) {N
		a a;N
	}N
N
	A(a(a, "a "));N
	A(a(a, (a a *) a_a, a_a_a));N
	A(a(a, " "));N
	A(a(a, (a a *) a_a, a_a_a));N
	A(a(a, ";\a"));N
N
	a_a_a(a_a_a);N
	a = a_a_a(a_a_a, *a, a_a, 0,N
				  &a_a_a, 0, &a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a '%.*a' a "N
			      "A a '%a' a",N
			      (a) a_a_a, a_a,N
			      a->a_a_a);N
		a a;N
	}N
N
	*a = a;N
	a = A;N
	a = A_A_A;N
N
 a:N
	a (a != A) {N
		a_a_a(a_a_a, &a);N
	}N
N
	a (a);N
}N
N
/*%N
 * Aa a a a a a a a a a_a_a_a().N
 */N
a a_a_a (*a_a_a_a)(a a_a_a *a,N
					 a_a_a *a, a_a_a *a,N
					 a_a_a *a, a_a_a *a,N
					 a_a_a *a);N
N
/*%N
 * Aa a a a a a A a a a a, a a aN
 * a a a a a "a" a a aN
 * a, "a", "a", "a", "a" a "a" a a (aN
 * a a a-a a a a a a_a()).N
 * Aa a a a a a a a aN
 * a A a a a a a a a a "a"N
 * a a a.N
 */N
a a_a_aN
a_a_a_a(a_a_a_a a, a_a_a *a,N
		     a_a_a *a, a_a_a *a, a_a_a *a,N
		     a_a_a *a, A_a *a, A_a a)N
{N
	a a_a_a *a, *a;N
	a_a_a a = A_A_A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	A_a *a = A;N
	A_a a, a;N
	a a;N
N
	a = a_a_a(a, a, &a);N
	a (a != A_A) {N
		a (A_A_A);N
	}N
N
	a (a = a_a_a(a, &a, &a, A_A);N
	     a == A_A;N
	     a = a_a_a(a, &a, &a, A_A))N
	{N
		/*N
		 * Aa a a a a a a a A.N
		 */N
		a = a_a_a(a, &a, &a, &a, &a);N
		a (a != A_A_A) {N
			a;N
		}N
N
		/*N
		 * Aa a a a a a.N
		 */N
		a = A;N
		a = a_a_a(a, "a", &a);N
		a (a != A_A_A) {N
			a;N
		} a a (!a_a_a(a)) {N
			a = A_A_A;N
			a;N
		}N
		a = a_a_a(a_a_a(a));N
N
		/*N
		 * Aa a.N
		 */N
		a = a(a, a, a, a, a, a);N
		a (a != A_A_A) {N
			a;N
		}N
N
		/*N
		 * Aa a a a a a a a.N
		 */N
		a_a_a(a_a_a, &a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(a_a_a, &a);N
	}N
	a_a_a(a);N
N
	a (a);N
}N
N
/*%N
 * Aa a a a a a a A a a a a.N
 */N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a,N
		  a_a_a *a, a_a_a *a, a_a_a *a,N
		  a_a_a *a)N
{N
	a (a_a(a, a, a, a, a,N
			       &a_a_a->a,N
			       &a_a_a->a, a, a, a,N
			       a));N
}N
N
/*%N
 * Aa a a a a a a a a A.N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a_a_a *a,N
			 a_a_a *a, a_a_a *a, a_a_a *a,N
			 a_a_a *a)N
{N
	A(a);N
	A(a);N
	A(a);N
	A(a);N
N
	a_a_a(A_A_A, a, a);N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
		   a_a_a *a, a_a_a *a)N
{N
	a_a_a a;N
	A_a *a = A;N
	A_a a;N
N
	a (a->a_a_a == A) {N
		a (A_A_A);N
	}N
N
	a = a_a(a, A_A, &a, &a);N
	a (a != A_A_A) {N
		a (A_A_A);N
	}N
N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A, "a A a a '%a' "N
		      "a a '%a'",N
		      a->a_a_a, a->a);N
N
	a = a_a_a_a(a_a, a, a, a,N
				      a, a, a, a);N
	a (a != A_A_A) {N
		/*N
		 * Aa a a a a a a a aN
		 * a a A.  Aa a a a a a a a aN
		 * a_a() a, a a a a aN
		 * a a a a a a A a a a a.  AaN
		 * a a a, a a, a a a a a a a aN
		 * a a a a a a a.N
		 */N
		(a) a_a_a_a(a_a_a, a,N
					    a, a, a, a, a,N
					    a);N
	}N
N
	(a) a_a(&a, a);N
	a (a);N
}N
N
a a_a_aN
a_a_a(a_a_a *a, a a *a,N
		   a_a_a **a)N
{N
	a_a_a a;N
	a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	A_a *a = A;N
	A_a a;N
	A_a a, a;N
	a a[A_A_A];N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
N
	A(a != A && *a == A);N
N
	A(a_a(a, A_A, &a, &a));N
N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A, "a A a a '%a' "N
		      "a a '%a'",N
		      a->a_a_a, a);N
N
	/* Aa a a */N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	a = a_a_a(&a);N
	A(a_a_a(a, &a, a_a,N
				A_A_A, A));N
	a_a_a(a, a, a(a));N
N
	a.a_a = a;N
	a.a_a = a(a);N
N
	a = a_a(a, a, &a, &a);N
	a (a != A_A) {N
		A(A_A_A);N
	}N
N
	A(a_a_a(a, &a, &a, &a, &a));N
N
	*a = a;N
	a = A;N
	a = A_A_A;N
N
 a:N
	(a) a_a(&a, a);N
N
	a (a != A) {N
		a_a_a(a_a_a, &a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a);N
}N
N
#a /* A_A */N
N
a aN
a_a(a a_a_a *a) {N
	a a_a_a *a = A;N
	a a_a_a *a;N
	a a = 0;N
N
	A(a != A);N
N
	a_a_a(a, "a", &a);N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
		a++;N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a,N
	       a a_a)N
{N
	a_a_a a;N
	a a *a = A;N
	a a_a_a *a[0];N
	a a_a_a *a;N
	a a_a_a *a;N
	a a;N
N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A)N
		a[a++] = a;N
	a[a++] = a_a_a;N
	a[a] = A;N
N
	a = A;N
	(a) a_a_a(a, "a-a", &a);N
N
	a (!a_a) {N
		a (a != A && !a_a_a(a) &&N
		    a->a != A &&N
		    a(a_a_a(a), a->a) != 0)N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "a 'a-a' "N
				      "a a a a a "N
				      "a a a");N
N
		a (A_A_A);N
	}N
N
	a (a != A) {N
		a (a_a_a(a)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A(0),N
				      "a a-a a ");N
			a (A_A_A);N
		} a a (a_a_a) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "'a-a' a a a "N
				      "a a a a a a -A");N
			a->a = a_a_a(a->a,N
							  a_a_a);N
		} a {N
			a = a_a_a(a);N
			a->a = a_a_a(a->a,N
							  a);N
		}N
N
		a (a->a == A)N
			a (A_A_A);N
	}N
N
	a (a_a_a && a_a_a != A) {N
		A(a->a == A);N
		a->a = a_a_a(a->a,N
						  a_a_a);N
	}N
N
	a (a->a == A)N
		a (A_A_A);N
N
	a (a_a_a(a->a))N
		a (A_A_A);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a %a; a a "N
		      "a a a a", a->a);N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a a *a, a_a_a *a,N
		   a a_a)N
{N
	a_a_a *a = A, *a = A;N
	a_a_a *a_a = A, *a_a = A;N
	a a_a_a *a;N
	a a_a_a *a_a;N
	a a_a_a *a[0];N
	a a_a_a *a;N
	a a_a_a *a;N
	a a_a_a *a0a, *a0a, *a0a, *a0a;N
	a a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a_a = A;N
	a_a_a a, a;N
	a a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a_a = A;N
	a_a_a a;N
	a_a_a a, a_a;N
	a_a_a a_a, a_a, a_a;N
	a a, a;N
	a a_a = 0;N
	a a = a;N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a0a = A;N
	a_a_a *a0a = A;N
	a_a_a a;N
	a_a_a a, a;N
	a0_a a_a;N
	a0_a a_a;N
	a0_a a;N
	a0_a a;N
	a0_a a_a_a;N
	a_a_a *a;N
	a_a_a a, a;N
	a_a_a *a;N
	a_a_a a, a;N
	a a a;N
	a0_a a = 0;N
	a0_a a;N
	a a a, a, a, a;N
	a_a_a *a =N
		a_a_a(a_a_a->a);N
N
	A_A_A(a);N
	A_A_A(a);N
	A_A_A(a_a);N
	A_A_A(a);N
	A_A_A(a);N
N
	/* Aa a A a a */N
	a (a_a_a != A) {N
		a_a_a(&a_a_a);N
	}N
	A(a_a_a(a_a_a, &a_a_a));N
N
	/*N
	 * Aa a a a a.N
	 */N
	a_a_a(a);N
N
	/*N
	 * Aa a a a a-a a.N
	 */N
	a (a_a) {N
		a = a_a_a(a_a_a,N
						    &a_a_a);N
		a (a != A_A_A) {N
			a_a_a("a a a "N
					      "a a: %a",N
					      a_a_a(a));N
		}N
		A_A(a_a_a(a_a_a, "a",N
					  &a_a_a) == A_A_A);N
	}N
N
	/*N
	 * Aa a a a a a a a a.N
	 */N
	a = A;N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A, "a a a '%a'",N
		      a);N
	A(a_a_a(a_a_a, a_a_a,N
				&a_a));N
	a_a_a(a_a, a_a, A);N
	a = a_a_a(a_a, a,N
				&a_a_a, &a);N
N
	A(a);N
N
	/*N
	 * Aa a a a a a.N
	 *N
	 * (Aa a a a a; a a aN
	 * a a a a a a a a aN
	 * a.)N
	 */N
	A(a0_a_a(a, a, a_a_a, a_a_a));N
N
	/*N
	 * Aa a a a a, a a a a.N
	 */N
	a = 0;N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A) {N
		a[a++] = a;N
	}N
	a[a++] = a_a_a;N
	a[a] = A;N
N
	/*N
	 * Aa a.a a, a a.  Aa "a-a a"N
	 * a a a, a a a a a a a a a aN
	 * a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	A(a(a, &a->a,N
	       a_a_a(a)), "a");N
	A(a->a != A);N
N
	a (a(a->a, A_A) == 0) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a-a a a "N
			      "a a '%a'", a->a);N
N
		A(a_a_a(a_a_a, a_a_a,N
					&a_a));N
N
		a = a_a_a(a_a, a->a,N
					&a_a_a, &a);N
		A(a);N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a '%a'; a a-a a "N
			      "a", a->a);N
	}N
N
	/* Aa a a a a a. */N
	a (!a) {N
		a = a_a_a(a->a);N
		A_A(a == A_A_A);N
		a = a;N
	}N
N
	/*N
	 * Aa a a, a (a) a a a a a a.N
	 */N
	a_a(a);N
N
	/*N
	 * Aa a a a.N
	 */N
	A(a_a(a, a, a_a));N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a a.	Aa a a a a a a,N
	 * a a a a a a a a a aN
	 * a.N
	 */N
	a = a_a_a(a_a_a, &a);N
	a (a != A_A_A) {N
		a = 0;N
	}N
	a = a_a_a(a_a_a, &a);N
	a (a == A_A_A && (a_a_a)a > a) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a (%" Aa0 ")"N
			      " a a a a a (%a)",N
			      a, a);N
	}N
N
	/*N
	 * Aa a a a a a a A, a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a != 0) {N
		a (a < 0A) {			/* Aa a. */N
			a = 0;N
		} a a (a > a - 0A) { /* Aa A a. */N
			a = a - 0;N
		}N
	}N
	/* Aa A/a a. */N
	a (a < 0A) {N
		a = 0;N
	}N
	a (a + 0A > a && a != 0) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a 0 A a a a "N
			      "a 'a-a' a 'a'");N
	}N
	a_a_a(a_a_a, a);N
N
#a a(A_A0)N
	/*N
	 * Aa AaA a a a a a.N
	 * Aa a a a a a Aa, a a aN
	 * a a a a a a a a a AaAN
	 * Aa a a'a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a (a_a_a(a)) {N
		a *a;N
		A_A(a_a_a(a), a);N
		a_a_a(a);N
	}N
	a_a_a->a = a_a_a;N
#a /* A_A0 */N
N
	/*N
	 * Aa a a a.N
	 */N
	a_a_a(a, "a-a",N
			       &a->a->a);N
	a_a_a(a, "a-a", &a->a->a);N
	a_a_a(a, "a-a",N
			       &a->a->a);N
N
	a = a_a_a(&a->a->a);N
	a (a > 0) {N
		a a = A_A(0, a_a_a + 0);N
		a (a + 0 > a) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "'a-a %a' a a a "N
				      "a a %a a a",N
				      a, a_a_a);N
			A(A_A_A);N
		}N
		a = a - a;N
	} a {N
		a = (a * 0) / 0;N
	}N
N
	a_a_a(&a->a->a, a);N
N
	/*N
	 * Aa "a". Aa a a a a; a aN
	 * a a.N
	 */N
	A(a_a_a(A, a, A, "a", A,N
				 a_a_a, a_a_a,N
				 &a->a->a));N
	a (a->a->a != A) {N
		a_a_a(a_a_a,N
					     a->a->a);N
	}N
N
	/*N
	 * Aa "a-a-a". Aa a a a aN
	 * a a a.N
	 */N
	A(a_a_a(A, a, a_a_a,N
				 "a-a-a", A,N
				 a_a_a, a_a_a,N
				 &a->a->a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a_a = a_a_a(a);N
N
	A(a_a_a(a_a_a, a,N
					     a_a_a),N
	       "a a a(a)");N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a > 0) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a 0");N
		a = 0;N
	} a a (a < 0) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a 0");N
		a = 0;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a > 0) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a 0");N
		a = 0;N
	} a a (a < 0) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a 0");N
		a = 0;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a > A_A_A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a %a", A_A_A);N
		a = A_A_A;N
	} a a (a < 0) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a 0");N
		a = 0;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a > A_A_A) {N
		a_a_a(a, a_a_a, A_A_A,N
			    "a-a-a a a a a a: "N
			    "a a %a", A_A_A);N
		a = A_A_A;N
	}N
N
	a_a_a(a_a_a->a,N
			      a, a, a, a);N
N
	/*N
	 * Aa a a A a a a.N
	 */N
	A(a_a_a(a_a_a, &a0a),N
	       "a A a a");N
	A(a_a_a(a_a_a, &a0a),N
	       "a A a a");N
N
	a0a = A;N
	a0a = A;N
	a0a = A;N
	a0a = A;N
N
	(a)a_a_a(a, "a-a0-a-a", &a0a);N
	a (a0a != A) {N
		a_a(a0a, a0a, a);N
	} a {N
		A(a_a_a(A_A, &a_a,N
					       &a_a),N
		       "a a a A/Aa0 a a");N
		a (a_a == a_a) {N
			a_a_a(a0a, a_a);N
		} a {N
			a_a_a(a0a, a_a,N
					     a_a);N
		}N
		a (!a_a_a(a->a, A_A_A0)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a A/Aa0 a a: "N
				      "[%a, %a]", a_a, a_a);N
		}N
	}N
	(a)a_a_a(a, "a-a0-a-a", &a0a);N
	a (a0a != A) {N
		a_a(a0a, a0a, a);N
	}N
N
	(a)a_a_a(a, "a-a0-a-a", &a0a);N
	a (a0a != A) {N
		a_a(a0a, a0a, a);N
	} a {N
		A(a_a_a(A_A0, &a_a,N
					       &a_a),N
		       "a a a A/Aa0 a a");N
		a (a_a == a_a) {N
			a_a_a(a0a, a_a);N
		} a {N
			a_a_a(a0a, a_a,N
					     a_a);N
		}N
		a (!a_a_a(a->a, A_A_A0)) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a A/Aa0 a a: "N
				      "[%a, %a]", a_a, a_a);N
		}N
	}N
	(a)a_a_a(a, "a-a0-a-a", &a0a);N
	a (a0a != A) {N
		a_a(a0a, a0a, a);N
	}N
N
	a_a_a(a_a_a, a0a,N
				      a0a);N
N
	/*N
	 * Aa a A A a a a a'a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a (a < 0) {N
		a = 0;N
	}N
	a (a > 0) {N
		a = 0;N
	}N
	a->a->a = (a0_a)a;N
N
	/* Aa a a a a a A */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a = a_a_a0(a);N
	a (a_a_a < 0) {N
		a_a_a = 0;N
	} a a (a_a_a > 0) {N
		a_a_a = 0;N
	}N
	a->a->a_a_a_a =N
		(a0_a) a_a_a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a,N
					 a_a_a0(a));N
N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a_a_a(a->a, a_a_a0(a));N
N
	/*N
	 * Aa a a a a a a a a a.N
	 */N
	a (a_a_a != 0) {N
		a_a = a_a_a;N
	} a {N
		A(a_a_a(a, &a_a), "a");N
	}N
N
	/*N
	 * Aa a a A a a.N
	 */N
	A(a_a_a(a, &a_a_a), "a");N
N
	/*N
	 * Aa a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a = a_a_a0(a);N
	a ((a > 0) && (a < 0)) {N
		a = 0;N
	}N
	a_a_a(a->a, a);N
N
	/*N
	 * Aa a a a a a a "a-a"N
	 * a.N
	 */N
	{N
		a a_a_a *a = A;N
		a_a_a *a = A;N
N
		a = A;N
		/*N
		 * Aa a a-a a a a a aN
		 * a, a a a a.N
		 */N
		a (a != A) {N
			(a)a_a_a(a, "a-a", &a);N
		}N
		a (a != A) {N
			/* a a a? */N
			(a)a_a_a(a, a,N
						       a_a_a,N
						       a_a_a, A_A,N
						       &a);N
		} a {N
			/*N
			 * Aa a, a a.N
			 */N
			A(a_a_a(a_a_a, a_a,N
						    -0, a, &a));N
		}N
		a (a != A) {N
			a_a_a0(a->a,N
						     a);N
			a_a_a(&a);N
		}N
	}N
	/*N
	 * Aa a Aa0.N
	 */N
	{N
		a a_a_a *a = A;N
		a_a_a *a = A;N
N
		a (a != A) {N
			(a)a_a_a(a, "a-a-a0", &a);N
		}N
		a (a != A) {N
			/* a a a? */N
			(a)a_a_a(a, a,N
						       a_a_a,N
						       a_a_a, A_A0,N
						       &a);N
		} a {N
			/*N
			 * Aa a, a a.N
			 */N
			A(a_a_a(a_a_a, a_a,N
						    -0, a, &a));N
		}N
		a (a != A) {N
			a_a_a0(a->a,N
						     a);N
			a_a_a(&a);N
		}N
	}N
N
	/*N
	 * Aa a a a a a a a a aN
	 * a-a a.  Aa'a a a a a a a a aN
	 * a a a a a, a a a a a aN
	 * a a a a a.N
	 */N
	a = a_a_a(a->a, a);N
N
	/*N
	 * Aa a a a a a A a a a a aN
	 * a. Aa, a a a a a aN
	 * a a a a.N
	 */N
	a (a_a && (a == A_A_A)) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a a a a");N
		a = A_A_A;N
		a a;N
	}N
N
	/*N
	 * Aa a a a a a a aN
	 * a a a a "a-a" a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a = a_a_a(a);N
	a (a_a == 0) {N
		A(a_a_a(a->a_a,N
				      a_a_a,N
				      A, A, a));N
	} a a (a->a_a != a_a) {N
		a_a_a(&a, a_a, 0);N
		A(a_a_a(a->a_a,N
				      a_a_a,N
				      A, &a, a));N
	}N
	a->a_a = a_a;N
N
	/*N
	 * Aa a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a-a", &a);N
	A(a == A_A_A);N
	a->a->a_a = a_a_a(a);N
N
	/*N
	 * Aa a a a a.N
	 */N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a_a = a_a_a0(a) * 0;N
	a (a_a == 0) {N
		A(a_a_a(a->a_a,N
				      a_a_a,N
				      A, A, a));N
	} a a (a->a_a != a_a) {N
		a_a_a(&a, a_a, 0);N
		A(a_a_a(a->a_a,N
				      a_a_a,N
				      A, &a, a));N
	}N
	a->a_a = a_a;N
N
	a_a_a(&a, 0, 0);N
	A(a_a_a(a->a_a, a_a_a, A,N
			      &a, a));N
N
	a_a_a(&a, a_a_a_a, 0);N
	A(a_a_a(a->a_a, a_a_a, A,N
			      &a, a));N
N
	/*N
	 * Aa a A a.N
	 */N
	a = A;N
	a (a_a_a(a, "a-a", &a) == A_A_A) {N
		a (a_a_a(a)) {N
			a_a_a(A, a_a);N
		} a {N
			a_a_a(a_a_a(a),N
					      a_a);N
		}N
	} a {N
		a_a_a(a_a_a, a_a);N
	}N
N
	/*N
	 * Aa a a-a a a.  Aa a a a aN
	 * a a a a a a a a aN
	 * a-a.N
	 *N
	 * Aa a a a a a'a a a a a; a aN
	 * a a a a a a a a a a a'a a,N
	 * a'a a a a a a a a.N
	 */N
	(a)a_a_a(a, a, a_a_a);N
N
	/*N
	 * Aa a A a a a a (A).N
	 */N
	a = A;N
	(a)a_a_a(a, "a-a", &a);N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a *a = a_a_a(a);N
		a = A;N
		A(a_a_a(a, a_a_a, &a,N
					  &a));N
		A(a != A);N
		a_a_a(a);N
		a_a_a(&a);N
	}N
	/*N
	 * Aa a a a.N
	 */N
	a = A;N
	A(a_a_a(A, a_a_a, &a, &a));N
	A(a != A);N
	a_a_a(a);N
	a_a_a(&a);N
N
	a = a->a;N
	a->a = a;N
	a = a;N
N
	/*N
	 * Aa a a.N
	 */N
	a = A;N
	(a)a_a_a(a, "a", &a);N
N
	/*N
	 * Aa a a a a a a a a aN
	 * a a a a a a a'a a a.N
	 * (Aa a a a a a a; a a-aN
	 * "a" a a a a a a a a a aN
	 * a a a.)N
	 *N
	 * Aa a'a a a a, a a a a a a a aN
	 * a a a a a a a a.  Aa a a a aN
	 * a a a, a a a aN
	 * a a a a a a'a a a a a a.N
	 */N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a *a = a_a_a(a);N
		a a_a_a *a = a_a_a(a, "a");N
		a a_a_a;N
N
		a = A;N
N
		A(a_a(a, &a, &a));N
		A(a != A);N
N
		a_a += a_a(a);N
N
		A(a_a(a, a, a, a_a,N
				     a_a_a, &a_a_a));N
		a_a += a_a_a;N
N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa a a a a a a a a a aN
	 * a a.N
	 */N
	a (a == A) {N
		a a_a_a;N
N
		A(a_a(A, &a, &a));N
		A(a != A);N
N
		a_a = a_a(a);N
N
		A(a_a(a, a, A, a_a,N
				     a_a_a, &a_a_a));N
		a_a += a_a_a;N
N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa a a a; a a a a a a a.N
	 */N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a a %a a", a_a);N
	A(a_a_a(a_a_a->a, a_a));N
N
	/*N
	 * Aa a a a a a.  AaN
	 * a a a a a a a a aN
	 * a, a a a a a a a a a.N
	 */N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a *a = a_a_a(a);N
N
		a = A;N
		A(a_a(a, &a, &a));N
		A(a_a(a, &a, a, a,N
				     &a, &a->a, a,N
				     a_a_a, a_a_a, a));N
		a_a_a(a);N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a a a a.N
	 */N
	a (a == A) {N
		a = A;N
		A(a_a(A, &a, &a));N
		A(a_a(a, &a, a, A,N
				     &a, &a->a, a,N
				     a_a_a, a_a_a, a));N
		a_a_a(a);N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa (a a) a a-a a.N
	 */N
	a_a = A;N
	A_A(a_a_a(a_a_a, "a",N
				  &a_a) == A_A_A);N
	a (a = a_a_a(a_a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a *a = a_a_a(a);N
N
		A(a_a(a, &a_a, &a));N
		A(a_a(a, &a, a, a,N
				     &a, &a->a, a,N
				     a_a_a, a_a_a, a));N
		a_a_a(a);N
		a_a_a(&a);N
		a = A;N
	}N
N
	/* Aa a a a a a a */N
	A_A_A(a, a_a, a);N
N
	/*N
	 * Aa a a_a_a() a a a a a a aN
	 * a.N
	 */N
	a (a = A_A_A(a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a_a_a(a);N
	}N
N
	/* Aa a a a a a a a a. */N
	a = a->a;N
	a->a = a;N
	a = a;N
N
	/* Aa a a a a a a a a a */N
	a = A_A_A(a->a);N
	a (a != A) {N
		a->a = &a->a;N
		a = A_A_A(a, a);N
	}N
N
	/* Aa a a a a a a a a. */N
	a = a->a;N
	a->a = a;N
	a = a;N
N
	/* Aa a A a a a a. */N
	a (a != A) {N
		a_a_a *a = A;N
		A(a_a_a(a, a_a_a, &a),N
		       "a A");N
		a (a->a->a != A) {N
			a_a_a(&a->a->a);N
		}N
		a->a->a = a;N
	}N
N
	/*N
	 * Aa a a a(a).N
	 */N
	A(a_a_a(a_a_a->a, a,N
					a_a_a),N
	       "a a a(a)");N
N
#a A_AN
	/*N
	 * Aa a'a a A, a a a a a aN
	 * a a, a a a a a a a aN
	 * a a a a a. Aa a a a, a aN
	 * a a a a.N
	 */N
	a (a_a) {N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a_a_a(a);N
		}N
	}N
#a /* A_A */N
N
	/*N
	 * Aa a a.N
	 */N
	a (a_a) {N
		a_a_a();N
	}N
N
	/*N
	 * Aa a a a a a a.N
	 */N
	a (!a_a_a(".")) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a a a");N
		a = A_A_A;N
		a a;N
	}N
N
#a A_AN
	/*N
	 * Aa A a.N
	 */N
	a (a_a) {N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a_a_a(a);N
		}N
	}N
#a /* A_A */N
N
	/*N
	 * Aa a a a.N
	 *N
	 * Aa a a a A a a a a a aN
	 * a a a a.a a a a aN
	 * a a, a a.N
	 */N
	a (a_a_a) {N
		a a_a_a *a = A;N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a a "N
			      "a a a a a "N
			      "-a a");N
N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			a = a_a(A, a);N
			a (a != A_A_A) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a a a "N
					      "a: %a",N
					      a_a_a(a));N
				a a;N
			}N
		}N
	} a {N
		a a_a_a *a = A;N
N
		A(a_a_a(a_a_a, &a),N
		       "a a a a");N
N
		a = A;N
		(a)a_a_a(a, "a", &a);N
		a (a != A) {N
			A(a_a(a, a),N
			       "a a");N
		} a {N
			A(a_a_a(a),N
			       "a a a a a");N
			A(a_a_a(a),N
			       "a a a 'a a'");N
			A(a_a_a(a),N
			       "a a a 'a a'");N
		}N
N
		A(a_a_a(a_a_a, a),N
		       "a a a");N
		a = A;N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A(0),N
			      "a a a a a "N
			      "a a");N
	}N
N
	/*N
	 * Aa a a a a a a a a aN
	 * a a "a" a a a a.  Aa aN
	 * a a a, a a a a a a a A 0N
	 * a.N
	 */N
	a (a_a) {N
		a a_a_a *a = A;N
		a a_a_a *a = A;N
N
		a = A;N
		a (a_a_a(a, "a", &a) == A_A_A) {N
			a_a_a(a->a,N
					    A_A_A,N
					    a_a_a(a));N
		} a {N
N
			(a)a_a_a(a, "a", &a);N
			a (a != A)N
				(a)a_a_a(a, "a",N
						  &a);N
			a (a != A) {N
				a (a = a_a_a(a);N
				     a != A;N
				     a = a_a_a(a))N
				{N
					a a_a_a *a;N
					a a *a;N
N
					a = a_a_a(a);N
					a = a_a_a(a, "a");N
					a = a_a_a(a);N
					a (a(a, "a") == 0)N
						a_a_a(N
						    a->a,N
						    A_A_A,N
						    a);N
				}N
			}N
		}N
	}N
N
	a = A;N
	a (a != A &&N
	    a_a_a(a, "a", &a) == A_A_A)N
	{N
		a_a_a = a_a_a(a);N
	} a {N
		a_a_a =N
			((a_a_a & A_A_A) != 0);N
	}N
N
	a = A;N
	a (a_a_a(a, "a-a", &a) == A_A_A)N
	{N
		a_a_a(a_a_a(a));N
	} a a (a_a_a) {N
		a_a_a("a.a");N
	} a {N
		a_a_a(A);N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	A(a(a, &a->a, a_a_a(a)),N
	       "a");N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	A(a(a, &a->a, a_a_a(a)),N
	       "a");N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	A(a(a, &a->a, a_a_a(a)),N
	       "a");N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	A(a(a, &a->a, a_a_a(a)),N
	       "a");N
N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A) {N
		A(a(a, &a->a, a), "a");N
		a->a_a = a;N
	} a {N
		a->a_a = a;N
	}N
N
	a = A;N
	a = a_a_a(a, "a", &a);N
	a (a == A_A_A) {N
		A(a(a, &a->a, a), "a");N
		a->a_a = a;N
	} a {N
		a->a_a = a;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a->a->a = A;N
	a (a == A_A_A && a_a_a(a)) {N
		/* Aa a a "a" a a */N
		a->a->a = a_a_a;N
		a = a_a_a(a->a, A);N
	} a a (a == A_A_A && !a_a_a(a)) {N
		/* Aa a a a */N
		a = a_a_a(a->a,N
					       a_a_a(a));N
	} a {N
		a = a_a_a(a->a, A);N
	}N
	A_A(a == A_A_A);N
N
	a = A;N
	a = a_a_a(a, "a-a-a-a", &a);N
	a (a == A_A_A) {N
		a->a = a_a_a(a);N
	} a {N
		a->a = a;N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a->a->a = a_a_a(a);N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	A(a == A_A_A);N
	a (a(a_a_a(a), "a0") == 0) {N
		a->a->a = a_a_a0;N
	} a a (a(a_a_a(a), "a") == 0) {N
		a->a->a = a_a_a;N
	} a {N
		A(0);N
		A_A();N
	}N
N
	a = A;N
	a = a_a_a(a, "a-a", &a);N
	a (a == A_A_A) {N
		a a *a;N
		a a = a;N
		a_a_a a;N
		a a a;N
		a a a;N
N
		a (a = a_a_a(a);N
		     a != A;N
		     a = a_a_a(a))N
		{N
			a = a_a_a(a);N
			a = a_a_a(a);N
N
			a (a) {N
				a(a->a->a, 0,N
				       a(a->a->a));N
				a_a_a(&a, a->a->a,N
						a(a->a->a));N
				a = a_a_a(a, &a);N
				a (a != A_A_A &&N
				    a != A_A_A)N
				{N
					a a;N
				}N
				a = a;N
			} a {N
				a = a_a_a(a->a->a,N
							a(*a));N
				a_a_a(&a, a->a,N
						a(a->a));N
				a = a_a_a(a, &a);N
				a (a != A_A_A &&N
				    a != A_A_A)N
				{N
					a_a_a(a->a->a,N
						    a,N
						    a(*a));N
					a a;N
				}N
				A_A_A(a,N
						       a, a);N
			}N
N
			a = a_a_a(&a);N
			a (a->a->a) {N
			a a_a_a0:N
				a = A_A0_A_A;N
				a (a != a) {N
					A(A_A_A,N
					       "AaAa-0-0 a-a a a 0 a");N
				}N
				a;N
			a a_a_a:N
				a = A_A0_A;N
				a (a != a) {N
					A(A_A_A,N
					       "A a-a a a 0 a");N
				}N
				a;N
			}N
		}N
	} a {N
		a_a_a(a->a->a,N
			      a(a->a->a));N
	}N
N
	/*N
	 * Aa a a.N
	 */N
	a = a->a->a;N
	a->a->a = a;N
	a = a;N
N
	(a) a_a_a(a);N
N
#a A_AN
	/*N
	 * Aa a a a a A Aa Aa AaN
	 * a, a, a a a a a A.N
	 */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a = a_a_a(a->a);N
		a (a != A_A_A) {N
			a = A;N
			a a;N
		}N
	}N
#aN
N
	a = A_A_A;N
N
 a:N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a0a != A) {N
		a_a_a(a_a_a, &a0a);N
	}N
N
	a (a0a != A) {N
		a_a_a(a_a_a, &a0a);N
	}N
N
	a (a_a != A) {N
		a (a != A) {N
			a_a_a(a_a, &a);N
		}N
		a_a_a(&a_a);N
	}N
N
	a (a_a != A) {N
		a (a != A) {N
			a_a_a(a_a, &a);N
		}N
		a_a_a(&a_a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	A_A_A(a, a_a, a);N
N
	/*N
	 * Aa a a a a a a a aN
	 * a a a a a a a aN
	 * a a a a a.N
	 */N
	a (a = A_A_A(a);N
	     a != A;N
	     a = a_a) {N
		a_a = A_A_A(a, a);N
		A_A_A(a, a, a);N
		a (a == A_A_A &&N
		    a(a->a, "_a") != 0)N
		{N
			a_a_a(a);N
			(a)a_a_a(a->a, a,N
					   A, a, a);N
		}N
		a_a_a(&a);N
	}N
N
	/*N
	 * Aa a a a a.N
	 */N
	a (a = A_A_A(a); a != A; a = a_a) {N
		a_a = A_A_A(a, a);N
		A_A_A(a, a, a);N
		a_a_a(&a);N
	}N
N
	/* Aa a a a a. */N
	a ((a = A_A_A(a)) != A) {N
		A_A_A(a, a, a);N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a(*a));N
	}N
N
	/* Aa a a a. */N
	a ((a = A_A_A(a)) != A) {N
		A_A_A(a, a, a);N
		a_a_a(a->a->a, a, a(*a));N
	}N
N
	/*N
	 * Aa a a a a a a a aN
	 * a a a a a a.N
	 */N
	a (a_a_a0() == A_A_A) {N
		a_a(a, a_a_a);N
	}N
N
	/*N
	 * Aa a a a a a aN
	 */N
	a = a_a_a(&a_a_a);N
	a (a != A_A_A) {N
		a_a_a("a_a_a() a: %a",N
				      a_a_a(a));N
	}N
N
	/* Aa a a a a a. */N
	a (a) {N
		a_a_a(a->a);N
	}N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A(0),N
		      "a_a: %a",N
		      a_a_a(a));N
N
	a (a);N
}N
N
a a_a_aN
a_a(a *a) {N
	a_a_a a;N
	a_a_a *a = (a_a_a *) a;N
	a_a_a *a = a->a;N
	a a = a->a;N
N
N
	/*N
	 * Aa a a.  Aa a a aN
	 * a a a a a a a a a A aN
	 * a a a a a a a.N
	 *N
	 * Aa a a a a a a a aN
	 * a a a a a a.N
	 */N
	a (a_a_a(&a->a) == 0) {N
N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a (*a));N
N
		/*N
		 * Aa a a a a a a a aN
		 * a a a a a a "a a", a a aN
		 * a a aN
		 */N
		a (a) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a a a a");N
		} a {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a");N
		}N
N
		A(a_a_a(a->a),N
			   "a a a");N
N
		a_a_a();N
N
#a A_A_AN
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "A a a %a",N
			      A_a() ? "a" : "a");N
#aN
		a->a_a = A_A_A;N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a");N
	}N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a, a a) {N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
N
	a = a_a_a(a->a, a(*a));N
	a->a = a;N
	a->a = a;N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
N
	a_a_a(&a->a, 0);N
N
	/*N
	 * Aa a a a a a a.N
	 */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a->a_a != A) {N
			a = a_a_a(a->a_a, a);N
			a (a != A_A_A &&N
			    a != A_A_A &&N
			    a != A_A_A)N
				a a;N
		}N
		a (a->a != A) {N
			a = a_a_a(a->a, a);N
			a (a != A_A_A &&N
			    a != A_A_A &&N
			    a != A_A_A)N
				a a;N
		}N
N
		/*N
		 * 'a_a_a' a a_a a a a aN
		 * a.N
		 */N
		a_a_a(&a->a);N
		a = a_a_a(a, a, a_a, a);N
		a (a != A_A_A) {N
			(a)a_a_a(&a->a);N
			a a;N
		}N
	}N
N
 a:N
	a (a_a_a(&a->a) == 0) {N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a (*a));N
	} a a (a) {N
		/*N
		 * Aa a a a a a a.  AaN
		 * a a a a a a-a a, aN
		 * a a a a a a a a a a aN
		 * a a a a. (Aa a a a a aN
		 * a a a a; a a'a a aN
		 * a a.)N
		 */N
		a_a_a(a_a_a);N
	}N
N
	a_a_a(a->a);N
	a (a);N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a_a_a *a = (a_a_a *)a->a_a;N
	a_a_a_a *a;N
N
	A(a == a->a);N
N
	a_a_a(&a);N
N
	A(a_a_a(a_a_a, &a_a_a),N
		   "a a a");N
N
	a_a_a(a_a_a, a->a);N
N
#a a(A_A0)N
	a = a_a_a;N
#aN
	a = A;N
#aN
N
	A(a_a_a(a_a_a, a->a,N
					  a_a_a, a_a_a,N
					  a_a_a,N
					  a_a_a,N
					  a_a_a,N
					  a->a, a_a_a, a,N
					  &a->a),N
		   "a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				    A, A, a->a,N
				    a_a_a,N
				    a, &a->a_a),N
		   "a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				    A, A, a->a,N
				    a_a_a,N
				    a, &a->a_a),N
		   "a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				    A, A, a->a, a_a_a,N
				    a, &a->a_a),N
		   "a a a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				    A, A, a->a, a_a_a,N
				    a, &a->a_a),N
		   "a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				     &a_a_a),N
		   "a a a a");N
N
	A(a_a_a(a_a_a, a_a_a,N
				     &a_a_a),N
		   "a a a a");N
N
	A(a_a(a_a_a, a, a),N
		   "a a");N
N
	A(a_a(a, a, a), "a a");N
#a A_AN
	a_a_a_a = a;N
#aN
}N
N
aN
a_a_a(a_a_a *a, a a) {N
	A(A_A_A(a));N
N
	a->a = a;N
}N
N
a aN
a_a(a_a_a *a, a_a_a *a) {N
	a_a_a a;N
	a_a_a *a, *a_a = A;N
	a_a_a *a, *a_a = A;N
	a_a_a *a = (a_a_a *)a->a_a;N
	a a = a->a;N
	a_a_a *a;N
N
	A(a);N
	A(a == a->a);N
N
	/*N
	 * Aa a a a a a a aN
	 * a (a a a a a).N
	 */N
	a_a_a(a->a);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a%a",N
		      a ? ": a a" : "");N
N
	a_a_a(a);N
	a_a_a(a->a);N
	a_a_a(a, a);N
	a_a_a(a, a->a);N
N
	a (a_a_a != A)N
		a_a_a(&a_a_a);N
N
	a_a_a(a_a_a, &a_a_a);N
	a_a_a(&a_a_a);N
	a_a_a(&a_a_a);N
N
	(a) a_a_a(a);N
N
	a (a = A_A_A(a->a); a != A;N
	     a = a_a)N
	{N
		a_a = A_A_A(a, a);N
		A_A_A(a->a, a, a);N
		a_a_a(&a);N
	}N
N
	a (a = A_A_A(a->a); a != A;N
	     a = a_a)N
	{N
		a_a = A_A_A(a, a);N
		A_A_A(a->a, a, a);N
		a (a)N
			a_a_a(&a);N
		aN
			a_a_a(&a);N
	}N
N
	/*N
	 * Aa a a a a.N
	 */N
	a_a_a(a);N
N
	a ((a = A_A_A(a->a)) != A) {N
		A_A_A(a->a, a, a);N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a(*a));N
	}N
N
	a_a_a(&a->a_a);N
	a_a_a(&a->a_a);N
	a_a_a(&a->a_a);N
	a_a_a(&a->a_a);N
N
	a_a_a(&a->a);N
N
	a_a_a(&a_a_a);N
N
	a_a_a(a->a);N
N
	a (a_a_a != A) {N
		a_a_a(&a_a_a);N
		a_a_a(&a_a_a, a->a);N
	}N
#a A_AN
	a_a_a();N
#aN
#a a(A_A0)N
	a_a_a();N
#a /* A_A0 */N
N
	a_a_a(&a->a_a);N
N
	a_a_a(a->a);N
N
	a_a_a(&a->a);N
N
	a_a_a(&a);N
}N
N
/*%N
 * Aa a a a a a a a a a a a a.N
 */N
a a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		  a_a_a *a, a_a_a *a,N
		  a_a_a *a, a_a_a **a)N
{N
	a_a_a *a;N
N
	A(a != A);N
	A(a != A);N
	A(a != A && *a == A);N
N
	a (a = A_A_A(a_a_a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a->a == a->a ||N
		    a->a == a_a_a)N
		{N
			a a_a_a *a = A;N
N
			*a = a_a_a(a, a);N
			a (*a == A_A_A) {N
				a_a_a *a;N
N
				a = a->a;N
				a = a_a_a(a);N
			}N
N
			a (a_a_a(a, a,N
					    a->a, a) &&N
			    a_a_a(a, a,N
					    a->a, a) &&N
			    !(a->a &&N
			      (a->a & A_A_A) == 0))N
			{N
				a_a_a(a, a);N
				a (A_A_A);N
			}N
		}N
	}N
N
	a (A_A_A);N
}N
N
aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a_a_a *a = a_a_a(a, a(*a));N
N
	a (a == A)N
		a("a a a", A_A_A);N
N
	a->a = a;N
	a->a = A;N
	a->a = A;N
N
#a A_AN
	A(a_a_a_a(),N
		   "a A a a");N
#aN
N
	/* Aa a a a. */N
	a->a = A;N
	A_A_A(a->a);N
	A_A_A(a->a);N
	a->a_a = A;N
N
	/* Aa a a. */N
	A(a_a_a(a_a_a, a_a_a),N
		   "a A");N
N
	A(a_a_a(a, a_a_a, A,N
				     &a->a_a),N
		   "a a a a");N
N
	a_a_a(&a->a_a_a);N
N
	a->a_a =N
		a_a_a(a_a_a, a,N
				   A_A_A,N
				   a_a_a,N
				   a,N
				   a(a_a_a));N
	A(a->a_a == A ?N
		   A_A_A : A_A_A,N
		   "a a a");N
	a->a_a = A_A_A_A;N
N
	/*N
	 * Aa a a a, a a a a aN
	 * a a a a a a, a a a a aN
	 * a.N
	 */N
	A(a_a_a(a_a_a, 0, &a->a),N
		   "a a a");N
	a_a_a(a->a, "a", a);N
	a_a_a(a_a_a, a->a);N
N
	a->a = A;N
	A(a_a_a(a, a_a_a,N
				    &a->a),N
		   "a a a");N
N
#a a(A_A0)N
	/*N
	 * AaA a a a a a aN
	 * a (a a a A a)N
	 * a aN
	 */N
	a_a_a();N
#a /* A_A0 */N
N
#a A_AN
	a->a->a = a_a_a_a;N
	a->a->a = a_a_a;N
#aN
N
	A(a_a_a(a->a, a_a, a),N
		   "a_a_a");N
	A(a_a_a(a_a_a, a->a,N
				 a_a, a),N
		   "a_a_a");N
N
	a->a_a = A;N
	a->a_a = A;N
	a->a_a = A;N
	a->a_a = A;N
N
	a->a_a = 0;N
	a->a_a = 0;N
N
	A(a_a_a(a_a_a, a_a_a,N
				      a_a_a, a_a_a,N
				      &a->a),N
		   "a_a_a");N
	A(a_a_a(a->a, 0),N
		   "a_a_a");N
N
	a->a = a_a_a(a->a, "a.a");N
	A(a->a == A ? A_A_A : A_A_A,N
		   "a_a_a");N
N
	a->a = a_a_a(a->a,N
					      a_a_a);N
	A(a->a == A ? A_A_A :N
						  A_A_A,N
		   "a_a_a");N
N
	a->a = a_a_a(a->a, "a_a.a");N
	A(a->a == A ? A_A_A : A_A_A,N
		   "a_a_a");N
N
	a->a = a_a_a(a->a, "a.a");N
	A(a->a == A ? A_A_A :N
						  A_A_A,N
		   "a_a_a");N
N
	a->a = a_a_a(a->a, "a.a");N
	A(a->a == A ? A_A_A : A_A_A,N
		   "a_a_a");N
N
	a->a_a = a;N
	a->a = A;N
	a->a_a = a;N
	a->a = A;N
N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	A(a_a_a(a->a, &a->a,N
				    a_a_a),N
		   "a_a_a");N
	a_a_a(a_a_a, a->a);N
N
	A(a_a_a(a_a_a, &a->a,N
				    a_a_a),N
		   "a_a_a (a)");N
N
	A(a_a_a(a_a_a, &a->a,N
				    a_a_a),N
		   "a_a_a (a)");N
N
	a->a = a;N
N
	a->a = A;N
	A(a_a_a(a, &a->a),N
		   "a_a_a");N
	a->a = 0;N
	A_A_A(a->a);N
N
	A_A_A(a->a);N
N
	A_A_A(a->a);N
N
	a->a = A;N
	a->a_a = A;N
	a->a_a = A;N
	a->a_a = A_A_A;N
	a->a_a = 0;N
N
	a->a = A;N
N
	a->a = A;N
N
	a->a = A_A_A;N
	*a = a;N
}N
N
aN
a_a_a(a_a_a **a) {N
	a_a_a *a = *a;N
	A(A_A_A(a));N
N
#a A_AN
	a (a->a != A)N
		a_a_a(&a->a);N
#a /* A_A */N
N
#a A_AN
	a_a_a_a();N
#aN
N
	a_a_a(&a->a);N
N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
	a_a_a(&a->a);N
N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a);N
	a_a_a(a->a, a->a);N
N
	a (a->a != A)N
		a_a_a(a->a, a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a);N
	a (a->a != A)N
		a_a_a(a->a, a->a);N
N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a_a_a();N
N
	a_a_a(&a->a_a);N
N
	A(A_A_A(a->a));N
	A(A_A_A(a->a));N
	A(A_A_A(a->a));N
N
	a->a = 0;N
	a_a_a(a->a, a, a(*a));N
	*a = A;N
}N
N
a aN
a(a a *a, a_a_a a) {N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "%a: %a", a, a_a_a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a (a a a a)");N
	a_a_a();N
	a(0);N
}N
N
a aN
a_a_a(a_a_a *a) {N
N
	A(A_A_A(a));N
N
	a->a++;N
}N
N
a aN
a_a_a(a_a_a *a, a a) {N
	a_a_a *a, *a;N
N
	A(A_A_A(a));N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = a) {N
		a = A_A_A(a, a);N
		a (!a && a->a == a-> a)N
			a;N
		A_A_A(a->a, a, a);N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a(*a));N
	}N
}N
N
aN
a_a_a_a(a_a_a *a,N
			    a a_a_a *a)N
{N
	a_a_a *a;N
	a_a_a a;N
	a a[A_A_A];N
	a_a_a a;N
	a a a, a;N
N
	A(A_A_A(a));N
N
	a = a_a_a(a);N
	a (a == 0 || a >= 0)N
		a;N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a (a_a_a(&a->a, a))N
			a;N
	}N
	a (a != A) {N
		a->a = a->a;N
		a;N
	}N
N
	a = a_a_a(a->a, a(*a));N
N
	a->a = *a;N
	a->a = a->a;N
	a->a = A;N
N
	a = 0;N
	a |= A_A_A;N
	a (a_a_a(a)) {N
	a A_A:N
		a |= A_A_A0;N
		a;N
	a A_A0:N
		a |= A_A_A0;N
		a;N
	a:N
		a = A_A_A;N
		a a;N
	}N
	a = 0;N
	a |= A_A_A;N
	a |= A_A_A;N
	a |= A_A_A0;N
	a |= A_A_A0;N
N
	a = a_a_a(a_a_a, a_a_a,N
				     a_a_a, &a->a, 0,N
				     A, 0, 0, 0,N
				     a, a, &a->a);N
	a (a != A_A_A)N
		a a;N
N
	A_A_A(a->a, a, a);N
N
	a;N
N
 a:N
	a (a != A)N
		a_a_a(a->a, a, a(*a));N
	a_a_a(a, a, a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a a a a %a: %a",N
		      a, a_a_a(a));N
}N
N
N
a a_a_aN
a(a_a_a *a) {N
	a_a_a a;N
	a_a_a(a);N
	a = a_a(a_a_a, a, a);N
	a (a == A_A_A) {N
		a_a_a(a, a);N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a");N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a: %a",N
			      a_a_a(a));N
		a->a_a = A_A_A;N
	}N
N
	a (a);N
}N
N
a a_a_aN
a(a_a_a *a) {N
	a_a_a a;N
	a->a_a = A_A_A_A;N
	A(a(a));N
N
	a = a_a(a, a, a);N
	a (a == A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a");N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a: %a",N
			      a_a_a(a));N
		a->a_a = A_A_A;N
	}N
 a:N
	a (a);N
}N
N
/*N
 * Aa a a a (a A).N
 */N
a aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a_a_a *a = (a_a_a *)a->a_a;N
N
	A(a == a->a);N
	A(a);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a A a a a a");N
	(a)a(a);N
N
	A(&a->a_a_a);N
	A(a->a_a == A);N
	a->a_a = a;N
	A(&a->a_a_a);N
}N
N
aN
a_a_a(a_a_a *a) {N
	A(&a->a_a_a);N
	a (a->a_a != A)N
		a_a_a(a->a, &a->a_a);N
	A(&a->a_a_a);N
}N
N
aN
a_a_a_a(a_a_a *a) {N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A(0),N
		      "a a a");N
N
	a_a_a(a->a, a);N
}N
N
/*N
 * Aa a a a a a 'a'.N
 *N
 * A: a a a a a a a a a a aN
 * a.  Aa a a a a a a a a a aN
 * a a a a (a->a) a A. Aa a a a aN
 * a a a a a a a a a a a a a aN
 * a a a_a().N
 */N
a a *N
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a_a_a a;N
N
	a.a = a_a_a;N
	a = a_a_a(a, A_A_A|A_A_A,N
				  &a);N
N
	a (a) {N
	a A_A_A:N
		(a) a_a_a(a);N
		a;N
	a A_A_A:N
		a (a.a == a_a_a)N
			(a) a_a_a(a);N
		a;N
	a A_A_A:N
		a (a != A) {N
			(a) a(a, "a a a");N
			(a) a(a);N
		}N
		a (A);N
	a:N
		a (a != A) {N
			(a) a(a, a_a_a(a));N
			(a) a(a);N
		}N
		a (A);N
	}N
N
	a (a.a == a_a_a ||N
	    a.a == a_a_a)N
		a (a.a.a_a.a);N
N
	a (A);N
}N
N
/*N
 * Aa a a a a a a a a, a a.N
 * Aa a a a a, a '*a' a a, aN
 * a '*a' a A, a a 'a' a a A, aN
 * a a a a a (A.A. 'a' a a a a aN
 * a a A a).N
 *N
 * Aa 'a' a a, a a a a a a aN
 * a a a a a a a a a a a a a. (AaN
 * a a a a a'a a a a a a aN
 * a a a a a, a a "a a [-a] a".)N
 */N
a a_a_aN
a_a_a(a_a_a *a, a_a_a *a, a a *a,N
	       a_a_a **a, a *a,N
	       a_a_a **a, a a)N
{N
	a *a;N
	a *a;N
	a a *a = A;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a a;N
	a a[A_A_A + 0] = "";N
	a a[A_A_A];N
	a a = a;N
N
	A(a != A && *a == A);N
N
	a (a) {N
		/* Aa a a a. */N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
	}N
N
	/* Aa a a a a. */N
	a (a == A)N
		a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a'a a a a a_a() */N
	/* Aa a a a a "-a" a "-a." */N
	a (a(a, "-a") == 0) {N
		a = a;N
		a(a, ".", A_A_A);N
	} aN
		a(a, a, A_A_A);N
	a (a != A)N
		a(a, a ? "." : a,N
			A_A_A);N
N
	a = a_a_a(&a);N
	A(a_a_a(a, a, 0, A));N
N
	/* Aa a a a a a. */N
	a = a_a(a, a);N
	a (a != A) {N
		a_a_a a;N
		a.a = a;N
		a.a = a(a);N
		A(a_a_a(&a, &a));N
N
		/* Aa a a a a a. */N
		a = a_a(a, a);N
	} aN
		a = a_a_a;N
N
	a (a == A) {N
		a (a) {N
			a = a_a_a(&a->a,N
						   "_a",N
						   a_a_a,N
						   &a);N
			a (a != A_A_A ||N
			    a->a == A)N
			{N
				a = A_A_A;N
				a(a, a(a),N
					 "a a a a a "N
					 "_a a");N
			} a {N
				a_a_a(a->a, a);N
				a = A_A_A;N
			}N
		} a {N
			a = a_a_a(&a->a,N
					  a, (a == A),N
					  a, a);N
			a (a == A_A_A)N
				a(a, a(a),N
					 "a a a '%a' a a a",N
					 a);N
			a a (a == A_A_A)N
				a(a, a(a),N
					 "a '%a' a a a a "N
					 "a", a);N
		}N
	} a {N
		a = a_a_a(&a->a, a,N
					   a, &a);N
		a (a != A_A_A) {N
			a(a, a(a),N
				 "a a a '%a'", a);N
			a a;N
		}N
N
		a (a) {N
			a (a->a != A) {N
				a_a_a(a->a, a);N
				a = A_A_A;N
			} aN
				a = A_A_A;N
		} aN
			a = a_a_a(a->a, a, 0,N
					     A, a);N
		a (a != A_A_A)N
			a(a, a(a),N
				 "a a a '%a' a a '%a'",N
				 a, a);N
	}N
N
	/* Aa a? */N
	a (a != A_A_A && *a != A)N
		a_a_a(a);N
	a (a == A_A_A)N
		a = A_A_A;N
 a:N
	a (a != A_A_A) {N
		a_a_a a;N
N
		a = a(a, a);N
		a (a == A_A_A)N
			(a) a(a);N
	}N
N
 a:N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			       a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A)N
		a (A_A_A);N
	a_a_a(a, &a);N
	a (a != A) {N
		a_a_a(&a);N
		a_a_a(a, &a);N
		a_a_a(&a);N
	}N
	a = a_a_a(a);N
	a (a == a_a_a || a == a_a_a ||N
	    a == a_a_a ||N
	    (a == a_a_a &&N
	     a_a_a(a) == a_a_a))N
		a_a_a(a);N
	aN
		a = A_A_A;N
	a_a_a(&a);N
	a (a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			   a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a a;N
	a a *a = A;N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A) {N
		a = a(a);N
		a (a == A_A_A)N
			a = "a a a";N
	} a {N
		a = a_a_a(a);N
		a (a == a_a_a || a == a_a_a ||N
		    a == a_a_a)N
		{N
			a_a_a(a);N
			a_a_a(&a);N
			a = "a a a";N
		} a {N
			a = a_a_a(a, a);N
			a_a_a(&a);N
			a (a) {N
			a A_A_A:N
				 a = "a a a";N
				 a;N
			a A_A_A:N
				a = "a a a";N
				a = A_A_A;N
				a;N
			a A_A_A:N
				a = "a a a-a-a";N
				a = A_A_A;N
				a;N
			a:N
				/* a a a a a a a */N
				a;N
			}N
		}N
	}N
	a (a != A) {N
		(a) a(a, a);N
		(a) a(a);N
	}N
	a (a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a) {N
	a_a_a a;N
	a->a_a = A_A_A_A;N
N
	A(a(a));N
N
	a = a_a(a, a, a);N
	a (a == A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a");N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a: %a",N
			      a_a_a(a));N
		a->a_a = A_A_A;N
	}N
a:N
	a (a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			   a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a a a[] = "a a a";N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A)N
		a (A_A_A);N
N
	a_a_a(a);N
	a_a_a(&a);N
	(a) a(a, a);N
	(a) a(a);N
N
	a (A_A_A);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			    a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a = A, *a = A;N
	a a a0[] = "a a a";N
	a a a0[] = "a a a, a, a a a";N
	a_a_a a;N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A)N
		a (A_A_A);N
N
	a_a_a(a, &a);N
	a (a != A) {N
		a_a_a(&a);N
		a_a_a(a, &a);N
		a_a_a(&a);N
	}N
N
	a = a_a_a(a);N
	a (a == a_a_a || a == a_a_a ||N
	    a == a_a_a)N
	{N
		a_a_a(a);N
		a_a_a(&a);N
		(a) a(a, a0);N
		(a) a(a);N
		a (A_A_A);N
	}N
N
	a_a_a(&a);N
	(a) a(a, a0);N
	(a) a(a);N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a a, a;N
	a *a;N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	a = a_a_a(a->a, A_A_A);N
N
	a = a_a(a, A);N
	a (a == A) {N
		a = !a;N
	} a a (!a(a, "a") || !a(a, "a") ||N
		   !a(a, "a") || !a(a, "a")) {N
		a = a;N
	} a a (!a(a, "a") || !a(a, "a") ||N
		   !a(a, "a") || !a(a, "a")) {N
		a = a;N
	} a {N
		a (A_A_A);N
	}N
N
	a (a == a)N
		a (A_A_A);N
N
	a_a_a(a->a, A_A_A, a);N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a %a", a ? "a" : "a");N
	a (A_A_A);N
}N
N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			 a_a_a *a, a_a_a *a,N
			 a0_a a, a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a *a;N
	a_a_a *a = A;N
N
	A(a != A && *a == A);N
N
	a = a_a_a(a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a_a_a *a = A;N
		a a_a_a *a = a_a_a(a);N
		a = a_a_a(a, a, a,N
						 a, a, &a);N
		a (a != A_A_A)N
			a a;N
		A_A_A(a->a, a, a);N
	}N
	*a = a;N
	a (A_A_A);N
N
 a:N
	a_a_a(&a);N
	a (a);N
}N
N
/*N
 * Aa a a a a a a aN
 * a a.N
 */N
a a_a_aN
a_a_a(a a_a_a *a, a a_a_a *a,N
			a_a_a *a, a_a_a *a,N
			a0_a a, a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a *a, *a;N
	a_a_a a;N
	a_a_a a = -0;N
	a_a_a *a = A;N
	A(a != A && *a == A);N
N
	a = a_a_a(a, "a");N
	a (!a_a_a0(a)) {N
		a (a_a_a != 0) {N
			a = a_a_a;N
		} a {N
			a = a_a_a(a, &a);N
			a (a != A_A_A)N
				a (a);N
		}N
	} a {N
		a (a_a_a0(a) >= A0_A) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a '%a' a a a a",N
				    a_a_a0(a));N
			a (A_A_A);N
		}N
		a = (a_a_a)a_a_a0(a);N
	}N
N
	a = a_a_a(a, "a");N
	a (!a_a_a0(a))N
		a = a_a_a;N
	a {N
		a (a_a_a0(a) > 0) {N
			a_a_a(a, a_a_a, A_A_A,N
				    "a a '%a' a a a a",N
				    a_a_a0(a));N
			a (A_A_A);N
		}N
		a = (a_a_a)a_a_a0(a);N
	}N
N
	a = a_a_a(a, a, a, A, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a = a_a_a0(a_a_a(a, "a"),N
				     a, a_a_a, a, a, 0,N
				     a, &a->a);N
	a (a != A_A_A) {N
		a_a_a(a);N
		a (a);N
	}N
	*a = a;N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a) {N
	a_a_a a;N
	A *a = A;N
N
	A(a_a_a(a->a, "a", &a),N
		"a a a a a a", a->a);N
N
	a = a_a_a(a, a);N
N
 a:N
	a (a != A)N
		(a)a_a_a(a);N
	a (a == A_A_A)N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a");N
	aN
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a: %a",N
			      a_a_a(a));N
	a (a);N
}N
N
a a_a_aN
a_a_a(a_a_a *a, a *a) {N
	a a *a = a;N
	a a *a;N
N
	a = a_a_a(a->a, a *a);N
	a->a = A;N
	a_a_a(a, &a->a);N
	A_A_A(a, a);N
	A_A_A(A_A_A(a->a)->a, a, a);N
	a (A_A_A);N
}N
N
a a_a_aN
a_a_a(a a *a, a_a_a *a) {N
	a a *a;N
	a_a_a a = A_A_A;N
N
	/*N
	 * Aa a a.N
	 */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
		a (a->a == a)N
			a (A_A_A);N
N
	a = a_a_a(a->a, a *a);N
	a->a = A;N
	a_a_a(a, &a->a);N
	A_A_A(a, a);N
	A_A_A(a->a);N
	A_A_A(a->a, a, a);N
	a (a->a)N
		a = a_a_a(a->a, a, A,N
				      a_a_a, a);N
	a (a);N
}N
N
a aN
a_a(a a *a) {N
	a a *a;N
	a a *a;N
N
	a = A_A_A(a->a);N
	a (a != A) {N
		A_A_A(a->a, a, a);N
		a = A_A_A(a->a);N
		a (a != A) {N
			A_A_A(a->a, a, a);N
			a_a_a(&a->a);N
			a_a_a(a->a, a, a *a);N
			a = A_A_A(a->a);N
		}N
		a_a_a(&a->a);N
		a_a_a(a->a, a, a *a);N
		a = A_A_A(a->a);N
	}N
	a (a->a != A)N
		a_a_a(a->a, &a->a, a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a (a->a != A)N
		(a)a_a_a(a->a);N
	a (a->a != A)N
		a_a_a(&a->a);N
	a_a_a(a->a, a, a *a);N
}N
N
a aN
a(a *a, a_a_a a) {N
	a a *a = a;N
	a a[0+0];N
	a a_a_a_a *a;N
N
	a (a != A_A_A) {N
		a a;N
	}N
	a (a->a != A) {N
		a_a_a(&a->a);N
	}N
	a (a->a == A) {N
		a->a = A_A_A(a->a);N
		a (a->a == A) {N
			a a;N
		}N
		A(a->a == A);N
	} a {N
		a a;N
	}N
 a:N
	a(a->a, ";\a; Aa a %a\a;\a", a->a->a->a);N
 a:N
	a (a->a && a_a_a(a->a->a)) {N
		a(a->a,N
			";\a; Aa a a '%a' a a a '%a'\a",N
			a->a->a->a,N
			a_a_a(a->a->a->a));N
	} a a (a->a == A && a->a == A &&N
		   a->a)N
	{N
		a = &a_a_a_a;N
		/* a a a */N
		a (a->a->a->a != A) {N
			a_a_a(a->a->a->a, &a->a);N
		}N
		a (a->a != A) {N
			a(a->a,N
				";\a; Aa a a a '%a' (a %a)\a;\a",N
				a->a->a->a,N
				a_a_a(a->a->a->a));N
			a = a_a_a(a->a,N
							    a->a, A,N
							    a, a->a,N
							    a->a,N
							    a, a,N
							    &a->a);N
			a (a == A_A_A) {N
				a;N
			}N
			a (a == A_A_A) {N
				a(a->a, "; %a\a",N
					a_a_a(a));N
			} a a (a != A_A_A) {N
				a a;N
			}N
		}N
	}N
N
	a ((a->a || a->a || a->a) &&N
	    a->a == A && a->a->a->a != A) {N
		a_a_a(a->a->a->a, &a->a);N
	}N
N
	a (a->a != A) {N
		a (a->a) {N
			a_a_a(a->a->a->a, a->a);N
		}N
		a (a->a) {N
			a_a_a(a->a->a->a,N
						   a->a);N
		}N
		a (a->a) {N
			a_a_a(a->a->a->a,N
					   "A a", a->a);N
		}N
		a_a_a(&a->a);N
	}N
	a (a->a) {N
		a = &a_a_a_a;N
 a:N
		a (a->a != A) {N
			a_a_a(a->a, &a->a,N
					    a);N
		}N
		a (a->a != A) {N
			a_a_a(&a->a);N
		}N
		a (a->a == A) {N
			a->a = A_A_A(a->a->a);N
		} a {N
			a->a = A_A_A(a->a, a);N
		}N
		a (a->a != A) {N
			/* a a a */N
			a_a_a(a->a->a, a, a(a));N
			a(a->a, ";\a; Aa a a '%a'\a;\a", a);N
			a = a_a_a(a->a->a, &a->a);N
			a (a != A_A_A) {N
				a(a->a, "; %a\a",N
					a_a_a(a));N
				a a;N
			}N
			a_a_a(a->a, &a->a);N
			a = a_a_a(a->a,N
							    a->a,N
							    a->a,N
							    a, a->a,N
							    a->a,N
							    a, a,N
							    &a->a);N
			a (a == A_A_A) {N
				a;N
			}N
			a (a == A_A_A) {N
				a(a->a, "; %a\a",N
					a_a_a(a));N
				a = A_A_A;N
				A(a);N
				a a;N
			}N
			a (a != A_A_A) {N
				a a;N
			}N
		}N
	}N
	a (a->a != A) {N
		a->a = A_A_A(a->a, a);N
		a (a->a != A) {N
			a a;N
		}N
	}N
 a:N
	a(a->a, "; Aa a\a");N
	a = a_a_a(a->a);N
	a (a == A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a");N
	}N
 a:N
	a (a != A_A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a: %a", a_a_a(a));N
	}N
	a_a(a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		    a_a_a **a)N
{N
	a a *a = A;N
	a_a_a *a;N
	a_a_a a;N
	a *a;N
	a a *a;N
	a a;N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	a = a_a_a(a->a, a(*a));N
N
	a->a = a->a;N
	a->a = a;N
	a->a = a;N
	a->a = a;N
	a->a = a;N
	a->a = a;N
	a->a = A;N
	A_A_A(a->a);N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a->a = A;N
	a_a_a(a->a, &a->a);N
N
	A(a_a_a(a->a, "a", &a->a),N
		"a a a a a", a->a);N
N
	a = a_a(a, A);N
	a = (a == A) ? "" : ": ";N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a%a%a", a, (a != A) ? a : "");N
N
	a (a != A && a(a, "-a") == 0) {N
		/* a a a */N
		a->a = a;N
		a = a_a(a, A);N
	} a a (a != A && a(a, "-a") == 0) {N
		/* a a a a */N
		a = a_a(a, A);N
	} a a (a != A && a(a, "-a") == 0) {N
		/* a a a, a a */N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a = a_a(a, A);N
	} a a (a != A && a(a, "-a") == 0) {N
		/* a a a, a a a */N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a = a_a(a, A);N
	} a a (a != A && a(a, "-a") == 0) {N
		/* a a a, a a a */N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a = a_a(a, A);N
	} a a (a != A && a(a, "-a") == 0) {N
		/* a a a a, a a a */N
		a->a = a;N
		a->a = a;N
		a->a = a;N
		a = a_a(a, A);N
	}N
N
 a:N
	a = a;N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a != A && a(a->a, a) != 0)N
			a;N
		a = a;N
		A(a_a_a(a, a));N
	}N
	a (a != A) {N
		a (!a) {N
			A(a(a, "a '"));N
			A(a(a, a));N
			A(a(a, "' a a"));N
			A(a(a));N
			a = A_A_A;N
			a(a, a);N
			a (a);N
		}N
		a = a_a(a, A);N
		a (a != A)N
			a a;N
	}N
	a(a, A_A_A);N
	a (A_A_A);N
N
 a:N
	a (a != A)N
		a_a(a);N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			  a_a_a **a)N
{N
	a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a *a;N
	A *a = A;N
	a_a_a a;N
	a a[0];N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* "-" a a a a a a a a a a */N
	a = a_a(a, a);N
	a (a != A && a(a, "-") == 0)N
		a = a_a(a, a);N
	a {N
		a = a_a_a(a->a, "a", &a);N
		a (a != A_A_A) {N
			(a) a(a, "a a a ");N
			(a) a(a, a->a);N
			A(a, "a a a a a a",N
				a->a);N
		}N
	}N
N
	A_A(&a);N
	a_a_a(&a, a, a(a));N
	A(a(a, "a a a a "));N
	A(a(a, a));N
	A(a(a, ":\a"));N
N
	a {N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a (a != A && a(a->a, a) != 0)N
				a;N
			a (a != A)N
				a_a_a(&a);N
			a = a_a_a(a, &a);N
			a (a == A_A_A) {N
				a = A_A_A;N
				a;N
			}N
			A(a(a, "\a Aa a "));N
			A(a(a, a->a));N
			A(a(a, "\a   Aa a:\a\a"));N
			A(a_a_a(a, a));N
N
			a (a != A)N
				a_a_a(&a);N
			a = a_a_a(a, &a);N
			a (a == A_A_A) {N
				a = A_A_A;N
				a;N
			}N
			A(a(a, "\a   Aa a a:\a\a"));N
			A(a_a_a(a, A, a));N
		}N
		a (a != A)N
			a = a_a(a, a);N
	} a (a != A);N
N
 a:N
	a (a_a_a(*a) > 0) {N
		a (a != A)N
			(a)a(a, "\a");N
		aN
			(a)a(a);N
	}N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
	a (a != A) {N
		a(a, "%.*a", (a) a_a_a(*a),N
			(a *) a_a_a(*a));N
		a_a_a(*a);N
		(a)a_a_a(a);N
	}N
	a (a == A_A_A)N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a");N
	aN
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a: %a",N
			      a_a_a(a));N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a) {N
	A *a = A;N
	a_a_a *a;N
	a_a_a a;N
N
	A(a_a_a(a->a, "a", &a),N
		"a a a a a", a->a);N
	a(a, ";\a; Aa Aa\a;\a");N
	a_a_a(a, a->a);N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a(a, ";\a; Aa a a [a: %a]\a;\a",N
			a->a);N
		a_a_a(a->a,N
					 a_a_a, a);N
	}N
N
	a(a, "; Aa a\a");N
N
 a:N
	a (a != A)N
		a = a_a_a(a);N
	a (a == A_A_A)N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a");N
	aN
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a: %a",N
			      a_a_a(a));N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a *a;N
	a *a;N
	a a;N
N
	A(a);N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a a. */N
	a = a_a(a, A);N
	a (a == A) {N
		a (a_a_a < 0)N
			a_a_a++;N
	} a {N
		a = a(a, &a, 0);N
		a (*a != '\0' || a < 0 || a > 0)N
			a (A_A_A);N
		a_a_a = (a a)a;N
	}N
	a_a_a(a_a_a, a_a_a);N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a a a %a", a_a_a);N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			a_a_a **a)N
{N
	a *a;N
	a_a_a *a;N
	a a = a;N
	a_a_a a;N
	a a = a, a = a, a = a;N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a (!a(a, "a") || !a(a, "a") ||N
	    !a(a, "a") || !a(a, "a")) {N
		a = a;N
	} a a (!a(a, "a") || !a(a, "a") ||N
		   !a(a, "a") || !a(a, "a")) {N
		a = a;N
	} a a (!a(a, "a") || !a(a, "a")) {N
		a = a;N
	} a {N
		a (A_A_A);N
	}N
N
	/* Aa a a a a. */N
	a = a_a(a, a);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a ((a != A && a(a, a->a) != 0)N
		    || a("_a", a->a) == 0)N
			a;N
N
		a (a) {N
			A(a_a_a(a, a));N
			a->a = a;N
			a = a;N
		} a {N
			a (!a)N
				A(a(a, "\a"));N
			A(a(a, "A a a "));N
			A(a(a, a->aN
					    ? "a" : "a"));N
			A(a(a, " (a "));N
			A(a(a, a->a));N
			A(a(a, ")"));N
			a = a;N
		}N
	}N
	A(a(a));N
N
	a (!a)N
		a = A_A_A;N
	a a (a)N
		a = A_A_A;N
	aN
		a = A_A_A;N
 a:N
	a_a_a(a->a);N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a) {N
	a *a;N
	a_a_a *a;N
	a a;N
	a a;N
	a_a_a a;N
	a_a_a *a;N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a. */N
	a = a_a(a, A);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
	a = a;N
N
	/*N
	 * Aa a a a a a a a a a a a.N
	 * Aa a a a a a a a a a a aN
	 * a, a a a, a a a a a a a aN
	 * a a a A.N
	 */N
	a (a != A) {N
		/*N
		 * Aa a a a a a a.  Aa a a A(#a^0)N
		 * a a a a a a, a a a aN
		 * a a a a a a a (a a aN
		 * a) a a a.N
		 */N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a (a(a, a->a) != 0)N
				a;N
			a = a;N
			a (a = A_A_A(a->a);N
			     a != A;N
			     a = A_A_A(a, a)) {N
				a (a->a == a->a)N
					a;N
			}N
			A(a != A);N
			a->a = a;N
		}N
	} aN
		a = a;N
N
	/* Aa a */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a (a != A && !a->a)N
			a;N
		a->a = a;N
		a = a_a_a(a->a, a);N
		a (a != A_A_A) {N
			a = a;N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a '%a' a: %a",N
				      a->a->a,N
				      a_a_a(a));N
		}N
	}N
N
	/*N
	 * Aa a a a a a a a: a a a a aN
	 * a A a'a a a.  Aa a a a a aN
	 * a, a a a a a: a a a a aN
	 * a a a a a a a, a a a a a aN
	 * a a a a a a a a a a.N
	 * A a a a a a a a a a a/0 a, a a aN
	 * a a.  Aa a a a a A(a^0/0) a.N
	 */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (!a_a_a(a))N
			a;N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a)) {N
			a (!a->a || a->a != a->a)N
				a;N
			a = a_a_a(a, a);N
			a (a != A_A_A) {N
				a = a;N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a a a a '%a' "N
					      "a: %a", a->a,N
					      a_a_a(a));N
			}N
		}N
	}N
N
	/* Aa a a a. */N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a->a = a;N
	}N
N
	a (a && a) {N
		a (a != A)N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a '%a' a",N
				      a);N
		aN
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a a a");N
		a = A_A_A;N
	} a {N
		a (!a) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a a a '%a' a: "N
				      "a a a", a);N
			a = A_A_A;N
		} aN
			a = A_A_A;N
	}N
	a_a_a(a->a);N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		       a a)N
{N
	a *a, *a;N
	a a[A_A_A];N
	a_a_a *a;N
	a a;N
	a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a a. */N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	a(a, a, A_A_A);N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
	a = a_a_a(&a);N
	a = a_a_a(a, &a, a_a, 0, A);N
	a (a != A_A_A)N
		a (a);N
N
	/* Aa a a a a. */N
	a = a_a(a, A);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
	a = a;N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a != A && a(a, a->a) != 0)N
			a;N
		a = a;N
		/*N
		 * Aa'a a a a a a a a a a aN
		 * a a a a a a a a a.  Aa a aN
		 * a a a a a a a.N
		 */N
		a = a_a_a(a, a, a);N
		a (a != A_A_A) {N
			a = a;N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a '%a' a a a '%a' "N
				      "a: %a",N
				      a ? "a" : "a",N
				      a, a->a,N
				      a_a_a(a));N
		}N
	}N
	a (a && a) {N
		a (a != A)N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a '%a' a a a '%a' "N
				      "a",N
				      a ? "a" : "a",N
				      a, a);N
		aN
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a '%a' a a a a "N
				      "a",N
				      a ? "a" : "a",N
				      a);N
		a = A_A_A;N
	} a {N
		a (!a)N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a '%a' a a a '%a' "N
				      "a: a a a",N
				      a ? "a" : "a",N
				      a, a);N
		a = A_A_A;N
	}N
	a_a_a(a->a);N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a a a, a, a, a;N
	a a a;N
	a a *a = "", *a = "", *a = "";N
	a a[A_A_A];N
	a a[A_A_A];N
	a a[0], a[0];N
N
	a (a_a_a->a_a) {N
		a = " (";N
		a = ")";N
		a (a_a_a->a == A)N
			a = "a.a/a/a a";N
		aN
			a = a_a_a->a;N
	}N
	a = a_a_a(a->a, A_A_A);N
	a = a_a_a(a->a,N
					   A_A_A);N
	a = a_a_a(a->a,N
					    A_A_A);N
	a = a_a_a(a->a,N
					  A_A_A);N
	a = a_a_a(a->a,N
					 A_A_A);N
N
	a_a_a(&a_a_a, a,N
				     a(a));N
	a_a_a(&a_a_a, a,N
				     a(a));N
N
	a(a, a(a), "a: %a %a%a%a <a:%a>%a%a%a\a",N
		 a_a_a, a_a_a,N
		 (*a_a_a != '\0') ? " " : "",N
		 a_a_a, a_a_a, a, a, a);N
	A(a(a, a));N
N
	a = a_a_a(a, a(a));N
	a (a != A_A_A)N
		a(a, "a", a(a));N
	a(a, a(a), "a a %a: %a\a",N
		 a, a_a_a());N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a);N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a);N
	A(a(a, a));N
N
	a (a_a_a != A) {N
		a(a, a(a), "a a: %a (%a%a)\a",N
			 a_a_a, a_a_a, a_a_a);N
	} a {N
		a(a, a(a), "a a: %a\a",N
			 a_a_a);N
	}N
	A(a(a, a));N
N
	a(a, a(a), "Aa a: %a\a", a_a_a_a);N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a_a_a);N
	A(a(a, a));N
N
	a(a, a(a), "A a a a: %a\a",N
		 a_a_a);N
	A(a(a, a));N
N
	a(a, a(a), "a a a: %a (%a a)\a",N
		     a, a);N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a_a_a);N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a);N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a\a", a);N
	A(a(a, a));N
N
	a(a, a(a), "a a a a: %a\a",N
		     a);N
	A(a(a, a));N
N
	a(a, a(a), "a a a %a\a",N
		 a_a_a(a->a, A_A_A)N
		   ? "A" : "A");N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a/%a/%a\a",N
		     a_a_a(&a->a->a),N
		     a_a_a(&a->a->a),N
		     a_a_a(&a->a->a));N
	A(a(a, a));N
N
	a(a, a(a), "a a: %a/%a\a",N
		     a_a_a(&a->a->a),N
		     a_a_a(&a->a->a));N
	A(a(a, a));N
N
	a(a, a(a), "A a-a: %a\a",N
		     (a)a_a_a_a(a->a->a,N
					  a_a_a));N
	A(a(a, a));N
N
	a (a->a_a != A_A_A) {N
		a(a, a(a), "a/a %a\a",N
			 a->a_a == A_A_AN
			 ? "a" : "a a");N
		A(a(a, a));N
	}N
N
	A(a(a, "a a a a a"));N
	A(a(a));N
N
	a (A_A_A);N
 a:N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a *a;N
	a a a;N
	a a a;N
	a a a a[] = "a0";N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a = a_a(a, a);N
	a (a == A)N
		a = 0;N
	aN
		a = a(a, A, 0);N
N
	A(a_a_a(a, a));N
	a (a = 0; a < a; a++)N
		A(a0(a, a[a % (a(a) - 0)]));N
N
	A(a(a));N
N
 a:N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a_a *a, a *a,N
		a a *a)N
{N
	a a[A_A_A];N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
N
	a_a_a(&a, A);N
	a = a_a_a(&a);N
N
 a:N
	a_a_a(&a);N
	a = a_a_a(&a, a->a, &a,N
					a);N
	a (a == A_A_A) {N
		a_a_a(&a);N
		a (A_A_A);N
	}N
	a (a != A_A_A && a != A_A_A) {N
		a_a_a(&a);N
		a (a);N
	}N
N
	a (;;) {N
		a = A;N
		a_a_a(&a, &a, a, &a);N
		a = a->a;N
N
		a (a != A) {N
			a (!a->a)N
				a a;N
N
			a_a_a(&a->a, a, a(a));N
			a (a(a, a) == 0) {N
				(*a)++;N
				a_a_a(&a);N
				(a)a_a_a(a->a,N
							 &a->a,N
							 a);N
				a a;N
			}N
		}N
N
	a:N
		a = a_a_a(&a, &a, a);N
		a (a == A_A_A)N
			a;N
		a (a != A_A_A && a != A_A_A) {N
			a_a_a(&a);N
			a (a);N
		}N
	}N
N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a;N
	a a a = 0;N
	a *a, *a;N
	a a[A_A_A];N
	a a[0];N
N
	(a)a_a(a, a);  /* a a a */N
N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
	a(a, a, A_A_A);N
N
	a = a_a(a, a);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		a (a == A || a(a->a, a) == 0) {N
			A(&a->a->a, a_a_a);N
			a = a_a(a->a, a,N
						 &a);N
			A(&a->a->a,N
				 a_a_a);N
			a (a != A_A_A) {N
				a_a_a(a->a);N
				a (a);N
			}N
		}N
	}N
	a_a_a(a->a);N
N
	a(a, a(a), "%a", a);N
N
	A(a(a, a));N
	A(a(a, " a a a."));N
	A(a(a));N
N
 a:N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a_a *a, a_a_a **a,N
	      a a *a)N
{N
	a a[A_A_A];N
	a a[A_A_A];N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a;N
	a a *a;N
N
	a (a != A)N
		a = a->a;N
	aN
		a = "(a)";N
N
	a_a_a(&a, A);N
	a = a_a_a(&a);N
	a_a_a(&a);N
	a = a_a_a(&a, a->a, &a,N
					a);N
	a (a == A_A_A) {N
		a_a_a(&a);N
		a (A_A_A);N
	}N
	a (a != A_A_A && a != A_A_A) {N
		a_a_a(&a);N
		a (a);N
	}N
N
	a (;;) {N
		a = A;N
		a_a_a(&a, &a, a, &a);N
		a = a->a;N
N
		a (a != A) {N
			a_a_a(&a->a, a, a(a));N
			a (a->a) {N
				a_a_a(a->a, a,N
						a(a));N
				a (*a != 0)N
					A(a(a, "\a"));N
				A(a(a, "a \""));N
				A(a(a, a));N
				A(a(a,N
					     "\"; a \"a\"; a \""));N
				A(a(a, a));N
				A(a(a, "\"; a \""));N
				A(a(a, a));N
				A(a(a, "\";"));N
			} a {N
				a (*a != 0)N
					A(a(a, "\a"));N
				A(a(a, "a \""));N
				A(a(a, a));N
				A(a(a,N
					     "\"; a \"a\"; a \""));N
				A(a(a, a));N
				A(a(a, "\";"));N
			}N
			(*a)++;N
		}N
		a = a_a_a(&a, &a, a);N
		a (a == A_A_A || a == A_A_A)N
			a;N
	}N
N
	a (A_A_A);N
 a:N
	a_a_a(&a);N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a_a_a *a;N
	a a a = 0;N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a)) {N
		A(&a->a->a, a_a_a);N
		a = a_a(a, a->a, a,N
				       &a);N
		A(&a->a->a, a_a_a);N
		a (a != A_A_A) {N
			a_a_a(a->a);N
			a (a);N
		}N
		A(&a->a->a, a_a_a);N
		a = a_a(a, a->a, a,N
				       &a);N
		A(&a->a->a, a_a_a);N
		a (a != A_A_A) {N
			a_a_a(a->a);N
			a (a);N
		}N
	}N
	a_a_a(a->a);N
N
	a (a == 0)N
		A(a(a, "a a a a."));N
N
	a (a_a_a(*a) > 0)N
		A(a(a));N
N
 a:N
	a (a);N
}N
N
/*N
 * Aa a a "a" a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		   a_a_a **a)N
{N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a a;N
	a0_a a;N
	a a = a;N
	a *a;N
N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a (a(a, A_A_A) == 0)N
		a = a;N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A)N
		a (A_A_A);   /* A: a a a a? */N
N
	a = a_a_a(a);N
	a (a != a_a_a) {N
		a_a_a(&a);N
		a (A_A_A);N
	}N
N
	a = a_a_a(a);N
N
	/*N
	 * "a a" a "a-a a"N
	 * a a "a-a".N
	 */N
	a ((a & A_A_A) == 0)N
		a = A_A_A;N
	a a ((a & A_A_A) == 0 && !a)N
		a = A_A_A;N
	aN
		a_a_a(a, a);N
N
	a_a_a(&a);N
	a (a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
*/N
a a_a_aN
a(a_a_a *a, a *a) {N
	a a = *(a *)a;N
	a_a_a a;N
	a_a_a *a = A;N
	a *a;N
N
	a_a_a(a, &a);N
	a (a != A) {N
		a(a, a);N
		a_a_a(&a);N
	}N
N
	a = a_a_a(a);N
	a (a != A_A_A)N
		a = a;N
	a (a) {N
		a = a_a_a(a);N
		a (a != A)N
			(a)a_a_a(a);N
	}N
N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a, a_a_a **a) {N
	a_a_a a, a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a a[A_A_A];N
	a a[A_A_A];N
	a a *a, *a, *a;N
	a a = a;N
N
	(a) a_a(a, a);N
N
	a = a_a(a, a);N
	a (a != A &&N
	    (a(a, "-a") == 0 || a(a, "-a") == 0)) {N
		a = a;N
		a = a_a(a, a);N
	}N
N
	a = a_a_a(a, a, a, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
N
	a (a == A) {N
		a = a_a_a(a->a);N
		A_A(a == A_A_A);N
		a = A_A_A;N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a)) {N
			a = a_a_a(a->a, a,N
					      A, a, &a);N
			a (a != A_A_A &&N
			    a == A_A_A)N
				a = a;N
		}N
		a_a_a(a->a);N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a%a: %a",N
			      a ? ", a a a" : "",N
			      a_a_a(a));N
		a (a);N
	}N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a(a, &a);N
	a_a_a(a->a);N
N
	a = a_a_a(a);N
	a (a(a->a, "_a") == 0 ||N
	    a(a->a, "_a") == 0)N
	{N
		a = "";N
		a = "";N
	} a {N
		a = a->a;N
		a = " ";N
	}N
	a_a_a(a_a_a(a), a,N
			      a(a));N
	a_a_a(a_a_a(a),N
			a, a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a: a a '%a/%a'%a%a%a: %a",N
		      a, a, a, a,N
		      a ? ", a a a" : "",N
		      a_a_a(a));N
	a_a_a(&a);N
	a (a);N
}N
N
/*N
 * Aa a a "a" a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a a,N
		    a_a_a *a, a_a_a **a)N
{N
	a_a_a a, a;N
	a_a_a *a = A, *a = A;N
	a_a_a a;N
	a a[A_A_A];N
	a a[A_A_A];N
	a_a_a *a;N
	a a *a, *a;N
	a a;N
	a a *a = A;N
N
	a = a_a_a(a, a, A, &a, A,N
				a, a);N
	a (a != A_A_A)N
		a (a);N
	a (a == A) {N
		a = a_a_a(a->a);N
		A_A(a == A_A_A);N
		a = A_A_A;N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a)) {N
			a = a_a_a(a, a);N
			a (a != A_A_A &&N
			    a == A_A_A)N
				a = a;N
		}N
		a_a_a(a->a);N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "%a a a: %a",N
			      a ? "a" : "a",N
			      a_a_a(a));N
		a (a);N
	}N
	a_a_a(a, &a);N
	a (a != A) {N
		a_a_a(&a);N
		a_a_a(a, &a);N
		a_a_a(&a);N
	}N
	a = a_a_a(a);N
	a (a != a_a_a) {N
		a_a_a(&a);N
		a (A_A_A);N
	}N
N
	a (a && !a_a_a(a, a)) {N
		a_a_a(&a);N
		a (A_A_A);N
	}N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a_a_a(a);N
	a (a) {N
		a (a) {N
			a = "A: Aa a a a a.\a"N
			      "Aa a a a a a a "N
			      "a a a a a-a.";N
			a = A_A_A;N
		}N
		a (a == A_A_A) {N
			a = a_a_a(a);N
			a (a != A_A_A)N
				a = "Aa a a a a "N
				      "a a.";N
		}N
		a (a == A_A_A)N
			a_a_a(a, a);N
	} a {N
		a (a) {N
			a = a_a_a(a);N
			a (a) {N
			a A_A_A:N
			a A_A_A:N
				a = "Aa a a a a a "N
				      "a.";N
				a = A_A_A;N
				a;N
			a A_A_A:N
				a = "A a a a a a a.\a"N
				      "Aa a a a a a a.";N
				a = A_A_A;N
				a;N
			}N
		}N
	}N
	a_a_a(a->a);N
N
	a (a != A) {N
		(a) a(a, a);N
		(a) a(a);N
	}N
N
	a = a_a_a(a);N
	a (a(a->a, "_a") == 0 ||N
	    a(a->a, "_a") == 0)N
	{N
		a = "";N
		a = "";N
	} a {N
		a = a->a;N
		a = " ";N
	}N
	a_a_a(a_a_a(a), a,N
			      a(a));N
	a_a_a(a_a_a(a),N
			a, a(a));N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "%a a '%a/%a'%a%a: %a",N
		      a ? "a" : "a",N
		      a, a, a, a,N
		      a_a_a(a));N
	a_a_a(&a);N
	a (a);N
}N
N
#a A_AN
/*N
 * Aa a a a a a a a a a aN
 * a a a a a a a a a.N
 */N
a_a_aN
a_a_a_a(a_a_a **a) {N
	a (a(a, "a a(0A) a a a"));N
}N
#a /* A_A */N
N
#a A_AN
N
/*N
 * Aa a a a a a a a a a a a aN
 * Aa a a a a a a a aN
 */N
#a A0 "# Aa a a a a: "N
#a A0 "\a# Aa a a a a a a a\a" \N
		"# a 'a a' a. A A A A A.\a"N
a a_a_aN
a_a(A *a, a a *a) {N
	a_a_a a;N
	A(a_a_a(A0, a(A0) - 0, 0, a, A));N
	A(a_a_a(a, a(a), 0, a, A));N
	A(a_a_a(A0, a(A0) - 0, 0, a, A));N
 a:N
	a (a);N
}N
N
a aN
a(a *a, a a *a, a a) {N
	A *a = a;N
N
	(a) a_a_a(a, a, 0, a, A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a_a_a *a) {N
	a_a_a a;N
	a_a a;N
	A *a = A;N
	a a = a;N
N
	A(&a->a_a_a);N
N
	A(a_a_a(a->a_a_a, "a", &a));N
	A(a_a_a(a, 0, A_A));N
N
	A(a_a_a(a, &a));N
	a = a;N
	a (a == 0)N
		A(a_a(a, a->a));N
N
	A(a_a_a("a ", 0, 0, a, A));N
	a_a(a, A_A_A, a, a);N
	A(a_a_a(";\a", 0, 0, a, A));N
	A(a_a_a(a));N
	a = a_a_a(a);N
	a = A;N
N
 a:N
	a (a != A) {N
		(a)a_a_a(a);N
		a (a) {N
			a_a_a a0;N
N
			a0 = a_a_a(a->a_a_a,N
						    a);N
			a (a0 != A_A_A) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "Aa a A a '%a' "N
					      "a a a a: "N
					      "%a",N
					      a->a_a_a,N
					      a_a_a(a0));N
			}N
		}N
	}N
	A(&a->a_a_a);N
	a (a);N
}N
N
a a_a_aN
a_a(a a_a_a *a, a_a_a *a) {N
	a a_a_a *a = A;N
	a_a_a *a;N
	a a_a_a *a;N
N
	A *a = A;N
	a a[0];N
	a_a_a a;N
N
	a = a_a_a(a->a_a_a, "a-A",N
				   a, a(a));N
	a (a == A_A_A)N
		a = a_a_a(a, &a);N
	a (a != A_A_A)N
		a (a);N
N
	a_a_a(a, "a", &a);N
	a (!a_a_a(a))N
		A(A_A_A);N
N
	A_A(&a->a.a, a);N
N
	A(a_a(a, a->a));	/* a a a */N
N
	a (a = A_A_A(*a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a a_a_a *a = a_a_a(a);N
N
		A(a_a_a("a ", 0, 0, a, A));N
		a_a(a, A_A_A, a, a);N
		A(a_a_a(";\a", 0, 0, a, A));N
	}N
N
	A(a_a_a(a));N
	a = a_a_a(a);N
	a = A;N
	a (a != A_A_A)N
		a a;N
	A(a_a_a(a, a->a_a_a));N
	a (a);N
N
 a:N
	a (a != A)N
		(a)a_a_a(a);N
	(a)a_a_a(a);N
	a (a);N
}N
N
#a /* A_A */N
N
a aN
a_a(A_a *a, a_a_a *a, a *a, a_a a) {N
	a_a_a a;N
N
	a_a_a(&a);N
	a_a_a(a, a_a_a(&a), A);N
	a_a_a(a_a_a(&a), a, a);N
N
	a->a_a = a;N
	a->a_a = a(a);N
}N
N
a aN
a(a *a, a a *a, a a) {N
	a_a_a *a = a;N
	a_a_a a;N
N
	A(a != A && A_A_A(a, A_A));N
N
	a = a(a->a, a, a);N
	a (a != A_A_A && a->a == A_A_A) {N
		a->a = a;N
	}N
}N
N
a a_a_aN
a_a(A_a **a, A_a a, a_a_a *a,N
	 a a_a_a *a)N
{N
	a_a_a a;N
	a a;N
	a_a_a *a;N
	a a = a;N
	a_a_a *a = A;N
	a a[0];N
	A_a a, a;N
	a_a_a a;N
N
	a = a_a_a(a);N
N
	a_a(&a, a_a_a(a), a, a(a));N
N
	A(&a->a_a_a);N
N
	a (a == A) {N
		/* Aa'a a a a a a a */N
		a = a_a(*a, a, &a, A);N
		a (a != A_A && a != A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a %a "N
				      "a A a: %a",N
				      a, a_a(a));N
			a = A_A_A;N
			a a;N
		} a a (a != A_A) {N
			a = a;N
		}N
	} a {N
		/* Aa'a a a a a a */N
		a a_a_a *a;N
N
		a = a_a_a(a->a, &a, 0);N
		a (a != A_A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a a "N
				      "a_a(): %a",N
				      a_a_a(a));N
			a a;N
		}N
N
		a = a_a_a(a, "a");N
		a (a == A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a a a a "N
				      "a_a()");N
			a = A_A_A;N
			a a;N
		}N
N
		a.a = A_A;N
		a.a = &a;N
		a.a = A_A_A;N
		a_a(a, A_A_A, a, &a);N
		a (a.a != A_A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a a "N
				      "a a a_a(): %a",N
				      a_a_a(a));N
			a = a.a;N
			a a;N
		}N
N
		a.a_a = a_a_a(a);N
		a.a_a = a_a_a(a);N
N
		a = a_a(*a, a, &a, &a, 0);N
		a (a != A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a "N
				      "A a: %a",N
				      a_a(a));N
			a = A_A_A;N
			a a;N
		}N
N
		a = a;N
	}N
N
	a = A_A_A;N
N
 a:N
	a (!a || a != A_A_A) {N
		(a) a_a_a(*a);N
	} a {N
		a = a_a_a(*a);N
		a (a != A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a "N
				      "A a: %a",N
				      a_a(a));N
			a = A_A_A;N
		}N
	}N
	*a = A;N
N
	A(&a->a_a_a);N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a) {N
	a_a_a a = A_A_A;N
	a a;N
	A_a a;N
	A_a *a = A;N
N
	A(a != A);N
N
	a = a_a_a((A_a *) a->a_a_a, 0, 0, &a);N
	a (a != A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a_a_a: %a",N
			      a_a(a));N
		a (A_A_A);N
	}N
N
	a = a_a_a(a, A, 0, &a);N
	a (a != A_A) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a_a_a: %a",N
			      a_a(a));N
		a = A_A_A;N
	}N
N
	a_a_a(a);N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a a a, A_a **a, A_a *a) {N
	a a;N
	A_a *a = A;N
N
	A(a != A);N
	A(a != A && *a == A);N
	A(a != A);N
N
	a = a_a_a((A_a *) a->a_a_a, 0,N
			       a, &a);N
	a (a != A_A) {N
		a_a_a(a_a_a,N
			      A_A_A, A_A_A,N
			      A_A_A, "a_a_a: %a",N
			      a_a(a));N
		a a;N
	}N
N
	a = a_a_a(a, A, 0, a);N
	a (a != A_A) {N
		a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
			      A_A_A, "a_a_a: %a",N
			      a_a(a));N
		a a;N
	}N
N
	*a = a;N
N
 a:N
	a (a != A_A) {N
		a (a != A) {N
			a_a_a(a);N
		}N
		a (A_A_A);N
	}N
N
	a (A_A_A);N
}N
N
/*N
 * a_a_a() a a_a_a a a a a a aN
 * a a a A a a a a a a aN
 * a a.N
 */N
a aN
a_a_a(a_a_a *a) {N
	a a *a = A;N
	a a_a[A_A];N
	a a[A_A];N
	a a, a;N
N
	a (a->a_a_a == A) {N
		a;N
	}N
N
	a = a_a_a_a(a->a_a_a, &a);N
	A(a == A_A);N
	a(a, a(a), "%a-a", a);N
	a(a_a, a, a(a_a));N
	a_a_a((A_a *) a->a_a_a);N
N
	/*N
	 * Aa a a a a a a a a, a a a.N
	 */N
	a = a(a_a, a_a_a(), -0);N
	A(a);N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a.N
	 */N
	(a) a_a_a(a);N
N
	a->a_a_a = A;N
}N
N
a a_a_aN
a_a_a(a_a_a *a) {N
	a_a_a a;N
	A_a *a = A;N
	a a;N
N
	a (a->a_a_a == A) {N
		a (A_A_A);N
	}N
N
	a_a_a(a);N
N
	a = a_a_a(&a);N
	a (a != A_A) {N
		a_a_a(a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a_a_a a: %a",N
			      a_a(a));N
		A(A_A_A);N
	}N
N
	a (a->a_a_a != 0A) {N
		a = a_a_a_a(a, a->a_a_a);N
		a (a != A_A) {N
			a_a_a(a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a_a_a_a a: %a",N
				      a_a(a));N
			A(A_A_A);N
		}N
	}N
N
	a = a_a_a(a, a->a_a_a, A_A_A, 0);N
	a (a != A_A) {N
		a_a_a(a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a_a_a a '%a' a: %a",N
			      a->a_a_a, a_a(a));N
		A(A_A_A);N
	}N
N
	a->a_a_a = a;N
	a = A;N
	a = A_A_A;N
N
 a:N
	a (a != A) {N
		a_a_a(a);N
	}N
	a (a);N
}N
N
a a_a_aN
a_a(A_a **a, a a) {N
	a_a_a a = A_A_A;N
	a a;N
N
	A(a != A);N
N
	a (*a != A) {N
		a (a) {N
			a = a_a_a(*a);N
			a (a != A_A) {N
				a = A_A_A;N
			}N
		} a {N
			a_a_a(*a);N
		}N
		*a = A;N
	}N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a *a) {N
	a_a_a a;N
	a a;N
	A_a *a = A;N
	A_a a;N
	A_a a;N
N
	A(a != A);N
N
	a = a_a(a, A_A, &a, &a);N
	a (a != A_A_A) {N
		a a;N
	}N
N
	a = a_a(a, a, &a);N
	a (a != A_A) {N
		a_a_a(a_a_a,N
			      A_A_A, A_A_A,N
			      A_A_A, "a_a: %a",N
			      a_a(a));N
		a = A_A_A;N
		a a;N
	}N
N
	*a = a.a_a;N
N
 a:N
	(a) a_a(&a, a);N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a) {N
	a_a_a a;N
	a_a_a *a_a = A;N
	a a, a;N
	a_a_a *a = A;N
	a a = a;N
	a a_a_a *a;N
	a a_a_a *a;N
	a a[A_A];N
	A_a *a = A;N
	A_a a;N
	A_a a, a;N
	a_a_a a;N
N
	/*N
	 * Aa A a a'a a, a A A a a aN
	 * a a, a a a a.N
	 */N
	a (!a_a_a(a->a_a_a)) {N
		a = A_A_A;N
		a a;N
	}N
N
	a = a_a(a, &a);N
	a (a == A_A_A && a > 0) {N
		a = A_A_A;N
		a a;N
	}N
N
	a_a_a(a_a_a,N
		      A_A_A, A_A_A,N
		      A_A_A,N
		      "Aa a a A a '%a' a "N
		      "A a '%a'",N
		      a->a_a_a, a->a_a_a);N
	/*N
	 * Aa a a a a, a a a A a aN
	 * a a a, a a a a a aN
	 * a a, a a a a a a aN
	 * a a a a A.N
	 */N
	a_a_a(a_a_a);N
	a = a_a_a(a_a_a, a->a_a_a,N
				&a_a_a, &a_a);N
	a (a != A_A_A) {N
		a_a_a(a_a_a,N
			      A_A_A, A_A_A,N
			      A_A_A,N
			      "Aa a A a '%a': %a",N
			      a->a_a_a,N
			      a_a_a(a));N
		a a;N
	}N
N
	a = A;N
	A(a_a_a(a_a, "a", &a));N
	a (!a_a_a(a)) {N
		A(A_A_A);N
	}N
N
	A(a_a(a, 0, &a, &a));N
N
	A(a_a_a(a->a, &a, 0));N
N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a_a_a *a;N
		a a_a_a *a;N
		a a[A_A_A];N
		a_a_a a;N
		a_a_a *a;N
		a a *a;N
		a_a_a a;N
N
		a = a_a_a(a);N
N
		a = a_a_a(a_a_a(a, "a"));N
		a (a == A) {N
			a = A_A_A;N
			a a;N
		}N
N
		/* Aa a a */N
		a_a_a(&a, a, a(a));N
		a_a_a(&a, a(a));N
		a = a_a_a(&a);N
		A(a_a_a(a, &a, a_a,N
					A_A_A, A));N
		a_a_a(a, a, a(a));N
N
		a.a_a = a;N
		a.a_a = a(a);N
N
		a = a_a_a(a, "a");N
		a (a == A) {N
			a = A_A_A;N
			a a;N
		}N
N
		a_a_a(a);N
		a.a = A_A;N
		a.a = &a;N
		a.a = A_A_A;N
		a_a(a, A_A_A, a, &a);N
		a (a.a != A_A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a a "N
				      "a a a_a(): %a",N
				      a_a_a(a));N
			a = a.a;N
			a a;N
		}N
N
		a.a_a = a_a_a(a);N
		a.a_a = a_a_a(a);N
N
		a = a_a(a, a, &a, &a, A_A);N
		a (a != A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "Aa a a a "N
				      "A a: %a",N
				      a_a(a));N
			a = A_A_A;N
			a a;N
		}N
N
		a = a;N
	}N
N
	a = A_A_A;N
N
	/*N
	 * Aa a A a a a a a a a a'a a aN
	 * a a A a a a a a a. Aa a a A aN
	 * a a a a a.N
	 */N
	a(a, a->a_a_a, a(a));N
	a (a(a) < a(a) - 0) {N
		a(a, "~", a(a));N
		a_a_a(a->a_a_a, a);N
	}N
N
 a:N
	a (a != A_A_A) {N
		(a) a_a(&a, a);N
	} a {N
		a = a_a(&a, a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
N
	a (a_a != A) {N
		a_a_a(a_a_a, &a_a);N
	}N
N
	a (a);N
}N
N
#a /* A_A */N
N
a a_a_aN
a_a(a_a_a *a, a *a, a_a_a **a,N
	      a_a_a **a, a a_a_a **a,N
	      a *a, a_a_a **a)N
{N
	a_a_a a;N
	a_a_a a;N
	a a = a;N
	a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a a *a = A;N
	a_a_a a;N
	a_a_a *a = A;N
	a a *a = A;N
N
	A(a != A && *a == A);N
	A(a != A && *a == A);N
	A(a != A && *a == A);N
	A(a != A);N
N
	/* Aa a a a a a */N
	a_a_a(&a, a, (a a) a(a));N
	a_a_a(&a, a(a));N
N
	a (a(a, "a", 0) == 0) {N
		a = "a";N
	} a a (a(a, "a", 0) == 0) {N
		a = "a";N
	} a {N
		A(0);N
		A_A();N
	}N
N
	/*N
	 * Aa a "a" a "a" a a "a", aN
	 * a a a a aN
	 */N
	a_a_a(&a, 0);N
N
	a_a_a(a_a_a);N
	A(a_a_a(a_a_a, &a, a, 0,N
			       &a_a_a, 0, &a));N
	A(a_a_a(a, "a", &a));N
	a (!a_a_a(a))N
		A(A_A_A);N
N
	/* Aa a a a a a a a a a a */N
	a = a_a_a(a_a_a(a));N
N
	/* Aa a a a a a a a a a a a. */N
	a = a_a_a(a, "a");N
N
	a = A;N
	(a)a_a_a(a, "a", &a);N
	a (a == A) {N
		(a) a_a_a(a, "a-a", &a);N
		a (a != A) {N
			(a) a(a,N
				      "'a-a' a a a a ");N
			(a) a(a, a);N
		} aN
			(a) a(a, "a a a a");N
		A(A_A_A);N
	}N
N
	a (a(a_a_a(a), "a") == 0 ||N
	    a(a_a_a(a), "a") == 0 ||N
	    a(a_a_a(a), "a-a") == 0)N
	{N
		(a) a(a, "'");N
		(a) a(a, a_a_a(a));N
		(a) a(a, "' a a a a ");N
		(a) a(a, a);N
		A(A_A_A);N
	}N
N
	a (a(a_a_a(a), "a") == 0)N
		a = a;N
N
	/* Aa a a a a a */N
	a = a_a_a(a, "a");N
	A(a_a_a(a, a_a_a, &a));N
N
	/* Aa a a a a a */N
	a = a_a_a(a, "a");N
	a (a && a_a_a(a))N
		a = a_a_a(a);N
	a (a == A || *a == '\0')N
		a = "_a";N
	a = a_a_a(&a->a, a, a,N
				   &a);N
	a (a == A_A_A) {N
		(a) a(a, "a a a a a '");N
		(a) a(a, a);N
		(a) a(a, "'");N
		a a;N
	} a a (a != A_A_A) {N
		a a;N
	}N
N
	*a = a;N
	*a = a;N
	*a = a;N
	*a = a;N
N
	a (A_A_A);N
N
 a:N
	a (a != A)N
		a_a_a(a_a_a, &a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a,N
		a a_a_a *a, a a_a_a *a,N
		a_a a)N
{N
	a_a_a a = A_A_A;N
	a a_a_a *a = A;N
	a a_a_a *a = A;N
	a_a_a *a;N
	a_a_a a;N
	a_a_a *a;N
N
	A(a != A);N
	A(a != A);N
	A(a != A);N
	A(a != A);N
N
	A(&a->a_a_a);N
N
	a_a_a(a, "a", &a);N
N
	a (!a_a_a(a))N
		A(A_A_A);N
N
	A_A(&a->a.a, a);N
N
	a = a_a_a(&a);N
N
	a (a = A_A_A(*a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a a_a_a *a = a_a_a(a);N
		a a *a;N
		a_a_a *a;N
N
		a = a_a_a(a_a_a(a, "a"));N
		a = a_a_a(a, a, 0, A);N
		a (a != A_A_A ||N
		    !a_a_a(a, a))N
			a;N
N
		A_A(a, a);N
		A_A_A(*a, a, a);N
		a_a_a(a, &a->a);N
		a_a_a(a->a, a, a(*a));N
		a = A_A_A;N
		a;N
	}N
N
	/*N
	 * Aa a a A a a aN
	 */N
	a (a != A && a->a_a_a != A)N
		a = a(a, a);N
N
 a:N
	A(&a->a_a_a);N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	   a_a_a *a, a_a_a *a, a a_a_a *a,N
	   a a, a_a_a **a)N
{N
	a_a_a a, a;N
	a_a_a *a = A;N
#a A_AN
	A *a = A;N
	a a_a = a;N
#a /* A_A */N
	A_a *a = A;N
	A_a a;N
N
	A(a);N
#a /* A_A */N
N
	/* Aa a'a a a */N
	a (a) {N
		a = (a->a != A) ? A_A_A :N
						    A_A_A;N
	} aN
		a = a_a_a(a->a, a, 0, A, &a);N
	a (a == A_A_A) {N
		a = A_A_A;N
		a a;N
	} a a (a == A_A_A) {N
		/* Aa a a-a a */N
		a_a_a(&a);N
		a = A;N
	} a a (a != A_A_A)N
		a a;N
N
#a A_AN
	/*N
	 * Aa a a a a a a a aN
	 */N
	a = a_a_a(a->a_a_a, "a", &a);N
	a (a != A_A_A) {N
		A(a(a, "a a a '"));N
		A(a(a, a->a_a_a));N
		A(a(a, "': "));N
		A(a(a, a_a_a(a)));N
		a a;N
	}N
N
	(a)a_a_a(a);N
	a = A;N
#a /* A_A */N
	/* Aa a a a a a A a */N
	a = a_a(a);N
	a (a != A_A_A) {N
		A(a(a, "a a a A a a '"));N
		A(a(a, a->a_a_a));N
		A(a(a, "'"));N
		a = A_A_A;N
		a a;N
	}N
#a /* A_A */N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
N
	/* Aa a a a a a */N
	a_a_a(a);N
	a = a_a(a->a, a, a->a,N
				a->a, a, &a->a,N
				&a->a, a->a, a, a,N
				a);N
	a_a_a(a);N
N
	a_a_a(a->a);N
N
	a (a != A_A_A) {N
		A(a(a, "a_a a: "));N
		A(a(a, a_a_a(a)));N
		a a;N
	}N
N
	/* Aa a a a? */N
	a (a) {N
		a (a->a == A)N
			A(A_A_A);N
		a_a_a(a->a, &a);N
	} a {N
		a = a_a_a(a->a, a, 0, A, &a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a,N
				      A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "a a a a a a: %a",N
				      a_a_a(a));N
			a a;N
		}N
	}N
N
#a A_AN
	/*N
	 * Aa a a'a a a a a, a a a aN
	 * a'a a. Aa a a a a a, a a aN
	 * a a a.N
	 */N
	a (a->a_a == A) {N
		a_a_a(a, &a->a_a);N
	} a {N
		a_a_a *a;N
		A_A(a, a);N
		A(a_a_a(a->a_a,N
					a->a_a, a, "a"));N
	}N
	a_a = a;N
#a /* A_A */N
N
	/*N
	 * Aa a a a a a a.  Aa a a, a'aN
	 * a a a a a a'a a a.N
	 */N
	a = a_a_a(a, a);N
	a (a != A_A_A) {N
		a_a_a *a = A;N
N
		A(a(a, "a_a_a a: "));N
		A(a(a, a_a_a(a)));N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a; a.");N
N
		/* Aa a a a a, a a */N
		a (a_a_a(a, &a) == A_A_A) {N
			a_a_a(&a);N
			a_a_a(a);N
		}N
N
		/* Aa a a a a a a */N
		a_a_a(a->a, a);N
		a a;N
	}N
N
	/* Aa a a a a a a a a */N
	a_a_a(a, a);N
N
#a A_AN
	/* Aa a a a a a a A */N
	A(a_a(a, 0, &a, &a));N
	A(a_a(&a, a, a, a));N
#aN
	/* Aa a a a a a A */N
	a = a_a(a, a);N
#a /* A_A */N
N
 a:N
N
#a A_AN
	a (a != A)N
		(a)a_a_a(a);N
	a (a != A_A_A && a_a) {N
		a = a_a(a, a->a_a,N
					 a->a_a, a,N
					 A);N
		A_A(a == A_A_A);N
	}N
#a /* A_A */N
	a (a != A)N
		(a) a_a(&a, a);N
#a /* A_A */N
N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a *a,N
	   a_a_a *a, a a *a, a a_a_a *a,N
	   a a, a_a_a **a)N
{N
	a_a_a a, a;N
	a_a_a *a = A;N
	a a;N
	a a = a;N
#a A_AN
	A *a = A;N
	a_a_a *a;N
#a /* A_A */N
	A_a *a = A;N
	A_a a;N
#a /* A_A */N
N
	/* Aa a a a */N
	a (a) {N
		a (a->a != A) {N
			a_a_a(a->a, &a);N
			a = A_A_A;N
		} aN
			a = A_A_A;N
	} aN
		a = a_a_a(a->a, a, 0, A, &a);N
	a (a != A_A_A)N
		a a;N
N
	a = a_a_a(a);N
	a_a_a(&a);N
N
#a A_AN
	a = (a_a_a *) a->a_a_a;N
	a (a == A) {N
		A(a(a, "a a a a a a"));N
		A(A_A_A);N
	}N
#aN
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
N
#a A_AN
	/* Aa a a a a a a a a */N
	a = a_a_a(a->a_a_a, "a", &a);N
	a (a != A_A_A) {N
		A(a(a, "a a a '"));N
		A(a(a, a->a_a_a));N
		A(a(a, "': "));N
		A(a(a, a_a_a(a)));N
		a a;N
	}N
	(a)a_a_a(a);N
	a = A;N
#a /* A_A */N
	/* Aa a a a a a A a */N
	a = a_a(a);N
	a (a != A_A_A) {N
		A(a(a, "a a a A a a '"));N
		A(a(a, a->a_a_a));N
		A(a(a, "'"));N
		a = A_A_A;N
		a a;N
	}N
#a /* A_A */N
N
	/* Aa a a */N
	a_a_a(a);N
	a = a_a(a->a, a, a->a,N
				a->a, a, &a->a,N
				&a->a, a->a, a, a,N
				a);N
	a_a_a(a);N
N
	a = a;N
	a_a_a(a->a);N
N
	a (a != A_A_A) {N
		A(a(a, "a_a a: "));N
		A(a(a, a_a_a(a)));N
		a a;N
	}N
N
	/* Aa a a a? */N
	a (a) {N
		a (a->a == A)N
			A(A_A_A);N
		a_a_a(a->a, &a);N
	} aN
		A(a_a_a(a->a, a, 0, A, &a));N
N
N
N
#a A_AN
	/* Aa a a a a (a A a a a) */N
	a (a) {N
		a = a_a(a, a->a_a,N
					 a->a_a,N
					 a_a_a(a),N
					 a_a);N
		a (a != A_A_A) {N
			A(a(a, "a a a "N
					    "a a: "));N
			A(a(a, a_a_a(a)));N
			a a;N
		}N
	}N
#a /* A_A */N
N
	a (!a) {N
		a (a->a == A) {N
			a = a_a(a, a->a_a,N
						 a->a,N
						 a_a_a(a),N
						 A);N
		} a {N
			a a_a_a *a =N
				a_a_a(a->a, "a");N
			a = a_a(a, a->a_a,N
						 a,N
						 a_a_a(a),N
						 A);N
		}N
N
		a (a != A_A_A) {N
			A(a(a, "a a a "N
					    "a a: "));N
			A(a(a, a_a_a(a)));N
			a a;N
		}N
	}N
N
	/* Aa a a a a a a a a a a. */N
	a = a_a_a(a, a);N
N
	/*N
	 * Aa a a a a, a a a a a a.N
	 */N
	a (a == A_A_A)N
		a = A_A_A;N
N
	a (a != A_A_A) {N
		a_a_a *a = A;N
N
		A(a(a, "a a a a '"));N
		A(a(a, a));N
		A(a(a, "': "));N
		A(a(a, a_a_a(a)));N
		A(a(a, "\aAa a a a a a a. "));N
		A(a(a, "Aa 'a a' a a\a"));N
		A(a(a, "a a a a a."));N
N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a; a a.");N
N
		/* Aa a a a a, a a */N
		a (a_a_a(a, &a) == A_A_A) {N
			a_a_a(&a);N
			a_a_a(a);N
		}N
N
		/* Aa a a a a a a */N
		a_a_a(a->a, a);N
		a a;N
	}N
N
#a A_AN
	/* Aa a a a a; a a A a a */N
	A_A(a, a);N
	A(a_a_a(a->a_a, a->a_a, a, "a"));N
#a /* A_A */N
N
	a (a) {N
#a A_AN
		A(a_a(a, 0, &a, &a));N
		A(a_a(&a, a, a, a));N
#aN
		a = a_a(a, a);N
		a (a != A_A_A) {N
			A(a(a, "\aAa a a a a: "));N
			A(a(a, a_a_a(a)));N
			a a;N
		}N
#a /* A_A */N
N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a, "' a."));N
N
	} a {N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a, "' a a a a a\a"));N
		A(a(a, "a.a a a a a."));N
	}N
N
 a:N
	a (a)N
		a_a_a(a->a);N
N
#a A_AN
	a (a != A)N
		(a)a_a_a(a);N
#a /* A_A */N
	a (a != A)N
		(a) a_a(&a, a);N
#a /* A_A */N
N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
/*N
 * Aa a a "a" a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a *a,N
			a_a_a **a)N
{N
	a_a_a a;N
	a a;N
	a a = a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a_a_a *a = A;N
	a a *a;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a;N
N
	a (a(a, "a", 0) == 0)N
		a = a;N
	a {N
		A(a(a, "a", 0) == 0);N
		a = a;N
	}N
N
	A(a_a(a, a, &a, &a,N
			    &a, &a, a));N
N
	/* Aa a a a a a a a? */N
#a A_AN
	a (a->a_a_a == A)N
#aN
	a (a->a_a_a == A)N
#a /* A_A */N
	{N
		(a) a(a, "Aa a a a a a '");N
		(a) a(a, a->a);N
		(a) a(a, "'");N
		a = A_A_A;N
		a a;N
	}N
N
	a = (a_a_a *) a->a_a_a;N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	a = a_a_a(a_a_a(a, "a"));N
	a_a_a(&a, a, a(a));N
	a_a_a(&a, a(a));N
N
	a = a_a_a(&a);N
	A(a_a_a(a, &a, a_a, 0, A));N
N
	a (a) {N
		a (!a_a_a(a, a_a)) {N
			(a) a(a,N
				      "a a a a a \".\"");N
			A(A_A_A);N
		}N
	}N
N
	a (a)N
		A(a_a(a, a, a, a, a,N
				 a, a, a));N
	aN
		A(a_a(a, a, a, a, a,N
				 a, a, a));N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "%a a %a a a %a a %a",N
		      a ? "a" : "a",N
		      a, a->a,N
		      a ? A_A_A : A_A_A);N
N
	/* Aa a a a a a */N
	A(a_a_a(&a_a_a));N
N
 a:N
	a (a_a_a(*a) > 0)N
		(a) a(a);N
	a (a != A)N
		a_a_a(a_a_a, &a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a aN
a(a a* a, a a, a_a_a **a) {N
	a (a != A && a_a_a(a)) {N
		a (a)N
			(a) a(a,N
				      "Aa a a a a a "N
				      "a a a a a:\a");N
		aN
			(a) a(a, "\a");N
		(a) a(a, a);N
		(a) a(a);N
		a (a);N
	}N
	a (a);N
}N
N
a a {N
	a_a_a *a;N
	a a;N
} a_a_a;N
N
/*N
 * Aa a a a a a a a_a_a().N
 */N
a aN
a(a_a_a *a, a_a_a *a) {N
	a_a_a *a = (a_a_a *)a->a_a;N
	a_a_a *a, *a = A, *a;N
	a a[A_A_A];N
	a_a_a *a;N
	a_a_a *a;N
	a_a_a *a = A;N
	a a;N
	a_a_a a;N
#a A_AN
	A_a *a = A;N
	A_a a;N
#aN
N
	A(a != A);N
N
	a_a_a(&a);N
N
	/* Aa a a a a a */N
	a = a->a;N
	a = a_a_a(a);N
	a = (a_a_a *) a->a_a_a;N
	a_a_a(a_a_a(a), a, a(a));N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a %a a a %a a a",N
		      a, a->a);N
N
	/* Aa a a a a (a A a a a) */N
	a = a_a_a(a);N
N
	a (a && a != A) {N
#a A_AN
		/* Aa a a a a a A a */N
		a = a_a(a, 0, &a, &a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A,N
				      A_A_A,N
				      "a a a A a a '%a'",N
				      a->a_a_a);N
		} a {N
			a = a_a(&a, a, a, A);N
		}N
N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A,N
				      A_A_A, "a a "N
				      "a a a: %a",N
				      a_a_a(a));N
		}N
#aN
		a = a_a(a, a->a_a,N
					 a->a_a,N
					 a_a_a(a),N
					 a_a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A,N
				      A_A_A, "a a "N
				      "a a a: %a",N
				      a_a_a(a));N
		}N
#a /* A_A */N
	}N
N
	a (!a && a != A) {N
		a (a->a != A) {N
			a a_a_a *a =N
				a_a_a(a->a, "a");N
			a = a_a(a, a->a_a,N
						 a,N
						 a_a_a(a),N
						 A);N
		} a {N
			a = a_a(a, a->a_a,N
						 a->a,N
						 a_a_a(a),N
						 A);N
		}N
		a (a != A_A_A){N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A,N
				      A_A_A, "a a "N
				      "a a a: %a",N
				      a_a_a(a));N
		}N
	}N
N
	/* Aa a a */N
	a (a_a_a(a, &a) == A_A_A) {N
		a_a_a(&a);N
		a_a_a(a);N
	}N
N
	/* Aa a a/a a a a a a a a */N
	a_a_a(a, &a);N
	a = (a != A) ? a : a;N
N
	a (a && a->a) {N
		a a *a;N
N
		a = a_a_a(a);N
		a = a_a_a(a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a a a: %a",N
				      a, a_a_a(a));N
		}N
N
		a = a_a_a(a);N
		a = a_a_a(a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a %a a a: %a",N
				      a, a_a_a(a));N
		}N
N
		a (a != a) {N
			a = a_a_a(a);N
			a = a_a_a(a);N
			a (a != A_A_A) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a %a a a: %a",N
					      a, a_a_a(a));N
			}N
N
			a = a_a_a(a);N
			a = a_a_a(a);N
			a (a != A_A_A) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a %a a a: %a",N
					      a, a_a_a(a));N
			}N
		}N
	}N
N
#a A_AN
	a (a != A)N
		(a) a_a(&a, a);N
#aN
	a (a != A)N
		a_a_a(&a);N
	a_a_a(&a);N
	a_a_a(a_a_a, a, a(*a));N
	a_a_a(&a);N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		     a_a_a **a)N
{N
	a_a_a a, a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a;N
	a_a_a *a = A;N
	a a[A_A_A];N
	a a = a;N
	a a *a;N
	a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a (a(a, "-a") == 0 || a(a, "-a") == 0) {N
		a = a;N
		a = a_a(a, a);N
	}N
N
	A(a_a_a(a, a, a, &a, a,N
			     a, a));N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	A(a != A);N
N
	/* Aa a a a a? */N
	a (a_a_a_a_a(a) != A_A_A_A) {N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a,N
			      "' a a a: a-a a."));N
		a = A_A_A;N
		a a;N
	}N
N
	a = a_a_a(a);N
	a (a_a_a(a) == a_a_a)N
		a_a_a(&a->a);N
	aN
		A(a_a_a(a->a, a));N
N
	/* Aa a a */N
	a = a_a_a(a_a_a, a(*a));N
N
	a->a = a;N
	a->a = A;N
	a_a_a(a, &a->a);N
	a = a_a_a(a_a_a, a, A_A_A,N
				     a, a, a(a_a_a));N
N
	a_a_a(a, &a);N
	a_a_a(a, &a);N
	a = A;N
N
	/* Aa a a a a a/a a a */N
	a_a_a(a, &a);N
	a = (a != A) ? a : a;N
N
	a = a_a_a(a);N
	a (!a) {N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a,N
			      "' a a a a a a a a.\a"));N
		A(a(a, "Aa a a a a "));N
		A(a(a, "a a a a a, a\a"));N
		A(a(a, "a a a a a a.a."));N
	} a a (a) {N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a, "' a a a a a a."));N
	} a a (a_a_a(a) == a_a_a ||N
		   a_a_a(a) == a_a_a ||N
		   a_a_a(a) == a_a_a)N
	{N
		a a;N
		a a *a;N
N
		A(a(a, "a '"));N
		A(a(a, a));N
		A(a(a, "' a a a."));N
N
		a = a_a_a(a);N
		a = a(a, a, a);N
N
		a = a_a_a(a);N
		a = a(a, a, a);N
N
		a (a != a) {N
			a = a_a_a(a);N
			a = a(a, a, a);N
N
			a = a_a_a(a);N
			(a) a(a, a, a);N
		}N
	}N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a %a a a a a a", a);N
N
	/* Aa a a a a a */N
	A(a_a_a(&a_a_a));N
N
	a = A_A_A;N
N
 a:N
	a (a_a_a(*a) > 0)N
		(a) a(a);N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
	a (a != A) {N
		a_a_a(&a->a);N
		a_a_a(a_a_a, a, a(*a));N
	}N
N
	a (a);N
}N
N
a a a_a_a *N
a_a_a_a_a_a(a a_a_a *a,N
			   a a *a_a_a_a,N
			   a a *a, a a)N
{N
	a a_a_a *a = A;N
	a a_a_a *a;N
	a a_a_a *a = A;N
	a_a_a a0, a0;N
	a_a_a *a0 = A, *a0 = A;N
	a_a_a a;N
N
	a (a(a_a_a_a, "a") == 0) {N
		a0 = a_a_a(&a0);N
		a0 = a_a_a(&a0);N
		a = a_a_a(a0, a, 0, A);N
		A_A(a == A_A_A);N
	}N
N
	a_a_a(a, a_a_a_a, &a);N
	a (a = a_a_a(a);N
	     a != A;N
	     a = a_a_a(a))N
	{N
		a a *a;N
N
		a = a_a_a(a);N
		A(a != A);N
		a = a_a_a(a_a_a(a, "a"));N
		a (a == A) {N
			a = A;N
			a;N
		}N
N
		a (a0 != A) {N
			a = a_a_a(a0, a, 0, A);N
			a (a == A_A_A &&N
			    a_a_a(a0, a0)) {N
				a a_a_a *a;N
				a a_a_a *a = A;N
				a = a_a_a(a, "a");N
N
				a (a != A)N
					a_a_a(a, "a", &a);N
				a (a && a != A &&N
				    a(a_a_a(a),N
					       "a") == 0)N
					a;N
				a a (!a)N
					a;N
			}N
		} a a (a(a, a) == 0)N
			a;N
N
		a = A;N
	}N
N
	a (a);N
}N
N
a aN
a(a *a, a a *a, a a) {N
	a_a_a *a = a;N
	a_a_a a;N
N
	A(a != A && A_A_A(a, A_A));N
	a = a(a->a, a, a);N
	a (a != A_A_A && a->a == A_A_A) {N
		a->a = a;N
	}N
}N
N
/*N
 * Aa a a "a" a a a a a.N
 */N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		      a_a_a **a)N
{N
	a_a_a a;N
	a a_a_a	*a = A, *a = A;N
	a a[A_A_A];N
	a a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a = a;N
#a A_AN
	a_a_a *a = A;N
#a /* A_A */N
	a a, a;N
	a_a_a a;N
N
	/* Aa a */N
	A(a_a_a(a, a, A, &a, a,N
			     a, a));N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	a = a_a_a(a) == a_a_a;N
	a = a_a_a(a);N
	a = a_a_a(a);N
	a_a_a(&a);N
N
	a = (a_a_a *) a->a_a_a;N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
N
	a (!a) {N
		/* Aa a a a */N
		a = a_a_a_a_a_a(a->a, "a",N
						     a->a, a);N
N
		/* Aa a a a */N
		a (a != A)N
			a = a_a_a(a, "a");N
		aN
			a = a->a;N
N
		a = a_a_a_a_a_a(a, "a", a,N
						     a);N
	}N
N
#a A_AN
	a (a == A && a->a_a != A)N
		a = a_a_a_a_a_a(a->a_a,N
						     "a", a,N
						     a);N
#a /* A_A */N
	a (a == A) {N
		a a_a_a *a = A;N
		A(a_a_a(a, a, &a));N
		A(a_a_a(a, "a", &a));N
		a (!a_a_a(a))N
			A(A_A_A);N
N
		a = a_a_a(a_a_a(a));N
	}N
#a /* A_A */N
N
	a (a == A)N
		A(A_A_A);N
N
	A(a(a, "a "));N
	a.a = A_A;N
	a.a = a;N
	a.a = A_A_A;N
	a_a(a, A_A_A, a, &a);N
	A(a.a);N
N
	A(a(a, ";"));N
N
	a = A_A_A;N
N
 a:N
#a A_AN
	a (a != A)N
		a_a_a(a_a_a, &a);N
#a /* A_A */N
	a (a_a_a(*a) > 0)N
		(a) a(a);N
	a (a)N
		a_a_a(a->a);N
N
	a (a);N
}N
N
a aN
a_a_a(a **a) {N
	a_a_a *a;N
N
	A(a != A && *a != A);N
N
	a = *a;N
N
	a (a->a_a != A) {N
		a (a->a != A)N
			a_a_a(a->a_a, &a->a);N
		a (a->a != A)N
			a_a_a(a->a_a, &a->a);N
		a_a_a(&a->a_a);N
	}N
	a (a->a_a != A) {N
		a (a->a_a != A)N
			a_a_a(a->a_a, &a->a_a);N
		a_a_a(&a->a_a);N
	}N
N
	a (a->a != A)N
		a_a_a(&a->a);N
N
	a_a_a(&a->a, a, a(*a));N
	*a = A;N
}N
N
a a_a_aN
a_a(a a *a, a_a a) {N
	a a a[0 + 0];N
	a_a_a a;N
	a_a_a a;N
	a_a_a a;N
N
	a (a > 0A)N
		a (A_A_A);N
N
	a_a_a(a, a);N
N
	a.a = a;N
	a.a = (a a) a;N
N
	a_a_a(&a, a, a(a));N
	a = a_a_a(&a, 0, "", &a);N
	A_A(a == A_A_A);N
	a[a * 0] = 0;N
N
	a_a_a(a_a_a, A_A_A,N
		      A_A_A, A_A_A,N
		      "a a: %a", a);N
N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		     a_a_a **a)N
{N
	a_a_a a = A_A_A;N
	a_a_a *a = A;N
	a_a_a *a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a a = a;N
	a a = a, a = a;N
	a a = a;N
	a a = a;N
	a0_a a = 0;N
	a a[A_A_A + 0]; /* <0-a a>/<a> */N
	a a a = 0, a = 0, a = 0, a = 0;N
	a a a[0];N
	a a *a;N
	a_a a;N
N
	a_a_a(&a);N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* Aa a a a a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a (a(a, "-a") == 0)N
		a = a;N
	a a ((a(a, "-a") == 0)  ||N
		 (a(a, "-a") == 0))N
	{N
		a = a;N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
		a(a, a, a(a));N
	} a a (a(a, "-a0a") == 0) {N
		a a[0], a[0], a[0];N
		a a[0];N
N
		a = a;N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
N
		a (a(a, "a") == 0)N
			a = 0;N
		a {N
			a(a, a, a(a));N
N
			a = a_a(a, a);N
			a (a == A)N
				a (A_A_A);N
			a(a, a, a(a));N
N
			a = a_a(a, a);N
			a (a == A)N
				a (A_A_A);N
			a(a, a, a(a));N
N
			a = a(a, a(a), "%a %a %a",N
				     a, a, a);N
			a (a == a(a))N
				a (A_A_A);N
			a = a(a, "%a %a %a", &a, &a, &a);N
			a (a != 0A)N
				a (A_A_A);N
N
			a (a > 0aA || a > 0aA)N
				a (A_A_A);N
N
			a = a_a(a, a);N
			a (a == A) {N
				a (A_A_A);N
			} a a (a(a, "a") == 0) {N
				/* Aa-a a a a.N
				 * A: Aa a a aN
				 * a a a a AN
				 * 0 (0 a). Aa a a aN
				 * a.N
				 */N
				a = 0;N
				A(a_a(a, a));N
			} a a (a(a, "-") != 0) {N
				a_a_a a;N
N
				a_a_a(&a, a, a(a));N
				A(a_a_a(a, &a));N
				a = a_a_a(&a);N
			}N
		}N
	} a a (a(a, "-a") == 0) {N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
		A(a_a_a0(&a, a, 0));N
		a = a;N
	} aN
		A(A_A_A);N
N
	A(a_a_a(a, a, A, &a, A,N
			     a, a));N
	a (a == A)N
		A(A_A_A);N
N
	a (a) {N
		A(a_a_a(a, a));N
		(a) a(a, "a a");N
		(a) a(a);N
	} a a (a) {N
		A(a_a_a0a(a, (a0_a)a,N
					     (a0_a)a, a,N
					     (a0_a)a, a,N
					     a));N
		(a) a(a, "a0a a a");N
		(a) a(a);N
	} a a (a) {N
		A(a_a_a(a, a));N
		(a) a(a, "a a a");N
		(a) a(a);N
	} a a (a) {N
		a = a_a_a(a);N
		a = a_a_a(a);N
		A(a_a_a(a, &a));N
		A(a_a_a(a, a, a, &a));N
		a_a_a(a, &a);N
N
		a = a_a_a(a, a, a, a,N
					     a_a_a, 0,N
					     &a, A);N
		a (a == A_A_A) {N
			(a) a(a, "Aa a a a");N
			(a) a(a);N
			a = A_A_A;N
			a a;N
		}N
N
		a (a = a_a_a(&a);N
		     a == A_A_A;N
		     a = a_a_a(&a))N
		{N
			a_a_a a = A_A_A;N
			a a[A];N
			a_a_a a;N
N
			a_a_a(&a, &a);N
N
			a_a_a(&a, a, a(a));N
			A(a_a_a(&a, &a));N
			a (!a)N
				A(a(a, "\a"));N
			A(a(a, a));N
			a = a;N
		}N
		a (!a)N
			A(a(a));N
N
		a (a == A_A_A)N
			a = A_A_A;N
	}N
N
 a:N
	a (a_a_a(&a))N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(a, &a);N
	a (a != A)N
		a_a_a(a, &a, a);N
	a (a != A)N
		a_a_a(&a);N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a a_a_aN
a(a_a_a **a, a a *a, a_a a) {N
	a_a_a a;N
N
	a = a_a_a(a, (a a)a);N
	a (a != A_A_A)N
		a (A_A_A);N
N
	a_a_a(*a, (a a a *)a, (a a)a);N
	a (A_A_A);N
}N
N
a a a_a_aN
a(a_a_a **a, a a *a) {N
	a (a(a, a, a(a)));N
}N
N
a a_a_aN
a0(a_a_a **a, a0_a a) {N
	a_a_a a;N
N
	a = a_a_a(a, 0);N
	a (a != A_A_A)N
		a (A_A_A);N
N
	a_a_a0(*a, a);N
	a (A_A_A);N
}N
N
a a a_a_aN
a(a_a_a **a) {N
	a (a0(a, 0));N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			a_a_a **a)N
{N
	a_a_a a = A_A_A;N
	a_a_a *a = A, *a = A, *a = A;N
	a a *a, *a;N
	a a[A_A_A];N
	a0_a a, a_a, a;N
	a a[0], a[0], a[0];N
	a a[A_A_A + A_A_A + 0];N
	a a[A_A_A];N
	a a[A_A_A];N
	a a[A_A_A];N
	a a[A_A_A];N
	a a[A_A_A];N
	a_a_a a, a, a;N
	a_a_a a, a;N
	a_a_a a;N
	a a = a, a = a;N
	a a = a;N
	a a, a, a;N
	a_a_a *a = A, *a = A;N
	a **a = A;N
	a a = 0;N
N
	a_a_a(&a);N
	a_a_a(&a);N
	a_a_a(&a);N
	a_a_a(&a);N
	a_a_a(&a);N
N
	A(a_a_a(a, a, A, &a, a,N
			     a, a));N
	a (a == A) {N
		a = A_A_A;N
		a a;N
	}N
N
	/* Aa a? */N
	A(a_a_a(a, &a));N
	a_a_a(a, &a);N
	a = (a != A);N
	a (a) {N
		a = a;N
		a = a_a_a(a);N
		A(a_a_a(a, &a));N
	} a {N
		a = a;N
		a = a_a_a(a);N
	}N
N
	a (a) {N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a a_a_a:N
		a = "a";N
		a;N
	a:N
		a = "a";N
	}N
N
	/* Aa a */N
	a = a_a_a(a, &a);N
	/* A A a a a a a a a a_a_a */N
	a (a != A_A_A) {N
		a = 0;N
	}N
	a(a, a(a), "%a", a);N
	a (a) {N
		a = a_a_a(a, &a_a);N
		/* A A a a */N
		a (a != A_A_A) {N
			a = 0;N
		}N
		a(a, a(a), "%a", a_a);N
	}N
N
	/* Aa a a */N
	a = a_a_a(a ? a : a);N
	a(a, a(a), "%a", a);N
N
	/* Aa */N
	a = a_a_a(a);N
	a = ((a_a_a(a) & A_A_A) != 0);N
	a = ((a_a_a(a) & A_A_A) != 0);N
N
	/* Aa a */N
	a = a_a_a(a);N
	a = a_a_a(a, &a);N
N
	/* Aa a */N
	a_a_a(a, &a);N
	a_a_a(&a, a, a(a));N
N
	/* Aa/a a */N
	a (a == a_a_a ||N
	    a == a_a_a ||N
	    a == a_a_a ||N
	    a == a_a_a)N
	{N
		a_a_a(a, &a);N
		a_a_a(&a, a, a(a));N
		a_a_a(a, &a);N
		a_a_a(&a, a, a(a));N
	}N
N
	/* Aa a a */N
	a (a == a_a_a ||N
	    (a == a_a_a && a))N
	{N
		a_a_a(a, &a);N
		a_a_a(&a, a,N
					     a(a));N
	}N
N
	/* Aa? */N
	a (a == a_a_a) {N
		a = a_a_a(a, a);N
		a = a && !a_a_a(a, a);N
	}N
N
	/* Aa a a */N
	a (a && (a == a_a_a ||N
	     (a == a_a_a && a)) &&N
	    ((a_a_a(a) & A_A_A) == 0))N
	{N
		a_a_a *a;N
		a_a_a a;N
		a_a_a a;N
N
		a_a_a(&a);N
		a = a_a_a(&a);N
N
		a = a_a_a(a, &a, a);N
		a (a == A_A_A) {N
			a_a_a a;N
			a a[A_A_A];N
			a a[A_A_A];N
N
			a_a_a(&a);N
			a_a_a(a, a, a(a));N
			a_a_a(a.a,N
					     a, a(a));N
			a(a, a(a),N
				     "%a/%a", a, a);N
			a_a_a(&a, a.a -N
				a_a_a(a), 0);N
			a_a_a(&a, a,N
						     a(a));N
			a_a_a(&a);N
		}N
	}N
N
	/* Aa a */N
	A(a(a, "a: "));N
	A(a(a, a));N
N
	A(a(a, "\a: "));N
	A(a(a, a));N
N
	a (a != A) {N
		a a;N
		A(a(a, "\a: "));N
		A(a(a, a));N
		a (a = 0; a < a; a++) {N
			A(a(a, ", "));N
			a (a[a] != A) {N
				A(a(a, a[a]));N
			}N
		}N
	}N
N
	A(a(a, "\a: "));N
	A(a(a, a));N
	a (a) {N
		A(a(a, "\a a: "));N
		A(a(a, a));N
	}N
N
	A(a(a, "\a: "));N
	A(a(a, a));N
N
	a (! a_a_a(&a)) {N
		A(a(a, "\a a: "));N
		A(a(a, a));N
	}N
N
	a (! a_a_a(&a)) {N
		A(a(a, "\a a: "));N
		A(a(a, a));N
	}N
N
	a (! a_a_a(&a)) {N
		A(a(a, "\a: "));N
		A(a(a, a));N
	}N
N
	a (a) {N
		A(a(a, "\a: a"));N
		a (a) {N
			A(a(a, "\a a: a"));N
		} a {N
			A(a(a, "\a a: a"));N
		}N
	} a {N
		A(a(a, "\a: a"));N
	}N
N
	a (a) {N
		A(a(a, "\a a: a"));N
		a (! a_a_a(&a)) {N
			A(a(a, "\a a a: "));N
			A(a(a, a));N
		}N
	} a a (a) {N
		A(a(a, "\a a: a a"));N
	} a a (a || a) {N
		A(a(a, "\a a: a"));N
	}N
N
	a (!a_a_a(&a)) {N
		A(a(a, "\a a a: "));N
		A(a(a, a));N
		A(a(a, "\a a a: "));N
		A(a(a, a));N
	}N
N
	a (a) {N
		A(a(a, "\a: a"));N
		a (a) {N
			A(a(a, "\a: a"));N
		} a {N
			A(a(a, "\a: a"));N
		}N
	} a {N
		A(a(a, "\a: a"));N
	}N
N
	A(a(a, "\a a a: "));N
	A(a(a, a_a_a(a) ? "a" : "a"));N
N
 a:N
	/* Aa a a a a. */N
	a (a == A_A_A) {N
		(a) a(a, "\a...");N
	}N
	a ((a == A_A_A || a == A_A_A)) {N
		(a) a(a);N
	}N
N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A && a != A) {N
		a a;N
		a_a_a *a = a_a_a(a);N
N
		a (a = 0; a < a; a++) {N
			a (a[a] != A) {N
				a_a_a(a, a[a]);N
			}N
		}N
		a_a_a(a, a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a);N
}N
N
a a aN
a(a *a, a a *a) {N
	a_a a;N
N
	a (a == A || a[0] != '-')N
		a (a);N
N
	a++;N
	a = a(a);N
	a (a > a(a) || a(a, a, a) != 0)N
		a (a);N
N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		 a a, a_a_a **a)N
{N
	a_a_a *a;N
	a_a_a *a = A;N
	a_a_a a = A_A_A;N
	a *a, *a = A, *a;N
	a a[A_A_A];N
	a a[A_A_A];N
	a_a_a a, a;N
	a_a_a a;N
	a a[0];N
	a a *a = A;N
	a a = a, a = a;N
	a_a_a a;N
	a a_a_a *a;N
	a_a_a *a;N
	a_a_a a;N
	a a = a, a = a, a = a;N
	a_a_a a = a_a_a;N
	a a = a;N
N
	A(a);N
N
	a = a_a_a(&a);N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A) {N
		a (A_A_A);N
	}N
N
	a (;;) {N
N
		/* Aa a a */N
		a = a_a(a, a);N
		a (a == A) {N
			a (A_A_A);N
		}N
N
		a (a(a, "--") == 0) {N
			a;N
		} a a (a(a, "a")) {N
			a = a;N
		} a a (a(a, "a")) {N
			a = 0;N
			a = a;N
		} a a (a(a, "a")) {N
			a = a;N
			a;N
		} a a (a(a, "a")) {N
			a_a_a a;N
N
			a = a_a(a, a);N
			a (a == A) {N
				a = "Aa a a";N
				A(A_A_A);N
			}N
N
			a.a = a;N
			a.a = a(a);N
			a = a_a_a(&a, &a);N
			a (a != A_A_A) {N
				a = "a a a A a";N
				A(a);N
			}N
N
			a (a > 0) {N
				a = "A a a a a a";N
				A(A_A_A);N
			}N
N
			a = a;N
			a;N
		} a a (a(a, "a")) {N
			a_a_a a;N
N
			a = a_a(a, a);N
			a (a == A) {N
				a = "Aa a a";N
				A(A_A_A);N
			}N
N
			a.a = a;N
			a.a = a(a);N
			A(a_a_a(&a, &a));N
			a;N
		} a a (a[0] == '-') {N
			a = "Aa a";N
			A(A_A_A);N
		} a {N
			a = a;N
		}N
N
		a;N
	}N
N
	/*N
	 * Aa -a a a, a A'a a aN
	 */N
	a (a) {N
		a (a = A_A_A(a->a);N
		     a != A;N
		     a = A_A_A(a, a))N
		{N
			a (a != A) {N
				a_a_a(&a);N
			}N
			a = a_a_a(a, &a);N
			a (a == A_A_A) {N
				a;N
			}N
N
			A(a_a_a(a, a->a, a));N
		}N
		A(a(a));N
N
		a a;N
	}N
N
	a (a) {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a a a "N
			      "A a");N
		A(A_A_A);N
	}N
N
	/* Aa a A a a a a a. */N
	a (a == A) {N
		a = a_a(a, a);N
	}N
	a (a == A) {N
		a (A_A_A);N
	}N
N
	/* Aa a a a'a a a a a_a() */N
	a(a, a, A_A_A);N
N
	a (a(a, ".") == 0) {N
		a = a_a;N
	} a {N
		a_a_a a;N
		a_a_a(&a, a, a(a));N
		a_a_a(&a, a(a));N
		A(a_a_a(a, &a, a_a, 0, A));N
		a = a;N
	}N
N
	/* Aa a a a a. */N
	a = a_a(a, a);N
	a (a != A) {N
		a(a, a, A_A_A);N
		a = a;N
	}N
N
	a (a_a(a, a) != A) {N
		A(A_A_A);N
	}N
N
	a_a_a(&a);N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a != A && a(a->a, a) != 0) {N
			a;N
		}N
		a = a;N
N
		a (a->a != a && a != a_a_a) {N
			a;N
		}N
N
		a (a->a_a == 0) {N
			a;N
		}N
N
		a (!a) {N
			a = a->a_a;N
		}N
N
		a (a != A) {N
			a_a_a(&a);N
		}N
N
		a = a_a_a(a, &a);N
		a (a == A_A_A) {N
			a = A_A_A;N
			a;N
		}N
N
		a = a_a_a(a, a, a);N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a a '%a' a a a '%a': %a",N
			      a, a->a,N
			      a_a_a(a));N
N
		a (a != 0) {N
			A(a_a_a(a, a,N
					       a, a, a));N
N
			a = a + a;N
			a_a_a(&a, a, 0);N
			a_a_a(&a, a, a(a));N
N
			a (!a) {N
				A(a(a, "\a"));N
			}N
			a = a;N
N
			A(a(a, "Aa a a a: "));N
			A(a(a, a));N
			A(a(a, "/"));N
			A(a(a, a->a));N
			A(a(a, ", a "));N
			A(a(a, a));N
N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a A '%a' (%a a) a a '%a'",N
				      a, a, a->a);N
		} a {N
			a a;N
N
			a = a_a_a(a, a);N
			a (a == A_A_A) {N
				a = a;N
			} a a (a == A_A_A) {N
				a = a;N
			} a {N
				a a;N
			}N
N
			a (!a) {N
				A(a(a, "\a"));N
			}N
			a = a;N
N
			A(a(a, "Aa a a "));N
			A(a(a, a ? "a: "N
						      : "a a: "));N
			A(a(a, a));N
			A(a(a, "/"));N
			A(a(a, a->a));N
N
			a (a) {N
				a_a_a(a_a_a,N
					      A_A_A,N
					      A_A_A,N
					      A_A_A,N
					      "a A '%a' a a %a",N
					      a, a->a);N
			}N
		}N
N
		a = a_a_a(a);N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a A a "N
				      "a a '%a': %a",N
				      a->a, a_a_a(a));N
		}N
	}N
N
	a (!a) {N
		a = "Aa a a";N
		A(A_A_A);N
	}N
N
	(a) a(a);N
N
 a:N
	a (a != A) {N
		(a) a(a, a);N
		(a) a(a);N
	}N
N
	a (a) {N
		a_a_a(a->a);N
	}N
	a (a != A) {N
		a_a_a(&a);N
	}N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a) {N
	a_a_a *a;N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a_a_a a = a_a_a(a);N
N
		a (a != A_A_A) {N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a A a "N
				      "a a '%a': %a",N
				      a->a, a_a_a(a));N
		}N
	}N
N
	a (A_A_A);N
}N
N
a_a_aN
a_a_a(a_a_a *a) {N
	a_a_a *a;N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a_a_a a = a_a_a(a);N
N
		a ((a != A_A_A) &&N
		    (a != A_A_A) &&N
		    (a != A_A_A))N
		{N
			a_a_a(a_a_a, A_A_A,N
				      A_A_A, A_A_A,N
				      "a a A a "N
				      "a a '%a': %a",N
				      a->a, a_a_a(a));N
		}N
	}N
N
	a (A_A_A);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a a[A_A_A + 0] = "";N
N
	a(a, a(a),N
		 "a a a a '%a'", a->a);N
	A(a(a, a));N
	A(a_a_a(a->a_a));N
N
 a:N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a a[A_A_A + 0] = "";N
	a a = a;N
	a a *a = A;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a a_a_a = a;N
N
	a (a->a_a == A) {N
		A(A_A_A);N
	}N
N
	a(a, a(a),N
		 "a a-a a a '%a'", a->a);N
	A(a(a, a));N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
N
	/* Aa a a a a a a a a */N
	a = a->a_a;N
	a->a_a = A;N
	(a)a_a_a(a);N
N
	/* Aa a a */N
	a (a_a_a(a, &a) == A_A_A) {N
		a_a_a(&a);N
		a_a_a(a);N
	}N
N
	/* Aa a */N
	a = a_a_a(a);N
	a = a_a_a(a);N
	a (a == A_A_A) {N
		a_a_a = a;N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a %a a a: %a",N
			      a, a_a_a(a));N
	}N
N
	a = a_a_a(a);N
	a = a_a_a(a);N
	a (a == A_A_A) {N
		a_a_a = a;N
	} a {N
		a_a_a(a_a_a, A_A_A,N
			      A_A_A, A_A_A,N
			      "a %a a a: %a",N
			      a, a_a_a(a));N
	}N
N
	a (!a_a_a) {N
		A(a(a, "a: a a a a a"));N
		A(A_A_A);N
	}N
N
	a_a_a(&a);N
	a = A_A_A;N
N
 a:N
	a (a) {N
		a_a_a(a->a);N
	}N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a_a_a *a = A;N
	a_a_a *a = A;N
	a_a_a a;N
	a_a_a a;N
	a_a_a *a = A;N
N
	a_a_a(&a);N
N
	A(a_a_a(a->a_a, &a));N
	a_a_a(a, &a);N
	a_a_a(&a, a, a, 0);N
	a (a = a_a_a(&a);N
	     a == A_A_A;N
	     a = a_a_a(&a))N
	{N
		a a[A_A_A + 0];N
		a_a_a *a = A;N
		a_a_a *a = A;N
		a_a_a a = A_A_A;N
		a_a_a_a a;N
		a0_a a;N
N
		a_a_a(&a, &a, &a, &a, A);N
		a (a == A || a->a != a_a_a ||N
		    !a_a_a(a))N
			a;N
N
		a (a != a) {N
			a a[A_A_A];N
			a_a_a(a, a, a(a));N
			a(a, a(a), "\a\a    a: %a", a);N
			A(a(a, a));N
		}N
N
N
		a (a = a_a_a(a);N
		     a == A_A_A;N
		     a = a_a_a(a))N
		{N
			a a[A_A_A];N
			a a[A_A_A];N
			a_a_a a;N
			a_a_a a;N
			a_a_a a;N
			a a;N
N
			a_a_a(&a);N
			a_a_a(a, &a);N
			a = a_a_a(&a, &a, A);N
			A_A(a == A_A_A);N
N
			a_a_a(&a, &a);N
			a_a_a(&a, 0);N
			a = a_a_a(&a);N
N
			a(a, a(a), "\a    a: %a", a);N
			A(a(a, a));N
N
			a_a_a(a.a, a, a(a));N
			a(a, a(a), "\a\a: %a", a);N
			A(a(a, a));N
N
			a = ((a.a & A_A_A) != 0);N
			a(a, a(a), "\a\a:%a%a%a",N
				 a ? " A" : "",N
				 ((a.a & A_A_A) != 0)N
				   ? " A" : "",N
				 (a.a == 0) ? " (a)" : "");N
			A(a(a, a));N
N
			a_a_a(&a, a.a, 0);N
			a_a_a(&a, a, a(a));N
			a(a, a(a),N
				 "\a\a a: %a", a);N
			A(a(a, a));N
N
			a (a.a != 0) {N
				a_a_a(&a, a.a, 0);N
				a_a_a(&a, a,N
							     a(a));N
				a(a, a(a),N
					 "\a\a a: %a", a);N
				A(a(a, a));N
			}N
N
			a_a_a(&a, a.a, 0);N
			a_a_a(&a, a, a(a));N
			a (a.a == 0)N
				a(a, a(a), "\a\a a");N
			a a (a)N
				a(a, a(a),N
					 "\a\a a");N
			a a (a.a <= a)N
				a(a, a(a),N
					 "\a\a a: %a", a);N
			a a (a.a > a)N
				a(a, a(a),N
					 "\a\a a: %a", a);N
			A(a(a, a));N
		}N
	}N
N
	a (a == A_A_A)N
		a = A_A_A;N
N
 a:N
	a (a != A) {N
		a_a_a(&a);N
		a_a_a(a, &a, a);N
	}N
	a (a != A)N
		a_a_a(&a);N
N
	a (a);N
}N
N
a a_a_aN
a_a(a_a_a *a, a_a_a **a) {N
	a_a_a a;N
	a a[A_A_A];N
	a_a_a a;N
N
	A(a(a, "a: "));N
	A(a(a, a->a));N
N
	A(a(a, "\a a a: "));N
N
	a_a_a(a->a_a, &a);N
	a (a_a_a(&a)) {N
		A(a(a, "a"));N
	} a {N
		a_a_a(&a, a, a(a));N
		A(a(a, a));N
	}N
N
	A(a_a(a, a));N
N
 a:N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		   a_a_a **a)N
{N
	a *a, *a, *a = A;N
	a_a_a a = A_A_A;N
	a_a_a *a = A;N
	a_a_a a;N
	a a[A_A_A + 0] = "";N
	a { A, A, A, A, A } a = A;N
	a a = a;N
	a a = a;N
N
	/* Aa a a a */N
	a = a_a(a, a);N
	a (a == A) {N
		a (A_A_A);N
	}N
N
	/* Aa a-a a */N
	a = a_a(a, a);N
	a (a == A) {N
		a (A_A_A);N
	}N
N
	a (a(a, "a") == 0) {N
		a = A;N
	} a a (a(a, "a") == 0) {N
		a = A;N
	} a a (a(a, "a") == 0) {N
		a = A;N
	} a a (a(a, "a") == 0) {N
		a = A;N
	} a {N
		a(a, a(a), "a a '%a'", a);N
		(a) a(a, a);N
		a = A_A_A;N
		a a;N
	}N
N
	/* Aa a a a a a. */N
	a = a_a(a, a);N
	a (a != A) {N
		a_a_a a;N
		a.a = a;N
		a.a = a(a);N
		a = a_a_a(&a, &a);N
		a (a != A_A_A) {N
			a(a, a(a),N
				 "a a '%a'", a);N
			(a) a(a, a);N
			a a;N
		}N
		a = a_a(a, a);N
	}N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a (a != A &&N
		    (a != a->a ||N
		     a(a->a, a) != 0))N
		{N
			a;N
		}N
N
		a (a->a_a == A) {N
			a (a != A) {N
				a(a, a(a),N
					 "a '%a': a a a", a);N
				A(a(a, a));N
				a a;N
			} a {N
				a;N
			}N
		}N
N
		a = a;N
N
		a (a) {N
		a A:N
			a (!a) {N
				A(a(a, "\a"));N
			}N
			A(a_a(a, a));N
			a;N
		a A:N
			a (!a) {N
				A(a(a, "\a\a"));N
			}N
			A(a_a(a, a));N
			a;N
		a A:N
			A(a_a_a(a->a_a));N
			a;N
		a A:N
			a (!a) {N
				A(a(a, "\a"));N
			}N
			A(a_a(a, a, a));N
			a;N
		a:N
			A(0);N
			A_A();N
		}N
N
		a (a != A) {N
			a;N
		}N
		a = a;N
	}N
N
	a (!a) {N
		A(a(a, "a a a a a"));N
	}N
N
 a:N
	a (a_a_a(*a) > 0) {N
		(a) a(a);N
	}N
N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
		    a_a_a **a)N
{N
#a A_AN
	a *a;N
	a_a_a a;N
	a a = a;N
	a a = 0;N
N
	a (a->a == A)N
		a (A_A_A);N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	/* "a-a" a a a 0.0.0a0 */N
	a (a(a, "a-a") == 0) {N
		a = a;N
	} a {N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
	}N
N
	a (a || a(a, "-a") == 0) {N
		a = A_A_A;N
	} a a ((a(a, "-a") == 0)) {N
		a a a;N
		a = a_a(a, a);N
		a (a != A) {N
			a a a;N
			a = a(a, "%a", &a);N
			a (a != 0A || a > A_A)N
				a (A_A_A);N
			a = a;N
		} a {N
			a = A_A_A;N
		}N
	} a {N
		a (A_A_A);N
	}N
N
	a = a_a_a(a->a, a);N
	a (a);N
#aN
	A(a);N
	A(a);N
	A(a);N
	a (A_A_A);N
#aN
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a **a) {N
	a *a;N
	a_a_a a = A_A_A;N
	a a a, a, a, a;N
	a a[0];N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a_a_a(a_a_a->a,N
			      &a, &a, &a, &a);N
N
	/* Aa a a a. */N
	a = a_a(a, A);N
	a (a != A) {N
		A(a_a_a0(&a, a, 0));N
		a (a > 0)N
			A(A_A_A);N
		a (a < 0)N
			A(A_A_A);N
N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
		A(a_a_a0(&a, a, 0));N
		a (a > 0)N
			A(A_A_A);N
		a (a < 0)N
			A(A_A_A);N
N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
		A(a_a_a0(&a, a, 0));N
		a (a > A_A_A)N
			A(A_A_A);N
		a (a < 0)N
			A(A_A_A);N
N
		a = a_a(a, a);N
		a (a == A)N
			a (A_A_A);N
		A(a_a_a0(&a, a, 0));N
		a (a > A_A_A)N
			A(A_A_A);N
N
		a = a_a_a(a_a_a->a);N
		A_A(a == A_A_A);N
N
		a_a_a(a_a_a->a, a, a,N
				      a, a);N
N
		a_a_a(a_a_a->a);N
	}N
N
	a(a, a(a), "a-a-a=%a\a", a);N
	A(a(a, a));N
	a(a, a(a), "a-a-a=%a\a", a);N
	A(a(a, a));N
	a(a, a(a), "a-a-a=%a\a", a);N
	A(a(a, a));N
	a(a, a(a), "a-a-a=%a", a);N
	A(a(a, a));N
N
 a:N
	a (a_a_a(*a) > 0)N
		(a) a(a);N
N
	a (a);N
}N
N
a_a_aN
a_a_a(a_a_a *a, a_a_a *a,N
			a_a_a **a)N
{N
	a *a, *a, *a = A;N
	a a[0];N
	a_a_a a = a_a_a;N
	a_a_a *a;N
	a a = a;N
	a_a_a_a a = a_a_a_a;N
	a a = a;N
	a_a_a a = A_A_A;N
	a a = a;N
N
	/* Aa a a a. */N
	a = a_a(a, a);N
	a (a == A)N
		a (A_A_A);N
N
	a = a_a(a, A);N
	a (a == A)N
		a (A_A_A);N
N
	a (!a(a, "a") || !a(a, "a") ||N
	    !a(a, "a") || !a(a, "a")) {N
		a = a_a_a_a;N
	} a a (!a(a, "a") || !a(a, "a") ||N
		   !a(a, "a") || !a(a, "a")) {N
		a = a_a_a_a;N
	} a a (a(a, "a") == 0) {N
		a = a_a_a_a;N
	} a a (!a(a, "a") || !a(a, "a")) {N
		a = a;N
	} aN
		a (A_A_A);N
N
	/* Aa a a a a a. */N
	a = a_a(a, a);N
	a (a != A) {N
		a_a_a a;N
N
		/* Aa a a a a a. */N
		a = a_a(a, a);N
N
		/*N
		 * Aa 'a' a a a a a a a a a a a.N
		 */N
		a.a = a;N
		a.a = a(a);N
		a = a_a_a(&a, &a);N
		a (a != A_A_A) {N
			a (a != A) {N
				a(a, a(a),N
					 "a a '%a'", a);N
				(a) a(a, a);N
				a a;N
			}N
N
			a = a;N
			a = A;N
		}N
	}N
N
	a = a_a_a(a->a);N
	A_A(a == A_A_A);N
	a = a;N
N
	a (a = A_A_A(a->a);N
	     a != A;N
	     a = A_A_A(a, a))N
	{N
		a_a_a a_a = 0;N
		a_a_a *a = A;N
N
		a (a != A && a != a->a)N
			a;N
N
		a (a != A && a(a->a, a) != 0)N
			a;N
N
		a (!a) {N
			a->a = a;N
			a = a;N
			a;N
		}N
N
		a = A;N
		a_a_a(a->a, &a);N
		(a)a_a_a(a, &a_a);N
		a_a_a(&a);N
		a (a)N
			A(a(a, "\a"));N
		A(a(a, a->a));N
		A(a(a, ": "));N
		a (a->a) {N
		a a_a_a_a:N
			a (a_a > 0)N
				A(a(a, "a (a)"));N
			aN
				A(a(a, "a (a-a)"));N
			a;N
		a a_a_a_a:N
			A(a(a, "a (a)"));N
			a;N
		a a_a_a_a:N
			a (a->a && a_a > 0)N
				A(a(a, "a"));N
			a a (a->a)N
				A(a(a, "a (a-a)"));N
			aN
				A(a(a, "a"));N
			a;N
		}N
		a (a_a > 0) {N
			a(a, a(a),N
				 " (a-a-a=%a a-a-a=%a)",N
				 a->a, a_a);N
			A(a(a, a));N
		}N
		a = a;N
	}N
N
	a (!a)N
		a = A_A_A;N
N
a:N
	a (a)N
		a_a_a(a_a_a->a);N
N
	a (a_a_a(*a) > 0)N
		(a) a(a);N
N
	a (a);N
}N
