	A Aa0N
	! Aa a a a a aN
	! Aa a:N
	! a_a_a	:	a a aN
	! a	:	a a (a a a)N
	! a_a	:	a a a a a a a a A a; a a_a==0,N
	!				a a a a a a_a a a aN
	! a_a	:	a a a a A A (a a a, a a)N
	! a,a	:	a/a a a a a aN
	! a_	:	a a a a a a a a a a aN
	!				a a a a aN
	! Aa_a:	a a a a a a a a aN
	! a_	:	a a a a a a a a a_a_a aN
	! a_	:	a a a, a a a aN
	! a_a	:	a a a a a a [ _a = _(a+0) - _a ]N
	! a_a		:	a a a a a [ a_a = _a / A(_a) ]N
	! a_a_a	:	a a a a a a aN
	! a	:	a a a a a a a a a a A(_a)N
	! a_a_a	:	Aa a a a, a a a a a a_a a aN
	! a	:	a a a a a a a a aN
N
	A AN
	A AN
	A AN
N
	A AN
N
	A*0, A(:,:),A :: a_a_aN
	A*0 :: a, a, a_aN
	A A, A(:), A :: a_aN
	A*0 :: a,aN
	A*0, A(0) :: a_N
	A :: Aa_aN
	A*0 :: a_, a_N
	A*0, A(:), A :: a_a, a_aN
	A*0, A(:,:), A :: a_a_aN
	N
	! Aa a a a a a a AN
	A*0, A(:), A ::  A_N
	A A, A(:), A :: A_N
	A*0, A(0) :: aN
	A*0 :: a_aN
	! A A A A A A A A A A 0 AN
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
	A(0,*) aN
	N
	! Aa aN
	A(0)N
	N
	! Aa a_N
	a_(0) = aN
	a_(0) = aN
	N
	! Aa a a a 0N
	A (Aa_a.A.(a.A.0)) AN
		A Aa_a(Aa_a, "Aa<=0")N
	A AN
N
N
	! Aa a (a a a a a a)N
	a = [a/0, a/0, a/0, a/0, a/0, a/0, a/0]N
N
	! Aa "a" (a) a aN
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
	! Aa A a a aN
	A(a_a_a(a,a))N
	N
	! Aa a aN
	A(a_a(a))N
	N
	! Aa a a a a aN
	A(a_a(a-0), a_a(a-0))N
	N
	! Aa a a a aN
	A(a_a_a(A(a), a-0))N
N
N
! ---------- A A (a a a) ----------N
N
	! a_a_aN
N
	! Aa a (a a a a 0 a a)N
	A Aa(Aa_a, 'Aa', "a_a_a", a_a_a, a_)N
N
	! Aa a a aN
	A a=0,aN
		A a=0,aN
			A Aa_a( a_, a_ )N
			N
			A (a.A.a) AN
				a_a_a(a,a) = A(a_, 0a0)N
			AN
				a_a_a(a,a) = A(a_, a_)N
				a_a_a(a,a) = A(a_, -a_)N
			A AN
		A AN
	A AN
N
	A Aa(Aa_a, 'Aa', "a_a_a", a_a_a, a_)N
N
	N
! ---------- A A ----------N
N
	! Aa a a a a a a a aN
	A(A_(0*a-0), A_(0*a-0))N
	N
	! A(A, A, A, A, A, A, A, A, A, A)N
	! Aa a aN
	A A('A', 'A', a, a_a_a, a, a_a, A_, 0*a-0, A_, a_a)N
	N
	N
	! Aa a a a aN
	a_a(:) = a_a(0:) - a_a(:a-0)N
	N
	a_a = a_a/(A(a_a)/(a-0))N
	N
N
	! Aa a aN
	A a=0,A(a)N
N
		! Aa a a a a [ _a = _(a+0) - _a ]N
		A a=0, (a-0)N
			N
			A Aa_a(a, a, a_a, a, a, a_a)N
			a_a_a(a,a) = a_aN
			N
		A AN
	A AN
N
N
! ---------- A A A A A ----------N
	N
	! Aa a A a aN
	N
	! Aa "a" aN
	A(0, a="a_a_a_a.a", a='A', a='A')N
	N
	A a=0,(a-0)N
		A(0,"(A0.0)")a_a(a)N
	A AN
	N
	A(0)N
	N
	N
	! Aa "a a" aN
	A a=0,A(a)N
		! Aa a(a) a aN
		A(a_a,"(A0.0)") a(a)N
		N
		A(0, a="a_a_a_a_a"//A("_"//a_a)//".a", a='A', a='A')N
		N
		A a=0,a-0N
			A(0,"(A0.0)")a_a_a(a,a)N
		A AN
		N
		A(0)N
	A AN
	N
	!AN
N
! ---------- A ----------N
	N
	! Aa a aN
	A(a_a_a)N
	A(a_a)N
	A(a_a)N
	A(a_a)N
	A(a_a_a)N
	AN
	N
	A A Aa0N
N
N
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
