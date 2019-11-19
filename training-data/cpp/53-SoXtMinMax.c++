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
|      AaAaAaAaAa a a a a a a a a aN
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
#a "AaAaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
N
/***************************************************************************/N
/* a a a a AaAaAaAa a a a a     */N
/* a-a a.  Aa a a a a a a a     */N
/* a a a a.                                                 */N
/***************************************************************************/N
a a {N
    a a     a;N
    a   aAa;N
    a     a;N
    a     a;N
} AaAaAa, *AaAaAaAa;N
N
a AaAa _aAaAa[] = {N
    { AaAa, AaAa, AaAa, a( a a),N
      AaAa( AaAaAaAa, a ),N
      AaAa, (AaAa) "a" },N
    { AaAaAa, AaAaAa, AaAa, a( a),N
      AaAa( AaAaAaAa, aAa ),N
      AaAa, (AaAa) A_A_A_A },N
    { AaAa, AaAa, AaAa, a( a),N
      AaAa( AaAaAaAa, a ),N
      AaAa, (AaAa) A_A_A_A },N
    { AaAa, AaAa, AaAa, a( a),N
      AaAa( AaAaAaAa, a ),N
      AaAa, (AaAa) A_A_A_A }N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    a aAa,N
    a aAa)N
	: AaAaAaAaAa(N
	    a,N
	    a, N
	    aAaAa,N
	    A)N
{N
    _aAa = aAa;N
    _aAa = aAa;N
    N
    _aAa = A;N
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
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
AaN
AaAaAaAaAa::aAa( Aa a )N
{N
    Aa a[0];N
    a  a;N
    AaAaAa aAa;N
N
    a = 0;N
    AaAaAa(a[a],AaAa,    AaA ); a++;N
    AaAaAa(a[a],AaAa,       _aAa ); a++;N
    AaAaAa(a[a],AaAa,       _aAa ); a++;N
    a = AaAaAaAa(aAaAa(),aAaAaAa,N
					a,a, a);N
N
N
    /* a a a a a a a a a a */N
        /* a aAa a aAa a a a a a a */N
        _aAaAa[0].a_a = (AaAa) (a a) _aAa;N
        _aAaAa[0].a_a = (AaAa) (a a) _aAa;N
        /* a a a */N
        AaAaAaAa( a, (AaAa) &aAa, N
	    	       _aAaAa, AaAa( _aAaAa), N
		       A, 0 );N
    a = 0;N
    AaAaAa(a[a],AaAa,   aAa.a ); a++;N
    AaAaAa(a[a],AaAaAa, aAa.aAa ); a++;N
    AaAaAa(a[a],AaAa,       aAa.a ); a++;N
    AaAaAa(a[a],AaAa,       aAa.a ); a++;N
    AaAaAa( a, a, a );N
N
    /* a a a a */N
N
    AaAaAa( a, AaAaAa,N
		    (AaAaAa) &AaAaAaAaAa::aAa,N
		    (AaAa) a );N
    AaAaAa( a, AaAaAaAa,N
		    (AaAaAa) &AaAaAaAaAa::aAa,N
		    (AaAa) a );N
    a a;N
}N
N
aN
AaAaAaAaAa::aAaAa()N
{N
    a ( a == A)N
	a 0;N
N
    Aa a[0];N
    a a;N
N
    AaAaAa( a[0], AaAaAa, &a );N
    AaAaAa( a, a, 0 );N
N
    a a;N
}N
N
a N
AaAaAaAaAa::aAaAaAa( a aAa )N
{N
    a a;N
    a aAa;N
    a   a;N
N
    /* a a a a a a a a */N
    a = aAaAa();N
    a (a < 0)N
	a = 0;N
    a( a = 0, aAa = aAa; a < a; a++ )N
        aAa /= 0.0;N
    a( aAa );N
}N
N
a N
AaAaAaAaAa::aAaAaAa( a aAa )N
{N
    a a;N
    a aAa;N
    a   a, aAa;N
N
    /* a a a a a a a a */N
    a = aAaAa();N
    a (a < 0)N
	a = 0;N
    a( a = 0, aAa = aAa; a < a; a++ )N
        aAa *= 0.0;N
    aAa = (a) aAa;N
    a( aAa );N
}N
N
aN
AaAaAaAaAa::aAaAa()N
{N
    a (a == A)N
	a 0.0;N
N
    Aa a[0];N
    a   aAaAa;N
N
    /* a aAaAa */N
    AaAaAa( a[0], AaAa, &aAaAa );N
    AaAaAa( a, a, 0 );N
N
    a ( aAaAaAa( aAaAa ) );N
}N
N
aN
AaAaAaAaAa::aAaAa()N
{N
    a (a == A)N
	a 0.0;N
N
    Aa a[0];N
    a   aAaAa;N
N
    /* a aAaAa */N
    AaAaAa( a[0], AaAa, &aAaAa );N
    AaAaAa( a, a, 0 );N
N
    a ( aAaAaAa( aAaAa ) );N
}N
N
aN
AaAaAaAaAa::aAaAa()N
{N
    a (a == A)N
	a 0.0;N
N
    Aa a[0];N
    a   aAaAa;N
N
    /* a aAaAa */N
    AaAaAa( a[0], AaAa, &aAaAa );N
    AaAaAa( a, a, 0 );N
N
    a ( aAaAaAa( aAaAa ) );N
}N
N
aN
AaAaAaAaAa::aAaAa( a aAa )N
{N
    a (a == A)N
	a;N
N
    a aAaAa;N
N
    aAaAa = aAaAaAa( aAa );N
    AaAaAaAa( a, aAaAa );N
}N
N
aN
AaAaAaAaAa::aAaAa( a aAa )N
{N
    a (a == A)N
	a;N
N
    Aa a[0];N
    a aAaAa;N
N
    aAaAa = aAaAaAa( aAa );N
    AaAaAa( a[0], AaAa, aAaAa );N
    AaAaAa( a, a, 0 );N
}N
N
aN
AaAaAaAaAa::aAaAa( a aAa )N
{N
    a (a == A)N
	a;N
N
    Aa a[0];N
    a aAaAa;N
N
    aAaAa = aAaAaAa( aAa );N
    AaAaAa( a[0], AaAa, aAaAa );N
    AaAaAa( a, a, 0 );N
}N
N
aN
AaAaAaAaAa::aAa( Aa, a *a_a, a * )N
{N
    a        aAa;N
    AaAaAaAaAa      *a    = (AaAaAaAaAa *) a_a;N
N
    /* Aa a a a a a */N
    aAa = a->aAaAa();N
N
    // Aa a a a a AaAa a a a...N
    a ( a->_aAa ) {N
	/* Aa a a a a AaAa */N
	a->_aAa->aAaAa( aAa );N
    }N
N
    // Aa a a a a AaAaAa a a a...N
    a ( a->_aAa )N
	a->_aAa->aAaAaAa(); // a a a aN
}N
