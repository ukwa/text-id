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
* Aa (A) 0-0   Aa Aa, Aa.N
*N
_______________________________________________________________________N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
|N
|   $Aa: 0.0 $N
|N
|   Aa:N
|      Aa a a a a a a a a a N
|      a a a a.N
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
#a <a.a>N
#a <A0/AaAa.a>N
N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <Aa/a/AaAa.a>N
#a <AaAaAaAa.a>N
#a <AaAaAaAa.a>N
N
#a A    0.0N
#a A     0.0N
#a A_A_A     A / 0.0N
#a A_A_A     0.0 / AN
N
a a a_a( AaAa aAa, a &a, a &a, a &a )N
{N
    a = a( aAa[0][0]);N
    a( a(aAa[0][0])<A && a(aAa[0][0])<A){N
	/*  a( a ) a 0  */N
	a = a0(aAa[0][0], -0 * aAa[0][0]);N
	a = 0.;N
    }N
    a{N
	a = a0( -0 * aAa[0][0],aAa[0][0]);N
	a = a0( -0 * aAa[0][0],aAa[0][0]);N
    }N
}N
N
a a a_a( a a, a a, a a, AaAa &a_a )N
{N
    a      a_a[0], a_a[0];N
    a_a[0] = a( a );  a_a[0] = a( a );N
    a_a[0] = a( a );N
    a_a[0] = a( a ); a_a[0] = a( a );N
    a_a[0] = a( a );N
N
    a_a[0][0] =  a_a[0] * a_a[0];N
    a_a[0][0] = -a_a[0] * a_a[0];N
    a_a[0][0] =           a_a[0];N
    a_a[0][0] = 0.0;N
N
    a_a[0][0] =  a_a[0] * a_a[0] * a_a[0]  + a_a[0] * a_a[0];N
    a_a[0][0] = -a_a[0] * a_a[0] * a_a[0]  + a_a[0] * a_a[0];N
    a_a[0][0] = -a_a[0] * a_a[0];N
    a_a[0][0] = 0.0;N
N
    a_a[0][0] = -a_a[0] * a_a[0] * a_a[0] + a_a[0] * a_a[0];N
    a_a[0][0] =  a_a[0] * a_a[0] * a_a[0] + a_a[0] * a_a[0];N
    a_a[0][0] =  a_a[0] * a_a[0];N
    a_a[0][0] = 0.0;N
N
    a_a[0][0] = 0.0;N
    a_a[0][0] = 0.0;N
    a_a[0][0] = 0.0;N
    a_a[0][0] = 0.0;N
}N
N
/*   Aa a a a a a a a 'a' a           */N
/*   a a a a a a a 'a' a                    */N
/*  (Aa a a a a a a.)        */N
/*                                                                  */N
/*  Aa a a a a a a a a a a. Aa a a,*/N
/*  a( a0 ) a      --> a( a0 ) a      --> a( a0 ) a           */N
/*  a a a a:                                                 */N
/*  a( A + a0 ) a --> a( A - a0 ) a --> a( A + a0 ) a      */N
/*                                                                  */N
a a a_a_a( a a, a a, a a,N
			    a &a, a &a, a &a )N
{N
N
    a a;N
    a A0[0],A0[0], Aa[0];N
    a a0, a0;N
N
    Aa[0] = a;N
    Aa[0] = a;N
    Aa[0] = a;N
N
    /*  A0 a A0 a a a (a a)  */N
    A0[0] = a; A0[0] = a; A0[0] = a;N
    A0[0] = A + a; A0[0] = A - a; A0[0] = A + a;N
    /*  a a a a a 'a a' a  */N
    a( a=0; a<0; a++){N
	a( A0[a] <  Aa[a] - A ) N
	       A0[a] += 0. * A;N
	a( A0[a] <  Aa[a] - A ) N
	       A0[a] += 0. * A;N
	a( A0[a] >= Aa[a] + A ) N
	       A0[a] -= 0. * A;N
	a( A0[a] >= Aa[a] + A ) N
	       A0[a] -= 0. * A;N
    }N
    /*  a a A0 a A0 a a 'a a' a  */N
    a0 = a(Aa[0]-A0[0]) + a(Aa[0]-A0[0]) + a(Aa[0]-A0[0]);N
    a0 = a(Aa[0]-A0[0]) + a(Aa[0]-A0[0]) + a(Aa[0]-A0[0]);N
    a(a0<a0) {N
	a = A0[0]; N
	a = A0[0]; N
	a = A0[0]; N
    }N
    a { N
	a = A0[0]; N
	a = A0[0]; N
	a = A0[0]; N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a ((a->aAaAa(AaAa::aAaAaAa())) ||N
    	    (a->aAaAa(AaAa::aAaAaAa())));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa0a      a;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	a = ((AaAa *)_aAa)->a.aAa();N
N
	a ( a[0] != aA || a[0] != aA || a[0] != aA ) { // A A AN
	    ((AaAa *)_aAa)->a.aAa( aA, aA, aA );N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    AaAa0a      a;N
N
    a ( _aAa ) {N
N
	// a a a aN
	a = ((AaAa *)_aAa)->a.aAa();N
N
	// a a a aN
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
    }N
}N
N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa( N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa( N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa( N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a ((a->aAaAa(AaAa::aAaAaAa())) ||N
    	    (a->aAaAa(AaAa::aAaAaAa())));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa0a      a;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	a = ((AaAa *)_aAa)->aAa.aAa();N
N
	a ( a[0] != aA || a[0] != aA || a[0] != aA ) { // A A AN
	    ((AaAa *)_aAa)->aAa.aAa( aA, aA, aA );N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    AaAa0a      a;N
N
    a ( _aAa ) {N
N
	// a a a aN
	a = ((AaAa *)_aAa)->aAa.aAa();N
N
	// a a a aN
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a ((a->aAaAa(AaAa::aAaAaAa())) ||N
    	    (a->aAaAa(AaAa::aAaAaAa())));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa     aAa;N
    AaAa   aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a a aN
	aA *= A_A_A;N
	aA *= A_A_A;N
	aA *= A_A_A;N
N
	// a a a aN
	a_a( aA, aA, aA, aAa );N
N
	aAa.aAa( aAa );N
	((AaAa *)_aAa)->a.aAa( aAa );N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    AaAa     aAa;N
    AaAa   aAa;N
    a  	 aA, aA, aA, a, a, a;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa();N
	aAa.aAa( aAa );N
        a_a( aAa, a, a, a );N
N
	// a a a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a a aN
	aA *= A_A_A;N
	aA *= A_A_A;N
	aA *= A_A_A;N
N
	// a a a a a a a a a a a N
	// aN
	a_a_a( aA, aA, aA, a, a, a );N
N
	// a a a a aN
	a *= A_A_A;N
	a *= A_A_A;N
	a *= A_A_A;N
N
	// a a a aN
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a ((a->aAaAa(AaAa::aAaAaAa())) ||N
    	    (a->aAaAa(AaAa::aAaAaAa())));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa     aAa;N
    AaAa   aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a a aN
	aA *= A_A_A;N
	aA *= A_A_A;N
	aA *= A_A_A;N
N
	// a a a aN
	a_a( aA, aA, aA, aAa );N
N
	aAa.aAa( aAa );N
	((AaAa *)_aAa)->aAa.aAa( aAa );N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    AaAa     aAa;N
    AaAa   aAa;N
    a  	 aA, aA, aA, a, a, a;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa();N
	aAa.aAa( aAa );N
        a_a( aAa, a, a, a );N
N
	// a a a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a a aN
	aA *= A_A_A;N
	aA *= A_A_A;N
	aA *= A_A_A;N
N
	// a a a a a a a a a a a N
	// aN
	a_a_a( aA, aA, aA, a, a, a );N
N
	// a a a a aN
	a *= A_A_A;N
	a *= A_A_A;N
	a *= A_A_A;N
N
	// a a a aN
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
	a ( a != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAa(a);N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa0a      a;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	a = ((AaAa *)_aAa)->a.aAa();N
N
	a ( a[0] != aA || a[0] != aA || a[0] != aA ) { // A A AN
	    ((AaAa *)_aAa)->a.aAa( aA, aA, aA );N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    AaAa0a      a;N
N
    a ( _aAa ) {N
N
	// a a a aN
	a = ((AaAa *)_aAa)->a.aAa();N
N
	// a a a aN
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
	a ( a[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( a[0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a a aN
	a (aAa[0][0] != aA || aAa[0][0] != aA || aAa[0][0] != aA) {N
	    ((AaAa *)_aAa)->aAa.aAa( aA, aA, aA );N
	    ((AaAa *)_aAa)->aAa.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a a aN
	a (aAa[0][0] != aA || aAa[0][0] != aA || aAa[0][0] != aA) {N
	    ((AaAa *)_aAa)->aAa.aAa( aA, aA, aA );N
	    ((AaAa *)_aAa)->aAa.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	a (aAa[0][0] != aA || aAa[0][0] != aA || aAa[0][0] != aA) {N
	    ((AaAa *)_aAa)->aAa.aAa( aA, aA, aA );N
	    ((AaAa *)_aAa)->aAa.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	a (aAa[0][0] != aA || aAa[0][0] != aA || aAa[0][0] != aA) {N
	    ((AaAa *)_aAa)->aAa.aAa( aA, aA, aA );N
	    ((AaAa *)_aAa)->aAa.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        AaAa0a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->aAa.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
	a ( aAa[0][0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0][0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aAa;N
    a        a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aAa = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa( 0 );N
N
	a (aAa[0] != aAa ) {N
	    ((AaAa *)_aAa)->a.aAa( aAa );N
	    ((AaAa *)_aAa)->a.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0] );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aAa;N
    a        a *aAa;N
N
    a ( _aAa ) {  N
N
	// a a a a-a aN
	aAa = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa( 0 );N
N
	a (aAa[0] != aAa ) {N
	    ((AaAa *)_aAa)->a.aAa( aAa );N
	    ((AaAa *)_aAa)->a.aAa(A);N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        a *aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa( 0 );N
N
	// a a a aN
	a ( aAa[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0] );N
    }N
}N
N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aAa;N
    a        aAa;N
N
    a ( _aAa ) {N
N
	// a a a a-a aN
	aAa = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa();N
N
	a (aAa != aAa ) {N
	    ((AaAa *)_aAa)->a.aAa( aAa );N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa();N
N
	// a a a aN
	a ( aAa != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa );N
    }N
}N
N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    a        aA, aA, aA;N
    AaAa      aAa;N
N
    a ( _aAa ) {N
N
	// a a a a-a aN
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
	aA = ((AaAaAaAa *) _aAaAa[0])->aAaAa();N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa();N
N
	// a a a a aN
	a (aAa[0] != aA || aAa[0] != aA || aAa[0] != aA) {N
	    ((AaAa *)_aAa)->a.aAa( aA, aA, aA );N
	}N
    }N
}N
N
aN
AaAaAaAaAaAa::aAaAaAa()N
{N
    AaAa      aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	aAa = ((AaAa *)_aAa)->a.aAa();N
N
	// a a a aN
	a ( aAa[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0] );N
	a ( aAa[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0] );N
	a ( aAa[0] != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa[0] );N
    }N
}N
///////////////////////////////////////////////////////////////////////////////N
//N
//   Aa: AaAaAaAaAaN
//N
///////////////////////////////////////////////////////////////////////////////N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)  // a a a a a a aN
{N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [_aAaAa] );N
N
    Aa a = aAa(aAaAa());N
    N
    _aAaAa[0] = a AaAaAaAa(N
				a, A, A, N
				A_A_A_A,N
				A_A_A_A );N
N
    a( a a = 0; a < _aAaAa; a++ )N
	((AaAaAaAa *)_aAaAa[a])->aAaAa( a );N
N
    AaAaAaAa::aAa(a);N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaAaN
AaAaAaAaAa::aAaAa(AaAa *a)N
{N
    a (a->aAaAa(AaAa::aAaAaAa()));N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a        aAa;N
    a        aAa;N
N
    a ( _aAa ) {N
N
	// a a a a-a aN
	aAa = ((AaAaAaAa *) _aAaAa[0])->aAaAa() * A_A_A;N
N
	// a a a aN
	a ( _aAa->aAaAa(AaAaAa::aAaAaAa()) )N
	    aAa = ((AaAaAa *)_aAa)->aAa.aAa();N
	aN
	    aAa = ((AaAaAa *)_aAa)->a.aAa();N
N
	// a a a a aN
	a (aAa != aAa ) {N
	    a (_aAa->aAaAa(AaAaAa::aAaAaAa()))N
		((AaAaAa *)_aAa)->aAa.aAa( aAa );N
	    aN
		((AaAaAa *)_aAa)->a.aAa( aAa );N
	    N
	}N
    }N
}N
N
aN
AaAaAaAaAa::aAaAaAa()N
{N
    a      aAa;N
N
    a ( _aAa ) {N
N
	// a a a aN
	a (_aAa->aAaAa(AaAaAa::aAaAaAa()))N
	    aAa = ((AaAaAa *)_aAa)->aAa.aAa() * A_A_A;N
	aN
	    aAa = ((AaAaAa *)_aAa)->a.aAa();N
N
	// a a a aN
	a (aAa != ((AaAaAaAa *) _aAaAa[0])->aAaAa())N
	    ((AaAaAaAa *) _aAaAa[0])->aAaAa( aAa );N
    }N
}N
