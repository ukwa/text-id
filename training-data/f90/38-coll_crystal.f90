! ================================================================================================ !N
!N
!  Aa Aa AaN
! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~N
!N
!  Aa a: Aa Aa, Aa Aa a Aa Aa, A-A-AN
!  Aa-a a AaAa 0 a: Aa A'Aa a Aa A. Aa Aa, A-A-A (0)N
!N
!  Aa a: 0-0-0N
!N
! ================================================================================================ !N
a a_aN
N
  a aAaN
  a a_aN
  a a_a, a : aN
N
  a aN
N
  a,          a, a :: aAa       = 0N
  a,          a, a :: a_a      = 0N
  a,          a, a :: a_A        = 0N
  a,          a, a :: a_a = 0N
N
  ! Aa a a a a a aN
  a,          a, a :: a_a   = 0    ! Aa a [0-0]N
  a(a=aAa), a, a :: a_a    = a ! Aa a a [a]N
  a(a=aAa), a, a :: a_a     = a ! Aa a a [a]N
  a(a=aAa), a, a :: a_a     = a ! Aa a a [a]N
  a(a=aAa), a, a :: a_a   = a ! Aa a a [a]N
  a(a=aAa), a, a :: a_a   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_aAa   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_aAa   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_aAa   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_aAa   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_aAa    = a ! Aa a a aN
  a(a=aAa), a, a :: a_aAa    = a ! Aa a a aN
  a(a=aAa), a, a :: a_a   = a ! Aa a a a aN
  a(a=aAa), a, a :: a_a = a ! Aa a [a]N
  a(a=aAa), a, a :: a_a   = a ! Aa a a a aN
N
  ! Aa AaN
  a(a=aAa), a     :: a_a = 0.0_aAaN
  a(a=aAa), a, a :: a_a(0,a)N
  a,          a, a :: a_aN
N
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
  a(a=aAa), a, a :: aN
N
  a(a=aAa), a :: aA = 0.0a-0_aAa ! Aa a [a]N
  a(a=aAa), a :: aA  = 0.0a-0_aAa ! Aa a a (0) [a]N
  a(a=aAa), a :: a0  = 0.0a-0_aAa ! Aa a aN
N
  ! a a-a a a a a aN
  a(a=aAa), a :: a_a = 0.0_aAaN
  a(a=aAa), a :: a_a = 0.0_aAaN
N
  ! Aa Aa Aa AaN
  a,          a, a :: aAa(a) = .a. ! Aa a a a a a aN
  a(a=aAa), a, a :: a(a)     = aN
  a(a=aAa), a, a :: a(a)     = aN
  a(a=aAa), a, a :: a(a)       = aN
  a(a=aAa), a, a :: aAa(a)      = aN
  a(a=aAa), a, a :: a(a)   = a    ! Aa Aa a [a]N
N
  ! AaN
  a, a :: a_a         =  -0     ! Aa a aN
  a, a :: a_A          =   0     ! AaN
  a, a :: a_A          =   0     ! Aa aN
  a, a :: a_A          =   0     ! AaN
  a, a :: a_A          =   0     ! Aa aN
  a, a :: a_a    =   0     ! AaN
  a, a :: a_A          =   0     ! AaN
  a, a :: a_a         =   0     ! Aa-a a aN
  a, a :: a_a         =   0     ! Aa-a a aN
  a, a :: a_a        =   0     ! Aa aN
  a, a :: a_a        =  0     ! Aa aN
  a, a :: a_a_a =  0     ! Aa a a aN
  a, a :: a_a_a      =  0     ! Aa a a a-a a aN
  a, a :: a_a_a      =  0     ! Aa a a a-a a aN
  a, a :: a_a_a     =  0     ! Aa a a a aN
  a, a :: a_a_a     =  0     ! Aa a a Aa aN
  a, a :: a_A        = 0     ! Aa a a A-A a aN
  a, a :: a_A        = 0     ! Aa a A-A a aN
N
aN
N
! ================================================================================================ !N
!  Aa a a aN
! ================================================================================================ !N
a a_aN
N
  a a_aN
N
  a aN
N
  ! a : Aa a(a), a a A a AaN
  ! a : Aa a(a)N
  ! a   : Aa0 0/0 a. a. a, Aa a a A. Aa, Aa a a aN
  ! aAa  : Aa a Aa(0) a Aa(0) a. [aA], Aa a a A. Aa, Aa a a aN
N
  ! AaN
  a = a_aAaAaA("Aa")N
  aAa(a) = .a.N
  a(a)     =  0.0_aAaN
  a(a)     =  0.0_aAaN
  a(a)       =  0.0a-0_aAaN
  aAa(a)      = 0.0_aAaN
  a(a)   =  0.0_aAaN
N
  ! AN
  a = a_aAaAaA("A")N
  aAa(a) = .a.N
  a(a)     =  0.0_aAaN
  a(a)     =  0.0_aAaN
  a(a)       =  0.0a-0_aAaN
  aAa(a)      = 0.0_aAaN
  a(a)   = aN
N
  ! AN
  a = a_aAaAaA("A")N
  aAa(a) = .a.N
  a(a)     =  0.0_aAaN
  a(a)     =  0.0_aAaN
  a(a)       =  0.0a-0_aAaN
  aAa(a)      = 0.0_aAaN
  a(a)   = aN
N
  ! AaN
  a = a_aAaAaA("Aa")N
  aAa(a) = .a.N
  a(a)     =  0.0_aAaN
  a(a)     =  0.0_aAaN
  a(a)       =  0.0a-0_aAaN
  aAa(a)      = 0.0_aAaN
  a(a)   =  0.0_aAaN
