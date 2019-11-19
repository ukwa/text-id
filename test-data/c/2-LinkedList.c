#a <a.a>N
#a <a.a>N
#a <a.a>N
#a "../a/AaAa.a"N
N
N
a Aa* aAa(AaAa* a, a aAa);N
a a aAa(AaAa* a, a aAa,a* aAa);N
N
/** \a Aa a a AaAa a a a a aN
 *N
 *  \a aN
 *  \a AaAa* Aa (A) a a a a a a a a aN
 *                      a a a a a aN
 */N
/** \a Aa a a AaAa a a a a aN
 *N
 *  \a aN
 *  \a AaAa* Aa (A) a a a a a a a a aN
 *                      a a a a a aN
 */N
AaAa* a_aAaAa(a)N
{N
    AaAa* a= A;N
    a = (AaAa*)a(a(AaAa*));N
    a(a!=A)N
    {N
		a->aAaAa=A;N
		a->a=0;N
		/*N
		a->aAaAa->aAaAa=A;*/N
    }N
    a a;N
}N
N
/** \a Aa a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a Aa (-0) a a a a A a a a a a a a aN
 *N
 */N
a a_a(AaAa* a)N
{N
	a aAa = -0;N
	a(a!=A)N
	{N
N
		aAa=a->a;N
	}N
N
    a aAa;N
}N
N
/** \a  Aa a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a a Aa a a a aN
 * \a Aa* Aa  (A) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        (aAa) Aa a aN
 *N
 */N
a Aa* aAa(AaAa* a, a aAa)N
{N
	a a = a_a(a);N
		a(a!=A)N
		{N
			Aa* aAa=a->aAaAa;N
			a(aAa < 0 || aAa >= a)N
			{N
				a A;N
			}N
N
N
			a(a a = 0 ; a <= aAa ; a++ )N
			{N
				a(aAa->aAaAa != A)N
				{N
					a(a!=aAa)N
					{N
						aAa = aAa->aAaAa;N
					}N
N
				}N
				a(aAa == 0)N
				{N
					aAa = a->aAaAa;N
				}N
			}N
N
			a aAa;N
		}N
		a A;N
}N
N
/** \a  Aa a a a a a a aAa a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a a Aa a a a aN
 * \a Aa* Aa  (A) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        (aAa) Aa a aN
 *N
 */N
Aa* a_aAa(AaAa* a, a aAa)N
{N
N
    a aAa(a, aAa);N
}N
N
N
/** \a Aa a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a a a aN
 * \a aAa a* Aa a a a a a a a a aN
 * \a a Aa  (-0) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        ( 0) Aa a aN
 *N
 */N
a a aAa(AaAa* a, a aAa,a* aAa)N
{N
	a a = a_a(a);N
	a aAa = -0;N
	Aa* aAa;N
	Aa* aAaAa;N
N
		a(a!=A && aAa >= 0 && aAa <= a)N
		{N
			aAa = (Aa*)a(a(Aa*));N
			a->a=a+0;N
			aAa->aAa= aAa;N
N
				a(aAa==0)N
				{N
					aAa->aAaAa=a->aAaAa;N
					a->aAaAa=aAa;N
N
				}N
				aN
				{N
					aAaAa = aAa(a, aAa-0);N
					aAa->aAaAa = aAaAa->aAaAa;N
					aAaAa->aAaAa = aAa;N
					aAa=0;N
				}N
				aAa=0;N
		}N
N
N
    a aAa;N
N
}N
N
/** \a Aa a a a a a a aAa a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a a a aN
 * \a aAa a* Aa a a a a a a a a aN
  * \a a Aa  (-0) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        ( 0) Aa a aN
 *N
 */N
a a_aAa(AaAa* a, a aAa,a* aAa)N
{N
    a aAa(a,aAa,aAa);N
}N
N
N
/** \a  Aa a a a a aN
 * \a aAa AaAa* Aa a a aN
 * \a aAa a* Aa a a a a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        ( 0) Aa a aN
 *N
 */N
