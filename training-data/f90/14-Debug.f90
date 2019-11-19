	A AN
	N
	A AaN
		A A A_a_a0, A_a_a0, A_a_a0N
	A AN
	N
	AN
	N
	A Aa_a(Aa, Aa)N
		! Aa a a AN
		! Aa:N
		!	Aa		: a, a a a a a a aN
		!	Aa		: a, a a a a a a a a aN
		!					a aN
		N
		A AN
		N
		A :: AaN
		A(A=*) :: AaN
		N
		A (Aa) AN
N
			A A (Aa)N
N
			A("Aa<=0")N
				A(*,*) "A: a a a a 0!"N
				AN
N
			A("Aa a a")N
				A(*,*) "A: a a a: a a a a a a."N
				AN
N
			A("Aa<0")N
				A(*,*) "A: a a a a a a a a!"N
			N
			A("AaA<0")N
				A(*,*) "A: a a a a a a a a a a a!"N
     			N
     			A("AaA<0")N
				A(*,*) "A: a a a a a a a a a!"N
     			N
			A AN
				! Aa a aN
				A(*,*) "A A A: A, A A A A"N
				AN
N
			A AN
		A AN
		N
		AN
		N
	A A Aa_aN
	N
	N
	! Aa A a a A AN
	A A_a_a0(Aa, A, a, a_a, a)N
		! Aa a a a/a a a aN
		! Aa a:N
		!	Aa		: a, a a a a a a aN
		!	A		: a, a a "Aa" a "Aa", a a a a a a a aN
		!	a		: a. Aa a a: ".Aa_" + a + ".a"N
		!	a_a	: a*0 0A a (a a a a); a a a a a aN
		!	a		: a*0 a a 0 a. Aa a a a a 0a a a a a.N
		!				a a a a a a_a a.N
		N
		N
		A AN
			N
		A, A(A) :: AaN
		A(A=*), A(A) :: A, aN
		A(0) :: a_aN
		A*0, A(0), A(A) :: aN
		A*0, A(a(0),a(0)), A(A) :: a_aN
		A*0 :: a, a, a, a, aN
		A aN
		N
		a_a = ".Aa_" // A(a) // ".a"N
		a_a = A(a_a)N
	N
	N
		A (Aa) A	N
			! Aa aN
			A (A.A."Aa") AN
			N
				! Aa a a a a aN
				!  (a a a a a a)N
				A(0, a=a_a, a='a', a='A', a=a)N
				N
				A (a.A.0) AN
					A(0,*) a_aN
				AN
					! Aa a a a a, a a a aN
					A a=0,a(0)N
						A a=0,a(0)N
							a_a(a,a)=0a0N
						A AN
					A AN
				A AN
				N
				! Aa aN
				A(0)N
N
			A AN
N
N
			! Aa/a aN
			A (A.A."Aa") AN
				N
				! Aa a a a a aN
				A(0, a=a_a, a="A", a="A", a=a)N
				N
				! Aa a a aN
				A(0,*) a_aN
				N
				! Aa aN
				A(0)N
N
N
				! Aa a a a a a a aN
				N
				! Aa a a a aN
				A (a.A.0) AN
					A(0, a=".a_a.a", a="A")N
					A(0)N
				A AN
				N
				A(0, a=".a_a.a", a="a", a="A", a=a, a="a")N
				A(0,*) ""N
				A(0,*) "Aa a: ", a, aN
				a = a + 0N
				A(0,*) ""N
				A(0,*) a_aN
				N
				A(0)N
				N
				N
			A AN
		A AN
	N
	A A A_a_a0N
	N
	! Aa A a a A*0 AN
	A A_a_a0(Aa, A, a, a_a, a)N
		! Aa a a a/a a a aN
		! Aa a:N
		!	Aa			: a, a a a a a a aN
		!	A			: a, a a "Aa" a "Aa", a a a a a a a aN
		!	a			: a. Aa a a: ".Aa_" + a + ".a"N
		!	a_a	: a*0 0A a (a a a a); a a a a a aN
		!	a			: a*0 a a 0 a. Aa a a a a 0a a a a a.N
		!					a a a a a a_a a.N
		N
		N
		A AN
			N
		A, A(A) :: AaN
		A(A=*), A(A) :: A, aN
		A(0) :: a_aN
		A*0, A(0), A(A) :: aN
		A*0, A(a(0),a(0)), A(A) :: a_aN
		A*0 :: a, a, a, a, aN
		A aN
		N
		a_a = ".Aa_" // A(a) // ".a"N
		a_a = A(a_a)N
	N
	N
		A (Aa) A	N
			! Aa aN
			A (A.A."Aa") AN
			N
				! Aa a a a a aN
				!  (a a a a a a)N
				A(0, a=a_a, a='a', a='A', a=a)N
				N
				A (a.A.0) AN
					A(0,*) a_aN
				AN
					! Aa a a a a, a a a aN
					A a=0,a(0)N
						A a=0,a(0)N
							a_a(a,a)=(0a0,0a0)N
						A AN
					A AN
				A AN
				N
				! Aa aN
				A(0)N
