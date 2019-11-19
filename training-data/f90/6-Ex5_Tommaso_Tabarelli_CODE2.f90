	A Aa0_aN
	! Aa a a a a a a (a a A A A)N
	! Aa a:N
	! a	:	a a (a a a a)N
	! a	:	a a (a a)N
	! a_a	:	a a a a a a (a a a a, a a a "a" a)N
	! a,a	:	a/a a a a a aN
	! Aa_a:	a a a a a a a a aN
	! a_a	:	a a a a a a [ _a = _(a+0) - _a ]N
	! a_a		:	a a a a a [ a_a = _a / A(_a) ]N
	! a	:	a a a a a a a a a a A(_a)N
	! a_a_a	:	Aa a a a, a a a a a a a aN
	! a	:	a a a a a a a a aN
N
	A AN
	A AN
	A AN
N
	A AN
N
	A*0, A(:), A :: a, a_a, a_aN
	A*0 :: a0, a0N
	A*0 :: a, a_, a, aN
	A :: Aa_aN
	A*0, A(0) :: aN
	! Aa a a a a (Aa a a a a)N
	A*0 :: a_aN
	A*0 :: a_aN
	A*0, A(:,:), A :: a_a_aN
	A(0) :: a_aN
	N
	A aN
	a = 0N
N
	! AaN
	Aa_a = .A.N
	N
	! Aa a a a aN
	A(0, a="a_a.a", a='a', a='A')N
	N
	! Aa a a aN
	A(0,*) a_N
	N
	! Aa aN
	A(0)N
	N
	! Aa a a a 0N
	A (Aa_a.A.(a_.A.0)) AN
		A Aa_a(Aa_a, "Aa<=0")N
	A AN
	N
	N
	! Aa a (a a a a a a)N
	a = [a_/0, a_/0, a_/0, a_/0, a_/0, a_/0, a_/0]N
N
	! Aa "a" a a a a a a a aN
	A(0, a="a.a", a='A', a='A')N
	N
	A a=0,A(a)N
		A(0,"(A0.0)")a(a)N
	A AN
	N
	A(0)N
N
! ---------- A A ----------N
N
	! Aa a a a aN
	A(a(a_))N
	N
	! Aa a a a aN
	A(a_a(a_))N
	N
	! Aa a a a aN
	A(a_a_a(A(a), a_-0))N
N
! ---------- A A (a a a a) ----------N
N
	! Aa a_ a aN
	A (A(a_,0).A.0) AN
		A a=0,((a_-0)/0)N
			A Aa_a(a0,a0)N
			a(0*a-0) = a0N
			a(0*a) = a0N
		A AN
		A Aa_a(a0,a0)N
		a(a_) = a0N
	AN
	! Aa a_ a aN
		A a=0,(a_/0)N
			A Aa_a(a0,a0)N
			a(0*a-0) = a0N
			a(0*a) = a0N
		A AN
	A AN
N
N
! ---------- A ----------N
N
	A AaAa(a)N
N
N
N
! ---------- A A ----------N
N
	! Aa a a a aN
	a_a(:) = a(0:) - a(:a_-0)N
	N
	a_a = a_a/(A(a_a)/(a_-0))N
N
N
! ---------- A A A A A ----------N
N
	! Aa a aN
	A a=0,A(a)N
	N
		a_a = a(a)N
		N
		! Aa a a a a [ _a = _(a+0) - _a ]N
		A a=0, (a_-0)N
			N
			A Aa_a(a, a, a, a, a_, a_a)N
			a_a_a(a,a) = a_aN
N
		A AN
	A AN
N
! ---------- A A A ----------N
N
	! Aa a A a aN
	A(0, a="a_a_a_a.a", a='A', a='A')N
	N
	A a=0,(a_-0)N
		A(0,"(A0.0)") a_a(a)N
	A AN
	N
	A(0)N
	N
	! Aa "a a" aN
	A a=0,A(a)N
		! Aa a(a) a aN
		A(a_a,"(A0.0)") a(a)N
		N
		A(0, a="a_a_a_a_a"//A("_"//a_a)//".a", a='A', a='A')N
		N
		A a=0,a_-0N
			A(0,"(A0.0)")a_a_a(a,a)N
		A AN
		N
		A(0)N
	A AN
	N
	A(0)N
	N
! ---------- A ----------N
	N
	A(a)N
	A(a_a)N
	A(a_a_a)N
	A(a_a)N
	N
	A A Aa0_aN
N
! ---------------------------------------------------------------N
! ---------------------------------------------------------------N
N
! ---------- A A A A A A ----------N
N
N
	! Aa:N
	! a		: A, a a a a aN
	! a_a		: A, a a a a a a aN
	! a_a	: A, a a a aN
	! a_a		: A, a a a a a a_a aN
	!		A.A.	: 0 <= a_a <= a_a-0, aN
	! a_a 		: A, a a a a aN
	! a_a	: A, a a a (a a a a a a)N
N
	A Aa_a(a, a_a, a_a, a_a, a_a, a_a)N
	N
		A*0, A(*), A(A) :: aN
		A*0, A(A) :: a_a, a_a, a_aN
		A A, A(*), A(A) :: a_aN
		A*0 :: a_a, a_a, a_aN
		A*0 :: a_a, a_a, a_a, a_aN
		N
		a_a = a(a_a)N
		N
		a_a = A(0,a_a-(a_a/0))N
		a_a = A(a_a+(a_a/0), a_a-0)N
		N
		a_a = a_a(a_a+0) - a_a(a_a)N
		a_a = A(a_a((a_a+0):(a_a+0)) - a_a(a_a:a_a))N
		a_a = A(a_a((a_a+0):(a_a+0)) - a_a(a_a:a_a))N
		N
		a_a = a_a / (a_a/a_a)N
		N
	A A Aa_aN
