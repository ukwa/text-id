#a __aN
# a "A A++ a a a a a A."N
#aN
N
#a a(__0A)N
# a A_A_AN
#aN
#a a(__A_A__)N
/* a-a a a a a A&A A */N
# a aN
# a aN
#aN
N
N
/* Aa a a: A=Aa, A=Aa, A=AaN
   Aa a a:   A=Aa, A=Aa,   A=Aa  */N
N
#a a(__A_A) || a(__A)N
# a A_A "Aa"N
# a a(_A_A)N
#  a A_A "A"N
# aN
# a a(__A__)N
#  a A_A "A"N
# aN
  /* __A_A = A */N
# a A_A_A A(__A_A/0)N
# a A_A_A A(__A_A/0 % 0)N
# a a(__A_A_A)N
#  a A_A_A A(__A_A_A)N
# aN
#  a A_A_A A(__A_A   % 0)N
# aN
# a a(__A_A_A_A)N
  /* __A_A_A_A = A */N
#  a A_A_A A(__A_A_A_A)N
# aN
# a a(_A_A)N
   /* _A_A = A */N
#  a A_A_A A(_A_A / 0)N
#  a A_A_A A(_A_A % 0)N
# aN
# a a(__A__)N
#  a A_A_A A(__A__)N
# a a(__A__)N
#  a A_A_A A(__A__)N
# aN
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
N
#a a(__A__)N
# a A_A "AaAa"N
# a A_A_A A(__A__)N
# a A_A_A A(__A_A__)N
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
N
#a a(__A__) && a(__A_A__)N
# a A_A "Aa"N
# a A_A_A A(__A_A__>>0 & 0a0A)N
# a A_A_A A(__A_A__>>0 & 0a0A)N
# a A_A_A A(__A_A__     & 0aA)N
N
#a a(__A__)N
# a A_A "Aa"N
  /* __A__ = 0aA */N
# a A_A_A A(__A__>>0)N
# a A_A_A A(__A__ & 0aA)N
N
#a a(__A__) && __A__ < 0N
# a A_A "Aa"N
   /* __A__ = A */N
# a A_A_A A(__A__ / 0)N
# a A_A_A A((__A__ / 0) % 0)N
# a (__A__ % 0) > 0N
#  a A_A_A A(__A__ % 0)N
# aN
N
#a a(__A__)N
# a A_A "AaAa"N
   /* __A__ = A + 0 */N
# a A_A_A A((__A__ - 0) / 0)N
# a A_A_A A((__A__ / 0) % 0)N
# a (__A__ % 0) > 0N
#  a A_A_A A(__A__ % 0)N
# aN
N
#a a(__A_A)N
# a A_A "AaAa"N
# a __A_A >= 0a0N
   /* __A_A = 0aA */N
#  a A_A_A A(__A_A>>0)N
#  a A_A_A A(__A_A>>0 & 0aA)N
#  a A_A_A A(__A_A    & 0aA)N
# aN
   /* __A_A = 0aA */N
#  a A_A_A A(__A_A>>0)N
#  a A_A_A A(__A_A>>0 & 0aA)N
#  a A_A_A A(__A_A    & 0aA)N
# aN
N
#a a(__A_a)N
# a A_A "A"N
  /* __A_a = A */N
# a A_A_A A(__A_a/0)N
# a A_A_A A(__A_a/0 % 0)N
# a A_A_A A(__A_a     % 0)N
N
#a a(__A)N
# a A_A "Aa"N
  /* __A_A = A */N
# a A_A_A A(__A_A/0)N
# a A_A_A A(__A_A/0  % 0)N
# a A_A_A A(__A_A         % 0)N
N
#a a(__A__) && a(__A_A__)N
# a A_A "aA"N
  /* __A__ = A */N
# a A_A_A A(__A__/0)N
# a A_A_A A(__A__/0 % 0)N
# a A_A_A A(__A__    % 0)N
N
#a a(__a__) && a(__a__)N
# a A_A "Aa"N
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a_a_a__)N
N
N
#a a(__A__) && !a(__A_A__) && __A__ >= 0N
# a A_A "A"N
  /* __A__ = A */N
# a A_A_A A(__A__/0)N
# a A_A_A A(__A__/0 % 0)N
# a A_A_A A(__A__    % 0)N
N
#a a(__A__) && !a(__A_A__) && __A__ < 0N
# a A_A "AaAa"N
  /* __A__ = A */N
