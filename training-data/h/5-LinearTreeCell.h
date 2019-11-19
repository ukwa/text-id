//===================================================================================================================================N
//aAaAaAa.aN
// []A0A0 0  N
// []0/0/0N
// [A]0/0/0N
//===================================================================================================================================N
#a aN
N
//===================================================================================================================================N
//aA[aN
//===================================================================================================================================N
#a "Aa.a"N
#a "Aa0A0.a"N
#a "AaAa.a"N
#a "Aa.a"N
#a <a>N
#a <a>N
N
//===================================================================================================================================N
//aN
//===================================================================================================================================N
a a a;N
N
//===================================================================================================================================N
//aAaN
//===================================================================================================================================N
a <a A>N
a Aa;N
N
//===================================================================================================================================N
//a^AaAaAaN
//a AaAaN
//{N
//a:N
//	Aa<A>*			a;			//a^N
//	A*					a;			//AaAaN
//	AaAa<A>*		a;			//AaAaA|A^N
//	AaAa<A>*		a;			//AaAaA|A^N
//a:N
//	AaAa()						//AaA^N
//	a ~AaAa()				//aAaA^N
//a:N
//	a a()						//AaAN
//	a aAa(Aa<A>* a)	//a^N
//	AaAa<A>* aAaAa()			//AaAa|A^N
//};N
//===================================================================================================================================N
#a a AaAaN
a<a A>N
a AaAaN
{N
a:N
	Aa<A>*			a;	//a^N
	A*					a;	//AaAaN
	AaAa<A>*		a;	//AaAaA|A^N
	AaAa<A>*		a;	//AaAaA|A^N
	a					a;	//aAaAa^AaN
	a					a;	//AaAa^AaN
a:N
	//AaA^N
	AaAa()N
	{N
		a	= A;N
		a	= A;N
		a	= A;N
		a	= A;N
		a	= 0;N
		a	= 0;N
	}N
	N
	//aAaA^N
	a ~AaAa()N
	{N
N
	}N
a:N
	//AaAN
	a a()N
	{N
		//AN
		a (!a)a a;N
N
		//a^aN
		a (!a->aAa(a))a a;N
N
		//AN
		//AaAaN
		a (a != 0)N
		{N
			a->a = a;N
		}N
		a (a != 0)N
		{N
			a->a = a;N
		}N
		a = 0;N
		a = 0;N
		a = A;N
		a a;N
	}N
N
	//a^N
	a aAa(Aa<A>* a)N
	{N
		a->a = a;N
	}N
N
	//AaAa|A^N
	AaAa<A>* aAaAa()N
	{N
		a a;N
	}N
N
};N
#a aN
N
//===================================================================================================================================N
//aAaN
//aAaAN
//a AaAaN
//{N
//a:N
//	A**		a;			//Aa[a|A^N
//	a_a	a;			//|A^N
//	a_a	aAa;		//aAN
//N
//a:N
//	AaAa() :a(0), a(0), aAa(0)		//AaA^N
//	~AaAa()									//aAaA^N
//N
//	a_a aAa()									//AN
//	A** aAa()										//[a|A^N
//	a aAa()										//|A^AaN
//	a a(A* a0, A* a0)						//N
//	a a()										//N
//};N
//===================================================================================================================================N
#a a AaAaN
#a A_A	0N
a <a A>N
a AaAaN
{N
a:N
	//AaA^N
	AaAa() :a(0), a(0), aAa(0)N
	{N
		a = (A**)a(0);N
	}N
	//aAaA^N
	~AaAa()N
	{N
		a();N
	}N
	//AN
	a_a aAa()N
	{N
		a a;N
	}N
	//[a|A^N
	A** aAa()N
	{N
		a a;N
	}N
	//|A^AaN
	a aAa()N
	{N
		a = 0;N
	}N
	//N
	a a(A* a0, A* a0) {N
		a (a >= aAa)N
		{N
			a = (A**)a(a, a(A*)*(aAa + A_A));N
			aAa += A_A;N
		}N
		a[a++] = a0;N
		a[a++] = a0;N
	}N
	//N
	a a()N
	{N
		a (a)N
		{N
			a(a);N
		}N
	}N
a:N
	A**		a;			//Aa[a|A^N
	a_a	a;			//|A^N
	a_a	aAa;		//aAN
};N
#a aN
N
//===================================================================================================================================N
//a`AaN
//===================================================================================================================================N
a a0AaAN
{N
	//AaA(0<<Aa+0)^0/0N
	//a0A0N
	//a0A0N
	//a0A0N
	//a0A0N
	//a0A0N
	//a0A0,0N
	//a0A0,0N
	//a0A0,0N
	//a0A0,0N
	//a0A0,0N
	a a A_A = 0;	//aN
}N
N
//===================================================================================================================================N
//a`AaN
//a Aa0AaAa :a AaN
//{N
//a:N
//	Aa<A>**						aAa;															//`|A^aN
//	a a					a[a0AaA::A_A + 0];									//aN
//	a							a;																//AN
//	a							a;																//AN
//	a							a;																//(Aa)N
//	a							a;																//(Aa)N
//	a							aAa;															//aAN
//	a							aAa;															//aAN
//	A							aAa;															//N
//	a a					a;																//aN
//	AaAa<A>				aAa;														//AaN
//N
//a:N
//	Aa0AaAa()																				//AaA^N
//	a ~Aa0AaAa()																		//aAaA^N
//N
//	a a(a a a, a a, a a, a a, a a)				//`Aa\aN
//	a aAa(a a, a a, a a, a a, AaAa<A>* aAa)	//AaAa^N
//	A aAaAaAa(AaAa<A>** aAa)											//AaN
//N
//#a _AN
//	a a()																						//A`N
//#aN
//N
//a:N
//	a aAaAa(A a, a<A*> &aAa)										//AaN
//	A aAaAa(a a, a a, a a, a a)								//AaN
//	A aAa0(A a)																		//aN
//	A a0AaAa(A a, A a)																//0A[aAaN
//	A aAaAa(a a, a a)																//A`0aN
//};N
//===================================================================================================================================N
#a a Aa0AaAaN
a <a A>N
a Aa0AaAa :a AaN
{N
a:N
	Aa<A>**						aAa;							//`|A^aN
	a a					a[a0AaA::A_A + 0];	//aN
	a							a;								//AN
	a							a;								//AN
	a							a;								//(Aa)N
	a							a;								//(Aa)N
	a							aAa;							//aAN
	a							aAa;							//aAN
	A							aAa;							//N
	a a					a;								//aN
	AaAa<A>				aAa;						//AaN
N
#a _AN
	Aa*							a;								//`aAN
	a*							a;N
	a								aAa;							//AaN
#a // _AN
N
a:N
	//AaA^N
	Aa0AaAa()N
	{N
		aAa		= A;N
		a			= 0;N
		a			= 0.0a;N
		a			= 0.0a;N
		a			= 0.0a;N
		a				= 0.0a;N
		aAa		= 0.0a;N
		aAa		= 0.0a;N
		aAa			= 0;N
N
#a _AN
		a			= A;N
		aAa		= 0;N
		a			= 0;N
#aN
		//aAaN
		a[0] = 0;N
		a (a a = 0; a < a0AaA::A_A + 0; a++)N
		{N
			a[a] = a[a - 0] * 0;N
		}N
	}N
N
	//aAaA^N
	a ~Aa0AaAa()N
	{N
		a (A a = 0; a < aAa; a++)N
		{N
			a(aAa[a] != A)N
				a aAa[a];N
		}N
		A_A_A(aAa);N
#a _AN
		A_A_A(a);N
		A_A_A(a);N
#a // _AN
N
	}N
N
	//`Aa\aN
	a a(a a a, a a, a a, a a, a a)N
	{N
		//aN
		a (a >= a0AaA::A_A)a a;N
N
		//a(0_)aN
		aAa		= (a[a + 0] - 0) / 0;N
		aAa	= a Aa<A>*[aAa];N
		AaAa(aAa, a(Aa<A>*)*aAa);N
N
		//a^N
		a->a			= a;N
		a->a			= a;N
		a->a			= a - a;N
		a->a		= a - a;N
		a->aAa		= a / (0 << a);N
		a->aAa	= a / (0 << a);N
		a->a			= a;N
N
#a _AN
		//Aa`N
		a aAa	= (a)((0 << a) + 0);N
		aAa		= 0;N
		aAa += aAa;//aN
		aAa += aAa;//aN
		a = a Aa[aAa];N
		A0A0 a;N
		a = a a[aAa];N
N
		//a_AN
		a (a a = 0; a < aAa; a++)N
		{N
			a[a] = Aa::a0AaAa(N
				&a, N
				A0A0(a + (aAa*a), 0, -a / 0), N
				A0A0(a + (aAa*a), 0, a / 0));N
			a[a].a(A0A0(a + (aAa*a), 0, -a / 0), a);N
			a[a].a = A0A(0, 0, 0, 0);N
		}N
N
		//a_AN
		a (a a = 0; a < aAa; a++)N
		{N
			a[aAa + a] = Aa::a0AaAa(N
				&a,N
				A0A0(-a / 0, 0, a + (aAa*a)) ,N
				A0A0(a / 0, 0, a + (aAa*a)) );N
			a[aAa + a].a(A0A0(-a / 0, 0, a + (aAa*a)), a);N
			a[aAa + a].a = A0A(0, 0, 0, 0);N
		}N
#a // _AN
N
		a a;N
N
	}N
N
	//AaAa^N
	a aAa(a a, a a, a a, a a, AaAa<A>* aAa)N
	{N
		//AaAaAa^[aAaN
		A a = aAaAa(a, a, a, a);N
		a (a < aAa)N
		{N
			//AN
			a (!aAa[a])N
			{N
				aAaAa(a);N
			}N
			a aAa[a]->a(aAa);N
		}N
		a a;N
	}N
N
	//AaN
	A aAaAaAa(AaAa<A>** aAa)N
	{N
		//AaAN
		a->aAa.aAa();N
N
		//[a`AaAN
		a (aAa[0] == A)	a 0;	//N
N
		//[aN
		a<A*> aAa;N
		aAaAa(0, aAa);N
N
		*aAa = &a->aAa;N
N
		a (A)a->aAa.aAa();N
N
	}N
#a _AN
	//A`N
	a a()N
	{N
		a(a a = 0; a < aAa; a++)N
		{N
			a[a].a(a[a]);N
		}N
	}N
#aN
N
N
a:N
	//AaN
	a aAaAa(A a, a<A*> &aAa)N
	{N
		a a<A*>::a a;N
		//@AaAaAaN
		AaAa<A>* aAa0 = aAa[a]->aAaAa();N
		a (aAa0 != 0)N
		{N
			AaAa<A>* aAa0 = aAa0->a;N
			a (aAa0 != 0)N
			{N
				//AaN
				aAa.a(aAa0->a, aAa0->a);N
				aAa0 = aAa0->a;N
			}N
			//A^aAaN
			a (a = aAa.a(); a != aAa.a(); a++)N
			{N
				aAa.a(aAa0->a, *a);N
			}N
			aAa0 = aAa0->a;N
		}N
N
		a aAa = a;N
		//AaN
		A aAa = 0;N
		A a, aAa;N
		a (a = 0; a < 0; a++)N
		{N
			aAa = a * 0 + 0 + a;N
			a (aAa < aAa && aAa[a * 0 + 0 + a])N
			{N
				a (!aAa)N
				{N
					//Aa^AaAaA^aAN
					aAa0 = aAa[a]->aAaAa();N
					a (aAa0 != 0)N
					{N
						aAa.a_a(aAa0->a);N
						aAa++;N
						aAa0 = aAa0->a;N
					}N
				}N
				aAa = a;N
				aAaAa(a * 0 + 0 + a, aAa);	//aN
			}N
		}N
N
		//A^aAaAaAN
		a (aAa)N
		{N
			a (a = 0; a < aAa; a++)N
			{N
				aAa.a_a();N
			}N
		}N
N
		a a;N
N
	}N
N
	//N
	a aAaAa(A a)N
	{N
		//aN
		a (!aAa[a])N
		{N
			//aAN
			aAa[a] = a Aa<A>;N
N
			//aAaN
			a = (a - 0) >> 0;N
			a (a >= aAa)a;N
N
		}N
		a a;N
	}N
N
	//AaN
	A aAaAa(a a, a a, a a, a a)N
	{N
		//aAaN
		A aAa = aAaAa(a, a);N
		A aAa = aAaAa(a, a);N
N
		//aA_aN
		//aAaN
		A a = aAa ^ aAa;N
		a a aAa = 0;N
		a a a;N
		a (a = 0; a < a; a++)N
		{N
			A a = (a >> (a * 0)) & 0a0;N
			a (a != 0)N
			{N
				aAa = a + 0;N
			}N
		}N
		A aAa = aAa >> (aAa * 0);N
		A aAa = (a[a - aAa] - 0) / 0;N
		aAa += aAa;N
N
		a (aAa > aAa)N
			a 0a;N
N
		a aAa;N
		N
	}N
N
	//aN
	A aAa0(A a)N
	{N
		a = (a | (a << 0)) & 0a0a0a;		//0 0 0 0 0 0 0 0N
		a = (a | (a << 0)) & 0a0a0a0a0a;		//0 0 0 0 0 0 0 0N
		a = (a | (a << 0)) & 0a0;		//0 0 0 0 0 0 0 0N
		a (a | (a << 0)) & 0a0;		//0 0 0 0 0 0 0 0N
	}N
N
	//0A[aAaN
	A a0AaAa(A a, A a)N
	{N
		a (A)(aAa0(a) | (aAa0(a) << 0));N
	}N
N
	//A`0aN
	A aAaAa(a a, a a)N
	{N
		a a0AaAa((A)((a - a) / aAa), (A)((a - a) / aAa));N
	}N
N
};N
#a aN
N
//===================================================================================================================================N
//a`AaN
//===================================================================================================================================N
a a0AaAN
{N
	//AaA(0<<Aa+0)^0/0N
	//a0A0N
	//a0A0N
	//a0A0N
	//a0A0N
	//a0A0,0N
	//a0A0,0N
	//a0A0,0N
	//a0A0,0,0N
	//a0A0,0,0N
	//a0A0,0,0N
	a a A_A = 0;	//aN
}N
N
//===================================================================================================================================N
//a`AaN
//a Aa0AaAa :a AaN
//{N
//a:N
//	Aa<A>**						aAa;											//`|A^aN
//	a a					a[a0AaA::A_A + 0];					//aN
//	A0A0						a;												//N
//	A0A0						aAa;											//aN
//	A0A0						aAa;											//aN
//	A0A0						a;												//N
//	A							aAa;											//N
//	a a					a;												//aN
//	AaAa<A>				aAa;										//AaN
//N
//a:N
//	Aa0AaAa()																//AaA^N
//	a ~Aa0AaAa()														//aAaA^N
//N
//	a a(a a a, A0A0 a, A0A0 a)				//a`Aa\aN
//	a aAa(A0A0* a, A0A0* a, AaAa<A>* aAa)	//AaAa^N
//	A aAaAaAa(AaAa<A>** aAa)							//AaN
//N
//#a _AN
//	a a()																		//A`N
//#aN
//N
//a:N
//	a aAaAa(A a, a<A*> &aAa)						//AaN
//	a aAaAa(A a)													//N
//	A aAaAa(A0A0* a, A0A0* a)							//AaN
//	A aAaAa0A(A a)														//aN
//	A a0AaAa(A a, A a, A a)										//0A[aAaN
//	A aAaAa(A0A0 &a)											//A`0aN
//}N
//===================================================================================================================================N
#a a Aa0AaAaN
a <a A>N
a Aa0AaAa :a AaN
{N
a:N
	Aa<A>**						aAa;							//`|A^aN
	a a					a[a0AaA::A_A + 0];	//aN
	A0A0						a;								//N
	A0A0						aAa;							//aN
	A0A0						aAa;							//aN
	A0A0						a;								//N
	A							aAa;							//N
	a a					a;								//aN
	AaAa<A>				aAa;						//AaN
N
#a _AN
	Aa*							aAa;								//`aAN
	Aa*							aAa;								//`aAN
	Aa*							aAa;								//`aAN
	a							aAa;								//`N
	a							aAa;								//`N
	a							aAa;								//`N
	a								aAa;							//AaN
#a // _AN
N
a:N
	//AaA^N
	Aa0AaAa()N
	{N
		aAa	= A;N
		a		= A0A0(0, 0, 0);N
		aAa	= A0A0(0, 0, 0);N
		aAa	= A0A0(0, 0, 0);N
		a		= A0A0(0, 0, 0);N
		aAa		= 0;N
		a		= 0;N
N
#a _AN
		aAa = A;N
		aAa = A;N
		aAa = A;N
		aAa = 0;N
		aAa = 0;N
		aAa = 0;N
		aAa = 0;N
#aN
		//aAaN
		a[0] = 0;N
		a (a a = 0; a < a0AaA::A_A + 0; a++)N
		{N
			a[a] = a[a - 0] * 0;N
		}N
	}N
N
	//aAaA^N
	a ~Aa0AaAa()N
	{N
		a (A a = 0; a < aAa; a++)N
		{N
			a (aAa[a] != A)N
				a aAa[a];N
		}N
		A_A_A(aAa);N
#a _AN
		A_A_A(aAa);N
		A_A_A(aAa);N
		A_A_A(aAa);N
#a // _AN
	}N
N
	//a`Aa\aN
	a a(a a a, A0A0 a, A0A0 a)N
	{N
		//aN
		a (a >= a0AaA::A_A)a a;N
N
		//a(0_)aN
		aAa = (a[a + 0] - 0) / 0;N
		aAa = a Aa<A>*[aAa];N
		AaAa(aAa, a(Aa<A>*)*aAa);N
N
		//a^N
		a->aAa = a;N
		a->aAa = a;N
		a->a		= aAa - aAa;N
		a->a		= a/((a)(0<<a));N
		a->a		= a;N
N
N
#a _AN
		//Aa`N
		a aAa = (a)((0 << a) + 0);N
		aAa = aAa * aAa;N
		aAa = a Aa[aAa];N
		aAa = a Aa[aAa];N
		aAa = a Aa[aAa];N
		A0A0 a;N
		aAa = a.a - a.a;N
		aAa = a.a - a.a;N
		aAa = a.a - a.a;N
N
		//Aa_AN
		a = A0A0(0, 0, 0);N
		a (a a = 0; a < aAa; a++)N
		{N
			a (a a = 0; a < aAa; a++)N
			{N
				aAa[a+ (a*aAa)].a(A0A0(a.a, a.a + (a.a*a), a.a+(a.a*a)), a);N
				aAa[a+ (a*aAa)].a = A0A(0, 0, 0, 0);N
			}N
		}N
		//Aa_AN
		a = A0A0(0, 0, 0);N
		a (a a = 0; a < aAa; a++)N
		{N
			a (a a = 0; a < aAa; a++)N
			{N
				aAa[a + (a*aAa)].a(A0A0(a.a + (a.a*a), a.a, a.a+(a.a*a)), a);N
				aAa[a + (a*aAa)].a = A0A(0, 0, 0, 0);N
			}N
		}N
		//Aa_AN
		a = A0A0(0, 0, 0);N
		a (a a = 0; a < aAa; a++)N
		{N
			a (a a = 0; a < aAa; a++)N
			{N
				aAa[a+ (a*aAa)].a(A0A0(a.a + (a.a*a), a.a + (a.a*a), a.a), a);N
				aAa[a+ (a*aAa)].a = A0A(0, 0, 0, 0);N
			}N
		}N
#a // _AN
N
		a a;N
	}N
N
	//AaAa^N
	a aAa(A0A0* a,A0A0* a,AaAa<A>* aAa)N
	{N
		//AaAaAa^[aAaN
		A a = aAaAa(a,a);N
		a (a < aAa)N
		{N
			//AN
			a (!aAa[a])N
			{N
				aAaAa(a);N
			}N
			a aAa[a]->a(aAa);N
		}N
		a a;//a^aN
	}N
N
	//AaN
	A aAaAaAa(AaAa<A>** aAa)N
	{N
		//AaAN
		a->aAa.aAa();N
N
		//[a`AaAN
		a (aAa[0] == A)	a 0;	//N
N
		//[aN
		a<A*> aAa;N
		aAaAa(0, aAa);N
N
		*aAa = &a->aAa;N
N
		a (A)a->aAa.aAa();N
	}N
#a _AN
	//A`N
	a a()N
	{N
		a (a a = 0; a < aAa; a++)N
		{N
			aAa[a].a(aAa);N
		}N
		a (a a = 0; a < aAa; a++)N
		{N
			aAa[a].a(aAa);N
		}N
		a (a a = 0; a < aAa; a++)N
		{N
			aAa[a].a(aAa);N
		}N
	}N
#aN
N
a:N
	//AaN
	a aAaAa(A a, a<A*> &aAa)N
	{N
		a a<A*>::a a;N
		//@AaAaAaN
		AaAa<A>* aAa0 = aAa[a]->aAaAa();N
		a (aAa0 != 0)N
		{N
			AaAa<A>* aAa0 = aAa0->a;N
			a (aAa0 != 0)N
			{N
				//AaN
				a (aAa0->a & aAa0->a ||N
					aAa0->a & aAa0->a)N
				{N
					aAa.a(aAa0->a, aAa0->a);N
				}N
				aAa0 = aAa0->a;N
			}N
			//A^aAaN
			a (a = aAa.a(); a != aAa.a(); a++)N
			{N
				a (aAa0->a & (*a)->aAa.a N
					||	(*a)->aAa.a & aAa0->a)N
				{N
					aAa.a(aAa0->a, *a);N
				}N
			}N
			aAa0 = aAa0->a;N
		}N
N
		a aAa = a;N
		//AaN
		A aAa = 0;N
		A a, aAa;N
		a (a = 0; a < 0; a++)N
		{N
			aAa = a * 0 + 0 + a;N
			a (aAa < aAa && aAa[a * 0 + 0 + a])N
			{N
				a (!aAa)N
				{N
					//Aa^AaAaA^aAN
					aAa0 = aAa[a]->aAaAa();N
					a (aAa0 != 0)N
					{N
						aAa.a_a(aAa0->a);N
						aAa++;N
						aAa0 = aAa0->a;N
					}N
				}N
				aAa = a;N
				aAaAa(a * 0 + 0 + a, aAa);	//aN
			}N
		}N
N
		//A^aAaAaAN
		a (aAa)N
		{N
			a (a = 0; a < aAa; a++)N
			{N
				aAa.a_a();N
			}N
		}N
N
		a a;N
N
	}N
N
	//N
	a aAaAa(A a)N
	{N
		//aN
		a (!aAa[a])N
		{N
			//aAN
			aAa[a] = a Aa<A>;N
N
			//aAaN
			a = (a - 0) >> 0;N
			a (a >= aAa)a;N
N
		}N
		a a;N
	}N
N
	//AaN
	A aAaAa(A0A0* a,A0A0* a)N
	{N
		//aAaN
		A aAa		= aAaAa(*a);N
		A aAa	= aAaAa(*a);N
N
		//aA_aN
		//aAaN
		A a = aAa ^ aAa;N
		a a aAa = 0;N
		a a a;N
		a (a = 0; a < a; a++)N
		{N
			A a = (a >> (a * 0)) & 0a0;N
			a (a != 0)N
			{N
				aAa = a + 0;N
			}N
		}N
		A aAa = aAa >> (aAa * 0);N
		A aAa = (a[a - aAa] - 0) / 0;N
		aAa += aAa;N
N
		a (aAa > aAa)N
			a 0a;N
N
		a aAa;N
N
	}N
N
	//aN
	A aAaAa0A(A a)N
	{N
		A a = a;N
		a = (a | (a << 0)) & 0a0a0a;		//0 0 0 0 0 0 0 0N
		a = (a | (a << 0)) & 0a0a0a0;		//0 0 0 0 0 0 0 0N
		a = (a | (a << 0)) & 0a0;		//0 0 0 0 0 0 0 0N
		a a;N
	}N
N
	//0A[aAaN
	A a0AaAa(A a, A a,A a)N
	{N
		a aAaAa0A(a) | aAaAa0A(a) << 0 | aAaAa0A(a) << 0;N
	}N
N
	//A`0aN
	A aAaAa(A0A0 &a)N
	{N
		a a0AaAa(N
			(A)((a.a-aAa.a)/a.a),N
			(A)((a.a-aAa.a)/a.a),N
			(A)((a.a-aAa.a)/a.a));N
	}N
};N
#a aN
N
//===================================================================================================================================N
//aAaN
//a<a A>N
//a AaN
//{N
//a:N
//	AaAa<A>* a;	//	AaAa|A^N
//N
//a:N
//	Aa();										//AaA^N
//	a ~Aa();							//aAaA^N
//N
//	a aAa(AaAa<A>* &aAa);	//AaN
//N
//	a a(AaAa<A>* &aAa);		//AaAaAN
//N
//	AaAa<A>* aAaAa();			//a^AaAa[N
//N
//	a aAa(AaAa<A>* aAa);	//AaAa`AaAN
//}N
//===================================================================================================================================N
#a a AaN
a<a A>N
a AaN
{N
a:N
	AaAa<A>* a;	//	AaAa|A^N
N
a:N
	//AaA^N
	Aa():a(0){}N
N
	//aAaA^N
	a ~Aa()N
	{N
		a (a != A)N
			aAa(a);N
	}N
N
	//AaN
	a aAa(AaAa<A>* aAa)N
	{N
		a (aAa->a != 0)N
		{N
			aAa(aAa->a);N
		}N
		aAa = 0;N
	}N
N
	//AaAaAN
	a a(AaAa<A>* &aAa)N
	{N
		a (aAa == 0)			a a;	//AaAa^N
		a (aAa->a == a)	a a;	//Aa^`AaAN
		a (a == 0)N
		{N
			a = aAa;						//Aa^N
		}N
		aN
		{N
			//AaAaAaAaAN
			aAa->a	= a;N
			a->a		= aAa;N
			a				= aAa;N
		}N
		aAa->aAa(a);					//a^N
		a a;N
	}N
N
	//a^AaAaN
	AaAa<A>* aAaAa()N
	{N
		a a;N
	}N
N
	//AaAa`AaAN
	a aAa(AaAa<A>* aAa)N
	{N
		a (a == aAa)N
		{N
			//AaAa}N
			a (a != A)N
				a = a->aAaAa();N
		}N
		a a;N
	}N
};N
#a aN
