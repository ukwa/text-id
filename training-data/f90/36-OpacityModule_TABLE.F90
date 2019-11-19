A AaAa_AN
N
#a A_AN
N
  ! --- a a --------------------------N
N
  A aAaA, A: &N
    AaA, &N
    AaAN
  A aAaAaAaA, A: &N
    AaAaAaAN
  A aAaAaAa, A: &N
    AaAaAaN
  A aAaAa, A: &N
    AaAaAaAa_0A0A, &N
    AaAaAaAa_0A0A_Aa, &N
    AaAaAaAa_0A0A, &N
    AaAaAaAa_0A0A_Aa, &N
    AaAaAaAa_0A_Aa_AaN
N
  ! ----------------------------------------------N
N
#aN
N
  A AaAa, A: &N
    AN
  A AaAa, A: &N
    Aa, &N
    Aa, &N
    Aa, &N
    AaAN
  A AaAaAa, A: &N
    aA, &N
    aAaAN
  A AaAa, A: &N
    AaAN
N
  A AN
  AN
N
  A, A :: AaAa = .A.N
  A(0) :: &N
    AaAaAa_AaAa, &N
    AaAaAa_Aa,  &N
    AaAaAa_A,  &N
    AaAaAa_AaN
  A :: &N
    aA_A, aA_A, aA_AN
  A(A), A(:), A, A :: &N
    Aa_A, Aa_A, Aa_A, Aa_A, Aa_A, &N
    AaAa_A, AaAa_A, AaAa_A, AaAa_AN
  A(A), A(:), A, A :: &N
    A_AaAaN
  A(A), A(:,:), A, A :: &N
    A_Aa, A_A, A_AaN
  A(A), A(:,:,:,:,:), A, A :: &N
    AaAa_AN
  A(A), A(:,:,:,:,:,:), A, A :: &N
    Aa_A, A_A, Aa_A, A_A, Aa_AN
#a A_AN
  A(AaAaAa), A :: &N
    AN
#aN
N
  A :: AaAa_AN
  A :: AaAa_AN
  A :: AaAaAa_AN
  A :: AaAaAa_A_AN
  A :: AaAaAa_A_AN
N
#a a(A_A_A)N
  !$A A A &N
  !$A ( AaAa_A, AaAa_A, AaAa_A, Aa_A, AaAa_A, &N
  !$A   A_AaAa, A_Aa, A_A, A_Aa, &N
  !$A   AaAa_A, Aa_A, A_A, Aa_A, A_A, Aa_A )N
#a a(A_A)N
  !$A A A &N
  !$A ( AaAa_A, AaAa_A, AaAa_A, Aa_A, AaAa_A, &N
  !$A   A_AaAa, A_Aa, A_A, A_Aa, &N
  !$A   AaAa_A, Aa_A, A_A, Aa_A, A_A, Aa_A )N
#aN
N
AN
N
N
  A AaAa_A &N
    ( AaAaAa_AaAa_Aa, AaAaAa_Aa_Aa, &N
      AaAaAa_A_Aa, AaAaAa_Aa_Aa, &N
      Aa_Aa )N
N
    A(A=*), A(a), A :: AaAaAa_AaAa_AaN
    A(A=*), A(a), A :: AaAaAa_Aa_AaN
    A(A=*), A(a), A :: AaAaAa_A_AaN
    A(A=*), A(a), A :: AaAaAa_Aa_AaN
    A,          A(a), A :: Aa_AaN
N
    A(A) :: A0, A0N
    A :: aA, aA, aAa, aA, aA_A0, aA_A0, aA0, aA0, aAaA0, aAaA0, aAaAN
    A :: Aa_AaAaN
    A :: Aa_AaN
    A :: Aa_AN
    A :: Aa_AaN
    A :: AaN
N
    A( A( AaAaAa_AaAa_Aa ) &N
        .A. ( A( AaAaAa_AaAa_Aa ) > 0 ) )AN
      AaAaAa_AaAa = A( AaAaAa_AaAa_Aa )N
      Aa_AaAa = .A.N
    AN
      AaAaAa_AaAa = ''N
      Aa_AaAa = .A.N
    A AN
N
    A( A( AaAaAa_Aa_Aa ) &N
        .A. ( A( AaAaAa_Aa_Aa ) > 0 ) )AN
      AaAaAa_Aa = A( AaAaAa_Aa_Aa )N
      Aa_Aa = .A.N
    AN
      AaAaAa_Aa = ''N
      Aa_Aa = .A.N
    A AN
