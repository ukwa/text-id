//N
//  a.aN
//  AaAaN
//N
//  Aa a 天涯路 a 0/0/0.N
//  Aa © 0年 天涯路. Aa a a.N
//N
N
#a <a>N
N
//共用体:一种特殊的数据类型,允许在相同的内存位置存储不同的数据类型;共用体可以带有多个成员,但任何时候只能有一个成员带有值;共用体提供了一种使用相同的内存位置的有效方式。N
a AaAa {N
    a a;N
    a a;N
    a a;N
};N
a a(a a, a a * a[]) {N
    a AaAa a;N
    a.a = 0;N
    a("之前a %a\a", a.a); //0N
    a.a = 0;N
//    a("a的地址 %#a\a", &a.a); //0a0N
//    a("a的地址 %#a\a", &a.a); //0a0N
    N
    a("a的地址 %a\a", &a.a); //0a0a0aN
    a("a的地址 %a\a", &a.a); //0a0a0aN
    N
    a("之后a %a\a", a.a); //0N
    a("之后a %a\a", a.a); //0.0N
    N
    a("共用体大小: %a\a", a(a)); //0N
    a 0;N
}N