a a_a(AaAa* a, a* aAa)N
{N
N
	a a = a_a(a);N
	a aAa = -0;N
	Aa* aAa;N
N
	a(a!=A)N
	{N
		//aAa = (Aa*)a(a(Aa*));//Aa a AaAa a a a a a a a, a a a a a a a aN
		aAa = aAa(a,a, aAa);N
		aAa=0;N
N
	}N
N
    a aAa;N
N
}N
N
/** \a Aa a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a aN
 * \a a* Aa    (A) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                            (aAa) Aa a aN
 *N
 */N
N
a* a_a(AaAa* a, a a)N
{N
	a* aAa = A;N
	a a = a_a(a);N
    Aa* aAa;N
    a(a!=A && a >= 0 && a < a)N
    {N
		aAa = aAa(a,a);N
		aAa=aAa->aAa; //a a a a a, a a a aAa a a a Aa a.N
    }N
    a aAa;N
}N
N
N
/** \a Aa a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a aN
 * \a aAa a* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        ( 0) Aa a aN
 *N
 */N
a a_a(AaAa* a, a a,a* aAa)N
{N
    a aAa = -0;N
    Aa* aAa;N
    a a = a_a(a);N
    a(a!=A && a >= 0 && a <= a)N
    {N
    	aAa = aAa(a,a);N
    	a(aAa!=A)N
    	{N
    		aAa->aAa=aAa; //Aa a a a a, a a a aN
    		aAa=0;N
    	}N
    }N
N
    a aAa;N
}N
N
N
/** \a Aa a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a aN
 * \a a Aa  (-0) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        ( 0) Aa a aN
 *N
 */N
a a_a(AaAa* a,a a)N
{N
	//Aa a a aAaN
	a a = a_a(a);N
	a aAa = -0;N
	Aa* aAa;N
	Aa* aAaAa;N
N
	a(a!=A && a >= 0 && a < a)N
	{N
	a(a==0)N
	{N
		aAa= aAa(a, a);N
		a->aAaAa = aAa->aAaAa;N
		/*a(a_a(a, a)==A)N
		{*/N
			a(aAa);N
		//}N
	}N
N
	aN
	{N
		aAaAa = aAa(a, a);N
		aAa = aAa(a,a-0);N
		aAa->aAaAa = aAaAa->aAaAa; //a a a a a a a a.N
		aAaAa->aAaAa = A;N
		/*a(a_a(a, a)==A)N
		{*/N
			a(aAaAa);N
		//}N
N
	}N
	a->a=a-0;N
	aAa=0;N
	}N
	a aAa;N
N
}N
N
N
/** \a Aa a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        ( 0) Aa a aN
 *N
 */N
a a_a(AaAa* a)N
{N
    a aAa = -0;N
N
    a(a !=A)N
    {N
    	a->aAaAa=A;N
    	a->a=0;N
    	aAa=0;N
    }N
    aN
    {N
    	aAa = -0;N
    }N
N
    a aAa;N
}N
N
N
/** \a Aa a a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        ( 0) Aa a aN
 *N
 */N
a a_aAaAa(AaAa* a)N
{N
    a aAa = -0;N
    a(a!=A)N
    {N
    	a_a(a);N
    	a(a);N
    	aAa=0;N
    }N
    aN
    {N
    	aAa= -0;N
    }N
    a aAa;N
}N
N
/** \a Aa a a a a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a* Aa a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        (a a a) Aa a aN
 *N
 */N
a a_aAa(AaAa* a, a* aAa)N
{N
    a aAa = -0;N
    a a=a_a(a);N
N
    a(a !=A)N
    {N
    	Aa* aAa=a->aAaAa; //Aa a a a a a aAa.N
    	a(a a=0 ; a <a ; a++)N
    	{N
			a(aAa->aAa==aAa)N
			{N
				a a;N
				a;N
			}N
    	aAa = aAa->aAaAa; //Aa a a a a a aAa a a a a a a a a a a aN
    	}N
    }N
    a aAa;N
}N
N
/** \a Aa a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        ( 0) Aa a a A a aN
                        ( 0) Aa a a a aN
 *N
 */N
