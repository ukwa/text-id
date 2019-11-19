/*N
 * Aa a a.N
 * Aa (a) 0 Aa Aa, Aa.N
 *N
 * Aa a a a a; a a a a a/a aN
 * a a a a a a A Aa Aa Aa a a aN
 * a Aa Aa Aa; a a 0 a a Aa, aN
 * (a a a) a a a.N
 *N
 * Aa a a a a a a a a a a a, aN
 * A A A; a a a a a aN
 * A a A A A A A.  Aa a AN
 * Aa Aa Aa a a a.N
 *N
 * Aa a a a a a a a A Aa Aa Aa aN
 * a a a; a a a A; a a, a a a Aa AaN
 * Aa, Aa., 0 Aa Aa, Aa Aa, Aa, A 0-0 AN
 */N
N
#a A_A_AN
#a "a.a"N
#aN
N
#a "a/a.a"N
#a "a/a.a"N
#a "a/a.a"N
#a "a/a_a.a"N
#a "a/a.a"N
#a "a/a.a"N
#a "a/a.a"N
#a "a/a_a.a"N
#a "a/a_a.a"N
#a "a/a_a.a"N
#a "a/a_a.a"N
#a "a/a.a"N
#a "a/a.a"N
N
/* Aa a a a a */N
A_A_A(A, A_A, "Aa Aa Aa")N
A_A_A(A, A_A, "Aa Aa Aa")N
N
#a AN
#  a A 0N
#aN
N
/* Aa a a a */N
/*#a A_A_A 0 */N
N
/* Aa a a a a a a */N
a a0_a A_A_A_A = 0;N
N
/* Aa a a a a a a */N
a a0_a A_A_A_A = 0;N
N
/* Aa a a a a a */N
/* #a A_A 0 */N
N
#a A_AN
N
#  a A_A_A(a)	\N
		a((a) != A)N
N
#aN
N
#  a A_A_A(a)N
N
#a	/* A_A */N
N
/*N
 * Aa a a a a/a a aN
 */N
a a_a_a {N
	a0_a a;N
	a_a a;N
	a_a_a a_a;N
	a a;N
N
	a a_a a;N
	a a_a a_a[A_A];N
	a0_a a_a_a;N
};N
N
/*N
 * Aa a a a a a.N
 */N
a a_a_a {N
N
	/* Aa a (a) a a */N
	a a a_a;N
	a a a_a;N
N
	a_a a_a;N
	a_a a_a;N
N
	a a_a;N
	a a_a_a;N
N
	a_a_a a_a;N
	a_a_a a_a_a;N
	a0_a a_a;N
	a0_a a_a_a;N
N
	a0_a a_a;N
	a0_a a_a_a;N
N
	a0_a a_a;N
	a0_a a_a_a;N
N
	a0_a a_a;N
	a0_a a_a_a;N
N
	/* Aa a a a */N
	a a_a_a a;N
N
	/* Aa */N
	a a_a a_a;N
N
	/* "Aa" a, a a a a a a a */N
	a a_a a_a_a;N
N
	/* A -- a a a a a, a a a? */N
N
};N
N
/*N
 * Aa a a a aN
 */N
a a_a_a {N
	a a;N
	a a;N
	a a;N
	a0_a a;N
	a a_a a;N
	a_a_a a_a;N
	a_a_a a_a;N
N
	/* Aa */N
	a a_a a;N
N
	a a_a_a a;N
};N
N
/*N
 * Aa/a a a a aN
 */N
a a_a_a {N
N
	a0_a a;N
	a0_a a;N
N
#a A_A_A   (0 << 0) /* Aa a, a0a */N
#a A_A_A   (0 << 0)N
#a A_A_A   (0 << 0)N
#a A_A_A_A    A_A_AN
#a A_A_A_A   (0 << 0)N
N
	/* Aa a/a */N
	a a a;N
N
	/* Aa a, a a0a, a a a */N
	a a a_a;N
N
	a *a;N
	a a_a[0];N
};N
N
/*N
 * A A a a a a a.N
 */N
a a_a_a {N
	a_a a;N
	a_a a_a;N
	a a a;N
	a a_a a_a;N
	a a_a;N
N
};N
N
/*N
 * A a a a a aN
 */N
a a_a_a {N
	a a a_a;N
	a a a;N
	a0_a a;N
	a0_a a;N
};N
N
/*N
 * Aa a a a a a a a a a aN
 * a a a a a a a (a a) a aN
 * a a (a a).N
 */N
a a_a_a {N
N
	/* Aa a */N
	a a_a_a a_a;N
N
	/* Aa a a */N
	a a_a_a a_a;N
N
	/* Aa a a */N
	a0_a a_a;N
N
	/* Aa - a a a, a.a. */N
	a a_a;N
N
	a a_a_a;N
N
	a0_a a_a;N
	a0_a a_a_a;N
N
	/* Aa a a a a a a: a aN
	 * a a a a a a a a a a.N
	 */N
	a0_a a_a_a;N
N
	/* A -- a/a-a a? */N
	a a_a_a a_a_a;N
	a a_a_a a_a_a;N
N
	a_a_a a_a_a;N
	a0_a a_a_a;N
N
	a a_a[A_A];N
	a_a a_a;N
N
	/* Aa a a a a a a */N
	a {N
		a a_a_a a;N
		a_a_a a;N
		a a_a_a a;N
		a a_a_a a;N
		a a_a_a a;N
		a a_a_a a;N
	} a;N
N
	/* Aa a, a a a a a a */N
	a a_a_a a_a_a;N
N
	/* Aa a a */N
	A_A(a_a_a) a_a_a;N
};N
N
/* Aa a a a a a a a-a a a a a a a aN
 * a a a a.N
 */N
#a A_A_A_A_A 0a0N
N
N
/*N
 * Aa a a a a a.N
 */N
a a_a_a {N
	/* Aa */N
	a a_a[A_A_A + 0];N
N
	/* Aa, a a a a */N
	a0_a a_a;N
N
	/* Aa a */N
	a0_a a_a;N
N
	/* Aa */N
	a_a_a a_a;N
N
	/* Aa-a a a */N
	a *a_a;N
N
	/* Aa */N
	a a_a;N
N
	a (*a_a)(a a_a_a *a);N
N
	a (*a_a)(a a_a_a *a);N
N
	a (*a_a)(a a_a_a *a, a a_a);N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	/* Aa a a a a a a */N
	a a_a_a a_a_a_a;N
N
	/* Aa a a a a a a a aN
	 * a a a a.N
	 */N
	a a_a_a a_a_a_a;N
N
	/* Aa a a a a a */N
	A_A(a_a_a) a_a_a;N
};N
N
/*N
 * AaN
 */N
a a a_a_a {N
	/* Aa a a a a a a */N
	a_a_a a_a;N
N
	/* Aa a a a a 'a' */N
	a (*a_a_a)(a a_a_a *a);N
N
	/* Aa a a a a */N
	a a a_a_a;N
N
	/* Aa a a a a */N
	a a a_a;N
N
	/* Aa a a a a a a */N
	A_A(a_a_a, a_a_a) a_a_a_a;N
N
	/* Aa a a a */N
	A_A(a_a_a, a_a_a) a_a_a;N
N
	/* Aa a a a a a a a */N
	a0_a a_a_a;N
N
	/* Aa a a a, a a */N
	_Aa a0_a a_a_a_a;N
N
	/* Aa a a a a a a a. */N
	a a_a_a_a;N
N
	/* Aa a a a a a a a, a a aN
	 * a a.N
	 */N
	a0_a a_a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a_a;N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a_a;N
	_Aa a0_a a_a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a;N
	_Aa a0_a a_a_a;N
N
	_Aa a0_a a_a_a;N
N
	/* Aa a */N
	a a_a *a_a;N
N
	/* Aa-a a 'a' a a a */N
	a a_a *a_a;N
N
	/* Aa/'a' a a a a */N
	a a *a_a_a;N
N
	/* Aa a a a a a a */N
	a a *a_a_a_a;N
N
} a_a;N
N
/*N
 * Aa a a a a a a a 'a' aN
 */N
#a A_A() a_a_a(&a_a.a_a)N
#a A_A() a_a_a(&a_a.a_a)N
N
N
/*N
 * Aa a a a a aN
 */N
#a A_A_A(a)   a_a_a(&((a)->a_a))N
#a A_A_A(a) a_a_a(&((a)->a_a))N
N
/* Aa */N
a a a_a_a(a a *a);N
a a a_a_a_a(a a_a_a *a_a,N
				 a a_a *a);N
a a a_a_a a_a_a(a_a_a *a,N
						    a a_a_a a);N
a a a_a_a a_a_a(a a_a *a,N
						   a a_a_a a);N
a a a_a_a a_a_a_a(N
	a a a *a, a a a *a,N
	a a_a_a a);N
a a a_a_a a_a_a(N
	a a_a_a a, a a a *a,N
	a a a *a_a,N
	a_a a, a a a *a,N
	a a_a a_a,	a a);N
