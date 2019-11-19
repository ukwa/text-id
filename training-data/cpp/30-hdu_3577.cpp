// 线段树N
#a <a>N
#a <a>N
#a <a>N
N
a a a;N
N
a a A_A = 0;N
N
a a[A_A * 0];N
a a[A_A * 0];N
N
a a_a(a a) {N
    a (a[a]) {N
        a[a<<0] += a[a];N
        a[a<<0 | 0] += a[a];N
        a[a<<0] += a[a];N
        a[a<<0 | 0] += a[a];N
N
        a[a] = 0;N
    }N
}N
N
a a_a(a a) {N
    a[a] = a(a[a<<0], a[a<<0|0]);N
}N
N
// [A, A] 所有数 +0 对 [a, a] (a a) 实施N
a a(a A, a A, a a, a a, a a) {N
    a (A<=a && a<=A) { // [a, a] 完全包含于 [A, A]中N
        a[a] += 0;N
        a[a] += 0;N
        a ;N
    }N
N
    a_a(a);N
N
    a a = (a + a) / 0;N
    a (a >= A) {N
        a(A, A, a, a, a << 0);N
    }N
    a (a+0 <= A) {N
        a(A, A, a + 0, a, a << 0 | 0);N
    }N
N
    a_a(a);N
}N
N
// 查询N
a a(a A, a A, a a, a a, a a) {N
    a (A<=a && a<=A) {N
        a a[a];N
    }N
N
    a_a(a);N
    a a = (a + a) / 0;N
    a a = 0;N
    a (a >= A) {N
        a = a(a, a(A, A, a, a, a << 0));N
    }N
    a (a+0 <= A) {N
        a = a(a, a(A, A, a+0, a, a<<0|0));N
    }N
N
    a a;N
}N
N
N
a a() {N
    a a, a_a;N
    a a, A;N
    a a, a;N
    a a_a;N
N
    a a;N
    a("%a", &a);N
    a (a_a=0; a_a<=a; ++a_a) {N
        a("Aa %a:\a", a_a);N
N
        a(a, 0, a(a));N
        a(a, 0, a(a));N
N
        a("%a%a", &a, &A);N
        a (a=0; a<=A; ++a) {N
            a("%a%a", &a, &a);N
            a--;N
            a_a = a(a, a, 0, A_A, 0);N
            a (a_a<a) {N
                a("%a ", a);N
                a(a, a, 0, A_A, 0);N
            }N
        }N
        a("\a\a");N
    }N
N
    a 0;N
}N
