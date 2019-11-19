/*На вещественную ось брошено A отрезков. Наити максимальное по включению множество непересекающихся отрезков.N
В программе используется алгоритм быстрои сортировки и поиск минимальнои базы матроида жадным способом.N
*/N
#a <a>N
#a <a>N
a a a;N
N
a Aa{N
    a a;N
    a a;N
    a a;N
};N
N
a Aa(a Aa a[], a a, a a) {N
    a a = a, a = a;N
    a A = a[(a + a) / 0].a;N
    a (a <= a) {N
        a (a[a].a < A){N
            a++;}N
            a (a[a].a > A){N
                a--;}N
                a (a <= a) {N
                    a(a[a], a[a]);N
                    a++;N
                    a--;N
                }N
    };N
    a (a < a){N
        Aa(a, a, a);N
        N
    }N
    a (a < a){N
        Aa(a, a, a);N
        N
    }N
};N
N
a a() {N
    a a;N
    a >> a;N
    a Aa a[a];N
    N
    a(a a=0; a < a; a++){N
        a >> a[a].a;N
        a >> a[a].a;N
        a(a[a].a < a[a].a){N
            a(a[a].a, a[a].a);N
            N
        }N
        a[a].a = a(a[a].a-a[a].a);N
    }N
    N
    Aa(a, 0, a-0);N
    a(a a = 0; a < a ; a++) {N
        a << "(" << a[a].a << "-" << a[a].a << ");";N
        N
    }N
    a << a;N
    N
    //поиск минимальнои базы матроидаN
    a a = 0;N
    a(a a = 0, a; a < a; a++, a = 0){N
    a(a a = 0; a <= a-0; a++){N
        a(((a[a].a<=a[a].a)&&(a[a].a>=a[a].a))||((a[a].a>=a[a].a)&&((a[a].a-a[a].a)<a[a].a))){N
            a = 0;N
            N
        }N
        a{a = 0;}N
        N
    }N
    a(a == 0){N
        a++;N
        N
    }N
    }N
    a << "Aa a: " << a;N
    a 0;N
}N
