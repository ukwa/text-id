/*N
 *  a/a/a/a.aN
 *N
 *  Aa (A) 0, 0 Aa AaN
 *N
 *  a a a a aN
 *N
 *  0, Aa Aa. Aa. Aa a a a a a-a a.N
 *  Aa a a a a a a a a a aN
 *  a a a a a-a a a a. Aa a'a aN
 *  a a a. Aa a a a a a_a a a a.N
 *  Aa a a a a a a a a. Aa a'a a aN
 *  a a a a.N
 *N
 *N
 *  Aa:N
 *  0-Aa-0N
 *  Aa AaN
 *  Aa Aa <a.a@a.a.a>N
 *  Aa Aa <a.a@a.a.a>N
 *  Aa Aa <a.a@a.a.a>N
 *  Aa Aa <a.a@a.a.a>N
 *N
 *  Aa Aa Aa - 0A Aa Aa a Aa - AaAN
 *N
 *  A a a a a (a) a a /a. Aa a aN
 *  a a a a a a a. Aa a a a aN
 *  a a a a (a) a a a a, a.a.,N
 *  a a a a a a a.N
 *  Aa a a a a a a a a a a aN
 *  a a a a a a a a a.N
 *N
 *  Aa:N
 *  0-Aa-0N
 *  Aa Aa Aa - 0A Aa Aa a Aa - AaAN
 *  Aa a a a a a a.N
 *N
 *  AaAa:N
 *  0-Aa-0N
 *  0A Aa Aa a Aa - AaA:N
 *  A a a a a a a a a a a a Aa Aa.N
 *N
 *  Aa Aa <a.a@a.a>:N
 *  Aa a a a a, a, a a a a.N
 *N
 *  Aa Aa <a.a@a.a>:N
 *  Aa a a a.N
 */N
N
#a <a/a.a>N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a_a.a>N
#a <a/a.a>N
#a <a/a_a_a_a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a_a.a>N
#a <a/a.a>N
#a <a/a_a.a>N
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
#a <a/a_a.a>N
#a <a/a_a.a>N
#a <a/a_a.a>N
#a <a/a.a>N
#a <a/a_a.a>N
#a <a/a-a.a>N
#a <a/a_a.a>N
#a A_AN
#a <a/a.a>N
#aN
#a <a/a/a.a>N
#a "a.a"N
#a "a.a"N
N
#a "../../a/a.a"N
N
a a a_a *a_a_a;N
N
a a a_a_a(a a_a *a)N
{N
	a a_a *a = a_a_a;N
N
	a_a(A, a, 0);N
	a_a_a(a);N
}N
N
a A_A(a_a_a, a_a_a);N
N
/* A:N
 *	Aa a a a a /a a aN
 *	a a a.  Aa a a a a aN
 *	a a a a a a a.  Aa a a a a aN
 *	a a a a a a a a /a a a a.N
 *N
 *	Aa a a a a a a a a aN
 *	a /a a a a a a a a a a.N
 */N
N
a a_a {N
	a a *a;N
	a a;N
	a_a a;N
	a a a_a *a;N
	a a a_a *a;N
	a a_a a;N
};N
N
#a A(A, A, A, A, A) {			\N
	.a = (A),					\N
	.a  = a(A) - 0,			\N
	.a = A,					\N
	.a  = A,					\N
	.a  = A,					\N
	.a   = A,					\N
}N
N
#a A(A, A, a, a)	\N
	A(A, (A_A|(A)), &a, &a, {} )N
#a A(A, a_a)					\N
	A(A, (A_A|A_A),				\N
		&a_a_a_a_a, A,		\N
		{ .a_a_a = a_a } )N
#a A(A, A, a)				\N
	A(A, (A_A|(A)), A, &a, {})N
#a A(A, A, a)				\N
	A(A, (A_A|(A)), 			\N
		A, &a_a_a_a,	\N
		{ .a_a = a } )N
N
/*N
 * Aa a a a a a a a_a a, a a .N
 * a .. a.N
 */N
a a a a_a_a_a(a a a_a *a,N
	a a a)N
{N
	a a a;N
	a a a;N
N
	a = 0;N
	a (a = 0; a < a; ++a) {N
		a (A_A(a[a].a))N
			++a;N
	}N
N
	a a;N
}N
N
a a a_a_a(a a_a *a, a a *a)N
{N
	a a = -A;N
N
	a_a(a);N
	a (a->a) {N
		a_a_a(a->a, a);N
		a = 0;N
	}N
	a_a(a);N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a = -A;N
N
	a (a) {N
		a_a(a);N
		a (a->a) {N
			a_a_a(a->a, a);N
			a = 0;N
		}N
		a_a(a);N
		a_a_a(a);N
	}N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a = -A;N
N
	a (a) {N
		a = a_a_a(a, a);N
		a_a_a(a);N
	}N
	a a;N
}N
N
a a_a a_a_a_a(a a *a, a __a *a,N
				     a_a _a, a_a *a)N
{N
	a a_a *a;N
	a a_a *a;N
	a *a;N
	a a a = _a;N
	a a a_a, a_a, a_a, a_a;N
	a a a0, a0, a;N
	a a a;N
	a a;N
	a_a a;N
N
	A_A(*a < 0);N
N
	a = a_a_a(a_a(a));N
	a (!a)N
		a -A;N
	a = a_a_a(a);N
	a_a_a(a);N
	a (!a)N
		a 0;N
	/* Aa a a a a a a a a. */N
	a (!a->a_a) {N
		a = 0;N
		a a_a;N
	}N
N
	a = (a *)__a_a_a(A_A);N
	a (!a) {N
		a = -A;N
		a a_a;N
	}N
N
	a_a(&a->a_a);N
	a_a = a->a_a;N
	a_a = a->a_a;N
	a_a = a->a_a;N
	a_a = a->a_a;N
	a_a(&a->a_a);N
N
	A_A(a_a > a_a);N
	A_A(a_a > a_a);N
N
	a0 = a_a - a_a;N
	a0 = a_a - a_a;N
N
	/* Aa A. */N
	a (a0 == 0) {N
		a = 0;N
		a a_a_a;N
	}N
	/*N
	 * Aa a -- a a a a aN
	 * a a a a.N
	 */N
	a = a_a_a(a, a_a - 0, &a, 0, A_A);N
	a (a <= 0)N
		a a_a_a;N
N
	a = 0;N
N
	a (a == '\0') {N
		/* Aa a (a a a) a a A. */N
		a (a0 <= *a)N
			a a_a_a;N
N
		a = a_a + *a;N
		a = a0 - *a;N
		a (a > 0 && a > 0) {N
			a a _a;N
			a a_a;N
N
			_a = a0(a, a, A_A);N
			a_a = a_a_a(a, a, a, _a, A_A);N
			a (a_a < 0)N
				a = a_a;N
			a (a_a <= 0)N
				a a_a_a;N
N
			a (a_a_a(a, a, a_a)) {N
				a = -A;N
				a a_a_a;N
			}N
N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
		}N
	} a {N
		/*N
		 * Aa a (0 a) a A a aN
		 * a a A.N
		 */N
		a (a0 + a0 <= *a)N
			a a_a_a;N
		a (a0 <= *a)N
			a a_a;N
N
		a = a_a + *a;N
		a = a0 - *a;N
		a (a > 0 && a > 0) {N
			a a _a, a;N
			a a_a;N
			a a;N
N
			_a = a0(a, a, A_A);N
			a_a = a_a_a(a, a, a, _a, A_A);N
			a (a_a < 0)N
				a = a_a;N
			a (a_a <= 0)N
				a a_a_a;N
N
			/*N
			 * Aa a a a a a a AN
			 * a a a "a" a a a a a.N
			 */N
			a = a;N
			a = a(a, a_a);N
			a (a < a_a) {N
				a_a = a;N
				a = a;N
			}N
N
			a (a_a_a(a, a, a_a)) {N
				a = -A;N
				a a_a_a;N
			}N
N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
N
			a (a)N
				a a_a_a;N
		}N
a_a:N
		/*N
		 * Aa a (0 a) a A aN
		 * a a A.N
		 */N
		a (a0 <= *a) {N
			a = a_a + *a - a0;N
			a = a0 + a0 - *a;N
		} a {N
			a = a_a;N
			a = a0;N
		}N
		a (a > 0 && a > 0) {N
			a a _a, a;N
			a a_a;N
			a a;N
N
			_a = a0(a, a, A_A);N
			a_a = a_a_a(a, a, a, _a, A_A);N
			a (a_a < 0)N
				a = a_a;N
			a (a_a <= 0)N
				a a_a_a;N
N
			/* Aa A. */N
			a = a;N
			a = a(a, a_a);N
			a (a < a_a) {N
				a_a = a;N
				a = a;N
			}N
N
			a (a_a_a(a, a, a_a)) {N
				a = -A;N
				a a_a_a;N
			}N
N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
			a	-= a_a;N
			a	+= a_a;N
N
			a (a)N
				a a_a_a;N
		}N
a_a_a:N
		;N
	}N
N
a_a_a:N
	a_a((a a)a);N
a_a:N
	a(a);N
	a (a > 0)N
		*a += a;N
	a a;N
}N
N
a a a a_a a_a_a_a = {N
	.a	= a_a_a_a,N
	.a	= a_a_a,N
};N
N
a a a_a_a(a a_a *a, a a_a *a,N
			 a a *a, a a_a *a)N
{N
	a a_a *a = a_a(a, A_A_A_A);N
	a (a && !A_A(a)) {N
		a a a = 0;N
		a {N
			a += 0;N
		} a (a->a_a[a - 0] != 0); /* A_A */N
		a_a(a, a->a_a, a * a(a->a_a[0]));N
		a(a);N
		a 0;N
	} aN
		a A_A(a);N
}N
N
N
#a A_AN
/*N
 * Aa a a a a a a a a a-a-a-a a.N
 * Aa a a a.  Aa a a, a a a a.N
 */N
