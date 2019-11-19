/*N
 *N
 *  Aa (A) 0 Aa Aa, Aa.  Aa Aa Aa. N
 *N
 *  Aa a a a a; a a a a a/aN
 *  a a a a a a a A Aa Aa AaN
 *  Aa a a a a Aa Aa Aa; aN
 *  a 0.0 a a Aa, a (a a a) a a a.N
 *N
 *  Aa a a a a a a a a a a a,N
 *  a A A A; a a a a a aN
 *  A a A A A A A.  Aa a AN
 *  Aa Aa Aa Aa a a a.N
 *N
 *  Aa, a a a a a a a a a aN
 *  a a a a a a a a a a aN
 *  a a a.  Aa a a a, a a aN
 *  a, a a a a a a.  Aa a, aN
 *  a, a a a a a a a a a a aN
 *  a a, a a a a a.N
 * N
 *  Aa a a a a a a a A Aa Aa AaN
 *  Aa a a a a; a a, a a a Aa AaN
 *  Aa, Aa., 0 Aa Aa, Aa 0, Aa, A  0-0  AN
 *N
 *  Aa a: Aa Aa, Aa., 0 Aa Aa,N
 *  Aa Aa, A  0, a:N
 * N
 *  a://a.a.a N
 * N
 *  Aa a a a a a, a: N
 * N
 *  a://a.a.a/a/AaAa/AaAa/N
 *N
 */N