N
a a a_aN
N
! ================================================================================================ !N
!  Aa a a aN
! ================================================================================================ !N
a a_aAa(a, a, aA, aA, a_a, a_a)N
N
  a aN
  a a_aN
  a a_aN
  a a_aN
  a a_aN
  a a_a_aN
N
  a,          a(a)    :: a, aN
  a(a=aAa), a(a)    :: aA, aAN
  a(a=aAa), a(a) :: a_aN
  a(a=aAa), a(a) :: a_aN
N
  a aN
  a(a=aAa) aAa,a_a0N
N
  a = a_aAaA(a)N
  a(aAa(a) .a. .a.) aN
    a(a,"(a)") "A> A Aa a a a a a '"//a(a(a))//"'"N
    a aN
  a aN
N
  a(a(a_aAa(a),a) < a0a0) aN
    a_a0 = -(a(aA/a(a))*a(a))*a_aAa(a)N
  a (a(a_aAa(a)-a0,a) < a0a0) aN
    a_a0 = -(a(aA/a(a))*a(a))*a_aAa(a)N
  aN
    a(a,"(a)") "A> A Aa a a a a a a a"N
    a aN
  a aN
N
  a_a = a_aAa(a) + a_a0N
  aAa  = a_aAa(a)/a_aAa(a)N
  a(a_a >= (-a)*aAa) aN
    a_a = a_aAa(a)*(a_a(aAa + a_a) - a_a(a_a))N
  aN
    a_a = a_aAa(a)*(a_a(aAa - a_a) + a_a(a_a))N
  a aN
N
  a_a  = a_aAa(a)N
  a_a = a_aAa(a)N
  a_a   = a_aAa(a)N
  a_a   = a_aAa(a)N
  a_a = a_aAa(a)N
  a_a = a_aAa(a)N
  a_a = a_a/a_aN
  a_aAa  = a_a(a_a)N
  a_aAa  = a_a(a_a)N
  a_aAa = a_a(a_a)N
  a_aAa = a_a(a_a)N
  a_aAa = a_a(-a_a)N
  a_aAa = a_a(-a_a)N
N
  a_a      = 0N
  a_A        = 0N
  a_a = 0N
N
  a_a(:) = a_aN
N
  a_a   = a_aN
  a_a = a_aN
N
a a a_aAaN
N
! ================================================================================================ !N
!  Aa a a a a a aN
! ================================================================================================ !N
a a_aAa(a,a,a,a,a,a,a,a,a,a,a0,a0,a,a_a,a,a, &N
  a,a_a,a_a,a_a_a,a,a,a_a)N
N
  a aN
  a a_a, a : a_aN
  a a_aN
N
  a,          a(a)    :: aN
  a,          a(a)    :: aN
  a,          a(a)    :: aN
  a,          a(a)    :: aN
N
  a(a=aAa), a(a) :: a,aN
  a(a=aAa), a(a) :: a,aN
  a(a=aAa), a(a) :: a,aN
  a(a=aAa), a(a) :: a0,a0N
  a(a=aAa), a(a) :: a,a_aN
  a,          a(a) :: a,aN
  a,          a(a) :: a(a)N
  a,          a(a) :: a_a(a)N
  a,          a(a) :: a_a(a)N
  a,          a(a) :: a_a_a(a)N
  a(a=aAa), a(a) :: a(a)N
  a(a=aAa), a(a) :: a(a)N
  a(a=aAa), a(a)    :: a_aN
N
  a(a=aAa) a_a,a_a,a_a,a_aN
  a(a=aAa) a_a,a_a,a_a,a_aN
  a(a=aAa) a_a,a_a,a_a,a_a,a_aN
  a(a=aAa) a_a,a,a,a_a,a_a,a_aN
N
  a_a     = aN
  a_a    = aN
  a_a      = aN
  a_a      = aN
  a_a     = aN
  a_a    = aN
  a_a      = aN
  a_a      = aN
  a_a    = aN
  a_a   = aN
  a_a     = aN
  a_a     = aN
  a_a = aN
  a_a   = aN
  a      = aN
  a_a      = aN
N
  aAa       = a_aN
  a_a(a) = a_aN
N
  ! Aa a a a a aN
  ! 0a a: a a a a a a a aN
  a(a_a < a) aN
    a_a = aN
    a   = a_a*(a - a_aAa)N
    a(a_a < -a_a) aN
      a = a_a*(a_aAa - a_a(a_a - a_a))N
    a aN
    a_a = a - aN
  aN
    a_a = aN
    a_a = aN
  a aN
N
  ! 0a a: aN
  a_a  = a_a*a_aAa + a_a*a_aAaN
  a_a  = a_a*a_aAa - a_a*a_aAaN
  a_a = a - a_aN
N
  ! 0a a: a a a a a a=0N
  a = a_aN
  a  = a_a - a_a*a_aN
  a  = a - a*a_aN
  a  = aN
N
  ! Aa a a a a aN
  a(a >= a .a. a < a_a) aN
N
    a a_a(a,a,a,a,a,a,a_a)N
    a   = a_a*a_aAaN
    a = a_a*a_aAaN
    a(aAa /= a_a) aN
      a         = a + 0N
      a(a)      = aN
      a_a(a) = aN
      a(a)    = a0N
      a(a)     = a0N
    a aN
N
  aN
N
    a(a < a) a ! Aa a a aN
      a_a = a((-(a*a)*a_a + a**0)/a_a**0)N
    a ! Aa a a aN
      a_a = a_a((a_a*(a - a_aAa) - a)/a(((a*a_a)*(a_a - a))*(a - a_aAa) + a**0))N
    a aN
N
    ! Aa a a a a, a a a a a a a a a a,N
    ! a a a a a a, a a a a a a a a a aN
    a((a < a .a. a >= a_a) .a. (a >= a .a. a <= a_a)) aN