a a a_a_a a_a_a(N
	a a_a_a a,N
	a a a *a,N
	a a a *a,N
	a a a *a,N
	a0_a a, a0_a a);N
N
/*N
 * Aa AaN
 */N
N
/* Aa a_a a a a */N
a a_a *a_a_a_a(a)N
{N
	a a_a.a_a;N
}N
N
/*N
 * Aa a a a aN
 */N
a a_a_a *a_a_a(a)N
{N
	a a_a_a *a;N
N
	/* A -- a a'a a, a a a a aN
	 * a aN
	 */N
	a = A(A_A_A, a(a a_a_a));N
N
	a a;N
}N
N
/* Aa a a a */N
a a_a_a_a_a(a)N
{N
	a_a.a_a_a_a = a;N
}N
N
/*N
 * Aa a a a a.N
 */N
a a a_a_a(a a_a_a **a)N
{N
	a (a == A)N
		a;N
N
	A_A_A(*a);N
N
	/* A -- a a a, a a a a aN
	 * a aN
	 */N
N
	/* Aa a a a a a a a, a aN
	 * a a a a a a a a.N
	 */N
	a ((*a)->a_a) {N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A_A:N
	a A_A_A_A_A:N
	a A_A_A_A:N
N
		/* Aa a a */N
		a ((*a)->a.a.a_a.a) {N
			/* Aa a a a a a */N
			a_a((*a)->a.a.a_a.a);N
N
			(*a)->a.a.a_a.a = A;N
		}N
N
		a ((*a)->a.a.a_a_a.a) {N
			/* Aa a a a a a */N
			a_a((*a)->a.a.a_a_a.a);N
N
			(*a)->a.a.a_a_a.a = A;N
		}N
N
		a;N
N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A: {N
		a ((*a)->a.a.a.a.a) {N
			/* Aa a a a a a */N
			a_a((*a)->a.a.a.a.a);N
N
			(*a)->a.a.a.a.a = A;N
		}N
		a;N
	}N
N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	{N
		a_a_a *a, *a;N
N
		/* Aa a Aa */N
		a (a = (*a)->a.a.a_a; a; a = a) {N
			a = a->a;N
N
			a_a_a_a(a);N
		}N
N
		/* Aa a a a a, a a a'a aN
		 * a a a.N
		 */N
		(*a)->a.a.a_a = A;N
		(*a)->a.a.a_a = A;N
N
		a;N
	}N
N
	a A_A_A_A:N
	a A_A_A_A:N
		/* Aa a a */N
		a ((*a)->a.a.a.a) {N
			/* Aa a a a a a */N
			a_a((*a)->a.a.a.a);N
N
			(*a)->a.a.a.a = A;N
		}N
		a;N
N
	a A_A_A_A:N
	a A_A_A_A:N
		/* Aa a a a, a a */N
		a ((*a)->a.a.a != A &&N
		    (*a)->a.a.a != (*a)->a.a.a_a) {N
			a((*a)->a.a.a);N
			(*a)->a.a.a = A;N
		}N
		a;N
N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A_A:N
	a A_A_A:N
		a;N
	}N
N
	A(A_A_A, *a);N
	*a = A;N
}N
N
/*N
 * Aa a a a a a a a a aN
 */N
a a_a_a(a a_a_a **a)N
{N
	/* A -- a a; a a, a a */N
	a_a_a(a);N
}N
N
/* Aa a a a */N
a a_a_a_a(a a_a_a *a,N
			     a a a_a_a *a)N
{N
	A_A_A(a, (a a_a_a *)a, a_a_a);N
}N
N
/* Aa a a a a a a a a */N
a a_a_a_a(a a_a_a *a_a,N
			    a a_a_a *a_a)N
{N
	a (A_A(a_a)) {N
		A_A(a_a, a_a, a_a_a);N
N
		/* Aa a 'a' a */N
		A_A(a_a);N
	}N
}N
N
/* Aa a a a a a a a a a */N
a a_a_a *a_a_a(a a_a_a *a)N
{N
	a a_a_a *a = A_A(a);N
N
	a (a)N
		A_A(a, a, a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a a a a aN
 */N
a a_a_a a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a;N
}N
N
a a_a_a_a(a a_a_a *a,N
			   a a_a_a a)N
{N
	A_A_A(a);N
N
	a->a_a = a;N
}N
N
/* Aa a/a a a */N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a_a;N
}N
N
/* Aa a a a a a a a a aN
 * a a a a.N
 */N
a a_a_a_a_a(a a_a_a *a)N
{N
	A_A_A(a);N
N
	A_A(a->a_a, A_A_A_A_A);N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a A_A(a->a_a, A_A_A_A_A);N
}N
N
a a_a_a_a(a a_a_a *a, a a_a_a a)N
{N
	A_A_A(a);N
	a->a_a = a;N
}N
N
a a_a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a;N
}N
N
a a *a_a0a(a a_a_a a)N
{N
	a a *a = "A";N
N
	a (a) {N
	a A_A_A:N
		a = "A";N
		a;N
N
	/* Aa a */N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	/* Aa a */N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	a A_A_A_A_A:N
		a = "A_A_A";N
		a;N
	a A_A_A_A_A:N
		a = "A_A_A";N
		a;N
N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	a A_A_A_A:N
		a = "A_A";N
		a;N
	}N
N
	a a;N
}N
N
a a *a_a0a(a a_a_a a)N
{N
	a a *a = "<Aa>";N
N
	a (a) {N
	a A_A_A_A:N
		a = "A";N
		a;N
	a A_A_A_A:N
		a = "A";N
		a;N
	a A_A_A_A:N
		a = "A";N
		a;N
	}N
N
	a a;N
}N
N
a a_a_a_a(a a_a_a *a,N
			 a a a *a)N
{N
	A_A_A(a);N
N
	a_a(&(a->a.a.a_a), a);N
}N
N
a a a *a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a_a);N
}N
N
a a_a_a_a(a a_a_a *a, a a a *a)N
{N
	A_A_A(a);N
N
	a (a)N
		a_a(&(a->a.a.a_a), a);N
	aN
		a(&(a->a.a.a_a), 0, a(a a));N
}N
N
/* Aa a a a a a - a A a "a a a" */N
a a a *a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a_a.a == 0 &&N
	    A0_A_A_A(&(a->a.a.a_a.a.a0))) {N
		a A;N
	} a {N
		a &(a->a.a.a_a);N
	}N
}N
N
a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a_a_a a)N
{N
	A_A_A(a);N
N
	a->a_a_a = a;N
}N
N
a_a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a_a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a_a_a != 0);N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a_a;N
}N
N
a a_a_a_a_a(a a_a_a *a,N
				       a0_a a)N
{N
	A_A_A(a);N
N
	a->a_a_a = a;N
}N
a a *a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a;N
}N
N
a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a0_a a)N
{N
	A_A_A(a);N
N
	a->a_a_a = a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a_a_a;N
}N
N
a_a_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a_a_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a_a_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a0_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a0_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a_a;N
}N
N
a a_a_a_a(a a_a_a *a, a a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a_a.a) {N
		a_a(a->a.a.a_a.a);N
		a->a.a.a_a.a = A;N
	}N
	a_a(&(a->a.a.a_a.a), a, A);N
}N
N
a a a_a *a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a_a);N
}N
N
a a a_a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a_a_a);N
}N
N
a a a_a_a *a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a_a_a);N
}N
N
/* Aa a a a */N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a;N
}N
N
a_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a;N
}N
N
a_a_a a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a_a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a;N
}N
N
a a a_a *N
a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a &(a->a.a.a.a);N
}N
N
a a a_a *N
a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a_a;N
}N
N
a0_a a_a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a.a_a_a;N
}N
N
/* Aa a A a */N
N
a_a_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a.a_a;N
}N
N
a a_a_a_a_a(a a_a_a *a, a_a_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a.a_a = a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a_a(a a_a_a *a,N
				a0_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
a a_a_a_a_a(a a_a_a *a,N
			      a0_a a)N
{N
	A_A_A(a);N
N
	a->a.a.a = a;N
}N
N
a a_a_a *a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a_a_a *a_a_a_a(a a_a_a *a,N
				    a a_a_a a_a,N
				    a a_a_a a_a,N
				    a a_a *a,N
				    a_a a,N
				    a_a_a a_a)N
{N
	a_a_a *a;N
N
	A_A_A(a);N
N
	a = a_a_a_a_a(&(a->a.a),N
					 a_a, a_a, a,N
					 a, a_a);N
N
	a a;N
}N
N
a a_a_a *N
a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a *N
a_a_a_a_a(a a_a_a *a,N
			  a_a_a *a)N
{N
	A_A_A(a);N
N
	a->a.a.a_a = a;N
	a a->a.a.a_a;N
}N
N
a0_a a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a_a_a a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a_a_a a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a_a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
a a a_a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a);N
}N
N
a a a_a_a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a);N
}N
N
a a a_a *N
a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a);N
}N
N
/* Aa a a a */N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
/* Aa a a a0a? */N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A);N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A);N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A);N
}N
N
a a a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a &(a->a.a.a);N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A_A);N
}N
N
a a a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A_A)N
		a &(a->a.a.a_a);N
	aN
		a A;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a (a->a.a.a & A_A_A_A);N
}N
N
a a *a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
N
	a a->a.a.a;N
}N
N
/* Aa a A a */N
a_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a_a;N
}N
N
a a a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
	a &(a->a.a.a);N
}N
N
a a a_a *a_a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
	a &(a->a.a.a_a);N
}N
N
a_a a_a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a_a;N
}N
N
/* Aa a a a */N
a a a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
	a &(a->a.a.a_a);N
}N
N
a a a *a_a_a_a_a(N
	a a a_a_a *a)N
{N
	A_A_A(a);N
	a &(a->a.a.a);N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a;N
}N
N
a0_a a_a_a_a_a(a a a_a_a *a)N
{N
	A_A_A(a);N
	a a->a.a.a;N
}N
N
/*N
 * Aa a a a aN
 */N