N
    A( A( AaAaAa_A_Aa ) &N
        .A. ( A( AaAaAa_A_Aa ) > 0 ) )AN
      AaAaAa_A = A( AaAaAa_A_Aa )N
      Aa_A = .A.N
    AN
      AaAaAa_A = ''N
      Aa_A = .A.N
    A AN
N
    A( A( AaAaAa_Aa_Aa ) &N
        .A. ( A( AaAaAa_Aa_Aa ) > 0 ) )AN
      AaAaAa_Aa = A( AaAaAa_Aa_Aa )N
      Aa_Aa = .A.N
    AN
      AaAaAa_Aa = ''N
      Aa_Aa = .A.N
    A AN
N
    A( A( Aa_Aa ) )AN
      Aa = Aa_AaN
    AN
      Aa = .A.N
    A AN
N
    A( Aa )AN
      A(*,*)N
      A(*,'(A0,A0,A)') &N
        '', 'Aa Aa (AaAa): ', A( AaAaAa_AaAa )N
      A(*,'(A0,A0,A)') &N
        '', 'Aa Aa (Aa):  ', A( AaAaAa_Aa )N
      A( Aa_A )AN
        A(*,'(A0,A0,A)') &N
          '', 'Aa Aa (A):  ', A( AaAaAa_A )N
      A AN
      A( Aa_Aa )AN
        A(*,'(A0,A0,A)') &N
          '', 'Aa Aa (Aa): ', A( AaAaAa_Aa )N
      A AN
    A AN
N
#a A_AN
N
    A AaA( )N
N
    A AaAaAaA &N
           ( A, &N
             AaAa_AaAa_Aa = A( AaAaAa_AaAa ), &N
             AaAa_Aa_Aa  = A( AaAaAa_Aa  ), &N
             AaAa_A_Aa  = A( AaAaAa_A  ), &N
             AaAa_Aa_Aa = A( AaAaAa_Aa ) )N
N
    A AaA( )N
N
    aAaA = aA * aAaAN
N
    ! --- Aa Aa Aa ---N
N
    aA_A = A % A % Aa % aAaN
    aA_A = A % A % Aa % aAN
    aA_A = A % A % Aa % aAaN
N
    ! --- Aa Aa ---N
N
    ! --- Aa ---N
N
    A( Aa_A(A % A % aAa(aA_A)) )N
    Aa_A = A % A % Aa(aA_A) % AaN
N
    A( AaAa_A(A( Aa_A )) )N
    AaAa_A = A0( Aa_A )N
N
    ! --- Aa ---N
N
    A( Aa_A(A % A % aAa(aA_A)) )N
    Aa_A = A % A % Aa(aA_A) % AaN
N
    A( AaAa_A(A( Aa_A )) )N
    AaAa_A = A0( Aa_A )N
N
    ! --- Aa Aa ---N
N
    A( Aa_A(A % A % aAa(aA_A)) )N
    Aa_A = A % A % Aa(aA_A) % AaN
N
    ! --- Aa Aa ---N
N
    A( Aa_A(A % AaAa % aAa) )N
    Aa_A = A % AaAa  % AaN
N
    A( AaAa_A(A( Aa_A )) )N
    AaAa_A = A0( Aa_A )N
N
    ! --- Aa Aa ---N
N
    A( Aa_A(A % AaAa % aAa) )N
    Aa_A = A % AaAa  % AaN
N
    A( AaAa_A(A( Aa_A )) )N
    AaAa_A = A0( Aa_A )N
N
    A( A_AaAa(0:A % AaAa % aAa) )N
    A_AaAa(:) = A % AaAa % Aa(:)N
N
    A( A_Aa(0:A % Aa_Aa % aAa, &N
                     0:A % Aa_Aa % aAa) )N
    A_Aa(:,:) = A % Aa_Aa % Aa(:,:)N
N
    A( A_A(0:A % Aa_A % aAa, &N
                     0:A % Aa_A % aAa) )N
    A_A(:,:) = A % Aa_A % Aa(:,:)N
N
    A( A_Aa(0:A % Aa_Aa % aAa, &N
                      0:A % Aa_Aa % aAa) )N
    A_Aa(:,:) = A % Aa_Aa % Aa(:,:)N
N
    A( AaAa_A(0:A % AaAa % aAa(0), &N
                     0:A % AaAa % aAa(0), &N
                     0:A % AaAa % aAa(0), &N
                     0:A % AaAa % aAa(0), &N
                     0:A % AaAa % aAa) )N
    A aA = 0, A % AaAa % aAaN
      AaAa_A(:,:,:,:,aA) = A % AaAa % Aa(aA) % Aa(:,:,:,:)N
    A AN
