/* Aa (a) 0-0, Aa Aa Aa. Aa a a.N
 *N
 * Aa a a a a; a a a a a/a aN
 * a a a a a a A Aa Aa Aa a 0 aN
 * a a 0 a a a a Aa Aa Aa.N
 *N
 * Aa a a a a a a a a a a a,N
 * a A A A; a a a a a aN
 * A a A A A A A.  Aa aN
 * A Aa Aa Aa a a a.N
 */N
N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a/a0a0/a.a>N
#a <a/a/a.a>N
#a <a/a0a.a>N
#a <a/a_a_a.a>N
#a <a/a_a.a>N
N
#a A_A 0N
/*N
 * A a a a a a a a a a aN
 * Aa Aa Aa a a 0 a aN
 * a a a a a a A0 a a a.N
 */N
#a A0_A_A_A 0N
N
a {N
	A_A,N
	A_A_A,N
	A_A_AN
};N
N
a a_a_a {N
	A_A_A,N
	A_A_A,N
	A_A_AN
};N
N
a a0a_a_a_a {N
	a a_a_a a;N
	a a_a_a_a *a_a;N
};N
N
a a0a_a {N
	a a_a *a_a_a;N
	a_a_a_a a_a_a_a;N
	a_a_a_a a_a_a;N
	a_a_a_a a_a_a_a_a;N
	a0 a_a_a_a;N
	a a_a {N
		A_A,N
		A_A_A_A,N
		A_A_A_A_A,N
	} a_a_a_a;N
	a0 a_a_a_a_a;N
	a a a_a;N
	a a a_a;N
	a {N
		a a_a_a_a_a_aN
						a_a_a;N
	} a_a_a;N
	a0 a;N
	a a_a_a *a_a[A_A_A];N
	a0_a a_a_a_a;N
	a0_a a_a;N
	a a0a_a_a_a a0a_a_a_a;N
	a0 a0_a_a_a;N
};N
N
a a a0a_a a0a_a;N
N
a a_a_a_ {N
	a a;N
	a a_a_a;N
	a a[];N
};N
a a a_a_a_ *a_a_a;N
N
a a a_a_a_a(a0_a *a, a0_a a_a)N
{N
	a_a a_a;N
	a a_a;N
N
	a_a("%a: Aa a a a %a\a",N
		 __a__, a[0]);N
N
	/*N
	 * a0[0] a a a a a a a AN
	 * Aa a a a, a a a a a aN
	 * a a a a.N
	 */N
	a (a_a < 0 * a(a0_a)) {N
		a_a("%a: a a a a %a\a",N
			__a__, a_a);N
		a -A;N
	}N
	a_a = a[0];N
	a (a_a > A_A_A_A_A) {N
		a_a("%a: a_a: %a a a a a: %a\a",N
		       __a__, a_a, A_A_A_A_A);N
		a -A;N
	}N
N
	/*N
	 * Aa a a a aN
	 * a a a a a_aN
	 */N
	a_a = a(a a_a_a_a) +N
		   a_a * a(a a_a_a_a);N
N
	a (a_a < a_a) {N
		a_a("%a: a a a a %a, a a %a\a",N
			__a__, a_a, a_a);N
		a -A;N
	}N
	a0a_a.a0a_a_a_a.a_a =N
		a(a_a, A_A);N
	a (a0a_a.a0a_a_a_a.a_a == A)N
		a -A;N
N
	a(a0a_a.a0a_a_a_a.a_a, (a0_a *) a,N
	       a_a);N
	a 0;N
}N
N
a a0_a a0_a_a_a(a a_a_a *a, a *a)N
{N
	a0_a *a0;N
	a a = 0;N
N
	a (a == A) {N
		a_a("%a: a a a a\a", __a__);N
		a -A;N
	}N
N
	a_a("%a: a a: a a = %a, a a a = 0a%a\a",N
		__a__,N
		a->a_a, a->a);N
N
	a (a->a) {N
N
	a A_A_A_A:{N
N
		a (a->a_a == 0) {N
			a_a("%a: A_A_A_A Aa Aa ",N
					__a__);N
			a 0;N
		}N
N
		a0 = a->a;N
N
		a (a->a_a < 0 * a(a0_a)) {N
			a_a("%a: a a a a %a\a",N
				__a__, a->a_a);N
			a -A;N
		}N
N
		a (a0[0]) {N
N
		a A_A_A_A_A_A:N
			a_a("%a: Aa = A_A_A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A_A_A:N
			a_a("%a: Aa = A_A_A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A:N
			a_a("%a: Aa = A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			/* -A a a a Aa a a */N
			a0a_a.a_a = -a0[0];N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A:N
			a_a("%a: Aa = A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A_A:N
			a_a("%a: Aa = A_A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A_A:N
			a_a("%a: Aa = A_A_A_A_A a[0a%a]\a",N
				__a__, a0[0]);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		a A_A_A_A_A:N
			a_a("%a: Aa = A_A_A_A_A a[%a]\a",N
				__a__, a_a_a_a_a(a0[0]));N
			/* A a a a Aa a a */N
			a0a_a.a_a = -a0[0];N
			a (a0[0] == A_A)N
				a0a_a.a0a_a_a_a.a =N
					A_A_A;N
			a0a_a.a_a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a_a);N
			a;N
		a:N
			a_a("%a: Aa a a[0a%a][0a%a] a %a\a",N
					__a__,N
					a0[0], a0[0], a->a);N
			a;N
		}N
		a;N
	}N
N
	a A_A:{N
		a_a("%a: Aa a a a Aa a\a",N
			__a__);N
		a_a(a0a_a.a_a_a);N
		a0a_a.a_a_a = A;N
		a;N
	}N
	a A_A_A_A_A_A:N
		a (a->a_a < a(a0_a)) {N
			a_a("%a: a a a a %a\a",N
				__a__, a->a_a);N
			a -A;N
		}N
		a0 = a->a;N
		a_a("%a: A_A_A_A_A_A a %a\a",N
			__a__, a0[0]);N
		a0a_a.a_a_a_a = a0[0];N
		a0a_a.a_a_a_a = 0;N
		a_a(&a0a_a.a_a_a_a);N
		a;N
	a A_A_A_A_A_A:N
		a (a->a_a < a(a0_a)) {N
			a_a("%a: a a a a %a\a",N
				__a__, a->a_a);N
			a -A;N
		}N
		a0 = a->a;N
		a0a_a.a = a0[0];N
		a_a("%a: Aa A a a a 0a%a\a",N
			 __a__, a0a_a.a);N
		/* a .a a a a a .a_a_a_a */N
		a();N
		a0a_a.a_a_a_a = 0;N
		a_a(&a0a_a.a_a_a_a);N
		a;N
	a A_A_A_A:N
		a (a->a_a < 0 * a(a0_a)) {N
			a_a("%a: a a a a %a\a",N
				__a__, a->a_a);N
			a -A;N
		}N
		a0 = a->a;N
		a_a("%a: Aa A a a[0]0a%a\a",N
					 __a__, a0[0]);N
		a0a_a.a_a_a_a =N
						A_A_A_A_A;N
		a (a0[0] ==  A_A_A0_A_0_0) {N
			a0a_a.a0_a_a_a = A0_A_A0_0;N
			a_a("%a: Aa A a a 0.0\a",N
							 __a__);N
		} a a (a0[0] ==  A_A_A0_A_0_0) {N
			a0a_a.a0_a_a_a = A0_A_A0_0;N
			a_a("%a: Aa A a a 0.0\a",N
							 __a__);N
		} a a (a0[0] == A_A_A0_A_0_0) {N
			a0a_a.a0_a_a_a = A0_A_A0_0;N
			a_a("%a: Aa A a a 0.0\a",N
							 __a__);N
		} a {N
			a_a("%a: A a a a 0.0 a 0.0\a",N
							 __a__);N
			a0a_a.a0_a_a_a = A0_A_A;N
		}N
		a_a(&a0a_a.a_a_a);N
		a;N
N
	 a A_A_A_A_A_A:N
		a (a->a_a < a(a0_a)) {N
			a_a("%a: a a a a %a\a",N
				__a__, a->a_a);N
			a -A;N
		}N
		a0 = a->a;N
		a_a("%a: a = A_A_A, a = 0a%a\a",N
				__a__, a0[0]);N
		a0a_a.a_a_a.a_a_a.aN
								= a0[0];N
		a0a_a.a_a_a_a = A_A_A_A;N
		a_a(&a0a_a.a_a_a);N
		a;N
	a A_A_A_A_A:N
		a_a("%a: Aa A_A_A_A_A\a",N
			 __a__);N
		a0 = a->a;N
		a = a_a_a_a(a0, a->a_a);N
		a (a < 0) {N
			a0a_a.a_a = a;N
			a_a("%a: Aa a a a:%a\a",N
			       __a__, a);N
		} a {N
			a0a_a.a0a_a_a_a.a =N
						A_A_A;N
		}N
		a0a_a.a_a_a_a_a = 0;N
		a_a(&a0a_a.a_a_a_a_a);N
		a;N
	a:N
		a_a("%a: Aa a a a a a: 0a%a\a",N
			__a__, a->a);N
		a (a_a_a) {N
			a_a_a->a = 0;N
			a_a_a->a_a_a =N
				a->a_a/a(a);N
			a_a("a a = %a\a",N
				 a->a_a);N
			a(a_a_a->a, a->a,N
				a->a_a);N
			a0a_a.a_a_a_a = 0;N
			a_a(&a0a_a.a_a_a_a);N
			a;N
		}N
		a;N
	}N
N
	a 0;N
}N
N
a a_a_a(a)N
{N
	a (a0a_a.a_a_a == A)N
		a0a_a.a_a_a = a_a("A", "A",N
					a0_a_a_a, 0aA, A);N
	a_a("%a: Aa_a %aA\a", __a__, a0a_a.a_a_a);N
	a (a0a_a.a_a_a == A)N
		a_a("%a: Aa a a A\a", __a__);N
}N
N
a a_a_a *a_a_a_a_a_a_a(N
		a a_a_a *a_a, a0_a a)N
{N
	a a_a                *a, *a;N
	a a_a_a           *a_a = A;N
	a a_a_a_a  *a;N
N
	a_a_a_a(a, a,N
		&a_a->a_a) {N
N
		a_a = a_a(a,N
			a a_a_a, a);N
		a = (a a_a_a_a *)N
			a_a->a_a;N
		a (a->aAa != a) {N
			a_a("%a: a a a!!! a:%a, a:%a\a",N
				__a__, a->aAa, a);N
		} a {N
			a_a("%a: a a a a", __a__);N
			a a_a;N
		}N
	}N
	a A;N
}N
N
#a 0N
a a a0a_a_a_a_a_a_a(a)N
{N
	a a_a a_a_a;N
	a a;N
N
	a_a_a.a_a =N
		A_A_A(A_A_A_A_A, A_A_A(A_A_A),N
			      A_A_A);N
	a_a_a.a_a = a(a a_a);N
	a_a_a.a_a = 0;N
	a_a_a.a_a = 0;N
	a_a_a.a = 0;N
	a_a_a.a = A_A_A_A_A;N
N
	a0a_a.a_a = 0;N
	a0a_a.a_a_a_a_a = 0;N
N
	a = a_a_a(a0a_a.a_a_a,N
			   (a0_a *) &a_a_a);N
	a (a < 0) {N
		a_a("%a: a a a a a, a=%a\a", __a__,N
		       a);N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a_a,N
				 (a0a_a.a_a_a_a_a == 0),N
				 a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a_a a a A a a a\a",N
		       __a__);N
		a = -A;N
		a a;N
	}N
N
	a (a0a_a.a_a < 0) {N
		/*N
		 * a_a_a_a_a a a a a a a aN
		 * a A a a a a a a Aa a a.N
		 * Aa a a a a a a_a_a_a_a aN
		 * a a a.N
		 */N
		a_a("%a: A a a[%a]\a", __a__,N
		       a_a_a_a_a(-a0a_a.a_a));N
		a = a_a_a_a_a_a(a0a_a.a_a);N
		a a;N
	}N
N
	a = 0;N
N
a:N
	a a;N
}N
N
a a0a_a_a_a(a0_a a_a,N
			       a a_a_a_a *a_a,N
			       a_a a)N
{N
	a a_a_a_a *a_a_a = A;N
	a a;N
	a0_a a_a;N
	a_a a_a;N
	a a;N
N
	a (a_a == A) {N
		a_a("%a: a_a a A\a", __a__);N
		a -A;N
	}N
N
	a = a0a_a_a_a_a(a_a);N
	a (a < 0) {N
		a_a("%a: Aa a a a a a a a %a a a %a\a",N
		       __a__, a_a, a);N
		a a;N
	}N
N
	a_a = a;N
	a (a_a != a) {N
		a_a("%a: Aa a %a a a a %a a a a\a",N
		       __a__, a_a, a);N
		a -A;N
	}N
N
	a_a_a = a0a_a.a0a_a_a_a.a_a;N
	a_a = a_a_a->a_a_a.a_a;N
N
	a (a_a == A_A_A_A) {N
		a(a_a, a_a_a, a_a);N
		a 0;N
	}N
N
	a_a->a_a_a = a_a_a->a_a_a;N
	a (a = 0; a < a_a; a++) {N
		a (a_a_a->a[a].a_a == a_a) {N
			a_a->a[0] = a_a_a->a[a];N
			a 0;N
		}N
	}N
	a_a("%a: Aa a a a A %a\a", __a__, a_a);N
	a -A;N
}N
N
a_a a0a_a_a_a_a(a0_a a_a)N
{N
	a a = 0;N
	a0_a a_a;N
N
	a_a(&(a0a_a.a_a));N
	a_a("%a: a0a_a_a_a.a(%a)\a", __a__,N
		 a0a_a.a0a_a_a_a.a);N
N
	a (a0a_a.a0a_a_a_a.a) {N
	a A_A_A:N
		a_a("%a: A A a a a a\a",N
			 __a__);N
		a;N
	a A_A_A:N
		a = -A;N
		a;N
	a A_A_A:N
		a_a("%a: Aa A A a a\a", __a__);N
		a (a0a_a_a_a()) {N
			a = a0a_a_a_a_a_a_a();N
		} a {N
			a_a("%a: A a a a a a a\a",N
			       __a__);N
			a = -A;N
		}N
		a;N
	a:N
		a_a("%a: Aa a a a %a\a", __a__,N
		       a0a_a.a0a_a_a_a.a);N
		a = -A;N
		a;N
	}N
	a_a(&(a0a_a.a_a));N
N
	a (a)N
		a a;N
N
	a (a0a_a.a0a_a_a_a.a_a != A) {N
		a_a = a0a_a.a0a_a_a_a.a_aN
					->a_a_a.a_a;N
	} a {N
		a_a("%a: a_a a A\a", __a__);N
		a = -A;N
		a a;N
	}N
N
	a = a(a a_a_a_a);N
	a (a_a == A_A_A_A)N
		a += a_a * a(a a_a_a_a);N
	aN
		a += a(a a_a_a_a);N
a:N
	a a;N
}N
#aN
a a0a_a_a_a(a0_a a_a,N
			       a a_a_a_a *a_a,N
			       a_a a)N
{N
	a -0;N
}N
N
a_a a0a_a_a_a_a(a0_a a_a)N
{N
	a -0;N
}N
#aN
A_A(a0a_a_a_a);N
A_A(a0a_a_a_a_a);N
N
a0_a a_a_a(a0_a a, a0_a a_a)N
{N
	a a_a_a_a *a_a = A;N
	a a_a_a *a_a = A;N
	a a = 0, a_a = 0;N
N
	a_a("%a: a:0a%a, a:0a%a\a", __a__, a, a_a);N
N
	a_a(&(a0a_a.a_a));N
	a (a0a_a.a_a[A_A] == A) {N
		a_a("%a: a_a a a a!!\a", __a__);N
		a = -A;N
		a a_a;N
	}N
N
	a_a(&((a0a_a.a_a[A_A])->a));N
	a_a = a_a_a_a_a_a_a(N
				a0a_a.a_a[A_A], a);N
	a (a_a == A ||N
		a_a->a_a.a == A ||N
		a_a->a_a.a <= 0) {N
		a_a("%a: Aa a a a a", __a__);N
		a = -A;N
		a a_a_a;N
	}N
N
	a_a = a(a a_a_a_a) +N
					a_a->a_a.a;N
	/*a a a a_a a a 0 a a*/N
	a_a = ((a_a + 0a0)>>0)<<0;N
N
	a_a = a(a_a, A_A);N
	a (a_a == A) {N
		a_a("%a: a a a_a_a a a a %a\a",N
							__a__, a_a);N
		a  = -A;N
		a a_a_a;N
	}N
N
	a_a_a();N
	a (a0a_a.a_a_a == A) {N
		a_a("%a: a a a A a\a", __a__);N
		a  = -A;N
		a a_a;N
	}N
N
	a_a->a.a_a = A_A_A(A_A_A_A,N
				A_A_A(A_A_A), A_A_A);N
	a_a->a.a_a = a_a;N
	a_a->a.a_a = 0;N
	a_a->a.a_a = 0;N
	a_a->a.a = 0;N
	a_a->a.a = A_A_A_A;N
	a_a->a = a_a;N
	a_a->a = 0;N
	a_a->a = a_a->a_a.a;N
	a((a0_a *)a_a + a(a a_a_a_a),N
		a_a->a_a.a,N
		a_a->a_a.a);N
	a_a("%a: Aa a a=0a%a, a =0a%a, a = %a\a",N
			__a__, a_a->a.a,N
			a_a->a, a_a->a);N
	a = a_a_a(a0a_a.a_a_a, (a0_a *)a_a);N
	a (a < 0)N
		a_a("%a: A_A a a[0a%a]a[%a]\a",N
					__a__, a_a->a.a, a);N
N
a_a:N
	a(a_a);N
a_a_a:N
	a_a(&((a0a_a.a_a[A_A])->a));N
a_a:N
	a_a(&(a0a_a.a_a));N
N
	a a;N
}N
N
a a_a_a_a(a)N
{N
	a a_a_a_a_a a_a_a;N
	a a = 0;N
N
	a_a(&(a0a_a.a_a));N
	a_a_a();N
	a (a0a_a.a_a_a == A) {N
		a_a("%a: a a a A a\a", __a__);N
		a  = -A;N
		a a_a;N
	}N
N
	a_a_a.a.a_a = A_A_A(A_A_A_A_A,N
				A_A_A(A_A_A), A_A_A);N
	a_a_a.a.a_a =	a(a_a_a);N
	a_a_a.a.a_a = 0;N
	a_a_a.a.a_a = 0;N
	a_a_a.a.a = 0;N
	a_a_a.a.a = A_A_A;N
N
	a = a_a_a(a0a_a.a_a_a,N
				 (a0_a *) &a_a_a);N
	a (a < 0) {N
		a_a("%a: Aa a A a  a a, a %a\a",N
							__a__, a);N
		a = -A;N
		a a_a;N
	}N
N
	a0a_a.a_a_a_a &= ~(A_A_A_A_A);N
	a_a(&(a0a_a.a_a));N
	a = a_a_a(a0a_a.a_a_a,N
			(a0a_a.a_a_a_a ==N
				A_A_A_A_A),N
				a_a_a(A_A));N
	a_a(&(a0a_a.a_a));N
	a (!a) {N
		a_a("%a: a_a a a A_A_A_A\a",N
				__a__);N
		a = -A;N
		a a_a;N
	}N
	a0a_a.a_a_a_a &= ~(A_A_A_A_A);N
N
a_a:N
	a (a < 0)N
		a0a_a.a0_a_a_a = A0_A_A;N
	a_a(&(a0a_a.a_a));N
	a a;N
}N
N
a a0_a_a a0a_a_a_a(a)N
{N
	a (a0a_a.a0_a_a_a == 0)N
		a_a_a_a();N
	a a0a_a.a0_a_a_a;N
}N
N
a0_a a_a_a_a(a0_a a_a)N
{N
	a a_a_a_a_a_a a_a_a;N
	a a = 0;N
N
	a_a("%a: a_a 0a%a", __a__, a_a);N
N
	a_a(&(a0a_a.a_a));N
	a_a_a();N
	a (a0a_a.a_a_a == A) {N
		a_a("%a: a a a A a\a", __a__);N
		a  = -A;N
		a a_a;N
	}N
N
	a_a_a.a.a_a = A_A_A(A_A_A_A_A,N
				A_A_A(A_A_A), A_A_A);N
	a_a_a.a.a_a =N
		a(a a_a_a_a_a_a);N
N
	a_a_a.a.a_a = 0;N
	a_a_a.a.a_a = 0;N
	a_a_a.a.a = 0;N
	a_a_a.a.a = A_A_A_A_A_A;N
	a_a_a.a = a_a;N
N
N
	a = a_a_a(a0a_a.a_a_a, (a0_a *) &a_a_a);N
	a (a < 0) {N
		a_a("%a: a_a a a, a %a\a",N
							__a__, a);N
		a = -A;N
		a a_a;N
	}N
N
	a0a_a.a_a_a_a &= ~(A_A_A_A);N
	a_a(&(a0a_a.a_a));N
	a = a_a_a(a0a_a.a_a_a,N
			(a0a_a.a_a_a_a ==N
				A_A_A_A),N
				a_a_a(A_A));N
	a_a(&(a0a_a.a_a));N
	a (!a) {N
		a_a("%a: a_a a a A_A_A\a",N
				__a__);N
		a = -A;N
		a a_a;N
	}N
	a0a_a.a_a_a_a &= ~(A_A_A_A);N
	a = a0a_a.a_a_a.a_a_a.a;N
N
a_a:N
	a_a(&(a0a_a.a_a));N
	a_a("%a: a_a_a.a = 0a%a a a 0a%a\a",N
				__a__, a, a_a);N
	a a;N
}N
N
#a A_A_A_AN
a a_a_a_a(a a, a *a)N
{N
	a a_a_a *a = A;N
	a a = 0, a_a0a;N
N
	a_a("A_A_A - %a\a", __a__);N
	a (a <= 0 || !a) {N
		a_a("A_A_A - %a: a a %a a a %aA.\a",N
			__a__, a, a);N
		a -A;N
	}N
N
	a_a0a = (a+0) & 0aA;N
	a_a_a();N
	a (a0a_a.a_a_a) {N
		a = a(a(a a_a_a) +N
				  a_a0a, A_A);N
		a (!a) {N
			a_a("A_A_A - %a: a a a (a a %a).\a",N
				__a__, a_a0a);N
			a -A;N
		}N
		a->a.a_a = A_A_A(A_A_A_A,N
						A_A_A(A_A_A),N
						A_A_A);N
		a->a.a_a = a(a a_a_a) +N
					       a_a0a;N
		a->a.a_a = 0;N
		a->a.a_a = 0;N
		a->a.a = 0;N
		a->a.a = A_A_A_A_A_A_A;N
		a->a = A_A_A_A;N
		a->a = 0;N
		a->a = a;N
		a(a->a, a, a);N
		a = a_a_a(a0a_a.a_a_a,N
				(a0_a *)a);N
		a (a < 0) {N
			a_a("A_A_A - %a: a a[0a%a]a[%a]\a",N
				__a__, a->a.a, a);N
		}N
		a(a);N
	}N
	a a;N
}N
N
a a_a_a_a(a a, a a, a *a)N
{N
	a a_a a;N
	a a = 0;N
N
	a_a("A_A_A - %a\a", __a__);N
	a (a <= 0 || !a) {N
		a_a("A_A_A - %a: a a %a a a %aA.\a",N
			__a__, a, a);N
		a -A;N
	}N
	a_a_a();N
	a (a0a_a.a_a_a) {N
		a.a_a = A_A_A(A_A_A_A,N
				A_A_A(A_A_A), A_A_A);N
		a.a_a = a(a a_a);N
		a.a_a = 0;N
		a.a_a = 0;N
		a.a = 0;N
		a.a = a;N
N
		a0a_a.a_a_a_a = 0;N
		a_a_a = a(a(a a_a_a_)N
					   + a, A_A);N
		a (!a_a_a) {N
			a_a("A_A_A - %a: a a a a a %a\a",N
				__a__, a);N
			a -A;N
		}N
N
		a = a_a_a(a0a_a.a_a_a,N
				(a0_a *)&a);N
		a (a < 0) {N
			a_a("A_A_A - %a: a a[0a%a]a[%a]\a",N
				__a__, a.a, a);N
			a a_a_0;N
		}N
N
		a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
		a (!a) {N
			a_a("A_A_A - %a: A a a a a\a",N
				__a__);N
			a = -A;N
			a a_a_0;N
		}N
		a (a_a_a->a) {N
			a = 0;N
			a(a, a_a_a->a, a);N
		} a {N
			a = -A;N
			a_a("A_A_A - %a: A a a a a a - a a a a\a",N
				__a__);N
		}N
	}N
N
a_a_0:N
	a(a_a_a);N
	a_a_a = A;N
	a a;N
}N
#aN
N
a0_a a_a_a_a_a(a a_a)N
{N
	a a_a_a_a a;N
	a a = 0;N
	a_a("%a: a_a :%a\a", __a__, a_a);N
	a_a(&(a0a_a.a_a));N
	a_a_a();N
	a (a0a_a.a_a_a) {N
		a.a.a_a = A_A_A(A_A_A_A,N
			A_A_A(A_A_A), A_A_A);N
		a.a.a_a =N
			a(a a_a_a_a);N
		a.a.a_a = 0;N
		a.a.a_a = 0;N
		a.a.a = 0;N
		a.a.a = A_A_A_A_A_A;N
		a.a_a = a_a;N
		a_a("%a: Aa Aa a a=0a%a a A = %a\a",N
			__a__,N
			a.a.a, a.a_a);N
		a = a_a_a(a0a_a.a_a_a,N
						(a0_a *)&a);N
		a (a < 0)N
			a_a("%a: A_A_A_A a a[0a%a]a[%a]\a",N
				__a__, a.a.a, a);N
	}N
	a_a(&(a0a_a.a_a));N
	a a;N
}N
N
a a0a_a_a_a(a)N
{N
	a a = 0;N
	a a = a;N
	a a_a a;N
N
	a_a("%a: a\a", __a__);N
	a(&a, 0, a(a));N
	a.a_a = A_A_A(A_A_A_A_A,N
				      A_A_A(A_A_A), A_A_A);N
	a.a_a = A_A_A(A_A_A, 0);N
	a.a = A_A_A_A_A_A;N
N
	a_a(&(a0a_a.a_a));N
	a_a_a();N
	a (a0a_a.a_a_a) {N
		a0a_a.a_a_a_a = 0;N
		a = a_a_a(a0a_a.a_a_a, (a0_a *)&a);N
		a (a < 0) {N
			a_a("%a: Aa A a A a a a %a\a",N
				__a__, a);N
			a a;N
		}N
N
		a = a_a_a(a0a_a.a_a_a_a,N
					(a0a_a.a_a_a_a == 0),N
					a_a_a(A0_A_A_A));N
		a (a > 0 && a0a_a.a_a_a_a) {N
			/* a a a a a a a a */N
			a();N
			a = a0a_a.a;N
		}N
	}N
a:N
	a_a("%a: a, a %a, a a %a\a", __a__, a, a);N
	a_a(&(a0a_a.a_a));N
	a a;N
}N
N
N
a a a0a_a_a_a(a_a_a *a_a, a0_a a_a,N
			a0_a *a, a0_a a, a0_a *a_a)N
{N
	a a_a_a_a_a_a *a_a = A;N
	a a_a_a_a_a *a = A;N
	a *a_a_a = A;N
	a *a = A;N
	a a = 0;N
	a a = 0;N
	a a_a = 0;N
N
	a_a = a(a a_a_a_a_a_a)N
			+ a(a a_a_a_a_a)N
			* a;N
N
	a_a_a = a(a_a, A_A);N
	a (a_a_a == A)N
		a -A;N
N
	a_a = (a a_a_a_a_a_a *)a_a_a;N
	a_a->a.a_a = A_A_A(A_A_A_A_A,N
						A_A_A(A_A_A),N
								A_A_A);N
	a_a->a.a_a = a_a;N
	a_a->a.a_a = 0;N
	a_a->a.a_a = 0;N
	a_a->a.a = 0;N
	a_a->a.a = A_A_A_A_A_A;N
	a_a->a_a_a = A_A_A_A0_0A_A & 0a0a;N
	a_a->a_a = a & 0a0a;N
	a_a->a_a = 0a0;N
N
	a = ((a0 *) a_a_a +N
				a(a a_a_a_a_a_a));N
	a = (a a_a_a_a_a *)a;N
N
	a (a = 0; a < a; a++) {N
		a->a_a_a = a_0_a(a_a[a]);N
		a->a_a_a =N
				a_a_a_a_0_a(a_a[a]);N
		a->a_a_a = a[a];N
		++a;N
	}N
N
	a_a("%a: a a a, a %aA, a %a, a = %a\a",N
		__a__, a_a, a[0], a_a->a_a);N
N
	*a_a = 0;N
	a0a_a.a_a_a_a = 0;N
	a = a_a_a(a0a_a.a_a_a, (a0_a *)N
		a_a);N
	a (a < 0) {N
		a_a("%a: a a a %a\a",N
			__a__, a);N
		a = -A;N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a. a a a a\a", __a__);N
		a = -A;N
		a a;N
	}N
N
	*a_a = a0a_a.a_a_a_a;N
a:N
	a(a_a_a);N
	a a;N
}N
N
a a a0a_a_a_a(a0_a a_a_a)N
{N
	a a_a_a_a_a_a a_a;N
	a a = 0;N
N
	a(&a_a, 0, a(a_a));N
	a_a.a.a_a = A_A_A(A_A_A_A_A,N
		A_A_A(A_A_A), A_A_A);N
	a_a.a.a_a = a(a_a);N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a = 0;N
	a_a.a.a = A_A_A_A_A_A;N
	a_a.a_a_a = a_a_a;N
N
	a0a_a.a_a_a_a = 0;N
N
	a_a("%a: a a a a %a\a",N
		__a__, a_a_a);N
N
	a = a_a_a(a0a_a.a_a_a, (a0_a *)N
		&a_a);N
	a (a < 0) {N
		a_a("%a: a a a %a\a",N
			__a__, a);N
		a = -A;N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a. a a a_a\a",N
		       __a__);N
		a = -A;N
		a a;N
	}N
a:N
	a a;N
}N
N
a a0a_a_a_a_a(a_a_a_a a_a, a0_a a,N
			a0_a a_a, a a_a)N
{N
	a a_a_a_a a_a;N
	a a = 0, a;N
N
	a (a_a)N
		a_a.a.a = A_A_A_A_A;N
	aN
		a_a.a.a = A_A_A_A_A;N
N
	/* a a a */N
	a = a(a a_a_a_a);N
	a_a.a.a_a = A_A_A(A_A_A_A_A,N
					A_A_A(a(a a_a)),N
					A_A_A);N
	a_a.a.a_a = 0;N
	a_a.a.a_a = 0;N
	a_a.a.a = 0;N
	a_a.a.a_a = a;N
	a_a.a_a = a_a;N
	a_a.a = a;N
	a_a.a_a = a_0_a(a_a);N
	a_a.a_a = a_a_a_a_0_a(a_a);N
	a_a("%a: a a a, a %a\a",N
		  __a__, a);N
N
	a0a_a.a_a_a_a = 0;N
	a = a_a_a(a0a_a.a_a_a, (a0_a *)&a_a);N
	a (a < 0) {N
		a_a("%a: a a a a %a\a",N
			__a__, a);N
		a = -A;N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a. a a a a a\a",N
			__a__);N
		a = -A;N
		a a;N
	}N
	a = 0;N
a:N
	a a;N
}N
N
a a a0a_a_a_a_a(a)N
{N
	a a = 0;N
	a a_a_a_a a_a;N
N
	a(&a_a, 0, a(a_a));N
	a_a.a.a_a = A_A_A(A_A_A_A_A,N
		A_A_A(A_A_A), A_A_A);N
	a_a.a.a_a = a(a_a);N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a = 0;N
	a_a.a.a = A_A_A_A;N
	a_a.a_a_a = 0;N
	a_a.a_a_a = 0;N
	a_a.a_a_a = 0;N
	a_a.a_a = 0;N
	a_a.a = A_A_A_A_A_A;N
N
	a0a_a.a_a_a_a = 0;N
N
	a_a("%a: Aa a a %a\a",N
		__a__, a_a.a);N
N
	a = a_a_a(a0a_a.a_a_a, (a0_a *) &a_a);N
	a (a < 0) {N
		a_a("%a: Aa a a %a\a",N
			__a__, a);N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a_a a a Aa a\a",N
			__a__);N
		a a;N
	}N
a:N
	a a;N
}N
N
a a a0a_a_a_a(a)N
{N
	a a = 0;N
	a a0 = 0;N
	a a_a_a *a_a = A;N
	a a_a_a_a a_a;N
N
	a (!a0a_a_a_a()) {N
		a_a("%a: A a a a!\a", __a__);N
		a -A;N
	}N
N
	a(&a_a, 0, a(a_a));N
	a_a(&a0a_a.a_a[A_A_A]->a);N
	a_a(&a0a_a.a_a);N
N
	a_a = a_a_a_a_a_a(N
		a0a_a.a_a[A_A_A]);N
	a (a_a == A) {N
		a_a("%a: a a a A!\a", __a__);N
		a a;N
	}N
	a (a_a->a_a.a <= 0) {N
		a_a("%a: a a a %a a a\a",N
			__a__, a_a->a_a.a);N
		a a;N
	}N
N
	a0a_a_a_a_a();N
N
	a = a0a_a_a_a(&a_a->a_a.a, 0,N
		(a0_a *)&a_a->a_a.a_a, 0,N
		&a_a->a_a.a0a_a);N
	a (!a)  {N
		a_a("%a: a0a_a_a_a a\a", __a__);N
		a a;N
	}N
N
	a_a.a.a_a = A_A_A(A_A_A_A_A,N
		A_A_A(A_A_A), A_A_A);N
	a_a.a.a_a = a(a_a);N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a_a = A_A_A_A;N
	a_a.a.a_a = A_A_A;N
	a_a.a.a_a = 0;N
	a_a.a.a = 0;N
	a_a.a.a = A_A_A_A;N
	a_a.a_a_a =N
		a_0_a(a_a->a_a.a);N
	a_a.a_a_a =N
		a_a_a_a_0_a(a_a->a_a.a);N
	a_a.a_a_a = a_a->a_a.a0a_a;N
	a_a.a_a = a_a->a_a.a;N
N
	a0a_a.a_a = 0;N
	a0a_a.a_a_a_a = 0;N
N
	a_a("%a: Aa a a %aA, a %a, a a %a\a",N
		__a__, &a_a->a_a.a, a_a->a_a.a,N
		a_a->a_a.a0a_a);N
N
	a = a_a_a(a0a_a.a_a_a, (a0_a *) &a_a);N
	a (a < 0) {N
		a_a("%a: Aa a a %a\a",N
			__a__, a);N
		a a;N
	}N
N
	a = a_a_a(a0a_a.a_a_a_a,N
				(a0a_a.a_a_a_a == 0),N
				a_a_a(A_A));N
	a (!a) {N
		a_a("%a: a_a a a Aa a\a",N
			__a__);N
		a a;N
	}N
N
	a (a0a_a.a_a < 0)N
		a = a0a_a.a_a;N
a:N
	a0 = a0a_a_a_a(a_a->a_a.a0a_a);N
	a (!a0)  {N
		a_a("%a: a0a_a_a_a a a a a %a\a",N
			__a__, a_a->a_a.a0a_a);N
		a = a0;N
		a a;N
	}N
N
a:N
	a_a(&a0a_a.a_a);N
	a_a(&a0a_a.a_a[A_A_A]->a);N
N
	a a;N
}N
N
a a a_a_a_a(a0_a a_a)N
{N
	a a = -A;N
N
	a (a_a) {N
	a A_A_A_A_A:N
		a = A_A;N
		a;N
	a A_A_A_A_A:N
		a = A_A_A;N
		a;N
	a:N
		a_a("%a: a a a %a!\a", __a__, a_a);N
	}N
	a a;N
}N
N
a a a0a_a_a(a0_a a_a,N
			    a_a a_a, a *a)N
{N
	a a = 0;N
	a a_a;N
N
	a_a = a_a_a_a(a_a);N
	a (a_a < 0) {N
		a_a("%a: a a a a a %a!\a",N
			__a__, a_a);N
		a = -A;N
		a a;N
	}N
N
N
	a = a_a_a_a(a_a, a,N
		a0a_a.a_a[a_a], 0, A);N
	a (a < 0) {N
		a_a("%a: a_a_a_a a, a = %a, a a = %a!\a",N
			__a__, a, a_a);N
		a a;N
	}N
a:N
	a a;N
}N
N
a a a0a_a_a(a0_a a_a,N
			      a_a a_a, a *a)N
{N
	a a = 0;N
	a a_a;N
N
	a_a = a_a_a_a(a_a);N
	a (a_a < 0) {N
		a_a("%a: a a a a a %a!\a",N
			__a__, a_a);N
		a = -A;N
		a a;N
	}N
N
N
	a = a_a_a_a(a_a, a,N
					a0a_a.a_a[a_a]);N
	a (a < 0) {N
		a_a("%a: a_a_a_a a, a = %a, a a = %a!\a",N
			__a__, a, a_a);N
		a a;N
	}N
a:N
	a a;N
}N
N
a a a0a_a_a(a0_a a_a,N
	a_a a_a, a *a)N
{N
	a a = 0;N
	a a_a;N
N
	a_a = a_a_a_a(a_a);N
	a (a_a < 0) {N
		a_a("%a: a a a a a %a!\a",N
			__a__, a_a);N
		a = -A;N
		a a;N
	}N
N
N
	a = a_a_a_a(a_a, a,N
				    a0a_a.a_a[a_a], 0, A);N
	a (a < 0) {N
		a_a("%a: a_a_a_a a, a = %a, a a = %a!\a",N
		__a__, a, a_a);N
		a a;N
	}N
N
	a (a_a == A_A_A)N
		a = a0a_a_a_a();N
a:N
	a a;N
}N
N
a a a0a_a_a_a(a)N
{N
	a_a("%a:\a", __a__);N
N
	a_a_a_a_a(A_A_A, a0a_a.a_a);N
	a;N
}N
N
N
a a a0a_a_a_a(a)N
{N
	a a = 0;N
	a a_a_a    a_a_a[] = {N
		{{A_A_A_A_A,N
		{a0a_a_a, a0a_a_a, A,N
		a0a_a_a, A, A} },N
		{A, A, a_a_a_a_a} },N
N
		{{A_A_A_A_A,N
		{a0a_a_a, a0a_a_a, A,N
		a0a_a_a, A, A} },N
		{A, A, a_a_a_a_a} }N
	};N
	a_a("%a:\a", __a__);N
N
	a = a_a_a_a_a(A_A_A,N
		a0a_a.a_a, a_a_a);N
	a (a < 0) {N
		a_a("%a: a a a a a!\a",N
			__a__);N
		a a;N
	}N
N
	a a;N
a:N
	a0a_a_a_a();N
	a a;N
}N
N
a a __a a_a(a)N
{N
	a(&a0a_a, 0, a(a a0a_a));N
	a_a_a(&a0a_a.a_a_a_a);N
	a_a_a(&a0a_a.a_a_a);N
	a_a_a(&a0a_a.a_a_a_a_a);N
	a0a_a.a_a_a_a = A_A;N
	a_a(&a0a_a.a_a);N
	a_a(&a0a_a.a_a);N
N
	a0a_a_a_a();N
N
	a 0;N
}N
a_a(a_a);N
N
a a __a a_a(a)N
{N
	a_a(&a0a_a.a_a);N
	a_a(&a0a_a.a_a);N
	a0a_a_a_a();N
}N
a_a(a_a);N
A_A("A a a");N
A_A("A a0");N
N