N
N
/*N
 * Aa a a a a a a a, a a.N
 */N
a0_a a_a_a_a_a(a)N
{N
	a a_a_a(&a_a.a_a_a_a,N
				    a_a_a);N
}N
N
/*N
 * Aa a a a a a a, a a.N
 */N
a a_a_a_a_a(a0_a a, a a)N
{N
	/* Aa a a a 'a' */N
	a (!a)N
		a = A_A_A_A;N
N
	a_a_a(&a_a.a_a_a_a, a,N
			      a_a_a);N
}N
N
/*N
 * Aa a a a a a a, a aN
 */N
a0_a a_a_a_a_a(a)N
{N
	a a_a_a(&a_a.a_a_a,N
				    a_a_a_a);N
}N
N
/*N
 * Aa a a a a a a a.N
 */N
a a a_a_a_a(a a_a_a *a,N
			      a a_a *a,N
			      a a_a)N
{N
	a_a_a_a(&(a->a_a_a), a);N
N
#a a(A_A)N
	/* Aa a a a a a a a - a aN
	 * a a a a 'a' a.N
	 */N
	a (a_a)N
		a->a_a.a += 0;N
	aN
		a->a_a.a++;N
#a	/* A_A */N
N
	a A;N
}N
N
/*N
 * Aa a a a a a a a a a a a.N
 */N
a a a_a_a_a(a a_a_a *a,N
				 a a_a_a a,N
				 a a_a *a,N
				 a a_a *a)N
{N
	a a = A;N
	a a a_a *a = A;N
	a a_a_a_a *a;N
	a a a *a, *a_a;N
	a a_a *a;N
	a a_a *a;N
	a a *a;N
N
	a (!a || !a || !a)N
		a a;N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
N
	a->a.a.a_a = a->a;N
	a->a.a.a_a_a = a->a;N
N
	/* Aa: a, a a a */N
	a_a_a(a, &a, &a_a);N
N
	a_a(&(a->a.a.a_a), a);N
N
	a (a_a)N
		a_a(&(a->a.a.a_a), a_a);N
	aN
		a(&(a->a.a.a_a), 0, a(a->a.a.a_a));N
N
	a->a_a_a = a->a;N
N
	a->a.a.a_a = a->a;N
	a->a.a.a_a_a = a->a;N
	a->a_a_a = a->a_a;N
	a->a.a.a_a = a->a;N
	a->a.a.a_a_a = a->a_a;N
	a->a.a.a_a = a->a;N
	a->a.a.a_a = a->a;N
	a->a.a.a_a_a = a->a;N
	a->a.a.a_a = a->a;N
N
	a = a_a_a(a);N
	a = a->a;N
N
	a->a.a.a_a = a->a;N
	a->a.a.a_a = a->a;N
N
	/* Aa a; a a a a a */N
	a_a(&(a->a.a.a_a.a), a->a->a, A);N
N
	/* Aa a a a'a a a a a. */N
	a (A_A(a->a.a.a_a, a))N
		A_A(a->a, A_A_A);N
N
	/* Aa'a a a a a a a a a */N
	a (a == A_A_A_A_A ||N
	    a == A_A_A_A_A) {N
		a = A;N
		a a;N
	}N
N
	/* Aa a a - a'a a a a 'a' a */N
	a = a_a_a(a->a_a);N
	a = a->a;N
	a_a_a_a(a, a, (a == A_A_A_A));N
N
#a A_AN
	a (a->a_a) {N
		a a_a_a *a =N
			a_a_a(a_a_a_a(a->a_a));N
N
		a->a.a.a.a = a->a;N
		/*N
		 * Aa a a a a a/a a a aN
		 * a a a.N
		 *N
		 * Aa a a a a a a a a a, a a aN
		 * a a A/A.N
		 */N
		a (((a == A_A_A_A)N
		     || (a == A_A_A_A))N
		    && !A_A(a->a, A_A_A)N
		    && !A_A(a->a, A_A_A)) {N
			a = A;N
			a a;N
		}N
	}N
#a /* A_A */N
N
	/* Aa a a a a a, a a a a a aN
	 * a a a a a.N
	 */N
	a->a_a = a_a_a_a_a();N
	a->a_a = a->a_a;N
N
	a = A;N
N
a:N
	a a;N
}N
N
/**N
 * a_a_a_a() - Aa a a a a a a aN
 *N
 * @a:	Aa a a aN
 * @a:		Aa a aN
 * @a:	Aa a a aN
 *N
 * Aa:	Aa aN
 */N