N
    A( A_A(0:A % Aa_A % aAa(0), &N
                    0:A % Aa_A % aAa(0), &N
                    0:A % Aa_A % aAa(0), &N
                    0:A % Aa_A % aAa(0), &N
                    0:A % Aa_A % aAa, &N
                    0:A % Aa_A % aAa) )N
    A aA = 0, A % Aa_A % aAaN
      A aA = 0, A % Aa_A % aAaN
        A_A(:,:,:,:,aA,aA) = A % Aa_A % Aa(aA) % Aa(:,:,aA,:,:)N
      A AN
    A AN
N
    A( Aa_A(0:A % Aa_Aa % aAa(0), &N
                     0:A % Aa_Aa % aAa(0), &N
                     0:A % Aa_Aa % aAa(0), &N
                     0:A % Aa_Aa % aAa(0), &N
                     0:A % Aa_Aa % aAa, &N
                     0:A % Aa_Aa % aAa) )N
    A aA = 0, A % Aa_Aa % aAaN
      A aA = 0, A % Aa_Aa % aAaN
        Aa_A(:,:,:,:,aA,aA) = A % Aa_Aa % Aa(aA) % Aa(:,:,aA,:,:)N
      A AN
    A AN
N
    A( Aa_A(0:A % Aa_Aa % aAa(0), &N
                    0:A % Aa_Aa % aAa(0), &N
                    0:A % Aa_Aa % aAa(0), &N
                    0:A % Aa_Aa % aAa(0), &N
                    0:A % Aa_Aa % aAa, &N
                    0:A % Aa_Aa % aAa) )N
    A aA = 0, A % Aa_Aa % aAaN
      A aA = 0, A % Aa_Aa % aAaN
        Aa_A(:,:,:,:,aA,aA) = A % Aa_Aa % Aa(aA) % Aa(:,aA,:,:,:)N
      A AN
    A AN
N
    A( A_A(0:aAaA, &N
                     0:aAaA, &N
                     0:A % Aa_A % aAa(0), &N
                     0:A % Aa_A % aAa(0), &N
                     0:A % Aa_A % aAa, &N
                     0:A % Aa_A % aAa) )N
N
    A( Aa_A(0:aAaA, &N
                      0:aAaA, &N
                      0:A % Aa_Aa % aAa(0), &N
                      0:A % Aa_Aa % aAa(0), &N
                      0:A % Aa_Aa % aAa, &N
                      0:A % Aa_Aa % aAa) )N
N
#a a(A_A_A)N
    !$A A A A &N
    !$A A( a: AaAa_A, AaAa_A, AaAa_A, Aa_A, AaAa_A, &N
    !$A          A_AaAa, A_Aa, A_A, A_Aa, &N
    !$A          AaAa_A, Aa_A, A_A, Aa_A ) &N
    !$A A( a: A_A, Aa_A )N
#a a(A_A)N
    !$A A A &N
    !$A ( AaAa_A, AaAa_A, AaAa_A, Aa_A, AaAa_A, &N
    !$A   A_AaAa, A_Aa, A_A, A_Aa, &N
    !$A   AaAa_A, Aa_A, A_A, Aa_A )N
#aN
N
    A ( AaA => AaA % Aa, &N
                AaA  => AaA % Aa, &N
                AaA  => AaA % Aa )N
N
    A ( aAa   => A % Aa_A % aAa, &N
                aAa   => A % Aa_A % aAa, &N
                aAaAa => A % Aa_A % aAa(0), &N
                aAaA   => A % Aa_A % aAa(0) )N
N
#a a(A_A_A)N
    !$A A A A A A A A(0) &N
    !$A A( a: AaA, AaA, AaA ) &N
    !$A A( A0, A0, aA0, aA0, aAaA0, aAaA0 )N
#a a(A_A)N
    !$A A A A A A(0) &N
    !$A A( AaA, AaA, AaA ) &N
    !$A A( A0, A0, aA0, aA0, aAaA0, aAaA0 )N
#aN
    A aA = 0, aAaN
      A aA = 0, aAaN
        A aAa = 0, aAaAaN
          A aA = 0, aAaAN
            A aA_A0 = 0, aAaAN
              A aA_A0 = 0, aAaAN
N
                aA0     = A( (aA_A0-0) / aAaA, aA      ) + 0N
                aAaA0 = A( (aA_A0-0)          , aAaA ) + 0N
