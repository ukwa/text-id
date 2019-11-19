#a __A_AN
#a __A_AN
N
#a <a.a>N
#a <a.a>N
N
N
#a A ((a *) 0)N
#a A_A ((a *) 0)N
N
N
#a A_A 0N
#a __A_A_A 0N
N
N
// Aa a a a a aN
#a AN
#a A(a) ((a)(a))N
#aN
N
N
// Aa A_A a a a a a a a a A a aN
// a a a a a a a a aN
#a A_A 0a0a                // Aa (A Aa A) a a aN
N
#a A 0N
#a A 0N
#a A 0N
#a A0 0N
#a A0 0N
N
// Aa a a A a a a a a a a aN
#a A_A 0N
N
// Aa a a a a a a a. Aa a "a"N
// a 0.N
// A: a a a a a a a a a A_A_A_AN
// a!N
#a A_A_A 0N
N
#a A_A_A 0N
#a A_A_A_A 0N
N
// Aa a a a/aN
#a A(a, a) ((a) < (a) ? a : (a))N
#a A(a, a) ((a) > (a) ? a : (a))N
N
N
// Aa a a aN
#a A_A             0a0    // A a aN
N
#a A_A              0a0    // A a..a = aN
#a A_A_A            0a0    // A a..a = a0_a aN
N
#a A_A             0a0    // A a..a a aN
#a A_A_A           0a0    // A a..a a a0_a aN
N
#a A_A            0a0    // A a, a (a)N
#a A_A_A          0a0    // A a (a)N
N
#a A_A           0a0    // A = a, aN
#a A_A_A         0a0    // A = aN
N
#a A_A              0a0    // A += a, aN
#a A_A_A            0a0    // A += aN
N
#a A_A         0a0    // A -= a, aN
#a A_A_A       0a0    // A -= aN
N
#a A_A         0a0    // A *= a, aN
#a A_A_A       0a0    // A *= aN
N
#a A_A           0a0    // A /= a, aN
#a A_A_A         0a0    // A /= aN
N
#a A_A              0a0a    // A &= a, aN
#a A_A_A            0a0a    // A &= aN
N
#a A_A               0a0a    // A |= a, aN
#a A_A_A             0a0a    // A |= aN
N
#a A_A              0a0a    // A ^= a, aN
#a A_A_A            0a0a    // A ^= aN
N
#a A_A              0a0    // A %= a, aN
#a A_A_A            0a0    // A %= aN
N
N
#a A_A_A_A    0a0N
#a A_A_A_A_A     0a0    // a == a, aN
#a A_A_A_A_A    0a0    // a == aN
#a A_A_A_A_A     0a0    // a == a, aN
#a A_A_A_A_A    0a0    // a == aN
N
#a A_A_A_A_A     0a0    // a != a, aN
#a A_A_A_A_A    0a0    // a != aN
#a A_A_A_A_A     0a0    // a != a, aN
#a A_A_A_A_A    0a0    // a != aN
N
#a A_A_A_A_A     0a0    // a >= a, aN
#a A_A_A_A_A    0a0    // a >= aN
#a A_A_A_A_A     0a0a    // a >= a, aN
#a A_A_A_A_A    0a0a    // a >= aN
N
#a A_A_A_A_A     0a0a    // a > a, aN
#a A_A_A_A_A    0a0a    // a > aN
#a A_A_A_A_A     0a0a    // a > a, aN
#a A_A_A_A_A    0a0a    // a > aN
N
#a A_A_A_A_A     0a0    // a >= a, aN
#a A_A_A_A_A    0a0    // a >= aN
#a A_A_A_A_A     0a0    // a >= a, aN
#a A_A_A_A_A    0a0    // a >= aN
N
#a A_A_A_A_A     0a0    // a > a, aN
#a A_A_A_A_A    0a0    // a > aN
#a A_A_A_A_A     0a0    // a > a, aN
#a A_A_A_A_A    0a0    // a > aN
#a A_A_A_A     0a0N
N
#a A_A              0a0    // a = |a, a|N
#a A_A_A            0a0    // a = |a|N
N
#a A_A_A_A      0a0    // 0 + 0 a a_a! 0a0 .. 0a0aN
#a A_A_A_A      0a0    // 0 + 0 a a_a! 0a0 .. 0a0aN
#a A_A_A_A     0aA0    // 0 + 0 a a_a! 0a0 .. 0aN
N
#a A_A_A_A   0aN
#a A_A_A_A  0aN
N
N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A0 0N
#a A_A_A0 0N
N
N
// Aa a a a a a a aN
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
#a A_A_A 0N
N
N
#a A_A(a) (0 << a)N
#a A_A(a) (a << 0)N
#a A_A(a) (a << 0)N
N
N
// ****************************************************************************N
a a {N
    A_A_A_A_A   = (0 << 0),     // Aa 0..0N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
    A_A_A_A_A_0 = (0 << 0),N
N
    A_A_A                 = (0 << 0),N
    A_A_A                 = (0 << 0),N
    A_A_A               = (0 << 0),N
    A_A_A                 = (0 << 0),N
N
    A_A_A_A          = (0 << 0),N
    A_A_A_A         = (0 << 0),N
    A_A_A                  = (0 << 0),N
    A_A_A_A              = (0 << 0),N
    A_A_A_A              = (0 << 0),N
    A_A_A_A             = (0 << 0),N
N
    A_A_A_A         = (0 << 0),N
    A_A_A_A              = (0 << 0),N
    A_A_A_A                = (0 << 0),N
    A_A_A_A               = (0 << 0),N
N
    // A_A                    = (0 << 0)N
    // Aa a a a a, a 0<<0 a'a a a a a a aN
    // a a A_A. Aa a a a 0 a a a aN
    // a a.N
    // Aa a a a a a a a a a0_a a a aN
    // a a a a, a a a a a a a a-a.N
    // Aa a a a a a a a #a...N
    #a A_A                 (0 << 0)N
N
} A_A_A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A_A_A           = 0,N
    A_A_A_A                  = (0 << 0),N
    A_A_A               = (0 << 0),N
    A_A_A_A_A_A  = (0 << 0),N
    A_A_A_A_A_A    = (0 << 0),N
    A_A_A_A_A_A   = (0 << 0),N
    A_A_A_A_A   = (0 << 0),N
    A_A_A_A_A   = (0 << 0),N
    A_A_A_A               = (0 << 0),N
    A_A_A_A_A           = (0 << 0),N
} A_A_A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A_A_A_A     = (0 << 0),     // Aa 0..0N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
    A_A_A_A_A_0   = (0 << 0),N