N
      ! Aa a a a a, a a a a a a a a a a a a aN
      a_a  = a + a**0N
      a_a  = (a*a)*(a - a_a)N
      a_a  = -(a*a)*a_a + a**0N
      a = a_a**0 - a*(a_a*a_a)N
      a_a = (-a_a - a(a))/(a*a_a)N
      a_a = a_aN
N
      a(a_a < a_a*a_aAa) aN
        ! Aa a a a a a: a a aN
        a_a  = a*a_a + aN
        a_a = aN
        a      = a + a*a_aN
        a      = aN
        a      = aN
N
        a_a = a_a/a_aN
        a       = a-a_aN
N
        a a_a(a,a,a,a,a,a,a_a-(a_a*a_a))N
        a   = a_a*a_a(a_a - a_a)N
        a = a_a*a_a(a_a - a_a)N
        a(aAa /= a_a) aN
          a_a    = a_aN
          a_a    = a_aN
          a_a   = a_aN
          a_a  =  a_a*a_aAa + a_a*a_aAaN
          a_a  = -a_a*a_aAa + a_a*a_aAaN
          a_a = a_a + a_aN
N
          a(a_a < a) aN
            a0  = a_a + aN
            a0 = a_aN
          aN
            a0  = a_aN
            a0 = a_aN
          a aN
N
          a         = a + 0N
          a(a)      = aN
          a_a(a) = aN
          a(a)    = a0N
          a(a)     = a0N
        a aN
N
        ! a-aN
        a_a  = aN
        a_a  = aN
        a_a = aN
        a       =  a_a*a_a(-a_a) + a_a*a_a(-a_a)N
        a       = -a_a*a_a(-a_a) + a_a*a_a(-a_a)N
        a      = a_a + a_aN
N
        ! 0a: a a a 0 aN
        a = a + a_aN
        a = a + a_aN
N
      aN
N
        a = a_a*a_a(a_a/a_a)N
        a = a + a*aN
        a = a + a*aN
N
      a aN
N
    aN
N
      a = a_a*a_a(a_a/a_a)N
      a = a + a*aN
      a = a + a*aN
N
    a aN
N
  a aN
N
  ! a a a a a a a a a aN
  ! 0a: a-a a aN
  a_a  = aN
  a_a  = aN
  a_a = aN
N
  a_a  =  a_a*a_aAa + a_a*a_aAaN
  a_a  = -a_a*a_aAa + a_a*a_aAaN
  a_a = a_a + a_aN
N
  ! 0a: a a a a aN
  a(a_a < a) aN
    a  = a_aN
    a  = a_a + aN
    a = a_aN
  aN
    a  = a_aN
    a  = a_aN
    a = a_aN
  a aN
N
  ! 0a: a a a A=Aa aN
  a = a*(a_a - a) + aN
  a = a*(a_a - a) + aN
  a = a_aN
N
  a = 0N
  a_a(a) = aAaN
  a(aAa == a_A) aN
    a_a = a_a + 0N
  a a(aAa == a_A) aN
    a_A = a_A + 0N
  a a(aAa == a_A) aN
    a_a = a_Aa + 0N
  a a(aAa == a_a) aN
    a = 0N
  a a(aAa == a_a_a) aN
    a = 0N
  a aN
N
a a a_aAaN
N
! ================================================================================================ !N
!  Aa a a a a a a a a aN
!  Aa a a a a 0N
! ================================================================================================ !N
a a_a(a,a,a,a,a,a,a)N
N
  a a_aN
  a a_aN
  a a_a_aN
  a aAaN
  a a_a, a : a, a, a, aN
  a a_aN
  a a_aN
N
  a,          a(a)    :: a  ! Aa aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a)    :: aN
N
  a a,a                        ! Aa a/a a a a (A) a a A (A)N
  a(a=aAa) a,a            ! Aa a aN
  a(a=aAa) a_a             ! Aa a a aN
  a(a=aAa) Aa                 ! Aa a a a a a a a a aN
  a(a=aAa) a0,a0                ! Aa a a a [a]N
  a(a=aAa) a                    ! Aa a a a a [a]N
  a(a=aAa) a_a,a_a,a_a,a ! Aa a a a.N
  a(a=aAa) Aa_a, Aa_a     ! Aa a a a [a]N
  a(a=aAa) Aa               ! Aa a aN
  a(a=aAa) Aa,Aa          ! Aa a a a a [a]N
  a(a=aAa) Aa                ! Aa a aN
  a(a=aAa) Aa                ! Aa aN
  a(a=aAa) A_a               ! Aa a a a a a aN
  a(a=aAa) Aa                  ! Aa a aN
  a(a=aAa) a               ! Aa a a a a[a]N
  a(a=aAa) a0              ! Aa a a a. a [a]N
  a(a=aAa) Aa                ! Aa a a [a]N
  a(a=aAa) a                ! A=a_a/AaN
  a(a=aAa) Aa0,Aa0      ! Aa a a(0) [a]N
  a(a=aAa) a,Aa,Aa    ! Aa, a, a A a a a aN
  a(a=aAa) Aa,Aa_A        ! Aa a/a a (a a a a)N
  a(a=aAa) a_a               ! Aa aN
  a(a=aAa) a_a,a_a        ! Aa aN
  a(a=aAa) a_a               ! Aa-a_a a a aN
  a(a=aAa) a                ! Aa a a a aN
  a(a=aAa) Aa                  ! Aa a A->A aN
N
  a(a=aAa) a_a,a,a,a,A_a,aN
N
  a(a=aAa), a :: a_a0 =  0.0_aAa ! Aa aN
  a(a=aAa), a :: a_a0 = -0.0_aAa ! Aa aN