a a a_a_a(a a_a *a, a a_a *a,N
			  a a *a, a a_a *a)N
{N
	a a a;N
	a a[A_A_A];N
N
	a = a_a(a);N
N
	a (a && a_a_a(a, A_A_A_A)N
			&& !a_a_a(a, a))N
		a_a(a, "%a", a);N
	aN
		a_a(a, '0');N
N
	a 0;N
}N
#a /* A_A */N
N
a a a_a(a a_a *a)N
{N
	a a = a_a_a(&a->a->a_a_a);N
	a (a)N
		a a;N
	a (!a_a_a(a, A_A_A_A)) {N
		a_a(&a->a->a_a_a);N
		a -A;N
	}N
	a 0;N
}N
N
a a a_a(a a_a *a)N
{N
	a_a(&a->a->a_a_a);N
}N
N
#a A_AN
N
#a A_A_A_A	0N
N
a a a_a_a(a a_a *a, a a_a *a,N
			  a a *a, a a_a *a)N
{N
	a a_a a;N
	a a *a;N
	a a;N
	a a;N
N
	/*N
	 * Aa a a a a a a a a a a a aN
	 * a a a a a a a a; a a a a aN
	 * a a a, a a a a a a a a aN
	 * a a.N
	 * Aa a a a a a a a a a a a a aN
	 * a a a a a a a a a a a a; aN
	 * a a, a a a a a a a a aN
	 * a.N
	 * Aa, a a a a a a.N
	 */N
	a (!a_a_a(a->a, &a_a_a, A_A_A))N
		a -A;N
N
	a = a(A_A_A_A * a(*a), A_A);N
	a (!a)N
		a -A;N
N
	a.a_a	= 0;N
	a.a_a	= A_A_A_A;N
	a.a		= a;N
	a.a		= 0;N
N
	a = a_a(a);N
	a (!a) {N
		a_a_a_a(a, &a);N
N
		a (a = 0; a < a.a_a; a++) {N
			a_a(a, "[<%aA>] %aA\a",N
				   (a *)a[a], (a *)a[a]);N
		}N
		a_a(a);N
	}N
	a(a);N
N
	a a;N
}N
#aN
N
#a A_A_AN
/*N
 * Aa /a/A/aN
 */N
