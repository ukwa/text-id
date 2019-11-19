a a.a.a.a.a;N
N
a a.a.Aa;N
N
a a.a.a.AaAa;N
N
a a.a.a.a.a.Aa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.a.AaAa;N
a a.a.a.a.AaAaAa;N
a a.a.a.a.a.AaAa;N
N
a a.a.a.a.a.Aa;N
a a.a.a.a.a.AaAaAa;N
N
@AaAaN
a a AaAa {N
	@AaN
	AaAaAa aAa;N
	@AaN
	AaAaAa aAaAa;N
N
	N
	//N
	@AaAa(a = "/a")N
	@AaAaN
	a Aa<Aa> aAaAa(Aa a) {N
		Aa.a.a("통과0");N
		Aa.a.a(a.aAa());N
		Aa<Aa> a = aAa.aAa(a);N
		a a;N
	}N
	N
	// 예약 목록조회N
	@AaAa(a = "/a")N
	a AaAaAa aAaAaAa() {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
		N
		Aa<Aa> a = aAaAa.aAa();N
		aAaAa.aAa("a", a);N
		a aAaAa;N
	}N
N
	// 예약 조회N
	@AaAa(a = "/a/{a}")N
	a AaAaAa aAaAa(@AaAa("a") a a) {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
		Aa a = aAa.aAa(a);N
N
		aAaAa.aAa("a", a);N
		a aAaAa;N
	}N
N
	// 예약 등록 폼N
	@AaAa(a = "/a/a")N
	a AaAaAa aAaAa() {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
		N
		Aa<Aa> a = aAaAa.aAa();N
		aAaAa.aAa("a", a);N
		N
		a aAaAa;N
	}N
N
	// 예약 등록N
	@AaAa(a = "/a")N
	a AaAaAa aAaAa(Aa a,AaAa a) {N
		a aAa = aAa.aAa(a,a);N
		N
		a (aAa == a) {N
N
			// a..이미 등록된 예약이 존재합니다 알려주기N
			a a AaAaAa(a AaAa("/a/a"));N
		}N
		N
		a a AaAaAa(a AaAa("/a"));N
	}N
N
	// 예약 수정 폼N
	@AaAa(a = "/a/{a}/a")N
	a AaAaAa aAaAa(@AaAa("a") a a) {N
		AaAaAa aAaAa = a AaAaAa("/a/a");N
		N
		Aa a = aAa.aAa(a);N
		Aa<Aa> a = aAaAa.aAa();N
		N
		aAaAa.aAa("a", a);N
		aAaAa.aAa("a", a);N
N
		a aAaAa;N
	}N
N
	// 예약 수정N
	@AaAa(a = "/a")N
	a AaAaAa aAaAa(Aa a) {N
		a aAa = aAa.aAa(a);N
N
		a (aAa == a) {N
			Aa.a.a("------------------------");N
			a a AaAaAa(a AaAa("/a/" + a.aAa() + "/a"));N
		}N
		Aa.a.a("++++++++++++++++++");N
		a a AaAaAa(a AaAa("/a"));N
	}N
N
	// 예약 삭제N
	@AaAa("/a")N
	a AaAaAa aAaAa(a a) {N
		aAa.aAa(a);N
		Aa.a.a("통과");N
		a a AaAaAa(a AaAa("/a"));N
	}N
}N
