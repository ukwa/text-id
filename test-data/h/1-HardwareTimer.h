/*N
  Aa (a) 0 Aa AaN
N
  Aa a a a, a a a, a a a a a aN
  a a a a a a a (a "Aa"), a aN
  a a Aa a a, a a a a aN
  a a, a, a, a, a, a, a, a/a aN
  a a a Aa, a a a a a a a Aa aN
  a a a a, a a a a a:N
N
  Aa a a a a a a a a a a a aN
  a a a a a a Aa.N
N
  A A A A "A A", A A A A A, A AN
  A, A A A A A A A A A,N
  A A A A A A A. A A A A AN
  A A A A A A A A A, A A AN
  A, A A A A A A, A A A, A A,N
  A A A A A A A A A A A A A A A AN
  A.N
N
  Aa (a) 0 AaN
  Aa a a Aa_Aa_A0N
*/N
N
/* Aa a a a a -------------------------------------*/N
#a A_A_N
#a A_A_N
N
/* Aa ------------------------------------------------------------------*/N
#a "a.a"N
N
#a A_A_A_AN
N
#a  A_A 0    // a0 a a 0 a a a a a a a'a a a a a a a'a a aN
N
a a {N
  A_A,N
  // Aa AaN
  A_A_A,                   // == A_A_A           a a, a a a-aN
  A_A_A_A,            // == A_A_A           a a a a a a == a aN
  A_A_A_A,          // == A_A_A         a a a a a a == a aN
  A_A_A_A,            // == A_A_A           a a a a == a aN
  A_A_A_A0,              // == A_A_A0             a a a a < a a, a aN
  A_A_A_A0,              // == A_A_A0             a a a a < a a, a aN
  A_A_A_A_A,     // == A_A_A_A    a a aN
  A_A_A_A_A,   // == A_A_A_A  a a aN
N
  //Aa aN
  A_A_A_A,             // == A_A_AN
  A_A_A_A,            // == A_A_AN
  A_A_A_A,           // == A_A_AN
N
  // Aa 0 a a a a a. Aa a a A_A_A a a a A_A_A.N
  // Aa a a a a a: A0 a A0, a A0 a A0N
  // Aa a a a a a Aa a Aa aN
  A_A_A_A_A,N
N
  A_A_A = 0aA  // Aa a a a a a a a aN
} AaAa_a;N
N
a a {N
  A_A, // aN
  A_A,N
  A_A,N
} AaAa_a;N
N
a a {N
  A_A_A, // aN
  A_A_A,N
  A_A_A,N
  A_A_A,  // a a AaN
  A_0A_A_A,  // a a Aa: [0.. 0]N
  A_0A_A_A  // a a Aa: [0.. 0]N
} AaAaAa_a;N
N
#a __aN
N
/* Aa --------------------------------------------------------*/N
a AaAa {N
  a:N
    AaAa(A_AaAa *a);N
    ~AaAa();  // aN
N
    a a(a);  // Aa a a a a aN
    a a(a); // Aa a a a a aN
N
    a aAaAa(a0_a a); // a a a (a a a a - 0)N
    a0_a aAaAa();N
N
    a aAa(a0_a a, AaAa_a a = A_A); // a AaAa a a a a aN
    a0_a aAa(AaAa_a a = A_A); // a a a a a aN
N
    a aA(a0_a a, AaAa a, a0_a a, a0_a a, a (*AaAa)(AaAa *) = A, a (*AaAa)(AaAa *) = A); // Aa a a a a a a A, Aa a a. Aa a a.N
    a aA(a0_a a, a0_a a, a0_a a, a0_a a, a (*AaAa)(AaAa *) = A, a (*AaAa)(AaAa *) = A);N
N
N
    a aAa(a0_a a, AaAa_a a = A_A); // a a a a a 'a' a a a aN
    a0_a aAa(AaAa_a a = A_A);  // a a a a a a a a a aN
N
    a aAa(a0_a a, AaAa_a a, AaAa a = A); // Aa a a a a a a a a a aN
    a aAa(a0_a a, AaAa_a a, a0_a a);N
N
    a0_a aAaAa(a0_a a, AaAaAa_a a = A_A_A); // a Aa/Aa a a a a a a a a aN
N
    a aAaAa(a0_a a, a0_a a, AaAaAa_a a = A_A_A);  // a Aa a a a a a a a a aN
N
    a aAaAa(a0_a aAa, a0_a aAa); // a a aN
N
    //Aa a a a aN
    a aAa(a (*a)(AaAa *)); // Aa a a a a a a a a a (a a)N
    a aAa();  // a a a a a a a a aN
    a aAa();  //a a a a a a a a a a aN
    //Aa a a a/a aN
    a aAa(a0_a a, a (*a)(AaAa *)); // Aa a a a a a a a a a a a a aN
    a aAa(a0_a a);  // a a a a a a a a a a a a aN
    a aAa(a0_a a);  //a a a a a a a a a a a a a aN
N
    a aAaAa();  // Aa aN
N
    // Aa() a a a a a a 0a a a a() a a a a a a.N
    // Aa a a a a a a a a a aN
    a a(a); // Aa a a a a a a (Aa, a, a) a a a a aN
N
N
    a0_a aAaAaAa();  // a a a a a Aa.N
N
    a a aAaAa(A_AaAaAa *a); // Aa Aa a Aa a a a a a aN
    a a aAa(A_AaAaAa *a);  // Aa Aa (a) a a a a a aN
N
    // Aa a a(a) a a a a a a aN
    A_AaAaAa *aAa();  // a a a a a A a aN
  a:N
    A_A_AaAaAa _aA[A_A];N
    A_A_AaAaAa _aA[A_A];N
    aAa_a _aAa;N
    a (*a[0 + A_A])(AaAa *); //Aa: 0 a a, 0-0 a a. (a0/a0, a a, a'a a a)N
N
    a aAa(a0_a a);N
    a aAa(a0_a a);N
#a a(A_A_A0A)N
    a aAaAa[A_A];N
#aN
};N
N
a aAa_a *AaAa_Aa[A_A];N
N
a a_a_a a_a_a(A_AaAa *a);N
N
#a /* __a */N
N
#a  // A_A_A_AN
#a  // A_A_