a a a_a_a(a a_a *a, a a_a *a,N
			      a a *a, a a_a *a)N
{N
	a (a(!a_a_a()))N
		a_a(a, "0 0 0\a");N
	aN
		a_a(a, "%a %a %a\a",N
		   (a a a)a->a.a_a_a,N
		   (a a a)a->a_a.a_a,N
		   a->a_a.a);N
N
	a 0;N
}N
#aN
N
#a A_AN
a a a_a_a(a a_a *a, a *a)N
{N
	a a;N
	a a *a = a->a;N
	a a_a *a = a_a_a(a);N
N
	a (!a)N
		a -A;N
	a_a(a, "Aa Aa a : a0.0\a");N
	a (a = 0; a < 0; a++) {N
		a a_a *a = &a->a_a[a];N
		a (a->a[0]) {N
			a a;N
			a_a(a, "%a %a %a",N
				   a->a, a->a, a->a);N
			a (a = 0; a < A_A; a++) {N
				a a a = a->a[a];N
				a (!a)N
					a;N
				a (a == A_A)N
					a;N
				a_a(a, " %a", (a *)a);N
			}N
			a_a(a, '\a');N
		}N
N
	}N
	a_a_a(a);N
	a 0;N
}N
N
a a a_a(a a *a, a a *a)N
{N
	a a_a(a, a_a_a, a);N
}N
N
a a_a a_a(a a *a, a a __a *a,N
			    a_a a, a_a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
N
	a (!a)N
		a -A;N
	a_a_a_a(a);N
	a_a_a(a);N
N
	a a;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
#aN
N
a a a_a_a(a a_a *a, a a_a *a,N
			  a a *a, a a_a *a)N
{N
	a a a = a_a + a_a_a;N
	a a a = 0;N
N
	a_a(&a_a);N
	a (a_a(a))N
		a = a_a(a, A, A, a) *N
						0 / a;N
	a_a(&a_a);N
	a_a(a, "%a\a", a);N
N
	a 0;N
}N
N
a a_a {N
	a a *a;N
	a a *a;N
};N
N
a a a a_a a[A_A] = {N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", "a"},N
	[A_A] = {"Aa a a", A},N
	[A_A] = {"Aa a a", A},N
	[A_A] = {"Aa a a", "a"},N
};N
N
/* Aa a a a a */N
a a a_a_a(a a_a *a, a a_a *a,N
			   a a *a, a a_a *a)N
{N
	a a a;N
	a a a;N
N
	a a a[A_A];N
N
	a (!a_a_a(a, &a))N
		a 0;N
	a(a, a->a->a, a(a a) * A_A);N
	a_a_a(a, &a);N
N
	/*N
	 * a a a aN
	 */N
       a_a(a, "%-0a %-0a %-0a %-0a\a",N
		  "Aa", "Aa Aa", "Aa Aa", "Aa");N
N
	a (a = 0; a < A_A; a++) {N
		a (a[a].a_a == A_A)N
			a_a(a, "%-0a %-0a ",N
				   a[a].a, "a");N
		aN
			a_a(a, "%-0a %-0a ",N
				   a[a].a, a[a].a_a);N
N
		a (a[a].a_a == A_A)N
			a_a(a, "%-0a ", "a");N
		aN
			a_a(a, "%-0a ", a[a].a_a);N
N
		a (a[a].a)N
			a_a(a, "%-0a\a", a[a].a);N
		aN
			a_a(a, '\a');N
	}N
N
	a 0;N
}N
N
#a A_A_A_AN
a a a_a_a(a a_a *a, a a_a *a,N
			    a a *a, a a_a *a)N
{N
	a a;N
	a a a[0], a, a;N
	a a;N
N
	a = a_a(a);N
	a (a)N
		a a;N
N
	a (a_a_a(a, &a, a, 0, &a, &a))N
		a_a(a, "a\a");N
	a a (a < 0)N
		a_a(a, "%a 0a%a 0a%a\a", a, a, a);N
	aN
		a_a(a,N
		       "%a 0a%a 0a%a 0a%a 0a%a 0a%a 0a%a 0a%a 0a%a\a",N
		       a,N
		       a[0], a[0], a[0], a[0], a[0], a[0],N
		       a, a);N
	a_a(a);N
N
	a 0;N
}N
#a /* A_A_A_A */N
N
/************************************************************************/N
/*                       Aa a a a a                        */N
/************************************************************************/N
N
/* a a */N
a a a_a_a_a(a a *a)N
{N
	a a_a *a;N
	a a = 0;N
	/* Aa a a a a'a a a a a a a a aN
	 * a a a a a a a a a a aN
	 * a.N
	 */N
	a = a_a_a(a);N
	a (a) {N
		a = a_a_a(a, A_A_A_A);N
		a_a_a(a);N
	}N
	a a;N
}N
N
a a_a(a a *a, a a *a)N
{N
	a a;N
	a a *a = a_a(a);N
N
	a (a->a_a & A_A)N
		a -A;N
N
	a = a_a_a(a, a);N
	a (a)N
		a a;N
N
	a_a(a, a);N
	a_a_a(a);N
	a 0;N
}N
N
/*N
 * Aa a a a a'a a/a a (a a_a_a=0)N
 * a a/a (a a_a_a=0)?N
 */N
a a a_a_a(a a_a *a,N
				 a a_a *a,N
				 a a_a_a)N
{N
	a (a->a_a < a_a_a)N
		a a;N
	a (a_a_a(a->a_a))N
		a a;N
	a a_a_a(a, A_A_A_A);N
}N
N
N
a a a_a_a(a a *a, a a)N
{N
	a a_a *a = a->a_a->a_a_a;N
	a a_a *a;N
	a a_a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
	a_a = a_a_a(a, a, 0);N
	a_a_a(a);N
N
	a (!a_a) {N
		a (a->a_a == 0) {N
			/*N
			 * Aa'a a a(), a(), a a()N
			 * a a a a.  Aa a aN
			 * a a a() a a, a a'a a aN
			 * a a a a.N
			 */N
			a -A;N
		}N
N
		a -A;N
	}N
	a a_a(a, a);N
}N
N
N
N
a a a a_a a_a_a_a = {N
	.a	= a_a,N
};N
N
a a a_a_a(a a_a *a, a *a)N
{N
	a a *a = a->a;N
	a a_a *a;N
	a a *a;N
	a a_a *a;N
	a a;N
N
	a = a->a_a->a_a_a;N
	a = a_a(a);N
	a = a_a_a(a, A_A);N
	a (!a)N
		a -A;N
N
	a = A_A(a)->a.a_a(a, a, a, a);N
N
	a_a_a(a);N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a(a, a_a_a, a);N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
N
a a_a *a_a_a(a a *a, a a a)N
{N
	a a_a *a = a_a_a(a);N
	a a_a *a = A_A(-A);N
N
	a (a) {N
		a = a_a(a, a | A_A_A);N
		a_a_a(a);N
N
		a (!A_A_A_A(a)) {N
			/* a a a_a a'a a a */N
			a_a(&a->a_a);N
			/* a a a a a a */N
			a(a);N
		}N
	}N
N
	a a;N
}N
N
a a __a_a(a a *a, a a *a, a a a)N
{N
	a a_a *a = a_a_a(a, a);N
N
	a (A_A(a))N
		a A_A(a);N
N
	a->a_a = a;N
	a 0;N
}N
N
a a a_a(a a *a, a a *a)N
{N
	a a = __a_a(a, a, A_A_A);N
N
	/* A a a a a_a, a a a a-a-a */N
	a->a_a |= A_A_A;N
N
	a a;N
}N
N
a a_a a_a(a a *a, a __a *a,N
			a_a a, a_a *a, a a)N
{N
	a a_a *a = a->a_a;N
	a a a = *a;N
	a_a a;N
	a *a;N
	a a a;N
N
	a (!a)N
		a 0;N
N
	a = (a *)__a_a_a(A_A);N
	a (!a)N
		a -A;N
N
	a = 0;N
	a (!a_a_a_a(&a->a_a))N
		a a;N
N
	/* Aa a a a A_A a a a a? */N
	a = A_A;N
	a (a)N
		a |= A_A;N
N
	a (a > 0) {N
		a a_a = a_a(a, a, A_A);N
N
		a (a && a_a_a(a, a, a_a)) {N
			a = -A;N
			a;N
		}N
N
		a_a = a_a_a(a, a, a, a_a, a);N
		a (!a_a) {N
			a (!a)N
				a = -A;N
			a;N
		}N
N
		a (!a && a_a_a(a, a, a_a)) {N
			a = -A;N
			a;N
		}N
N
		a += a_a;N
		a += a_a;N
		a += a_a;N
		a -= a_a;N
	}N
	*a = a;N
N
	a(a);N
a:N
	a_a((a a) a);N
	a a;N
}N
N
a a_a a_a(a a *a, a __a *a,N
			a_a a, a_a *a)N
{N
	a a_a(a, a, a, a, 0);N
}N
N
a a_a a_a(a a *a, a a __a *a,N
			 a_a a, a_a *a)N
{N
	a a_a(a, (a __a*)a, a, a, 0);N
}N
N
a_a a_a(a a *a, a_a a, a a)N
{N
	a (a) {N
	a 0:N
		a->a_a = a;N
		a;N
	a 0:N
		a->a_a += a;N
		a;N
	a:N
		a -A;N
	}N
	a_a_a_a();N
	a a->a_a;N
}N
N
a a a_a(a a *a, a a *a)N
{N
	a a_a *a = a->a_a;N
	a (a)N
		a(a);N
	a 0;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
a a a_a(a a *a, a a *a)N
{N
	a __a_a(a, a, A_A_A);N
}N
N
a a_a a_a(a a *a, a __a *a,N
			a_a a, a_a *a)N
{N
	a *a;N
	a a a = *a;N
	a a = 0;N
	a a_a *a = a->a_a;N
	a a a_a, a_a;N
N
	/* Aa a a a a a a a a a. */N
	a (!a || !a->a_a)N
		a 0;N
N
	a = (a *)__a_a_a(A_A);N
	a (!a)N
		a -A;N
N
	a = 0;N
	a (!a_a_a_a(&a->a_a))N
		a a;N
N
	a_a(&a->a_a);N
	a_a = a->a_a;N
	a_a = a->a_a;N
	a_a(&a->a_a);N
N
	a (a > 0) {N
		a_a a_a, a_a;N
		a a;N
N
		a (a >= (a_a - a_a))N
			a;N
N
		a_a = a_a - (a_a + a);N
N
		a_a = a_a(a_a, A_A, a);N
		a_a = a(a_a, a_a);N
N
		a = a_a_a(a, (a_a + a), a, a_a, A_A);N
N
		a (a <= 0) {N
			a = a;N
			a;N
		}N
N
		a (a_a_a(a, a, a)) {N
			a = -A;N
			a;N
		}N
N
		a += a;N
		a += a;N
		a += a;N
		a -= a;N
	}N
	*a = a;N
	a(a);N
N
a:N
	a_a((a a) a);N
	a a;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a_a,N
	.a	= a_a,N
};N
N
a a_a a_a_a(a a *a, a __a *a, a_a a,N
			    a_a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a[A_A];N
	a a_a = A_A_A;N
	a_a a;N
	a a a;N
	a a = 0;N
N
	a (!a)N
		a -A;N
	a (a_a_a(a, &a)) {N
		a (a->a->a_a_a == A_A_A_A) {N
			a_a = A_A_A;N
		} a {N
			a (a->a->a_a_a < 0)N
				a = -0;N
			a_a = a(a * a->a->a_a_a *N
				-A_A, A_A_A_A) /N
				A_A_A_A * a;N
		}N
		a_a_a(a, &a);N
	}N
	a_a_a(a);N
	a = a(a, a(a), "%a\a", a_a);N
	a a_a_a_a(a, a, a, a, a);N
}N
N
/*N
 * /a/a/a_a a a a a a a aN
 * a.  Aa a a a a a a_a_a, a a aN
 * a a: a_a a a a a_a_a a a.N
 * Aa a a a_a a a a a a a_a_a.N
 * Aa a a a a a a_a a a a a aN
 * a a a.N
 *N
 * a_a a a a a a a a a a.N
 */N
a a_a a_a_a(a a *a, a a __a *a,N
			     a_a a, a_a *a)N
{N
	a a_a *a;N
	a a[A_A];N
	a a_a;N
	a a a;N
	a a;N
N
	a(a, 0, a(a));N
	a (a > a(a) - 0)N
		a = a(a) - 0;N
	a (a_a_a(a, a, a)) {N
		a = -A;N
		a a;N
	}N
N
	a = a(a(a), 0, &a_a);N
	a (a)N
		a a;N
	a ((a_a < A_A_A || a_a > A_A_A) &&N
	     a_a != A_A) {N
		a = -A;N
		a a;N
	}N
N
	a = a_a_a(a_a(a));N
	a (!a) {N
		a = -A;N
		a a;N
	}N
N
	a_a(a);N
	a (!a->a) {N
		a = -A;N
		a a_a_a;N
	}N
N
	a (!a_a_a(a, &a)) {N
		a = -A;N
		a a_a_a;N
	}N
N
	/*N
	 * Aa /a/a/a_a_a a a a a aN
	 * a a a a.N
	 */N
	a (a_a == A_A_A)N
		a_a = A_A_A_A;N
	aN
		a_a = (a_a * A_A_A_A) / -A_A;N
N
	a (a_a < a->a->a_a_a &&N
	    !a(A_A_A)) {N
		a = -A;N
		a a_a;N
	}N
N
	/*N
	 * /a/a/a_a a a a a a, a a a aN
	 * /a/a/a_a_a a.N
	 */N
	a_a_a("%a (%a): /a/%a/a_a a a, a a /a/%a/a_a_a a.\a",N
		  a->a, a_a_a(a), a_a_a(a),N
		  a_a_a(a));N
N
	a->a->a_a_a = a_a;N
	a_a_a_a_a(a);N
a_a:N
	a_a_a(a, &a);N
a_a_a:N
	a_a(a);N
	a_a_a(a);N
a:N
	a a < 0 ? a : a;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a_a,N
	.a		= a_a_a,N
};N
N
a a_a a_a_a_a(a a *a, a __a *a,N
					a_a a, a_a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a[A_A];N
	a a_a_a = A_A_A_A;N
	a a a;N
	a_a a;N
N
	a (!a)N
		a -A;N
	a (a_a_a(a, &a)) {N
		a_a_a = a->a->a_a_a;N
		a_a_a(a, &a);N
	}N
	a_a_a(a);N
	a = a(a, a(a), "%a\a", a_a_a);N
	a a_a_a_a(a, a, a, a, a);N
}N
N
a a_a a_a_a_a(a a *a, a a __a *a,N
					a_a a, a_a *a)N
{N
	a a_a *a;N
	a a[A_A];N
	a a a;N
	a a_a_a;N
	a a;N
N
	a(a, 0, a(a));N
	a (a > a(a) - 0)N
		a = a(a) - 0;N
	a (a_a_a(a, a, a)) {N
		a = -A;N
		a a;N
	}N
N
	a = a(a(a), 0, &a_a_a);N
	a (a)N
		a a;N
	a (a_a_a < A_A_A_A ||N
			a_a_a > A_A_A_A) {N
		a = -A;N
		a a;N
	}N
N
	a = a_a_a(a_a(a));N
	a (!a) {N
		a = -A;N
		a a;N
	}N
N
	a_a(a);N
	a (!a->a) {N
		a = -A;N
		a a_a_a;N
	}N
N
	a (!a_a_a(a, &a)) {N
		a = -A;N
		a a_a_a;N
	}N
N
	a ((a)a_a_a < a->a->a_a_a_a &&N
			!a(A_A_A)) {N
		a = -A;N
		a a_a;N
	}N
N
	/* Aa a a a A a a a. Aa'a a a. */N
	a (a_a_a >= 0) {N
		a (!a(a->a, "a.AaAa") ||N
		    !a(a->a, "a.a")) {N
			a (a != a_a_a)N
				a_a(&a_a_a);N
			a_a_a = a;N
			a_a_a(a);N
			a_a(&a_a_a);N
		}N
	}N
N
	a->a->a_a_a = (a)a_a_a;N
	a (a_a_a(a, A_A_A))N
		a->a->a_a_a_a = (a)a_a_a;N
	a_a_a_a_a(a);N
N
a_a:N
	a_a_a(a, &a);N
a_a_a:N
	a_a(a);N
	a_a_a(a);N
a:N
	a a < 0 ? a : a;N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a,N
};N
N
#a A_AN
#a A 0N
a a_a a_a_a(a a * a, a __a * a,N
				  a_a a, a_a *a)N
{N
	a a * a = a_a(a);N
	a a_a *a = a_a_a(a);N
	a_a a;N
	a a[A];N
N
	a (!a)N
		a -A;N
	a = a(a, A, "%a",N
			   a_a(a->a_a->a_a,N
				     a_a_a(a)));N
	a_a_a(a);N
	a a_a_a_a(a, a, a, a, a);N
}N
N
a a_a a_a_a(a a * a, a a __a * a,N
				   a_a a, a_a *a)N
{N
	a a * a = a_a(a);N
	a_a a;N
	a_a a;N
	a a;N
N
	a_a_a();N
	a (a != a_a(a_a(a), A_A)) {N
		a_a_a();N
		a -A;N
	}N
	a_a_a();N
N
	a (*a != 0) {N
		/* Aa a a. */N
		a -A;N
	}N
N
	a = a0_a_a(a, a, 0, &a);N
	a (a < 0)N
		a a;N
N
	/* a a a a a A a a? */N
	a (a == A_A_A) {N
		a = A_A;N
	} a {N
		a = a_a(a->a_a->a_a, a);N
		a (!a_a(a))N
			a -A;N
	}N
N
	a = a_a_a(a);N
	a (a < 0)N
		a a;N
	a a;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a_a,N
	.a		= a_a_a,N
};N
N
a a_a a_a_a(a a * a, a __a * a,N
				  a_a a, a_a *a)N
{N
	a a * a = a_a(a);N
	a a_a *a = a_a_a(a);N
	a_a a;N
	a a[A];N
N
	a (!a)N
		a -A;N
	a = a(a, A, "%a",N
				a_a_a(a));N
	a_a_a(a);N
	a a_a_a_a(a, a, a, a, a);N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a_a,N
};N
#aN
N
#a A_A_AN
a a_a a_a_a_a(a a * a, a __a * a,N
				      a_a a, a_a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a[A_A];N
	a_a a;N
	a a_a_a;N
N
	a (!a)N
		a -A;N
	a_a_a = a->a_a_a;N
	a_a_a(a);N
N
	a = a(a, a(a), "%a\a", a_a_a);N
N
	a a_a_a_a(a, a, a, a, a);N
}N
N
a a_a a_a_a_a(a a * a,N
			a a __a * a, a_a a, a_a *a)N
{N
	a a_a *a;N
	a a[A_A];N
	a a_a_a;N
	a a;N
N
	a (!a(A_A_A))N
		a -A;N
	a(a, 0, a(a));N
	a (a > a(a) - 0)N
		a = a(a) - 0;N
	a (a_a_a(a, a, a))N
		a -A;N
	a = a(a(a), 0, &a_a_a);N
	a (a < 0)N
		a a;N
	a (a_a_a < 0 || a_a_a > 0)N
		a -A;N
N
	a = a_a_a(a_a(a));N
	a (!a)N
		a -A;N
	a->a_a_a = a_a_a;N
	a_a_a(a);N
N
	a a;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a_a,N
};N
#aN
N
N
#a A_A_AN
/*N
 * Aa a a a a a-a a:N
 */N
a a a_a(a a_a *a, a *a)N
{N
	a a *a = a->a;N
	a a_a *a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
	a_a_a_a(a, a);N
N
	a_a_a(a);N
N
	a 0;N
}N
N
a a_aN
a_a(a a *a, a a __a *a,N
	    a_a a, a_a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
	a_a_a_a(a);N
N
	a_a_a(a);N
N
	a a;N
}N
N
a a a_a(a a *a, a a *a)N
{N
	a a_a(a, a_a, a);N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
#aN
N
#a A_A_AN
/*N
 * Aa a a a a:N
 */N
a a a_a_a(a a_a *a, a *a)N
{N
	a a *a = a->a;N
	a a_a *a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
	a_a_a_a_a(a, a);N
N
	a_a_a(a);N
N
	a 0;N
}N
N
a a_aN
a_a_a(a a *a, a a __a *a,N
	    a_a a, a_a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
	a a[A_A];N
	a a;N
	a a;N
N
	a(a, 0, a(a));N
	a (a > a(a) - 0)N
		a = a(a) - 0;N
	a (a_a_a(a, a, a))N
		a -A;N
N
	a = a(a(a), 0, &a);N
	a (a < 0)N
		a a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
N
	a = a_a_a_a_a(a, a);N
	a (a)N
		a = a;N
N
	a_a_a(a);N
N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a;N
N
	a = a_a(a, a_a_a, A);N
	a (!a) {N
		a a_a *a = a->a_a;N
N
		a->a = a;N
	}N
	a a;N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a,N
	.a		= a_a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
#a /* A_A_A */N
N
a a_a a_a(a a *a, a a __a *a,N
				a_a a, a_a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
	a a[A_A_A];N
	a a_a a = a(a) - 0;N
N
	a(a, 0, a(a));N
	a (a_a_a(a, a, a > a ? a : a))N
		a -A;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
N
	a (a_a_a(a, a))N
		a_a_a(a, a);N
	aN
		a = -A;N
N
	a_a_a(a);N
N
	a a;N
}N
N
a a a_a(a a_a *a, a *a)N
{N
	a a *a = a->a;N
	a a_a *a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
N
	a_a(a);N
	a_a(a, "%a\a", a->a);N
	a_a(a);N
N
	a_a_a(a);N
N
	a 0;N
}N
N
a a a_a(a a *a, a a *a)N
{N
	a a_a(a, a_a, a);N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
a a a_a_a(a a *a, a a *a_a)N
{N
	a a_a *a;N
	a a *a_a;N
N
	a = a_a_a(a_a(a));N
	a (!a)N
		a -A;N
	a_a = a_a_a_a(a);N
	a_a_a(a);N
	a (a_a) {N
		*a_a = a_a->a_a;N
		a_a(&a_a->a_a);N
		a(a_a);N
		a 0;N
	} aN
		a -A;N
}N
N
a a a *a_a_a_a(a a *a, a **a)N
{N
	a a *a = a_a(a);N
	a a a;N
	a a = -A;N
N
	/* Aa a a a a a a a a a? */N
	a (!a_a_a_a(a))N
		a a;N
N
	a = A_A(a)->a.a_a_a(a, &a);N
	a (a)N
		a a;N
N
	a_a_a(&a);N
	a A;N
a:N
	a A_A(a);N
}N
N
a a a_a_a(a a *a, a __a *a, a a)N
{N
	a *a = (a*)__a_a_a(A_A);N
	a *a;N
	a a;N
N
	a (!a)N
		a -A;N
N
	a = a_a(a, a, A_A);N
	a = A_A(a);N
	a (A_A(a))N
		a a;N
	a = a + A_A - 0 - a;N
N
	a (a > a)N
		a = a;N
	a (a_a_a(a, a, a))N
		a = -A;N
 a:N
	a_a((a a)a);N
	a a;N
}N
N
a a a_a_a(a a * a, a __a * a, a a)N
{N
	a a = -A;N
	a a *a = a_a(a);N
	a a a;N
N
	/* Aa a a a a a a a a a? */N
	a (!a_a_a_a(a))N
		a a;N
N
	a = A_A(a)->a.a_a_a(a, &a);N
	a (a)N
		a a;N
N
	a = a_a_a(&a, a, a);N
	a_a(&a);N
a:N
	a a;N
}N
N
a a a_a a_a_a_a_a = {N
	.a	= a_a_a,N
	.a_a	= a_a_a_a,N
	.a	= a_a,N
};N
N
N
/* a a a */N
N
a a *a_a_a_a(a a_a * a, a a_a *a)N
{N
	a a * a;N
	a a_a *a;N
	a a a *a;N
N
	/* Aa a a a a */N
N
	a = a_a(a);N
	a (!a)N
		a a;N
N
	/* Aa a */N
	a = A_A(a);N
	a->a_a = a_a_a();N
	a->a_a = a->a_a = a->a_a = A_A;N
	a->a_a = &a_a_a_a;N
N
	/*N
	 * a a a a a.N
	 */N
	a->a = a_a_a(a, A_A);N
	a (!a->a)N
		a a_a;N
N
	a (a_a(a)) {N
		a_a_a();N
		a = __a_a(a);N
		a->a_a = a->a;N
		a->a_a = a->a;N
		a_a_a();N
	}N
	a_a_a_a(a, a);N
N
a:N
	a a;N
N
a_a:N
	a(a);N
	a A;N
}N
N
a a_a(a a *a, a a *a, a a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
	a a a *a;N
	a a_a *a = a->a_a->a_a_a;N
N
	a_a(a, a);N
N
	a_a_a();N
	a->a = A_A_A;N
	a->a = A_A_A;N
	a = a_a(a_a(a), A_A);N
	a (a) {N
		a (!a_a_a(a, a, 0)) {N
			a_a_a();N
			/*N
			 * Aa a'a a a a A a,N
			 * a a a a() a a a().N
			 */N
			a -A;N
		}N
		a ((a->a_a == (A_A|A_A|A_A)) ||N
		    a_a(a)) {N
			a = __a_a(a);N
			a->a = a->a;N
			a->a = a->a;N
		}N
	}N
	a_a_a();N
	a 0;N
}N
N
/* a a */N
N
/*N
 *	Aa a: a a a a a a a a aN
 * a. Aa a a, a, a a a a - a a aN
 * a a a a a a a.N
 *N
 * Aa a a'a a a a a a a a aN
 * a a a(), a.N
 *N
 * Aa a /a/a/a a a a a a a a aN
 * a a a a a /a a a a /a/a.  AaN
 * /a/a/a a a a a a a a aN
 * a a /a/a.  Aa a a a a /a a A aN
 * a a a a a a a a a a aN
 * a.N
 */N
a a_a(a a *a, a a a)N
{N
	a a *a;N
	a a_a *a;N
	a a a *a;N
N
	a (a & A_A)N
		a -A;N
N
	a = a_a(a);N
	a = a_a_a(a);N
N
	a (a) {N
		a ((a->a_a == (A_A|A_A|A_A)) ||N
		    a_a(a)) {N
			a_a_a();N
			a = __a_a(a);N
			a->a_a = a->a;N
			a->a_a = a->a;N
			a_a_a();N
		} a {N
			a->a_a = A_A_A;N
			a->a_a = A_A_A;N
		}N
		a->a_a &= ~(A_A | A_A);N
		a_a_a_a(a, a);N
		a_a_a(a);N
		a 0;N
	}N
	a 0;N
}N
N
a a a a_a_a_a(a a *a)N
{N
	a !a_a(a)->a[A_A].a;N
}N
N
a a_a_a(a a a *a)N
{N
	/* Aa a a a a a?N
	 * Aa a, a a'a a a a a a a a,N
	 * a a a.N
	 */N
	a a_a_a_a(a_a(a));N
}N
N
a a a_a a_a_a =N
{N
	.a_a	= a_a,N
	.a_a	= a_a_a,N
};N
N
/* Aa */N
N
/*N
 * Aa a a a.N
 *N
 * Aa a a a a a a a a a a aN
 * a a a a a.N
 *N
 * Aa a a a a a a a a a, a aN
 * a a a a a a a a a.  Aa a a aN
 * a a a a a a a a a a a aN
 * a a a a a a a a a aN
 * a a.N
 */N
a a_a_a(a a *a, a a_a *a,N
	a a *a, a a,N
	a_a a, a a_a *a, a a *a)N
{N
	a a *a, *a = a->a_a.a;N
	a a a = A_A(a, a);N
	a a *a;N
	a a;N
	a_a a;N
N
	a = a_a_a_a(a, &a);N
	a (!a) {N
		a = a_a(a, &a);N
		a (!a)N
			a a_a;N
		a (a(a_a(a), a, a, a) < 0) {N
			a(a);N
			a a_a;N
		}N
	}N
	a = a_a(a);N
	a = a->a_a;N
	a = a->a_a >> 0;N
	a(a);N
	a a_a(a, a, a, a, a);N
N
a_a:N
	a a_a(a, a, a, 0, A_A);N
}N
N
/*N
 * a_a_a_a - a a a a a a a aN
 * a a a a a a a.N
 */N
a a a_a_a_a(a a *a,N
			     a a *a, a a *a)N
{N
	a a *a = a->a_a.a;N
	a a a a, a;N
	a a a;N
N
	a = _a_a(a, 0, &a);N
	a (a & A_A)N
		a -A;N
	a (a != (a a)a)N
		a -A;N
	a += a;N
N
	a (*a != '-')N
		a -A;N
	a++;N
N
	a = _a_a(a, 0, &a);N
	a (a & A_A)N
		a -A;N
	a (a != (a a)a)N
		a -A;N
	a += a;N
N
	a (*a != '\0')N
		a -A;N
N
	*a = a;N
	*a = a;N
N
	a 0;N
}N
N
a a a_a_a_a(a a *a, a a a)N
{N
	a a a_a, a_a;N
	a a_a_a = a;N
	a a_a *a = A;N
	a a_a *a;N
	a a a *a;N
	a a *a;N
	a a = 0;N
N
	a (a & A_A)N
		a -A;N
N
	a = a_a(a);N
	a = a_a_a(a);N
	a (!a)N
		a a_a;N
N
	a = a_a(a, A_A_A_A);N
	a (A_A_A_A(a))N
		a a;N
N
	a (!a_a_a_a(a, &a_a, &a_a)) {N
		a_a(&a->a_a);N
		a_a_a = !!a_a_a(a, a_a, a_a);N
		a_a(&a->a_a);N
	}N
N
	a(a);N
N
	a (a_a_a) {N
		a (a_a(a)) {N
			a_a_a();N
			a = __a_a(a);N
			a->a_a = a->a;N
			a->a_a = a->a;N
			a_a_a();N
		} a {N
			a->a_a = A_A_A;N
			a->a_a = A_A_A;N
		}N
		a_a_a_a(a, a);N
		a = 0;N
	}N
N
a:N
	a_a_a(a);N
N
a_a:N
	a a;N
}N
N
a a a a_a a_a_a_a_a = {N
	.a_a	= a_a_a_a,N
	.a_a	= a_a_a,N
};N
N
a a a_a_a_a_a(a a *a, a a *a)N
{N
	a a a_a, a_a;N
	a a_a_a *a;N
	a a_a *a;N
	a a_a *a;N
	a a;N
N
	a = -A;N
	a = a_a_a(a_a(a));N
	a (!a)N
		a a;N
N
	a = a_a_a(a);N
	a_a_a(a);N
	a (!a)N
		a a;N
N
	a = a_a_a_a(a, &a_a, &a_a);N
	a (a)N
		a a_a;N
N
	a = -A;N
	a_a(&a->a_a);N
	a = a_a_a(a, a_a, a_a);N
	a (a && a->a_a) {N
		*a = a->a_a->a_a;N
		a_a(a);N
		a = 0;N
	}N
	a_a(&a->a_a);N
N
a_a:N
	a(a);N
a:N
	a a;N
}N
N
a a_a_a {N
	a_a		a;N
	a a	a;N
	a a	a[0*a(a)+0]; /* a: %a-%a\0 */N
};N
N
/*N
 * Aa a A_A_A a a a a, a a a a a aN
 * a a a a a a a a a a a aN
 * a a a a a a.N
 */N
a a a *N
a_a_a_a_a(a a *a, a **a)N
{N
	a (!a(A_A_A))N
		a A_A(-A);N
N
	a a_a_a_a(a, A);N
}N
N
/*N
 * Aa a a_a_a_a_a a a a_a()N
 */N
a a a a_a a_a_a_a_a_a = {N
	.a	= a_a_a,N
	.a_a	= a_a_a_a_a,N
	.a	= a_a,N
};N
N
a aN
a_a_a_a(a a *a, a a *a,N
			   a a_a *a, a a *a)N
{N
	a_a a = (a_a)(a a)a;N
	a a_a *a;N
	a a *a;N
N
	a = a_a_a_a(a->a_a, a);N
	a (!a)N
		a -A;N
N
	a = A_A(a);N
	a->a.a_a_a = a_a_a_a_a;N
N
	a->a_a = &a_a_a_a_a_a;N
	a->a_a = 0;N
	a->a_a = A_A;N
N
	a (a & A_A)N
		a->a_a |= A_A;N
	a (a & A_A)N
		a->a_a |= A_A;N
N
	a_a_a_a(a, &a_a_a_a_a);N
	a_a(a, a);N
N
	a 0;N
}N
N
a a a *a_a_a_a(a a *a,N
		a a *a, a a a)N
{N
	a a a_a, a_a;N
	a a_a_a *a;N
	a a_a *a;N
	a a;N
	a a_a *a;N
N
	a = -A;N
	a = a_a_a(a);N
	a (!a)N
		a a;N
N
	a = -A;N
	a (!a_a_a(a, A_A_A_A))N
		a a_a_a;N
N
	a = -A;N
	a (a_a_a_a(a, &a_a, &a_a))N
		a a_a_a;N
N
	a = a_a_a(a);N
	a (!a)N
		a a_a_a;N
N
	a_a(&a->a_a);N
	a = a_a_a(a, a_a, a_a);N
	a (!a)N
		a a_a_a;N
N
	a (a->a_a)N
		a = a_a_a_a(a, a, a,N
				(a *)(a a)a->a_a->a_a);N
N
a_a_a:N
	a_a(&a->a_a);N
	a(a);N
a_a_a:N
	a_a_a(a);N
a:N
	a A_A(a);N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a_a,N
	.a	= a_a_a,N
	.a	= a_a,N
};N
N
a aN
a_a_a_a(a a *a, a a_a *a)N
{N
	a a_a_a *a;N
	a a_a *a;N
	a a_a *a;N
	a a a_a, a, a;N
	a a_a *a = A;N
	a a_a_a a;N
	a a_a_a *a;N
	a a;N
N
	a = -A;N
	a = a_a_a(a_a(a));N
	a (!a)N
		a a;N
N
	a = -A;N
	a (!a_a_a(a, A_A_A_A))N
		a a_a_a;N
N
	a = 0;N
	a (!a_a_a(a, a))N
		a a_a_a;N
N
	a = a_a_a(a);N
	a (!a)N
		a a_a_a;N
	a_a(&a->a_a);N
N
	a_a = 0;N
N
	/*N
	 * Aa a a a a:N
	 *N
	 *  0) Aa a a a a a a_a aN
	 *  0) Aa a_a a a aN
	 *N
	 * a a a a a, a a()N
	 * a a a a_a a a a_a().N
	 */N
N
	a (a = a->a, a = 0; a; a = a->a_a) {N
		a (a->a_a && ++a > a->a)N
			a_a++;N
	}N
N
	a (a_a) {N
		a = a_a_a(a(a), a_a,N
					A_A);N
		a (!a || a_a_a(a, 0, a_a,N
						A_A)) {N
			a = -A;N
			a (a)N
				a_a_a(a);N
			a_a(&a->a_a);N
			a(a);N
			a a_a_a;N
		}N
		a (a = 0, a = a->a, a = 0; a;N
				a = a->a_a) {N
			a (!a->a_a)N
				a;N
			a (++a <= a->a)N
				a;N
N
			a.a = a->a_a->a_a;N
			a.a = a(a.a,N
					a(a.a), "%a-%a",N
					a->a_a, a->a_a);N
			a (a_a_a(a, a++, &a, A_A))N
				A();N
		}N
	}N
	a_a(&a->a_a);N
N
	a (a = 0; a < a_a; a++) {N
		a = a_a_a(a, a);N
		a (!a_a_a(a, a,N
				      a->a, a->a,N
				      a_a_a_a,N
				      a,N
				      (a *)(a a)a->a))N
			a;N
		a->a++;N
	}N
	a (a)N
		a_a_a(a);N
	a(a);N
N
a_a_a:N
	a_a_a(a);N
a:N
	a a;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a_a,N
	.a		= a_a,N
};N
N
a a_a {N
	a a *a;N
	a a_a *a;N
	a a_a *a;N
	a a_a *a;N
	a a a;N
};N
N
a a *a_a(a a_a *a, a_a *a)N
{N
	a a_a *a = a->a;N
N
	a->a = a_a_a(a->a, A_A);N
	a (!a->a)N
		a A_A(-A);N
N
	a->a = a_a_a(a->a, &a->a);N
	a (!a->a)N
		a A_A(-A);N
N
	a a_a_a(&a->a->a->a_a, *a);N
}N
N
a a *a_a(a a_a *a, a *a, a_a *a)N
{N
	a a_a *a = a->a;N
	a a_a_a(a, &a->a->a->a_a, a);N
}N
N
a a a_a(a a_a *a, a *a)N
{N
	a a_a *a = a->a;N
N
	a (a->a) {N
		a_a_a(a->a, &a->a);N
		a->a = A;N
	}N
N
	a (a->a) {N
		a_a_a(a->a);N
		a->a = A;N
	}N
}N
N
a a a_a(a a_a *a, a *a)N
{N
	a a_a *a;N
	a a_a *a = a->a;N
	a a;N
	a a a * a a[] = {N
		[A_A] = "a",N
		[A_A] = "a",N
		[A_A] = "a",N
	};N
N
	a = a_a((a a_a *)a, a a_a, a);N
	a = a->a_a_a;N
N
	a_a(a, "A: %a\a", a->a_a);N
	a_a(a, "a: %a/%a\a",N
		   a->a->a.a_a,N
		   a->a->a.a_a.a_a);N
	a_a(a, "a: %a/%a.%a\a",N
		   a[a & ~A_A_A],N
		   (a & A_A_A) ? "a" : "a",N
		   a_a_a(a->a_a, a->a));N
	a_a(a, "AaA: %a\a", a->a_a);N
N
	a 0;N
}N
N
a a a a_a a_a_a_a = {N
	.a	= a_a,N
	.a	= a_a,N
	.a	= a_a,N
	.a	= a_a,N
};N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a *a;N
N
	a = __a_a_a(a, &a_a_a_a,N
			a(a a_a));N
	a (!a)N
		a -A;N
N
	a->a = a_a(a);N
	a->a = a->a_a->a_a_a;N
	a 0;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a_a,N
};N
N
a a_a a_a_a(a a *a, a a __a *a,N
					a_a a, a_a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
	a0 a_a;N
	a a;N
N
	a = a_a_a(a, a, 0, &a_a);N
	a (a < 0)N
		a a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
N
	a (a != a) {N
		a (!a(A_A_A)) {N
			a = -A;N
			a a;N
		}N
N
		a = a_a_a(a);N
		a (a) {N
			a = a;N
			a a;N
		}N
	}N
N
	a_a(a);N
	a (a_a == 0)N
		a->a_a_a = a->a_a_a_a;N
	aN
		a->a_a_a = a_a;N
	a_a(a);N
N
a:N
	a_a_a(a);N
N
	a a;N
}N
N
a a a_a_a(a a_a *a, a *a)N
{N
	a a *a = a->a;N
	a a_a *a;N
	a a = 0;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
N
	a (a != a) {N
N
		a (!a(A_A_A)) {N
			a = -A;N
			a a;N
		}N
		a = a_a_a(a);N
		a (a)N
			a a;N
	}N
N
	a_a(a);N
	a_a(a, "%a\a", a->a_a_a);N
	a_a(a);N
N
a:N
	a_a_a(a);N
N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a(a, a_a_a, a);N
}N
N
a a a a_a a_a_a_a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a,N
	.a		= a_a_a,N
	.a		= a_a,N
	.a	= a_a,N
};N
N
a a a_a_a(a a *a,N
	a a *a, a a_a *a, a a *a)N
{N
	a a a_a *a = a;N
	a a *a;N
	a a_a *a;N
N
	a = a_a_a_a(a->a_a, a);N
	a (!a)N
		a a;N
N
	a = A_A(a);N
	a->a_a = a->a;N
	a (A_A(a->a_a))N
		a_a(a, 0);	/* Aa a a a a a */N
	a (a->a)N
		a->a_a = a->a;N
	a (a->a)N
		a->a_a = a->a;N
	a->a = a->a;N
	a_a_a_a(a, &a_a_a);N
	a_a(a, a);N
	/* Aa a a a a a a a a a a a */N
	a (a_a(a, 0))N
		a 0;N
a:N
	a -A;N
}N
N
a a a *a_a_a(a a *a, N
					 a a *a,N
					 a a a_a *a,N
					 a a a)N
{N
	a a;N
	a a_a *a = a_a_a(a);N
	a a a_a *a, *a;N
N
	a = -A;N
N
	a (!a)N
		a a_a_a;N
N
	/*N
	 * Aa, a a a a. Aa a a a. Aa'a aN
	 * a a a /a/<a>/ a a a a.N
	 */N
	a = &a[a - 0];N
	a (a = a; a <= a; a++) {N
		a (a->a != a->a_a.a)N
			a;N
		a (!a(a->a_a.a, a->a, a->a))N
			a;N
	}N
	a (a > a)N
		a a;N
N
	a = a_a_a(a, a, a, a);N
a:N
	a_a_a(a);N
a_a_a:N
	a A_A(a);N
}N
N
a a a_a_a(a a *a, a a_a *a,N
		a a a_a *a, a a a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a a_a *a;N
N
	a (!a)N
		a -A;N
N
	a (!a_a_a(a, a))N
		a a;N
N
	a (a->a >= a + 0)N
		a a;N
N
	a (a = a + (a->a - 0); a <= a + a - 0; a++) {N
		a (!a_a_a(a, a, a->a, a->a,N
				a_a_a, a, a))N
			a;N
		a->a++;N
	}N
a:N
	a_a_a(a);N
	a 0;N
}N
N
#a A_AN
a a_a a_a_a_a(a a * a, a __a * a,N
				  a_a a, a_a *a)N
{N
	a a * a = a_a(a);N
	a *a = A;N
	a_a a;N
	a a_a *a = a_a_a(a);N
N
	a (!a)N
		a -A;N
N
	a = a_a(a,N
				      (a*)a->a_a.a->a_a.a,N
				      &a);N
	a_a_a(a);N
	a (a > 0)N
		a = a_a_a_a(a, a, a, a, a);N
	a(a);N
	a a;N
}N
N
a a_a a_a_a_a(a a * a, a a __a * a,N
				   a_a a, a_a *a)N
{N
	a a * a = a_a(a);N
	a *a;N
	a_a a;N
	a a_a *a = a_a_a(a);N
N
	a = -A;N
	a (!a)N
		a a_a_a;N
	a (a > A_A)N
		a = A_A;N
N
	/* Aa a a. */N
	a = -A;N
	a (*a != 0)N
		a a;N
N
	a = -A;N
	a = (a*)__a_a_a(A_A);N
	a (!a)N
		a a;N
N
	a = -A;N
	a (a_a_a(a, a, a))N
		a a_a;N
N
	/* Aa a a a a */N
	a = a_a_a(&a->a->a_a_a);N
	a (a < 0)N
		a a_a;N
N
	a = a_a(a,N
				      (a*)a->a_a.a->a_a.a,N
				      (a*)a, a);N
	a_a(&a->a->a_a_a);N
a_a:N
	a_a((a a) a);N
a:N
	a_a_a(a);N
a_a_a:N
	a a;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a_a,N
};N
N
a a a a_a a_a_a[] = {N
	A("a",    A_A|A_A, a_a_a_a),N
	A("a",       A_A,	   a_a_a_a),N
	A("a",       A_A|A_A, a_a_a_a),N
	A("a",   A_A|A_A, a_a_a_a),N
	A("a",  A_A|A_A, a_a_a_a),N
	A("a", A_A|A_A, a_a_a_a),N
};N
N
a a a_a_a_a(a a *a, a a_a *a)N
{N
	a a_a_a(a, a, N
				   a_a_a, A_A(a_a_a));N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a_a,N
	.a		= a_a,N
};N
N
a a a *a_a_a_a(a a *a,N
				a a *a, a a a)N
{N
	a a_a_a(a, a,N
				  a_a_a, A_A(a_a_a));N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a_a,N
	.a	= a_a,N
	.a	= a_a,N
};N
N
#aN
N
#a A_A_AN
a a_a a_a_a_a(a a *a, a __a *a,N
					 a_a a, a_a *a)N
{N
	a a_a *a = a_a_a(a_a(a));N
	a a_a *a;N
	a a[A_A];N
	a_a a;N
	a a;N
N
	a (!a)N
		a -A;N
N
	a = 0;N
	a = a_a_a(a);N
	a (a) {N
		a = a(a, a(a), "%0a\a",N
			       ((a->a & A_A_A_A) >>N
				A_A_A_A));N
		a(a);N
		a = a_a_a_a(a, a, a, a, a);N
	}N
N
	a_a_a(a);N
N
	a a;N
}N
N
a a_a a_a_a_a(a a *a,N
					  a a __a *a,N
					  a_a a,N
					  a_a *a)N
{N
	a a_a *a;N
	a a_a *a;N
	a a a;N
	a a;N
	a a;N
	a a a;N
N
	a = a_a_a(a, a, 0, &a);N
	a (a < 0)N
		a a;N
N
	a = -A;N
	a = a_a_a(a_a(a));N
	a (!a)N
		a a_a_a;N
N
	a = a_a_a(a);N
	a (!a)N
		a a_a_a;N
	a = 0;N
N
	a (a = 0, a = 0; a < A_A_A_A; a++, a <<= 0) {N
		a (a & a)N
			a_a(a + A_A_A_A, &a->a);N
		aN
			a_a(a + A_A_A_A, &a->a);N
	}N
N
	a(a);N
 a_a_a:N
	a_a_a(a);N
 a_a_a:N
	a (a < 0)N
		a a;N
	a a;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a_a,N
};N
#aN
N
#a A_A_A_AN
a a a_a_a(a a_a *a, a a_a *a, a a)N
{N
	a a_a_a a = a->a;N
	a a a;N
	a a;N
N
	a = a_a_a(&a->a->a_a_a);N
	a (a)N
		a a;N
N
	a (!a_a_a(a, A_A_A_A)) {N
		a = -A;N
		a a_a;N
	}N
N
	a (a && a_a_a(a, &a)) {N
		a a_a *a = a;N
N
		a_a_a_a(&a, &a->a->a);N
		a_a_a(a, a)N
			a_a_a_a(&a, &a->a);N
N
		a_a_a(a, &a);N
	}N
	a_a(a,N
		   "a: %a\a"N
		   "a: %a\a"N
		   "a: %a\a"N
		   "a: %a\a"N
		   "a_a: %a\a"N
		   "a_a: %a\a"N
		   "a_a_a: %a\a",N
		   (a a a)a.a,N
		   (a a a)a.a,N
		   (a a a)a.a,N
		   (a a a)a.a,N
		   (a a a)a.a_a,N
		   (a a a)a.a_a,N
		   (a a a)a.a_a_a);N
	a = 0;N
N
a_a:N
	a_a(&a->a->a_a_a);N
	a a;N
}N
N
a a a_a_a_a(a a_a *a, a a_a *a,N
				  a a *a, a a_a *a)N
{N
	a a_a_a(a, a, 0);N
}N
N
a a a_a_a_a(a a_a *a, a a_a *a,N
				   a a *a, a a_a *a)N
{N
	a a_a_a(a, a, 0);N
}N
#a /* A_A_A_A */N
N
#a A_A_AN
a a a_a_a_a(a a *a, a a *a,N
	a a a_a *a_a)N
{N
	a a_a *a = A;N
	a a_a *a;N
	a a_a *a;N
	a a = -A;N
N
	a = a_a_a(a);N
	a (a) {N
		a_a_a();N
		a = a_a_a(a_a_a(a, a_a));N
		a_a_a();N
		a_a_a(a);N
	}N
	a (!a)N
		a a;N
N
	a = a_a(a, a_a);N
	a (a)N
		a a_a_a;N
N
	a = a->a_a;N
	a->a = a;N
N
	a 0;N
a_a_a:N
	a_a_a(a);N
a:N
	a a;N
}N
N
a a a_a_a_a(a a *a, a a *a)N
{N
	a a_a *a = a->a_a;N
	a a_a *a = a->a;N
	a_a_a(a);N
	a a_a(a, a);N
}N
N
a a a_a_a_a(a a *a, a a *a)N
{N
	a a_a_a_a(a, a, &a_a_a_a);N
}N
N
a a a_a_a_a(a a *a, a a *a)N
{N
	a a_a_a_a(a, a, &a_a_a_a);N
}N
N
a a a_a_a_a(a a *a, a a *a)N
{N
	a a_a_a_a(a, a, &a_a_a_a);N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a_a_a,N
};N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a_a_a,N
};N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a_a,N
	.a		= a_a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a_a_a,N
};N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a *a = A;N
	a a_a *a;N
	a a;N
N
	a = -A;N
	a = a_a_a(a);N
	a (a) {N
		a_a_a();N
		a = a_a_a(a_a_a(a, a_a));N
		a_a_a();N
		a_a_a(a);N
	}N
	a (!a)N
		a a;N
N
	a (a->a_a & A_A) {N
		a = -A;N
		a (!a_a(a, A_A_A))N
			a a_a_a;N
	}N
N
	a = a_a(a, &a_a_a, a);N
	a (a)N
		a a_a_a;N
N
	a 0;N
a_a_a:N
	a_a_a(a);N
a:N
	a a;N
}N
N
a a a_a_a(a a *a, a a *a)N
{N
	a a_a *a = a->a_a;N
	a a_a *a = a->a;N
	a a = a_a(a, a);N
	a_a_a(a);N
	a a;N
}N
N
a a a a_a a_a_a = {N
	.a		= a_a_a,N
	.a		= a_a_a,N
	.a		= a_a,N
	.a		= a_a,N
	.a	= a_a_a,N
};N
#a /* A_A_A */N
N
a a a_a_a(a a_a *a, a a_a *a,N
				a a *a, a a_a *a)N
{N
	a a = a_a(a);N
	a (!a) {N
		a_a(a, "%0a\a", a->a);N
		a_a(a);N
	}N
	a a;N
}N
N
/*N
 * Aa aN
 */N
a a a a_a a_a_a;N
a a a a_a a_a_a_a;N
N
a a a a_a a_a_a[] = {N
	A("a",       A_A|A_A, a_a_a_a, a_a_a),N
	A("a",         A_A|A_A, a_a_a_a, a_a_a),N
	A("a_a",  A_A|A_A, a_a_a_a_a, a_a_a_a),N
	A("a",     A_A|A_A, a_a_a_a, a_a_a),N
	A("a",	  A_A|A_A, a_a_a_a_a, a_a_a_a),N
#a A_AN
	A("a",        A_A|A_A, a_a_a_a, a_a_a),N
#aN
	A("a",    A_A, a_a_a),N
	A("a",       A_A, a_a_a),N
	A("a",     A_A, a_a_a),N
	A("a", A_A, a_a_a),N
	A("a",	  A_A, a_a_a),N
#a A_A_AN
	A("a",      A_A|A_A, a_a_a_a),N
#aN
#a A_A_AN
	A("a",  A_A|A_A, a_a_a_a_a),N
#aN
	A("a",      A_A|A_A, a_a_a_a_a),N
#a A_A_A_AN
	A("a",    A_A, a_a_a),N
#aN
	A("a",    A_A, a_a_a_a),N
	A("a",       A_A, a_a_a),N
	A("a",      A_A, a_a_a),N
	A("a",       A_A, a_a_a_a),N
#a A_AN
	A("a_a",  A_A, a_a_a_a_a),N
#aN
	A("a",        A_A|A_A, a_a_a),N
	A("a",        a_a_a),N
	A("a",       a_a_a),N
	A("a",        a_a_a),N
	A("a",     A_A, a_a_a),N
	A("a",  A_A, a_a_a),N
	A("a", A_A, a_a_a),N
#a A_A_AN
	A("a", A_A, a_a_a),N
#aN
#a A_A_A_AN
	A("a_a", A_A, a_a_a_a),N
	A("a",      A_A, a_a_a_a),N
	A("a_a", A_A, a_a_a_a_a),N
	A("a",    A_A, a_a_a),N
#aN
#a A_AN
	A("a",       A_A|A_A, a_a_a_a_a, a_a_a_a),N
#aN
#a A_AN
	A("a",      A_A, a_a_a),N
#aN
#a A_AN
	A("a",      A_A, a_a_a),N
#aN
#a A_A_AN
	A("a",  A_A, a_a_a),N
#aN
#a A_AN
	A("a",  A_A, a_a_a),N
#aN
#a A_A_A_AN
	A("a",     A_A, a_a_a),N
#aN
#a A_AN
	A("a",  A_A, a_a_a),N
#aN
	A("a_a",  A_A, a_a_a),N
	A("a_a",    A_A|A_A, a_a_a_a),N
	A("a_a_a", A_A|A_A, a_a_a_a_a),N
#a A_AN
	A("a",   A_A|A_A, a_a_a),N
	A("a",  A_A, a_a_a),N
#aN
#a A_A_AN
	A("a-a-a", A_A|A_A, a_a_a_a),N
#aN
#a A_A_AN
	A("a_a", A_A|A_A, a_a_a_a),N
#aN
#a A_A_A_AN
	A("a",	A_A, a_a_a_a),N
#aN
#a A_AN
	A("a",   A_A, a_a_a),N
#aN
#a A_A_AN
	A("a_a",    A_A|A_A, a_a_a_a),N
	A("a_a",    A_A|A_A, a_a_a_a),N
	A("a_a", A_A|A_A, a_a_a_a),N
	A("a",  A_A|A_A, a_a_a),N
#aN
#a A_A_AN
	A("a",	  A_A, a_a_a),N
#aN
	A("a_a", A_A|A_A, a_a_a_a_a_a),N
#a A_A_A_AN
	A("a_a_a", 0, a_a_a_a_a),N
#aN
};N
N
a a a_a_a_a(a a *a, a a_a *a)N
{N
	a a_a_a(a, a,N
				   a_a_a, A_A(a_a_a));N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a_a,N
	.a		= a_a,N
};N
N
a a a *a_a_a_a(a a *a, a a *a, a a a)N
{N
	a a_a_a(a, a,N
				  a_a_a, A_A(a_a_a));N
}N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a_a,N
	.a	= a_a,N
	.a	= a_a,N
	.a	= a_a_a,N
};N
N
a a a_a_a_a(a a *a, a_a a, a_a a)N
{N
	a a *a, *a, *a;N
	a a[A_A];N
	a a a;N
N
	a.a = a;N
	a.a = a(a, a(a), "%a", a);N
	/* a ->a_a() a a a */N
	a = a_a_a_a(a->a_a, &a);N
	a (a) {N
		a_a(a);N
		a(a);N
	}N
N
	a (a == a)N
		a;N
N
	a.a = a;N
	a.a = a(a, a(a), "%a", a);N
	a = a_a_a_a(a->a_a, &a);N
	a (!a)N
		a a;N
N
	a.a = "a";N
	a.a = a(a.a);N
	a = a_a_a_a(a, &a);N
	a (!a)N
		a a_a_a;N
N
	a.a = a;N
	a.a = a(a, a(a), "%a", a);N
	a = a_a_a_a(a, &a);N
	a (a) {N
		a_a(a);N
		a(a);N
	}N
N
	a(a);N
a_a_a:N
	a(a);N
a:N
	a;N
}N
N
/**N
 * a_a_a -  Aa a a a @a a a /a a.N
 * @a: a a a a a.N
 *N
 * Aa a a a a, a a a a a a aN
 * a (a_a) a a a a a' a a a a aN
 * a. Aa a a a a a a a a a.N
 *N
 * Aa a a a aN
 * /a/@aN
 * /a/@a/a/@aN
 * a a a a a a a a a a a'a aN
 * a a a.N
 *N
 * Aa a a a a a a /a a a a a aN
 * a a a.  Aa a a a a a a a aN
 * a a, a a a a a a aN
 * a a.  Aa a a a a a a aN
 * a a a a a a.N
 *N
 * A: Aa a a a a a a a a a aN
 *       a a a a a a a a a a aN
 *       a a a a a a a a a.N
 */N