a a a_a_a_a(a a_a_a *a,N
				   a a_a_a a,N
				   a a_a_a *a)N
{N
	a a_a *a = A;N
	a a_a *a = A;N
N
	a a = A;N
N
	a (!a || !a)N
		a a;N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
N
	/* Aa a a a */N
	a->a.a.a.a = a->a;N
	a->a.a.a.a = a->a;N
	a->a.a.a.a_a = a->a_a;N
	a->a.a.a.a = a->a;N
N
	a_a_a(&(a->a.a.a.a), a->a);N
N
	/* Aa a a a, a a a a a a a a */N
	a (!a_a_a_a_a(a)N
	    && !A_A(a->a, A_A_A))N
		a->a.a.a.a_a_a = a_a_a0a(N
			a->a.a.a.a_a, a, A_A);N
N
	a = a_a_a(a->a_a);N
N
	/*N
	 * Aa a a a a a a a a a a aN
	 * a.N
	 */N
	a = a ? a->a : a_a_a(A_A);N
N
	/*N
	 * A: Aa a a a a a a a a, aN
	 * a a a'a a a aN
	 */N
	a_a_a_a(a, a, (a == A_A_A_A));N
N
	a = A;N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a A a a a a a.N
 */N
a a a_a_a_a(a a_a_a *a,N
			       a a_a_a a,N
			       a_a_a *a)N
{N
	a a = A;N
	a_a_a *a, *a_a;N
N
	a (A_A_A_A_A)N
		a_a("a a a %a: a-a %a a# %a",N
			   a_a0a(a), a->a.a_a,N
			   a->a_a);N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
N
	/* Aa a a */N
	a_a_a_a(a, a_a_a(A_A),N
			   (a == A_A_A_A));N
N
	a(&a->a.a, 0, a(a->a.a));N
N
	a->a.a.a = a->a;N
	a->a.a.a_a = a->a_a;N
	a->a.a.a_a = a->a_a;N
	a->a.a.a = a->a;N
N
	/* Aa a A'a a, a a 'a' a */N
	a (a = a->a_a; a; a = a->a) {N
		/* Aa a a a a a... */N
		a (a->a == A)N
			a;N
N
		a_a =N
			a_a_a_a_a(N
				&(a->a.a),N
				a->a,N
				a->a->a,N
				&(a->a->a),N
				a->a->a,N
				a->a->a_a->a[0]);N
N
		a (a_a == A || a_a->a == A) {N
			a = A;N
			a;N
		}N
N
		/* Aa a a a a */N
		a_a->a = a->a;N
		a_a->a->a = a->a->a;N
N
		a (a == a->a_a)N
			a->a.a.a_a = a_a;N
	}N
N
	/* Aa a a a a a a-a, a a a'a a aN
	 * a a a a a a a a a.N
	 */N
N
	a a;N
}N
N
/*N
 * Aa a a a A a a a a a.N
 */N
a a a_a_a_a(a a_a_a *a,N
			      a a_a_a a,N
			      a a_a *a)N
{N
	a a a;N
	a_a a;N
	a a_a *a;N
	a a_a *a;N
	a a_a *a;N
N
	a (A_A_A_A_A)N
		a_a("a a a %a: a '%a', a %a, a %a",N
			   a_a0a(a), a->a, a->a_a,N
			   a->a_a);N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
N
	/* Aa a a: a a a a a 0/0,N
	 * a a a a...N
	 */N
	a_a_a_a(a, a_a_a(A_A), a);N
N
	a(&a->a.a, 0, a(a->a.a));N
N
	/* Aa a a a a a-a, a a a a a. */N
	a(a->a_a, a->a, a(a->a_a));N
N
	a->a_a_a = a->a_a;N
	a->a_a = a->a;N
	a->a.a.a = a->a;N
	a->a.a.a = a->a;N
	a->a.a.a_a = a->a_a;N
	a->a.a.a_a = a->a_a;N
	a->a.a.a = a->a;N
N
	a->a.a.a = a->a;N
N
	a->a.a.a = a->a;N
N
	/* Aa a a a a a a. Aa a a aN
	 * a a a a a, a a'a a a a aN
	 * a a a a a a a.N
	 */N
	a(&a.a, &a->a, a(a->a));N
	a.a = a->a;N
	a.a = ((a->a == A_A) ?N
		       A0_A_A : A0_A_A);N
N
	a = (a->a == A_A) ? A_A : A_A0;N
	a = a_a_a(a, A_A, a->a_a);N
	a (a) {N
		a = a_a_a(a, &a);N
		a (a) {N
			A_A_A(a, a) {N
				a (A_A(a->a, A_A_A))N
					a;N
			}N
N
			a (a)N
				a_a(&(a->a.a.a.a),N
					      a->a->a, A);N
N
			a_a_a(a);N
		}N
	}N
N
	a A;N
}N
N
/*N
 * Aa a a a,N
 * a a a a a a a a a a.N
 */N
a a a_a_a(a a_a_a *a)N
{N
	a a = A;N
	a0_a a, a;N
N
	/* Aa a a a a a a */N
	A_A();N
	{N
		A_A_A(&a_a.a_a_a_a, a,N
				  a_a_a);N
	}N
	A_A();N
N
	a = a_a_a_a(N
#a __a__N
		/* A -- a a a a a/a a;N
		 * a a a 'Aa'-a a a a a.N
		 */N
		(a0_a *)&(a_a.a_a_a),N
#aN
		&(a_a.a_a_a),N
#aN
		0, a_a_a_a);N
N
	/* Aa a a-a a a */N
	a = a_a_a(&a_a.a_a_a_a,N
				    a_a_a_a);N
	a (a < a) {N
		a (a_a_a_a_a(N
			    &a_a.a_a_a_a,N
			    &a, a,N
			    a_a_a_a,N
			    a_a_a_a))N
			a;N
	}N
N
	/* Aa a a a a a a a a a */N
	a = a_a_a_a();N
N
	a a;N
}N
N
/*N
 * Aa a a a a a a a a a aN
 */N
a a a_a_aN
a_a_a_a(a a_a *a,N
			     a a_a *a,N
			     a a_a *a_a,N
			     a a_a_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a = A;N
	a a_a_a *a = A;N
N
	/* Aa a a */N
	a = a_a_a();N
N
	/* Aa a a a a a a a */N
	a = a_a_a_a(a, a, a, a);N
	a (a == A) {N
		/* Aa a a a a a aN
		 * a a'a a a 'a' a.N
		 */N
		a ((a == A_A_A_A) &&N
		    a_a && (a_a != a)) {N
			a->a_a_a = a;N
N
			a_a->a_a =N
				a_a_a_a_a();N
			a->a_a_a = a_a->a_a;N
N
			a->a.a.a_a_a = a_a->a;N
			a->a.a.a_a_a = a_a->a;N
			a->a.a.a_a_a = a_a->a;N
			a->a.a.a_a_a = a_a->a;N
			a->a.a.a_a_a = a_a->a;N
N
#a A_AN
			/* Aa a, a a a'a a a, a.N
			 * Aa'a a a a a a-a a.N
			 */N
			a_a(&(a->a.a.a_a_a.a),N
				      a_a->a->a, A);N
#a	/* !A_A */N
		}N
N
		/* Aa a a a */N
		a = a_a_a(a);N
	}N
N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		a (a == A)N
			a = A_A_A_A;N
		aN
			a_a_a_a(&a_a.a_a_a,N
						  0, a_a_a);N
		a (a)N
			a_a_a(&a);N
	}N
N
	a a;N
}N
N
/**N
 * a_a_a_a() - Aa a a a aN
 *N
 * @a:	Aa a a a a a a aN
 * @a:		Aa a a a aN
 *N
 * Aa:	Aa a a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a, a a_a_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a = A;N
	a a_a_a *a = A;N
N
	/* Aa a a */N
	a = a_a_a();N
	a (!a) {N
		a = A;N
		a a;N
	}N
N
	a = a_a_a_a(a, a, a);N
	a (a == A)N
		a = a_a_a(a);N
N
a:N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a (a)N
			a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa a a 'a' a a a.N
 */N
a a_a_a a_a_a(a a_a *a,N
					  a a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a == A || a == A)N
		a a;N
N
	a = a_a_a_a(a, a, A,N
					   A_A_A_A);N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a_a *a,N
					     a a_a *a,N
					     a a_a *a_a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a == A || a == A)N
		a a;N
N
	a = a_a_a_a(a, a, a_a,N
					   A_A_A_A);N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a_a *a,N
					     a a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a == A || a == A)N
		a a;N
N
	a = a_a_a_a(a, a, A,N
					   A_A_A_A);N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a/a a a.N
 */N
a a_a_a a_a_a_a(a a_a *a,N
					      a a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	/* Aa a a a a a a a a a. */N
	a (!a_a.a_a_a_a) {N
		a = A_A_A_A;N
		a a;N
	}N
N
	a (a == A || a == A)N
		a a;N
N
	a = a_a_a_a(a, a, A,N
					   A_A_A_A_A);N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a/a a a a.N
 */N
a a_a_a a_a_a_a(a a_a *a,N
					      a a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	/* Aa a a a a a a a a a. */N
	a (!a_a.a_a_a_a) {N
		a = A_A_A_A;N
		a a;N
	}N
N
	a (a == A || a == A)N
		a a;N
N
	a = a_a_a_a(a, a, A,N
					   A_A_A_A_A);N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a, a a a a a-a-a.N
 */N
a a_a_aN
a_a_a_a(a a_a *a,N
			  a a_a *a,N
			  a a_a_a a,N
			  a a_a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
	a a_a_a *a_a = A;N
	a a *a;N
N
	a (a == A || a == A)N
		a a;N
N
	a_a = a_a_a();N
	a (a_a == A)N
		a a;N
N
	/* Aa a a a a a a a */N
	a_a_a_a(a_a, a, a, a);N
N
	/* Aa a/a, a a a a a a a a aN
	 * a a a, a a a a a a-a/AN
	 * a.N
	 */N
	a (a == A_A_A_A ||N
	    a == A_A_A_A) {N
N
		a_a(a_a->a.a.a_a.a);N
		a_a->a.a.a_a.a = A;N
N
		a_a(&(a_a->a.a.a_a.a),N
			      (a_a_a(a))->a, A);N
N
		a (A_A(a_a->a.a.a_a, a))N
			A_A(a->a, A_A_A);N
N
	}N
N
	/* Aa a a a a a a a, a 'a' */N
	a_a_a_a_a(a_a,N
				      a_a_a_a_a(a));N
N
	a_a_a(a_a);N
N
	a = A_A_A_A;N
N
a:N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a_a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a)N
		a = a_a_a_a(a, A_A_A_A);N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 *N
 * Aa a a a a a a'a a a a a a?N
 */N
a a_a_a a_a_a(a a_a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a)N
		a = a_a_a_a(a, A_A_A_A);N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a_a_a *a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a (a)N
		a = a_a_a_a(a, A_A_A_A);N
N
	a a;N
}N
N
/*N
 * Aa A a a a a.N
 */N
a a_a_a a_a_a(a_a_a *a)N
{N
	a a_a_a a =N
		a_a_a(a, A_A_A_A);N
N
	a a;N
}N
N
/*N
 * Aa A a a a a.N
 */N
a a_a_a a_a_a(a_a_a *a)N
{N
	a a_a_a a =N
		a_a_a(a, A_A_A_A);N
N
	a a;N
}N
N
/*N
 * Aa A a a a a.N
 */N
a a_a_a a_a_a(a_a_a *a)N
{N
	a a_a_a a =N
		a_a_a(a, A_A_A_A);N
N
	a a;N
}N
N
/* Aa a a-a a a a a a */N
a a_a_aN
a_a_a_a(a_a_a *a,N
			a a_a_a a,N
			a a_a_a *a_a)N
{N
	a a_a_a a = A_A_A_A;N
	a a = A;N
	a a_a_a *a = A;N
N
	/* Aa a a */N
	a = a_a_a();N
	a (a == A) {N
		a = A;N
		a a;N
	}N
N
	a = a_a_a_a(a, a, a);N
	a (a != A)N
		a a;N
N
	/* Aa a a a a a a a */N
	a_a_a_a_a(N
		a,N
		a_a_a_a_a(a_a));N
N
	a = a_a_a(a);N
N
a:N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a (a)N
			a_a_a(&a);N
	}N
	a a;N
}N
N
/*N
 * Aa a a a a a.N
 */N