N
  a = 0 ! Aa a/a a a a (A) a a A (A)N
  a  = 0N
N
  ! aA/aA a a a aN
  a    = a*a0a0                ! [AaA]N
  a    = a(a**0 + a**0) ! [AaA]N
  a = a/aN
  a  = a/aN
  a    = a*aN
  a    = a/a  ! Aa/aN
N
  a = (a*a*a**0)/(a + a*a*a + a**0)  ! [AaA]N
  a = a((a(a)*a(a))/a(a))*0.0a-0_aAa ! [AaA]N
N
  a_a = ((0.0_aAa/(a*a**0)) * &N
    (a/(a_a(((a*a)*a)/(a(a)*a0a0)) - a))) * ((aA*aA)/(a*a)) ! [a/AaA]N
  a_a = a_a*a0a0 ! [a/AaA]N
N
  a        = aN
  a_a = a_a*(a_a(a/a_a))N
  A_a   = aN
N
  a(a_a < a .a. a > a .a. a < -a*a_a(a_a)) aN
    A_a = -a/a_a(a_a)N
  a aN
N
  a  = A_a/a_aN
  a_a = a - a_aN
N
  a = -a_a/aN
  a =  a_a/aN
N
  ! A A: a a'a a a aN
  a(a < a .a. a > a .a. a > a_a) aN
    a     = a + a*a_aN
    a     = a + a*a_aN
    aAa = a_aN
    aN
N
  ! A A: a a a a aN
  a a(a < a_a .a. a-a < a_a .a. a-a < a_a) aN
    a0    = aN
    a0    = aN
    a_a  = a + a**0N
    a_a  = (a*a)*a - (a*a)*a_aN
    a_a  = a**0 - (a*a)*a_aN
    a = a_a**0 - (a*a_a)*a_aN
    a     = (-a_a+a(a))/(a*a_a)N
    a(a >= a_a) aN
      a = a_aN
    a aN
    a         =  a*a + a0N
    a_a = a((a-a0)**0 + a**0)N
    a(a >= a .a. a + a*a <= a) aN
      a_a = a*a_aN
    a a(a < a .a. a + a*a >= a) aN
      a_a = a*a_aN
    aN
      a      = (a-a)/aN
      a_a = a((a-a)**0 + a**0)N
      a      = a0 + a*aN
      a_a = a((a-a0)**0 + a**0)N
    a aN
    a_a = a(a_a**0 + a_a**0)N
    a     = a/aN
    a     = a0 + a*aN
    a     = a0 + a*aN
    aAa = a_AN
    a a_aAaAa(a,a,a_a,a)N
    a a_aA(a,a,a_a,a,a(a),a(a),a,a,a)N
    a = a + a*(a_a-a)N
    a = a + a*(a_a-a)N
    aN
N
  a a(a > a_a-a_a .a. a < a_a) aN
    aAa = a_AN
    a a_aAaAa(a,a,a_a,a)N
    a a_aA(a,a,a_a,a,a(a),a(a),a,a,a)N
    aN
N
  a aN
N
  ! A A: a a a a a a.N
  ! Aa a a/a a a 0N
  a0 = a((a0a0*aAa(a))/a)    ! Aa a (a) a a aN
  Aa   = (a/(a0a0*aAa(a)))*a(a) ! Aa a a [a]N
N
  ! Aa A>Aa=>a a a a (a<0)N
  a  = a_a/AaN
  a = (a0*(a_a-Aa))/a_a ! Aa a a a aN
N
  a(a <= a) a ! a a aN
    Aa_a = ((a_a0*0.0_aAa)*a0)*a_a(0.0_aAa*a) ! A aN
    Aa_a = ((a_a0*a0)*a0a0)*a                         ! Aa a aN
    Aa   = a                                                ! Aa a AN
N
  a a(a <= a) a ! Aa a aN
    Aa_a = ((a_a0*0.0_aAa)*a0)*a_a(0.0_aAa*a + 0.0_aAa) ! A aN
    Aa_a = (a_a0*a0)*(0.0_aAa*a - 0.0_aAa)                  ! Aa a aN
    Aa   = 0.0a-0_aAa*(a - 0.0_aAa)/a**a0a0                           ! Aa a a a/aN
    ! A=0.0 a a a a a a A.a (A.Aa)N
N
  a ! Aa >> AaN
    Aa_a = (a_a0*a0)*(a/a)                ! A aN
    Aa_a = (a_a0*a0)*(a - 0.0_aAa/a) ! Aa a a AN
    Aa   = 0.0a-0_aAa*(a - 0.0_aAa)/a**a0a0 ! Aa a A a a a a/aN
    ! A=0.0 a a a a a a A.a (A.Aa)N
N
  a aN
N
  a(a_a == 0) aN
    Aa_a = Aa_a*0.0_aAaN
    Aa_a = Aa_a*0.0_aAaN
    a  = a*0.0_aAaN
  a aN
N
  a(a(a_a) < a) aN
    a  = a_a/aN
    Aa  = a(0.0_aAa*(a - a**0))*a(a-(a/a)) ! Aa a 0%N
    A_a = a0a0N
N
    ! a a a a: 0 aN
    a(a0() <= a) a ! a 0:aN
N
      Aa0 = (a_a*a)*(a-a/a)**0 ! Aa a a a. a(a)N
      a(a0() <= a_a) aN
        Aa0 = ((a_a/a0a0)*a)*(a-a/a)**0  ! Aa a a (a)N
      a aN
N
      Aa = -a_a(a0()) ! Aa a aN
      Aa  = Aa0*Aa   ! Aa a. aN