N
a a_a_a(a a_a *a)N
{N
	a a;N
	a a *a, *a;N
	a a *a;N
N
	a = a_a(a);N
	a = a_a(a);N
N
	a (a = 0; a <= a->a; a++) {N
		a = &a->a[a];N
		a_a_a_a(a->a->a_a, a->a,N
					a->a[a].a);N
	}N
}N
N
a a a_a_a(a a *a,N
				   a a * a,N
				   a a_a *a, a a *a)N
{N
	a a *a;N
N
	a = a_a_a_a(a->a_a, a);N
	a (!a)N
		a a;N
N
	a->a_a = A_A|A_A|A_A;N
	a->a_a = &a_a_a_a_a;N
	a->a_a = &a_a_a_a;N
	a->a_a|=A_A;N
N
	a_a(a, 0 + a_a_a_a(a_a_a,N
						  A_A(a_a_a)));N
N
	a_a_a_a(a, &a_a_a);N
N
	a_a(a, a);N
	/* Aa a a a a a a a a a a a */N
	a (a_a(a, 0))N
		a 0;N
a:N
	a -A;N
}N
N
a a *a_a_a(a a *a, a a * a, a a a)N
{N
	a a = -A;N
	a a_a *a;N
	a a;N
	a a_a *a;N
N
	a = a_a_a(&a->a_a);N
	a (a == ~0A)N
		a a;N
N
	a = a->a_a->a_a_a;N
	a_a_a();N
	a = a_a_a_a_a(a, a);N
	a (a)N
		a_a_a(a);N
	a_a_a();N
	a (!a)N
		a a;N
N
	a = a_a_a(a, a, a, A);N
	a_a_a(a);N
a:N
	a A_A(a);N
}N
N
/*N
 * Aa a a a a a >= aN
 *N
 */N
