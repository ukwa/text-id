a a.a.a.a.a;N
N
a a.a.AaAaAa;N
a a.a.AaAaAa;N
a a.a.AaAaAaAa;N
a a.a.Aa;N
a a.a.AaAaAa;N
a a.a.AaAaAaAa;N
a a.a.AaAaAa;N
a a.a.AaAa;N
a a.a.Aa;N
N
a a.a.a.AaAaAa;N
a a.a.a.AaAaAa;N
N
a a.a.a.a.a.Aa;N
a a.a.a.Aa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.AaAa;N
a a.a.a.a.AaAaAa;N
a a.a.a.a.a.AaAa;N
N
@AaN
a a AaAa {N
	@AaN
	a AaAa aAa;N
N
	// 실습실 목록 조회N
	@AaAa(a = "/a", a = AaAa.A)N
	a AaAaAa aAaAa() {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
N
		Aa<Aa> aAa = a.aAa.aAa();N
		aAaAa.aAa("aAa", aAa);N
N
		a aAaAa;N
	}N
N
	// 실습실 조회N
	@AaAa(a = "/a/{a}", a = AaAa.A)N
	a AaAaAa aAaAa(@AaAa a a) {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
N
		Aa a = a.aAa.aAa(a);N
		aAaAa.aAa("a", a);N
		a aAaAa;N
	}N
N
	// 실습실 등록 폼N
	@AaAa(a = "/a/a", a = AaAa.A)N
	a AaAaAa aAaAa() {N
		a a AaAaAa("/a/a");N
	}N
N
	// 실습실 등록N
	@AaAa(a = "/a", a = AaAa.A)N
	a AaAaAa aAaAa(Aa a, AaAa aAa) {N
		a.aAa.aAa(a, aAa);N
		a a AaAaAa(a AaAa("/a"));N
	}N
N
	// 실습실 수정 폼N
	@AaAa(a = "/a/{a}/a", a = AaAa.A)N
	a AaAaAa aAaAa(@AaAa a a) {N
		Aa a = a.aAa.aAa(a);N
N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
		aAaAa.aAa("a", a);N
N
		a aAaAa;N
	}N
N
	// 실습실 수정N
	@AaAa(a = "/a", a = AaAa.A)N
	a AaAaAa aAaAa(Aa a, AaAa aAa) {N
		AaAaAa aAaAa = a AaAaAa(a AaAa("/a"));N
		a.aAa.aAa(a, aAa);N
		a aAaAa;N
	}N
N
	// 실습실 삭제N
	@AaAa(a = "/a/{a}", a = AaAa.A)N
	a AaAaAa aAaAa(@AaAa a a) {N
		a.aAa.aAa(a);N
		a a AaAaAa(a AaAa("/a"));N
	}N
N
	// 중복 테스트N
	@AaAa(a = "/a", a = AaAa.A)N
	@AaAaN
	a a aAaAa(AaAaAa a) {N
		a a = 0;N
		a {N
			a aAa = Aa.aAa(a.aAa("a"));N
			Aa a = a.aAa.aAa(aAa);N
N
			a (a != a) {N
				a ("A".a(a.aAa())) {N
					a = 0;N
				} a a (a.aAa() == aAa) {N
					a = 0;N
				}N
			}N
N
		} a (Aa a) {N
			a = 0;N
		}N
		a a;N
	}N
N
	// 실습실 삭제N
	@AaAa(a = "/a/a/{a}")N
	a a aAa(@AaAa a a, AaAaAa a) {N
		a[] a = a;N
		AaAaAa a = a;N
		AaAaAaAa a = a;N
		AaAa a = a;N
		// 0. a 해당하는 사진 정보를 조회한다.N
		Aa a = a.aAa.aAa(a);N
		// 0. 해당 물리 경로에 위치한 파일을 읽어온다.N
		a {N
			Aa aAa = a Aa(a.aAa() + a.aAaAaAa() + "_" + a.aAaAaAa());N
N
			a (aAa.a()) {N
				a = a AaAaAa(a AaAaAa(aAa));N
				a = a AaAaAaAa();N
				a = a a[0];N
			}N
N
			a aAa = 0;N
			a ((aAa = a.a(a)) != -0) {N
				a.a(a, 0, aAa);N
			}N
N
			a[] a = a;N
			a = a.aAaAa();N
N
			a a = a.a;N
			a = a.aAaAa();N
			a.a(a, 0, a);N
N
		} a (Aa a) {N
			a.aAaAa();N
		} a {N
			a {N
				a.a();N
				a.a();N
		N
			} a (Aa a) {N
			}N
		}N
	}N
}N