N
    A_A_A                   = (0 << 0),N
    A_A_A                   = (0 << 0),N
    A_A_A                 = (0 << 0),N
    A_A_A                   = (0 << 0),N
N
    A_A_A_A            = (0 << 0),N
    A_A_A_A           = (0 << 0),N
    A_A_A                    = (0 << 0),N
    A_A_A_A                = (0 << 0),N
    A_A_A_A                = (0 << 0),N
    A_A_A_A               = (0 << 0),N
N
    A_A_A_A           = (0 << 0),N
    A_A_A_A                = (0 << 0),N
    A_A_A_A                  = (0 << 0),N
    A_A_A_A                 = (0 << 0),N
N
    // 0 a a a ...N
N
    A_A_A_A_A_A = (0 << 0),N
    A_A_A_A_A_A   = (0 << 0),N
    A_A_A_A_A_A  = (0 << 0),N
    A_A_A_A_A  = (0 << 0),N
    A_A_A_A_A  = (0 << 0),N
} A_A_A_A_A;N
N
N
// ****************************************************************************N
a a {N
    // Aa a a a a a a a a a a a aN
    // a0_aN
    A = 0a,N
N
    A_A = 0a0,N
    A_A = 0a0,N
    A_A = 0a0,N
    A_A = 0a0,N
    A_A = 0a0N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    a0_a a_a;N
    A_A_A a;N
    a0_a a;N
} A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A a;N
    a a_a[0];N
    a0_a a_a[0];N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A a;N
    a a_a_a;N
    a a0_a *a[A_A_A];N
    a0_a a[0];N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    a0_a a;N
    a0_a a;N
    a0_a a;N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    a0_a a_a;N
    A_A_A a;N
    a0_a a;N
    a0_a a;N
    a a;N
} A_A;N
N
N
// ****************************************************************************N
a a {N
    A_0 = 0,N
    A_0 = 0,N
    A_0 = 0N
} A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A_A_A = 0,N
    A_A_A_A = 0a0,N
    A_A_A_A = 0a0,N
    A_A_A_A = 0a0N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A_A = 0,N
    A_A_A = 0a0,N
    A_A_A = 0a0,N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A = 0,N
    A_A = 0a0,N
    A_A = 0a0,N
    A_A = 0a0N
} A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A = 0,N
    A_A_A_A = 0,N
    A = 0,N
    A_A = 0,N
    A = 0N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A = 0,N
    A_A = 0,N
    A = 0,N
    A = 0,N
    A = 0,N
    A = 0,N
    A = 0,N
    A_A = 0,N
    A_A = 0N
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    a a a : 0;               // Aa a a a a 0 aN
    a a a_a_a : 0;      // Aa a a a a a a a a aN
