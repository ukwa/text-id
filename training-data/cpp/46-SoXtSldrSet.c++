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
|      AaAaAaAa a a a a a aN
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
#a <a.a>N
#a <Aa/Aa/AaAaAaAa.a>N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
N
a AaAa _aAaAa[] = {N
    { AaAa, AaAa, AaAa, a( a a),N
      0,  AaAa, (AaAa) 0 }N
};N
N
a AaAa _aAaAa[] = {N
    { AaAa, AaAa, AaAa, a( a a),N
      0,  AaAa, (AaAa) 0 }N
};N
N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa,N
    AaAa *aAaAa)N
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    aAaAa)N
{N
    _aAaAa = A;N
}N
N
AaAaAaAa::~AaAaAaAa()N
{N
}N
N
aN
AaAaAaAa::aAa()N
{N
    a aAaA, aAaA;N
    Aa aAa, aAa;N
    Aa aAaAa, aAaAa;N
    a aA, aA;N
    a aAa, aAa;N
    Aa aAaAa;N
    Aa a[0];N
    a a;N
N
    aAaA = 0;N
    aAaA = 0;N
N
    a a;N
    a (a = 0; a < _aAaAa; a++ ) {N
        _aAaAa[a]->aAaAa( aA, aA );N
	aAaA += aA;N
	aAaA = ( aA > aAaA ) ? aA : aAaA;N
    }N
N
    // a a a a a a aN
    aAa = 0;N
    aAa = 0;N
    a (a = 0; a < _aAaAa; a++ ) {N
N
	// a a a a a a aN
	aAaAa = _aAaAa[a]->aAa();N
        aAa    = aAa;N
N
        _aAaAa[a]->aAaAa( aA, aA );N
	aAa += 0.0 * ((a) aA / (a) aAaA);N
N
	a = 0;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
	AaAaAa( a[a], AaAaAa, (a) aAa ); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A);a++;N
	AaAaAa( a[a], AaAaAa, (a) aAa ); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
	AaAaAa( a[a], AaAaAa, AaA_A); a++;N
N
	AaAaAa( aAaAa, a, a );N
    }N
    N
    // Aa a a a A a a A A.N
    a (a == A)N
	a;N
N
    a ( _aAa == 0 || _aAa == 0 ) {N
	// a a a a, _aAa a _aAa a aN
	// a a a a a a 0. Aa a a, a a.N
	_aAa = aAaA;N
	_aAa = aAaA;N
	// a a a a a a a a a a a a aN
	// a a, a a a a a.N
	// a, a a a.N
	_aAaAa[0].a_a = (AaAa) (a a) aAaA;N
	_aAaAa[0].a_a = (AaAa) (a a) aAaA;N
        AaAaAaAa( a, (AaAa) &aAa, N
	       _aAaAa, AaAa( _aAaAa ), A, 0);N
        AaAaAaAa(a, (AaAa) &aAa, N
             _aAaAa, AaAa( _aAaAa ), A, 0);N
	AaAaAa( a[0], AaAa, aAa );N
	AaAaAa( a[0], AaAa, aAa );N
	AaAaAa( a, a, 0 );N
	AaAaAa( _aAaAa, a, 0 );N
    }N
    a a ( _aAa != aAaA ) {N
	// Aa a a a a (a a a a a N
	// a a, a a a a a a aAa.)N
	// Aa a a a a a a a a a.N
	// Aa a, a a a a a a:N
	// aAaAa / aAaA = aAaAa / _aAaN
	AaAaAa( a[0], AaAa, &aAaAa );N
	AaAaAa( _aAaAa, a, 0 );N
N
	// a a a a a a a a a a aN
	a (aAaAa == 0)N
	    aAaAa = aAaA;N
	aN
	    aAaAa = (Aa) (((a) aAaA )N
			  * ((a) aAaAa / (a) _aAa));N
N
	AaAaAa( a[0], AaAa, aAaAa );N
	AaAaAa( _aAaAa, a, 0 );N
	AaAaAa( a, a, 0 );N
N
	_aAa = aAaA;N
	_aAa = aAaA;N
    }N
}N