a a_aAa(AaAa* a)N
{N
    a aAa = -0;N
    a(a!=A)N
    {N
		a(a->aAaAa!=A)N
		{N
			aAa = 0;N
		}N
		a(a->aAaAa==A)N
		{N
			aAa = 0;N
		}N
    }N
    a aAa;N
}N
N
/** \a Aa a a a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a a a a aN
 * \a aAa a* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                        ( 0) Aa a aN
 *N
 */N
a a_a(AaAa* a, a a, a* aAa)N
{N
    a aAa = -0;N
    a (a!=A && a>=0)N
    {N
    	aAa=aAa(a, a, aAa);N
    }N
    a aAa;N
}N
N
N
/** \a Aa a a a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a Aa a a aN
 * \a a* Aa    (A) Aa: a a a a a a a A a (a a a a a a 0 a a a a a a a)N
                            (aAa) Aa a aN
 *N
 */N
a* a_a(AaAa* a,a a)N
{N
    a* aAa = A;N
    a a = a_a(a);N
    a(a!=A && a >= 0 && a < a)N
    {N
    	aAa = a_a(a,a);N
    	a_a(a, a);N
    }N
N
    a aAa;N
}N
N
N
/** \a  Aa a a a a a a a a a a aN
 *N
 * \a a AaAa* Aa a a aN
 * \a aAa a* Aa a a a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                        ( 0) Aa a a aN
                        ( 0) a Aa a a aN
*/N
a a_a(AaAa* a, a* aAa)N
{N
    a aAa = -0;N
N
    a aAa;N
}N
N
/** \a  Aa a a a a a a a (a0)N
            a a a a a (a)N
 *N
 * \a a AaAa* Aa a a aN
 * \a a0 AaAa* Aa a a aN
 * \a a Aa  (-0) Aa: a a a a a a a a a AN
                        ( 0) Aa a a a (a0) a a a a a (a)N
                        ( 0) a a a a (a0) A a a a a a (a)N
*/N
a a_aAa(AaAa* a,AaAa* a0)N
{N
    a aAa = -0;N
N
    a aAa;N
}N
N
/** \a Aa a a a a a a a a aN
 *N
 * \a aAa AaAa* Aa a a aN
 * \a a a Aa a a a a a a a a a a aN
 * \a a a Aa a a a a a a a a a a a (a a)N
 * \a AaAa* Aa  (A) Aa: a a a a a a a AN
                                a (a a a a a a a 0 a a a a a a a)N
                                a (a a a a a a a a a a a a a a a a a)N
                         (a a a a a) Aa aN
*/N
AaAa* a_aAa(AaAa* a,a a,a a)N
{N
    AaAa* aAa = A;N
N
    a aAa;N
}N
N
N
N
/** \a Aa a a a a a a a a a a a a a aN
 *N
 * \a aAa AaAa* Aa a a aN
 * \a AaAa* Aa  (A) Aa: a a a a a a a AN
                                (a a a a a) Aa aN
*/N
AaAa* a_a(AaAa* a)N
{N
    AaAa* aAa = A;N
N
    a aAa;N
}N
N
N
/** \a Aa a a a a a a a a a a a aN
 * \a aAa AaAa* Aa a a aN
 * \a aAa (*aAa) Aa a a a aN
 * \a a a  [0] Aa a a - [0] Aa a aN
 * \a a Aa  (-0) Aa: a a a a a a a AN
                                ( 0) Aa aN
 */N
a a_a(AaAa* a, a (*aAa)(a* ,a*), a a)N
{N
    a aAa =-0;N
N
    a aAa;N
N
}N
N
