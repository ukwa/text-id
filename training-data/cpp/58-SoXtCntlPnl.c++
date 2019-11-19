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
|      Aa a, a a a a a 'aAa'N
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
#a <a.a>N
#a "AaAaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <Aa/Aa/AaAaAaAa.a>N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
#a <Aa/AaA.a>N
N
a AaAa _aAaAa[] = {N
    { AaAaAa, AaAa, AaAa, a( a),N
      0, AaAa, (AaAa) A_A_A_A_A_A }N
};N
N
a AaAa _aAaAa[] = {N
    { AaAaAa, AaAaAa, AaAaAa, a( a *),N
      0, AaAa, (AaAa) A_A_A_A_A_A }N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)N
{N
    _aAaAa = A;N
    _aAa = A;N
    _aAa = 0;N
    _aAa = 0;N
    _aAa = 0; N
    _aAa = A;N
    _a = A;N
    _a = A_A_A_A_A;N
    N
    // Aa a a!N
    Aa a = aAa(aAaAa());N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaN
AaAaAaAaAa::aAa( Aa a )N
{N
    Aa  a[0];N
N
    a = AaAaAaAa(aAaAa(),aAaAaAa,N
					a,A, 0);N
    N
    AaAaAa( a[0], AaAaAa, 0 ); N
    _aAaAa = AaAaAaAa("aAaAa",N
					aAaAaAaAa,N
					a,a, 0);N
    AaAaAa( a[0], AaAaAa, 0 ); N
    _aAa = AaAaAaAa("aAa",N
					aAaAaAaAa,N
					a,a, 0);N
N
    aAa();N
N
    AaAaAa( _aAaAa, AaAaAaAa,N
		    (AaAaAa)&AaAaAaAaAa::aAaAa, N
		    (AaAa) a);N
    AaAaAa( _aAa, AaAaAa,N
		    (AaAaAa)&AaAaAaAaAa::aAa, N
		    (AaAa) a);N
    a a;N
}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa a[0];N
    a  a;N
N
    // a a a a a a a a.N
    a = 0;N
    AaAaAa(a[a], AaAaAa, _aAa ); a++;N
    AaAaAa(_aAaAa, a, a);N
N
    AaAaAa(_aAa);N
}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa a[0];N
    a  a;N
N
    // a a a a a aN
    a = 0;N
    AaAaAa(a[a], AaAaAa, 0 ); a++;N
    AaAaAa(_aAaAa, a, a);N
N
    AaAaAa(_aAa);N
}N
N
a N
AaAaAaAaAa::aAaAa( Aa, a *a_a, a *)N
{N
    AaAaAaAaAa* a = (AaAaAaAaAa *) a_a;N
    a (a->_aAa) {N
N
	// Aa a a a a aN
	a ( a->aAa() == A_A_A_A_A )N
	    a->_aAa->aAaAa();N
	a a ( a->aAa() == A_A_A_A_A )N
	    a->_aAa->aAaAa();N
	a a ( a->aAa() == A_A_A_A )N
	    a->_aAa->aAaAa();N
	aN
	    a->_aAa->aAaAa();N
N
	// Aa a a a a.N
	a (AaAaAaAaAa( a->_aAaAa ) )N
	    a->_aAa->aAa();N
	aN
	    a->_aAa->aAa();N
    }N
    a (a->_a )N
	a->_a->aAa();N
}N
N
a N
AaAaAaAaAa::aAa( Aa, a *a_a, a *)N
{N
    AaAaAaAaAa* a = (AaAaAaAaAa *) a_a;N
    a (a->_aAa) {N
N
	a ( a->aAa() == A_A_A_A_A ) {N
	    a->_aAa->aAaAa();N
	    a->aAa( A_A_A_A_A );N
	}N
	a a ( a->aAa() == A_A_A_A_A ) {N
	    a->_aAa->aAaAa();N
	    a->aAa( A_A_A_A );N
	}N
	a a ( a->aAa() == A_A_A_A ) {N
	    a->_aAa->aAaAa();N
	    a->aAa( A_A_A_A );N
	}N
	a {N
	    a->_aAa->aAaAa();N
	    a->aAa( A_A_A_A_A );N
	}N
    }N
    a (a->_a )N
	a->_a->aAa();N
}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa a[0];N
    a  a;N
    AaAa aAa;N
N
    /* a a a a a a a a a. Aa a, aN
       a a a _aAa a a aN
    */ N
    AaAaAaAa( _aAaAa, (AaAa) &_aAa,N
			_aAaAa, AaAa( _aAaAa),N
			A, 0 );N
    a = 0;N
    AaAaAa(a[a],AaAaAa,    AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa,   AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa,  AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa,    _aAa ); a++;N
    AaAaAa( _aAaAa, a, a );N
N
    AaAaAaAa( _aAa, (AaAa) &aAa,N
			_aAaAa, AaAa( _aAaAa),N
			A, 0 );N
    a = 0;N
    AaAaAa(a[a],AaAaAa,    AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa,   AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa,     _aAaAa ); a++;N
    AaAaAa(a[a],AaAaAa,  AaA_A ); a++;N
N
    AaAaAa(a[a],AaAaAa, aAa ); a++;N
    AaAaAa( _aAa, a, a );N
}N
