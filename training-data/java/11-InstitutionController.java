a a.a.a.a;N
N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.AaAa;N
a a.a.Aa;N
a a.a.Aa;N
N
a a.a.a.AaAaAa;N
a a.a.a.AaAaAa;N
N
a a.a.a.a.a.Aa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.AaAaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.Aa;N
N
a a.a.a.Aa;N
N
a a.AaAa;N
N
@AaAaN
@AaAa("/a")N
a a AaAa {N
	@AaN
	a AaAa aAa;N
N
	// 기관 등록 화면N
	@AaAa(a = "/a")N
	a AaAaAa aAaAa() {N
		a a AaAaAa("/a/a");N
	}N
N
	// 기관 등록N
	@AaAa(a = "/a")N
	a AaAaAa aAa(Aa a) {N
		Aa aAa = a.aAa.aAa(a);N
N
		a a AaAaAa(a AaAa("/a/a/" + aAa));N
	}N
N
	// 접근키 발급N
	@AaAa(a = "/a/{aAa}")N
	a AaAaAa aAaAa(@AaAa Aa aAa) {N
		AaAaAa a = a AaAaAa("/a/a");N
		a.aAa("aAa", aAa);N
N
		a a;N
	}N
N
	// 기관목록 조회N
	@AaAa(a = "/a")N
	a AaAaAa aAa(Aa a)N
			a Aa {N
		AaAaAa a = a AaAaAa("/a/a");N
N
		Aa<Aa> a = a.aAa.aAaAa(a);N
		a.aAa("a", a);N
		a.aAa("a", a.aAa());N
N
		a a;N
	}N
N
	@AaAa(a = "/a/{a}")N
	a Aa<Aa, Aa> a(@AaAa Aa a) {N
		Aa aAa = a.aAa.aAa(a);N
N
		Aa<Aa, Aa> a = a AaAa<Aa, Aa>();N
		a.a("aAa", aAa.aAaAa());N
		N
		a a;N
	}N
	N
	/*N
	 * @AaAa(a ="/a/a") a AaAaAaN
	 * aAaAa(AaAaAa a, Aa a) a AaN
	 * { Aa a0 = a.aAa("a"); Aa.a.a(a0);N
	 * Aa a = a.aAa.aAa(a0);N
	 * AaAaAa a = a AaAaAa("/a/a");N
	 * a.aAa("a",a); a a; }N
	 */N
N
}