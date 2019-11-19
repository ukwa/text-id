	A Aa0N
	! Aa a a a a aN
	! Aa a:N
	! Aa	:	a aN
	! A_a	:	a a a [-A_a, A_a]N
	! a_a	:	a a a a a a a a aN
	! a	:	= a_a+0, a a a a.N
	! a_a	:	= 0A_a/a_a ---> a a a a a a a a a aN
	! a_a	:	a a a a a a a (a_a = -A + a*(0*A/a))N
	! a_a	:	a a a a a a a a a a; a a_a==0,N
	!				a a a a a a_a a a aN
	! a_a	:	a a a a a Aa aN
	! a_a	:	a a a a a Aa aN
	! a,a	:	a/a a a a a aN
	! a_	:	a a a a a a a a a a aN
	!				a a a a aN
	! Aa_a:	a a a a a a a a aN
	! a	:	a a a a a a a a aN
	! a_a	:	Aa aN
	! a	:	a a a a aN
	! a	:	=a(a/a), a a a a a a (a a a a a).N
	!				a a a a a a a aN
N
	A AN
	A AN
	A A_AN
N
	A AN
N
	A*0, A(:,:), A :: AaN
	A*0 :: A_a, a_aN
	A*0 :: a, a_a, a, a_aN
	A A, A(:), A :: a_a, a_aN
	A*0, A(:), A :: a_aN
	A*0, A(:,:), A :: a_a_aN
	A*0 :: a, aN
	A*0, A(0) :: a_N
	A :: Aa_aN
	A*0 :: a_a, a, a, a_a, a_, a_aN
	N
	! Aa a a a a a A aN
	A*0, A(:), A ::  A_, a_aN
	A*0 :: A_N
N
	A aN
	a = 0N
N
	! AaN
	Aa_a = .A.N
N
	! Aa a a a a aN
	A(0, a="A.a", a='a', a='A')N
	! Aa a a a aN
	A(0,*) A_aN
	! Aa aN
	A(0)N
N
	! Aa a a a a aN
	A(0, a="a_a.a", a='a', a='A')N
	! Aa a a a a aN
	A(0,"(A0)") a_aN
	! Aa aN
	A(0)N
	N
	! Aa a aN
	a_a = 0.0*A_a/a_aN
	N
	! Aa a aN
	a = a_a+0N
	N
	! Aa a_N
	a_(0) = aN
	a_(0) = aN
N
	N
	! Aa a a a 0N
	A (Aa_a.A.(a.A.0)) AN
		A Aa_a(Aa_a, "Aa<=0")N
	A AN
	N
	! Aa a aN
	a_a = 0.0N
	a = 0.0N
	a = 0.0N
N
! ---------- A A ----------N
N
	! Aa Aa a a aN
	A(Aa(a,a))N
N
	! Aa a a aN
	A(a_a(a))N
N
	! Aa a a aN
	A(a_a(a))N
	N
	! Aa a aN
	!A(a_a_a(a,a))	! Aa a a a a a a aN
	!						!  a a a a a a a a...N
	A(a_a_a(a,0))N
N
	! Aa a_a aN
	A(a_a((a)))N
N
! ---------- A A ----------N
	N
! Aa a:N
N
	! Aa a aN
	A a=0,aN
		a_a(a) = a_a*a*(0.0 + (a-0))N
	A AN
	N
	! Aa (a a 0 a a a a a a)N
	N
	N
	N
	! a_a aN
	A Aa(Aa_a, 'Aa', "a_a", a_a, a)N
	A a=0,aN
		a_a(a) = -A_a + (a_a)*(A(a)-0)N
	A AN
	A Aa(Aa_a, 'Aa', "a_a", a_a, a)N
N
	N
	! AaN
	! Aa aN
	A Aa(Aa_a, 'Aa', "Aa", Aa, a_)N
N
	A a=0,aN
		A a=0,aN
			! Aa a aN
			A (a.A.a) AN
				Aa(a,a) = 0.0*a_a*a_a/(0.0*a*a_a*a_a) + 0.0*a*a*a*a_a(a)*a_a(a)N
			A (a.A.(a+0)) AN
				Aa(a,a) = -0.0*a_a*a_a/(0.*a*a_a*a_a)N
			A (a.A.(a-0)) AN
				Aa(a,a) = -0.0*a_a*a_a/(0.*a*a_a*a_a)N
			AN
				Aa(a,a) = 0a0N
			N
			A AN
		A AN
	A AN
N
	A Aa(Aa_a, 'Aa', "Aa", Aa, a_)N
N
	N
! ---------- A A ----------N
N
	! Aa 0 a a a_aN
	A(a_a(0))N
	N
	! Aa A=-0 a a a a a a a a A_N
	A_=-0N
	N
	! Aa a aN
	!  (a://a.a.a/a/a-a/a0/a0a/a__a_a_a_a0a0a0a0a0a0a0.a)N
	! Aa a N
	A A('A', 'A', a, Aa, a, a_a, a_a, A_, a_a)N
	N
	A_ = A(a_a(0))N
	N
	! Aa a a a a AN
	A(A_(A_))N
N
N
	! Aa a a a a a a a	N
	A A('A', 'A', a, Aa, a, a_a, A_, A_, a_a)N
N
	N
	! Aa a 0 aN
	! Aa = 0*a(0)N
	a_ = 0*A(0a0)N
	a_a = (a*a/a_a)**(0.0)N
	N
	A a=0,0N
		a_a = A(Aa(a))N
		a_a_a(:,a) = 0./A(a_a*(0**a))*a_a*aAa_Aa(a_a, (a-0))*A(-0.0*(a_a*a_a)**0)N
	A AN
N
N
	! A A AN
	!  A A A A A A A AN
	Aa = Aa/A(a_a)N
N
N
! ---------- A A A A A ----------N
N
	! Aa a A a aN
	N
	! Aa a aN
	A(0, a="a_a.a", a='A', a='A')N
	N
	A a=0, aN
		A(0,"(A0.0)") a_a(a)N
	A AN
	N
	A(0)N
	N
	! Aa a aN
	A(0, a="a_a.a", a='A', a='A')N
	N
	A a=0,aN
		A(0,"(A0.0)") a_a(a)N
	A AN
	N
	A(0)N
	N
	N
	! Aa a a "A" (a a a a a a) aN
	!	(a a a a a Aa a a a'a a a a a)N
	! (a a a a, a a a a a a a)N
	A(0, a="a_a.a", a='A', a='A')N
	N
	A a=0,aN
		A a=0,a-0N
			A(0,"(A0.0)",a="Aa") Aa(a,a)N
		A AN
		A(0,"(A0.0)",a="Aa") Aa(a,a)N
	A AN
	N
	A(0)N
N
N
	! Aa a a a a (a a, a a a a a a a)N
	A(0, a="a_a.a", a='A', a='A')N
	N
	A a=0,aN
		A a=0,0-0N
			A(0,"(A0.0)",a="Aa") a_a_a(a,a)N
		A AN
		A(0,"(A0.0)",a="Aa") a_a_a(a,a)N
	A AN
	N
	A(0)N
N
! ---------- A ----------N
	N
	! Aa a aN
	A(Aa)N
	!A(a_a)N
	A(a_a)N
	A(A_)N
	A(a_a)N
	AN
	N
	A A Aa0N