N
      ! a: a a a a a a aN
      ! a a a -a a a a a...N
      a(a < a_a) aN
        aAa = a_AN
        Aa   = Aa/a_a ! Aa a a a [a]N
        Aa = Aa*a_a(a_a + a*Aa)N
        a     = a  + Aa*(a_a(a*Aa+a_a)) ! Aa a a aN
        a    = a + Aa + (a*(a0()-a))*aN
        a     = a  + a * AaN
N
        a a_aAaAa(a,a,a,a)N
        a = a - a*a*Aa ! Aa a a a a a A [AaA]N
        a  = a  + (a*(a_a-Aa))*aN
        a  = a  + (a*(a_a-Aa))*aN
N
        a a_aAaAa(a,a,a_a-a,a)N
        a a_aA(a,a,a_a-a,a,a(a),a(a),a,a,a)N
        a = a + (a*(a_a-Aa))*aN
        a = a + (a*(a_a-Aa))*aN
      aN
        aAa = a_AN
        a  = AN
        a  = AN
N
        a a_aA(a,a,a_a,a,a,a,a,a_a,a) ! a a a a a a a a AN
        a(aAa /= a_A) aN
          ! a a a a a, a a a a a a a,a aN
          ! a a a "a a" a a a a,a a a a aN
          ! a a a a "a a a"N
          a = a + (a*A_a)*aN
          a = a + (a*A_a)*aN
          a = a + (a*A_a)*AN
          a = a + (a*A_a)*AN
N
          a a_aAaAa(a,a,a,a)N
          a = a - a*a ! a a a a [AaA]N
        aN
          Aa = A_a/a_a + (a*a_a(a))*a ! Aa a[a]N
          a  = AaN
          a   = a + A_a*(a_a(a*Aa+a_a)) ! Aa a a aN
          a   = a + a_a * aN
N
          a a_aAaAa(a,a,a,a)N
          a = a - (a*a)*a ! a a a a [AaA]N
        a aN
      a aN
N
    a ! Aa 0: AN
N
      ! a a a a a'a a (0-0)N
      aAa = a_AN
N
      a = a + (0.0_aAa*(a/a + a))*Aa_aN
      a  = a  + (a*a_a)*aN
      a  = a  + (a*a_a)*aN
N
      a a_aAaAa(a,a,a_a,a)N
      a a_aA(a,a,a_a,a,a(a),a(a),a,a,a)N
N
      a = a + (a*a_a)*aN
      a = a + (a*a_a)*aN
N
    a aN
N
  a ! a 0-0: a a a a. a a a  a AN
N
    Aa = a_a*a_a ! Aa a a. a [a]N
    Aa = a_a(a_a/a + a_a)*AaN
N
    a(Aa > a .a. Aa < Aa) a ! A a aN
N
      ! 0 a: a a a a aN
N
      a(a0() > Aa .a. A == a) a ! Aa 0: AN
N
        aAa = a_AN
        a     = a + a*AaN
        a     = a + a*AaN
        Aa   = Aa_aN
        a    = a + Aa + Aa_a*a_a(a)N
        a     = a  + (a*a)*(a_a - Aa)N
        a     = a  + (a*a)*(a_a - Aa)N
N
        a a_aAaAa(a,a,a_a-a,a)N
        a a_aA(a,a,a_a-a,a,a(a),a(a),a,a,a)N
        a = a + (a*a)*(a_a - Aa)N
        a = a + (a*a)*(a_a - Aa)N
N
      a ! Aa 0: AN
N
        a = a + a*AaN
        a = a + a*AaN
N
        Aa0 = (a_a/a0a0)*a*(a-a/a)**0          ! Aa a a a(a)N
        Aa   = Aa0*(a(a0a0 - a_a(a0())) - a0a0)**0 ! Aa A aN
        a   = Aa/a_aN
        Aa   = Aa*a_a(a + a*a)N
N
        a(Aa < Aa-Aa) aN
N
          aAa = a_AN
          Aa   = Aa/a_a + (a*a_a(a))*aN
          a     = a + Aa*(a_a(a*Aa+a)) ! Aa a a aN
          a     = a + Aa*aN
          a    =  AaN
          Aa_A = (a_a - Aa) - AaN
          a     = a + (a*a)*Aa_AN
          a     = a + (a*a)*Aa_AN
N
          a a_aAaAa(a,a,a,a)N
          a = a - a*Aa ! "a" a a a aN
N
          a a_aAaAa(a,a,a,a)N
          a = a - (a*a)*Aa ! "a" a a a aN
N
          a a_aAaAa(a,a,a_a,a)N
          a a_aA(a,a,a_a,a,a(a),a(a),a,a,a)N
          a = a + (a*a)*Aa_AN
          a = a + (a*a)*Aa_AN
N
        aN
N
          aAa   = a_AN
          Aa = Aa - AaN
          a   = Aa/a_aN
          Aa_A   = Aa*a_a(a + a*a)N
N
          a a_aAaAa(a,a,a,a)N
          a   = a - a*Aa ! "a" a a a aN
          a = aN
          a = aN
N
          a a_aA(a,a,a,a,a,a,a,a_a,a) ! Aa a a a a a a a aN
          a(aAa /= a_A) aN
            ! a a a a a, a a a a a a a,a a a aN
            ! a "a a" a a a a,a a a a a a a a a "a a a"N
            a = a + (a*Aa)*aN
            a = a + (a*Aa)*aN
            a = a + (a*Aa)*AN
            a = a + (a*Aa)*AN
N
            a a_aAaAa(a,a,a,a)N
            a = a - a*AaN
          aN
            Aa = (Aa-Aa)/a_aN
            a   = a + a_a(a*Aa+a)*Aa ! Aa a a aN
            a   = a + a_A*aN
            a  = Aa/a_a + (a*a_a(a))*a ! [a]N
