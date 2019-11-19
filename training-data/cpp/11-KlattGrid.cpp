/* AaAa.aN
 *N
 * Aa (A) 0-0 Aa Aa, 0,0 Aa AaN
 *N
 * Aa a a a a; a a a a a/a aN
 * a a a a a a A Aa Aa Aa a a aN
 * a Aa Aa Aa; a a 0 a a Aa, a (aN
 * a a) a a a.N
 *N
 * Aa a a a a a a a a a a a, aN
 * A A A; a a a a a aN
 * A a A A A A A.  Aa a AN
 * Aa Aa Aa a a a.N
 *N
 * Aa a a a a a a a A Aa Aa AaN
 * a a a a. Aa a, a <a://a.a.a/a/>.N
 */N
/*N
  a 0 Aa aN
  a 0 Aa a a a a a a.N
  a 0 Aa AaAa.N
  a 0 AaAa_a a a a a aN
  a 0 Aa AaAa_aAaAaN
  a 0 Aa aAa_aAaAaAaAaN
  a 0 Aa A_a_A a A_a_A a a a a a.N
  a 0 Aa a aN
  a 0 Aa_aN
  a 0 a a -> a aN
  a 0 Aa_a(Aa|Aa)Aa a a Aa_a(Aa|Aa)Aa_AaN
  a 0 Aa_AaAaAa_AaAa_a_a: a aN
*/N
N
#a "AaAa_a.a"N
#a "Aa.a"N
#a "AaAa.a"N
#a "AaAa.a"N
#a "Aa.a"N
#a "Aa_a_AaAa.a"N
#a "AaAa_a_Aa.a"N
#a "AaAa_a_AaAa.a"N
#a "A0.a"N
#a "Aa_a_Aa.a"N
#a "Aa_a_Aa.a"N
#a "Aa_a_Aa.a"N
N
#a "a_A.a"N
#a "AaAa_a.a"N
#a "a_A.a"N
#a "AaAa_a.a"N
#a "a_A.a"N
#a "AaAa_a.a"N
#a "a_A_A_A_A.a"N
#a "AaAa_a.a"N
#a "a_A_A.a"N
#a "AaAa_a.a"N
#a "a_A_A.a"N
#a "AaAa_a.a"N
#a "a_A_A.a"N
#a "AaAa_a.a"N
#a "a_A_A.a"N
#a "AaAa_a.a"N
#a "a_A.a"N
#a "AaAa_a.a"N
N
N
#a "a_aAa.a"N
#a "AaAa_a.a"N
#a "a_aAa.a"N
#a "AaAa_a.a"N
N
/*N
 * A AaAa a a a a a a a a a a a.N
 * N
 * Aa a a a, a a a a a a a a a a a a a a a aN
 * a a a a a a AaAa a. Aa a a a a a a a a a a aN
 * a a a.N
 * N
 * Aa a a a a a, a a a a a a, a a a a a a a.N
 * Aa a a a a a a a a a a a a a (a) a a a (a).N
 * Aa a a a a a a a(a,a) a a a.N
 * Aa a a a a a a a a a a a a a (a, a, a) a:N
 * 	- a a a AaAa a a a a a a a a a a a a a a aN
 * 	- a a/a a a a a a a a a a a a a a aN
 * 	- a a/a a a a a a a a a&a aN
 * N
 * Aa a 0 a AaAa_aAa (/a) a a a a a a a a a a a a a aN
 *	AaAa_aAaAaAaAa (/a)N
 *	AaAa_aAaAaAa (/a)N
 * N
 */N
N
a0 AaAa_aAaAa (aAaAaAaAa aAa) {N
	a0 a;N
	a (aAa == aAaAaAaAa::Aa)N
		a = A"Aa a";N
	a a (aAa == aAaAaAaAa::Aa)N
		a = A"Aa a";N
	a a (aAa == aAaAaAaAa::Aa)N
		a = A"Aa Aa";N
	a a (aAa == aAaAaAaAa::Aa)N
		a = A"Aa a";N
	a a (aAa == aAaAaAaAa::AaAa)N
		a = A"Aa Aa";N
	a a (aAa == aAaAaAaAa::AaAa)N
		a = A"Aa a";N
	a a (aAa == aAaAaAaAa::Aa)N
		a = A"Aa a";N
	aN
		a = A"Aa a";N
	a a;N
}N
N
a a a0 a_a[] = { A"", A"a ", A"a ", A"a ", A"a ", A"a a", A"a a", A"a "};N
N
#a AaAa_A_A 0.0N
#a AaAa_A0_A 0N
#a AaAa_A0_A (AaAa_A0_A+0)N
N
/*	Aa a: a a (-0,+0) a a 0 aA */N
N
/*a a AaAa (a a0, a a0, a a0, a a0, a a)N
{N
	a (a0 == a0) a a0;N
	a (a0 == a0) a a;N
	a (a0 - a0) * (a - a0) / (a0 - a0) + a0;N
}*/N
N
a a a_a_a (a *a, a *a, a a, a a) {N
	a a = 0.0;N
	a (a a = 0; a <= a; a ++) { // aN
		a += a [a];N
	}N
	a (a != 0.0) {N
		a a = a / a;N
		a = 0.0;N
		a (a a = 0; a <= a; a ++) { // a aN
			a [a] *= a;N
			a += a [a];N
			a [a] = a;N
		}N
	}N
}N
N
a a AaAa_aAaAa (AaAa a, a a, a a) {N
	a (a a = 0; a <= a a.a; a ++) {N
		a AaAa a = a a.a [a];N
		a (a (a) && a -> a < a)N
			a a;N
		a (a (a) && a -> a < a)N
			a a;N
	}N
	a a;N
}N
N
a a AaAa_aAaAaAa (AaAa a, a a, a aAa) {N
	a a = a;N
	a (a >= 0) {N
		a = a a [a] - a a [a - 0];N
		a (a > aAa)N
			a = a;N
	}N
	a (a (a)) {N
		a (a < a a) {N
			a = a a [a + 0] - a a [a];N
			a (a > aAa)N
				a = a;N
		}N
	}N
	// a a a a a a a a a.N
	a a;N
}N
N
#a A_A \N
	AaAa_aAa (a.a(), a, a); \N
	a = a; \N
	a ++; \N
	a (a <= aAaAa) { \N
		a = a a.a [a]; \N
		a = a -> a; \N
		a = a -> a;\N
	} a { \N
		a = a a; \N
	}N