a a_a {N
	a a a;N
	a a_a *a;N
};N
a a a_a a_a(a a_a *a, a a_a a)N
{N
	a a *a;N
N
	a (a.a)N
		a_a_a(a.a);N
	a_a_a();N
a:N
	a.a = A;N
	a = a_a_a(a.a, a);N
	a (a) {N
		a.a = a_a_a(a, a);N
		a.a = a_a(a, A_A);N
		/* Aa a a a a a a a a a a a aN
		 * a a a a_a_a.  Aa a aN
		 * a a a_a_a a a a aN
		 * a a a a a a a a a, a aN
		 * a a a a a a_a.N
		 *N
		 * Aa a a a a a a a aN
		 * a a a a a a a a a a a aN
		 * a a, a a'a a a a a a aN
		 * a a'a a a a a a a a.N
		 * Aa a a'a a a a a a a.N
		 */N
		a (!a.a || !a_a_a_a(a.a)) {N
			a.a += 0;N
			a a;N
		}N
		a_a_a(a.a);N
	}N
	a_a_a();N
	a a;N
}N
N
#a A_A (A_A_A + 0)N
N
/* a a /a/ a a, a a-a a a a a */N
a a_a_a(a a *a, a a_a *a)N
{N
	a a_a a;N
	a a_a *a = a_a(a)->a_a->a_a_a;N
	a_a a = a->a;N
N
	a (a >= A_A_A + A_A)N
		a 0;N
N
	a (a == A_A - 0) {N
		a a *a = a_a(a->a_a);N
		a (!a_a(a, "a", 0, a->a_a, A_A))N
			a 0;N
		a->a = a = a + 0;N
	}N
	a (a == A_A - 0) {N
		a a *a = a_a(a->a_a_a);N
		a (!a_a(a, "a-a", 0, a->a_a, A_A))N
			a 0;N
		a->a = a = a + 0;N
	}N
	a.a = a - A_A;N
	a.a = A;N
	a (a = a_a(a, a);N
	     a.a;N
	     a.a += 0, a = a_a(a, a)) {N
		a a[A_A];N
		a a;N
N
		a_a();N
		a (!a_a_a(a, a.a, 0))N
			a;N
N
		a = a(a, a(a), "%a", a.a);N
		a->a = a.a + A_A;N
		a (!a_a_a(a, a, a, a,N
				     a_a_a, a.a, A)) {N
			a_a_a(a.a);N
			a 0;N
		}N
	}N
	a->a = A_A_A + A_A;N
	a 0;N
}N
N
/*N
 * a_a_a_a a a a a a aN
 * a a a a /a/<a>/a/<a>/a.N
 * Aa a a a a a a a a a a a a aN
 * a a a a a a a.N
 * Aa a a a a a a a a a a a aN
 * a a a (a_a/a_a(!a)). Aa, aN
 * A_A_A a a a 0 a a a a a a=0 a=0,N
 * a a a a a a a a.N
 * Aa a a a a a a a a a a a aN
 * a a a.N
 */N