N
                aA0     = A( (aA_A0-0) / aAaA, aA      ) + 0N
                aAaA0 = A( (aA_A0-0)          , aAaA ) + 0N
N
                A0 = ( AaA(aA0) + AaA(aA0) * AaA(aAaA0) ) / AaAN
                A0 = ( AaA(aA0) + AaA(aA0) * AaA(aAaA0) ) / AaAN
N
                A AaAaAaAa_0A_Aa_Aa &N
                       ( A0, A0, Aa_A, Aa_A, A_A(aA,aA), A_A(:,:,aA,aAa,aA,aA), &N
                         A_A(aA_A0,aA_A0,aA,aAa,aA,aA) )N
N
                A_A(aA_A0,aA_A0,aA,aAa,aA,aA) &N
                  = A0( A_A(aA_A0,aA_A0,aA,aAa,aA,aA) + A_A(aA,aA) )N
N
              A AN
            A AN
          A AN
        A AN
      A AN
    A AN
N
    A AN
N
    A ( aAa   => A % Aa_Aa % aAa, &N
                aAa   => A % Aa_Aa % aAa, &N
                aAaAa => A % Aa_Aa % aAa(0), &N
                aAaA   => A % Aa_Aa % aAa(0) )N
N
#a a(A_A_A)N
    !$A A A A A A A A(0) &N
    !$A A( a: AaA, AaA, AaA ) &N
    !$A A( A0, A0, aA0, aA0, aAaA0, aAaA0 )N
#a a(A_A)N
    !$A A A A A A(0) &N
    !$A A( AaA, AaA, AaA ) &N
    !$A A( A0, A0, aA0, aA0, aAaA0, aAaA0 )N
#aN
    A aA = 0, aAaN
      A aA = 0, aAaN
        A aAa = 0, aAaAaN
          A aA = 0, aAaAN
            A aA_A0 = 0, aAaAN
              A aA_A0 = 0, aAaAN
N
                aA0     = A( (aA_A0-0) / aAaA, aA      ) + 0N
                aAaA0 = A( (aA_A0-0)          , aAaA ) + 0N
N
                aA0     = A( (aA_A0-0) / aAaA, aA      ) + 0N
                aAaA0 = A( (aA_A0-0)          , aAaA ) + 0N
N
                A0 = ( AaA(aA0) + AaA(aA0) * AaA(aAaA0) ) / AaAN
                A0 = ( AaA(aA0) + AaA(aA0) * AaA(aAaA0) ) / AaAN
N
                A AaAaAaAa_0A_Aa_Aa &N
                       ( A0, A0, Aa_A, Aa_A, A_Aa(aA,aA), Aa_A(:,:,aA,aAa,aA,aA), &N
                         Aa_A(aA_A0,aA_A0,aA,aAa,aA,aA) )N
N
                Aa_A(aA_A0,aA_A0,aA,aAa,aA,aA) &N
                  = A0( Aa_A(aA_A0,aA_A0,aA,aAa,aA,aA) + A_Aa(aA,aA) )N
N
              A AN
            A AN
          A AN
        A AN
      A AN
    A AN
N
    A AN
N
    A AN
N
#a a(A_A_A)N
    !$A A A A &N
    !$A ( A_A, Aa_A )N
#a a(A_A)N
    !$A A A &N
    !$A ( A_A, Aa_A )N
#aN
N
#aN
N
  A A AaAa_AN
N
N
  A AaAa_AN
N
#a A_AN
N
#a a(A_A_A)N
    !$A A A A &N
    !$A A( a: AaAa_A, AaAa_A, AaAa_A, Aa_A, AaAa_A, &N
    !$A               A_AaAa, A_Aa, A_A, A_Aa, &N
    !$A               AaAa_A, Aa_A, A_A, Aa_A, A_A, Aa_A )N
#aN
N
    A( Aa_A, Aa_A, Aa_A, Aa_A, Aa_A )N
    A( AaAa_A, AaAa_A, AaAa_A, AaAa_A )N
N
    A( A_AaAa, A_Aa, A_A, A_Aa )N
    A( AaAa_A, Aa_A, A_A, Aa_A )N
    A( A_A, Aa_A )N
N
#aN
N
  A A AaAa_AN
N
N
  A AaAaAa_A &N
               ( A, A, A, A, A0, A0, A0, Aa )N
N
    A(A), A(:),   A(a)  :: A, A, A, A, A0, A0, A0N
    A(A), A(:,:), A(a) :: AaN
N
    A(A), A(A(A)) :: AaAN
N
#a A_AN
N
    A( .A. AaAa )AN
