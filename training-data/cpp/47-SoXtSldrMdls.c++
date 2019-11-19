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
|      Aa a a a a a a a a aN
|     a a.N
|N
|   Aa(a)          : Aa AaN
|N
______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
_______________________________________________________________________N
*/N
N
#a <a.a>N
#a "AaAaAaAa.a"N
#a "AaAaAaAa.a"N
#a <A0/AaAa.a>N
#a <Aa/Aa.a>N
#a <Aa/Aa/AaAaAa.a>N
N
a AaAa _aAa[] = {N
    { AaAaAa, AaAaAa, AaAaAa, a( a * ),N
      0,N
      AaAa, (AaAa) A }N
};N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_A,N
   A_A_A_A0_A, A_A_A_A0_A,N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    N
N
N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a, "Aa");N
    AaAaAaAa::aAa(a);N
    //N
    AaAaAa a(a);N
    a *a;N
    a (a.aAa( "aAaAa",  "AaAaAa", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    //N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_A,N
   A_A_A_A0_A, A_A_A_A0_A,N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a, "Aa");N
    AaAaAaAa::aAa(a);N
    //N
    AaAaAa a(a);N
    a *a;N
    a (a.aAa( "aAaAa",  "AaAaAa", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    //N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
///////////////////N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_A,N
   A_A_A_A0_A, A_A_A_A0_A,N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a, "Aa");N
    AaAaAaAa::aAa(a);N
    //N
    AaAaAa a(a);N
    a *a;N
    a (a.aAa( "aAaAa",  "AaAaAa", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    //N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
///////////////////N
///////////////////N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A, N
   A_A_A_A_A0_A,N
   A_A_A_A_A0_A, N
   A_A_A_A_A0_A,N
};N
N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a, "AaAa");N
    AaAaAaAa::aAa(a);N
    //N
    AaAaAa a(a);N
    a *a;N
    a (a.aAa( "aAaAaAa",  "AaAaAaAa", a ))N
	aAaAaAa[0] = a;	N
    a (a.aAa( "aAaAa0",  "AaAaAa0", a ))N
	aAaAaAa[0] = a;	N
    a (a.aAa( "aAaAa0",  "AaAaAa0", a ))N
	aAaAaAa[0] = a;	N
    a (a.aAa( "aAaAa0",  "AaAaAa0", a ))N
	aAaAaAa[0] = a;	N
    //N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
///////////////////N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_A,N
   A_A_A_A0_A, A_A_A_A0_A,N
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a, "Aa");N
    AaAaAaAa::aAa(a);N
    //N
    AaAaAa a(a);N
    a *a;N
    a (a.aAa( "aAaAa",  "AaAaAa", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    a (a.aAa( "aAa0",  "AaAa0", a ))N
	aAaAa[0] = a;	N
    //N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,         A_A_A_A_A0_A,N
   A_A_A_A_A0_A, A_A_A_A_A0_A,N
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,         A_A_A_A_A0_A,N
   A_A_A_A_A0_A, A_A_A_A_A0_A,N
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,       A_A_A_A_A0_A,N
  A_A_A_A_A0_A,A_A_A_A_A0_A,N
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,       A_A_A_A_A0_A,N
  A_A_A_A_A0_A,A_A_A_A_A0_A,N
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_AN
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
a a *aAaAa[] = {N
   A_A_A_A,         A_A_A_A0_AN
};N
N
AaAaAaAaAa::AaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAa::~AaAaAaAaAa() {}N
N
aN
AaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,     A_A_A_A_A0_AN
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
N
a a *aAaAaAa[] = {N
   A_A_A_A_A,         A_A_A_A_A0_A,N
   A_A_A_A_A0_A, A_A_A_A_A0_A,N
};N
N
AaAaAaAaAaAa::AaAaAaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa)N
	: AaAaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A)		// a a a a a a a aN
{N
    // A, a a a a a.N
    Aa a = aAa(aAaAa());				N
    _aAaAa = a AaAaAaAaAaAa(a);N
    AaAaAaAa::aAa(a);N
    aAa();N
    aAaAa(a);N
}N
N
AaAaAaAaAaAa::~AaAaAaAaAaAa() {}N
N
aN
AaAaAaAaAaAa::aAa()N
{N
    Aa    a[0];N
    AaAa aAa;N
    Aa aAa;N
N
    /* a a a a a a a a */N
    _aAa[0].a_a = (AaAa) aAaAaAa[0];N
    aAa = _aAaAa->aAaAaAa();N
    AaAaAaAa( aAa, (AaAa) &aAa,N
		  _aAa, AaAa( _aAa ), A, 0); N
    AaAaAa( a[0], AaAaAa, aAa ); N
    AaAaAa( aAa,  a, 0 );N
N
    _aAaAa->aAa( &(aAaAaAa[0]) );N
}N
