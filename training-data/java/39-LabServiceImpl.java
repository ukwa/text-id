a a.a.a.a.a;N
N
a a.a.Aa;N
a a.a.Aa;N
a a.a.a.a.a.Aa;N
a a.a.a.Aa;N
a a.a.a.a.AaAa;N
N
a a.a.a.a.a.Aa;N
a a.a.a.a.a.AaAa;N
N
@AaN
a a AaAaAa a AaAa {N
	@AaN
	a AaAa aAa;N
N
	@AaN
	a AaAa aAa;N
N
	@AaN
	a Aa<Aa> aAa() {N
		// 0. 실습실 목록 조회를 한다.N
		Aa<Aa> a = a.aAa.aAaAa();N
		a a;N
	}N
N
	@AaN
	a Aa aAa(a aAa) {N
		// 0. 실습실 조회를 한다.N
		Aa a = a.aAa.aAa(aAa);N
N
		// 0. 사진을 조회한다.N
		Aa a = a.aAa.aAa("A" + aAa);N
		a (a == a) {N
			Aa.a.a("사진이 없습니다.");N
		} a {N
			a.aAaAa(a.aAa());N
			a.aAa(a.aAa());N
			a.aAaAaAa(a.aAaAaAa());N
			a.aAaAaAa(a.aAaAaAa());N
		}N
		a a;N
	}N
N
	@AaN
	a a aAa(Aa a, AaAa aAa) {N
		Aa a = a;N
		// 0. 입력받은 정보가 유효한가? 자바스크립트로 처리N
		// 0. 실습실 조회를 한다.N
		Aa aAa = a.aAa.aAa(a.aAa());N
N
		// 0. 정보가 존하지않는가?N
		a (aAa == a) {N
			// 0. 실습실 등록을 한다.N
			a.aAa.aAa(a);N
N
			// 0-0. 실습실 사진이 등록 되었는가?N
			a (!"".a(aAa.aAaAa())) {N
				Aa[] a = aAa.aAaAa().a("/");N
				// 사진이 맞는가?N
				a ("a".a(a[0])) {N
					// 0-0. 사진 등록을 한다.N
					a = aAa(a, aAa);N
N
					// 파일이 잘들어왔는지 판단.N
					a aAa = AaAaAa(N
							a.aAa() + a.aAaAaAa() + "_" + a.aAaAaAa());N
N
					// 존재할 경우 (파일 정보등록)N
					a (aAa) {N
						a.aAa.aAa(a);N
					}N
				}N
			}N
		} a { // 존재하지 않는다.N
			a ("A".a(aAa.aAa())) {N
				// 0-0. 실습실 수정을 한다. (삭제된 실습실을 신규 실습실로 변경)N
				a.aAa.aAa(a);N
N
				// 기존 실습실에 사진이 존재하는가?N
				a = a.aAa.aAa("A" + a.aAa());N
				// 0-0. 실습실 사진이 등록 되었는가?N
				a (!"".a(aAa.aAaAa())) {N
					Aa[] a = aAa.aAaAa().a("/");N
					// 사진이 맞는가?N
					a ("a".a(a[0])) {N
N
						// 0-0. 사진 등록을 한다.N
						a = aAa(a, aAa);N
N
						// 파일이 잘들어왔는지 판단.N
						a aAa = AaAaAa(N
								a.aAa() + a.aAaAaAa() + "_" + a.aAaAaAa());N
N
						// 존재할 경우 (파일 정보등록)N
						a (aAa) {N
							a.aAa.aAa(a);N
						}N
					}N
				}N
			}N
		}N
	}N
N
	@AaN
	a a aAa(Aa a, AaAa aAa) {N
		Aa a = a;N
		// 0. 입력받은 정보가 유효한가? 자바스크립트로 처리N
N
		// 0. 실습실 수정을 한다.N
		a.aAa.aAa(a);N
N
		// 0-0. 실습실 사진이 등록 되었는가?N
		a (!"".a(aAa.aAaAa())) {N
			Aa[] a = aAa.aAaAa().a("/");N
			// 사진이 맞는가?N
			a ("a".a(a[0])) {N
				// 0-0. 사진 등록을 한다.N
				a = aAa(a, aAa);N
N
				// 파일이 잘들어왔는지 판단.N
				a aAa = AaAaAa(N
						a.aAa() + a.aAaAaAa() + "_" + a.aAaAaAa());N
N
				// 존재할 경우 (파일 정보등록)N
				a (aAa) {N
					// 기존 사진 존재 유무N
					a (a != a.aAa.aAa("A" + a.aAa())) { // 존재N
						a.aAa.aAa(a);N
					} a {N
						a.aAa.aAa(a);N
					}N
				}N
			}N
		}N
	}N
N
	@AaN
	a a aAa(a aAa) {N
		// 0. 실습실 조회를 한다.N
		Aa a = a.aAa.aAa(aAa);N
N
		// 0. 데이터가 존재하는가?N
		a (a != a) {N
			// 0. 실습실 상태값을 A로 변경한다.N
			a.aAa.aAa(aAa);N
			// 사진이 존재하는가?N
			a (a.aAa.aAa("A" + a.aAa()) != a) {N
				a.aAa.aAa("A" + a.aAa());N
			}N
		}N
	}N
N
	// 사진 생성N
	a Aa aAa(Aa a, AaAa aAa) {N
		Aa a = a Aa();N
N
		Aa aAa = aAa.aAaAa();N
		Aa aAa = Aa.aAa(Aa.aAa());N
N
		Aa a = "A:\\Aa\\";N
		Aa aAa = a + aAa + "_" + aAa;N
N
		AaAa(a); // 디렉토리 확인후 없으면 생성N
N
		a.aAa("A" + a.aAa());N
		a.aAaAa(a.aAa());N
		a.aAa(a);N
		a.aAaAaAa(aAa);N
		a.aAaAaAa(aAa);N
N
		a {N
			aAa.aAa(a Aa(aAa));N
		} a (Aa a) {N
			a.aAaAa();N
		}N
		a a;N
	}N
N
	// 디렉토리 확인 및 자동 생성N
	a a AaAa(Aa a) {N
		Aa Aa = a Aa(a);N
		a (!Aa.a()) {N
			a {N
				Aa.a();N
			} a (Aa a) {N
				a.aAaAa();N
			}N
		}N
	}N
N
	// 파일 생성 확인N
	a a AaAaAa(Aa a) {N
		Aa Aa = a Aa(a);N
		a (Aa.aAa()) {N
			a a;N
		} a {N
			a a;N
		}N
	}N
}N