# a A_A_A A(__A__/0)N
# a A_A_A A(__A__/0 % 0)N
# a A_A_A A(__A__    % 0)N
N
#a a(__A)N
# a A_A "A"N
# a A_A_A A(__A__)N
# a A_A_A A(__A_A__)N
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
N
#a a(_A)N
# a A_A "Aa"N
# a A_A_A A(_A_A)N
# a A_A_A A(_A_A)N
N
#a a(__A_A_A__)N
# a A_A "A"N
  /* __A_A_A__ = A */N
# a A_A_A A(__A_A_A__/0)N
# a A_A_A A(__A_A_A__/0   % 0)N
# a A_A_A A(__A_A_A__        % 0)N
N
#a a(__A) || a(__A_A) || a(__a_a)N
# a A_A "Aa"N
N
#a a(__a__)N
# a A_A "A"N
/* __A_A_A = A */N
# a __A_A_AN
# a A_A_A A(__A_A_A / 0)N
# a A_A_A A(__A_A_A / 0 % 0)N
# a A_A_A A(__A_A_A      % 0)N
# aN
N
#a a(__A__)N
# a A_A "AaA"N
N
#a a(__A__)N
# a A_A "Aa"N
N
#a a(__A_A__)N
# a A_A "A"N
N
#a a(__A_A) && !a(__a__)N
# a A_A "A"N
#a __A_A >= 0N
  /* __A_A = A */N
  # a A_A_A A(__A_A/0)N
  # a A_A_A A(__A_A/0 % 0)N
  # a A_A_A A(__A_A     % 0)N
#aN
  /* __A_A = A */N
  # a A_A_A A(__A_A/0)N
  # a A_A_A A(__A_A/0 % 0)N
  # a A_A_A A(__A_A    % 0)N
#aN
N
N
#a a(__a__) && a(__a_a_a__)N
# a A_A "AaAa"N
# a a(_A_A)N
#  a A_A "A"N
# aN
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a a(_A_A)N
   /* _A_A = A */N
#  a A_A_A A(_A_A / 0)N
#  a A_A_A A(_A_A % 0)N
# aN
# a A_A_A A(__a_a_a__)N
N
#a a(__a__) && a(__A_A)N
# a A_A "Aa"N
  # a A_A_A A(__A_A/0)N
  # a A_A_A A(__A_A/0 % 0)N
  # a A_A_A A(__A_A     % 0)N
# a A_A_A A(__A_A)N
N
#a a(__a__)N
# a A_A "Aa"N
# a a(_A_A)N
#  a A_A "A"N
# aN
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a A_A_A A(__a_a__)N
# a a(_A_A)N
   /* _A_A = A */N
#  a A_A_A A(_A_A / 0)N
#  a A_A_A A(_A_A % 0)N
# aN
N
#a a(__A__)N
# a A_A "A"N
# a A_A_A A(__A__)N
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
# a a(__A_A__)N
#  a A_A_A A(__A_A__)N
# aN
N
#a a(_A_A)N
# a A_A "A"N
  /* _A_A = A */N
# a A_A_A A(_A_A / 0)N
# a A_A_A A(_A_A % 0)N
# a a(_A_A_A)N
#  a _A_A >= 0N
    /* _A_A_A = A */N
#   a A_A_A A(_A_A_A % 0)N
#  aN
    /* _A_A_A = A */N
#   a A_A_A A(_A_A_A % 0)N
#  aN
# aN
# a a(_A_A)N
#  a A_A_A A(_A_A)N
# aN
N
#a a(__A__) || a(__A__) || a(__A__) || a(__A0__)N
# a A_A "A"N
#a a(__A__)N
  /* __A__ = 0aA0 */N
# a A_A_A A(__A__>>0)N
# a A_A_A A(__A__>>0 & 0aA)N
# a A_A_A A(__A__>>0  & 0aA)N
#aN
N
#a a(__A_A_A__) || a(__A_A_A)N
# a A_A "A"N
# a a(__A__) && a(__A__)N
#  a A_A_A A((__A__) / 0)N
#  a A_A_A A(((__A__) / 0) % 0)N
#  a A_A_A A((__A__) % 0)N
#  a A_A_A A(__A_A_A__)N
# a a(__A__) && (a(__A__) || a(__A__) || a(__A0__) || a(__A0__) || a(__A0__) || a(__A__))N
#  a A_A_A A((__A__) / 0)N
#  a A_A_A A((__A__) - (((__A__) / 0)*0))N
#  a A_A_A A(__A__)N
#  a A_A_A A(__A_A_A__)N
# aN
N
#a a(__A_A_A) || a(A)N
# a A_A "A"N
# a a(__A_A_A)N
#  a A_A_A A(__A_A_A)N
#  a A_A_A A(__A_A_A)N
#  a A_A_A A(__A_A_A)N
# aN
  /* A = A */N