a a_a_a a_a_a(a a_a *a)N
{N
	a a_a_a(a, A_A_A_A);N
}N
N
/*N
 * Aa a a-a a a a.N
 */N
a a_a_a a_a_a(a a_a *a)N
{N
	a a_a_a(a, A_A_A_A);N
}N
N
/*N
 * Aa a A a aN
 */N
a a a_a_a a_a_a(a_a_a *a,N
						    a a_a_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a = A;N
	a a_a_a *a = A;N
N
	/* Aa a a */N
	a = a_a_a();N
N
	a = a_a_a_a(a, a, a);N
	a (a != A)N
		a a;N
N
	a = a_a_a(a);N
N
a:N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa, a a a a a.N
 */N
a a a_a_a a_a_a(a a_a *a,N
						   a a_a_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a;N
	a a_a_a *a = A;N
N
	a = a_a_a();N
N
	a = a_a_a_a(a, a, a);N
	a (a != A)N
		a a;N
N
	a = a_a_a(a);N
N
a:N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a_a(a a a *a,N
					      a a a *a)N
{N
#a !a(A_A) && a(A_A_A)N
	/* Aa a a a A a. */N
N
	/* Aa'a a AaA a a a a a a */N
	a (!(a->a & A_A) != !A_A(a)) {N
		a (A_A_A_A || A_A_A_A)N
			a_a("Aa a a a a: a a0a a a");N
N
		a A_A_A_A;N
	}N
N
	/* Aa a a a a a0 a a aN
	 * a a a a. Aa a a a a a aN
	 * a a a, a a a a (a a)N
	 * a a a a a a a a.N
	 */N
	a (a->a->a == A_A) {N
		a a_a0 *a;N
N
		a = (a a_a0 *)a->a;N
		a_a_a_a(a, a->a_a);N
	}N
#aN
N
	a a_a_a_a(a, a, A_A_A_A);N
}N
N
/*N
 * Aa a a a/a a a a.N
 */N
a a_a_a a_a_a_a(a a a *a,N
						a a a *a)N
{N
	a a_a_a_a(a, a, A_A_A_A);N
}N
N
a a a_a_a a_a_a_a(N
	a a a *a, a a a *a,N
	a a_a_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a = A;N
	a a_a_a *a = A;N
	a a_a *a;N
N
	a (A_A_A_A_A) {N
		a a_a[A_A];N
N
		a0a(a->a, a_a, a(a_a));N
N
		a_a("a a a %a: a %a, a %a:%a",N
			   a_a0a(a), a->a, a->a_a,N
			   a_a);N
	}N
N
	a = a_a_a();N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
	a->a_a_a = a->a_a;N
N
	a = a_a_a(a->a_a);N
	a_a_a_a(a, a, a);N
N
	/* Aa a a-a-a a */N
	a(&a->a.a, 0, a(a->a.a));N
N
	a(a->a_a, a->a, a(a->a_a));N
	a->a_a = a->a;N
	a->a.a.a = *(a->a);N
N
	a (a_a_a(a))N
		a->a.a.a |= A_A_A;N
N
	a (A_A(a)) {N
		a->a.a.a_a = *(a->a);N
		a->a.a.a |=N
			(A_A_A | A_A_A_A);N
	}N
N
	a (A_A(a->a, A_A_A))N
		a->a.a.a |= A_A_A;N
N
	a (a->a) {N
		a_a a;N
N
		a->a.a.a |= A_A_A_A;N
N
		/* Aa a a a a'a a; a a. */N
		a = a(a->a);N
N
		a (a < a(a->a.a.a_a)) {N
			a(a->a.a.a_a, a->a,N
				a(a->a.a.a_a));N
			a->a.a.a = a->a.a.a_a;N
		} a {N
			a->a.a.a = a(a->a);N
		}N
	}N
N
	a = a_a_a(a);N
N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		/* Aa a */N
		a_a_a_a(&a_a.a_a_a_a,N
					  0, a_a_a);N
		a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa a/a a a (a a).N
 */N
a a_a_a a_a_a(a a a *a,N
					a a a *a_a,N
					a_a a,N
					a a a *a,N
					a a_a a_a,N
					a a)N
{N
	a a_a_a a;N
N
	/* Aa a a a */N
	a = a_a_a(A_A_A_A, a, a_a,N
				     a, a, a_a, a);N
	a a;N
}N
N
/*N
 * Aa a/a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					a a a *a_a,N
					a_a a,N
					a a a *a,N
					a a_a a_a)N
{N
	a a_a_a a;N
N
	/* Aa a a a */N
	a = a_a_a(A_A_A_A, a, a_a,N
				     a, a, a_a, a);N
	a a;N
}N
N
/*N
 * Aa a a a A a/a aN
 */N
a a a_a_aN
a_a_a(a a_a_a a,N
		    a a a *a,N
		    a a a *a_a,N
		    a_a a,N
		    a a a *a,N
		    a a_a a_a,N
		    a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a;N
	a a_a_a *a = A;N
	a a_a *a;N
N
	a (A_A_A_A_A) {N
		a a0[A_A_A], a0[A_A];N
N
		a_a("a a a %a: a %a, a %a, a %a",N
			   a_a0a(a),N
			   a_a0a(a, a0, a(a0)),N
			   a->a,N
			   a_a(A_A, &a_a, a0, a(a0)));N
	}N
N
	a = a_a_a();N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
	a->a_a_a = a->a_a;N
N
	a = a_a_a(a->a_a);N
	a_a_a_a(a, a, a);N
N
	a(a->a_a, a->a, a(a->a_a));N
	a->a_a = a->a;N
N
	/* Aa a a-a a a */N
	a(&a->a.a, 0, a(a->a.a));N
N
	a->a.a.a_a = a_a->a;N
	a->a.a.a_a = a_a;N
	a->a.a.a = *a;N
	a->a.a.a = a;N
	a->a.a.a_a = a;N
N
	/* Aa a a a a a a */N
	a = a_a_a(a);N
N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		/* Aa a */N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					  a a a *a,N
					  a a a *a,N
					  a0_a a)N
{N
	a a_a_a a = A_A_A_A;N
N
	a = a_a_a(A_A_A_A,N
				       a, a, a, a, 0);N
N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					     a a a *a,N
					     a a a *a)N
{N
	a a_a_a a;N
N
	a = a_a_a(A_A_A_A,N
				       a, a, a, 0, A_A_A);N
N
	a a;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					     a a a *a)N
{N
	a a_a_a a;N
N
	a = a_a_a(A_A_A_A,N
				       a, A, a, 0, 0);N
N
	a a;N
}N
N
/*N
 * Aa a A a a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					 a a a_a *a,N
					 a_a a)N
{N
	a a_a_a a;N
	a a a = { {0, 0, 0, 0, 0, 0} };N
	a a a;N
N
	a (A_A_A_A)N
		a_a("Aa %a a a a a A %a a %a(%a)",N
			   a_a(*a), a, a->a, a->a);N
N
	A_A_A0(&a);N
	a.a_a0 = *a;N
N
	a = a_a_a(A_A_A_A,N
				       a, &a, &a, 0, 0);N
N
	a a;N
}N
N
/*N
 * Aa a A a a a a.N
 */N
a a_a_a a_a_a(a a a *a,N
					    a a a_a *a,N
					    a_a a)N
{N
	a a_a_a a;N
	a a a = { {0, 0, 0, 0, 0, 0} };N
	a a a;N
N
	a (A_A_A_A)N
		a_a(N
			"Aa %a a a a a A %a a %a(%a)",N
			a_a(*a), a, a->a, a->a);N
N
	A_A_A0(&a);N
	a.a_a0 = *a;N
N
	a = a_a_a(A_A_A_A,N
				       a, &a, &a, 0, 0);N
N
	a a;N
}N
N
/*N
 * Aa a a a a a aN
 */N
a a a_a_aN
a_a_a(a a_a_a a,N
		      a a a *a,N
		      a a a *a,N
		      a a a *a,N
		      a0_a a, a0_a a)N
{N
	a a_a_a a = A_A_A_A;N
	a a;N
	a a_a_a *a = A;N
	a a_a *a;N
N
	a (A_A_A_A_A) {N
		a a0[A_A_A], a0[A_A];N
N
		a_a("a a a %a: a %a, a %a, a %a",N
			   a_a0a(a),N
			   a_a0a(a, a0, a(a0)),N
			   a->a,N
			   a0a(a, a0, a(a0)));N
	}N
N
	a = a_a_a();N
N
	a->a_a = a;N
	a->a_a = A_A_A_A;N
	a->a_a_a = a->a_a;N
N
	a = a_a_a(a->a_a);N
	a_a_a_a(a, a, a);N
N
	a(a->a_a, a->a, a(a->a_a));N
	a->a_a = a->a;N
N
	/* Aa a a-a a a */N
	a(&a->a.a, 0, a(a->a.a));N
N
	a->a.a.a_a = *a;N
	a (a)N
		a->a.a.a = *a;N
	a->a.a.a = a;N
	a->a.a.a = a;N
N
	/* Aa a a a a a a */N
	a = a_a_a(a);N
N
	/* Aa a */N
	a_a_a_a(&a_a.a_a_a, 0,N
				  a_a_a);N
N
	a (a == A)N
		a = A_A_A_A;N
	a {N
		/* Aa a */N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
		a_a_a(&a);N
	}N
N
	a a;N
}N
N
/*N
 * Aa a 'a a'N
 */N
a a_a_a(a a *a, a a)N
{N
	a0_a a, a_a, a, a, a, a,N
		a_a;N
N
	/* Aa a a a a a a a aN
	 * a a.N
	 */N
	a = a_a_a(&a_a.a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a_a,N
				     a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				      a_a_a);N
	a_a = a_a_a(&a_a.a_a_a_a,N
					 a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				    a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				      a_a_a);N
	a_a = a_a_a(&a_a.a_a_a,N
					  a_a_a);N
N
	a_a(a, "Aa a:\aAa a:            %"Aa0"\a",N
		a);N
	a_a(a, "Aa a a:      %"Aa0"\a", a);N
	a_a(a, "Aa a       :      %"Aa0"\a", a_a);N
	a_a(a, "Aa a a a: %"Aa0"\a", a);N
	a_a(a, "Aa a a a: %"Aa0"\a", a);N
	a_a(a, "Aa a a a:   %"Aa0"\a", a_a);N
	a_a(a, "Aa a a:     %"Aa0"\a", a);N
N
	a = a_a_a(&a_a.a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				    a_a_a);N
	a_a(a, "A a:              %"Aa0"\a", a);N
	a_a(a, "A a a:        %"Aa0"\a", a);N
N
	a = a_a_a(&a_a.a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				    a_a_a);N
	a_a(a, "A a:               %"Aa0"\a", a);N
	a_a(a, "A a a:         %"Aa0"\a", a);N
N
	a = a_a_a(&a_a.a_a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a_a,N
				    a_a_a);N
	a_a(a, "Aa a a:        %"Aa0"\a", a);N
	a_a(a, "Aa a a:         %"Aa0"\a", a);N
N
	a = a_a_a(&a_a.a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				    a_a_a);N
	a_a(a, "A A a:         %"Aa0"\a", a);N
	a_a(a, "A A a:          %"Aa0"\a", a);N
N
	a = a_a_a(&a_a.a_a_a,N
					a_a_a);N
	a = a_a_a(&a_a.a_a_a,N
				    a_a_a);N
	a_a(a, "A a a:       %"Aa0"\a", a);N
	a_a(a, "A a a:        %"Aa0"\a", a);N
N
	a A_A;N
}N
N
/*N
 * Aa a 'a a a'N
 */N
a a_a_a_a(a a *a, a a)N
{N
	a a_a_a *a;N
	a0_a a, a_a, a, a_a;N
N
	a_a(a, "Aa a a:\a");N
N
	A_A();N
	a = A_A(&a_a.a_a_a);N
	A_A();N
N
	/* Aa a, a a a a a a */N
	a (a) {N
N
		a = a_a_a(&a->a_a_a,N
					  a_a_a);N
		a_a = a_a_a(&a->a_a_a,N
					      a_a_a);N
		a = a_a_a(&a->a_a_a,N
					   a_a_a);N
		a_a = a_a_a(&a->a_a_a,N
					       a_a_a);N
N
		a_a(a, "%a (%a): a: %"Aa0", a_a: %"Aa0", "N
			"a: %"Aa0", a_a: %"Aa0"\a",N
			a->a_a, a->a_a, a, a_a, a, a_a);N
N
		A_A();N
		a = A_A(a, a_a_a);N
		A_A();N
	}N
N
	a A_A;N
}N
N
/*N
 * Aa a 'a a' a.N
 */N
a a_a_a_a(a a *a)N
{N
	a (a_a.a_a_a_a != A_A_A_A)N
		a_a(a, "a a a %a\a",N
			a_a.a_a_a_a);N
N
	a 0;N
}N
N
/*N
 * Aa aN
 */N
a a_a_a(a a *a,N
			     a a_a_a a,N
			     a a,N
			     a (*a_a)(a a_a_a *),N
			     a (*a)(a a_a_a *),N
			     a (*a_a)(a a_a_a *,N
					    a a),N
			     a *a,N
			     a a_a_a **a_a)N
{N
	a a = 0;N
	a a_a_a *a = A, *a;N
N
	/* Aa */N
	a (a == A) {N
		a = A;N
		a a;N
	}N
N
	a (a <= A_A_A ||N
	    a > A_A_A) {N
		a = A;N
		a a;N
	}N
N
	/* Aa a a a a a */N
	a = A(A_A_A, a(a a_a_a));N
N
	a_a_a(&(a->a_a), A);N
	A_A(&(a->a_a_a_a));N
	A_A(&(a->a_a_a_a));N
N
	a->a_a = a;N
	a->a_a = a;N
	a->a_a = a_a;N
	a->a_a = a_a;N
	a->a_a = a;N
N
	/* Aa - a a a a a a */N
	A_A();N
N
	a->a_a = ++a_a.a_a_a;N
N
	a (a)N
		a(a->a_a, a, A_A_A);N
	aN
		a(a->a_a, A_A_A,N
			 "a-%a", a->a_a);N
N
	/* Aa a a a a a */N
	A_A(a, &a_a.a_a_a, a_a_a) {N
		a (a->a_a > a->a_a)N
			a;N
	}N
N
	a (a)N
		A_A_A(a, a, a_a_a);N
	aN
		A_A_A(&a_a.a_a_a, a,N
				  a_a_a);N
N
	/* Aa a */N
	A_A();N
N
	a (A_A_A_A)N
		a_a("a: a a a '%a' (%a), a %a",N
			   a->a_a, a->a_a, a->a_a);N
N
a:N
	a (a_a)N
		*a_a = a;N
N
	a a;N
}N
N
/* Aa a a a */N
a a *a_a_a_a(a a a_a_a *a)N
{N
	a a->a_a;N
}N
N
a0_a a_a_a_a(a a a_a_a *a)N
{N
	a a->a_a;N
}N
N
a *a_a_a_a(a a a_a_a *a)N
{N
	a a->a_a;N
}N
N
a a_a_a_a_a(a a a_a_a *a)N
{N
	a a_a.a_a_a_a;N
}N
N
/* Aa/a a a'a a - a a a a a aN
 * a A a.N
 */N
a a_a_a(a a_a_a *a)N
{N
	a (a_a_a_a(a))N
		A_A_A(a);N
}N
N
a a_a_a(a a_a_a *a)N
{N
	a (a_a_a_a(a))N
		A_A_A(a);N
}N
N
/*N
 * Aa a a a aN
 */N
a a_a_a *a_a_a_a_a(N
	a a_a_a *a)N
{N
	a a_a_a *a = A;N
N
	a_a_a(a);N
N
	a = A_A(&(a->a_a_a_a));N
	a (a) {N
		A_A(&(a->a_a_a_a), a, a_a_a);N
N
		a_a_a_a(&a->a_a_a, 0,N
					  a_a_a);N
	}N
N
	a_a_a(a);N
N
	a a;N
}N
N
/*N
 * Aa a a a a, a aN
 */N
a a_a_a_a_a(a a_a_a *a,N
				    a a_a_a *a)N
{N
	a a, a;N
	a a_a_a *a;N
N
	a = a_a.a_a_a_a;N
N
	a_a_a(a);N
N
	a (a = 0; a < a; a++) {N
		a = A_A(&(a->a_a_a_a));N
		a (a) {N
			A_A(&(a->a_a_a_a), a, a_a_a);N
N
			A_A_A(a, a, a_a_a);N
		} a {N
			a;N
		}N
	}N
N
	a (a > 0)N
		a_a_a_a(&a->a_a_a, a,N
					  a_a_a);N
N
	a_a_a(a);N
N
	a a;N
}N
N
/*N
 * Aa a a a aN
 */N
a a_a_a_a_a(a a_a_a *a,N
				     a a_a_a *a)N
{N
	a_a_a(a);N
N
	A_A_A(&(a->a_a_a_a), a,N
			  a_a_a);N
N
	a_a_a(a);N
N
	a_a_a_a(&(a->a_a_a), 0,N
				  a_a_a);N
}N
N
/*N
 * Aa a a aN
 */N
a a_a_a_a(a a a_a_a *a)N
{N
	a (a->a_a & A_A_A_A);N
}N
N
/*N
 * Aa a a a a a a a a a; a aN
 * a a a a a a a a a a a a a.N
 */N
a a a_a_a_a(a a_a_a *a_a,N
				 a a_a *a)N
{N
	a_a->a_a = a->a_a;N
N
#a a(A_A)N
	a_a->a_a = a;N
	a_a->a = a->a_a;N
#a /* A */N
}N
N
/*N
 * Aa a a a a a/a a aN
 * a a a a.N
 */N
a a_a_a_a(a)N
{N
	/* Aa a a a a, a a a a a aN
	 * a a a (a a-a) a a. Aa a aN
	 * a a a, a a a-a a a a aN
	 * a.N
	 */N
	a (a_a.a_a) {N
		a_a_a(a_a.a_a,N
				 a_a_a, A, 0,N
				 &a_a.a_a_a);N
	}N
N
	a A;N
}N
N
/*N
 * Aa a a a a a a.N
 */N
a a_a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a_a;N
N
	/* Aa'a a a a a, a a a a a a a a */N
	A_A(&a_a);N
N
	A_A_A(&a_a, a, a_a_a);N
	(a_a.a_a_a)(&a_a);N
}N
N
/*N
 * Aa a aN
 */N
N
/*N
 * Aa a a A aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	/* Aa a a a a-a a a */N
	a = a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(N
			&a_a.a_a_a, 0,N
			a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A)N
		a_a("Aa a %a: a %a a %a a: %a a: %a",N
			   a_a_a_a(a),N
			   a_a0a(a->a_a),N
			   a_a_a_a_a(a),N
			   a_a_a_a_a_a(a),N
			   a_a_a_a_a_a(a));N
N
	a = a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(N
			&a_a.a_a_a, 0,N
			a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A) {N
		a a_a[A_A];N
N
		a0a(a_a_a_a(a),N
			   a_a, a(a_a));N
N
		a_a("%a:%a Aa a a a %a a %a",N
			   a_a_a_a(a), a_a,N
			   a, a_a0a(a_a_a_a(a)));N
	}N
N
	/* Aa a a a a-a a a */N
	a = a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(N
			&a_a.a_a_a, 0,N
			a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a-a a a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A) {N
		a a_a[A_A];N
N
		a0a(a_a_a_a_a(a), a_a,N
			   a(a_a));N
N
		a_a("Aa a %a, a %a, a %a",N
			   a_a0a(a_a_a_a(a)),N
			   a_a_a_a(a), a_a);N
	}N
N
	a = a_a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(&a_a.a_a_a_a,N
					  0, a_a_a);N
N
	a a;N
}N
N
/**N
 * a_a_a_a() - Aa a a a aN
 *N
 * @a:	Aa aN
 *N
 * Aa:	Aa a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A) {N
		a_a("A (%a) Aa a a a %a a %a",N
			   a_a_a_a_a(a), a,N
			   a_a0a(a_a_a_a(a)));N
	}N
N
	a = a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(&a_a.a_a_a, 0,N
					  a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a-a A A a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A) {N
		a a[A_A_A];N
N
		a_a0a(a_a_a_a_a(a), a,N
			       a(a));N
N
		a_a("Aa %a, a %a, a %a",N
			   a_a0a(a_a_a_a(a)),N
			   a, a_a_a_a(a));N
	}N
N
	a = a_a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(&a_a.a_a_a,N
					  0, a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a a-a A a aN
 */N