a a a_a_a_a(a a *a, a a)N
{N
	a a_a_a;N
	a a_a *a;N
N
	a = a_a_a(a);N
	a (!a)N
		a -A;N
	a_a_a = a_a_a(a, a);N
	a_a_a(a);N
N
	a (a(a_a_a && !(a & A_A))) {N
		/* Aa a (/a/<a>/a/<a>/a) a a aN
		 * a a a a a a a a aN
		 * a a.N
		 */N
		a 0;N
	}N
N
	a a_a(a, a);N
}N
N
a a a a_a a_a_a_a_a = {N
		.a = a_a_a_a,N
};N
N
/*N
 * AaN
 */N
a a a a_a a_a_a[] = {N
	A("a",        A_A|A_A, a_a_a_a, a_a_a),N
	A("a",    A_A|A_A, a_a_a_a, a_a_a),N
	A("a",	 A_A|A_A, a_a_a_a_a, a_a_a_a),N
#a A_AN
	A("a",        A_A|A_A, a_a_a_a, a_a_a),N
#aN
	A("a",   A_A, a_a_a),N
	A("a",      A_A, a_a_a),N
	A("a",    A_A, a_a_a),N
	A("a", A_A, a_a_a),N
	A("a",	 A_A, a_a_a),N
#a A_A_AN
	A("a",     A_A|A_A, a_a_a_a),N
#aN
	A("a",      A_A|A_A|A_A,N
			 &a_a_a_a_a,N
			 &a_a_a_a_a, {}),N
#a A_A_A_AN
	A("a",   A_A, a_a_a),N
#aN
	A("a",   A_A, a_a_a_a),N
	A("a",      A_A, a_a_a),N
	A("a",     A_A, a_a_a),N
	A("a",      A_A, a_a_a_a),N
#a A_A_AN
	A("a",  A_A, a_a_a_a),N
#aN
#a A_AN
	A("a_a", A_A, a_a_a_a_a),N
#aN
	A("a",       A_A|A_A, a_a_a),N
	A("a",       a_a_a),N
	A("a",      a_a_a),N
	A("a",       a_a_a),N
	A("a",    A_A, a_a_a),N
	A("a",  A_A, a_a_a),N
#a A_A_A_AN
	A("a_a", A_A, a_a_a_a),N
	A("a",     A_A, a_a_a_a),N
	A("a_a", A_A, a_a_a_a_a),N
	A("a",    A_A, a_a_a),N
#aN
#a A_AN
	A("a",      A_A|A_A, a_a_a_a_a, a_a_a_a),N
#aN
#a A_AN
	A("a",     A_A, a_a_a),N
#aN
#a A_AN
	A("a",      A_A, a_a_a),N
#aN
#a A_A_AN
	A("a", A_A, a_a_a),N
#aN
#a A_AN
	A("a",  A_A, a_a_a),N
#aN
#a A_A_A_AN
	A("a",    A_A, a_a_a),N
#aN
#a A_AN
	A("a",  A_A, a_a_a),N
#aN
	A("a_a", A_A, a_a_a),N
	A("a_a",   A_A|A_A, a_a_a_a),N
	A("a_a_a", A_A|A_A, a_a_a_a_a),N
#a A_AN
	A("a",  A_A|A_A, a_a_a),N
	A("a",  A_A, a_a_a),N
#aN
#a A_A_AN
	A("a-a-a", A_A|A_A, a_a_a_a),N
#aN
#a A_A_A_AN
	A("a",	A_A, a_a_a_a),N
#aN
#a A_AN
	A("a",   A_A, a_a_a),N
#aN
#a A_A_AN
	A("a_a",    A_A|A_A, a_a_a_a),N
	A("a_a",    A_A|A_A, a_a_a_a),N
	A("a_a", A_A|A_A, a_a_a_a),N
	A("a",  A_A|A_A, a_a_a),N
#aN
#a A_A_A_AN
	A("a_a_a", 0, a_a_a_a_a),N
#aN
};N
N
a a a_a_a_a(a a *a, a a_a *a)N
{N
	a a_a_a(a, a,N
				   a_a_a, A_A(a_a_a));N
}N
N
a a a *a_a_a_a(a a *a, a a *a, a a a)N
{N
	a a_a_a(a, a,N
				  a_a_a, A_A(a_a_a));N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a_a,N
	.a		= a_a,N
};N
N
a a a a_a a_a_a_a_a = {N
	.a		= a_a_a_a,N
	.a	= a_a,N
	.a	= a_a,N
};N
N
a a a_a_a(a a *a,N
	a a *a, a a_a *a, a a *a)N
{N
	a a *a;N
	a = a_a_a_a(a->a_a, a);N
N
	a (!a)N
		a a;N
	a->a_a = A_A|A_A|A_A;N
	a->a_a = &a_a_a_a_a;N
	a->a_a = &a_a_a_a;N
	a->a_a|=A_A;N
N
	a_a(a, 0 + a_a_a_a(a_a_a,N
						  A_A(a_a_a)));N
N
	a_a_a_a(a, &a_a_a);N
N
	a_a(a, a);N
	/* Aa a a a a a a a a a a a */N
	a (a_a(a, 0))N
		a 0;N
a:N
	a -A;N
}N
N
a a a *a_a_a(a a *a, a a * a, a a a)N
{N
	a a = -A;N
	a a_a *a;N
	a a_a *a = a_a_a(a);N
	a a;N
	a a_a *a;N
N
	a (!a)N
		a a_a_a;N
N
	a = a_a_a(&a->a_a);N
	a (a == ~0A)N
		a a;N
N
	a = a->a_a->a_a_a;N
	a_a_a();N
	a = a_a_a_a_a(a, a);N
	a (a)N
		a_a_a(a);N
	a_a_a();N
	a (!a)N
		a a;N
	a (!a_a_a(a, a))N
		a a_a_a;N
N
	a = a_a_a(a, a, a, A);N
a_a_a:N
	a_a_a(a);N
a:N
	a_a_a(a);N
a_a_a:N
	a A_A(a);N
}N
N
/*N
 * Aa a a a a a a a a a a a a.N
 *N
 * Aa a a a a a a a, a a a aN
 * a a a a a a a a a a a a a aN
 * a a a a a a.N
 *N
 * Aa a a a a a a a a a a_a_a_a.N
 *N
 * Aa a a a a a a a a a a a a aN
 * a a a.N
 */N