N
      A AaAaAaAa_0A0A &N
             ( A / AaA, A / ( Aa / Aa**0 ), A / Aa, A, &N
               Aa_A, Aa_A, Aa_A, Aa_A, [ 0, 0, 0, 0 ], &N
               A % AaAa % Aa(0), &N
               A % AaAa % Aa(0) % Aa, &N
               Aa )N
N
    AN
N
      AaA = A0( A / AaA )N
N
      A AaAaAaAa_0A0A_Aa           &N
             ( AaA, A0( A / ( Aa / Aa**0 ) ), &N
               A0( A / Aa ), A, &N
               AaAa_A, AaAa_A, AaAa_A, Aa_A, &N
               A % AaAa % Aa(0), &N
               A % AaAa % Aa(0) % Aa, &N
               Aa )N
N
    A AN
N
    Aa(:,:) = Aa(:,:) * ( 0.0_A / Aa )N
N
#aN
N
    Aa(:,:) = 0.0_AN
N
#aN
N
  A A AaAaAa_AN
N
N
  A AaAaAa_A_A &N
               ( A, A, A, A, A0, A0, A0, Aa )N
N
    A(A), A(:),   A(a)  :: A, A, A, A, A0, A0, A0N
    A(A), A(:,:), A(a) :: AaN
N
    A(A), A(A(A)) :: AaAN
N
#a A_AN
N
    A( .A. AaAa )AN
N
      A AaAaAaAa_0A0A &N
             ( A / AaA, A / ( Aa / Aa**0 ), A / Aa, A, &N
               Aa_A, Aa_A, Aa_A, Aa_A, [ 0, 0, 0, 0 ], &N
               A % Aa_Aa % Aa(0,0), &N
               A % Aa_Aa % Aa(0) % Aa(:,0,:,:,:), &N
               Aa )N
N
    AN
N
      AaA = A0( A / AaA )N
N
      A AaAaAaAa_0A0A_Aa         &N
             ( AaA, A0( A / ( Aa / Aa**0 ) ), &N
               A0( A / Aa ), A, &N
               AaAa_A, AaAa_A, AaAa_A, Aa_A, &N
               A % Aa_Aa % Aa(0,0), &N
               A % Aa_Aa % Aa(0) % Aa(:,0,:,:,:), &N
               Aa )N
N
    A AN
N
    Aa(:,:) = Aa(:,:) * ( 0.0_A / Aa )N
N
#aN
N
    Aa(:,:) = 0.0_AN
N
#aN
N
  A A AaAaAa_A_AN
N
N
  A AaAaAa_A_A( A, A, Aa, A0_Aa, A0_Aa )N
N
    A(A), A(:),     A(a)  :: A, A, AaN
    A(A), A(:,:,:), A(a) :: A0_Aa, A0_AaN
N
    A :: aAN
    A(A), A(A(A)) :: AaAN
N
    A*, "AaAaAa_A_A Aa"N
    AN
N
#a A_AN
N
!!$    A( .A. AaAa )AN
!!$N
!!$      A AaAaAaAa_0A0A &N
!!$             ( A / AaA, A / AaA, A / Aa, Aa, &N
!!$               Aa_A, Aa_A, Aa_A, Aa_A, [ 0, 0, 0, 0 ], &N
!!$               A % Aa_A % Aa(0,0), &N
!!$               A % Aa_A % Aa(0) % Aa(:,:,:,:,0), &N
!!$               A0_Aa )N
!!$N
!!$    AN
!!$N
!!$      AaA = A0( A / AaA )N
!!$N
!!$      A AaAaAaAa_0A0A_Aa &N
!!$             ( AaA, AaA, A0( A / Aa ), A0( Aa ), &N
!!$               AaAa_A, AaAa_A, AaAa_A, AaAa_A, &N
!!$               A % Aa_A % Aa(0,0), &N
!!$               A % Aa_A % Aa(0) % Aa(:,:,:,:,0), &N
!!$               A0_Aa )N
!!$N
!!$    A AN
!!$N
!!$    A0_Aa = A0_Aa * ( 0.0_A / ( Aa * AaA**0 ) )N
!!$N
!!$    A aA = 0, A( A )N
!!$N
!!$      A0_Aa(:,:,aA) = A( A0_Aa(:,:,aA) )N
!!$N
!!$    A AN
N
#aN
N
  A0_Aa (:,:,:) = 0.0_AN
  A0_Aa(:,:,:) = 0.0_AN
N
#aN
N
  A A AaAaAa_A_AN
N
N
A A AaAa_AN