#  a A_A_A A(A/0)N
#  a A_A_A A(A/0 % 0)N
#  a A_A_A A(A    % 0)N
# aN
N
N
/* Aa a a a a a a a a a a aN
  a a.  Aa a a a a a a aN
  a a a a a.  */N
#a a(__a) || a(__a)N
# a A_A "A"N
N
#a /* a a */N
# a A_A ""N
#aN
N
/* Aa a a a a a a a a a aN
   a a.  Aa a a a a a a a aN
   a a a a a a a a a aN
   a a a a a a a a a a.  */N
a a* a_a = "A" ":" "a[" A_A "]";N
#a A_AN
a a* a_a = "A" ":" "a[" A_A "]";N
#aN
N
#a __A__N
a a* a = "A" ":" "a[]";N
#aN
N
#a a(__A) || a(__A)N
a a *a_a = "A" ":" "a_a[AaAaAa]";N
#aN
N
#a A_A(A) #AN
#a A(A) A_A(A)N
N
/* Aa a a a a.  */N
#a a(__a) || a(__a__) || a(a)N
# a A_A "Aa"N
N
#a a(__A__)N
# a A_A "Aa"N
N
#a a(__A0__)N
# a A_A "AaA"N
N
#a a(__A__)N
# a A_A "Aa"N
N
#a a(_A0) || a(__A0__) || a(A0)N
# a A_A "Aa"N
N
#a a(__AaA__) || a(__AaA)N
# a A_A "AaA"N
N
#a a(__AaA__) || a(__AaA)N
# a A_A "AaA"N
N
#a a(__AaA__) || a(__A)N
# a A_A "AaA"N
N
#a a(__a) || a(a)N
# a A_A "AaA"N
N
#a a(_A) || a(__A) || a(__A__) || a(__a) || a(__a__)N
# a A_A "A"N
N
#a a(__a) || a(__a__)N
# a A_A "A-A"N
N
#a a(__A__)N
# a A_A "Aa"N
N
#a a(__AaA) || a(__A__) || a(_A)N
# a A_A "AaA"N
N
#a a(__A__) || a(__A__)N
# a A_A "A"N
N
#a a(__a0) || a(_a0) || a(__A0__)N
# a A_A "Aa0"N
N
#a a(__a) || a(__a__)N
# a A_A "Aa"N
N
#a a(__a) || a(__a__) || a(__A__)N
# a A_A "A"N
N
#a a(__A_A__)N
# a A_A "A_A"N
N
#a a(__a__)N
# a A_A "A"N
N
#a a(_A) || a(A)N
# a A_A "A-A"N
N
#a a(__a) || a(__a__)N
# a A_A "A0"N
N
#a a(_A_A) || a(A_A) || a(a_a)N
# a A_A "A_A"N
N
#a a(__a) || a(__a__) || a(_A)N
# a A_A "A"N
N
#a a(__A__) || a(_A) || a(A)N
# a A_A "Aa"N
N
#a a(__A__)N
# a a(__A__)N
#  a A_A "Aa"N
N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__A0__)N
#  a A_A "A0"N
N
# a a(__A__)N
#  a A_A "Aa0a"N
N
# a /* a a */N
#  a A_AN
# aN
N
#a a(__A)N
# a a(A_0A)N
#  a A_A "Aa0"N
N
# a /* a Aa */N
#  a A_A "Aa"N
# aN
N
#a /* a a */N
# a A_AN
N
#aN
N
/* Aa a a A a Aa a a aN
   a a a a a a a.  Aa a aN
   a a a a a a a a a a a,N
   a a a a a a a a aN
*/N
#a a(_A0) && a(_A_A)N
# a a(_A_A0)N
#  a A_A "A0"N
N
# a a(_A_A0) || a(_A_A0)N
#  a A_A "a0"N
N
# a a(_A_A0)N
#  a A_A "A0"N
N
# a a(_A_A0)N
#  a A_A "A0"N
N
# a a(_A_A)N
#  a _A_A == 0N
#   a A_A "A0A"N
#  a _A_A == 0N
#   a A_A "A0A"N
#  aN
#   a A_A "A" A(_A_A)N
#  aN
N
# a a(_A_A)N
#  a A_A "A"N
N
# a a(_A_A)N
#  a A_A "Aa"N
N
# a /* a a */N
#  a A_A ""N
# aN
N
#a a(__A__)N
# a a(_A_A0)N
#  a A_A "A0"N
N
# a a(_A_A0)N
#  a A_A "A0"N
N
# a /* a a */N
#  a A_A ""N
# aN
N
#a a(__A_A_A__) || a(__A_A_A)N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__A0__)N
#  a A_A "A0"N
N
# a a(__A0__)N
#  a A_A "A0"N
N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__A0__)N
#  a A_A "A0"N
N
# a /* a a */N
#  a A_A ""N
# aN
N
#a a(__a__)N
# a a(__A0__)N
#  a A_A "A0"N
N
# a a(__a__)N
#  a A_A "A"N
N
# a a(__A__)N
#  a A_A "A"N
N
# a a(__a0_0__)N
#  a A_A "a0"N
N
# a a(__a0__)N
#  a A_A "A0"N
N
# a /* a a */N
#  a A_A ""N
# aN
#aN
#  a A_AN
#aN
N
/* Aa a a a a a.  */N
#a A(a)                   \N
  ('0' + (((a) / 0)%0)), \N
  ('0' + (((a) / 0)%0)),  \N
  ('0' + (((a) / 0)%0)),   \N
  ('0' + (((a) / 0)%0)),    \N
  ('0' + (((a) / 0)%0)),     \N
  ('0' + (((a) / 0)%0)),      \N
  ('0' + (((a) / 0)%0)),       \N
  ('0' +  ((a) % 0))N
