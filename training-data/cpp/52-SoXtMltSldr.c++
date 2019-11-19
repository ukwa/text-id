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
|      Aa a a a a a a aN
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/a/AaAaAa.a>N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)N
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
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a a, N
    // a a a a a a a a a. Aa a aAaN
    // a a a a a a.N
    aAa(aAa);N
}N
N
///////////////////////////////////////////////////////////////////////N
//N
// 	Aa a a a.N
//N
// Aa: aN
aN
AaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    aAaAaAa(aAaA, a);N
    aAa = A;N
N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
AaAaAaAa::~AaAaAaAa()N
{N
    a (aAa != A)N
	a aAa;N
}N
N
// Aa a a a a a a a,N
// a a a _aAaAa, a N
// a aAa.N
AaN
AaAaAaAa::aAa(Aa a)N
{N
    a = AaAaAaAa(N
	    aAaAa(), aAaAaAa, a, A, 0);N
	    N
    a a;N
}N
N
AaN
AaAaAaAa::aAa( Aa a )N
{N
    Aa a[0];N
    a a, aAa, aAa;N
    Aa aAa;N
N
#a AN
    // a aN
    a (a != a)N
	a(a, "A A AaAaAaAa::aAa - a != a\a");N
#aN
N
    a = 0;N
    //???AaAaAa( a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa( a[a], AaAaAa,    AaA_A); a++;N
    AaAaAa( a[a], AaAaAa, AaA_A); a++;N
    AaAaAa( a[a], AaAaAa,   AaA_A); a++;N
    AaAaAa( a[a], AaAaAa,  AaA_A); a++;N
    AaAaAa( a, a, a );N
N
    // a a a a aAa N
    a ( a a = 0; a < _aAaAa; a++ ) {N
N
	// a a a a a a aN
	aAa = ((AaAaAaAa *) _aAaAa[a])->aAa();N
	aAa    = (a) (0.0 * ((a) a      /(a) _aAaAa));N
	aAa = (a) (0.0 * ((a) (a + 0)/(a) _aAaAa));N
	a = 0;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
	AaAaAa( a[a], AaAaAa, aAa ); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A);a++;N
	AaAaAa( a[a], AaAaAa, aAa ); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
	AaAaAa( aAa, a, a );N
    }N
N
    aAaAaAa();N
    aAa();N
N
    a a;N
}N
N
aN
AaAaAaAa::aAa( AaAa *aAa )N
{N
    a ((aAa != A) && (! aAaAa(aAa))) {N
#a AN
	AaAaAa::a("AaAaAaAa::aAa",N
		"- a a a a a\a");N
#aN
    	a;N
    }N
	N
    a (aAa)            // a a aN
	aAa->a();N
N
    a (_aAa)          // a a a aN
	_aAa->a();N
N
    _aAa = aAa;N
    a( a a = 0; a < _aAaAa; a++ )N
	_aAaAa[a]->aAa( aAa );N
N
    /* a a a */N
    aAa();N
N
    /* a a a a a a */N
    a (a)N
        aAaAaAa();N
}N
N
// a aN
aN
AaAaAaAa::aAa( AaAaAaAa *a, AaAa * )N
{N
    a (!a->aAa())N
	a;N
    N
    a->aAaAaAa(); N
}N
N
a N
AaAaAaAa::aAa()N
{N
    a ( a && _aAa) {N
	a ( !aAa ) {N
	    aAa = a AaAaAa((AaAaA *)N
					      &AaAaAaAa::aAa,N
					      a);N
        }N
	a();N
	a();N
    }N
}N
N
//N
// a a a a a a a aN
//N
aN
AaAaAaAa::aAaA(a *a, AaAa a)N
{N
    AaAaAaAa *a = (AaAaAaAa *)a;N
    N
    a (a)N
	a->a();N
    aN
	a->a();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a (a a).N
//N
aN
AaAaAaAa::a()N
//N
// a: aN
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a a aN
    a ( _aAa N
	 && aAa && aAa->aAaAa() == A) {N
        aAaAaAa();N
	aAa->a(_aAa);N
    }N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a.N
//N
aN
AaAaAaAa::a()N
//N
// a: aN
////////////////////////////////////////////////////////////////////////N
{N
    // a aN
    a (aAa != A && aAa->aAaAa() != A) {N
	aAa->a();N
    }N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    // aAaAa a aN
    a ( a a = 0; a < _aAaAa; a++ )N
        ((AaAaAaAa *) _aAaAa[a])->aAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    // aAaAa a aN
    a ( a a = 0; a < _aAaAa; a++ )N
        ((AaAaAaAa *) _aAaAa[a])->aAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    // a a aN
    a ( a a = 0; a < _aAaAa; a++ )N
        ((AaAaAaAa *) _aAaAa[a])->aAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    // a a aN
    a ( a a = 0; a < _aAaAa; a++ )N
        ((AaAaAaAa *) _aAaAa[a])->aAaAa();N
}N
N
a N
AaAaAaAa::aAaAa( a &a, a &a )N
{N
    a aA, aA;N
N
    _aAa = 0;N
    _aAa = 0;N
    a ( a a = 0; a < _aAaAa; a++ ) {N
        _aAaAa[a]->aAaAa( aA, aA );N
	_aAa += aA;N
	_aAa += aA;N
    }N
    a = _aAa;N
    a = _aAa;N
}N
N
a AaAa _aAa[] = {N
    { AaAaAa, AaAaAa, AaAaAa, a( AaAa ),N
      0, AaAa, (AaAa) A }N
};N
N
aN
AaAaAaAa::aAa( a **aAa )N
{N
    Aa            a[0];N
    AaAa       aAa;N
    Aa         aAa;N
    AaAaAaAaAa *aAa;N
N
    a ( a a = 0; a < _aAaAa; a++ ) {N
	aAa = ((AaAaAaAa *) _aAaAa[a])->aAa();N
	aAa = aAa->aAa(); N
N
	_aAa[0].a_a = (AaAa) aAa[a];N
	AaAaAaAa( aAa, (AaAa) &aAa,N
	      _aAa, AaAa( _aAa ), A, 0 );N
N
	AaAaAa( a[0], AaAaAa, aAa );N
	AaAaAa( aAa, a, 0 );N
	AaAaAa(aAa);N
    }N
}N
N
N
