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
|      AaAaAaAa a a a a a a a a aN
|      a a a (a a a 'a') a.N
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
N
N
#a <a.a>N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <A0/AaAa.a>N
#a <Aa/AaA.a>N
N
/***************************************************************************/N
/* a a a a AaAaAaAa a a a a     */N
/* a-a a.  Aa a a a a a a a     */N
/* a a a a.                                                 */N
/***************************************************************************/N
a AaAa _aAaAa[] = {N
    { AaAaAa, AaAaAa, AaAaAa, a( a *),N
      0,N
      AaAa, (AaAa) A_A_A_A_A }  N
};N
N
AaAaAaAa::AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)N
{N
    _aAa = A;N
N
    _aAa  = 0;N
    _aAa = 0;N
N
    // Aa a a!N
    Aa a = aAa(aAaAa());N
    aAaAa(a);N
}N
N
AaAaAaAa::~AaAaAaAa() {}N
N
AaN
AaAaAaAa::aAa( Aa a )N
{N
    Aa a[0];N
    AaAa aAa;N
N
    a = AaAaAaAa(aAaAa(),aAaAaAaAa,N
					a,A, 0);N
N
    /* a a a a */N
    AaAaAa( a, AaAaAa,N
		    (AaAaAa) &AaAaAaAa::aAa,N
		    (AaAa) a );N
N
    /* a a a a a a */N
    AaAaAaAa( a, (AaAa) &aAa, N
	    	       _aAaAa, AaAa( _aAaAa), N
		       A, 0 );N
    AaAaAa(a[0],AaAaAa,      aAa );N
    AaAaAa( a, a, 0 );N
    a a;N
}N
N
aN
AaAaAaAa::aAa( Aa, a *a_a, a * )N
{N
    a      aAa;N
    AaAaAaAaAa     *aAa;N
    AaAaAaAa  *a = (AaAaAaAa *) a_a;N
N
    a (a->_aAa)N
	aAa = a->_aAa->aAa();N
N
    /* Aa a a a a a */N
    a (aAa)N
        aAa = aAa->aAaAa();N
N
    /* Aa a a a a a A a a a AaAa */N
    a (a->_aAa)N
        a->_aAa->aAaAa( aAa );N
}N