a a a_a *a_a(a a *a, a a, a_a a_a,N
					a a_a *a)N
{N
	a a_a *a, *a;N
	a a a = a_a;N
N
	a (a != a_a)	/* 0a a? */N
		a A;N
N
	a_a_a();N
	a = a_a(a, A_A);N
	a (!a)N
		a a;N
N
	/* Aa a a a a a a a a */N
	a (a && a) {N
		a = a_a_a_a_a(a, a);N
		a (a && a_a_a(a, a))N
			a a;N
	}N
N
	/* Aa a a a a a a a a a a */N
	a (a >= a_a_a(a))N
		a a;N
N
	/* Aa a a'a a a a a a aN
	 * a a a a a a a a.N
	 */N
	a = a = a->a_a;N
	a {N
		a (!a--)N
			a a;N
	} a_a_a(a, a);N
a:N
	a = A;N
	a a;N
a:N
	a_a_a(a);N
a:N
	a_a_a();N
	a a;N
}N
N
/*N
 * Aa a a a a a a a.N
 * Aa A a a a a a a a a a.N
 *N
 * Aa a a a a a_a a a.N
 */N
a a a_a *a_a(a a_a *a)N
{N
	a a_a *a = A;N
	a_a_a();N
	a (a_a(a)) {N
		a = a_a(a);N
		a (a_a_a(a))N
			a = A;N
		aN
			a_a_a(a);N
	}N
	a_a_a();N
	a_a_a(a);N
	a a;N
}N
N
/* a a /a/A/a/ a */N
a a a_a_a(a a *a, a a_a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a;N
	a a_a *a;N
	a a;N
N
	a (a_a_a_a(a))N
		a -A;N
N
	a (!a_a_a(a, a))N
		a 0;N
N
	/* a_a a a a a a a a a a a'aN
	 * a. a a a a a a_a a 0.N
	 */N
	a = a->a_a->a_a_a;N
	a = (a)a->a_a;N
	a->a_a = 0;N
	a (a = a_a(a_a(a), a, a->a - 0, a);N
	     a;N
	     a = a_a(a), a->a++) {N
		a a[A_A];N
		a a;N
		a = a_a_a_a(a, a);N
		a = a(a, a(a), "%a", a);N
		a (!a_a_a(a, a, a, a,N
				a_a_a, a, A)) {N
			/* a a a a, a a a a aN
			 * a a a a a a */N
			a->a_a = (a0)a;N
			a_a_a(a);N
			a;N
		}N
	}N
N
	a 0;N
}N
N
a a a_a_a(a a *a, a a *a, a a *a)N
{N
	a a *a = a_a(a);N
	a a_a *a = a_a_a(a);N
	a_a(a, a);N
N
	a (a) {N
		a->a += a_a_a(a);N
		a_a_a(a);N
	}N
N
	a 0;N
}N
N
a a a a_a a_a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a,N
	.a	= a_a,N
	.a	= a_a_a,N
};N
N
a a a a_a a_a_a = {N
	.a		= a_a_a,N
	.a	= a_a_a,N
	.a		= a_a,N
};N
