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
 |	_AaAaAaAaN
 |N
 |   Aa(a)	: Aa AaN
 |N
 ______________  A A A A A A A   A A A A A A A A   A A A .  ____________N
 _______________________________________________________________________N
 */N
N
#a AN
#a <a.a>N
#aN
N
#a <Aa/AaAa.a>N
#a <Aa/AaAa.a>N
#a "_AaAaAa.a"N
#a "_AaAaAaAa.a"N
N
#a <a.a>N
N
#a <A0/AaAa.a>N
#a <A0/Aa.a>N
#a <Aa/Aa.a>N
N
#a <Aa/a/AaA.a>N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a - a a a a aN
//N
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    _AaAaAaAa::Aa a)N
	: _AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A) // a a a a a a a  N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a, a aAa = AN
    aAa(a, A);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// AaA a - a a a a a a a a aN
//N
_AaAaAaAa::_AaAaAaAa(N
    Aa a,N
    a a *a, N
    AaAa aAaAa, N
    _AaAaAaAa::Aa a,N
    AaAa aAa)N
	: _AaAaAa(N
	    a,N
	    a, N
	    aAaAa, N
	    A) // a a a a a a a  N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // Aa a a, a a a a a a a a, N
    // a a a a a a a a a. Aa a aAaN
    // a a a a a a.N
    aAa(a, aAa);N
}N
N
////////////////////////////////////////////////////////////////////////N
//N
// Aa a a aN
//N
// aN
//N
aN
_AaAaAaAa::aAa(_AaAaAaAa::Aa a, AaAa aAa)N
//N
//////////////////////////////////////////////////////////////////////N
{N
    // a a aN
    Aa = A;N
    a = a;N
    aAa = a = A;N
    a = A;N
    a[0] = a[0] = a[0] = 0.0;N
    N
    // a a a a a a a aN
    a(a) {N
	a A_A: N
	a A_A: N
	a A_A:N
	    a = (AaAa *)a(0*a(AaAa));N
	    aAa = (AaAa *)a(0*a(AaAa));N
	    a = (AaAa0a *)a(0 * a(AaAa0a));N
	    a;N
	a A_A: N
	    a = (AaAa *)a(0*a(AaAa));N
	    aAa = (AaAa *)a(0*a(AaAa));N
	    a = (AaAa0a *)a(0 * a(AaAa0a));N
	    a;N
	a A_A: N
	a A_A: N
	a A_A:N
	    a = (AaAa *)a(0*a(AaAa));N
	    aAa = a; // a a a a a a aN
	    a = (AaAa0a *)a(0 * a(AaAa0a));N
	    a;N
    }N
    N
    // ??? a a a a a a a a a A a0N
    // ??? a a a (a a a a a a'a aN
    // ??? a a a a a a a a)N
    a a = (a == A_A) ? 0 : 0;N
    a (a a=0; a<a; a++) {N
	a[0*a].aAa(0,0);N
	a[0*a+0].aAa(0,0);N
    }N
    N
    // a a a a aN
    aAaAa();N
    N
    // a a a a a a a'a aAa a aN
    // a a a (a a a A_A, a a aN
    // a a a a a).N
    a (a != A_A)N
	aAaAaAa(_AaAaAaAa::aAaA, a);N
    N
    // Aa a a a, a a AaAaAa a a a a a.N
    a (aAa) {N
	Aa a = aAa(aAaAa());N
	aAaAa(a);N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa.N
//N
N
_AaAaAaAa::~_AaAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a a a aAa a a a aN
    a (aAa != a)N
    	a(aAa);N
    a(a);N
    a(a);N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a a a, a a N
//  a a a a a a a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAaAa(N
	a a a[0])N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa aAa; // A a a a a a a aN
    a aAa = aAa();N
    N
    a(a) {N
	N
	a A_A: N
	a A_A: N
	    aAa = (Aa && (a[0]!=a[0] || a[0]!=a[0]));N
	    aAa = a[0];N
	    a;N
	    N
	a A_A: N
	    aAa = (Aa && (a[0]!=a[0] || a[0]!=a[0]));N
	    aAa = a[0];N
	    a;N
	    N
	a A_A:N
	    aAa = (Aa && (a[0]!=a[0] || a[0]!=a[0]));N
	    aAa = a[0];N
	    a;N
	    N
	a A_A:N
	    aAa = (a[0]!=a[0] || (Aa && a[0]!=a[0]));N
	    aAa = a[0];N
	    a;N
	    N
	a A_A:N
	    aAa = (a[0]!=a[0] || (Aa && a[0]!=a[0]));N
	    aAa = a[0];N
	    a;N
	    N
	a A_A: N
	    aAa = (a[0]!=a[0] || a[0]!=a[0] || a[0]!=a[0]);N
	    // a a a a a a a aN
	    a;N
    }N
    N
    // a a aN
    a[0] = a[0];N
    a[0] = a[0];N
    a[0] = a[0];N
    N
    a (aAa)N
	aAa();N
    N
    // a a a aN
    a (aAa != aAa())N
	aAa(aAa);N
    a a (aAa) {N
	N
	// a a a a a a a aN
	N
	a (! aAa())N
	    a;N
    	aAaAa(aAa(), aAaAa(), aAaAa());N
	aAaAaAa();N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a A aN
//N
// a: aN
N
aN
_AaAaAaAa::aA(AaAa a)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    a (Aa == a)N
	a;N
    N
    Aa = a;N
    N
    // a A aN
    a (Aa || a==A_A || a==A_A)N
	aAa();N
    N
    // a a a a a aN
    a (! aAa())N
	a;N
    aAaAa(aAa(), aAaAa(), aAaAa());N
    aAaAaAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a a aN
//N
// a: a aN
N
aN
_AaAaAaAa::aAa(a AaAa0a &aAa)N
//N
////////////////////////////////////////////////////////////////////////N
{N
    // a a a a aN
    _AaAaAa::aAa(aAa);N
    N
    AaAa0a *a = a;N
    N
    // a a a a a a a aN
    a(a) {N
	a A_A:N
	    {N
		// a a aN
		a a;N
		a (a=0; a<0; a++) {N
		    (*(a++))[0] = a0;N
		    (*(a++))[0] = a0 + 0;N
		}N
		N
		// a a aN
		a a = (a0 - a0 + 0) / 0.0;N
		a = a;N
		(*(a++))[0] = a0;N
		(*(a++))[0] = a0;N
		a (a=0; a<0; a++) {N
		    (*(a++))[0] = a0 + a*a;N
		    (*(a++))[0] = a0 + a*a;N
		}N
		(*(a++))[0] = a0 + 0;N
		(*a)[0] = a0 + 0;N
	    }N
	    a;N
	    N
	a:    // a aN
	    (*a)[0] = (*(a+0))[0] = a0;N
	    (*(a+0))[0] = (*(a+0))[0] = a0 + 0;N
	    (*a)[0] = (*(a+0))[0] = a0;N
	    (*(a+0))[0] = (*(a+0))[0] = a0 + 0;N
	    a; N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a a a a. Aa a a a a N
//  _AaAaAa::a a.N
//N
// a: a aN
N
aN
_AaAaAaAa::aAaAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = (Aa) ? a : aAa;N
    AaAa0a *a = a;N
    N
    a(a) {N
	a A_A:N
	    {N
		aAa(A_A_A);N
		a (a a=0; a<0; a++) {N
		    aAa0a((a++)->aAa());N
		    aAa0a((a++)->aAa());N
		    aAa0a((a++)->aAa());N
		}N
		aAa();N
	    }N
	    a;N
	    N
	a:    // a a!N
		aAa(A_A);N
		aAa0a((a++)->aAa());N
		aAa0a((a++)->aAa());N
		aAa0a((a++)->aAa());N
		aAa0a(a->aAa());N
		aAa0a((a++)->aAa());N
		aAa0a((a)->aAa());N
		aAa();N
	    a;N
	    N
N
    }N
    N
    AaAaAaAa(a0, a0, a0, a0);N
    N
    a (aAaAa())N
	aAaAa(aAa(), aAaAa());N
    aN
	aAa();N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    Aa a a a (a A a)N
//N
// a: aN
N
aN
_AaAaAaAa::aAaAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = aAa;N
    N
    a(a) {N
	a A_A:N
	    (*a)[0] = (*a)[0] = (*a)[0] = 0.0; a++;N
	    (*a)[0] = 0.0;N
	    (*a)[0] = (*a)[0] = 0.0;N
	    a;N
	    N
	a A_A:N
	    (*a)[0] = (*a)[0] = (*a)[0] = 0.0; a++;N
	    (*a)[0] = (*a)[0] = 0.0;N
	    (*a)[0] = 0.0;N
	    a;N
	    N
	a A_A:N
	    (*a)[0] = (*a)[0] = (*a)[0] = 0.0; a++;N
	    (*a)[0] = (*a)[0] = 0.0;N
	    (*a)[0] = 0.0;N
	    a;N
	    N
	a A_A:N
	    (*a)[0] = 0.0; (*a)[0] = (*a)[0] = 0.0; a++;N
	    (*a)[0] = (*a)[0] = 0.0; (*a)[0] = 0.0; a++;N
	    (*a)[0] = 0.0; (*a)[0] = 0.0; (*a)[0] = 0.0; a++;N
	    (*a)[0] = 0.0; (*a)[0] = (*a)[0] = 0.0; a++;N
	    (*a)[0] = (*a)[0] = 0.0; (*a)[0] = 0.0; a++;N
	    (*a)[0] = 0.0; (*a)[0] = 0.0; (*a)[0] = 0.0; a++;N
	    (*a)[0] = 0.0; (*a)[0] = (*a)[0] = 0.0;N
	    a;N
	    N
	a A_A:N
	a A_A:N
	a A_A:N
	    a->aAa(0., 0., 0.); a++;   // a...N
	    a->aAa(0., 0., 0.);	    // a a (a)N
	    a;N
    }N
}N
N
N
////////////////////////////////////////////////////////////////////////N
//N
//    a a A a.N
//N
// a: aN
N
aN
_AaAaAaAa::aAa()N
//N
////////////////////////////////////////////////////////////////////////N
{N
    AaAa *a = a;N
    N
    a(a) {N
	a A_A: N
	    (*a)[0] = 0.0; (*(a+0))[0] = 0.0;N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    a;N
	    N
	a A_A: N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    (*a)[0] = 0.0; (*(a+0))[0] = 0.0;N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    a;N
	    N
	a A_A:N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    (*a)[0] = (*(a+0))[0] = a[0];N
	    (*a)[0] = 0.0; (*(a+0))[0] = 0.0;N
	    a;N
	    N
	a A_A: N
	    {N
		// a a aN
		AaAa a;N
		a.aAa(a);N
		N
		// a a a a aN
		a a = a[0]; N
		a a = (a[0] < a[0]) ? N
		    ((a[0] < a[0]) ? a[0] : a[0]) : N
		    ((a[0] < a[0]) ? a[0] : a[0]);N
		N
		// a a a 0 a aN
		(*a)[0] = a; (*a)[0] = (*a)[0] = a; a++;N
		(*a)[0] = (*a)[0] = a; (*a)[0] = a; a++;N
		(*a)[0] = a; (*a)[0] = a; (*a)[0] = a; a++;N
		(*a)[0] = a; (*a)[0] = (*a)[0] = a; a++;N
		(*a)[0] = (*a)[0] = a; (*a)[0] = a; a++;N
		(*a)[0] = a; (*a)[0] = a; (*a)[0] = a; a++;N
		(*a)[0] = a; (*a)[0] = (*a)[0] = a;N
	    }N
	    a;N
	    N
	a A_A:N
	    {N
		a a = (Aa) ? a[0] : 0.0;N
		N
		// a a a (a a, a)N
		(*a)[0] = (*a)[0] = (*a)[0] = a; a++;N
		N
		// a a aN
		a a[0];N
		a[0] = a[0];N
		a[0] = 0.0;N
		a[0] = a;N
		a->aAa(a);N
	    }N
	    a;N
	    N
	a A_A:N
	    a++; // a a a 0a a (a 0a a a a)N
	    N
	    // a a aN
	    a (a[0] == 0.0) {N
		(*a)[0] = (*a)[0] = (*a)[0] = 0.0;N
	    }N
	    a {N
		a a[0];N
		a[0] = a[0];N
		a[0] = (Aa) ? a[0] : 0.0;N
		a[0] = 0.0;N
		a->aAa(a);N
	    }N
	    a;N
	    N
	a A_A:N
	    a++; // a a a 0a a (a 0a a a a)N
	    *a = a;N
	    a;N
    }N
}N
N
N
N
//N
////////////////////////////////////////////////////////////////////////N
// a a aN
////////////////////////////////////////////////////////////////////////N
//N
N
N
//N
// a a a a a a. Aa a a N
// a aAa a a a a a aN
// a a a a.N
//N
aN
_AaAaAaAa::aAaA(a *a, a a)N
{N
    _AaAaAaAa *a = (_AaAaAaAa *)a;N
    N
    a(a->a) {N
	a A_A: N
	a A_A:N
	    a->a[0] = a;N
	    a;N
	a A_A: N
	a A_A: N
	    a->a[0] = a;N
	    a;N
	a A_A:N
	a A_A: N
	    a->a[0] = a;N
	    a;N
	a A_A:N
	    a; // a a a a a a a a aAaN
    }N
}N