N
    a a a_a : 0;N
    a a a : 0;N
    a a a_a_a : 0;N
    a a a_a : 0;N
N
    a a a_a : 0;            // Aa a 0.0 AaN
    a a a_a : 0;          // Aa a aN
    a a a_a_a : 0;  // Aa a aN
    a a a_a_a : 0; // Aa a aN
    a a a : 0;               // Aa a a a a a aN
    a a a : 0;               // Aa a a a a aN
    a a a : 0;             // Aa a a a a aN
N
    a a a_a : 0;          // Aa a a a a a a a a aN
    a a a : 0;N
N
    a a a_a : 0;N
N
    a a a_a_a : 0;      // Aa a a a a aN
N
    a a a_a_a : 0;  // Aa a a A a a a a aN
    a a a_a_a : 0;   // Aa a a A Aa a a a a, a a a aN
N
    a a a_a : 0;      // Aa a a A a a a aN
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A_A_A,N
    A_A_A_A,N
    A,                   // A_A_A_A => A A A!N
    A,N
    A_A,N
} A_A_A;N
N
N
// ****************************************************************************N
// Aa A_A_A_A, a a a a a aN
// a, a a, a a a.N
// Aa A_A_A_A_A, a a a a a a aN
// a a a a a a a.N
//N
// Aa A a a a A_A_A_A.N
// Aa Aa A a A A-0A a a a A_A_A_A_A.N
a a {N
    A_A_A_A_A,N
    A_A_A_A,N
    A_A_A,N
    A_A_AN
} A_A_A;N
N
N
// ****************************************************************************N
a a {N
    A_A a;N
N
    a0_a a_a;N
N
    A_A_A a;N
    A_A_A a_a;N
N
    a {N
        // Aa a a A_A_A_A  a a a a aN
        // a.N
        // Aa a a A_A_A_A a A_A_A_A aN
        // a a a a A a (a, a a a) a aN
        // a a (a a a a a; a a aN
        // a)N
        a a a_a : 0;N
        a a a_a : 0;N
        a a a_a : 0;N
        a a a_a_a_a : 0;N
        a a a_a_a : 0;N
        a a a0 : 0;N
N
        a a a0_a_a_a : 0;N
        a a a0_a_a : 0;N
N
        a a a_a_a_a_a : 0;N
        a a a_a_a_a_a : 0;N
N
        a a a0_a_a_a : 0;N
N
        // Aa a; a a a A0 a a a!N
        a a a_a_a_a : 0;N
    } a;N
N
    a0_a a_a_a_a_a_a;N
    a0_a a_a_a_a_a_a;N
    a0_a a_a_a_a_a_a;N
    a0_a a_a_a_a_a_a;N
N
    a0_a a_a_a_a_a;N
    a0_a a_a_a_a_a;N
N
    a0_a a_a_a_a;N
N
    a0_a a_a_a;N
    a0_a a_a_a_a;N
    a0_a a_a_a_a;N
N
    // Aa a a a a a a a a a aN
    // a. Aa a a a "a" a a a a aN
    // a a a A_A_A a A_A_A aN
    // a a a a a a a a a a a_a.N
    a0_a a_a_a;N
    a0_a a_a_a;N
    a0_a a_a;N
N
    a0_a a_a_a;N
    a0_a a_a_a_a;N
    a0_a a_a_a;N
    a0_a a0_a_a_a;N
    a0_a a_a_a_a;N
N
    a0_a a;N
    a0_a a_a_a;N
    a0_a a_a_a;N
    a0_a a_a_a_a;N
    a0_a a_a_a_a;N
N
    a0_a a_a_a;N
    a0_a a_a_a;N
N
    a0_a a_a;N
N
    // -------------------------------------------------------------------N
    // Aa a-a a a a a a a a a a 0!N
    // -------------------------------------------------------------------N
N
    a {N
        // Aa a a a a A aN
        a a a_a : 0;N
N
        // Aa a a a a a a a a a aN
        // a a a a a a a 0 aN
        a a a_a_a : 0;N
N
        // Aa a 0 a a a A a a a/a/a,N
        // a a 0 a a a a a a a a A0N
        a a a_a_a_a :0;N
N
        a a a0 : 0;N
    } a0;N
N
    // Aa a a a a. Aa a_a_a a a aN
    // 0 a a a a a.N
    a0_a a_a_a_a;N
N
    A_A_A a_a;N
    A_A_A a_a;N
N
    A_A_A a0_a;N
    A_A_A a0_a;N
N
    A_A_A a0_a;N
    A_A_A a0_a;N
N
    a0_a a_a_a[0];N
    a0_a a_a_a;N
N
N
} A_A_A_A;N
N
N
// ****************************************************************************N
// Aa a a a a a aN
N
a a0_a A_A;N
N
a a {    // 0-a a (0 a a)N
    // Aa a a aN
    a0_a a_a_a_a;N
N
    // Aa a a a a aN
    a0_a a_a;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a_a_0 : 0;N
    a a a_a : 0;N
    a a a_a : 0;N
    a a a_a : 0;N
    a a a_a : 0;N
    a a a_a : 0;N
} A_A_A;N
N
// Aa a a a a a a a a a a, a a A,N
// a a a a a a a a. Aa a a aN
// a a a a a A (a a a a a a a)N
// a a a a "a" a a a a.N
N
a a {    // 0-a a (0 a a)N
    A_A_A a;N
N
    A_A a_a;N
    A_A a_a_a[A_A_A];N
    A_A a_a;N
    A_A a_a;N
    A_A a_a;N
    A_A a_a;N
    A_A a_a;N
} A_A_A;N
N
N
a a {N
    A_A a;N
    a0_a a_a;  // Aa a a a AaN
N
    // Aa a a a a a a a a a.N
    a A_A_A *a_a;N
} A_A_A_A;N
N
N
// ****************************************************************************N
// Aa a a a a a a. Aa a a aN
// a a a a a a A a a,N
// Aa a a a a a...N
a a0_a a;N
N
a a A_A_A_A a;N
a a A_A_A_A a_a;N
a a A_A_A_A a_a;N
a a A_A_A a_a;N
a a A_A_A a_a;N
N
a A_A_A a_a;N
a A_A a[0];N
a A_A_A a_a_a;N
N
N
// ****************************************************************************N
// Aa a a a a aN
N
a a_a_a(a);N
a a_a_a(a);N
N
a a_a_a(a);N
a a_a_a_a(a);N
N
a a_a_a(a);N
a a_a(a);N
N
a a_a(a);N
N
a a_a_a(a);N
a a_a(a);N
N
a a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
N
N
a a_a_a(a);N
a a_a_a(a);N
a a_a_a_a(a0_a a0_a);N
a a_a(a0_a a0_a);N
a a_a_a(a0_a a);N
N
a a_a(a);N
a a_a(a0_a a0_a);N
a a_a(a);N
N
a a_a_a_a(a);N
a a_a_a(a0_a a0_a);N
N
a a_a(a);N
N
a a_a(a);N
a a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
a a_a_a(a);N
N
a a_a_a_a(a);N
N
N
a0_a a_a_a(a0_a a, a0_a a);N
N
#a // __A_AN
