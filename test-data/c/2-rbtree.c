#a "a.a"N
#a "a_a.a"N
#a "A_A.A"N
N
a a _AaN
{N
    A,N
    AN
} Aa;N
N
a a AaAa(AaAaAa *aA, AaAaAa *aA)N
{N
    Aa0 aAa = aA->a;N
    aA->a = aA->a;N
    aA->a = aAa;N
}N
N
a a AaAa(AaAaAa **aAa, AaAaAa *a)N
{N
    AaAaAa *aAa = a->a;N
N
    a->a = aAa->a;N
N
    a (a->a != A)N
        a->a->a = a;N
N
    aAa->a = a->a;N
N
    a (a->a == A)N
        *aAa = aAa;N
N
    a a (a == a->a->a)N
        a->a->a = aAa;N
    aN
        a->a->a = aAa;N
N
    aAa->a = a;N
N
    a->a = aAa;N
}N
N
a a AaAa(AaAaAa **aAa, AaAaAa *a)N
{N
    AaAaAa *aAa = a->a;N
N
    a->a = aAa->a;N
N
    a (a->a != A)N
        a->a->a = a;N
N
    aAa->a = a->a;N
N
    a (aAa->a == A)N
        *aAa = aAa;N
N
    a a (a == a->a->a)N
        a->a->a = aAa;N
    aN
        a->a->a = aAa;N
N
    aAa->a = a;N
N
    a->a = aAa;N
}N
N
a AaAa(AaAaAa **a, AaAaAa *a)N
{N
    AaAaAa *a_a = A;N
    AaAaAa *a_a_a = A;N
N
    a ((a != a) && (a->a != A) &&N
           (a->a->a == A))N
    {N
N
        a_a = a->a;N
        a_a_a = a->a->a;N
N
        /*  Aa : A N
            Aa a a a a a a Aa-a a a */N
        a (a_a == a_a_a->a)N
        {N
N
            AaAaAa *a_a = a_a_a->a;N
N
            /* Aa : 0 N
               Aa a a a a a a N
               Aa Aa a */N
            a (a_a != A && a_a->a == A)N
            {N
                a_a_a->a = A;N
                a_a->a = A;N
                a_a->a = A;N
                a = a_a_a;N
            }N
N
            aN
            {N
                /* Aa : 0 N
                   a a a a a a a N
                   Aa-a a */N
                a (a == a_a->a)N
                {N
                    AaAa(a, a_a);N
                    a = a_a;N
                    a_a = a->a;N
                }N
N
                /* Aa : 0 N
                   a a a a a a a N
                   Aa-a a */N
                AaAa(a, a_a_a);N
                AaAa(a_a->a, a_a_a->a);N
                a = a_a;N
            }N
        }N
N
        /* Aa : A N
           Aa a a a a a a Aa-a a a */N
        aN
        {N
            AaAaAa *a_a = a_a_a->a;N
N
            /*  Aa : 0 N
                Aa a a a a a a N
                Aa Aa a */N
            a ((a_a != A) && (a_a->a == A))N
            {N
                a_a_a->a = A;N
                a_a->a = A;N
                a_a->a = A;N
                a = a_a_a;N
            }N
            aN
            {N
                /* Aa : 0 N
                   a a a a a a a N
                   Aa-a a */N
                a (a == a_a->a)N
                {N
                    AaAa(a, a_a);N
                    a = a_a;N
                    a_a = a->a;N
                }N
N
                /* Aa : 0 N
                   a a a a a a a N
                   Aa-a a */N
                AaAa(a, a_a_a);N
                AaAa(a_a->a, a_a_a->a);N
                a = a_a;N
            }N
        }N
    }N
N
    (*a)->a = A;N
}N
N
a a AaAa(AaAaAa *a, AaAaAa *a)N
{N
    AaAaAa *a = A;N
    AaAaAa *aAa = a;N
    a (aAa != A)N
    {N
        a = aAa;N
N
        a (a->a < aAa->a)N
            aAa = aAa->a;N
        aN
            aAa = aAa->a;N
    }N
N
    a (a->a > a->a)N
        a->a = a;N
    aN
        a->a = a;N
N
    a->a = a;N
}N
N
a Aa(AaAaAa **a, Aa0 a, a *a)N
{N
    AaAaAa *aAa = (AaAaAa *)Aa(a(AaAaAa));N
    aAa->a = a;N
    aAa->a = a;N
    aAa->a = aAa->a = aAa->a = A;N
N
    a (*a == A)N
    {N
        aAa->a = A;N
        *a = aAa;N
    }N
    aN
    {N
        AaAa(*a, aAa);N
        aAa->a = A;N
        AaAa(a, aAa);N
    }N
}N
N
AaAaAa *Aa(AaAaAa *aAa, Aa0 a)N
{N
    a (aAa == A || aAa->a == a)N
        a aAa;N
N
    a (aAa->a < a)N
        a Aa(aAa->a, a);N
    aN
        a Aa(aAa->a, a);N
}N
N
a AaAa(AaAaAa **a, AaAaAa *a)N
{N
    a (a != *a && a->a == A)N
    {N
        a (a == a->a->a)N
        {N
            AaAaAa *a = a->a->a;N
            a (a->a == A)N
            {N
                a->a = A;N
                a->a->a = A;N
                AaAa(a, a->a);N
                a = a->a->a;N
            }N
            a (a->a->a == A && a->a->a == A)N
            {N
                a->a = A;N
                a = a->a;N
                a;N
            }N
            a a (a->a->a == A)N
            {N
                a->a->a = A;N
                a->a = A;N
                AaAa(a, a);N
                a = a->a->a;N
            }N
            a (a->a->a == A)N
            {N
                a->a = a->a->a;N
                a->a->a = A;N
                a->a->a = A;N
                AaAa(a, a->a);N
                a = *a;N
            }N
        }N
        aN
        {N
            AaAaAa *a = a->a->a;N
            a (a->a == A)N
            {N
                a->a = A;N
                a->a->a = A;N
                AaAa(a, a->a);N
                a = a->a->a;N
            }N
            a (a->a->a == A && a->a->a == A)N
            {N
                a->a = A;N
                a = a->a;N
                a;N
            }N
            a a (a->a->a == A)N
            {N
                a->a->a = A;N
                a->a = A;N
                AaAa(a, a);N
                a = a->a->a;N
            }N
            a (a->a->a == A)N
            {N
                a->a = a->a->a;N
                a->a->a = A;N
                a->a->a = A;N
                AaAa(a, a->a);N
                a = *a;N
            }N
        }N
    }N
    a->a = A;N
}N
N
a Aa(AaAaAa **a, AaAaAa *a, AaAaAa *a)N
{N
    a (a->a == A)N
    {N
        *a = a;N
    }N
    a a (a == a->a->a)N
    {N
        a->a->a = a;N
    }N
    aN
        a->a->a = a;N
    a->a = a->a;N
}N
N
AaAaAa *AaAa(AaAaAa *aAaAa)N
{N
    a (aAaAa->a != A)N
    {N
        aAaAa = aAaAa->a;N
    }N
    a aAaAa;N
}N
N
Aa Aa(AaAaAa **a, Aa0 a)N
{N
    AaAaAa *a = Aa(*a, a);N
    a (a == A)N
    {N
        a A;N
    }N
N
    AaAaAa *a;N
N
    Aa0 aAa = a->a;N
N
    a (a->a == A)N
    {N
        a = a->a;N
        Aa(a, a, a->a);N
    }N
    a a (a->a == A)N
    {N
        a = a->a;N
        Aa(a, a, a->a);N
    }N
    aN
    {N
        AaAaAa *aAa = AaAa(a->a);N
        aAa = aAa->a;N
        a = aAa->a;N
        a (aAa->a == a)N
            a->a = aAa;N
        aN
        {N
            Aa(a, aAa, aAa->a);N
            aAa->a = a->a;N
            aAa->a->a = aAa;N
        }N
        Aa(a, a, aAa);N
        aAa->a = a->a;N
        aAa->a->a = aAa;N
        aAa->a = a->a;N
    }N
    Aa(a);N
N
    a (aAa == A)N
        AaAa(a, a);N
    a A;N
}