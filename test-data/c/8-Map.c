//图的存储结构N
N
//邻接矩阵N
//一维数组存储顶点信息,二维数组存储边弧信息N
#a A_A_A 0N
a aN
{N
    Aa a;     //对于无权图,用 0 或 0 表示是否相邻;对于带权图,直接为权值。N
    AaAa *a; //弧或边额外含有的信息指针N
} AaAa, AaAa[A_A_A][A_A_A];N
N
a aN
{N
    AaAa a[A_A_A]; //存储图中顶点数据N
    AaAa a;                  //二维数组,记录顶点之间的关系N
    a a, a;              //记录图的顶点数和弧(边)数N
    AaAa a;                  //记录图的种类N
} Aa;N
N
//邻接表N
//把数组与链表结合在一起存储,顶点用一维数组存储,每个顶点的邻接点构成一个线性表N
a a AaN
{N
    a a;N
    a Aa *a;N
} AaAa;N
N
a a AaN
{N
    a a;N
    a Aa *a;N
} AaAa;N
N
a AaAa AaAa[A_A_A];N
N
a aN
{N
    AaAa a;N
    a a, a;N
} AaAa;N
N
//十字链表N
//展现各点的连接关系,包含a、a、a、a等N
//十字链表是邻接表和逆邻接表的结合N
a a AaAaN
{N
    a a, a;        //弧尾、弧头对应顶点在数组中的位置下标N
    a AaAa *a, *a; //分别指向弧头相同和弧尾相同的下一个弧N
    AaAa *a;              //存储弧相关信息的指针N
} AaAa;N
N
a a AaAaN
{N
    AaAa a;            //顶点的数据域N
    AaAa *a, *a; //指向以该顶点为弧头和弧尾的链表首个结点N
} AaAa;N
N
a aN
{N
    AaAa a[A_A_A]; //存储顶点的一维数组N
    a a, a;            //记录图的顶点数和弧数N
} Aa;N
N
//马踏棋盘问题N
//在国际象棋棋盘中,把马放在任意方格要求每个方格只走一次,最终让马走遍0个方格N
#a A 0N
#a A 0N
a a[A][A];N
N
//找寻基于(a,a)的下一个位置N
a a(a *a, a *a, a a)N
{N
    a (a)N
    {N
    a 0:N
        a (*a + 0 <= A - 0 && *a - 0 >= 0 && a[*a + 0][*a - 0] == 0)N
        {N
            *a += 0;N
            *a -= 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a + 0 <= A - 0 && *a + 0 <= A - 0 && a[*a + 0][*a + 0] == 0)N
        {N
            *a += 0;N
            *a += 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a + 0 <= A - 0 && *a + 0 <= A - 0 && a[*a + 0][*a + 0] == 0)N
        {N
            *a += 0;N
            *a += 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a - 0 >= 0 && *a - 0 >= 0 && a[*a - 0][*a - 0] == 0)N
        {N
            *a -= 0;N
            *a -= 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a - 0 >= 0 && *a + 0 <= A - 0 && a[*a - 0][*a + 0] == 0)N
        {N
            *a -= 0;N
            *a += 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a + 0 <= A - 0 && *a - 0 >= 0 && a[*a + 0][*a - 0] == 0)N
        {N
            *a += 0;N
            *a -= 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a - 0 >= 0 && *a + 0 <= A - 0 && a[*a - 0][*a + 0] == 0)N
        {N
            *a += 0;N
            *a += 0;N
            a 0;N
        }N
        a;N
    a 0:N
        a (*a - 0 >= 0 && *a - 0 >= 0 && a[*a - 0][*a - 0] == 0)N
        {N
            *a += 0;N
            *a += 0;N
            a 0;N
        }N
        a;N
    a:N
        a;N
    }N
    a 0;N
}N
N
//a起始坐标,a是标记变量,每走一步a+0N
a AaAaAa(a a, a a, a a)N
{N
    a a0 = a, a0 = a, a = 0, a = 0;N
    a[a][a] = a;N
    a (A * A == a)N
    {N
        //打印棋盘N
        a 0;N
    }N
N
    a = a(&a0, &a0, a);N
    a (0 == a && a < 0)N
    {N
        a++;N
        a = a(&a0, &a0, a);N
    }N
N
    a (a)N
    {N
        a (AaAaAa(a0, a0, a + 0))N
        {N
            a 0;N
        }N
        a0 = a;N
        a0 = a;N
        a++;N
N
        a = a(&a0, &a0, a);N
        a (0 == a && a < 0)N
        {N
            a++;N
            a = a(&a0, &a0, a);N
        }N
    }N
    a (a == 0)N
    {N
        a[a][a] = 0;N
    }N
}N