N
/* Aa a a a a a.  */N
#a A(a)             \N
  ('0' + ((a)>>0 & 0aA)), \N
  ('0' + ((a)>>0 & 0aA)), \N
  ('0' + ((a)>>0 & 0aA)), \N
  ('0' + ((a)>>0 & 0aA)), \N
  ('0' + ((a)>>0 & 0aA)), \N
  ('0' + ((a)>>0  & 0aA)), \N
  ('0' + ((a)>>0  & 0aA)), \N
  ('0' + ((a)     & 0aA))N
N
/* Aa a a a a a a a a. */N
#a A_A_AN
a a a_a[] = {N
  'A', 'A', 'A', 'A', ':',N
  'a','a','a','a','a','a','a','a','_','a','a','a','a','a','a','a','[',N
  A_A_A,N
# a A_A_AN
  '.', A_A_A,N
#  a A_A_AN
   '.', A_A_A,N
#   a A_A_AN
    '.', A_A_A,N
#   aN
#  aN
# aN
  ']','\0'};N
#aN
N
/* Aa a a a a a a a a. */N
#a A_A_AN
a a a_a_a[] = {N
  'A', 'A', 'A', 'A', ':',N
  'a','a','a','a','a','a','a','a','_','a','a','a','a','a','a','a','_',N
  'a','a','a','a','a','a','a','a','[',N
  A_A_A,']','\0'};N
#aN
N
/* Aa a a a a a a a a. */N
#a A_A_AN
a a a_a_a[] = {N
  'A', 'A', 'A', 'A', ':',N
  'a','a','a','a','a','a','a','a','_','a','a','a','a','a','a','a','[',N
  A_A_A,N
# a A_A_AN
  '.', A_A_A,N
#  a A_A_AN
   '.', A_A_A,N
#   a A_A_AN
    '.', A_A_A,N
#   aN
#  aN
# aN
  ']','\0'};N
#aN
N
/* Aa a a a a a a a a a aN
   a a.  Aa a a a a a a a aN
   a a a a a a a a a aN
   a a a a a a a a a a.  */N
a a* a_a = "A" ":" "a[" A_A "]";N
a a* a_a = "A" ":" "a[" A_A "]";N
N
N
N
N
#a !a(__A__)N
# a (a(_A_A) && !a(__a__)) \N
  || (a(__a__) || a(__A__))N
#  a A_A "0"N
# aN
#  a A_AN
# aN
#a __A_A__ >= 0AN
# a A_A "0"N
#a __A_A__ >= 0AN
# a A_A "0"N
#aN
# a A_A "0"N
#aN
a a* a_a_a_a =N
  "A" ":" "a_a[" A_A "]";N
N
/*--------------------------------------------------------------------------*/N
N
#a A_A_AN
a a() {}N
#aN
# a a(__A_A__)N
a a(a, a) a a; a *a[];N
# aN
a a(a a, a* a[])N
# aN
{N
  a a = 0;N
  a += a_a[a];N
  a += a_a[a];N
  a += a_a[a];N
#a A_A_AN
  a += a_a[a];N
#aN
#a A_A_AN
  a += a_a_a[a];N
#aN
#a A_AN
  a += a_a[a];N
#aN
#a A_A_AN
  a += a_a_a[a];N
#aN
#a a(__A) || a(__A)N
  a += a_a[a];N
#aN
  a += a_a_a_a[a];N
  (a)a;N
  a a;N
}N
#aN
