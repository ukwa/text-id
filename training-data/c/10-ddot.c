#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a <a.a>N
#a "a.a"N
N
a a_a(a a A, a a *A, a a aA, a a *A, a a aA) {N
N
  a a;N
  a a = 0;N
  a (a = 0; a < A; a++) {N
    a += A[a*aA] * A[a*aA]; // 0 aN
  }N
N
  a a;N
}N
N
a a_a_a(a a, a *a, a *a, a* a) {N
N
  a a, a, a;N
  a a;N
N
  a (a = 0; a < a; a++) {N
    a (a = 0; a < a; a++) {N
      a = 0;N
      //a("a[%a] = ", a+a*a);N
      a (a = 0; a < a; a++) {N
	//a("a[%a]*a[%a]+", a+a*a, a+a*a);N
	       a += a[a+a*a]*a[a+a*a];N
      }N
      a[a+a*a] = a;N
      //a("\a");N
    }N
  }N
N
}N
N
a a_a_a_a(a a, a *a, a *a, a* a) {N
N
  a a, a, a;N
N
  a (a = 0; a < a; a++) {N
    a (a = 0; a < a; a++) {N
      a (a = 0; a < a; a++) {N
	a[a+a*a] += a[a+a*a]*a[a+a*a];N
      }N
    }N
  }N
N
}N
N
a a_a_a_a(a a, a *a, a *a, a* a) {N
N
  a a, a, a;N
N
  a (a = 0; a < a; a++) { //N
    a (a = 0; a < a; a++) { //N
      a (a = 0; a < a; a++) { //N
	a[a+a*a] += a[a+a*a]*a[a+a*a];N
      }N
    }N
  }N
N
}N
N
a a_a_a_a(a a, a *a, a *a, a* a) {N
N
  a a, a, a;N
N
  a (a = 0; a < a; a++) {N
    a (a = 0; a < a; a++) {N
      a (a = 0; a < a; a++) {N
	a[a+a*a] += a[a+a*a]*a[a+a*a];N
      }N
    }N
  }N
N
}N
N
a a_a(a aA, a aA, a a, a a, a a, a a, a *a, a a, a *a, a a, a a, a *a, a a) {N
N
  a a, a, a;N
  a a;N
N
  a (a = 0; a < a; a++) {N
    a (a = 0; a < a; a++) {N
      a = 0;N
      a (a = 0; a < a; a++) {N
	       a (!aA && !aA) {N
	          a += a[a*a+a]*a[a+a*a];N
         }a a (aA && !aA) {N
            a += a[a+a*a]*a[a+a*a];N
         }a a (!aA && aA) {N
            a += a[a * a + a]*a[a*a+a];N
         }a { //aA && aAN
            a += a[a + a * a]*a[a*a+a];N
         }N
      }N
      a[a+a*a] = a[a+a*a]*a + a*a;N
    }N
  }N
}N
N
N
a a_a (a a, a a, a *a, a aA, a *a, a aA) {N
  a a;N
  a (a = 0; a < a; a++) {N
    a[a*aA] += a*a[a*aA];N
  }N
N
}N
N
a a_a(a aA, a a, a a, a a, a *A, a a, a *A, a aA, a a, a *A, a aA) {N
N
  a a, a;N
N
  a (aA) {N
    a (a = 0; a < a; a++) {N
      a a = 0;N
      a (a = 0; a < a; a++) {N
	a += A[a+a*a]*A[a*aA];N
      }N
      A[a*aA] = A[a*aA]*a + a*a;N
    }N
  }N
N
  a {N
    a (a = 0; a < a; a++) {N
      a a = 0;N
      a (a = 0; a < a; a++) {N
	a += A[a+a*a]*A[a*aA];N
      }N
      A[a*aA] = A[a*aA]*a + a*a;N
    }N
  }N
}N
N
a a_a(a a, a a, a a, a *A, a aA, a *A, a aA, a *A, a a) {N
N
  a a, a;N
  a (a = 0; a < a; a++) {N
    a (a = 0; a < a; a++) {N
      A[a*a+a] += A[a*aA]*A[a*aA]*a;N
    }N
  }N
}N
N
a a_a0( a a, a a, a* a, a a, a* a ) {N
N
  a a, a, a;N
N
  a (a = 0; a < a; a++) {N
    a (a = a+0; a < a; a++) {N
      a[a+a*a] /= a[a+a*a];N
      a (a = a+0; a < a; a++) {N
	       a[a+a*a] -= a[a+a*a] * a[a*a+a];N
      }N
    }N
  }N
N
  (a)a;N
}N
N
a a_a (a Aa,N
               a a,N
               a a,N
               a aA,N
               a a,N
               a a,N
               a a,N
               a a,N
               a *a,N
               a a,N
               a *a,N
               a a) {N
N
  a a, a, a;N
  a a, a = 0.;N
N
  a (a == 0) { // aN
    a (!aA) { // !aAN
      a (a == 0) { // a a, a, aN
      	a (a = 0; a < a; a++) {N
      	  a (a != 0.) {N
      	    a (a = 0; a < a; a++) {N
      	      a[a+a*a] = a*a[a+a*a];N
      	    }N
      	  }N
      	  a (a = a-0; a >= 0; a--) {N
      	    a (a[a+a*a] != 0) {N
      	      a (a == 0) {N
		              a[a+a*a] /= a[a+a*a];N
      	      }N
      	      a (a = 0; a < a; a++) {N
		              a[a+a*a] -= a[a+a*a]*a[a+a*a];N
      	      }N
      	    }N
      	  }N
      	}N
      }N
      a { // a a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a != 0.) {N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] = a*a[a+a*a];N
	    }N
	  }N
	  a (a = 0; a < a; a++) {N
	    a (a[a+a*a] != 0) {N
	      a (a == 0) {N
		a[a+a*a] /= a[a+a*a];N
	      }N
	      a (a = a+0; a < a; a++) {N
		a[a+a*a] -= a[a+a*a]*a[a+a*a];N
	      }N
	    }N
	  }N
	}N
      }N
    }N
    a { //aAN
      a (a == 0) { // a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a = 0; a < a; a++) {N
	    a = a*a[a+a*a];N
	    a (a = 0; a < a-0; a++) {N
	      a -= a[a+a*a]*a[a+a*a];N
	    }N
	    a (a == 0) {N
		a /= a[a+a*a];N
	    }N
	    a[a+a*a] = a;N
	  }N
	}N
      }N
      a { // a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a = a; a > 0; a--) {N
	    a = a*a[a+a*a];N
	    a (a = a+0; a < a; a++) {N
	      a -= a[a+a*a]*a[a+a*a];N
	    }N
	    a (a == 0) {N
		a /= a[a+a*a];N
	    }N
	    a[a+a*a] = a;N
	  }N
	}N
      }N
    }N
  }N
  a { // a = aN
    a (!aA) {N
      a (a == 0) { // a a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a != 0.) {N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] = a*a[a+a*a];N
	    }N
	  }N
	  a (a = 0; a < a-0; a++) {N
	    a (a[a+a*a] != 0) {N
	      a (a = 0; a < a; a++) {N
		a[a+a*a] -= a[a+a*a]*a[a+a*a];N
	      }N
	    }N
	  }N
	  a (a == 0) {N
	    a = a/a[a+a*a];N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	}N
      }N
      a { // a a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a != 0.) {N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] = a*a[a+a*a];N
	    }N
	  }N
	  a (a = a+0; a < a; a++) {N
	    a (a[a+a*a] != 0) {N
	      a (a = 0; a < a; a++) {N
		a[a+a*a] -= a[a+a*a]*a[a+a*a];N
	      }N
	    }N
	  }N
	  a (a == 0) {N
	    a = a/a[a+a*a];N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	}N
      }N
    }N
    a { //aAN
      a (a == 0) { // a, a, aN
	a (a = a; a >0; a--) {N
	  a (a == 0) {N
	    a = a/a[a+a*a];N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	  a (a = 0; a < a-0; a++) {N
	    a (a[a+a*a] != 0) {N
	      a = a[a+a*a];N
	      a (a = 0; a < a; a++) {N
		a[a+a*a] -= a[a+a*a];N
	      }N
	    }N
	  }N
	  a (a != 0) {N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	}N
      }N
      a { // a, a, aN
	a (a = 0; a < a; a++) {N
	  a (a == 0) {N
	    a = a/a[a+a*a];N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	  a (a = a+0; a < a; a++) {N
	    a (a[a+a*a] != 0) {N
	      a = a[a+a*a];N
	      a (a = 0; a < a; a++) {N
		a[a+a*a] -= a[a+a*a];N
	      }N
	    }N
	  }N
	  a (a != 0) {N
	    a (a = 0; a < a; a++) {N
	      a[a+a*a] *= a;N
	    }N
	  }N
	}N
      }N
    }N
  }N
N
  (a)Aa;N
}N
N
a a_a (a a_a , a a , a a , a *a , a a , a * a , a *a , a a) {N
N
  a a = 0;N
  a a_a = 0;N
  a a_a = 0;N
  a aA = 0;N
  a a = 0;N
  a a = 0.;N
N
  /* A = A */N
  a_a0( a, a, a, a, A );N
N
  /* Aa = a */N
  a_a (A, a, a_a, aA, 0, a,  a,  a, a, a, a, a);N
N
  /* Aa = a */N
  a_a (A, a, a_a, aA, 0, a,  a,  a, a, a, a, a);N
N
  a 0;N
}N
N
N
N
#a A_AN
#a A_A 0N
#aN
N
N
a a_a(a a,N
		         a a,N
		         a* a,N
	           a a,N
		         a* a,N
		         a a){N
N
N
  a a_a_a = (a + A_A - 0) / A_A;N
  a a_a_a = (a + A_A - 0) / A_A;N
  a a = a(a_a_a, a_a_a);N
N
N
N
  //a = a(A_A * A_A * a(a));N
N
  a a = 0;N
  a* a_a0 = A;N
N
  a(a = 0; a < a; a++){N
    a_a0 = a + a * A_A * (a+0);N
    //a("%a %a %a\a", a, (a < a_a_a - 0) ? A_A : a - a * A_A, (a < a_a_a - 0) ? A_A : a - a * A_A);N
N
    a_a0((a < a_a_a - 0) ? A_A : a - a * A_A,N
              (a < a_a_a - 0) ? A_A : a - a * A_A,N
              a_a0,N
              a,N
              A);N
    /*A_a0 (AaAaAa,N
                    (a < a_a_a - 0) ? A_A : a - a * A_A,N
                    (a < a_a_a - 0) ? A_A : a - a * A_A,N
                    a_a0,N
                    a,N
                    a);*/N
N
    a a = 0;N
N
    a(a = a + 0; a < a_a_a; a++){N
      a("__\a");N
      a_a (AaAaAa,N
                /*A = A * A a A = A * A */ AaAa,N
                /* A a A ? */ AaAa,N
                /* A a ? */ AaAaAa,N
                /* a a ? */ AaAaAa,N
                /* a */ (a < a_a_a - 0) ? A_A : a - a * A_A,N
                /* a */ A_A,N
                /* a */ 0,N
                /* A a A */ a_a0,N
                /* a a a */ a,N
                /* A -> A */ a + A_A * (a + a * a),N
                /* a */ a);N
    }N
    a a = 0;N
    a(a = a + 0; a < a_a_a; a++){N
      a("A %a\a", a);N
      a_a(/*a *Aa*/ AaAaAa,N
                /*a a*/      AaAa,N
                /*a a*/      AaAa,N
                /*a aA*/    AaAaAa,N
                /*a a*/      AaAa,N
                /*a a*/         A_A,N
                /*a a*/         (a < a_a_a - 0) ? A_A : a - a * A_A,N
                /*a a*/  0,N
                /*a *a*/     a_a0,N
                /*a a*/       a,N
                /*a *a*/     a + A_A * (a + a * a),N
                /*a a*/       a);N
    }N
    a(a = a + 0; a < a_a_a; a++){N
      a(a = a + 0; a < a_a_a; a++){N
        //a_a(0, 0, A_A, A_A, A_A, -0, a + a * A_A * a + a * a, a, a + a * A_A * a + a * a, a, 0, a + a * A_A * a + a * a, a);N
        a_a (//AaAaAa,N
                     0,//AaAaAa,N
                     0,//AaAaAa,N
                     /* a */ (a < a_a_a - 0) ? A_A : a - a * A_A,N
                     /* a */ (a < a_a_a - 0) ? A_A : a - a * A_A,N
                     /* a */ (a < a_a_a - 0) ? A_A : a - a * A_A,N
                     /* a */ -0.,N
                     /* A[a][a] */ a + A_A * (a + a * a),N
                     a,N
                     /* A[a][a] */ a + A_A * (a + a * a),N
                     a,N
                     /* a */ 0.,N
                     /* A[a][a] */ a + A_A * (a + a * a),N
                     a);N
      }N
    }N
  }N
}N