N
/*N
 * Aa (A) 0,0   Aa Aa, Aa.N
 *N
 _______________________________________________________________________N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 |N
 |   $Aa: 0.0 $N
 |N
 |   Aa:N
 |      AaAaAaAaN
 |N
 |   Aa(a): Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
 N
#a <Aa/AaAa.a>N
#a <Aa/AaAaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a <Aa/Aa/AaAa.a>	N
#a <Aa/Aa/AaAaAaAa.a>	N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/Aa/AaAaAa.a>N
N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a/a.a>N
#a <a/a.a>N
#a <a.a>N
#a <a.a>N
N
#a <A0/AaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
#a <Aa/AaAa.a>N
#a <Aa/AaA.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/a/AaA.a>N
N
N
// Aa a AaAa AaN
#a A      0N
#a A      0N
#a A	(0.0)N
#a A	(0.0)N
#a A		(0.0)N
#a A	(0.0)N
#a A	(0.0)N
#a A	(0.0)N
#a A_A_A   0N
#a A_A_A       0.0a-0N
#a A_A_A     0.0N
N
N
#a A_A_A         0N
#a A_A_A_A        0N
#a A_A_A_A 0N
N
#a A_A(A) ((a *) ((*a)[A]))N
#a 0N
#a A_A_A(A) \N
    aAa[A] = AaAaAaAaAa (aAa, \N
                    aAa[A], a, 0); \N
    AaAaAa (aAa[A], AaAaAa, \N
                   (AaAaAa) AaAaAaAa::aAaA, \N
                   (AaAa)(A));N
#aN
N
N
// Aa a a. +++N
a a {N
	a *aAa;N
	a *aAa;N
	a *aAa;N
	a *aAa;N
	a *aAa;N
	a *a;N
	a *a;N
	a *aAa;N
	a *aAa;N
	a *a;N
	a *a;N
	a *aAa;   N
	a *a;	N
	a *a;N
	a *aAa;N
	a *a;N
	a *a;N
	a *a;N
	a *aA;N
	a *aA;N
	a *a0;N
	a *a0;N
	a *a0;N
	a *a;N
} A_A;N
a A_A a;N
a a *a[]={ N
	"Aa Aa:",N
	"Aa Aa",N
	"Aa Aa",N
	"Aa Aa:",N
	"AaAa",N
	"A",N
	"Aa:",N
	"Aa Aa:",N
	"Aa Aa:",N
	"Aa",N
	"Aa",N
        "Aa Aa:",N
	"Aa",N
	"Aa",N
	"Aa Aa (a):",N
	"Aa:",N
	"A:",N
	"Aa:",N
	"Aa",N
	"Aa",N
	"0",N
	"0",N
	"0",N
	"a"N
};N
N
N
// ??? A 0.0 N
//N
// Aa a a a a a a a a a a a aN
// AaAaAa a a a a a.  Aa a aN
// a, a a a a a a a a a aN
// a a a a a a a a a a aN
// a a a.N
//N
N
a _AaAaAaAa {N
  a:N
    _AaAaAaAa(AaAaAa *aAa, AaAaAaAa *a)N
        { a = aAa; aAa = a;}N
    AaAaAa *a;       // Aa a a a a a aN
    AaAaAaAa *aAa;// Aa a a a a aN
};N
N
// Aa a a a a a a a aN
a AaAa *aAaAa = A;N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
// ??? A 0.0N
//    Aa a a a a _AaAaAaAa a a aN
//    a a a a a AaAaAaAa a.N
//N
// Aa: aN
N
a _AaAaAaAa *_AaAaAaAa(a AaAaAaAa *a)N
N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a, a AN
    a (aAaAa == A)N
        a A;N
N
    a (a a=0; a<aAaAa->aAa(); a++) {N
N
        _AaAaAaAa *a = (_AaAaAaAa *)(*aAaAa)[a];N
        a (a->aAa == a)N
            a a;N
    }N
N
    // A a a a a a a a a a.  Aa A.N
    a A;N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a, a aAa = AN
    aAa(A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaA a - a a a a a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa aAa)N
	: AaAaAa(N
	    a,N
	    a, N
	    aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a a, N
    // a a a a a a a a a. Aa a aAaN
    // a a a a a a.N
    aAa(aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a aN
//N
// aN
//N
aN
AaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAa      = A;N
    aAa    = A;N
    aAa = A;N
    aAa  = A;N
    aAaAa    = A;N
    aAaAa = A;N
    aAa       = A;N
    aAa       = A;N
    aAa = A;N
    aAaAa    = A;N
    aAaAa     = A;N
    aAaAaAa = A;N
    aAaAaAa  = A;N
    aAaAa   = A;N
    aAaAa    = A;N
    aAa = A;N
    a       = a AaAa;N
    aAa.aAa(A, A);N
    aAa.aAa(aAa[0]/AaAaAa::aAaAaAaAa(),N
                       aAa[0]/AaAaAa::aAaAaAaAa());N
N
    //N
    // Aa a a a a a.N
    //N
    aAaAa();N
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa.N
//N
// Aa: aN
N
AaAaAaAa::~AaAaAaAa()N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    // ??? A 0.0N
    //N
    // Aa a a a a a a a a a a a a.N
    // Aa, a a a a a a a a a.N
    //N
    _AaAaAaAa *a = _AaAaAaAa(a);N
    a (a != A) {N
        a a->a;N
        aAaAa->a(aAaAa->a(a));N
        a a;N
    }N
N
    a (a a = 0; a < a->aAa(); a++) {N
	a (A_A(a) != A) a(A_A(a));N
    }N
    a a;N
    a (aAa != A) a(aAa);N
    N
    a (aAa != A)N
    	aAa->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a.N
//N
// Aa: aN
N
AaAaAa *N
AaAaAaAa::aAaAa()N
N
N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // ??? A 0.0N
    //N
    // Aa a a a a a a a a a a.N
    // Aa a a a, a a a a a a a a.  AaN
    // a a a.N
    //N
    _AaAaAaAa *aAa = _AaAaAaAa(a);N
    a (aAa == A) {N
        AaAaAa aAa(0, 0);N
        AaAaAa *aAa = a AaAaAa(aAa);N
        aAa = a _AaAaAaAa(aAa, a);N
N
        // Aa a aAaAa a A, a a a a a aN
        // a a a.N
        a (aAaAa == A) {N
            aAaAa = a AaAa(0);N
        }N
        aAaAa->a(aAa);N
    }N
N
    a (aAa->a);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//    Aa a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(N
    a AaAaAa *a )N
N
N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // ??? A 0.0N
    //N
    // Aa a a a a a a a a a a a.N
    // Aa a a a a a a a a aN
    // a, a a.  Aa a a a a a a.N
    //N
    _AaAaAaAa *a = _AaAaAaAa(a);N
N
    a (a == A) {N
        a = a _AaAaAaAa((AaAaAa *)a, a);N
N
        // Aa a aAaAa a A, a a a a a aN
        // a a a.N
        a (aAaAa == A) {N
            aAaAa = a AaAa(0);N
        }N
        aAaAa->a(a);N
    }N
N
    a->a = (AaAaAa *)a;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAaAa::aAaAa( AaAa *a )N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a ( a != A )N
	a->a();N
N
    a (aAa != A)N
    	aAa->a();N
	N
    aAa = a;N
    N
    a (aAa != A)N
        aAaAa = A;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a.N
//N
// Aa: aN
//N
aN
AaAaAaAa::aAaAa( AaAa *a )N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a ( a != A )N
	a->a();N
N
    a (aAa != A)N
    	aAa->a();N
	N
    aAa = a;N
    N
    a (aAa != A)N
        aAaAa = A;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a aN
//N
// Aa: aN
//N
aN
AaAaAaAa::aAaAa( a AaAa0a &a )N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAa = a;N
    aAa.aAa(N
            (a)(aAa[0]*AaAaAa::aAaAaAaAa()),N
            (a)(aAa[0]*AaAaAa::aAaAaAaAa()));N
N
    aAa();N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a aN
//N
// Aa: aN
//N
aN
AaAaAaAa::aAaAa( a AaAa0a &a )N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAa = a;N
    aAa.aAa(N
            aAa[0]/AaAaAa::aAaAaAaAa(),N
            aAa[0]/AaAaAa::aAaAaAaAa());N
N
    aAa();N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a.N
//N
// Aa: aN
N
AaN
AaAaAaAa::aAa(Aa a)N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa      a[0];N
    a      a;N
N
    //N
    // "a" a a a a a a a a.  a a aN
    // a a a, a a a aAa a a aN
    // a a, a a a a a a a a a, a aN
    // a a, a a a a a.N
    //N
    a = 0;N
    Aa a = AaAaAa(aAaAa(), aAaAaAaAa, N
                                        a, A, 0);N
    AaAaAa( a[a], AaAaAa,  0 ); a++;N
    AaAaAa( a, a, a );N
N
N
    // a a...N
       AaAaAa a(a);N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "a", "A", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.aAa ))N
	   a.aAa = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "a", "A", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "a", "Aa", a.a ))N
	   a.a = a[0];N
       a (!a.aAa( "aA", "AaA", a.aA ))N
	   a.aA = a[0];N
       a (!a.aAa( "aA", "AaA", a.aA ))N
	   a.aA = a[0];N
       a (!a.aAa( "aAa0", "AaAa0", a.a0 ))N
	   a.a0 = a[0];N
       a (!a.aAa( "aAa0", "AaAa0", a.a0 ))N
	   a.a0 = a[0];N
       a (!a.aAa( "aAa0", "AaAa0", a.a0 ))N
	   a.a0 = a[0];N
       a (!a.aAa( "aAa", "AaAa", a.a ))N
	   a.a = a[0];N
N
N
N
    // Aa a a a a a Aa Aa.N
    aAaAa( a.aAa, a.aAa, a.aAa, 0, 0,N
            a, (AaAaAa) AaAaAaAa::aA);N
N
    //N
    // Aa a Aa a Aa a, a a a a.  AaN
    // a a a a a a a.N
    //N
    a = 0;N
    aAa = AaAaAa ( a.aA, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAa,       0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    aAa = AaAaAaAa (A, aAaAaAaAa,N
                                        a, a, a);N
    AaAaAa (aAa, AaAaAa, N
        (AaAaAa) AaAaAaAa::aA, (AaAa)(a));N
    AaAaAa(aAa);N
N
    a = 0;N
    aAa = AaAaAa (a.aA, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAa,       0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    aAa = AaAaAaAa (A, aAaAaAaAa,N
                                         a, a, a);N
    AaAaAa (aAa, AaAaAa, N
        (AaAaAa) AaAaAaAa::aA, (AaAa)(a));N
    AaAaAa(aAa);N
N
    a = 0;N
    aAa = AaAaAa( a.a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    aAaAa  = AaAaAaAa (A, aAaAaAa,N
                                        a, a, a);N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAa,     A ); a++;N
    aAa = AaAaAaAa (A, aAaAaAa,N
                                        a, a, a);N
    AaAaAa(aAa);N
N
    // Aa a a a a a a a aN
    a = 0;N
    aAaAa = AaAaAa (A, aAaAaAaAa, N
                                   a, A, 0);N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  0 ); a++;N
    AaAaAa( a[a], AaAa, 0 ); a++;N
    AaAaAa( a[a], AaAa, 0 ); a++;N
    AaAaAa( aAaAa, a, a );N
    aAaAa( a.aAa, a.aAa, a.a,N
            0, 0, aAaAa,N
            (AaAaAa) AaAaAaAa::aAaA);N
N
    //N
    //  Aa a a a a a a a a A.N
    //  Aa a a a a a a a a aAa a.N
    //N
    aAaAaAa( a );N
    aAaAaAaAaAa( a );N
    aAaAaAa( a );N
    aAaAa(aAa);N
    aAaAa(aAa);N
    AaAaAa( a[0], AaAa, 0 );N
    AaAaAa( a[0], AaAa, 0 );N
    AaAaAa( aAaAa, a, 0 );N
    AaAaAa( a[0], AaAa, 0 );N
    AaAaAa( a[0], AaAa, 0 );N
    AaAaAa( aAaAaAaAa, a, 0 );N
    AaAaAa( aAaAa, a, 0 );N
    a (aAa)N
        AaAaAa( aAaAa );N
    a a (aAaAa)N
        AaAaAa( aAaAaAaAa );N
    aN
        AaAaAa( aAaAa );N
N
    //N
    // Aa a a, a, a a aN
    //N
    aAaAaAa( a );N
N
    a a;N
}N
N
N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a aAaAa a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa( Aa a )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a, a;N
    Aa      a[0];N
    a      a, a;N
N
    aAaAa = AaAaAaAa (aAaAa(),N
            aAaAaAaAa, a, A, 0);N
    a = 0;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  0 ); a++;N
    AaAaAa( aAaAa, a, a );N
N
    // Aa a a a a Aa Aa a Aa AaN
    aAaAa( a.aAa, a.a, a.a, 0, 0,N
            aAaAa, (AaAaAa) AaAaAaAa::aA);N
    aAaAa( a.aAa, a.a, a.a, 0, 0,N
            aAaAa, (AaAaAa) AaAaAaAa::aAaA);N
N
    // Aa a a a a a Aa AaN
    aAaAa( a.aAa, 0, aAaAa,N
            aAaAa, aAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA,N
            (AaAaAa) AaAaAaAa::aAaAaA );N
N
    //N
    // Aa a a a a aN
    //N
    a = 0;N
    aAa = AaAaAa ( a.a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
                                 aAaAa, a, a);N
    AaAaAa(aAa);N
    N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAa,       0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa, AaA_A); a++;N
    a = AaAaAaAa(aAaAa, "aAa", a, a);N
    AaAaAa(a,N
    	AaAaAaAa,N
	(AaAaAa) AaAaAaAa::aAa,N
	(AaAa) a);N
    AaAaAa (a);N
    N
    // a a a a a aN
    aAa = -0;N
    a (a = 0; a < a->aAa(); a++)N
    {N
        AaAa aAa = AaAaAa (A_A(a),N
                                            AaA_A_A);N
        AaAaAaAaAa (a, aAa, 0);N
	AaAaAa(aAa); // AaAa a a aN
	N
	// a a a a a, a a a. (a a a a 0)N
        a (a(A_A(a), aAa) == 0) {N
            AaAaAaAa (a, a+0, A);N
	    aAa = a;N
	}N
    }N
N
    // Aa a a a a a AN
    aAa( 0, aAaAa, aAa,N
            (AaAaAa) AaAaAaAa::aA );N
}N
N
N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a aAaAaAaAa a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAaAaAa( Aa a )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a;N
    Aa      a[0];N
    a      a;N
N
    a = 0;N
    aAaAaAaAa = AaAaAa (A, aAaAaAaAa, N
                                   a, A, 0);N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  0 ); a++;N
    AaAaAa( aAaAaAaAa, a, a );N
N
    // Aa a a a a Aa AaN
    aAaAa( a.aAa, a.a, a.a, 0, 0,N
            aAaAaAaAa,N
            (AaAaAa) AaAaAaAa::aA);N
N
    // Aa a a a a a Aa AaN
    aAaAa( a.aAa, 0, aAaAaAaAa,N
            aAaAaAa, aAaAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaAaA,N
            (AaAaAa) AaAaAaAa::aAaAaAaA );N
N
    //N
    // Aa a AaAa a a a.N
    //N
    a = 0;N
    aAa = AaAaAa (a.aAa, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
                                        aAaAaAaAa, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    aAaAaAa = AaAaAaAa (A, aAaAaAa,N
                                        aAaAaAaAa, a, a);N
    // Aa a a a a a AN
    aAa( 0, aAaAaAaAa, aAaAa,N
            (AaAaAa) AaAaAaAa::aAaA );N
}N
N
N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a aAaAa a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa( Aa a )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a;N
    Aa      a[0];N
    a      a;N
N
    a = 0;N
    aAaAa = AaAaAa (A, aAaAaAaAa, N
                                   a, A, 0);N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    AaAaAa( a[a], AaAaAa,  0 ); a++;N
    AaAaAa( aAaAa, a, a );N
N
    // Aa a a a a Aa AaN
    aAaAa( a.aAa, a.aAa, a.a, 0, 0,N
            aAaAa,N
            (AaAaAa) AaAaAaAa::aAaA);N
N
    // Aa a a a a a Aa AaN
    aAaAa( a.a, 0, aAaAa,N
            aAaAa, aAaAa,N
            (AaAaAa) AaAaAaAa::aAaAaA,N
            (AaAaAa) AaAaAaAa::aAaAaA );N
N
    // Aa a a a a a aN
    a a[0];N
    a(a, "%a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
    a(a, "%a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
N
    // Aa a AaAa a a a.N
    a = 0;N
    aAa = AaAaAa (a.aAa, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
                                        aAaAa, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,        0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    aAaAa = AaAaAaAa (A, aAaAaAa,N
                                        aAaAa, a, a);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a Aa Aa.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(N
    a *a, N
    a *a0,N
    a *a0,N
    a  aAa,N
    a  aAa,N
    Aa a,N
    AaAaAa a )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a, a, a;N
    Aa      a[0];N
    a      a;N
N
    //N
    // Aa a Aa Aa.  Aa a a a AaAa aN
    // a a a a a a a AaAa a.N
    //N
    a = 0;N
    aAa = AaAaAa( a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
                                        a, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAa,  AaA ); a++;N
    AaAaAa( a[a], AaAa,      AaA_A ); a++;N
    a = AaAaAaAa(a, "aAa", a, a);N
    AaAaAa (a);N
N
    a = 0;N
    aAa = AaAaAa (a0, AaA_A_A);N
    AaAaAa( a[a], AaAa,  A ); a++;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    a = AaAaAaAa("aAa0", aAaAaAaAa,N
                              a, a, a);N
    AaAaAa (a, AaAaAaAa, a, (AaAa)(a));N
    AaAaAa(aAa);N
N
    a = 0;N
    aAa = AaAaAa (a0, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    AaAaAa( a[a], AaAaAa, 0 ); a++;N
    a = AaAaAaAa("aAa0", aAaAaAaAa,N
                       a, a, a);N
    AaAaAa(aAa);N
}N
 N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a aN
//      a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa(N
    a *a, N
    a  aAa,N
    Aa a,N
    Aa &aAa,N
    Aa &aAa,N
    AaAaAa a0,N
    AaAaAa a0 )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a;N
    Aa      a[0];N
    a      a;N
N
    //N
    // Aa a Aa Aa a.  Aa a a a a a a aN
    // a a a a a a a a a.N
    //N
    a = 0;N
    aAa = AaAaAa (a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
            a, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            aAa-0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0); a++;N
    AaAaAa( a[a], AaAa, a(a.a0)); a++;N
    aAa = AaAaAaAa("aAa", aAaAaAa,N
            a, a, a);N
    a (a0 != A)N
        AaAaAa(aAa, AaAaAa, a0, (AaAa) a);N
N
    a = 0;N
    aAa = AaAaAa (a.a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
                                 a, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            aAa-0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0); a++;N
    AaAaAa( a[a], AaAa, a(a.a0)); a++;N
    aAa = AaAaAaAa("aAa", aAaAaAa,N
            a, a, a);N
    a (a0 != A)N
        AaAaAa(aAa, AaAaAa, a0, (AaAa) a);N
}    N
 N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a A a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAa(N
    a  aAa,N
    Aa a,N
    Aa &aAa,N
    AaAaAa a )N
N
//N
///////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa;N
    Aa   a;N
    Aa      a[0];N
    a      a;N
N
    a = 0;N
    aAa = AaAaAa ( a.a, AaA_A_A);N
    AaAaAa( a[a], AaAa,            aAa ); a++;N
    AaAaAa( a[a], AaAaAa,  aAa ); a++;N
    a  = AaAaAaAa (A, aAaAaAa,N
            a, a, a);N
    AaAaAa(aAa);N
N
    a = 0;N
    AaAaAa( a[a], AaAa,            0 ); a++;N
    AaAaAa( a[a], AaAa,            aAa-0 ); a++;N
    AaAaAa( a[a], AaAaAa, 0); a++;N
    AaAaAa( a[a], AaAa, a(a.a0)); a++;N
    aAa = AaAaAaAa("aAa", aAaAaAa,N
            a, a, a);N
    AaAaAa(aAa, AaAaAa, a, (AaAa) a);N
    AaAaAaAa (aAa, "0");N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a aN
//      a a a a aAaAa a aAaAa aN
//      a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAa(N
    AaAaAaAa *a )N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    Aa      a[0];N
N
    a (a->aAa)N
    {N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
        AaAaAa( a->aAa, a, 0 );N
N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAaAa, a, 0 );N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
    }N
    a a (a->aAaAa)N
    {N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAaAa, a, 0 );N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
        AaAaAa( a->aAa, a, 0 );N
    }N
    aN
    {N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAaAa, a, 0 );N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
        AaAaAa( a[0], AaAa,        0 );N
        AaAaAa( a->aAa, a, 0 );N
        AaAaAa( a->aAa, a, 0 );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa Aa a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a->aAa = (a->aAa) ? A : A;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa Aa a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a->aAa = (a->aAa) ? A : A;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAa);N
    a a = (a)a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAa);N
    a a = (a)a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAa);N
    a a = (a)a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAa);N
    a a = (a)a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAa);N
    a a = a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAa);N
    a a = a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAa);N
    a a = a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAa);N
    a a = a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a AaAa a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAaAa);N
    a a = a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAaAa);N
    a a = a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a AaAa a a aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAaAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa)N
        a;N
N
    a *a = AaAaAaAa (a->aAaAaAa);N
    a a = a(a);N
    AaAa(a);N
    a = AaAaAaAa (a->aAaAaAa);N
    a a = a(a);N
    AaAa(a);N
    a->aAaAa(AaAa0a(a, a));N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a A aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa) {N
        a->aAa = A;N
        a;N
    }N
    a->aAa = A;N
    a *a = AaAaAaAa (a->aAa);N
    AaAaAaAa (a->aAaAa, a);N
    AaAa(a);N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a AaAa A aN
//      a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a (a->aAa) {N
        a->aAa = A;N
        a;N
    }N
    a->aAa = A;N
    a *a = AaAaAaAa (a->aAaAa);N
    AaAaAaAa (a->aAa, a);N
    AaAa(a);N
N
    // a a a a a a aN
    AaAaAa(AaAa::aAaAa(a->aAa()),N
            AaA_A);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a a;N
N
    a->aAa = (a->aAa) ? A : A;N
N
    //N
    // Aa a a a a a a a a a aN
    // a a a.N
    //N
    a (a->aAa)N
    {N
        AaAaAa( a->aAaAa );N
        a (a->aAaAa)N
            AaAaAa( a->aAaAa );N
        aN
            AaAaAa( a->aAaAaAaAa );N
        AaAaAa( a->aAaAa );N
        a = A_A_A;N
    }N
    a a (a->aAaAa)N
    {N
        AaAaAa( a->aAaAa );N
        AaAaAa( a->aAaAa );N
        AaAaAa( a->aAaAaAaAa );N
        a = A_A_A_A;N
    }N
    aN
    {N
        AaAaAa( a->aAaAa );N
        AaAaAa( a->aAaAa );N
        AaAaAa( a->aAaAa );N
        a = A_A_A_A;N
    }N
N
    //N
    // a a a a a a aN
    //N
    a (a->aAaAaAa()) {N
N
        // a a a a a a a a aN
        AaAa0a a = a->aAa();N
        a[0] = a;N
        a->aAa(a);N
    }N
N
    a->aAaAaAa( a );N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a a;N
N
    a->aAaAa = (a->aAaAa) ? A : A;N
N
    //N
    // Aa a a a a a a a a a aN
    // a a a.N
    //N
    a (a->aAaAa)N
    {N
        AaAaAa( a->aAaAa );N
        AaAaAa( a->aAaAaAaAa );N
        a = A_A_A_A;N
    }N
    aN
    {N
        AaAaAa( a->aAaAaAaAa );N
        AaAaAa( a->aAaAa );N
        a = A_A_A_A;N
    }N
N
    //N
    // a a a a a a aN
    //N
    a (a->aAaAaAa()) {N
N
        // a a a a a a a a aN
        AaAa0a a = a->aAa();N
        a[0] = a;N
        a->aAa(a);N
    }N
N
    a->aAaAaAa( a );N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a->a();N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
//  Aa a Aa a a a a a a.N
//N
//  Aa: a aN
//N
aN
AaAaAaAa::aAa(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a 0, a a a a a 0N
    a->aAa = ((AaAaAaAa *) a)->a_a - 0;N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa a a a AaAaAaAa N
//      a a a.  Aa a a a a a a a N
//      aAa a a a a a a a a a aN
//      a AaAa a a. (Aa a a a a aAa())N
//N
// Aa: aN
N
aN
AaAaAaAa::a()N
//N
//////////////////////////////////////////////////////////////////////N
{N
    AaAa      aAa;N
    A          *aA = A;N
    a          *aAa;N
    a          aAaAa[0];N
    a	  *a;N
    a          *aAa = A;N
    AaAa       aAa(0.0, 0.0, 0.0);N
    AaAaAa *a;N
N
    AaAaAaAa (aAa, "Aa a a...");N
    AaAaAa(aAa);N
N
    //N
    // Aa a aAa aN
    //N
    aAa.aAa ((a *)a);N
N
    // Aa Aa Aa.  Aa a a a.N
    a *aAa = AaAaAaAa(aAa);N
    a (aAaAa) {N
        a a, a;N
        a (aAa) {N
	    a = AaAaAaAa (aAaAa);N
            a = a(a);N
	    AaAa(a);N
	    a = AaAaAaAa (aAaAa);N
            a = a(a);N
	    AaAa(a);N
            aAaAa(AaAa0a(a, a));N
        }N
        a {N
	    a = AaAaAaAa (aAaAaAa);N
            a = a(a);N
	    AaAa(a);N
	    a = AaAaAaAa (aAaAaAa);N
            a = a(a);N
	    AaAa(a);N
            aAaAa(AaAa0a(a, a));N
        }N
    }N
    a {N
	a = AaAaAaAa (aAaAa);N
        a a = (a)a(a);N
	AaAa(a);N
	a = AaAaAaAa (aAaAa);N
        a a = (a)a(a);N
	AaAa(a);N
        aAaAa(AaAa0a(a, a));N
    }N
    // a a a a a aN
    AaAaAa(AaAa::aAaAa(aAa()),N
            AaA_A);N
 N
    a (aAa == A)N
    {N
        AaAaAaAa (aAa, "A:  Aa a.");N
        AaAaAa(aAa);N
        aAa.aAa ((a *)a);N
        a;N
    }N
N
    // Aa Aa Aa, a a aN
    AaAa0a aAa = aAa;N
    a (!aAa)N
        aAa /= 0;N
N
    // Aa a a AaAa, a a a a a aN
    // a a a A.N
    a (aAa || aAaAa) {N
        a   aA = a(aAa);N
        aAa *= N
                (aA / AaAaAa::aAaAaAaAa());N
N
        // Aa aAa Aa, a a aAa a a.  AaN
        // a a a a a a a a a a a a.N
        aAa.aAa(0.0, 0.0, 0.0);N
    }N
N
    // Aa a a a a a a a a a a aN
    // a a a AN
    AaAa0a aAa = AaAaAa::aAaAa();N
N
    a ((aAa[0] > aAa[0]) || (aAa[0] > aAa[0])) {N
        a aAa[0];N
N
        a(aAa, "A:  Aa %a a %a.",N
            aAa[0], aAa[0] );N
        AaAaAaAa (aAa, aAa);N
        AaAaAa(aAa);N
        aAa.aAa ((a *)a);N
        a;N
    }N
N
    AaAaAa aAa(aAa);N
    aAa.aAaAaAa(a(aAa));N
N
    // ??? A 0.0N
    //N
    // Aa a a a a a a a a a a a N
    // a a a a, a a a a a a N
    // a a.  Aa a a a a a a aN
    // a.N
    AaAaAa a(aAa);N
    _AaAaAaAa *a = _AaAaAaAa(a);N
N
    a (a != A) {N
        a.aAaAa(a->a->aAaAa());N
        a.aAa(a->a->aAa());N
        a.aAaAa(a->a->aAaAa());N
    }N
N
    a = a AaAaAa(&a);N
    a->aAaAa(aAa);N
N
    //N
    // Aa a a!N
    //N
    a (aAaAa) {N
        a (!a->a(aAa)) {N
            AaAaAaAa (aAa, "A:  Aa a a a.");N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            a a;   N
            a;N
        }N
    }N
    aN
    {N
        a (!a->a(aAa)) {N
            AaAaAaAa (aAa, "A:  Aa a a a.");N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            a a;   N
            a;N
        }N
    }N
N
    //N
    // Aa a a a a a a a a?N
    //N
    a (aAa) {N
        a (aAa < 0)N
        {N
            AaAaAaAa (aAa, "A:  Aa a.");N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            a a;   N
            a;N
        }N
N
        aAa = A_A(aAa);N
N
        //N
        // Aa a a a a a a a a.  Aa a aN
        // a a A a a a a a.N
        //N
        a *a = a("A");N
N
        a (a == A)N
            (a)a (aAaAa, "/a/.a%a.a", a());N
        aN
            (a)a (aAaAa, "%a/.a%a.a", a, a());N
        a ((aA = a (aAaAa, "a")) == A)N
        {N
            a a[0];N
            a(a, "A:  Aa'a a %a", aAaAa);N
            AaAaAaAa (aAa, a);N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            a a;   N
            a;N
        }N
N
        //N
        // Aa a a a a a a a, a a aN
        // 0 a a a a a a a a.  Aa a aN
        // AaAa a a a a AaAa a.N
        //N
        a(aA, "%%!A-Aa-0.0\a");N
        a (!aAa)N
        {N
            a(aA, "%a %a a\a",N
                    A*(A),N
                    A*(A-A));N
            a(aA,"-0.0 a\a");N
        }N
        aN
        {N
            a(aA, "%a %a a\a",N
                    A*(A),N
                    A*(A));N
        }N
        N
        a->aAaAaAa( aA, aAa );N
        a (aA);N
        a (aA);N
N
        // Aa a a a a aN
N
#a A_A_AN
        a a aAa;N
#aN
	a aAa;N
        a a (*A_A)(a);N
#a // A_A_AN
        A_A     a;N
        a_a      a;N
N
        //N
        // Aa a a a a a a.N
        //N
        a = a (A, A_A);N
        a (!(a=a())) {N
            a (*aAa == 0)N
                a("a", "a", "-a", "-a", aAaAa, 0);N
            a {N
                a a[A_A_A];N
                a(a, "-a%a", aAa);N
                a("a", "a", "-a", a, "-a", aAaAa, 0);N
            }N
        }N
        (a)a(a, (a *)(&aAa), 0);N
        //N
        // Aa a a a.N
        //N
        (a) a(A, a);N
#a A_A_AN
        a (!(A(aAa) && aAa.a_a == 0))N
#aN
	a (!(A(aAa) && A(aAa) == 0))N
#a // A_A_AN
            AaAaAa::a("AaAaAaAa::a",N
                    "Aa Aa. Aa a Aa Aa.");N
        a(aAaAa);N
    }N
    aN
    {N
	//N
        // Aa a a.  Aa a a a a a aAa a a N
        // a a.N
        //N
        a (aAaAa)N
	    aAa = AaAaAaAa (aAaAaAa);N
        aN
	    aAa = AaAaAaAa (aAaAa);N
	a (a(aAa) == 0)N
        {N
            AaAaAaAa (aAa, "A:  Aa a a.");N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            AaAa (aAa);N
            a a;   N
	    a;N
	}N
N
        a (!aAa.aAa (aAa))N
        {N
            AaAaAaAa (aAa, "A:  Aa a a a.");N
            AaAaAa(aAa);N
            aAa.aAa ((a *)a);N
            AaAa (aAa);N
            a a;   N
	    a;N
	}N
        a (aAaAa) {N
            a (!a->aAaAaAa( aAa.aAaAa(),N
                    aAa ))N
            {N
                AaAaAaAa (aAa, "A:  Aa a a a.");N
                AaAaAa(aAa);N
                aAa.aAa();N
                aAa.aAa ((a *)a);N
                AaAa (aAa);N
                a a;   N
	        a;N
	    }N
        }N
        a a (!a->aAaA( aAa.aAaAa() ))N
        {N
            AaAaAaAa (aAa, "A:  Aa a a a.");N
            AaAaAa(aAa);N
            aAa.aAa();N
            AaAa (aAa);N
            aAa.aAa ((a *)a);N
            a a;   N
	    a;N
        }N
        N
        aAa.aAa();N
        AaAa (aAa);N
    }N
N
    //N
    // Aa a aAa aN
    //N
    aAa.aAa ((a *)a);N
N
    AaAaAaAa (aAa, "Aa a.");N
    AaAaAa(aAa);N
    a a; N
    AaAa (aAa);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a Aa a a a AaAaAaAa N
//      a a a.  Aa a a().N
//N
// Aa: aN
N
aN
AaAaAaAa::aA(N
    Aa,N
    AaAaAaAa *a,N
    AaAaAaAa *)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    a->a();N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a aN
//N
// Aa: aN
//N
aN
AaAaAaAa::aAa()N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAa = A;N
    // Aa a a a a a aN
    a a[0];N
    a(a, "%.0a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
    AaAaAaAa (aAaAaAa, a);N
    a(a, "%.0a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
    AaAaAaAa (aAaAaAa, a);N
    a(a, "%a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
    a(a, "%a", aAa[0]);N
    AaAaAaAa (aAaAa, a);N
N
    // Aa a a a a a, a aN
    a (AaAaAa(aAaAa)) {N
        AaAaAa(aAaAa);N
        AaAaAa(aAaAa);N
    }N
    a a (AaAaAa(aAaAaAa)) {N
        AaAaAa(aAaAaAa);N
        AaAaAa(aAaAaAa);N
    }N
    a (AaAaAa(aAaAa)) {N
        AaAaAa(aAaAa);N
        AaAaAa(aAaAa);N
    }N
    aAa = A;N
}N
N
N
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a a a a a a a a.N
//N
// Aa: aN
N
aN
AaAaAaAa::aAaAa()N
N
//N
//////////////////////////////////////////////////////////////////////N
{N
    A        *a;N
    a        a[0];N
    AaAa  	aAa = A;N
N
    a = a("a -a -a | a '/a/ {a ($0 != \"a\") a $0}; /^a a a:/ { a $0 }; /^a a a a/ { a \"a\"} '", "a");N
    a (a(a, 0, a) != A) {N
        a[a(a)-0] = 0;N
        a (aAa) {N
            aAa = a(a);N
	    aAa = A;N
	}N
        a a->a(a(a));N
    }N
    a(a);N
}N
N
//N
// a a a a aN
//N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a "AaAaAaAa"; }N
N
a a *N
AaAaAaAa::aAaAa() aN
{ a "Aa Aa"; }N
N
a a *N
AaAaAaAa::aAaAaAa() aN
{ a "Aa Aa"; }N
N