N
			A AN
N
N
			! Aa/a aN
			A (A.A."Aa") AN
				N
				! Aa a a a a aN
				A(0, a=a_a, a="A", a="A", a=a)N
				N
				! Aa a a aN
				A(0,*) a_aN
				N
				! Aa aN
				A(0)N
N
N
				! Aa a a a a a a aN
				N
				! Aa a a a aN
				A (a.A.0) AN
					A(0, a=".a_a.a", a="A")N
					A(0)N
				A AN
				N
				A(0, a=".a_a.a", a="a", a="A", a=a, a="a")N
				A(0,*) ""N
				A(0,*) "Aa a: ", a, aN
				a = a + 0N
				A(0,*) ""N
				N
				! Aa a a-aN
				A a=0,a(0)N
					A(0,*) a_a(a,:)N
				A AN
				N
				A(0)N
				N
				N
			A AN
		A AN
N
	A A A_a_a0N
	N
	! Aa A a a A*0 AN
	A A_a_a0(Aa, A, a, a_a, a)N
		! Aa a a a/a a a aN
		! Aa a:N
		!	Aa			: a, a a a a a a aN
		!	A			: a, a a "Aa" a "Aa", a a a a a a a aN
		!	a			: a. Aa a a: ".Aa_" + a + ".a"N
		!	a_a	: a*0 0A a (a a a a); a a a a a aN
		!	a			: a*0 a a 0 a. Aa a a a a 0a a a a a.N
		!					a a a a a a_a a.N
		N
		N
		A AN
			N
		A, A(A) :: AaN
		A(A=*), A(A) :: A, aN
		A(0) :: a_aN
		A*0, A(0), A(A) :: aN
		A*0, A(a(0),a(0)), A(A) :: a_aN
		A*0 :: a, a, a, a, aN
		A aN
		N
		a_a = ".Aa_" // A(a) // ".a"N
		a_a = A(a_a)N
	N
	N
		A (Aa) A	N
			! Aa aN
			A (A.A."Aa") AN
			N
				! Aa a a a a aN
				!  (a a a a a a)N
				A(0, a=a_a, a='a', a='A', a=a)N
				N
				A (a.A.0) AN
					A(0,*) a_aN
				AN
					! Aa a a a a, a a a aN
					A a=0,a(0)N
						A a=0,a(0)N
							a_a(a,a)=(0a0,0a0)N
						A AN
					A AN
				A AN
				N
				! Aa aN
				A(0)N
N
			A AN
N
N
			! Aa/a aN
			A (A.A."Aa") AN
				N
				! Aa a a a a aN
				A(0, a=a_a, a="A", a="A", a=a)N
				N
				! Aa a a aN
				A(0,*) a_aN
				N
				! Aa aN
				A(0)N
N
N
				! Aa a a a a a a aN
				N
				! Aa a a a aN
				A (a.A.0) AN
					A(0, a=".a_a.a", a="A")N
					A(0)N
				A AN
				N
				A(0, a=".a_a.a", a="a", a="A", a=a, a="a")N
				A(0,*) ""N
				A(0,*) "Aa a: ", a, aN
				a = a + 0N
				A(0,*) ""N
				N
				! Aa a a-aN
				A a=0,a(0)N
					A(0,*) a_a(a,:)N
				A AN
				N
				A(0)N
				N
				N
			A AN
		A AN
N
	A A A_a_a0N
	N
	A A AN
N
