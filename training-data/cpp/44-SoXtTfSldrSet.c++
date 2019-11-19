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
|      Aa a AaAaAaAa a a a a aN
|      AaAaAaAaAaN
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
//--------------------------------Aa------------------------------N
#a <a.a>N
#a "AaAaAaAa.a"N
#a <Aa/Aa/AaAaAaAaAa.a>N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
N
a AaAa _aAaAa[] = {N
    { AaAaAa, AaAaAa, AaAa, a( a a),N
      0,  AaAa, (AaAa) A_A_A_A_A }N
};N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa,N
    AaAa *aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    aAaAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a, a aAa = AN
    aAa(A);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaA a - a a a a a a a a aN
//N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    AaAa *aAaAa,N
    AaAa aAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
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
///////////////////////////////////////////////////////////////////////N
//N
// Aa:N
//	Aa a a AaAaAaAaAa.  Aa a 0 a aN
//      a a a a a. Aa a a a a aN
//      a a a, a.N
//      Aa a a a a a.N
// Aa: aN
aN
AaAaAaAaAa::aAa(AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    // Aa a a a a a a Aa a.N
    _aAaAa = 0;N
    _aAaAa = a ( AaAaAaAaAa * [ _aAaAa ] );N
N
    _aAaAa[0] = A;N
    _aAaAa[0] = A;N
    _aAaAa[0] = A;N
    _aAaAa[0] = A;N
    _aAaAa[0] = A;N
N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
AaN
AaAaAaAaAa::aAa(Aa a)N
{N
    Aa  a[0];N
    Aa aAaAa;N
    Aa aAa;N
N
    _aAaAa = a;N
N
    a = AaAaAaAa(aAaAa(),aAaAaAa, a,A, 0);N
N
    _aAaAa[0] = a AaAaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAaAaAa(a);N
    _aAaAa[0] = a AaAaAaAaAa(a);N
N
    a (a a = 0; a < _aAaAa; a++ ) {N
	(( AaAaAaAa *) _aAaAa[a])->aAa( a );N
	aAa = _aAaAa[a]->aAa();N
	AaAaAaAa( aAa, (AaAa) &aAaAa,N
		_aAaAa, AaAa( _aAaAa ),A, 0);        AaAaAa( a[0], AaAaAa, aAaAa );N
	AaAaAa( aAa, a, 0 );N
    }N
N
    aAa();N
N
    a a;N
}N
N
//N
// a a a a aN
//N
a a *N
AaAaAaAaAa::aAaAaAa() aN
{ a "AaAaAaAaAa"; }N
N
a a *N
AaAaAaAaAa::aAaAa() aN
{ a "Aa Aa"; }N
N
a a *N
AaAaAaAaAa::aAaAaAa() aN
{ a "Aa Aa"; }N
N