N
            a a_aAaAa(a,a,a,a)N
            a = a - (a*a)*Aa  ! "a" a a a aN
          a aN
        a aN
      a aN
N
    aN
N
      ! Aa 0-0: a a a a (a a a)N
      ! Aa a a a aN
      a(a_a > A_a/a_a + a*a .a. a_a < -a) aN
        aAa = a_AN
        a     = a + (a*a_a)*aN
        a     = a + (a*a_a)*aN
        a(a > a) aN
          a a_aAaAa(a,a,a_a,a)N
          a a_aA(a,a,a_a,a,a(a),a(a),a,a,a)N
        a aN
        a = a + (a*a_a)*aN
        a = a + (a*a_a)*aN
      aN
        Aa = (a_a-(A_a/a_a))/(a*a)N
        a(a0() > Aa) aN
          aAa = a_AN
          a     = a + a*AaN
          a     = a + a*AaN
N
          Aa = (((-a*Aa_a)*a_a)/(a*a) + Aa_a) + ((a*Aa_a)*(A_a/a_a))/(a*a)N
          a  = a + AaN
          a   = a + (a*a)*(a_a-Aa)N
          a   = a + (a*a)*(a_a-Aa)N
N
          a a_aAaAa(a,a,a_a-a,a)N
          a a_aA(a,a,a_a-a,a,a(a),a(a),a,a,a)N
          a = a + (a*a)*(a_a - Aa)N
          a = a + (a*a)*(a_a - Aa)N
        aN
          aAa = a_AN
          a = a + a*AaN
          a = a + a*AaN
          Aa = ((((-a*(0.0_aAa/a))*a(a_a/a(a)))*a0a0)*a_a)/(a*a) + &N
            (((0.0_aAa/a)*a(a_a/Aa(a)))*a0a0)*(a+(A_a/a_a)/(a*a))N
          a = a+AaN
          a  = a + (a*a)*(a_a-Aa)N
          a  = a + (a*a)*(a_a-Aa)N
N
          a a_aAaAa(a,a,a_a-a,a)N
          a a_aA(a,a,a_a-a,a,a(a),a(a),a,a,a)N
          a = a + (a*a)*(a_a - Aa)N
          a = a + (a*a)*(a_a - Aa)N
        a aN
      a aN
    a aN
  a aN
N
a a a_aN
N
! ================================================================================================ !N
!  Aa a a a a a a a a aN
! ================================================================================================ !N
a a_aAaAa(a,a,a,AaAa)N
N
  a a_aN
  a a_aN
  a aAaN
  a a_a, a : a, a, a, aN
  a a_aN
  a a_aN
N
  a,          a(a)  :: aN
  a(a=aAa), a(a)  :: aN
  a(a=aAa), a(a)  :: aN
  a(a=aAa), a(a) :: AaAaN
N
  a(a=aAa) a,a,a_a,a_aN
  a(a=aAa), a :: a = 0.0_aAa ! Aa a a a-a [a a^-0 a^0]N
N
  a       = (((((a*a)*a(a))*a)*a0a0)*a(a))/(a(a)*a**0) ! [AaA]N
  AaAa      = ((a*a(a))/(a(a)*a**0)) * ( &N
    a*a_a(((((a*a)*a)*a)*Aa)/(a0a0*a(a)**0)) - &N
    a**0 - a_a(a/(a(a)*a0a0)) - a_a(a) + a    &N
  )N
  AaAa      = ((AaAa*a(a))*a0a0)*a ! [AaA]N
  Aa        = (AaAa*a0a0)+a          ! [AaA]N
N
  a_a   = ((a*a(a))/(a(a)*a**0)) * ((a*((a/Aa)-(a/Aa))) - &N
    (a_a(Aa/Aa)*(a**0)/(a*Aa)) + ((Aa-Aa)/((a*(a**0))*(a**0))))N
  a_a = ((a_a*a(a))*a)*a0a0N
N
  a(a0() < a_a) aN
    AaAa = ((a*a(a))/(a(a)*a**0)) * ( &N
      a*a_a((a*a*a*a*Aa)/(a0a0*a(a)**0)) -      &N
      a**0 - a_a(a/(a(a)*a0a0)) - a_a(a) + a + &N
      Aa**0/(a*(a**0)*(a**0)) &N
    )N
    AaAa = (AaAa*a(a))*a0a0 ! [AaA/a]N
  aN
    AaAa = AaAa/a ! [AaA/a]N
  a aN
N
a a a_aAaAaN
N
! ================================================================================================ !N
!  Aa a a a a a aN
! ================================================================================================ !N
a a_aA(a,a,a,a,a,a,a,a,a)N
N
  a a_aN
  a a_aN
  a aAaN
  a a_a, a : a, a, a, aN
  a a_aN
  a a_aN
N
  a,          a(a)    :: aN
  a,          a(a)    :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
N
  a a,a_a,aN
  a(a=aAa) a,a_a(0),a,a(0:0),a(0:0),a,a,a_a,a_a,a0,a0a,a,a,a, &N
    a,a,a,a,a,a_a,a,a,a,a,a,a,aN
N
  a_a = aN
  a_a = aN
  a_a = aN
N
  ! Aa a a a a a a a a aN
  ! a a a a-a a a a aN
  a  = ((a*a)*a0a0)*aN
  a0a = a_a(0.0_aAa*a)N
N
  ! Aa a, a Aa'a aN
  a = (0.0_aAa - 0.0_aAa*a_a(a)) + 0.0_aAa*a_a(a)**0N
  a  = (0.0_aAa - 0.0_aAa*a_a(a) + 0.0_aAa*a_a(a)**0)/a0a0N
  a  = (0.0_aAa + 0.0_aAa*a_a(a))/a0a0N
  a   = 0.0_aAa + 0.0_aAa*a_a(a(a))N