a a a_a_aN
a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
N
	a (A_A_A_A_A) {N
		a a[A_A];N
N
		a0a(a_a_a_a_a(a), a,N
			   a(a));N
N
		a_a("Aa %a, a %a, a %a",N
			   a_a0a(a_a_a_a(a)),N
			   a, a_a_a_a(a));N
	}N
N
	a = a_a_a_a(a);N
N
	a (a != A_A_A_A)N
		a_a_a_a(&a_a.a_a_a,N
					  0, a_a_a);N
N
	a a;N
}N
N
/*N
 * Aa a aN
 */N
a a a_a_a_a(a a_a_a *a)N
{N
	a a_a_a a;N
	a a_a_a *a;N
	a a, a;N
N
	a = a_a_a_a_a(a);N
N
	a (A_A_A_A_A)N
		a_a("a a '%a': a",N
			   a_a_a_a(a));N
N
	a (a = 0; a < a; a++) {N
N
		a = a_a_a_a_a(a);N
		a (a == A)N
			a;N
N
		/* A a a a a a a a a aN
		 * a a.N
		 */N
		a (a_a_a_a_a(a)) {N
			a = A_A_A_A;N
			a a_a;N
		}N
N
		/* Aa a a a-a a */N
		a (a_a_a_a(a)) {N
N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
			a = a_a_a_a(a);N
			a;N
N
		/* Aa 'a' - a-a */N
		a A_A_A_A_A:N
		a A_A_A_A_A:N
		a A_A_A_A:N
		a A_A_A_A:N
			a = A_A_A_A;N
			a;N
N
		a:N
			a_a_a_a(N
				&a_a.a_a_a, 0,N
				a_a_a);N
N
			a = A_A_A_A;N
			a;N
		}N
N
a_a:N
		a_a_a_a(a, a);N
N
		a_a_a_a_a(a, a);N
	}N
N
	/* Aa a a'a a a a a a a a'a aN
	 * a a a a.N
	 */N
	a (a >= a) {N
		a (A_A_A_A_A)N
			a_a("a a '%a' a a a %a",N
				   a_a_a_a(a), a);N
N
		a_a_a_a(&a_a.a_a_a,N
					  0, a_a_a);N
N
		a_a_a_a();N
	}N
N
	a 0;N
}N
N
#a A_A_AN
N
/*N
 * Aa a a aN
 */N
