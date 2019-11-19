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
|      A a a a a a a a a a a a aN
|      a a a a a a a.N
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
#a <a.a>N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <Aa/Aa.a>N
#a <Aa/AaA.a>N
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
AaAaAaAa::~AaAaAaAa()N
{N
    a (_aAaAa != A)N
	a _aAaAa;N
    a (_aAaAa != A)N
	a _aAaAa;N
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
    _aAaAa   = A;N
N
    _a = A;N
    _aAaAa    = A;N
N
    _aAaAa   = A;N
N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
// Aa a a a a a a a,N
// a a a _aAaAa, a N
// a aAa.N
AaN
AaAaAaAa::aAa(Aa a)N
{N
    a = AaAaAaAa(aAaAa(),N
		    aAaAaAa, a, A, 0);N
    a a;N
}N
N
AaN
AaAaAaAa::aAa( Aa )N
{	N
    _aAaAa = a  AaAaAaAaAa( a );N
    _aAaAa->aAaAa( a);N
N
    a ( AaAaAaAaAa( _aAaAa->aAaAaAa() ))N
	aAa();N
    aN
	aAa();N
N
    a ( _aAaAa->aAa() == A_A_A_A )N
	aAaAa();N
    a a ( _aAaAa->aAa() == A_A_A_A )N
	aAaAa();N
    a a ( _aAaAa->aAa() == A_A_A_A_A)N
	aAaAa();N
    aN
	aAaAa();N
N
    a a;N
}N
N
aN
AaAaAaAa::aAaAaAaAaAa()N
{N
    Aa a[0];N
    a  a;N
N
    a aA, aA, aA, aA, aAa;N
N
    _aAaAa->aAaAa( aA, aA );N
    _aAaAa->aAaAa( aA, aA );N
N
    aAa = (a) (0.0 * ((a) aA / (a) (aA + aA)));N
N
    a = 0;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, aAa ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(_aAaAa->aAaAaAa(), a, a);N
N
    a = 0;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, aAa ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(_aAaAa->aAa(), a, a);N
}N
N
aN
AaAaAaAa::aAaAaAa()N
{N
    Aa a[0];N
    a  a;N
N
    a = 0;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(a[a],AaAaAa, AaA_A ); a++;N
    AaAaAa(_aAaAa->aAaAaAa(), a, a);N
}N
N
aN
AaAaAaAa::aAa()N
{N
    _aAaAa = A;N
    aAaAaAaAaAa();N
    _aAaAa->a();N
    _aAaAa->aAa();N
}N
N
aN
AaAaAaAa::aAa()N
{N
    _aAaAa = A;N
    aAaAaAa();N
    _aAaAa->a();N
    _aAaAa->aAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    _aAaAa->aAaAa();N
    a ( _aAaAa )N
	aAaAaAaAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    _aAaAa->aAaAa();N
    a ( _aAaAa )N
	aAaAaAaAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    _aAaAa->aAaAa();N
    a ( _aAaAa )N
	aAaAaAaAaAa();N
}N
N
aN
AaAaAaAa::aAaAa()N
{N
    _aAaAa->aAaAa();N
    a ( _aAaAa )N
	aAaAaAaAaAa();N
}N
N
a N
AaAaAaAa::aAa( AaAa *aAa )N
{N
    a (aAa)            // a a a a a'a a aN
	aAa->a();N
N
    a (_aAa)          // a a a aN
	_aAa->a();N
N
    _aAa = aAa;N
    a( a a = 0; a < _aAaAa; a++ )N
	_aAaAa[a]->aAa( aAa );N
N
    _aAaAa->aAa( aAa );N
}N
N
aN
AaAaAaAa::aAaAa( a &a, a &a )N
{N
    a aA, aA;N
N
    _aAa = 0;N
    _aAa = 0;N
N
    _aAaAa->aAaAa( aA, aA );N
    _aAa += aA;N
    _aAa += aA;N
N
    a ( _aAaAa ) {N
	_aAaAa->aAaAa( aA, aA );N
	_aAa += aA;N
	_aAa += aA;N
    }N
N
    a = _aAa;N
    a = _aAa;N
}N
N
aN
AaAaAaAa::aAa( AaAaAaAa *aAa )N
{N
    _a = aAa;N
    _aAaAa->aAa( aAa );N
}N
