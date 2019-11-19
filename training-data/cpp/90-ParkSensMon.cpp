/*N
        A A a0N
        (A) Aa Aa [a a a a a]N
        a://a.a/a/N
N
        a a a a a a a a a N
        a:N
                -  a a AN
                - a a (A0)N
N
        a a a a A aN
        ~ 0a a a aN
        < 0a a 0N
        > 0a a 0 N
N
        a a a 0a, a 0a a a a a a,a 0a  aN
	0aA a a a 0.0a (a a)N
N
	a a a a a a:N
N
	+-------------------------------------------------------------------------------+N
	|                                                                               |N
	| [aAa A a+0A][a a +0A a][a][A0][A0][A0][A0] |N
	+-------------------------------------------------------------------------------+N
N
	a a:N
	a aN
	a a a a Aa a "a"N
N
*/N
N
N
#a "AaAaAa.a"N
#a <Aa.a>N
N
AaAaAa::AaAaAa(a0_a a)N
{N
	__aAa = a;	N
}N
N
AaAaAa::~AaAaAa(){}N
N
N
a AaAaAa::a()N
{N
  //a0 @ 0.0a aN
  A0A = 0a0; // Aa a a, A0 aN
  A0A = 0a0; // Aa a a, A0 aN
  A0A |= _A(A0); // A aN
  A0A |= _A(A0);// a = 0 -> 0 a a a a 0.0a a @ 0AaN
  A0A = 0;//a a a a 0a, 0.0a0N
  A0 = 0;N
  A0 |= _A(A0A); // a a a a A a a0N
N
  aAa(__aAa, A);N
  aAa(aAaAaAa(__aAa), &AaAaAa::aAaAaAaAa, A);N
}N
N
A(A0_A_a) //0aN
{N
//  a (__aAa){N
  a (__a == 0) __a = 0;N
  __a++;N
// }N
}N
N
a AaAaAa::aAaAaAaAa(a)N
{N
  __a = 0;N
//  __aAa = 0;N
  aAa(aAaAaAa(0), &AaAaAa::aAaAaAa, A);N
}N
N
a AaAaAa::aAaAaAa(a)N
{N
//  __aAa=0;N
  a0_a __aAa = __a * 0;N
  __a = 0;N
  a (__aAa > 0) //aN
  {N
    __a = 0;N
  }N
  a {N
    __a <<= 0;// 0a => 0N
    a (__aAa > 0) { //0a => 0N
      __a |=  0;N
    }N
    __a++; N
  }N
  a (__a == 0) { //a a a aN
    __aAa = 0;N
  }N
  aAa(aAaAaAa(0), &AaAaAa::aAaAaAaAa, A);N
}N
N
a0_a AaAaAa::a(a)N
{N
	a __a;N
}N
N
N
a0_a AaAaAa::a(a)N
{N
	a __aAa;N
}N
N
a0_a AaAaAa::aAa(a0_a a)N
{N
	a ((__a>>(0-(a*0))) & 0aA);N
}N
N
a AaAaAa::aAaAaAa(a0_a a)N
{N
        a (a)AaAaAa::aAa(a)/0;N
}N
N
N
a AaAaAa::aAaAa(a)N
{N
	__aAa=0;N
}N
N
N