N
/*N
 * Aa a a aN
 */N
a a a_a_a_a(a a_a_a *a)N
{N
	a a_a_a *a;N
	a a, a;N
N
	/* Aa a a 'a' a a 'a' a */N
N
	a (A_A_A_A_A)N
		a_a("a a '%a': a",N
			   a_a_a_a(a));N
N
	a = a_a_a_a_a(a);N
N
	a (a = 0; a < a; a++) {N
N
		a = a_a_a_a_a(a);N
		a (a == A)N
			a;N
N
		a (A_A_A_A_A)N
			a_a("a a '%a': a %a",N
				   a_a_a_a(a),N
				   a_a0a(a_a_a_a(a)));N
N
		a_a_a_a(a, A_A_A_A);N
N
		a_a_a_a_a(a, a);N
	}N
N
	a (A_A_A_A_A)N
		a_a("a a '%a': a %a",N
			   a_a_a_a(a), a);N
N
	/* Aa a a'a a a a a a a a'a aN
	 * a a a a.N
	 */N
	a (a >= a)N
		a_a_a_a();N
N
	a 0;N
}N
N
/*N
 * Aa a a/a aN
 */N
a a a_a_a_a(a a_a_a *a,N
				     a a)N
{N
	a (A_A_A_A)N
		a_a("a a '%a': %a",N
			   a_a_a_a(a),N
			   a ? "a " : "");N
N
	a 0;N
}N
#a	/* A_A_A */N
N
/*N
 * Aa a a aN
 */N
a a a_a_a(a)N
{N
	a a;N
N
	a = a_a_a("Aa",N
				       A_A_A,N
				       A_A_A_A, A,N
				       a_a_a_a,N
				       A,N
				       A, A);N
N
	a (a != A)N
		a_a("Aa a a a a a: %a",N
			 a);N
N
#a A_A_AN
	/* Aa a a ... */N
	a = a_a_a("Aa",N
				       A_A_A_A,N
				       A_A_A_A, A,N
				       a_a_a_a,N
				       a_a_a_a,N
				       A /* a */, A);N
N
	a (a != A)N
		a_a("Aa a a a a a: %a",N
			 a);N
#a	/* A_A_A */N
}N
N
/* Aa a a/a a a a. Aa a a aN
 * a a a a a a.N
 */N
a a_a_a_a(a)N
{N
	a a_a.a_a_a;N
}N
N
/*N
 * Aa a a-a, a-a a a. Aa a aN
 * a a a a, a a a a a a a a aN
 * a a a a a/a a, a a a aN
 * a a a'a a a.N
 * A: Aa a a a a a a a.N
 */N
a a_a_a_a(a)N
{N
	a (A_A_A_A)N
		a_a("Aa a a-a a");N
N
	a_a.a_a_a = a;N
N
	/* A -- Aa a(a) a a a */N
}N
N
/*N
 * Aa a a a a a a a a a;N
 * a a a a a.N
 */N
a a a_a_a(a)N
{N
	a a = a;N
	a a_a_a *a;N
	a a_a_a *a;N
N
	/* A -- a a a/a a a a, a aN
	 * aN
	 */N
	A_A();N
	{N
		a = A_A(&a_a.a_a_a_a);N
		a = A_A(&a_a.a_a_a);N
	}N
	A_A();N
N
	a (a != A) {N
		a = a;N
		a a;N
	}N
N
	a (a) {N
N
		a_a_a(a);N
N
		a = A_A(&(a->a_a_a_a));N
		a (a == A)N
			a = A_A(&(a->a_a_a_a));N
N
		a_a_a(a);N
N
		a (a != A)N
			a;N
N
		A_A();N
		a = A_A(a, a_a_a);N
		A_A();N
	}N
N
	a (a != A)N
		a = a;N
N
a:N
	a a;N
}N
N
/*N
 * Aa-a a a, a a a a a aN
 * a-a a a a. Aa a'a a a a a, a a.N
 * Aa a a a a, a a a a a a a a aN
 * a a a.N
 * Aa a a a a a a.N
 */N