N
  ! Aa a Aa. a.N
  a      = a_aN
  a_a = aN
  a     = a(a)N
  a a(a_a,a_a(0,a),a,a)N
N
  ! Aa-a aN
  ! a: a a a a a a aN
  a = a_a * a(a)**(a/a)N
N
  ! Aa a a a a+a a a a a-a (a a : a-a a a a)N
  a(0) = a*aN
  a(0) = a*aN
N
  ! Aa A-Aa a a a a aN
  ! A A a a a a Aa aN
  a(0) = a(0,a) + a*(a - a_a)N
  a    = (a(a)*a(0))/a(0,a)N
N
  ! Aa a a-AN
  a(0) = (a(0,a)*a(0))/a(0,a)N
N
  ! Aa Aa a A-a-a ( a a a A)N
  a(0) = ((a(0) - a(0)) - a(0)) - a(0)N
  a(0) = a(0,a)N
N
  ! Aa a AaN
  a(0) = a(0) + a(0)N
N
  ! Aa a aN
  a(:) = aN
  a(0) = aN
  a a=0,0N
    a(a) = a(a-0) + a(a)/a(0)N
  a aN
N
  ! Aa Aa AaN
  a  = a*a0a0N
  a  = a*a0a0N
  a  = a - a*a ! Aa a a a a a[AaA]N
N
  a   = (0.0_aAa/a)*a(a/a) ! A a a a A (a)N
  a = a*a_a(a)N
  a = a*a_a(a)N
N
  a = a+aN
  a = a+aN
N
  a(a == 0) a ! Aa a/a a aN
N
  ! Aa a a a?N
  a = -a(a)*a_a(a0())N
N
  a(a < a) aN
    ! Aa a aN
    a = a0()N
    a=0N
0  a(a > a(a)) aN
      a = a+0N
      a 0N
    a aN
    a = aN
N
    ! Aa a aN
    a = 0 ! a a a a a=0N
    a a(a)N
    a(0) ! Aa a, a a aN
      aAa = a_aN
N
    a(0) ! a-a aN
      aAa = a_aN
      a     = -a_a(a0())/aN
N
    a(0) ! a-a aN
      aAa = a_aN
      a     = -a_a(a0())/aN
N
    a(0) ! Aa aN
      aAa = a_aN
      a0   = a_a(a0()*a0a)N
      a    = a*(a - a0/a)N
      a(a0 < a) aN
        a = a*aN
      a a(a0 >= a .a. a0 <= a) aN
        a = ((0.0_aAa - 0.0_aAa*a0)*a)/0.0_aAaN
      a a(a0 > a) aN
        a = 0.0_aAa*a/0.0_aAaN
      a aN
      a = -a_a(a0())/aN
N
    a(0)N
      aAa      = a_aN
      a_a = 0N
      a a(a_a(0,a),a_a,a_a)N
      a = a_a(0)N
N
    a aN
N
    ! Aa a a aN
    a(a == 0) aN
      a = a(a)/a_a ! A a a AN
    aN
      a = a(a)/aN
    a aN
N
    a = (a*a_a(a))*a0a0N
    a = (a*a_a(a))*a0a0N
N
    ! Aa a aN
    a = a + aN
    a = a + aN
  a aN
N
  a = a/a0a0N
  a = a/a0a0N
N
a a a_aAN
N
! ================================================================================================ !N
!  Aa a a a a a a a a a aN
! ================================================================================================ !N
a a_aA(a,a,a,a,a,a,a,a,a)N
N
  a aN
  a a_aN
  a a_aN
  a aAaN
  a a_a, a : a_aN
  a a_a, a : a, a, a, a, a, a, aN
  a a_aN
  a a_aN
N
  a,          a(a)    :: aN
  a,          a(a)    :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a) :: aN
  a(a=aAa), a(a)    :: aN
  a(a=aAa), a(a)    :: aN
N
  a a,a,a_a,aN
  a(a=aAa) a,a_a(0),a,a(0:0),a(0:0),a,a,a_a,a_a,aA,a0,a0a,a_a,&N
    a_a,a_a,Aa,Aa,a,a,a,a,a,a_a,a_a,a,a,a,a,A_a,a_a_a,    &N
    A_a,Aa,a,Aa,a_a_a,a_a_a,a,a,a,aN
N
  a_a = aN
  a_a = aN
  a_a = aN
N
  ! Aa a a a a a a a a aN
N
  ! Aa a a a-a a a a aN
  a  = ((a*a)*a0a0)*aN
  a0a = a_a(0.0_aAa*a)N
N
  ! Aa a, a Aa'a aN
  a = (0.0_aAa - 0.0_aAa*a_a(a)) + 0.0_aAa*a_a(a)**0N
  a  = (0.0_aAa - 0.0_aAa*a_a(a) + 0.0_aAa*a_a(a)**0)/a0a0N
  a  = (0.0_aAa + 0.0_aAa*a_a(a))/a0a0N
  a   = 0.0_aAa + 0.0_aAa*a_a(a(a))N
N
  ! Aa a Aa. a.N
  a      = a_aN
  a_a = aN
  a     = a(a)N
  a a(a_a,a_a(0,a),a,a)N
N
  ! Aa a a a a a-a a a a a a aN
  a_a = aN
  a  = a(a_a/a)    ! Aa a a a a a a aN
  a_a = a_a - Aa*aA    ! Aa a a a a a a a aN
  a_a = a_a - (aA/a) ! Aa a a a a a a a a aN
