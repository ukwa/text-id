// Aa (a) Aa Aa. Aa a a.N
// A-Aa-Aa: AN
N
#a <a_a_a.a>N
#a <a_a.a>N
#a <a_a.a>N
N
#a "./a_a.a"N
N
#a <_a_a.a>N
N
a a_a_a_a_a() {N
  {N
    a_a_a a;N
    A_A(a_a_a_a_a(A_A("   0  "), A_A(""), &a) == A_A);N
    A_A(a.a == A_A_A_A);N
    A_A(a.a.a == 0);N
  }N
  {N
    a_a_a a;N
    A_A(N
        a_a_a_a_a(A_A("   0  "), A_A("/"), &a) == A_A_A_A_A);N
  }N
  {N
    a_a_a a;N
    A_A(a_a_a_a_a(A_A(" {  \"\": a  } "), A_A("/"), &a) == A_A);N
    A_A(a.a == A_A_A_A);N
    A_A(a.a.a == a);N
  }N
  {N
    a_a_a a;N
    A_A(N
        a_a_a_a_a(A_A(" [  { \"\": a }  ] "), A_A("/0/"), &a) == A_A);N
    A_A(a.a == A_A_A_A);N
    A_A(a.a.a == a);N
  }N
  {N
    a_a_a a;N
    A_A(N
        a_a_a_a_a(A_A("{ \"0/0\": a } "), A_A("/0~0"), &a) == A_A);N
    A_A(a.a == A_A_A_A);N
    A_A(a.a.a == a);N
  } N
  {N
    a a_a a a = A_A_A( //N
        "{\a"N
        "  \"a\": {\a"N
        "      \"aAa\": \"{a-a}\",\a"N
        "      \"aAaAa\" : \"a0\",\a"N
        "      \"aAa\" : \"a0\",\a"N
        "      \"aAa\" : \"a0\",\a"N
        "      \"a-a\" : \"0-0-0\",\a"N
        "      \"a\" : \"a\",\a"N
        "      \"AaAa\" : {\a"N
        "        \"a\": [\a"N
        "          \"a0\",\a"N
        "          \"a0\",\a"N
        "          \"a0\"\a"N
        "        ]\a"N
        "      }\a"N
        "  },\a"N
        "  \"a\": {\a"N
        "    \"0/0\": {\a"N
        "      \"a\": {\a"N
        "          \"aAaAa\": a,\a"N
        "          \"a\" : []\a"N
        "      }\a"N
        "    }\a"N
        "  }\a"N
        "}\a");N
    {N
      a_a_a a;N
      A_A(a_a_a_a_a(a, A_A("/a/AaAa/a/0"), &a) == A_A);N
      A_A(a.a == A_A_A_A);N
      A_A(a_a_a(a.a.a, A_A("a0")));N
    }N
    {N
      a_a_a a;N
      A_A(N
          a_a_a_a_a(a, A_A("/a/0~0/a/aAaAa"), &a)N
          == A_A);N
      A_A(a.a == A_A_A_A);N
      A_A(a.a.a == a);N
    }N
  }N
}N