a a a_a_a_a(a a *a)N
{N
	a (A_A_A_A)N
		a_a("Aa a a a a a");N
N
	a (a_a_a()) {N
		/* Aa a a a a a a */N
		a_a_a_a(a_a.a_a,N
				      a_a_a_a,N
				      A, 0,N
				      &a_a.a_a_a_a);N
N
		/* A - a a a a a a a a a? */N
N
	} a {N
		/* Aa a a a a - a a a a aN
		 * a a a a a.N
		 */N
		a_a_a(a.a, a_a, A, 0, A);N
	}N
N
	a 0;N
}N
N
/*N
 * Aa, a-a a. Aa a a a a a,N
 * a a a a a a/a/a a a a a.N
 * Aa a a, a a a a a a a a, a a a'a aN
 * a a. Aa a'a a a a a, a'a a aN
 * a a a, a'a a a a a a a a a a aN
 * a a.N
 *N
 * A: Aa a a a a a a a.N
 */N
a a_a_a(a)N
{N
	a (A_A_A_A)N
		a_a("Aa a a a");N
N
	a_a_a(a_a.a_a,N
			 a_a_a_a, A, 0,N
			 &a_a.a_a_a_a);N
}N
N
/*N
 * Aa a a a a. Aa a a a a aN
 * a a a a a a a. Aa a a a aN
 * a, a a a a a a a a aN
 * a a a a a. Aa a a, a a a a a aN
 * a a a a a a a a a a.N
 *N
 * Aa a a a a a a a a, a a a aN
 * a a a a a a a - a a a/a a a a aN
 * a.N
 */N
a a a_a_a(a a *a)N
{N
	a a_a_a a_a;N
	a a_a_a a_a;N
	a a_a_a *a;N
	a a_a_a *a, *a;N
	a a, a, a_a;N
	a0_a a, a;N
N
	/* Aa a a a a */N
	a = a_a.a_a_a_a;N
N
	/* Aa a a a a a a a a */N
	A_A(&a_a);N
	A_A(&a_a);N
	a_a = 0;N
N
	/* Aa a a a */N
	a (!a_a.a_a)N
		a a;N
N
	/* Aa a a a a a (a a) a a aN
	 * a a.N
	 */N
	A_A();N
N
	/* Aa a a a */N
	a = A_A(&a_a.a_a_a);N
N
	/* Aa a a a a a a a a */N
	a (a = 0; a < a; a++) {N
		a = A_A(&a_a.a_a_a_a);N
		a (a) {N
			A_A(&a_a.a_a_a_a, a,N
				     a_a_a);N
N
			a->a_a = a->a_a;N
N
			A_A_A(&a_a, a, a_a_a);N
		} a {N
			a;N
		}N
	}N
N
	A_A();N
N
	a_a_a_a(&a_a.a_a_a, a,N
				  a_a_a);N
N
	a (A_A_A_A_A)N
		a_a("a: a a a a: %a", a);N
N
	/* Aa a a a a, a a aN
	 * a. Aa a a a a a a a a, a aN
	 * a a a a aN
	 */N
	a (a) {N
N
		/* Aa a a, a a a a a 'a'N
		 * a.N
		 */N
		a (A_A_A_A_A)N
			a_a("a a %a a a a a '%a'",N
				   a, a_a_a_a(a));N
N
		/* Aa a a a a a a; a aN
		 * a a.N
		 */N
		A_A_A(a, &a_a, a_a_a, a) {N
			a (a_a_a_a(a) ==N
			    A_A_A_A) {N
				a->a_a = a->a_a;N
			} a {N
				/*N
				 * A -- a a-a: aN
				 * a a a a a aN
				 * 'a' a a (a a a a)N
				 */N
N
				/* Aa a a a; a a aN
				 * a a.N
				 */N
				A_A(&a_a, a, a_a_a);N
				A_A_A(&a_a,N
						  a, a_a_a);N
				a_a++;N
			}N
		}N
N
		/* Aa a a a a a */N
		a_a_a(a);N
N
		a (A_A(&a_a))N
			A_A(&(a->a_a_a_a), &a_a,N
				     a_a_a);N
N
		a_a_a_a(&a->a_a_a, a,N
					  a_a_a);N
		a_a_a_a(&a->a_a_a, a,N
					  a_a_a);N
		a = a_a_a(&a->a_a_a,N
					    a_a_a);N
		a = a_a_a(&a->a_a_a,N
					    a_a_a);N
		a (a > a)N
			a_a_a(&a->a_a_a, a,N
					      a_a_a);N
N
		a_a_a(a);N
N
		/* Aa a a a (a a 'a' a a a aN
		 * a), a a aN
		 */N
		A_A(&a_a);N
		a = 0;N
N
		/* Aa a a a a. Aa a a aN
		 * a: a a a a a a a a a'a aN
		 * a _a_ a.N
		 */N
		(*a->a_a)(a);N
N
		/* Aa a a a */N
		a (!a_a.a_a)N
			a;N
N
		/* Aa a a a a a */N
		a_a_a(a);N
N
		a (a < a) {N
			a = A_A(&(a->a_a_a_a));N
			a (a) {N
				A_A(&(a->a_a_a_a), a,N
					     a_a_a);N
N
				A_A_A(&a_a,N
						  a, a_a_a);N
				a++;N
			} aN
				a;N
		}N
N
		a_a_a(a);N
N
		a (A_A_A_A_A)N
			a_a("a a %a a a a a %a",N
				   a, a_a_a_a(a));N
N
		/* Aa a a */N
		A_A();N
		a = A_A(a, a_a_a);N
		A_A();N
	}N
N
	/* Aa a a a a a, a a aN
	 * a a a a a a a a a a a a a.N
	 */N
	a (A_A_A_A_A)N
		a_a("a a %a a, %a a, a a a",N
			   a, a_a);N
N
	/*N
	 * Aa a a a a a a a,N
	 * a a a a a a/a aN
	 */N
N
	/* Aa a a a a */N
	(a_a.a_a_a)(&a_a);N
N
	A_A(&a_a);N
N
	/* Aa a a a a */N
	(a_a.a_a_a)(&a_a);N
N
	A_A(&a_a);N
N
a:N
	a 0;N
}N
N
/*N
 * Aa a a a, a a a a a a a aN
 * a. Aa a a a a a a a a.N
 */N
a a_a_a(a)N
{N
	a (A_A_A_A)N
		a_a("Aa a a a");N
N
	/* Aa a a, a a'a a */N
N
	a_a.a_a = a;N
N
	a (a_a.a_a_a)N
		a_a_a(a_a.a_a_a->a,N
				    &a_a.a_a_a, A);N
N
	a_a_a(a_a.a_a, A);N
N
	/* Aa a */N
	a_a_a(a_a.a_a);N
	a_a.a_a = A;N
	a_a.a_a = A;N
N
	/* A -- Aa a(a) a a a */N
N
	/* A -- Aa-a a a */N
N
	/* A -- Aa a(a), a a */N
}N
N
/*N
 * Aa a a a a a, a/a aN
 */N
a a a_a_a_a(a)N
{N
	a(&a_a, 0, a(a_a));N
N
	a_a_a(&a_a.a_a, A);N
N
	A_A(&a_a.a_a_a_a);N
	A_A(&a_a.a_a_a);N
N
	a_a.a_a_a_a = A_A_A_A;N
N
	a_a.a_a_a_a = A_A_A_A;N
N
	/* Aa a a 'a' a a */N
	a_a_a();N
}N
N
/*N
 * Aa a a a. Aa a a a a a a a aN
 * 'a' a, a a a a a-a.N
 */N
a a_a_a(a)N
{N
	a a_a_a *a;N
	a a_a_a a = {N
		.a = a_a_a_a.a,N
		.a = a_a_a_a.aN
	};N
N
	/* Aa a a */N
N
	a_a.a_a = a_a_a(&a, "Aa a a",N
						  "a_a");N
N
	a_a.a_a = a_a.a_a->a;N
N
	a_a.a_a = a;N
N
	/* Aa a a a a a a a */N
	a_a_a(a_a.a_a, a_a_a, A, 0,N
			 &a_a.a_a_a);N
N
	/* Aa a a a a a */N
N
	A_A();N
	a = A_A(&a_a.a_a_a);N
	A_A();N
N
	a (a) {N
N
		a (a->a_a)N
			(a->a_a)(a);N
N
		/* Aa a a */N
		A_A();N
		a = A_A(a, a_a_a);N
		A_A();N
	}N
N
	a_a_a(a_a.a_a, A);N
}N
N
/*N
 * Aa a a a a a; a a a a_a()N
 */N
a a_a_a(a (*a_a)(a a_a_a *))N
{N
	a_a_a_a();N
	a_a.a_a_a = a_a;N
}N
