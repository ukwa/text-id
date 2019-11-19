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
	A*0, A(:), A :: a0, a0, a0, a0, a0, a0, a0N
	A*0 :: a_aN
N
	A aN
	a = 0N
N
	! AaN
	Aa_a = .A.N
N
	! Aa a (a a a a a a)N
	!a = [0, 0, 0, 0, 0, 0, 0]N
	a = [0, 0, 0]N
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
	! Aa a a a aN
	A(a0(a/0), a0(a/0), a0(a/0))N
	A(a0(a/0), a0(a/0), a0(a/0), a0(a/0))N
	N
N
! ---------- A A (a a a) ----------N
N
	! a_a_aN
N
	! Aa a (a a a a 0 a a)N
	A Aa(Aa_a, 'Aa', "a_a_a", a_a_a, a_)N
!	A A_A(a_a_a)N
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
	! Aa a:N
	!  A	: A a A*0. Aa = 'A': Aa a a; a = 'A': Aa a a a.N
	!  A	: A a A*0. Aa = 'A':  Aa a a A a a; a = 'A': Aa a a A a a.N
	!  A		: A a A. Aa a a a a A.  A >= 0.N
	A A('A', 'A', a, a_a_a, a, a_a, A_, 0*a-0, A_, a_a)N
	N
	N
	! Aa a a a aN
	a_a(:) = a_a(0:) - a_a(:a-0)N
	N
	a_a = a_a/(A(a_a)/(a-0))N
	N
	! Aa a aN
	A a=0,A(a)N
		a_a = a/a(a)N
		A a=0, a_aN
			N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:(a(a)*a+0)) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
				N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
N
			A (a_a.A.(a/0)) AN
				a0(a) = A(a_a(0:a(a)*a+0) - a_a((a(a)*(a-0)+0):(a(a)*a)))/a(a)N
				! Aa a aN
				a_a_a(a,(a(a)*(a-0)+0):(a(a)*a)) = a_a((a(a)*(a-0)+0):(a(a)*a))/a0(a)N
			N
			A AN
		A AN
	A AN
	N
	!A (Aa_a == .A.) AN
	!A(*,*) "Aa: ", a_aN
	!A(*,*) a_aN
	!A(*,*) a_aN
	!A(*,*) a_a_aN
	!A AN
	N
N
! ---------- A A A A A ----------N
	N
	! Aa a A a aN
	A(0, a="a_a_a_a.a", a='A', a='A')N
	N
	A a=0,(a-0)N
		A(0,"(A0.0)")a_a(a)N
	A AN
	N
	A(0)N
	N
	AN
	N
! ---------- A ----------N
	N
	! Aa a aN
	A(a_a_a)N
	A(a_a, a_a, a_a, a_a_a)N
	A(a0, a0, a0, a0, a0, a0, a0)N
	AN
	N
	A A Aa0N