N
a aAaAa AaAa_aAaAa (AaAa a, AaAa a, AaAa a, a a_aAa) {N
	a {N
		a a = 0;N
		AaAa a = a a.a [a];N
		a a aAaAa = a a.a;N
		a a = a -> a;N
		a a = a -> a;N
		a a = a a - 0.0;   // a a aN
		aAaAa a = AaAa_a (a a, a a);N
N
		a (a_aAa <= 0.0)N
			a_aAa = 0.0;N
		a (a_aAa >= 0.0)N
			a_aAa = 0.0;N
		a (a a = 0; a <= a -> a.a; a ++) {N
			a AaAa a = a -> a.a [a];N
			a a a0 = a -> a;   // a aN
			a a aAa = a -> a;N
			a a a0 = a0 - aAa;N
			a a a0 = a0 + a_aAa * aAa;N
			a a a0 = a0 - a_aAa * aAa;N
			/*N
				Aa a a a a a a0 a a a a0.N
			*/N
			a (a > a && a < a0) {N
				A_AN
			}N
			a (a0 > a0) {N
				// Aa a a a a0N
				a a a0 = AaAa_aAaAaAa (a, a0);N
				AaAa_aAa (a.a(), a0, a0);N
				// Aa a a a a0 a a0N
				a (a > a && a < a0) {N
					a a a = AaAa_aAaAaAa (a, a);N
					a (a (a)) {N
						a a a = (a - a0) / (a_aAa * aAa);N
						a += a * a;N
					}N
					A_AN
				}N
			}N
N
			a a0 = AaAa_aAaAaAa (a, a0);N
			a a = AaAa_aAaAaAa (a, a0);N
			a (a (a))N
				a0 += a;N
			AaAa_aAa (a.a(), a0, a0);N
N
			// Aa a a a0 a a0N
N
			a (a > a && a < a0) {N
				a = AaAa_aAaAaAa (a, a);N
				a (a (a))N
					a += a;N
				A_AN
			}N
N
			// a a a a a0N
N
			a a0 = AaAa_aAaAaAa (a, a0);N
			a = AaAa_aAaAaAa (a, a0);N
			a (a (a)) {N
				a0 += a;N
			}N
			AaAa_aAa (a.a(), a0, a0);N
N
			a (a0 > a0) {N
				// Aa a a a a0 a a0N
				a (a > a && a < a0) {N
					a = AaAa_aAaAaAa (a, a);N
					a (a (a)) {N
						a a a = 0 - (a - a0) / (a_aAa * aAa);N
						a += a * a;N
					}N
					A_AN
				}N
N
				// Aa a a a a0N
				a a a0 = AaAa_aAaAaAa (a, a0);N
				AaAa_aAa (a.a(), a0, a0);N
			}N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a a a.");N
	}N
}N
N
a a AaAa_aAaAa (AaAa a, a a) {N
	// a a a a a a aN
	a AaAa a = a a.a [a];N
	a AaAa a = a a.a [a];N
	a a -> a.a > 0 a a -> a.a > 0;N
}N
N
a a AaAa_Aa_aAaAa (AaAa a, AaAa<aAaAa>* a, a a) {N
	a a = a;N
	a (a <= a a.a && a <= a a.a && a <= a->a) {N
		a AaAa a = a a.a [a];N
		a AaAa a = a a.a [a];N
		a AaAa a = a a [a];N
		a = ( a -> a.a > 0 && a -> a.a > 0 && a -> a.a > 0 );N
	}N
	a a;N
}N
N
a a a_a (a aAaAa, a *a, a *a) {N
	a (aAaAa <= 0 || *a > aAaAa || *a < *a || *a < 0) {N
		*a = 0;  // a a *a a a a a'a a aN
		a;N
	}N
	a (*a <= 0)N
		*a = 0;N
	a (*a > aAaAa)N
		*a = aAaAa;N
}N
N
a aAa Aa_aAaAa (a a, a a, a aAa) {N
	a a a = Aa_a ((a - a) * aAa);N
	a a a = 0.0 / aAa;N
	a a a = (a + a) / 0.0;N
	a a a0 = a - 0.0 * (a - 0) * a;N
N
	a Aa_a (0, a, a, a, a, a0);N
}N
N
a a _Aa_a_a (Aa a, Aa a) {N
	a (a a = 0; a <= a a; a ++)N
		a a [0] [a] += a a [0] [a];N
}N
N
a aAa _Aa_a (Aa a, a a) {N
	a {N
		aAa a = Aa_a (a);N
N
		// aN
		a a0 = -0.0a0, a0 = a0, a, a = 0.0;N
		a (a) {N
			a (a a = 0; a <= a a; a ++) {N
				a = a (a a [0] [a]);N
				a (a > a0)N
					a0 = a;N
			}N
		}N
		// a [a]-a [a-0]N
		a (a a = 0; a <= a a; a ++) {N
			a = a a [0] [a];N
			a a [0] [a] -=  a;N
			a = a;N
		}N
		a (a) {N
			a (a a = 0; a <= a a; a ++) {N
				a = a (a a [0] [a]);N
				a (a > a0)N
					a0 = a;N
			}N
			// aN
			a (a a = 0; a <= a a; a ++)N
				a a [0] [a] *= a0 / a0;N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a.");N
	}N
}N
N
/*a a _Aa_aAa_a (Aa a, Aa a)N
{N
	a a = 0, a = a a;N
	a (a a = 0; a <= a a; a ++)N
	{N
		a a a =  a a [0] [a];N
		a a [0] [a] += (a - a) / a; // a a a a a/a a a a.N
		a = a;N
	}N
}*/N
N
a a a {N
	a aAaAa;N
	aA a, a;N
} *a;N
N
a a a_a (a a) {N
	a (! a)N
		a;N
	Aa_a (a);N
}N
N
a a a_a (a aAaAa) {N
	a a = 0;N
	a {N
		a = (a) Aa_a (a, 0);N
		a aAaAa = aAaAa;N
		a a = aAa (aAaAa);N
		a a = aAa (aAaAa);N
		a a;N
	} a (AaAa) {N
		a_a (a);N
		Aa_a (A"Aa a a.");N
	}N
}N
N
// Aa a a a (a,a) a a a a a a.N
// Aa a a a a a a A (a, a) a a a a.N
a a Aa_a_a_a (a a, a a, a a, a a, a a, a *a, a *a) {N
	a a = a - a, a = a - a;N
	a a a = a (a * a + a * a);N
	a (a > 0) {N
		*a = a + a * a / a;N
		*a = a + a * a / a;N
	} a {N
		*a = *a = a;N
	}N
}N
N
a a a_a (Aa a, a a, a a, a a, a a) {N
	Aa_aAaAa (a, 0);N
	Aa_a (a, a, a, a);N
	a a a = 0.0 * a / 0.0;N
	// + aN
	a (a)N
		a += a / 0.0;N
	Aa_a (a, a, a + a / 0.0, a, a - a / 0.0);N
	Aa_a (a, a - a / 0.0, a, a + a / 0.0, a);N
	a (a)N
		Aa_a (a, a - a / 0.0, a - a , a + a / 0.0, a - a);N
}N
N
a a _a_aAa (Aa a, a a, a a, a a, a a, a a, a a, a aAa) {N
	a_a (a, a, a, a, a);N
N
	a (a a = 0; a <= a aAaAa; a ++) {N
		a a a = a a [a];N
		a a, a, a = a a [a];N
		a (aAa > 0) {N
			a a a = a - a;N
			a (a > 0) {N
				a += aAa * a;N
				Aa_a (a, a a [a], a, a, a);N
			}N
		}N
		Aa_a_a_a (a, a, a, a, a, & a, & a);N
		a (a (a) || a (a))N
			a;N
		a (a)N
			Aa_a (a, a, a, a, a);N
		aN
			Aa_a (a, a, a, a, a);N
	}N
}N
N
a a a_aAa (Aa a, a a, a a, a a, a a, a a, a aAa) {N
	_a_aAa (a, a, a, a, a, a, a, aAa);N
}N
N
a a aAa_aAa (Aa a, a a, a a, a a, a a, a a, a aAa) {N
	_a_aAa (a, a, a, a, a, a, a, aAa);N
}N
N
a a a_aAa (Aa a, a a, a a, a a, a a,N
	a0 a0, a0 a0, a0 a0)N
{N
	Aa_a (a, a, a, a, a);N
	a aAaAaAa = 0;N
	a (a0)N
		aAaAaAa ++;N
	a (a0)N
		aAaAaAa ++;N
	a (a0)N
		aAaAaAa ++;N
	a a a = (a - a) / (aAaAaAa + 0), a = a / 0.0;N
	a a a = (a + a) / 0.0;N
	a a = a;N
	a a = 0;N
	a (a0) {N
		a ++;N
		a -= a - ( aAaAaAa == 0 ? a : 0.0 ); // a a a a aN
		Aa_a (a, a, a, a0);N
	}N
	a (a0) {N
		a ++;N
		a -= a - ( aAaAaAa == 0 ? ( a == 0 ? a : -a * a ) : 0.0 );N
		Aa_a (a, a, a, a0);N
	}N
	a (a0) {N
		a ++;N
		a -= a - ( aAaAaAa == 0 ? -a * a : 0.0 );N
		Aa_a (a, a, a, a0);N
	}N
}N
N
// Aa a (-0,0) a 0.0 aAN
#a A_a_A(a) (a (0.0, a / 0.0) * 0.0a-0)N
// Aa aA'aN
#a A_a_A(a) (a (0.0, a / 0.0))N
N
/************************ Aa & AaAa *********************************************/N
N
a a _Aa_AaAa_aAaAaAa_a (Aa a, AaAa a, a a, a a) {N
	a (a < 0 || a > a a.a) {N
		Aa_a (A"Aa ", a, A" a a a.");N
		a;N
	}N
	a AaAa a = a a.a [a];N
	a AaAa a = a a.a [a];N
	a (a -> a.a == 0 && a -> a.a == 0)N
		a;N
	Aa_a (a -> a.a != 0 && a -> a.a != 0,N
		A"Aa a a a a,");N
	a a a = 0.0 / a a;N
	aAa a;N
	a (a)N
		a = AaAa_a (a a);N
	aN
		a = Aa_a (a a, a);N
N
	a (a a = 0; a <= a a; a ++) {N
		a a a = a a0 + (a - 0) * a a;N
		a a a = AaAa_aAaAaAa (a, a);N
		a a a = AaAa_aAaAaAa (a, a);N
		a (a <= a && a (a))N
			Aa_aAa (a.a(), a, a);N
		a a [0] [a] = Aa_aAa (a.a(), a a [0] [a]);N
	}N
}N
N
a Aa_AaAa_aAaAaAaAa_a (Aa a, AaAa a, a a) {N
	_Aa_AaAa_aAaAaAa_a (a, a, a, a);N
}N
N
a Aa_AaAa_aAaAaAa_a (Aa a, AaAa a, a a) {N
	_Aa_AaAa_aAaAaAa_a (a, a, a, a);N
}N
N
a Aa_AaAa_Aa_aAaAaAa_a (Aa a, AaAa a, AaAa<aAaAa>* a, a a) {N
	a {N
		Aa_a (a > 0 && a <= a a.a, A"Aa ", a, A" a a.");N
		N
		a a a = 0.0 / a a;N
N
		a AaAa a = a a.a [a];N
		a AaAa a = a a.a [a];N
		a AaAa a = a->a [a];N
N
		a (a -> a.a == 0 || a -> a.a == 0 || a -> a.a == 0)N
			a;    // a a aN
		aAa a = Aa_a (a a, a);N
		a (a a = 0; a <= a a; a ++) {N
			a a a = a a0 + (a - 0) * a a;N
			a a a = AaAa_aAaAaAa (a, a);N
			a a a = AaAa_aAaAaAa (a, a);N
			a (a <= a && a (a)) {N
				Aa_aAa (a.a(), a, a);N
				a a a = AaAa_aAaAaAa (a, a);N
				a (a (a))N
					a -> a *= A_a_A (a);N
			}N
			a a [0] [a] = Aa_aAa (a.a(), a a [0] [a]);N
		}N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a a.");N
	}N
}N
N
aAa Aa_AaAa_Aa_a (Aa a, AaAa a, AaAa<aAaAa>* a, a a, a a, a aAa) {N
	a {N
		a (a > a) {N
			a = 0;N
			a = a a.a;N
		}N
		Aa_a (a > 0 && a <= a a.a ,N
			A"Aa a ", a, A" a a.");N
		Aa_a (a > 0 && a <= a a.a ,N
			A"Aa a ", a, A" a a.");N
N
		aAa a = Aa_a (a a, a a, a a, a a, a a, a a0);N
N
		a (a a = a; a <= a; a ++) {N
			a (AaAa_Aa_aAaAa (a, a, a)) {N
				aAa a = Aa_a (a);N
				Aa_AaAa_Aa_aAaAaAa_a (a.a(), a, a, a);N
				a (a a = 0; a <= a a; a ++)N
					a a [0] [a] += ( aAa >= 0 ? a -> a [0] [a] : - a -> a [0] [a] );N
				a (aAa != 0)N
					aAa = - aAa;N
			}N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a.");N
	}N
}N
N
/********************* AaAa ************************/N
N
Aa_a (AaAa, AaAa, 0);N
N
aAaAa AaAa_a (a a, a a, a aAa, a aAa, a a, a a0, a a0, a aAa) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		a a = a;N
		a a = a;N
		a aAa = aAa;N
		a aAa = aAa;N
		a a = a;N
		a a0 = a0;N
		a a0 = a0;N
		a aAa = aAa;N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
Aa_a (AaAa, AaAa, 0);N
N
aAaAa AaAa_a (a a, a a) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		Aa_a (a.a(), a, a);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
aAaAa AaAa_a_AaAa_a (AaAa a) {N
	a {N
		a a a = a a.a;N
		aAaAa a = AaAa_a (a a, a a, a);N
		a (a a = 0; a <= a; a ++) {N
			a AaAa a = a a.a [a];N
			AaAa_aAa (a.a(), a -> a);N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a a a a.");N
	}N
}N
N
/********************** AaAaAaAa **********************/N
N
Aa_a (AaAaAaAa, Aa, 0);N
N
a a AaAaAaAa_aAa (AaAaAaAa a) {N
	a aAa = a a = 0;N
	a a = a a = 0;N
	a a = a aAa = 0;N
	a aAa = a aAa = 0;N
	a aAa = 0; // Aa a a a (a0 & a0)N
	a aAa = 0;N
}N
N
aAaAaAaAa AaAaAaAa_a () {N
	a {N
		aAaAaAaAa a = Aa_a (AaAaAaAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAaAa a a.");N
	}N
}N
N
/********************** AaAa **********************/N
N
N
Aa_a (AaAa, Aa, 0);N
N
a aAaAa :: a_a () {N
	aAa :: a_a ();N
	a0 a0 = A"  ", a0 = A"    ";N
	AaAa_aAa (a0, A"Aa a:");N
	AaAa_aAa (a0, A"Aa a:     ", a, A" a");N
	AaAa_aAa (a0, A"Aa a:       ", a, A" a");N
	AaAa_aAa (a0, A"Aa a: ", a - a, A" a");N
	AaAa_aAa (a0, A"\aAa a a a a A a:");N
	AaAa_aAa (a0, A"a:               ", a -> a.a);N
	AaAa_aAa (a0, A"aAa:    ", aAa -> a.a);N
	AaAa_aAa (a0, A"aAa:           ", aAa -> a.a);N
	AaAa_aAa (a0, A"aAa:      ", aAa -> a.a);N
	AaAa_aAa (a0, A"a0:              ", a0 -> a.a);N
	AaAa_aAa (a0, A"a0:              ", a0 -> a.a);N
	AaAa_aAa (a0, A"a:             ", a -> a.a);N
	AaAa_aAa (a0, A"aAa:       ", aAa -> a.a);N
	AaAa_aAa (a0, A"aAa:        ", aAa -> a.a);N
	AaAa_aAa (a0, A"aAa: ", aAa -> a.a);N
	AaAa_aAa (a0, A"aAa:", aAa -> a.a);N
}N
N
a AaAa_aAa (AaAa a) {N
	Aa_aAa (a a.a(), A"a");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a a0.a(), A"a0");N
	Aa_aAa (a a0.a(), A"a0");N
	Aa_aAa (a a.a(), A"a");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a aAa.a(), A"aAa");N
}N
N
aAaAa AaAa_a (a a, a a) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		Aa_a (a.a(), a, a);N
		a a = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a a0 = AaAa_a (a, a);N
		a a0 = AaAa_a (a, a);N
		a a = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a aAa = AaAa_a (a, a);N
		a a = AaAaAaAa_a ();N
		AaAa_aAa (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
a a AaAa_aAaAa (AaAa a) {N
	a aAa0Aa = a a0 -> a.a > 0;N
	a aAa0Aa = a a0 -> a.a > 0;N
N
	a a = 0;N
	a {N
		a a a = ( aAa0Aa ? a a0 -> a.a [a] -> a : 0.0 * (a a + a a) );N
		a a0 = AaAa_aAaAaAa (a a0.a(), a);N
		a (a (a0))N
			a0 = AaAa_A0_A;N
		Aa_a (a0 > 0.0,N
			A"Aa a0 a a a a a.");N
N
		a a0 = AaAa_aAaAaAa (a a0.a(), a);N
		a (a (a0))N
			a0 = AaAa_A0_A;N
		Aa_a (a0 < a0,N
			A"Aa a a a a0 a a a a a a a a0 a.");N
		N
	} a ( ++ a < a a0 -> a.a);N
N
	// Aa a a0 a. Aa a a a a a a a0 a a a:N
	// a0(0) = 0; a0(0)= 0; a0(0)= 0; a0(0.0) = 0;N
N
	a = 0;N
	a {N
		a a a = ( aAa0Aa ? a a0 -> a.a [a] -> a : 0.0 * (a a + a a) );N
		a a0 = AaAa_aAaAaAa (a a0.a(), a);N
		a (a (a0))N
			a0 = AaAa_A0_A;N
		a a0 = AaAa_aAaAaAa (a a0.a(), a);N
		a (a (a0))N
			a0 = AaAa_A0_A;N
		Aa_a (a0 < a0,N
			A"Aa a a a a0 a a a a a a a a0 a.");N
		N
	} a ( ++ a < a a0 -> a.a);N
}N
N
a a AaAa_a_a (AaAa a, Aa a, a a, a a, a a, a a, a a, a *a_a) {N
	// a a a a a aN
	(a) a;N
	a a [0] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }, a [0];N
N
	a a = a_a (0);N
N
	a_a_a (a, a, 0, a - a);N
N
	a = (a - a) / (0.0 + ( a < 0.0 ? 0.0 : a ) + 0.0);N
N
	a a0 = a, a0 = a0 + a [0];N
	a a0 = a, a0 = a0 - a;N
	a_aAa (a, a0, a0, a0, a0, a, A"Aa", a);N
N
	a0 = a0;N
	a0 = a0 + a [0];N
	a a = (a0 + a0) / 0.0;N
	Aa_a (a, a0, a, a0, a);N
N
	a0 = a0;N
	a0 = a0 + a [0];N
	a_aAa (a, a0, a0, a0, a0, a, A"Aa", a);N
N
	a a [0] = a0;N
	a a [0] = a;N
N
	a0 = a0 - 0.0 * a;N
	a0 = a0 - a;N
	a = (a0 + a0) / 0.0;N
	a0 = a + a [0];N
	a0 = a0 - 0.0 * a [0]; // a a aN
	a_aAa (a, a0, a0, a0, a0, a, A"Aa", a);N
N
	a a [0] = a0;N
	a a [0] = a;N
N
	a a a = a [0] / 0.0;N
	a a a = a - a, a = (a + a) / 0.0;N
	a a a = a;N
N
	a_aAa (a, a, a, a, a, a, 0.0);N
	a_a (a);N
N
	a (a_a)N
		*a_a = a;N
}N
N
a AaAa_a (AaAa a, Aa a) {N
	a a a = 0.0, a0 = 0.0, a = 0.0, a = 0.0, a = 0.0, a = 0.0;N
N
	Aa_aAa (a);N
	Aa_aAa (a, a, a, a, a);N
	Aa_aAaAa (a, Aa_A, Aa_A);N
	a a;N
	AaAa_a_a (a, a, a, a0, a, a, a, & a);N
N
	Aa_a (a, a0, a, a, a);N
	Aa_aAa (a);N
}N
N
a AaAa_aAaAa (AaAa a) {N
	a a aAa = AaAa_aAaAa (a a.a());N
	a 0.0 / ( a (aAa) && aAa != 0.0 ? aAa : a a - a a );N
}N
N
a aAaAa AaAa_a_AaAa_a (AaAa a, AaAa a, a aAa) {N
	a {N
		aAaAa a = AaAa_a_AaAa (a);N
		a (! a)N
			a a;N
		a a = 0;N
		a (a a = 0; a <= a a; a ++) {N
			a a a = a a [a - 0];N
			a a a = a a [a] - a a [a - 0];N
			a (a < aAa && a -> a.a > 0) {N
				a a a = AaAa_aAaAaAa (a, a);N
				a (a (a)) {N
					// aA0 = a0 * (0 + (a / 0) * (a ... + ...));N
					a a aAa = a / (0.0 + (a / 0.0) * (a (A0a * 0.0 * a) + a (A0a * 0.0 * a) + a (A0a * 0.0 * a)));N
					a += aAa - a;N
				}N
			}N
			a a [a] += a;N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a AaAa a.");N
	}N
}N
N
aAa AaAa_a_Aa_a (AaAa a, a aAa) {N
	a {N
		aAa a = Aa_aAaAa (a a, a a, aAa);N
N
		// Aa a a a a a a a-a a a a a aN
		// a a a a a-a, a.a. a [a] = a [a] + (0.0 * a [a-0])N
		a a = 0.0;N
		a (a aAa -> a.a > 0) {N
			a (a a = 0; a <= a a; a ++) {N
				a a a = a a0 + (a - 0) * a a;N
				a a = AaAa (-0.0, 0.0);N
				a a a = A_a_A (AaAa_aAaAaAa (a aAa.a(), a));N
				a (a (a)) {N
					a a [0] [a] = a = a + 0.0 * a;N
					a = (a += 0.0 * a); // a a-aN
					a a [0] [a] = a * a;N
				}N
			}N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a Aa a.");N
	}N
}N
N
a a Aa_AaAa_aAa_a (Aa a, AaAa a) {N
	a (a aAa -> a.a > 0) {N
		/* Aa aN
			Aa a [a] = a * a [a] + a * a [a-0] => A(a) = a / (0 - a^(-0)).N
			Aa a a, a.a. a-a. Aa 0 <= a <= 0.N
			|A(a)| = a / a (0 - 0*a*a(0*a*a*A) + a^0),N
			|A(0)|= a /(0 - a) => a |A(0)| == 0, a a = 0 - a.N
			Aa a 0 a|A(A)|= -a (a A=0 aAa a a > 0)N
			Aa: a a = (0 - A * a(0*a*A*A)) / (0 - A), a A = 0^(-a/0)N
				a a = a -a(a^0 - 0)N
		*/N
N
		a a a = a (A0a * 0.0 * a a); // aAa > 0.0 !N
		a a0 = 0.0;N
N
		a (a a = 0; a <= a a; a ++) {N
			a a a = a a0 + (a - 0) * a a;N
			a a a_a = AaAa_aAaAaAa (a aAa.a(), a);N
N
			a (a_a > 0) {N
				a a a = a (0.0, -a_a / 0.0);N
				a a a = (0.0 - a * a) / (0.0 - a);N
				a a a = a - a (a * a - 0.0);N
				a a a = 0.0 - a;N
				a a [0] [a] = a * a a [0] [a] + a * a0;N
				a0 = a a [0] [a];N
			}N
		}N
	}N
}N
N
a a_a {N
	a a;N
	a a;N
	a a;N
};N
N
a a a (a a, a *a, a *a, a *a) {N
	a a a_a *a = (a a_a *) a;N
	a a a = a -> a + a -> a * a;N
	a a a = a -> a - a -> a;N
	*a = a (a, a) - (a -> a + a -> a * a) / a;N
	*a = a * a (a, a - 0) - a -> a * a / (a * a);N
}N
N
a a a_aAa_a (a a, a a, a aAa) {N
	a a = a;N
	/*N
	Aa [0,0]:N
	Aa a a a a a:N
	A(a) = a^a - a^a               0<= a <= a, a a > aN
			(a^a - a^a)a(-a(a-a))  a >= a, a a = 0 / aAaN
	Aa a a a a a a a a a a a a a a a a a.N
	A.a. a a a a a^(a-0) - a a^(a-0) = (a^a-a^a)(-a).N
	Aa a a a: a a a (0,0) a a(a) = a^(a-a) - (a+a)/(a+a) == 0.N
		Aa a - a == 0, a(a) a a a a a a(a)= a a^0 + (a-a) a - a == 0.N
	Aa a a a a a a Aa-Aa. Aa a a a a a a a:N
		a'(a)= (a - a)a^(a - a - 0)- a(a - a) / (a + a a)^0N
	*/N
	a (aAa <= 0.0)N
		a 0.0;N
	a a = 0.0 / aAa;N
	a (a - a == 0.0) {N
		a a a = a - a;N
		a a a = - a;N
		a a0, a0;N
		a a = AaAaAa (a, a, a, &a0, &a0);N
		a (a == 0)N
			a = a0;N
		a a (a == 0)N
			a = a0;N
	} a { // Aa-AaN
		// a a a a a a a a a a a a 0N
		a a aAa = a (a / a, 0.0 / (a - a));N
		a a_a a = {a, a, a};N
		a a;N
		Aa (& a, aAa, 0.0, & a, & a);N
		a = a;N
	}N
	a a;N
}N
N
aAaAa AaAa_a_AaAa (AaAa a) {N
	a {N
		a aAaAa = 0;N
		a AaAaAaAa a = a a.a();N
N
		AaAa_aAaAa (a);N
		Aa_a (a a -> a.a > 0,N
			A"Aa a a a a a.");N
N
		a (a -> aAa == 0.0)N
			a -> aAa = AaAa_aAaAa (a);N
N
		aAaAa a = AaAa_a_AaAa_a (a a.a(), ( a -> a ? a a.a() : a ), a -> aAa);N
N
		aAaAa a = AaAa_a (a a, a a);N
N
		/*N
		Aa a a a a a a AaAa. Aa a a a a.N
		Aa a a a a a a a a a a a a a A a a a a.N
		Aa a a a [a]:N
			Aa a a0 -> a A [a]N
			Aa a a [a]-A [a] a a a, a0, a0, a a.N
			Aa a a.N
		*/N
N
		a (a a = 0; a <= a -> a; a ++) {N
			a a = 0.0, a = a -> a [a];		// a a "a" aN
			a aAa = 0.0;        // Aa a a a a a aN
			a aAa = 0.0;        // Aa a a a a a aN
N
			a a = AaAa_aAaAaAa (a.a(), a, a -> aAa);N
			a (a (a))N
				a = 0.0 * a -> aAa;   // a a aN
N
			// Aa a a a a a a a:N
			// Aa a a a a .N
N
			a aAa = a - a;N
			a aAa = ( a -> aAa ? AaAa_aAaAaAa (a aAa.a(), aAa) : 0.0 );N
			a (a (aAa))N
				aAa = 0.0;N
			a a0 = ( a -> aAa == 0 ? AaAa_aAaAaAa (a a0.a(), aAa) : a -> aAa );N
			a (a (a0))N
				a0 = AaAa_A0_A;N
			a a0 = ( a -> aAa == 0 ? AaAa_aAaAaAa (a a0.a(), aAa) : a -> aAa + 0 );N
			a (a (a0))N
				a0 = AaAa_A0_A;N
			a {N
				a = a_aAa_a (a0, a0, aAa);N
			} a (AaAa) {N
				Aa_a (A"Aa a a a a = ", a, A" (a0=", a0, A", a0=", a0, A"aAa=", aAa, A")");N
			}N
N
			a aAa = AaAa_aAaAaAa (a aAa.a(), aAa);N
			a (a (aAa))N
				aAa = AaAa_A_A;N
N
			a a a = a * a * aAa;N
N
			// Aa a a a a a a a.N
			// A a a a a a a a a a a.N
			// Aa a a a a a a a a a a a a.N
			// Aa aAa a a a a a a a a a.N
N
			a aAa = ( a -> aAa ? AaAa_aAaAaAa (a aAa.a(), aAa) : 0.0 );N
			a (a (aAa))N
				aAa = 0.0;N
			a (aAa > 0.0) {N
				aAaAa ++;N
				a (aAaAa % 0 == 0) {   // a a-a aN
					a aAa = AaAa_aAaAaAa (a.a(), a + 0, a -> aAa);N
					a (a (aAa))N
						aAa = a;N
					a aAa0 = AaAa_A_A;N
					a (a aAa -> a.a > 0)N
						aAa0 = AaAa_aAaAaAa (a aAa.a(), a);N
					a a aAa = a * (0.0 - aAa0);N
					aAa = aAa * aAa;N
					aAa *= 0.0 - aAa;N
				}N
			} aN
				aAaAa = 0;N
N
			a += aAa;N
			aAaAa aAa = AaAa_a (a, a, aAa, aAa, a, a0, a0, aAa);N
			AaAa_aAa_a (a.a()->aAaAa(), aAa.a());N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a.");N
	}N
}N
N
a aAa AaAa_AaAa_a_Aa_a (AaAa a, AaAa a, a aAa) {N
	a {N
		a AaAaAaAa a = a a.a();N
		a aAa = a;N
N
		Aa_a (a aAa -> a.a > 0,N
			A"Aa a a a a a a.");N
N
		aAa a = Aa_aAaAa (a a, a a, aAa);N
		aAa a;N
		a (a -> a && a aAa -> a.a > 0)N
			a = Aa_aAaAa (a a, a a, aAa);N
N
		/*N
			Aa a a a a a AaAa. Aa a a a a.N
			Aa a a a a a a a a a a a a a A a a a a.N
			Aa a a a [a]:N
				Aa a a0 -> a A [a]N
				Aa a a [a]-A [a] a a a, a0, a0, a a.N
				Aa a a.N
		*/N
		A a = a a.a (0);N
		a (a a = 0; a <= a a.a; a ++) {N
			AaAa a = a a.a [a];N
			a a a = a -> a;		// a a "a" aN
			a a a = a -> a;N
			a a a = a -> a; // a a a a aN
			a a aAa = a -> aAa;N
			a a aAa = a -> aAa;N
			a a aAa = a -> aAa;        // Aa a a a a a aN
			a a a0 = a -> a0, a0 = a -> a0;N
			a a;                 // 0..0N
			a a;N
N
			//- a a = aAa * (a0 + a0 + 0.0) / (a0 - a0);N
			//- a /= a * aAa;N
N
			// Aa a A(a) = a^a - a^a a a a a A'(a) = a a^(a-0) - a a^(a-0) == 0,N
			//	a.a. (a/a) = a^(a-a), a a = (a/a)^(0/(a-a))N
			//	A(a) = a^a (0-a^(a-a)) = (a/a)^(a/(a-a))(0-a/a)N
N
			a a a = aAa / (a (a0 / a0, 0.0 / (a0 / a0 - 0.0)) * (0.0 - a0 / a0));N
N
			// Aa a a a a a a a a a a.N
N
			a aAa = Aa_aAaAaAa (a.a(), a), aAa;N
			aAa = aAa - Aa_a (a / a a);N
			a (aAa < 0)N
				aAa = 0;N
			a (aAa > a a)N
				aAa = a a;N
			a (a a = aAa; a <= aAa; a ++) {N
				a a a = a a0 + (a - 0) * a a;N
				a = (a - (a - a)) / (a * aAa);N
				a (a > 0.0) {N
					a = a * (a (a, a0) - a (a, a0));N
					a (a == 0) {N
						aAa = a;    // Aa a aN
						a;N
					}N
					a [a] += a;N
N
					// Aa a a a a a a a aN
					a (a) {N
						a a = a * AaAa (-0.0, 0.0);N
						a a = AaAa_aAaAaAa (a aAa.a(), a);N
						a -> a [0] [a] += a * A_a_A (a);N
					}N
				}N
			}N
N
			// Aa a a a a a a a.N
N
			a = a / (a * aAa);N
N
			//- a a = a * (a * aAa) * (a (a, a0) - a (a, a0));N
N
			a = a * (a (a, a0) - a (a, a0));N
N
			// Aa a a a a a a a a a a.N
N
			a (a > 0.0) {N
				a a a = aAa * (a * aAa);N
				a a aAaAa = a (- a a / a);N
				a a = a * a (- (a a0 + aAa * a a - a) / a);N
				a aAa = aAa + Aa_a (0.0 * a / a a);N
				a (aAa > a a)N
					aAa = a a;N
				a (a a = aAa + 0; a <= aAa; a ++) {N
					a [a] += a;N
					a *= aAaAa;N
				}N
			}N
		}N
N
		// Aa a a a a a a a aN
		a (a -> aAa) {N
			a a a = Aa_aAaAa (a.a(), 0.0, 0.0, Aa_A_A_A);N
			a (a (aAa))N
				aAa = 0.0;N
			a (a a = 0; a <= a a; a ++) {N
				a a a = a a [0] [a];N
				a a [0] [a] -= aAa;N
				aAa = a;N
			}N
			Aa_a (a.a(), a);N
		}N
N
		a (a a = 0; a <= a a; a ++) {N
			a a a = a a0 + (a - 0) * a a;N
			a a [0] [a] *= A_a_A (AaAa_aAaAaAa (a aAa.a(), a));N
			a (a)N
				a a [0] [a] += a -> a [0] [a];N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a Aa a.");N
	}N
}N
N
a aAa AaAa_a_Aa_a (AaAa a, a aAa) {N
	a {N
		aAaAa a = AaAa_a_AaAa (a);N
		a AaAa_AaAa_a_Aa_a (a, a.a(), aAa);N
	} a (AaAa) {N
		Aa_a (a, A": a a Aa a.");N
	}N
}N
N
a aAa AaAa_a_Aa (AaAa a, AaAa a, a aAa) {N
	a {N
		AaAaAaAa a = a a.a();N
		aAa a;N
		a (a -> a) {N
			a (a && a a -> a.a > 0)N
				a = AaAa_AaAa_a_Aa_a (a, a a.a(), aAa);N
			aN
				a = AaAa_a_Aa_a (a, aAa);N
			a (a -> aAa)N
				Aa_AaAa_aAa_a (a.a(), a);N
		}N
		a (a -> a) {N
			aAa a = AaAa_a_Aa_a (a, aAa);N
			a (a)N
				_Aa_a_a (a.a(), a.a());N
			aN
				a = a.a();N
		}N
		a (! a)N
			a = Aa_aAaAa (a a, a a, aAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a Aa a.");N
	}N
}N
N
a a aAa_a (AaAa<aAaAa>* a, a a, a a, a aAaAa) {N
	a {N
		a (a a = 0; a <= aAaAa; a ++) {N
			aAaAa a = AaAa_a (a, a);N
			a -> aAa_a (a.a());N
		}N
	} a (AaAa) {N
		Aa_a (A"Aa a a a.");N
	};N
}N
N
/********************** AaAaAaAaAa **********************/N
N
Aa_a (AaAaAaAaAa, Aa, 0);N
N
a a AaAaAaAaAa_aAa (AaAaAaAaAa a, AaAaAa a) {N
	a aAa = aAaAaAaAa::Aa;N
	a aAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAa = 0;N
	a aAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAa = 0;N
	a aAaAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAaAa = 0;N
}N
N
aAaAaAaAaAa AaAaAaAaAa_a () {N
	a {N
		aAaAaAaAaAa a = Aa_a (AaAaAaAaAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAaAaAa a a.");N
	}N
}N
N
/********************** AaAaAa ***************************************/N
N
a a AaAa_aAaAaAaAa (AaAa a, a a) {N
	a (a < 0 || a > a a.a)N
		a -0;N
	a AaAa a = a a.a [a];N
	a a -> a.a;N
}N
N
a a AaAa_aAaAaAaAa (AaAa a, a a) {N
	a (a < 0 || a > a a.a)N
		a -0;N
	a AaAa a = a a.a [a];N
	a a -> a.a;N
}N
N
a a Aa_aAaAaAaAa (AaAa<aAaAa>* a, a a) {N
	a (! a || a < 0 || a > a a)N
		a -0;N
	a AaAa a = a a [a];N
	a a -> a.a;N
}N
N
a a AaAa_a (AaAa a, AaAa<aAaAa>* a, a0 a0, a0 a0) {N
	a a a = a a.a;N
	a a a = ( a ? a->a : 0 );N
	a a a = a::a (a, a);N
N
	a (a a = 0; a <= a; a ++) {N
		AaAa_aAa (a0, A"Aa ", a, A":");N
		a (a <= a a.a) {N
			a a a = AaAa_aAaAaAaAa (a, a);N
			a a a = AaAa_aAaAaAaAa (a, a);N
			AaAa_aAa (a0, A"a:   ", ( a >= 0 ? Aa_a (a) : A"--a--" ));N
			AaAa_aAa (a0, A"a: ", ( a >= 0 ? Aa_a (a) : A"--a--" ));N
		}N
		a (a) {N
			a a a = Aa_aAaAaAaAa (a, a);N
			AaAa_aAa (a0, A"a: ", ( a >= 0 ? Aa_a (a) : A"--a--" ));N
		}N
	}N
}N
N
a aAaAaAa :: a_a () {N
	a aAa :: a_a ();N
	a a0 a0 = A"  ", a0 = A"    ", a0 = A"      ";N
	AaAa_aAa (a0, A"Aa a:");N
	AaAa_aAa (a0, A"Aa a:     ", a a, A" a");N
	AaAa_aAa (a0, A"Aa a:       ", a a, A" a");N
	AaAa_aAa (a0, A"Aa a: ", a a - a a, A" a");N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), & a a_a_a, a0, a0);N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), & a a_a_a, a0, a0);N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), a, a0, a0);N
}N
N
Aa_a (AaAaAa, Aa, 0);N
N
a AaAaAa_aAa (AaAaAa a) {N
	Aa_aAa (a a_a.a(), A"a_a");N
	Aa_aAa (a a_a.a(), A"a_a");N
	Aa_aAa (a a_a.a(), A"a_a");N
	//Aa_aAa (a a_a_a.a(), A"a_a_a");N
	//Aa_aAa (a a_a_a.a(), A"a_a_a");N
}N
N
aAaAaAa AaAaAa_a (a a, a a, a aAaAa, a aAaAaAa, a aAaAaAaAa) {N
	a {N
		aAaAaAa a = Aa_a (AaAaAa);N
		Aa_a (a.a(), a, a);N
		a a_a = AaAa_aAa (a, a, aAaAa);N
		a a_a = AaAa_aAa (a, a, aAaAaAa);N
		a a_a = AaAa_aAa (a, a, aAaAaAaAa);N
		aAa_a (& a a_a_a, a, a, aAaAa);N
		aAa_a (& a a_a_a, a, a, aAaAaAa);N
		a a = AaAaAaAaAa_a ();N
		AaAaAa_aAa (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAa a a.");N
	}N
}N
N
a a AaAaAa_AaAa_aAa_a (AaAaAa a, AaAa a, Aa a, a a, a a, a a, a a, a *a_a, a *a_a) {N
	a a aAaAaAa = a a_a -> a.a;N
	a a aAaAaAa = a a_a -> a.a;N
	a a aAaAaAaAa = a a_a -> a.a;N
	a a aAaAaAa = ( a ? a a_a -> a.a : 0 );N
	a a aAaAaAaAa = ( a ? a a_a -> a.a : 0 );N
	a a a0 = a, a0 = a, a = 0.0, a = (a0 + a0) / 0.0;N
	a a0 a [0] = { 0, A"A", A"A", A"A", A"A", A""};N
	a a a [0] = { 0, aAaAaAa, aAaAaAaAa, aAaAaAa, aAaAaAaAa, aAaAaAa };N
	a a aAaAa = 0;N
	a a = 0;N
	aAaAa a, a;N
N
	a a aAaAa = aAaAaAa + aAaAaAaAa + aAaAaAa + aAaAaAaAa + aAaAaAa;N
	a a a = (a - a) / (aAaAa + (a - 0) * a);N
N
	a a0, a0;N
	a (aAaAa == 0) {N
		a0 = a;N
		Aa_a (a, a, a, a0, a);N
		a a;N
	}N
N
	a (a a = 0; a <= aAaAa; a ++)N
		a (a [a] > 0)N
			a ++;N
N
	a0 = a;N
	a (a a = 0; a <= aAaAa; a ++) {N
		a a aAaAa = a [a];N
N
		a (aAaAa == 0)N
			a;N
N
		a0 = a0 + a;N
		a (a a = 0; a <= aAaAa; a ++) {N
			AaAa_a (& a, A"A", a);N
			AaAa_a (& a, A"A", a);N
			a_aAa (a, a0, a0, a0, a0, a [a], a.a, a.a);N
N
			a (a < aAaAa) {N
				a0 = a0;N
				a0 = a0 + a;N
			}N
		}N
N
		a (a < aAaAa) {N
			a0 = a0;N
			a0 = a0 + a * a;N
			Aa_a (a, a0, a, a0, a);N
			a0 = a0;N
		}N
	}N
a:N
	a (a_a)N
		*a_a = a;N
	a (a_a)N
		*a_a = a;N
}N
N
a a AaAaAa_AaAa_aAa_a (AaAaAa a, AaAa a, Aa a, a a, a a, a a, a a, a a, a *a_a, a *a_a) {N
	// (0: a) (0: a. a a a) (0: a a a) (0: a) (0: a a a)N
	// (0: a a a) (0: a) (0: a a a) (0: a)N
	a a [0] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };N
	a a aAaAa = 0, aAaAa = 0;N
	a a aAaAaAa = a a_a -> a.a;N
	a a aAaAaAa = a a_a -> a.a;N
	a a aAaAaAa = ( a ? a a_a -> a.a : 0 );N
	a a aAaAa = aAaAaAa + aAaAaAa + aAaAaAa;N
	a a aAaAaAaAa = aAaAaAa + ( aAaAaAa > 0 ? 0 : 0 );N
	a a aAaAaAaAa = aAaAa - aAaAaAaAa;N
	a a0 a [0] = { a, A"Aa", A"", A"", A"Aa" };N
	a a a [0] = { 0, 0, 0, 0, 0 };N
	a a a [0] = { 0, aAaAaAa, ( aAaAaAa > 0 ? 0 : 0 ), aAaAaAa, aAaAaAa };N
	aAaAa a;N
	a a [0];N
	a_a_a (a, a, aAaAa, a - a);N
N
	a a0, a0;N
	a (aAaAa == 0) {N
		a0 = a0 = (a + a) / 0.0;N
		Aa_a (a, a, a0, a, a0);N
		a (a_a)N
			*a_a = a0;N
		a (a_a)N
			*a_a = a0;N
		a;N
	}N
N
	a a a = ( a < 0 ? 0.0 : a);N
	a = (a - a) / (aAaAa * (0.0 + a) - a);N
N
	a a a_a = a_a (aAaAa);N
	a a a_a = a_a (aAaAa);N
N
	// a aN
	a a0 = a + a [0];N
	a a0 = a0 + a [0];N
	a0 = a;N
	a a0 = a + a [0];N
	a a = 0;N
	a (a a = 0; a <= aAaAa; a ++) {N
		a a a = a [a], a = a [a];N
		a (a < a)N
			a;N
		a (a a = a; a <= a; a ++) {N
			a0 = a0 - a;N
			a a a = (a0 + a0) / 0.0;N
			a a0 a = Aa_a (a);N
			AaAa_a (& a, A"A", a, A" A", a, A" A", a);N
			a_aAa (a, a0, a0, a0, a0, a [a], a.a, a);N
			Aa_a (a, a0, a, a0, a); // a a aN
			a ++;N
			a_a -> a [a] = a0;N
			a_a -> a [a] = a0;N
			a_a -> a [a] = a_a -> a [a] = a;N
			a0 = a0 - 0.0 * a;N
		}N
	}N
N
	a = 0;N
	a0 = a_a -> a [0];N
	a (aAaAaAaAa > 0) {N
		a0 = a_a -> a [aAaAaAaAa];N
		a0 = a_a -> a [aAaAaAaAa];N
		a (aAaAaAaAa > 0)N
			Aa_a (a, a0, a0, a_a -> a [0], a_a -> a [0]);    // aN
		a0 = a;N
		a (aAaAaAaAa > 0)N
			a0 += a [0];N
		Aa_a (a, a0, a0, a0, a0); // aN
	}N
	a (aAaAaAaAa > 0) {N
		a a a = aAaAaAaAa + 0;N
		a0 = a_a -> a [a];N
		a0 = a_a -> a [a];   // a a aN
		a (aAaAaAaAa > 0)N
			Aa_a (a, a0, a0, a_a -> a [aAaAa], a_a -> a [aAaAa]);    // aN
		a0 = a + a [0]; // a a aN
		Aa_a (a, a0, a0, a0, a0); // a a a aN
		a0 = a + a [0]; // a a aN
		a_aAa (a, a0, a0, a0 + 0.0 * a, a0 - 0.0 * a, A"Aa-a", a, a);N
		a0 = a0;N
		a (aAaAaAaAa > 0) {N
			a0 = a + a [0];N
			a0 = a0;   // a aN
			Aa_a (a, a0, a0, a0, a0); // a aN
			a0 += (0 + a) * a;N
			Aa_a (a, a0, a0, a0, a0); // aN
			a0 -= 0.0 * (0.0 + a) * a;N
		}N
		Aa_a (a, a, a0, a0, a0);N
	}N
N
	a a a = a [0] / 0.0;N
	a0 = a - a;N
	a0 = (a + a) / 0.0;N
N
	aAa_aAa (a, a0, a0, a, a_a, a, 0.0);N
N
	a_a (a_a);N
	a_a (a_a);N
N
	a (a_a)N
		*a_a = a0;N
	a (a_a)N
		*a_a = a0;N
}N
N
a a AaAaAa_AaAa_a_a (AaAaAa a, AaAa a, Aa a, aAaAaAaAa aAa, a a, a a, a a, a a, a a, a *a_a, a *a_a) {N
	a (aAa == aAaAaAaAa::Aa)N
		AaAaAa_AaAa_aAa_a (a, a, a, a, a, a, a, a_a, a_a);N
	a a (aAa == aAaAaAaAa::Aa)N
		AaAaAa_AaAa_aAa_a (a, a, a, a, a, a, a, a, a_a, a_a);N
	aN
		;// Aa aN
}N
N
a a AaAaAa_AaAa_a (AaAaAa a, AaAa a, Aa a, aAaAaAaAa aAa) {N
	a a a = 0.0, a0 = 0.0, a0 = 0.0, a = 0.0, a = 0.0, a = 0.0, a = 0.0;N
N
	Aa_aAa (a);N
	Aa_aAa (a, a, a, a, a);N
	Aa_aAaAa (a, Aa_A, Aa_A);N
	Aa_aAaAa (a, 0);N
	a a, a;N
	AaAaAa_AaAa_a_a (a, a, a, aAa, a0, a0, a, a, a, & a, & a);N
	Aa_a (a, a, a, a0, a);N
	Aa_a (a, a0, a, a, a);N
	Aa_aAa (a);N
}N
N
a aAa Aa_AaAaAa_AaAa_a_a (Aa a, AaAaAa a, AaAa a) {N
	a {N
		a AaAaAaAaAa a = a a.a();N
		a AaAaAaAa a = a -> a.a();N
		a a aAaAaAa = a -> a && a && a -> a && a -> a -> a.a > 0;N
		a AaAa a_a = a a_a.a();N
		a AaAa a_a = a a_a.a();N
		a AaAa a_a = a a_a.a();N
		a AaAa a_a = a -> a_a.a();N
		a AaAa a_a = a -> a_a.a();N
N
		a a aAaAa = a_a -> a.a;N
		a a aAaAaAa = a_a -> a.a;N
		a a aAaAaAaAa = a_a -> a.a;N
		a a aAaAaAa = a_a -> a.a;N
		a a aAaAaAaAa = a_a -> a.a;N
		a_a (aAaAa, & a -> aAaAa, & a -> aAaAa);N
		a_a (aAaAaAa, & a -> aAaAa, & a -> aAaAa);N
		a_a (aAaAaAa, & a -> aAaAa, & a -> aAaAa);N
		a_a (aAaAaAaAa, & a -> aAaAaAa, & a -> aAaAaAa);N
		a_a (aAaAaAaAa, & a -> aAaAaAa, & a -> aAaAaAa);N
N
		aAa a = Aa_a (a);N
N
		aAaAa a;N
		a (aAaAaAa) {N
			a = Aa_a (a a_a.a());N
			AaAa_AaAa_aAaAa (a.a(), a);N
		}N
N
		a a_a_a = 0, a_a = 0;N
		a (a -> aAaAa > 0) {   // a aN
			a (a a = a -> aAaAa; a <= a -> aAaAa; a ++) {N
				a (AaAa_aAaAa (a a_a.a(), a)) {N
					_Aa_AaAa_aAaAaAa_a (a.a(), a a_a.a(), a, a);N
				} a {N
					// Aa_a ("Aa a", a, ": a a/a a a.");N
					a_a_a ++;N
					a_a ++;N
				}N
			}N
		}N
N
		a a_a_a = 0;N
		a (a -> aAaAaAa > 0) {   // a aN
			a (a a = a -> aAaAaAa; a <= a -> aAaAaAa; a ++) {N
				a (AaAa_aAaAa (a a_a.a(), a)) {N
					_Aa_AaAa_aAaAaAa_a (a.a(), a a_a.a(), a, a);N
				} a {N
					// Aa_a ("Aa a", a, ": a a/a a a.");N
					a_a_a ++;N
					a_a ++;N
				}N
			}N
		}N
N
		a a_a_a = 0;N
		a (a -> aAaAa > 0) {   // a aN
			a (a a = a -> aAaAa; a <= a -> aAaAa; a ++) {N
				a (AaAa_aAaAa (a_a, a)) {N
					_Aa_AaAa_aAaAaAa_a (a.a(), a_a, a, a);N
				} a {N
					// Aa_a ("Aa a", a, ": a a/a a a.");N
					a_a_a ++;N
					a_a ++;N
				}N
			}N
		}N
N
		a a_a_a = 0;N
		a (a -> aAaAaAa > 0) {   // a aN
			a (a a = a -> aAaAaAa; a <= a -> aAaAaAa; a ++) {N
				a (AaAa_aAaAa (a_a, a)) {N
					_Aa_AaAa_aAaAaAa_a (a.a(), a_a, a, a);N
				} a {N
					// Aa_a ("Aa a", a, ": a a/a a a.");N
					a_a_a ++;N
					a_a ++;N
				}N
			}N
		}N
N
		a a_a_a = 0;N
		a (a -> aAaAa > 0) {   // a aN
			a (! a)N
				a = Aa_a (a a_a.a());N
N
			a (a a = a -> aAaAa; a <= a -> aAaAa; a ++) {N
				a (AaAa_aAaAa (a.a(), a)) {N
					_Aa_AaAa_aAaAaAa_a (a.a(), a.a(), a, a);N
				} a {N
					// Aa_a ("Aa a", a, ": a a/a a a.");N
					a_a_a ++;N
					a_a ++;N
				}N
			}N
		}N
		a (a_a > 0)N
		{N
			aAaAa a;N
			a (a_a_a > 0)N
				AaAa_a (& a, A"\aAa a: a a a a a.\a");N
			a (a_a_a)N
				AaAa_a (& a, A"\aAa a: a a a a a.\a");N
			a (a_a_a)N
				AaAa_a (& a, A"\aAa a: a a a a a.\a");N
			a (a_a_a)N
				AaAa_a (& a, A"\aAa a: a a a a a.\a");N
			a (a_a_a)N
				AaAa_a (& a, A"\aAa a: a a a a a.\a");N
			AaAa_a (A"\aAa:\a", a.a);N
			AaAa_a ();N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a a a.");N
	}N
}N
N
a aAa Aa_AaAaAa_AaAa_a_a (Aa a, AaAaAa a, AaAa a) {N
	a {N
		a AaAaAaAaAa a = a a.a();N
		a AaAaAaAa a = a -> a.a();N
		aAa a;N
		AaAa a_a = a a_a.a();N
		aAaAa a;N
		a aAa = 0; // 0: a a a a a a a a a, 0/-0 a aN
		a a aAaAaAa = a -> a && a -> a && a -> a -> a.a > 0;N
		a a = 0;N
		a a aAaAa = a a_a -> a.a;N
		a a aAaAaAa = a a_a -> a.a;N
		a a aAaAaAa = a -> a_a -> a.a;N
N
		a_a (aAaAa, & (a -> aAaAa), & (a -> aAaAa));N
		a_a (aAaAaAa, & (a -> aAaAa), & (a -> aAaAa));N
		a_a (aAaAaAa, & (a -> aAaAa), & (a -> aAaAa));N
N
		a (aAaAaAa) {N
			a = Aa_a (a a_a.a());N
			a_a = a.a();N
			AaAa_AaAa_aAaAa (a_a, a);N
		}N
N
		a (a -> aAaAa > 0) {N
			a (a -> aAaAa == 0) {N
				a = Aa_a (a);N
				a (a_a -> a.a > 0)N
					Aa_AaAa_Aa_aAaAaAa_a (a.a(), a_a, & a a_a_a, 0);N
			}N
		}N
N
		a (a -> aAaAa > 0) {N
			aAa = 0;N
			aAa a = Aa_AaAa_Aa_a (a, a a_a.a(), & a a_a_a, a -> aAaAa, a -> aAaAa, aAa);N
N
			a (! a)N
				a = Aa_a (a.a());N
			aN
				_Aa_a_a (a.a(), a.a());N
		}N
N
		// Aa 0 a a, a a a.N
		// Aa a a-a a a.N
		// Aa (0) a a a a a a a a a a a a a a-aN
		// a a a. Aa a a a a a a a a a a A0 a a aN
		// a a a.N
N
		aAa a_a = _Aa_a (a, a);N
N
		a (a -> aAaAa >= 0) {N
			a a aAaAa0 = ( a -> aAaAa > 0 ? a -> aAaAa : 0 );N
			aAa = ( aAaAa0 % 0 == 0 ? -0 : 0 );   // 0 a a a aN
			a (aAaAa0 <= a_a -> a.a) {N
				aAa aAa = Aa_AaAa_Aa_a (a_a.a(), a_a, & a a_a_a, aAaAa0, a -> aAaAa, aAa);N
N
				a (! a)N
					a = Aa_a (aAa.a());N
				aN
					_Aa_a_a (a.a(), aAa.a());N
			}N
		}N
N
		a (a -> aAaAa > 0) {   // a aN
			aAa = 0;N
			aAa a = Aa_AaAa_Aa_a (a_a.a(), a -> a_a.a(),N
				& a -> a_a_a,N
				a -> aAaAa, a -> aAaAa, aAa);N
N
			a (! a)N
				a = Aa_a (a.a());N
			aN
				_Aa_a_a (a.a(), a.a());N
		}N
N
		a (! a)N
			a = Aa_a (a);N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a a a.");N
	}N
}N
N
aAa Aa_AaAaAa_AaAa_a (Aa a, AaAaAa a, AaAa a) {N
	a a a -> aAa == aAaAaAaAa::Aa ?N
	       Aa_AaAaAa_AaAa_a_a (a, a, a) :N
	       Aa_AaAaAa_AaAa_a_a (a, a, a);N
}N
N
/********************** AaAaAaAa **********************/N
N
Aa_a (AaAaAaAa, Aa, 0);N
N
a a AaAaAaAa_aAa (AaAaAaAa a, AaAa a) {N
	a aAa = 0.0;N
	a a = 0;N
	a aAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAa = 0;N
	a aAaAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAaAa = 0;N
	a aAaAa = 0;N
	a aAaAa = a a_a -> a.a;N
	a aAaAa = 0;N
	a aAaAa = a a_a -> a.a;N
}N
N
aAaAaAaAa AaAaAaAa_a () {N
	a {N
		aAaAaAaAa a = Aa_a (AaAaAaAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAaAa a a.");N
	}N
}N
N
/********************** AaAa *************************************/N
N
Aa_a (AaAa, Aa, 0);N
N
a aAaAa :: a_a () {N
	aAa :: a_a ();N
	a0 a0 = A"  ", a0 = A"    ", a0 = A"      ";N
	AaAa_aAa (a0, A"Aa a:");N
	AaAa_aAa (a0, A"Aa a:     ", a, A" a");N
	AaAa_aAa (a0, A"Aa a:       ", a, A" a");N
	AaAa_aAa (a0, A"Aa a: ", a - a, A" a");N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), & a_a_a, a0, a0);N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), a, a0, a0);N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), a, a0, a0);N
}N
N
a AaAa_aAa (AaAa a) {N
	Aa_aAa (a a_a.a(), A"a_a");N
	Aa_aAa (a a_a.a(), A"a_a");N
	//Aa_aAa (a a_a_a.a(), A"a_a_a");N
	Aa_aAa (a a_a.a(), A"a_a");N
	Aa_aAa (a a.a(), A"a");N
}N
N
aAaAa AaAa_a (a a, a a, a aAaAaAa, a aAaAaAaAa, a aAaAaAa) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		Aa_a (a.a(), a, a);N
		a a_a = AaAa_aAa (a, a, aAaAaAa);N
		a a_a = AaAa_aAa (a, a, aAaAaAaAa);N
		aAa_a (& a a_a_a, a, a, aAaAaAa);N
		a a_a = AaAa_aAa (a, a, aAaAaAa);N
		a a = AaAa_a (a, a);N
		a a = AaAaAaAa_a ();N
		AaAa_aAa (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
/********************** AaAa & AaAa *************************************/N
N
a AaAa_AaAa_aAaAa (AaAa a, AaAa a) {N
	a {N
		AaAaAaAa a = a a.a();N
		a (a a = 0; a <= a a_a -> a.a; a ++) {N
			AaAa a = a a_a -> a.a [a];N
			a (a <= a a.a) {N
				a (a -> a.a > 0) {N
					aAaAa a = AaAa_aAaAa (a a.a [a], a, a a.a(), a -> aAa);N
					Aa_a (AaAa_aAaAa (a.a(), 0, a),N
						A"Aa ", a, A" a a a a a a.");N
					N
					a a. aAa_a (a.a(), a);N
				}N
			}N
			a = a a_a -> a.a [a];N
			a (a <= a a.a) {N
				a (a -> a.a > 0) {N
					aAaAa a = AaAa_aAaAa (a a.a [a], a, a a.a(), a -> aAa);N
					Aa_a (AaAa_aAaAa (a.a(), 0, a),N
						A"Aa ", a, A" a a a a.");N
					a a. aAa_a (a.a(), a);N
				}N
			}N
		}N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a a.");N
	}N
}N
N
/********************** AaAaAaAa **********************/N
N
Aa_a (AaAaAaAa, Aa, 0);N
N
a a AaAaAaAa_aAa (AaAaAaAa a, AaAa a) {N
	a aAaAa = a::a (a a_a -> a.a, a a_a -> a.a);N
	a aAaAa = 0;N
	a a = 0;N
}N
N
aAaAaAaAa AaAaAaAa_a () {N
	a {N
		aAaAaAaAa a = Aa_a (AaAaAaAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAaAa a a.");N
	}N
}N
N
/************************ AaAa (& Aa) *********************************************/N
N
a aAaAa :: a_a () {N
	aAa :: a_a ();N
	a a a0 *a0 = A"  ", *a0 = A"    ", *a0 = A"      ";N
	AaAa_aAa (a0, A"Aa a:");N
	AaAa_aAa (a0, A"Aa a:     ", a, A" a");N
	AaAa_aAa (a0, A"Aa a:       ", a, A" a");N
	AaAa_aAa (a0, A"Aa a: ", a - a, A" a");N
	AaAa_aAa (a0, A"\aAa a a a a A a:");N
	AaAa_aAa (a0, A"aAa:  ", aAa -> a.a);N
	AaAa_aAa (a0, A"a:              ", a -> a.a);N
	AaAa_aAa (a0, A"\aAa a a a a A A a:");N
	AaAa_a (a a_a.a(), & a a_a_a, a0, a0);N
}N
N
Aa_a (AaAa, Aa, 0);N
N
a AaAa_aAa (AaAa a) {N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a a_a.a(), A"a_a");N
	Aa_aAa (a a.a(), A"a");N
	//Aa_aAa (a a_a_a.a(), A"a_a_a");N
}N
N
aAaAa AaAa_a (a a, a a, a aAaAa) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		Aa_a (a.a(), a, a);N
		a aAa = AaAa_a (a, a);N
		a a_a = AaAa_aAa (a, a, aAaAa);N
		a a = AaAa_a (a, a);N
		aAa_a (& a a_a_a, a, a, aAaAa);N
		a a = AaAaAaAa_a ();N
		AaAa_aAa (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
a a AaAa_a_a (AaAa a, Aa a, a a, a a, a a, a a, a a, a *a) {N
	a a aAaAa = 0;N
	a a aAaAa = a a_a -> a.a;N
	a a aAaAa = aAaAa + ( aAaAa > 0 ? 0 : 0 ) ;   // 0..a + aN
	// a a, a, a, a, aN
	a a [0] = { 0.0, 0, 0.0, 0.0, 0.0, 0.0 }, a [0];N
	a a, a0, a0, a0, a0, a0, a, a, a = (a + a) / 0.0;N
N
	a_a_a (a, a, aAaAa, a - a);N
N
	a = a::a (a, 0.0);N
	a = (a - a) / (aAaAa * (0.0 + a) - a);N
N
	a a = a_a (aAaAa);N
	a (a == 0)N
		a;N
N
	// a 0N
	a0 = a;N
	a0 = a0 + a [0];N
	a0 = a - 0.0 * a;N
	a0 = a0 + a;N
	a_aAa (a, a0, a0, a0, a0, A"Aa", A"a", a);N
N
	// a 0, a a a, a aN
	a0 = a0;N
	a0 = a0 + a [0] / 0.0;N
	Aa_a (a, a0, a, a0, a);N
	Aa_a (a, a0, a - a / 0, a0, a + a / 0.0);N
	a0 = a0;N
	// a a a a 0 , a , a a aN
	a0 = a + a [0];N
	a0 = a0 + a [0];N
	a0 = a;N
	aAaAa a;N
	a (a a = 0; a <= aAaAa; a ++) {N
		a0 a = Aa_a (a + 0);N
		a0 = a0 - a;N
		a (a < aAaAa)N
			AaAa_a (& a, A"A", a, A" A", a, A" A", a);N
		aN
			AaAa_a (& a,  A"Aa");N
		a_aAa (a, a0, a0, a0, a0, a, a.a, a);N
		a a = (a0 + a0) / 0.0;N
		Aa_a (a, a0, a, a0, a); // a a a aN
		a -> a [a] = a0;N
		a -> a [a] = a;N
		a0 = a0 - 0.0 * a;N
	}N
N
	a = a [0] / 0.0;N
	a = a - a;N
	a = a;N
N
	a (aAaAa > 0)N
		aAa_aAa (a, a, a, a, a, 0, 0.0);N
	aN
		Aa_a (a, a -> a [0], a -> a [0], a + a, a);N
N
	a_a (a);N
N
	a (a)N
		*a = a;N
}N
N
a AaAa_a (AaAa a, Aa a) {N
	a a a = 0.0, a = 0.0, a0 = 0.0, a = 0.0, a = 0.0, a = 0.0;N
N
	Aa_aAa (a);N
	Aa_aAa (a, a, a, a, a);N
	Aa_aAaAa (a, Aa_A, Aa_A);N
	Aa_aAaAa (a, 0);N
N
	a a;N
	AaAa_a_a (a, a, a, a0, a, a, a, & a);N
N
	Aa_a (a, a0, a, a, a);N
	Aa_aAa (a);N
}N
N
aAa AaAa_a_Aa (AaAa a, a aAa) {N
	a {N
		aAa a = Aa_aAaAa (a a, a a, aAa);N
N
		a a = 0.0;N
		a (a a = 0; a <= a a; a ++) {N
			a a a = a a0 + (a - 0) * a a;N
			a a = AaAa (-0.0, 0.0);N
			a a = 0.0;N
			a (a aAa -> a.a > 0) {N
				a a a = AaAa_aAaAaAa (a aAa.a(), a);N
				a = ( a (a) ? A_a_A (a) : 0.0 );N
			}N
			a = (a += 0.0 * a); // A: a a-a a a a Aa a!N
			a a [0] [a] = a * a;N
		}N
N
		aAa a = Aa_AaAa_a (a.a(), a);N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a Aa a.");N
	}N
}N
N
/************************ Aa & AaAa *********************************************/N
N
aAa Aa_AaAa_a (Aa a, AaAa a) {N
	a {N
		a AaAaAaAa a = a a.a();N
		aAa a;N
		a a aAaAaAa = a a_a -> a.a;N
N
		a_a (aAaAaAa, & (a -> aAaAa), & (a -> aAaAa));N
N
		a (a -> aAaAa > 0) {N
			a a aAaAa0 = a -> aAaAa > 0 ? a -> aAaAa : 0;N
			a aAa = ( aAaAa0 % 0 == 0 ? 0 : -0 ); // 0 a a a aN
			a = Aa_AaAa_Aa_a (a, a a_a.a(), & a a_a_a, aAaAa0, a -> aAaAa, aAa);N
		}N
N
		a (! a)N
			a = Aa_a (a);N
N
		a (a -> a) {N
			a (a a = 0; a <= a a; a ++) {	// AaN
				a a a = a a0 + (a - 0) * a a;N
				a a = 0.0;N
				a (a a -> a.a > 0) {N
					a a a = AaAa_aAaAaAa (a a.a(), a);N
					a = ( a (a) ? 0.0 : A_a_A (a) );N
				}N
				a a [0] [a] += a a [0] [a] * a;N
			}N
		}N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
/********************** AaAaAaAa **********************/N
N
Aa_a (AaAaAaAa, Aa, 0);N
N
a a AaAaAaAa_aAa (AaAaAaAa a, AaAa a) {N
	a aAa = 0.0;N
	a aAa = 0;N
	a a = a a;N
	a a = a a;N
}N
N
aAaAaAaAa AaAaAaAa_a () {N
	a {N
		aAaAaAaAa a = Aa_a (AaAaAaAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAaAaAa a a.");N
	}N
}N
N
a AaAa_aAaAaAa (AaAa a) {N
	AaAaAaAa_aAa (a a.a(), a);N
	AaAaAaAa_aAa (a a -> a.a());N
	AaAaAaAaAa_aAa (a aAa -> a.a(), a aAa.a());N
	AaAaAaAa_aAa (a a -> a.a(), a a.a());N
	AaAaAaAa_aAa (a a -> a.a(), a a.a());N
}N
N
/************************ AaAa *********************************************/N
N
Aa_a (AaAa, Aa, 0);N
N
a aAaAa :: a_a () {N
	aAa :: a_a ();N
	AaAa_aAa (A"Aa a:");N
	AaAa_aAa (A"   Aa a:     ", a, A" a");N
	AaAa_aAa (A"   Aa a:       ", a, A" a");N
	AaAa_aAa (A"   Aa a: ", a - a, A" a");N
	AaAa_aAa (A"\a--- AaAa ---\a");N
	a -> a_a ();N
	AaAa_aAa (A"\a--- AaAaAa ---\a");N
	aAa -> a_a ();N
	AaAa_aAa (A"\a--- AaAa ---\a");N
	a -> a_a ();N
	AaAa_aAa (A"\a--- AaAa ---\a");N
	a -> a_a ();N
}N
N
a AaAa_aAa (AaAa a) {N
	Aa_aAa (a a.a(), A"a");N
	Aa_aAa (a aAa.a(), A"aAa");N
	Aa_aAa (a a.a(), A"a");N
	Aa_aAa (a a.a(), A"a");N
	Aa_aAa (a a.a(), A"a");N
}N
N
aAaAa AaAa_a (a a, a a, a aAaAa, a aAaAaAa, a aAaAaAaAa, a aAaAaAa, a aAaAaAaAa, a aAaAaAa, a aAaAaAa) {N
	a {N
		aAaAa a = Aa_a (AaAa);N
		Aa_a (a.a(), a, a);N
		a a = AaAa_a (a, a);N
		a aAa = AaAaAa_a (a, a, aAaAa, aAaAaAa, aAaAaAaAa);N
		a a = AaAa_a (a, a, aAaAaAa,  aAaAaAaAa, aAaAaAa);N
		a a = AaAa_a (a, a, aAaAaAa);N
		a a = AaAa_a (a, a);N
		a a = AaAaAaAa_a ();N
N
		AaAa_aAaAaAa (a.a());N
		AaAa_aAa (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a.");N
	}N
}N
N
aAaAa AaAa_aAa () {N
	a {N
		aAaAa a = AaAa_aAa ();N
		aAaAa a = AaAa_a_AaAa (a.a(), 0.0);N
		a a;N
	} a (AaAa) {N
		Aa_a (A"AaAa a a a.");N
	};N
}N
N
// a a a a a a a a a a a a,N
// a0 a a a a a a a a a a a a, a-a, a a a aN
a a _AaAa_aAaAa (AaAa a, a a, a *a_a, a *a_a0) {N
	a a a = a aAa -> a_a -> a.a +N
		a aAa -> a_a -> a.a + a a -> a_a -> a.a;N
	a a a0 = a aAa -> a_a -> a.a +N
		( a aAa -> a_a -> a.a > 0 ? 0 : 0 );N
N
	a a a0 = a - a0;N
	a a = 0.0, a0 = 0.0;N
	a (a != 0) {N
		a = a + (a - 0) * a;N
N
		a (a0 == 0)N
			a0 = 0.0;N
		a a (a0 == 0)N
			a0 = a - 0.0;N
		aN
			a0 = a0 + (a0 - 0) * a + 0.0 * a;N
	}N
	a (a_a)N
		*a_a = a;N
	a (a_a0)N
		*a_a0 = a0;N
	a;N
}N
N
a a aAa (a a0, a a0, a a0, a a0, a a0, a aAa, a *a_a, a *a_a0, a *a_a0, a *a_a0, a *a_a0, a *a_a0, a *a_a0) {N
	// Aa: a 'a' a a a a0..a0 a a a.N
	// Aa: a a a0..a0 a a:N
	// 0. a a0 a a0 a a a, a a0 a a a a0, a a a0/a0 a aN
	// 0. a a0 a a0 a a a, a a0 a a a a0, a a a0/a0 a aN
	// 0. a a0 a a0 a a a a.N
	// 0. a0 a a a (a0,a0) a a a a (0.0) a a0.N
	// 0. Aa a a a a0+a0 >= 0.0N
	// 0. Aa a a a a a 0.. 0, a.a a a a a0 a a0 a a 0,N
	// a a a a0 a a 0. Aa a a a a a a a, a a a aN
	// a a0,a0 a a0 a aN
	//N
	// a0  a0N
	// a0  a0N
	//  a0N
	/* Aa:N
	              a             a       ^N
	     a      a a    a      a a       |N
	  a0 a a    a a    a a    a a a0    | a0N
	     -----------------------------------------------------------N
	  a0 a a    a a    a a    a a a0N
	     a      a      a a    a aN
	                     a      aN
	     a      a      a a    a aN
	  a0 a      a      a      aN
	     a      a      a      aN
	*/N
	a a; // a0_a = 0.0; a aN
	a a a0 = ( a0 > a0 ? a0 : a0 ); // a a a aN
	a (a0 >= a0) {N
		a = a0 + a0 + a0;N
	} a { // a0 < a0N
		a aAa0 = aAa * a0;N
		a (aAa0 < a0 + a0)N
			aAa0 = 0.0;N
		a a (aAa0 > a0 - a0)N
			aAa0 = a0 - a0;N
		a = a0 + a0 + a0 - aAa0;N
	}N
	a a a = 0.0 / (0.0 * a);N
	a a a0 = 0.0 - (a0 + a0) * a;N
	a a a0 = a0 + (a0 + a0) * a;N
	a a a0 = 0.0 - (a0 + a0) * a;N
	a a a0 = a0 + (a0 + a0) * a;N
	a a a0 = 0.0;N
	a a a0 = a0 * a;N
	a (a_a)N
		*a_a = a;N
	a (a_a0)N
		*a_a0 = a0;N
	a (a_a0)N
		*a_a0 = a0;N
	a (a_a0)N
		*a_a0 = a0;N
	a (a_a0)N
		*a_a0 = a0;N
	a (a_a0)N
		*a_a0 = a0;N
	a (a_a0)N
		*a_a0 = a0;	N
}N
N
a AaAa_aAaAa (AaAa a, Aa a, aAaAaAaAa aAa, a aAa) {N
	AaAaAa_AaAa_a (a aAa.a(), aAa ? a a.a() : a, a, aAa);N
}N
N
a AaAa_a (AaAa a, Aa a, aAaAaAaAa aAa) {N
	a a a = 0.0, a0 = 0.0, a0 = 0.0, a = 0.0, a = 0.0, a = 0.0;N
	a a a_a = 0.0, a_aAa_a = 0.0, a_a = 0.0;N
N
	a a;N
	a {N
		a = a_a (0);N
	} a (AaAa) {N
		Aa_aAa ();N
		a;N
	}N
N
	Aa_aAa (a);N
N
	Aa_aAa (a, a, a, a, a);N
	Aa_aAaAa (a, Aa_A, Aa_A);N
	Aa_aAaAa (a, 0);N
N
	a a a = a a -> a_a -> a.a - 0 + 0;N
	a a a_a = ( a > 0 ? a + (a - 0) * a_a : 0.0 );N
	a a a_a = 0.0 + a_a + 0.0;N
	a a_a, a_a;N
	a a_a = 0.0;N
	a a = a_a / a_a; // 0 a a a a a a aN
N
	a a0, a0, a0, a0, a0, a0, a0, a0;N
	a a0, a0, a0, a0, a0, a0, a0, a0;N
	a a [0];N
	a a [0] = {0, 0.0, 0.0, 0.0, 0.0, 0.0 };N
	a_a_a (a, a, 0, a0 - a);N
	N
	a (aAa == aAaAaAaAa::Aa) { // Aa aN
		/*N
			a a a a a a !N
		*/N
		a_a = a_a / (a_a + a_a);N
		a (a_a < 0.0)N
			a_a = 0.0;N
		a = a_a / a_a;N
N
		a0 = a;N
		a0 = a0 + a [0];N
		a0 = a;N
		a0 = a0 - a_a;N
		AaAa_a_a (a a.a(), a, a0, a0, a0, a0, a_a, & a_a);N
N
		// a a a a a a a a a a a.N
N
		a0 = a + a [0];N
		a0 = a0 + a [0];N
		a0 = a_a + a / 0.0;N
		a0 = a0 - a;N
		a a_aAa_a, a_aAa_a;N
		AaAaAa_AaAa_aAa_a (a aAa.a(), a a.a(), a, a0, a0, a0, a0, & a_aAa_a, & a_aAa_a);N
N
		a -> a [0] = a0;N
		a -> a [0] = a_aAa_a;N
N
		Aa_a (a, a0, a_a, a0, a_aAa_a);N
N
		a0 = a + a [0];N
		a0 = a0 + a [0];N
		a0 = a - a_a;N
		a0 = 0.0;N
N
		AaAa_a_a (a a.a(), a, a0, a0, a0, a0, a_a, &a_a);N
	} a { // AaN
		/*N
			a a a a a a, a a aN
			a a a a a. a a a a a a a a a aN
			a a a a a a a a a aN
			a a'a a a a a aN
		*/N
		a a_a, a_a, a_a = 0.0, a_aAa_a, a_aAa_a;N
		_AaAa_aAaAa (a, a_aAa_a, &a_a, & a_a);N
		a (a_a == 0.0) {N
			a_a = a_a;N
			a_a = a_a / 0.0;N
			a_a = -0.0;N
		}N
N
		a_a = a_a / (a_a + a_a);N
		a (a_a < 0.0) {N
			a_a = 0.0;N
		}N
		//a a = (a - a) / (a_a + (0 - a_a) * a_a); // a aN
N
		//a a = a - 0.0 * a_a; // a a aN
		//a a = a - a_a * a; // a a aN
		//a a_a = a > a ? a - a : 0;N
		//a a_a = a > a ? a - a : 0;N
N
		// a, a, aN
		a0 = a;N
		a0 = a0 + a [0];N
N
		a a a0 = a_a / 0.0, a0 = a0, a0 = a_a, a0 = a_a - a0, a0 = a_a;N
		aAa (a0, a0, a0, a0, a0, a_a, & a, & a0, & a0, & a0, & a0, & a0, & a0);N
N
		AaAa_a_a (a a.a(), a, a0, a0, a0, a0, a_a, & a_a);N
N
		a0 = a + a [0];N
		a0 = a0 + a [0];N
		AaAaAa_AaAa_aAa_a (a aAa.a(), a a.a(), a, a0, a0, a0, a0, a_aAa_a, &a_aAa_a, &a_aAa_a);N
N
		a -> a [0] = a0;N
		a -> a [0] = a_aAa_a;N
N
		Aa_a (a, a0, a_a, a0, a_aAa_a);N
N
		a0 = a /* + 0.0 * a [0] */;N
		a0 = a0 + 0.0 * (a [0] + a [0]);N
N
		AaAa_a_a (a a.a(), a, a0, a0, a0, a0, a_a, &a_a);N
	}N
N
	a -> a [0] = a0;N
	a -> a [0] = a_a;N
	a a a = (a0 - a0) / 0.0;N
	a a a = a0 + a / 0.0;N
	a a a = (a - a) / 0.0;N
N
	a_aAa (a, a, a, a, a, a, 0.0);N
N
	Aa_a (a, a + a, a, a, a);N
N
	Aa_aAa (a);N
	a_a (a);N
}N
N
/**** Aa, Aa, Aa, Aa Aa ********/N
N
#a AaAa_A_A_A_A_A(Aa,a,aAa) \N
a AaAa_a##Aa##AaAa (AaAa a, a a) \N
{ a AaAa_aAaAaAa (a a -> a.a(), a); } \N
a AaAa_a##Aa##Aa (AaAa a, a a, a a) \N
{ AaAa_aAa (a a -> a.a(), a, a);} \N
a AaAa_a##Aa##Aa (AaAa a, a a0, a a0) \N
{ AaAa_aAaAa (a a -> a.a()->aAaAa(), a0, a0); } \N
a##aAa AaAa_a##Aa##Aa (AaAa a) \N
{ a Aa_a (a a -> a.a()); } \N
a AaAa_a##Aa##Aa (AaAa a, aAa a) \N
{ a {\N
	Aa_a (a a == a a && a a == a a, A"Aa a a a"); \N
	a##aAa a = Aa_a (a); \N
	a a -> a = a.a(); \N
	} a (AaAa) { Aa_a (a, A": a a a."); } \N
}N
N
// Aa 0 aN
AaAa_A_A_A_A_A (Aa, a, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (Aa, a, AaAa)N
AaAa_A_A_A_A_A (Aa0, a0, AaAa)N
AaAa_A_A_A_A_A (Aa0, a0, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
AaAa_A_A_A_A_A (AaAa, aAa, AaAa)N
N
aAaAa* AaAa_aAaAaAaAa (AaAa a, aAaAaAaAa aAa) {N
	a aAa == aAaAaAaAa::Aa ? & a aAa -> a_a :N
	       aAa == aAaAaAaAa::Aa ? & a aAa -> a_a :N
	       aAa == aAaAaAaAa::Aa ? & a a -> a_a :N
	       aAa == aAaAaAaAa::Aa ? & a a -> a_a :N
	       aAa == aAaAaAaAa::AaAa ? & a aAa -> a_a :N
	       aAa == aAaAaAaAa::AaAa ? & a a -> a_a :N
		   & a a -> a_a; // aAaAaAaAa::AaN
}N
N
AaAa<aAaAa>* AaAa_aAaAaAa (AaAa a, aAaAaAaAa aAa) {N
	a aAa == aAaAaAaAa::Aa ? & a aAa -> a_a_a :N
	       aAa == aAaAaAaAa::Aa ? & a aAa -> a_a_a :N
	       aAa == aAaAaAaAa::Aa ? & a a -> a_a_a :N
	       aAa == aAaAaAaAa::Aa ? & a a -> a_a_a : a;N
}N
N
#a AaAa_A_A_A(Aa) \N
a AaAa_a##Aa##AaAa (AaAa a, aAaAaAaAa aAa, a a, a a) \N
{ \N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa); \N
	a AaAa_a##Aa##AaAa (a->a(), a, a); \N
} \N
a AaAa_a##Aa##Aa (AaAa a, aAaAaAaAa aAa, a a, a a, a a) \N
{ \N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa); \N
	AaAa_a##Aa##Aa (a->a(), a, a, a); \N
} \N
a AaAa_a##Aa##Aa (AaAa a, aAaAaAaAa aAa, a a, a a0, a a0) \N
{ \N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa); \N
	AaAa_a##Aa##AaAa (a->a(), a, a0, a0); \N
}N
N
// 0 aN
AaAa_A_A_A (Aa)N
AaAa_A_A_A (Aa)N
N
a AaAa_a_a (AaAa a, aAaAaAaAa aAa, a0 a, Aa a) {N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
	AaAa_a_a (a->a(), a, a, a);N
}N
N
a AaAa_a_a (AaAa a, aAaAaAaAa aAa, a0 a, Aa a) {N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
	N
	AaAa_a_a (a->a(), a, a, a);N
}N
N
a AaAa_a_a (AaAa a, aAaAaAaAa aAa, a0 a, Aa a) {N
	a {N
		a AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		a (a a = 0; a <= a->a; a ++) {N
			a AaAa a = a->a [a];N
			Aa_a (a, a, a, aAa_A_A_A, a);N
			Aa_Aa a;N
			a (a a = 0; a <= a -> a.a; a ++) {N
				Aa_a (a, a, & a);N
				Aa_a (a (a. aAa),N
					A"Aa a a a a a a a.\aAa a a.");N
				a -> a.a [a] -> a = a. aAa;N
			}N
		}N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
a AaAa_aAaAaAa (AaAa a, aAaAaAaAa aAa, a a, a a) {N
	a AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
	a (a < 0 || a > a->a)N
		a a;N
	a AaAa_aAaAaAa (a->a [a], a);N
}N
N
a AaAa_aAaAa (AaAa a, aAaAaAaAa aAa, a a, a a, a a) {N
	a AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
	Aa_a (a > 0 && a <= a -> a,N
		A"Aa a a ", a, A"a a a.");N
	AaAa_aAa (a->a [a], a, a);N
}N
N
a AaAa_aAaAa (AaAa a, aAaAaAaAa aAa, a a, a a0, a a0) {N
	a AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
	a (a && a > 0 && a <= a->a) {N
		AaAa_aAaAa (a->a [a]->aAaAa(), a0, a0);N
	}N
}N
N
aAaAa AaAa_aAaAa (AaAa a, aAaAaAaAa aAa, a a) {N
	a {N
		a AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		Aa_a (a != a,N
			A"Aa a a a a a.");N
		Aa_a (a > 0 && a <= a -> a,N
			A"Aa a a ", a, A"a a a.");N
		aAaAa a = Aa_a (a->a [a]);N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a.");N
	}N
}N
N
a AaAa_aAaAa (AaAa a, aAaAaAaAa aAa, a a, AaAa a) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
			A"Aa a a a.");N
		AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		Aa_a (a != a,N
			A"Aa a a a a a.");N
		Aa_a (a > 0 && a <= a -> a,N
			A"Aa a a ", a, A" a a a.");N
		aAaAa a = Aa_a (a);N
		a -> aAa_a (a.a(), a);N
	} a (AaAa) {N
		Aa_a (a, A": a a a a.");N
	}N
}N
N
aAaAa AaAa_aAaAa (AaAa a, aAaAaAaAa aAa) {N
	a {N
		aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
		Aa_a ((*a) -> a . a > 0,N
			AaAa_aAaAa (aAa), A"a a a a.");N
		aAaAa a = Aa_a (a->a());N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a.");N
	}N
}N
N
a AaAa_aAaAa (AaAa a, aAaAaAaAa aAa, AaAa a) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
			A"Aa a a a");N
		aAaAa *a = AaAa_aAaAaAaAa (a, aAa);N
		*a = Aa_a (a);N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a.");N
	}N
}N
N
a AaAa_aAaAaAa (AaAa a, aAaAaAaAa aAa, a a) {N
	a {N
		Aa_a (aAa != aAaAaAaAa::AaAa && aAa != aAaAaAaAa::AaAa && aAa != aAaAaAaAa::Aa,N
			A"Aa a a a a a a a.");N
		AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		a a a = a->a;N
		a (a > a || a < 0)N
			a = a + 0;N
		aAaAa a = AaAa_a (a a, a a);N
		a -> aAaAaAa_a (a.a(), a);N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
a AaAa_aAaAaAa (AaAa a, aAaAaAaAa aAa, a a) {N
	a {N
		Aa_a (aAa != aAaAaAaAa::AaAa && aAa != aAaAaAaAa::AaAa && aAa != aAaAaAaAa::Aa, N
			A"Aa a a a a a a a.");N
		AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		a (a > 0 && a <= a->a) {N
			a -> aAa (a);N
		}N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
// Aa a a a a a.N
// Aa a a a a a a aN
a AaAa_aAa (AaAa a, aAaAaAaAa aAa, a a) {N
	a {N
		aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
		N
		a a a = (*a) -> a.a;N
		a (a > a || a < 0) {N
			a = a + 0;N
		}N
N
		a (aAa == aAaAaAaAa::AaAa || aAa == aAaAaAaAa::AaAa ||N
			aAa == aAaAaAaAa::Aa) {N
			AaAa_aAaAaAaAa (a->a(), a);N
			a;N
		}N
N
		AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		a a a = a->a;N
		Aa_a (a == a,N
			A"Aa a a a (",  a, A") a a a a a (", a, A") a a a.");N
		N
		AaAa_aAaAaAaAa (a->a(), a);N
		a {N
			aAaAa a = AaAa_a (a a, a a);N
			a -> aAaAaAa_a (a.a(), a);N
		} a (AaAa) { // a aN
			AaAa_aAaAaAaAa (a->a(), a);N
		}N
	} a (AaAa) {N
		Aa_a (a, A": a a a.");N
	}N
}N
N
a AaAa_aAa (AaAa a, aAaAaAaAa aAa, a a) {N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
	a a a = (*a) -> a.a;N
	a (aAa == aAaAaAaAa::AaAa || aAa == aAaAaAaAa::AaAa ||N
        aAa == aAaAaAaAa::Aa) {N
		a (a < 0 || a > a) {N
			a;N
		}N
		AaAa_aAaAaAaAa (a->a(), a);N
	} a { N
		// a & a & a a a a aN
		// a a a a a a a a a a a a a a a a aN
		AaAa<aAaAa>* a = AaAa_aAaAaAa (a, aAa);N
		a a a = a->a;N
		a (a < 0 || a > a || a > a) {N
			a (a != a) {N
				Aa_a (A"Aa a a a a (", a, A") a a a a a a (",N
					a, A") a'a a. Aa a.");N
			}N
			a;N
		}N
		AaAa_aAaAaAaAa (a->a(), a);N
		a -> aAa (a);N
	}N
}N
N
a AaAa_aAaAaAaAaAa (AaAa a, aAaAaAaAa aAa, a a) {N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
	AaAa_aAaAaAaAa (a->a(), a);N
}N
N
a AaAa_aAaAaAaAaAa (AaAa a, aAaAaAaAa aAa, a a) {N
	aAaAa* a = AaAa_aAaAaAaAa (a, aAa);N
	AaAa_aAaAaAaAa (a->a(), a);N
}N
N
a AaAa_aAaAaAaAa (AaAa a, a a, a a) {N
	a AaAa_aAaAaAa (a a -> a_a.a(), a, a);N
}N
a AaAa_aAaAaAa (AaAa a, a a, a a, a a) {N
	AaAa_aAaAa (a a -> a_a.a(), a, a, a);N
}N
a AaAa_aAaAaAa (AaAa a, a a, a a0, a a0) {N
	AaAa_aAaAaAa (a a -> a_a.a(), a, a0, a0);N
}N
a AaAa_aAaAaAaAa (AaAa a, a a, a a) {N
	a AaAa_aAaAaAa (a a -> a_a.a(), a, a);N
}N
a AaAa_aAaAaAa (AaAa a, a a, a a, a a) {N
	AaAa_aAaAa (a a -> a_a.a(), a, a, a);N
}N
a AaAa_aAaAaAa (AaAa a, a a, a a0, a a0) {N
	AaAa_aAaAaAa (a a -> a_a.a(), a, a0, a0);N
}N
N
aAaAa AaAa_aAaAaAa (AaAa a) {N
	a {N
		aAaAa* a = AaAa_aAaAaAaAa (a, aAaAaAaAa::Aa);N
		aAaAa a = Aa_a (a->a());N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a AaAa a.");N
	}N
}N
N
a AaAa_aAaAaAa (AaAa a, AaAa a) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
			A"Aa a a a");N
		aAaAa* a = AaAa_aAaAaAaAa (a, aAaAaAaAa::Aa);N
		aAaAa a = Aa_a (a);N
		*a = a.a();N
	} a (AaAa) {N
		Aa_a (a, A": a a AaAa a.");N
	}N
}N
N
aAaAa AaAa_a_aAaAa_aAa (AaAa a, a aAa) {N
	a {N
		Aa_a (a aAa -> a_a -> a.a > 0 || a aAa -> a_a -> a.a > 0,N
			A"Aa a a a a a.");N
		N
		a (aAa < 0.0)N
			aAa = 0.0;N
		Aa_a (aAa < 0.0,N
			A"Aa a a a a a 0.0");N
		N
		a a -> a -> aAa = aAa;N
		aAaAa a = Aa_a ( (AaAa) a aAa -> a_a.a());N
		AaAa_aAaAa (a);N
		AaAa_AaAa_aAaAa (a.a(), a a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a \"a a\" a AaAa a.");N
	}N
}N
N
aAaAa AaAa_aAaAa_aAa (AaAa a) {N
	a {N
		// Aa AaAaN
		aAaAa a = AaAa_a_AaAa (a a.a());N
		aAaAa a = AaAa_a_AaAa_a (a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
a AaAa_aAaAaAaAa (AaAa a, a a) {N
	a AaAa_aAaAaAa (a a -> aAa.a(), a);N
}N
N
a AaAa_aAaAaAa (AaAa a, a a, a a) {N
	AaAa_aAa (a a -> aAa.a(), a, a);N
}N
N
a AaAa_aAaAaAa (AaAa a, a a0, a a0) {N
	AaAa_aAaAa (a a -> aAa.a()->aAaAa(), a0, a0);N
}N
N
aAaAa AaAa_aAaAaAa (AaAa a) {N
	a Aa_a (a a -> aAa.a());N
}N
N
a AaAa_aAaAaAa (AaAa a, AaAa a) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
			A"Aa a a a");N
		a a -> aAa = Aa_a (a);N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
a AaAa_aAaAaAaAa (AaAa a, a a) {N
	a AaAa_aAaAaAa (a a -> a.a(), a);N
}N
N
a AaAa_aAaAaAa (AaAa a, a a, a a) {N
	AaAa_aAa (a a -> a.a(), a, a);N
}N
N
a AaAa_aAaAaAa (AaAa a, a a0, a a0) {N
	AaAa_aAaAa (a a -> a.a()->aAaAa(), a0, a0);N
}N
N
aAaAa AaAa_aAaAaAa (AaAa a) {N
	a Aa_a (a a -> a.a());N
}N
N
a AaAa_aAaAaAa (AaAa a, AaAa a) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
			A"Aa a a a");N
		a a -> a = Aa_a (a);N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
a AaAa_aAaAa (AaAa a) {N
	a {N
		a a -> a = AaAa_a_AaAa (a a.a());N
		Aa_a (a a -> a,N
			A"Aa a a a a a.");N
	} a (AaAa) {N
		Aa_a (a, A": a a a a a.");N
	}N
}N
N
#a 0N
a aAa AaAa_a_Aa_a (AaAa a, a aAa) {N
	a AaAa_a_Aa_a (a a.a(), aAa);N
}N
#aN
N
aAa AaAa_a_Aa_a (AaAa a) {N
	a AaAa_a_Aa (a a.a(), 0, a a -> aAa);N
}N
N
aAa AaAa_a_Aa (AaAa a) {N
	a {N
		aAa a;N
		a AaAaAaAa a = a a -> a.a();N
		a AaAaAaAa a = a a -> a.a();N
		a a aAa = a a -> aAa;N
N
		a (a -> a)N
			AaAa_aAaAa (a);N
N
		a (a -> a || a -> a) { // Aa a a a a a a a a aN
			aAa a = AaAa_a_Aa (a a.a(), a a.a(), aAa);N
			a = Aa_AaAaAa_AaAa_a (a.a(), a aAa.a(), a a.a());N
		}N
N
		a (a -> aAaAa > 0 || a -> a) {N
			aAa a = AaAa_a_Aa (a a.a(), aAa);N
			a (a)N
				_Aa_a_a (a.a(), a.a());N
			aN
				a = a.a();N
		}N
N
		a (a)N
			Aa_a (a.a(), 0.0);N
		a a (a a -> aAa)N
			a = Aa_aAaAa (a a, a a, aAa);N
N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a Aa a.");N
	}N
}N
N
a AaAa_aAa (AaAa a) {N
	a {N
		aAa a = AaAa_a_Aa (a);N
		a AaAaAaAa a = a a.a();N
		a (a aAa)N
			Aa_a (a.a(), 0.0);N
		a (a a == 0.0 && a a == 0.0) {N
			a a = a a;N
			a a = a a;N
		}N
		Aa_aAa (a.a(), a a, a a, a, a);N
	} a (AaAa) {N
		Aa_a (a, A": a a.");N
	}N
}N
N
a AaAa_a (AaAa a) {N
	AaAa_aAaAaAa (a);N
	AaAa_aAa (a);N
}N
N
/************************* Aa(a) & AaAa **************************************************/N
N
aAa Aa_AaAa_a_a (Aa a, AaAa a) {N
	a Aa_AaAa_a (a, a a.a());N
}N
N
aAa Aa_AaAa_aAaAaAa (Aa a, AaAa a, aAaAaAaAa aAa) {N
	a {N
		Aa_a (a a == a a && a a == a a,N
						A"Aa a a a.");N
		AaAa_aAaAaAa (a);N
		a a -> a -> a = 0; // a'a a a a!N
		a aAa -> a -> aAa = aAa;N
		a Aa_AaAaAa_AaAa_a (a, a aAa.a(), a a.a());N
	} a (AaAa) {N
		Aa_a (a, A": a a a AaAa.");N
	}N
}N
N
/******************* AaAa a AaAa *********************/N
N
aAaAa AaAa_a_AaAa (AaAa a, a aAa) {N
	a {N
		Aa a = (Aa) a;N
N
		a a aAaAa = a a.a;N
		a a a = 0, a = aAaAa * aAa;N
		a a aAa = -0;N
		a a aA_a = -0.0 * a0 (0.0a-0) - 0.0; // a AaAa a a A_a_A a a 0 aA : 0N
		a a aA_a_a = 0.0 * a0 (0 / 0); // A' [a] a a (-0,0)N
		a a aA_a_a = -0.0 * a0 (0.0 / 0.0); // a a a (-0,0)N
		//	a aA_a_a = -0 * a0 (0/0)  - 0 * a0 (0.0 / 0.0);N
		a a a [0] = {0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };N
		a a aAaAa = 0;N
		a a aAaAaAa = 0;N
		a a aAaAaAaAa = aAaAaAa;N
		a a aAaAaAa = 0;N
		a a aAaAaAaAa = aAaAaAa;N
		a a aAaAaAa = 0;N
		a a aAaAaAa = 0;N
N
		aAaAa a = AaAa_a (a, a, aAaAa, aAaAaAa,N
			aAaAaAaAa, aAaAaAa, aAaAaAaAa,N
			aAaAaAa, aAaAaAa);N
		a (a a = 0; a <= aAaAa; a ++) {N
			a a a = (a - 0) * aAa;N
N
			a a = 0;N
			a a = Aa_aAaAa_Aa (a, a, a) / 0.0;   // A0a0N
			a a a0 = a;N
			AaAa_aAa (a a -> a.a(), a, a0);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a); // AaN
			// aA a a 0 a a a a a a AaA aN
			a -= 0.0;N
			a (a < 0.0)N
				a = aAa;N
N
			// AaAa_aAa (a a -> aAa, a, a);N
N
			a (a a = 0; a <= 0; a ++) {N
				a a a = a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
				AaAa_aAa (a aAa -> a_a -> a.a [a], a, a);N
				AaAa_aAa (a a -> a_a -> a.a [a], a, a);   // a a a a a a aN
				a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
				a (a <= 0.0)N
					a = a / 0.0;N
				AaAa_aAa (a aAa -> a_a -> a.a [a], a, a);N
			}N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			AaAa_aAa (a aAa -> a_a -> a.a [0], a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			AaAa_aAa (a aAa -> a_a -> a.a [0], a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			AaAa_aAa (a aAa -> a_a -> a.a [0], a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			AaAa_aAa (a aAa -> a_a -> a.a [0], a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // aN
			a (a < 0.0)N
				a = aAa;N
			aN
				a += 0.0 * a0 (0.0) + aA_a_a;N
N
			AaAa_aAa (a a -> aAa.a(), a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			a a aAa = ( a0 > 0.0 ? (a / 0.0) * a0 : 0.0 );N
			AaAa_aAa (a a -> aAa.a(), a, aAa);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // Aa aAa a a (a a 0)N
			a (a < 0.0)N
				a = aAa;N
			aN
				a += 0.0 * a0 (0.0) + aA_a_a;N
N
			AaAa_aAa (a a -> aAa.a(), a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
			AaAa_aAa (a a -> aAa.a(), a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AN
			a (a < 0.0)N
				a = aAa;N
			aN
				a += 0.0 * a0 (0.0) + aA_a_a;N
N
			AaAa_aAa (a a -> aAa.a(), a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // Aa ???N
			//AaAa_aAa (, a, a);N
N
			a (a a = 0; a <= 0; a ++) {N
				a = Aa_aAaAa_Aa (a, a, ++ a);   // AaN
				a (a < 0.0)N
					a = aAa;N
				aN
					a += 0.0 * a0 (a [a]) + aA_a;N
N
				AaAa_aAa (a aAa -> a_a_a.a [a], a, a);N
				AaAa_aAa (a a -> a_a_a.a [a], a, a);N
				a = Aa_aAaAa_Aa (a, a, ++ a); // AaN
				AaAa_aAa (a a -> a_a -> a.a [a], a, a);N
			}N
N
			a = Aa_aAaAa_Aa (a, a, ++ a);   // AN
			a (a < 0.0)N
				a = aAa;N
			aN
				a += 0.0 * a0 (0.0) + aA_a;N
N
			AaAa_aAa (a aAa -> a_a_a.a [0], a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a); // AN
			a (a < 0.0)N
				a = aAa;N
			aN
				a += 0.0 * a0 (0.0) + aA_a_a;N
N
			AaAa_aAa (a a -> a.a(), a, a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a); // AaN
			AaAa_aAa (a a -> aAa.a(), a, a + aA_a_a);N
N
			a = Aa_aAaAa_Aa (a, a, ++ a); // Aa0N
			a -= 0.0;N
			a (a <= 0.0)N
				a = 0.0;N
			AaAa_aAa (a a.a(), a, a + aA_a);N
		}N
		// Aa a'a a a a a-a: a a a a a !!N
		//AaAa_aAa (a a_a -> a->a [0], 0.0*(a+a), 0.0*aAa);N
		//AaAa_aAa (a a_a -> a->a [0], 0.0*(a+a), 0.0*aAa);N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a AaAa a.");N
	}N
}N
N
aAaAa Aa_a_AaAa_a (Aa a, a aAa, a aAaAaAa, a aAaAa, a aAa, a aAaAa, a aAa, a aAa, a aAaAa, a aAa) {N
	a {N
		a a aAaAa = aAaAaAa;N
		a a aAaAaAa = 0;N
		a a aAaAaAaAa = aAaAaAa;N
		a a aAaAaAa = 0;N
		a a aAaAaAaAa = aAaAaAa;N
		a a aAaAaAa =  aAaAaAa;N
		a a aAaAaAa = 0;N
		aAa a = Aa_a (a);N
		Aa_aAa (a.a());N
		aAa a = Aa_a_Aa_a (a.a(), aAa, aAaAaAa,N
		                                       aAaAa, aAa, aAaAa);N
		aAaAa a = Aa_a_AaAa (a.a());N
		aAa a = Aa_a_Aa (a.a(), aAa, aAa, aAa);N
		aAaAa a = Aa_a_AaAa (a.a());N
		aAa a = Aa_a_Aa (a.a(), aAaAa, aAa, aAa);N
		aAaAa a = Aa_a_AaAa (a.a());N
		aAaAa a = AaAa_a (a a, a a, aAaAa, aAaAaAa,                            aAaAaAaAa, aAaAaAa, aAaAaAaAa, aAaAaAa, aAaAaAa);N
		AaAa_aAaAa (a.a(), a.a());N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, a.a());N
		AaAa_aAaAaAa (a.a(), a.a());N
		a a;N
	} a (AaAa) {N
		Aa_a (a, A": a a AaAa a.");N
	}N
}N
N
aAaAa AaAa_aAaAa (a a, a a0a, a a0, a a0, a a0, a a0, a a0, a a0, a a0, a aAaAa, a aAaAa) {N
	a a aAaAaAa = 0;N
	a a a = 0.0;N
	aAaAa a = AaAa_a (0.0, a, aAaAaAa, 0, 0, 0, 0, 0, 0);N
	AaAa_aAaAa (a.a(), a, a0a);N
	AaAa_aAaAaAa (a.a(), a, 0.0);N
	a (a0 > 0.0) {N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
	}N
	a (a0 > 0.0) {N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
	}N
	a (a0 > 0) {N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
	}N
	a (a0 > 0) {N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0);N
		AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, 0, a, a0 * aAaAa);N
	}N
	a (aAaAa > 0) {N
		a aAa = a::a (a::a (a0, a0), a::a (a0, a0));N
		a (a a = 0; a <= aAaAaAa; a ++) {N
			a a =  aAa + (a - 0) * aAaAa;N
			AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, a, a, a);N
			AaAa_aAaAa (a.a(), aAaAaAaAa::Aa, a, a, a * aAaAa);N
		}N
	}N
	a a;N
}N
N
/* Aa a a AaAa.a */N
