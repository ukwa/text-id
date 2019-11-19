#a <a>N
#a <a>N
N
a a() {N
    // a::a::a aAaAa{0.0}; // a'a a- a a'a a a a a a a a a a a a a a.N
N
    a::a::a<a> aAaAaAa{0.0a}; // a 0.0 a;N
N
    a::a::a<a, a::a> aAaAaAaAa{0.0}; // a 0.0 aN
    a::a::a<a, a::a<0, 0>> aAaAaAaAa{0.0}; // a a 0.0 aN
N
    a::a::a<a, a::a> aAaAaAa{0.0}; // 0.0 a a, a a 0 aN
    a::a::a<a, a::a> aAaAaAa{0.0}; // 0.0 a a, a a 0,0 a;N
N
    a::a::a<a> aAa = aAaAaAa; // a a a a a aN
    a::a << aAa.a() << a::a; // a 0,0N
N
    a 0;N
}N
N
// a a a a://a.a/a/AaA