N
  a   = a**0/a(a**0 + (a*a0a0)**0)*a0a0          ! Aa a=A/AN
  Aa = aAa(a)*((a*a_a)/a)*((a*a_a)/a) + a*a_a/a ! Aa a aN
  Aa   = (a*a**0)/a + Aa                            ! Aa a aN
  Aa   = (aAa(a)*(a-a/a))*(a-a/a)                  ! Aa a a a a aN
N
  ! Aa a a AaN
  aA = ((-a**0*a)*a0a0)/(a*aAa(a)*a)N
  Aa  = a((aAa(a)*((a*aA)/a))*((a*aA)/aA) + a*aA/A)N
  Aa    = Aa + AaN
  Aa    = Aa + AaN
N
  ! Aa a a a a a a a a aN
  a_a = (-(aA/a)*Aa)/A - (aA/a)*a(Aa/Aa)N
  a_Aa = (-(aA/a)*Aa)/A + (aA/a)*a(Aa/Aa)N
N
  ! Aa a. a a a a a 0 a a a a a a aN
  a_a = a_a - a/aN
  a_a = a_a - a/aN
N
  ! Aa a "a a" a a^-0N
  A_a  = ((a(a)*0.0a0_aAa)*a0a0)/a(a)N
N
  ! Aa a a a a a a a a a aN
  a_a = ((A_a*a)/a)*(a(a_a/a(a*a0**0)) - a((aA-a_Aa)/a(a*a0**0)))N
  a_a = ((A_a*aA)/a)*(a(a_a/a(a*a0**0)) - a((aA-a_a)/a(a*a0**0)))N
N
  ! "a-a" a a a a a a a aN
  a  = (a_a - a_a)/(a_a - a_a)N
  a  = (a*a)/A_aN
N
  a_a_a  = a(0,a)*a ! Aa a a aN
  a_a_a = a(0,a)*a ! Aa a a aN
N
  ! Aa-a aN
  a = a_a * a(a)**(a/a)N
N
  ! a a a a a+a a a a a-a (a a : a-a a a a)N
  a(0) = a*aN
  a(0) = a*aN
N
  ! a A-Aa a a a a aN
  ! A A a a a a Aa aN
  a(0) = a_a_a + a*(a - a_a)N
N
  ! Aa a a-AN
  a(a_a_a == a) aN
    a(0) = aN
  aN
    a(0) = (a_a_a*a(0))/a_a_aN
  a aN
N
  ! Aa Aa a A-a-a ( a a a A)N
  a(0) = ((a(0) - a(0)) - a(0)) - a(0)N
  a(0) = a(0,a)N
N
  ! Aa a AaN
  a(0) = a(0) + a(0)N
N
  ! Aa a aN
  a(:) = aN
  a(0) = aN
  a(a(0) == a) aN
    a a=0,0N
      a(a) = a(a-0)N
    a aN
  aN
    a a=0,0N
      a(a) = a(a-0) + a(a)/a(0)N
    a aN
  a aN
N
  ! Aa Aa AaN
  a = a*a0a0N
  a = a*a0a0N
N
  ! Aa a/a a aN
  a(a == 0) aN
N
  ! Aa a a a?N
  ! Aa a a aN
  a(a == a) aN
    a_a_a = a0a0N
  aN
    a_a_a = a(a)/aN
  a aN
  a = -a_a_a*a_a(a0())N
N
  ! a(0,*) a_a,a,Aa,Aa,Aa,A_a,a,a_a_a,a_a_a,a_a_aN
N
  a(a < a) aN
    ! Aa a aN
    a = a0()N
    a=0N
0  a(a > a(a)) aN
      a=a+0N
      a 0N
    a aN
    a = aN
N
    ! Aa a aN
    a a(a)N
    a(0) ! a a, a a aN
      aAa = a_a_aN
N
    a(0) ! a-a aN
      aAa = a_a_aN
      a    = (a(a)*a(0))/a_a_aN
      a     = -a_a(a0())/aN
N
    a(0) ! a-a aN
      aAa = a_a_aN
      a     = -a_a(a0())/aN
N
    a(0) ! Aa aN
      aAa = a_a_aN
      a0   = a_a(a0()*a0a)N
      a    = a*(a - a0/a)N
      a(a0 < a) aN
        a = a*aN
      a a(a0 >= a .a. a0 <= a) aN
        a = ((0.0_aAa - 0.0_aAa*a0)*a)/0.0_aAaN
      a a(a0 > a) aN
        a = (a*a)/0.0_aAaN
      a aN
      a = -a_a(a0())/aN
N
    a(0)N
      aAa      = a_a_aN
      a_a = 0N
      a a(a_a(0,a),a_a,a_a)N
      a = a_a(0)N
N
    a aN
N
    ! Aa a a a -----------N
    a(a == 0) aN
      a = a(a)/a_a ! A a a A!!!N
    aN
      a = a(a)/aN
    a aN
N
    a = (a*a_a(a))*a0a0N
    a = (a*a_a(a))*a0a0N
N
    ! Aa a aN
    a = a + aN
    a = a + aN
N
  a aN
N
  a = a/a0a0N
  a = a/a0a0N
N
a a a_aAN
N
! ================================================================================================ !N
! Aa a a a aN
! ================================================================================================ !N
a a_a(a_a)N
N
  a aAaN
  a a_aN
  a a_aN
N
  a(a=aAa) a_a,a_aN
  a(a=aAa), a :: a  = 0.0a-0_aAaN
  a(a=aAa), a :: a = 0.0a0_aAaN
N
  a_a = (a*a_a((-a_a*a)*a(a_a)**0))*(a(a_a)/a_a)**0N
N
a a a_aN
N
a a a_aN
