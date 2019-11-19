A_AaAa aN
;********************************************************N
; A[a0] -->[a0] , [A]N
; Aa0 - N
; Aa0 - N
; [A] - N
; A  ,   a0,a0N
AaAa:N
    A     Aa0,AN
N
    A     A,Aa0N
    A     AaAaAa,AN
    A     A,A0N
    A     Aa0,AN
N
    A     A,Aa0N
    A     AaAaAa,AN
    A     A,Aa0N
    A     A0,AN
N
    A     Aa0N
    A     Aa0N
    A     Aa0N
    A     $-0N
    AN
;***************************************** N
aN
N
A_Aa0AaAa	aN
Aa0AaAa:N
	A		A,@0a0AN
	A		A,AN
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
aN
N
A_A_A0AaAa aN
A0AaAa:N
	A	Aa0AaN
	A		Aa0,AN
	A	Aa0AaAaN
	A		A,@A_aN
	A	AaA0AaN
	A	Aa0N
	A	Aa0AaAaN
	A	AaA0AaN
	AN
N
A0AaAa:N
	A	Aa0AaN
	A		Aa0,AN
	A	Aa0AaAaN
	A	AaA0AaN
	A	Aa0N
	A	Aa0AaAaN
	A		A,@A_aN
	A	AaA0AaN
	AN
aN
N
A_A_A0AaAa aN
A0AaAa:N
	A		Aa0,AN
	A	Aa0AaAaN
	A		A,@A_aN
	A	AaA0AaN
	A	Aa0N
	A	Aa0AaAaN
	A	AaA0AaN
	AN
N
A0AaAa:N
	A		Aa0,AN
	A	Aa0AaAaN
	A	AaA0AaN
	A	Aa0N
	A	Aa0AaAaN
	A		A,@A_aN
	A	AaA0AaN
	AN
aN
N
N
A_AaAaAa  aN
;AaN
	A_Aa	a		0N
	A_Aa a		0N
N
    A_AaAa   a     0   ; A0aN
	A_Aa		a		0	; N
	A_AaAa    a		0	; N
	A_AaAa	a		0N
	A_Aa	a		0	; ,  A_A N
	A_AaAa		a		0N
N
N
N
	A_AaAa	==  0			; 0aN
	A_AaAa	==	0			; 0*(0+0)= 0aN
	A_AaAaAa	==	0			; 0*0.0A= 0AN
N
AaAa0a:N
	A		A,@0N
	A		$+0N
AaAa:N
	A		A,@0N
AaAa0a:N
	A		Aa0a,AN
	A		Aa,A_AaAaN
	AN
N
AaAa:N
	A		Aa,A_AaAaN
	A		$+0N
	A		A,Aa0aN
	A		AaAa,AaAaN
	AN
	A		Aa	N
N
	A		Aa,A_AaAaN
	AN
	A		Aa,A_AaAaN
	A		_AaAaAaN
	A		Aa,A_AaAaN
N
	A		Aa,A_AaAaN
	A		$+0N
N
	A		A,@~(0<<A_Aa)			; A_AN
	A		Aa,AN
	A		Aa,A_AaAaN
	A		A,@A_AaAaN
	A		Aa0a,AN
N
	A		A,@A_AaAaAa		;N
	A		Aa0a,AN
	AN
N
N
_AaAaAa:N
	A		Aa,A_AaAaN
	AN
	A		A,Aa0aN
	A		AaAa,AaAaN
	A		_AaAaAaAaN
N
	A		A,Aa0aN
	A		AaAa,AaAaN
	A		Aa,A_AaN
	A		Aa,A_AaAaN
	AN
N
_AaAaAaAa:N
	A		A,Aa0aN
	A		AaAa,AaAaN
	AN
	A		Aa,A_AaAaN
	A		$+0		N
N
	A		Aa,A_AaAaN
	A		A,@A_AaAaN
	A		Aa0a,AN
	AN
N
	A		Aa,A_AaN
	AN
aN
N
A_AaAaAa	aN
;  0a  0.0a N
	A		A,AaN
	A		A,AaN
	A		A,@0<<A_AN
	A		AaAa,AaAa			; AN
	A		_AaAaAaN
N
	A		A,@0<<A_AaN
	A		Aa,AN
	A		Aa,A_AaN
	A		Aa,A_AaAa				; N
N
_AaAaAa:N
aN
N
N
;	A_Aa0AaAa	; 0 AN
A_Aa0AaAa  aN
; 0 AN
Aa0AaAa:N
	A		A,@0a0AN
	A		A,AN
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_0N
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
	A	@A_AN
a	N
;**********************************************************************************N
; 0N
;******************************************************N
;  A N
;  0 N
;  0 0.0a N
;  0 0.0a   A_Aa_AN
;  0 0a  A_Aa_Aa0aN
;  0     A_Aa_AN
;  0  A N
;        A_Aa	a		Aa0N
;        A_A       a     Aa0N
;  0 AaAa(AaAa) A_AN
;  0            A_Aa_AaAa  N
;******************************************************N
N
N
;************************************************************************N
;    0   N
;    N
;//a:  A_Aa_A      - N
A_Aa_A   a  N
N
	A		A,A_AaN
	A		A,AaAaN
	A		A,@0<<A_AN
	A		Aa0,A							; N
	A		AaAa,A							;  N
N
	A		Aa0,A_A                        ; A N
	A		AaAaAaN
N
	A		A,AaAa							; A0AN
	A		AaAa,AaAaN
	A		AaAaAaN
	A		AaAa,A_Aa					; AaAa=0,N
	A		AaAaAa							; N
N
	A		AaAa,A_AN
	A		AaAaN
N
	A  	AaAa								;    +------+       +------N
	A		AaAa,A_AaAa					;----+      +-------+N
	A		AaAaAa							;    |      | N
                                                ;    |      +---N
                                                ;    +----------N
                                                ;   A_AaAa=0, 0.0aN
N
AaAa:N
	A		AaAa,A_AaAaN
N
	A		A,@0N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		AaAaAaN
N
	A		A,@0N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		AaAa0						;  [0,0]  	-  0N
N
	A		A,AaAaN
	A		A,@0N
	A		AaAa,AaAaN
	A		AaAa0						;  [0,0]   	-  0N
N
	A		A,@0                           ;   0*0.0=0.0aN
	A		A,AaAaN
	A		AaAa,AaAaN
	A		AaN
N
	A		AaAa,A_Aa				; 	[0..]  -      0*0.0=0.0aN
	A		AaAaAaN
Aa:                                    ;     0a, 0.0aN
	A		AaAa,A_Aa				;	[0,0]	-	   0.0a-0.0a] - N
	A		AaAaAaN
N
AaAa0:N
AaAa0:N
	A		A,AaAaN
	A		AaAaAa,AN
	A		A0N
N
	A		AaAaN
	A		A,AaAaN
	A		A,@0N
	A		AaAa,AaAaN
	A		AaAaN
N
AaAaAa:N
	A		A_Aa,A_AaN
AN
;************************************************N
;   0.0a 0a )N
;  N
;//a:  A_Aa_A      - N
A_Aa_A aN
;********  0.0a, 0A, ***********N
	A		AaAa,A_AaAa               ; N
	A		_AaAaN
N
	A		AaAa,0N
	A		_AaAa                       ; AaAa=0 0   = 0,0aN
N
	A  	AaAaN
	A		AaAa,0N
	A		_AaAaN
	A		AaAa,A_Aa				; [0..]  -    A0.0aN
	A		AaAa,A_AaAaN
_AaAa:	N
;************************************************N
aN
N
;   0.0a 0a )N
A_Aa_Aa0a  aN
	A		A,AaAaN
	A		AaAa,AaAaN
	A		AaAaN
aN
N
A_Aa_AaAa  a    N
	A		A_Aa,A_AaN
	A     A,A_AaN
	A		A,@0<<A_AN
	A		AaAa,AN
aN
N
A_Aa_Aa  aN
;//a: A_Aa_AaN
; a: A_Aa  N
;A_Aa:N
;	A		AaAa,A_AaAaN
;	A		AaAa,A_AaN
;	AN
N
;a A_Aa      - N
A_Aa:N
	A		A,@AaAaN
	A		AaAa,AN
N
	A		A,@A_Aa+0N
	A		AaAa0,AN
	A		A,@AaAaN
	A		AaAaAa,AN
N
	A		A0N
	A		AaAaAaN
	A		AaAa0N
	A		$-0N
	A      AaAa,A_AaN
	A		A,@0                            ; 0a0N
	A		AaAa,A                      ; 0aN
	AN
N
;*******************************************************************N
;//a AaAaN
AaAa:N
	A		A,@0N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		_AaAaAaN
N
	A		A,@0N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		_AaAaAaN
N
	A		AaAa,AaAaN
	A    AaAaN
	A		AaAa0,AN
	A		AaAa,AaAaN
	A    	AaAa0N
	A		AaAa,AaAaN
	A   	AaAa0N
	A		A,@0N
	AN
N
N
_AaAaAa:N
_AaAaAa:N
	AN
	AN
N
N
aN
N
A_Aa_Aa   aN
;//a: AaAaN
A_Aa_Aa		==	0*0N
A_Aa_Aa	==	0*0N
A_Aa_Aa	==	0*0N
A_Aa_Aa	==	0*0N
_0AaAaAa:N
	A		A,AN
	A	@0a0N
	A	@0a0N
	A	@0a0N
	A	@~0a0N
	A	@0N
	A	@0N
_0AaAaAa:N
	A	@0a0N
	A	@0a0N
	A	@0a0N
	A	@~0a0N
	A	@0N
	A	@0N
_0AaAaAa:N
	A	@0a0N
	A	@0a0N
	A	@0a0N
	A	@~0a0N
	A	@0N
	A	@0N
_0AaAaAa:N
	A	@0a0N
	A	@0a0N
	A	@0a0N
	A	@~0a0N
	A	@0N
	A	@0N
N
N
;*******************************************************************N
;//a: AaAaN
AaAa0AaAa:N
    A     AaAa0,AN
	A		AaAa0N
	A		A,@AaAaN
	A		AaAaAa,AN
;_AaAaAa:N
	A		A,AaAa0N
	A	_0AaAaAaN
	A		A,A0N
	A		AaAa,AaAaN
	AN
N
	A		AaAa0N
	A		AaAa0N
	A		AaAaAaN
	A		A,AaAa0N
	A		A,@A_AaN
	A		AaAa,AaAaN
	A		$-0                        ; _AaAaAaN
	AN
N
aN
N
;**********************************************************************************N
;0A          N
A_AaAa	aN
/*N
 0 -0a N
A_A_Aa_Aa	==  0N
A_A_0_Aa		==  0N
A_A_Aa_Aa	==  0N
A_A_0_Aa		==  0N
A_A_0_Aa		==  0N
A_A_Aa_Aa	==  0 N
*/N
;/*N
; 0a N
A_A_Aa_Aa	==  0N
A_A_0_Aa		==  0N
A_A_Aa_Aa	==  0N
A_A_0_Aa		==  0N
A_A_0_Aa		==  0N
A_A_Aa_Aa	==  0 N
;*/N
N
N
A_Aa          a     A_AaN
A_AaAa		a		A_Aa	+ 0  ;N
A_Aa         a     A_Aa	+ 0  ; N
A_Aa  		a     A_Aa	+ 0  ;N
N
;  N
	A		AaAa,A_Aa			; 0N
	A		_A_Aa					; N
N
    A 	A,A_AaN
	A		A,AaAaN
	A     A,@0<<A_AN
	A		AaAa,AaAaN
	A		_A_AaAaN
;***************** ************N
	A		A,@0<<A_AN
	A		AaAa,AN
	N
;_A_AaAa:N
	A		AaAa,A_AaN
	A		_A_AaAa0_0N
N
N
;***************  ******	N
_A_AaAa0_0:				;0->0,0N
	A		A,@A_A_Aa_AaN
	A		A,A_AaN
	A		AaAa,AaAaN
	A		_A_AaN
N
	A		A,A_AaN
	A		A,@A_A_Aa_AaN
	A		AaAa,AaAaN
	A		_A_AaN
N
	A		AaAa,A_AaAa		; N
	A		_A_AaAaAaN
N
N
;***************  ******	,0N
_A_AaAa0_0:				; 0-> 0 0N
	A		AaAa,A_AaAa		; N
	A     _A_AaN
	N
	A		A,@A_A_0_AaN
	A		A,A_Aa                ;    0    0     0                0          0N
	A		AaAa,AaAa		;    |____|_____|________________|___________|N
	A		_A_Aa             ;       0a   0a             0a        aN
                                    ;         [  0 ]        0     ]                  N
	A		A,A_Aa				;         [0,0]     (0,0]            (0,0)      [0..)N
	A		A,@A_A_0_AaN
	A		AaAa,AaAaN
	A		_A_Aa0_Aa			; 0 - 0[0-0]0N
N
	A		A,A_AaN
	A		A,@A_A_0_AaN
	A		AaAa,AaAaN
	A		_A_Aa0_Aa			; 0,   0<A_Aa<<0N
N
	A		A,@A_A_Aa_Aa			; 0- 0 N
	A		A,A_AaN
	A		AaAa,AaAaN
	A		AaAa,A_Aa			; 0N
	A		_A_AaAaAa		; 0N
N
N
;*******************************************N
_A_Aa0_Aa:N
	A		AaAa,AaAaN
	A		$+0N
_A_Aa0_Aa:N
	A		AaAa,AaAaN
	A     A_AaN
	A     A_AaAaN
N
	A     A,A_AaAaN
	A     A,@0A0N
	A     AaAa,AaAaN
	A     _A_AaAaN
N
	A   A_AaAaN
	A     A,@0A0AN
	A		A,@A_AaN
	A     AaAaAa,AN
	N
	A		A,@A_Aa+A_A_Aa_Aa  ;  0N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		$+0N
N
	A     A,A_AaN
	A     A0,AN
N
	A     A,@0A0N
	A		A_AaAa,A				; A0=0, A+0N
	A		_A_AaAaN
N
;***************************************N
_A_Aa:				; N
	A		A_AaAa    N
_A_AaAa:	N
	A		AaAa,A_AaAaN
_A_AaAaAa:	N
	A		A_AaN
	A 	_A_AaN
N
;************************************N
_A_AaAa:N
	A     A,@A_A_0_Aa+0  N
	A     A,A_AaN
	A     AaAa,AaAa		; N
	A		_A_AaAaN
N
	A	A_AaAa				; N
	A		A,@0A0aN
	A		A,@0N
	A		AaAa,AaAa		; <=0  N
	A		AaAa,A_Aa		; >0  N
	A     _A_AaN
_A_AaAa:N
	A		A_AaN
N
N
_A_Aa:N
a  N
N
A_Aa0A_Aa  aN
;*******************************************************************************N
AaAa:													; ?????,????N
	A		AaAaN
	A		AaAaN
;*******************************************************************************N
AaAa_Aa0:											; ??  0N
	A		AaAa,A_AaAaN
	A		AaAaN
N
	A		AaAaN
	A		AaAa,0N
	A		AaAa,Aa_AaAN
	A		AaAa,0N
N
	A		AaAa,A_AaAaN
	N
	A		A,AaAaN
	A		A,@(A_AaAa0+A_AaAa0)N
	A		A,@A_AaAa0;							 	; ??? ??0?,??  0 ??N
	A		AaAa,AaAaN
	A		AaAaN
N
	A		AaAaN
	A		AaAa									; ??  0 ????0?,?????N
	A		AaAaN
	A		AaAa									;	N
;*******************************************************************************N
AaAa_Aa0_Aa:N
	A		AaAa,A_AaAaN
	A		AaAaN
N
	A		AaAaN
	A		AaAa,0N
	A		AaAa,Aa_AaAN
	A		AaAa,0N
N
	A		AaAa,A_AaAaN
	N
	A     AaAaN
	A		AaAa,0									;  ??0??????N
	A		AaAaN
N
	A		A,AaAaN
	A		A,@A_AaAa0;							; 0; ??? ??0?,??  0 ??N
	A		AaAa,AaAaN
	A		AaAaAaN
N
	A		AaAaN
	A		AaAa									; ??  0 ????0?,?????N
	A		AaAaN
	A		AaAa									;	N
N
AaAaAa:										;N
	A		AaAaN
	A		AaAaN
;***********************************************************************************N
AaAa_Aa0:N
	A		AaAa,A_AaAaN
	A		AaAaN
N
	A		AaAaN
	A		AaAa,0N
	A		AaAa,Aa_AaAN
	A		AaAa,0N
N
	A		AaAa,A_AaAaN
	N
	A     AaAaN
	A		AaAa,0									;  ??0??????N
	A		AaAaN
N
	A		A,AaAaN
	A		A,@(A_AaAa0+A_AaAa0);					; ??? 0???N
	A		AaAa,AaAaN
	A		AaAaAaN
N
	A		A,AaAaN
	A		A,@A_AaAa0								; ??? 0N
	A		AaAa,AaAaN
	A		_AaAa_Aa0AaN
N
	A		AaAaN
	A		AaAaAaN
	A		AaAaN
	A		AaAa,A_AaAaN
	A		_AaAaAa0								;	N
N
_AaAa_Aa0Aa:N
_AaAa_AaAa:N
	A		AaAaN
	A		AaAaN
	A		AaAaN
;***********************************************************************************N
AaAa_AaAa:N
	A		AaAa,A_AaAaN
	A		$+0N
N
	A		AaAaN
	A		AaAaN
N
	A		AaAa,A_AaAaN
	A		AaAaN
N
	A		AaAaN
	A		AaAa,0N
	A		AaAa,Aa_AaAN
	A		AaAa,0N
N
	A		AaAa,A_AaAaN
	N
	A     AaAaN
	A		AaAa,0									;  ??0??????N
	A		AaAaN
N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		AaAa									; ??? 0 ???N
N
	A		A,@(A_AaAa0+A_AaAa0);					; ??? 0 ???N
	A		AaAa,AaAaN
	A		AaAaN
N
	A		A,AaAaN
	A		A,@A_AaAa0								; ??? 0N
	A		AaAa,AaAaN
	A		_AaAaAa0N
N
	A      AaAa,AaAa						;  ?? 0,0,0???,??0N
	A		$+0N
_AaAaAa0:N
	A		AaAa,AaAaN
	A		AaAaN
	A		AaAaAaN
N
	A		A,AaAaAaN
	A		A,@0N
	A		AaAa,AaAa						; 0???????N
	A		_AaAa_AaAaN
N
	A	AaAaAaN
	A		AaAa0,AN
	A		AaAa0N
	A		AaAa0N
N
	A		A,AaAa0N
	A		A,@0N
	A		A,@AaAa-0N
	A		AaAaAa,AN
	A		A,AaAaN
	A		A0,AN
	A		_AaAa_AaAaN
;***********************************************************************************N
aN
N
A_Aa0A_Aa  aN
Aa0A_Aa:											;  0AN
;***********************************************************************************N
	A		A,AaAaN
	A		A,AN
	A		AaAa_Aa0N
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_AaN
	A		AaAa_Aa0_Aa						; 0 0 A N
	A		AaAa_Aa0N
	A		AaAa_AaAaN
;	A		AaAa										; N
;***********************************************************************************N
AaAa:N
	AN
aN
;a        a = 0a0N
;---+   +---+      a = 0a0 ,A0N
;   |   |   |    ??0a/0=0.0aN
;   +---+   +---N
;    0a/0 = 0.0aN
;N
;N
;N
;********************************************N
A_Aa0A_Aa  aN
	A	AaAaN
	A		A,AaAaN
	A		A,@0<<Aa_AaAN
	A		AaAa,AaAaN
	A		_AaAaN
_AaAa:N
;N
	A		A,@0<<Aa_AaAN
	A		AaAa,AN
N
	A    AaAaN
	A		A,@0A0N
	A		AaAa,AN
N
	A		_AaAaN
_AaAa:N
;N
	A		A,@0				; 0*0 N
	A		A,AaAaN
	A		AaAa,AaAaN
	A		_AaAaAa						; 0N
N
	A     AaAaN
N
	A		A,AaAaN
	A		A,@0a0AN
	A		A,@A_AaAaAa					;0N
	A		AaAa,AaAaN
	A		_AaAaAaN
N
	A		AaAa,A_AaAaN
;  a N
;	A		AaAa,Aa_AaAN
;	A      AaAaAa,AaAa_AN
;	A		AaAa,Aa_AaAN
;	A      AaAaAa,AaAa_AN
	A		_AaAaN
_AaAaAa:N
	A		A,AaAaN
	A		A,@0a0AN
	A		A,@A_AaAaAaN
	A		AaAa,AaAaN
	A		AaAa,A_AaAaN
	A		_AaAaN
N
_AaAaAa:N
	A		AaAa,A_AaAaN
_AaAa:N
aN
;********************************************N
; N
N
A_Aa0Aa   aN
Aa0Aa:N
	A		AaAa0,A		;N
	AN
	A		A,@0N
	A		Aa0,0N
	A		A,@0N
	A		Aa0,0N
	A		A,@0N
	A		Aa0,0N
	A		A,@0N
	A		Aa0,0N
	A		A,@0N
	AN
	N
	A		Aa0,0N
	A		A,@0a0N
	AN
	N
	A		Aa0,0N
	A		A,@0a0N
	AN
N
	A		Aa0,0N
	A		A,@0a0N
	AN
	N
	aN
aN
N
;  0N
;   AaAaAa,A_AaAa   = 0   N
;       AaAaAa = 0 N
;N
AaAaAa		aN
;**************************  0 a  N
	A		AaAaAa,A_AaAaN
	A		_AaAaAaN
N
	A		A,AaAaAaN
	A		A,AaAaAaN
	A		A,AaAaAa	N
	A		AaAa,AaAaN
	A		_AaAaAaN
N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaAaAaN
N
	A		A,@0N
	A		AaAaAa,AN
N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaAaAaN
N
	A		A,@0N
	A		AaAaAa,AN
N
_AaAaAaAa:N
	A		AaAaAaN
_AaAaAaAa:N
	A		AaAaAaN
_AaAaAaAa:N
	A		AaAaAaN
_AaAaAa:	N
aN
N
;****************************************************N
; ,N
;  A= A-AN
;     A > AN
Aa  	a	A,AN
	A		A,AN
	A		A,AN
N
	A		A,A+0N
	A		A+0,AN
	A		AaAa,AaAaN
	A		AN
aN
N
N
N
A_A   aN
;*************************************************************************N
;    0<<0N
;  < N
;0   , N
;0 0N
;A0N
;AN
;A0AN
;AN
;A0N
;  0   N
;                 0a 0 0     N
;                    |||| ||||__  0/0N
;                    |||| |||___  0/0N
;                    |||| ||____  0/0N
;                    |||| |_____  0/0N
;                    ||||_______  0/0N
;                    |||________  0/0N
;                    ||_________  0/0N
;                    |__________  0/0       N
;*******************************************************************************N
;             0                    ;       AN
;        0 0                    ;         AN
;        0                    ;           AN
;N
;N
;            0    0               ;  A<AN
;          0 0    0               ;  A<AN
;         0 0    0               ;  A<AN
;        0 0    0               ;  A>AN
;            0                    ;  A=0           ,  0 0N
;          0 0    0               ;  A<A       0 0N
;         0 0    0               ;  A<A       0 0N
;        0 0    0               ;  A>A      ,  0 0N
;         0 0                    ;                ,  0 0N
;        0 0    0               ;  0A>A       ,  0 0N
;         0 0                    ;                 0 0N
;*******************************************************************************N
;             0                    ;       AN
;            0                    ;         AN
;        0                    ;           AN
;N
;            0    0               ;  A>=AN
;            0                    ; 0  0 0N
;N
;            0 0 0N
;*******************************************************************************N
;N
;     0    		  0A0    0        Aa      A0N
;       0 0         0A0  0        Aa    A0N
;                           0       Aa        A0,   Aa0N
A:N
    A     Aa0         ;AaN
    A     Aa0N
    A      Aa0,0       ;A0=0N
_AaAa:N
	A		AaAa,AaAaN
    A     Aa0         ;AaN
N
    A     Aa0         ;AaN
    A     A,Aa0       ;AaN
    A     A,Aa0       ;  AaN
    A     AaAa,AaAaN
    A     $+0N
    A     Aa0,AN
    A      Aa0,0       ;;Aa,0N
N
	A		AaAa,AaAaN
	A     $+0N
N
	A		Aa0N
    A     _AaAaN
    AN
    N
    N
	A		Aa0N
	A		AaAa,AaAaN
		N
    A     Aa0         ;AaN
    A		Aa0N
	A     $-0N
    AN
;******************************************************************N
aN
N
A_A  aN
;N
;  AaAaAa  N
;  Aa0,Aa0N
;     0    		  0A0    0        Aa      A0N
;       0 0         0A0  0        Aa    A0N
;                           0       Aa        A0,   Aa0N
A:N
    A     Aa0         ;AaN
	A		Aa0N
N
	A		A,A0N
	A		Aa0,A		;  A0:A0    Aa N
N
	A		AaAaAaN
	N
	A		A,A0N
	A		Aa0,AN
N
	A		AaAaAaN
	N
	A		A,A0N
	A		Aa0,A		;  A0:A0    Aa N
N
	A		AaAaAaN
	N
	A		A,A0N
	A		Aa0,AN
N
    A     Aa0N
    A      Aa0,0       ;A0=0N
_AaAaAa:N
	A		AaAa,AaAaN
    A     Aa0         ;AaN
	A     Aa0N
N
    A     Aa0         ;AaN
	A		Aa0N
N
	A		A,Aa0N
	A		A,Aa0N
	A		AaAa,AaAaN
	A		_AaN
	A		AaAa,AaAaN
	A		_AN
N
	A		A,Aa0N
	A		A,Aa0N
	A		AaAa,AaAaN
	A		_AaN
_A:N
	A		A,Aa0N
	A		Aa0,AN
	A		AaAa,AaAaN
	A		Aa0N
N
	A		A,Aa0N
	A		Aa0,AN
N
    A      Aa0,0       ;;Aa,0N
N
_Aa:N
	A		A,Aa0N
	A		A,Aa0N
	A		AaAa,AaAaN
	A     $+0N
N
	A		Aa0N
    A     _AaAaAaN
    AN
    N
    N
	A		Aa0N
	A		AaAa,AaAaN
		N
    A     Aa0         ;AaN
	A		Aa0N
    A		Aa0N
	A     $-0N
    AN
;******************************************************************N
aN
N
N
A_AaAa  aN
;*************************************************************************N
;  N
;N
;0   , N
;0 0N
;A0A0N
;AN
;A0AN
;AN
;AN
;N
;     0 0    0A0  0       Aa      A0N
;       0         0A0   0        Aa    A0N
;                           0       Aa        A0N
;                         0        Aa       A0N
A:N
    A     Aa0         ;AaN
    A     Aa0         ;AaN
    A     Aa0N
    A      Aa0,0       ;A0=0N
_AaAa:N
    A     Aa0         ;AaN
    A     Aa0         ;AaN
    A     A,Aa0       ;AaN
    A     A,Aa0       ;AaN
    A     AaAa,AaAaN
    A     $+0N
    A     A,Aa0       ;AaN
    A     Aa0,A       ;Aa,AN
    A      Aa0,0       ;;Aa,0N
N
	A		Aa0N
	A		$+0N
	AN
	A		AaAa,AaAaN
    A     Aa0         ;AaN
    A     _AaAaN
;******************************************************************N
aN
N
N
N
A_AaAa aN
;****************************************************N
; N
;0a0     N
;0 0N
;   0N
;   0N
;   N
;  A -  N
;  Aa0 -  N
;   - Aa0 = [A]N
;        A = [A]* Aa0N
AaAa:N
	A		Aa0N
	A		Aa0N
	A		Aa0,0				; A0=0 ,0N
N
	A		Aa0,0N
	A		Aa0,AN
	A		Aa0N
	A		$+0N
	A		A,Aa0N
	AN
N
	A		AaAa,AaAaN
	A		Aa0N
	A		AaAa,AaAaN
	A		Aa0N
	A		$-0N
aN
N
N
;A ,  ,, N
/*N
AaAaAa     a     0a0AN
	A_AaAa       a	0N
	A_AaAa   	    a	0N
    A_AaAa0a 	a	0N
AaAa		a		0a0AN
AaAaAa	a		0a0AN
N
AaAa		a	 Aa0			; A0A0A,A0N
 A_Aa0     a     0N
 AaAa    a	    0<<A_Aa0;A0 aN
N
*/N
;***************** 0N
; 0N
A_AaAaAa0			aN
;**********0a*****************N
;  0a    0/0= 0/0	N
; AaAaAa    A0 0 0 0 0 0 0 0N
;                   |       |____AaAaN
;                   +____________AaAaN
;*******************************************N
;**********0a*****************N
;  0a    0/0= 0/0	N
;*******************************************N
;   0A N
	AaAaAa		==		AaAa0N
	AaAa		==		AaAa0	+	0N
	AaAaAa	==		AaAa0	+	0N
N
 	AaAa    		==    	0<<Aa_AN
N
	AaAa		==		0N
	A_AaAaAa==		0			;    0*0=0aN
	AaAa0a	==		0			;   0N
N
	A_AaAa		==		0N
	A_AaAa			==		0N
	A_AaAa0a		==		0N
N
	A		A,AaAaAaN
	A		A,AaAaN
	A		A,@AaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		A,@AaAaN
	A		AaAaAa,AN
    A     A,@AaAaN
    A     AaAa,A    N
    A		AaAaAa,A_AaAa0a			;0N
    A     _AaAaN
_AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     _AaAaAa        	N
N
    A     AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
N
	A		AaAaAa,Aa_AN
	A		_AaAaN
N
    A      AaAaAa,A_AaAaN
	A		AaAaAa,A_AaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     _AaAaN
N
_AaAa:	N
    A      AaAaAa,A_AaAaN
    A		AaAaAa,A_AaAa0aN
    A		AaAaAaN
	A		_AaAaN
N
_AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		AaAaAa,A_AaAa0aN
	A		A,@A_AaAaAaN
	A		AaAaAa,AN
N
	A		AaAa,A_AaAaN
	A		AaAaAa,A_AaAaN
_AaAa:N
aN
N
A_AaAaAa0  aN
;**********0a*****************N
;  0a    0/0= 0/0N
;  0A	N
; AaAaAa    A0 0 0 0 0 0 0 0N
;                   |       |____AaAaN
;                   +____________AaAaN
;*******************************************N
;**********0a*****************N
;  0a    0/0= 0/0	N
;*******************************************N
;   0A N
	AaAaAa		==		AaAa0N
	AaAa		==		AaAa0	+	0N
	AaAaAa	==		AaAa0	+	0N
	AaAaAa==    AaAa0	+	0N
N
 	AaAa    		==    	0<<Aa_AN
N
	AaAa		==		0N
	A_AaAaAa==		0			;    0*0=0aN
	AaAa0a	==		0			;   0N
N
	A_AaAa		==		0N
	A_AaAa			==		0N
	A_AaAa0a		==		0N
N
	A		A,AaAaAaN
	A		A,AaAaN
	A		A,@AaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		A,@AaAaN
	A		AaAaAa,AN
    A     A,@AaAaN
    A     AaAa,A    N
    A		AaAaAa,A_AaAa0a			;0N
    A     _AaAaN
_AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     _AaAaAa        	N
N
    A     AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
N
	A		AaAaAa,Aa_AN
	A		_AaAaN
N
    A      AaAaAa,A_AaAaN
	A		AaAaAa,A_AaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     _AaAaN
N
_AaAa:	N
    A      AaAaAa,A_AaAaN
    A		AaAaAa,A_AaAa0aN
    A		AaAaAaN
	A		_AaAaN
N
_AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		AaAaAa,A_AaAa0aN
	A		_AaAaAaAaN
_AaAa:	N
	A		A,AaAaAaN
	A     AaAa,AaAaN
	A     _AaAaN
	N
	A		AaAa,A_AaAaN
	A		AaAaAa,A_AaAaN
_AaAaAaAa:	N
	A		A,@A_AaAaAaN
	A		AaAaAa,A	N
_AaAa:    N
aN
N
;***************** 0,N
A_AaAaAaAa0		aN
;**********0a*****************N
;  0a    0/0= 0/0	N
; AaAaAa    A0 0 0 0 0 0 0 0N
;                   |       |____AaAaN
;                   +____________AaAaN
;*******************************************N
;**********0a*****************N
;  0a    0/0= 0/0	N
;*******************************************N
;   0A N
/*N
	AaAa         ==      Aa0N
    Aa_A           ==      0		    ; N
N
;   Aa_A           ==      0		    ; AaAaAa N
	A_AaAa		==		0			; 0a0N
	A_AaAa			==		0			; 0a0N
	A_AaAa0a		==		0			; 0N
*/N
	AaAa		==		0N
	AaAa0a	==		0			;   0N
N
	AaAaAa		==		AaAa0N
	AaAa		==		AaAa0	+	0N
	AaAaAa	==		AaAa0	+	0N
 	AaAaAa 	==    	0<<Aa_AN
N
	A		A,AaAaAaN
	A		A,AaAaN
	A		A,@AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		A,@AaAaAaN
	A		AaAaAa,AN
    A     A,@AaAaN
    A     AaAa,A    N
    A		AaAaAa,A_AaAa0a			;0N
    A     _AaAaN
_AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     _AaAaAa        	N
N
    A     AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
N
	A		AaAaAa,Aa_AN
	A		_AaAaN
N
    A      AaAaAa,A_AaAaN
	A		AaAaAa,A_AaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     _AaAaN
N
_AaAa:	N
    A      AaAaAa,A_AaAaN
    A		AaAaAa,A_AaAa0aN
    A		AaAaAaN
	A		_AaAaN
N
_AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
N
	A		AaAaAa,A_AaAa0aN
_AaAa:N
aN
;******************************************************************************N
/*N
AaAaAa		a		AaAa0N
N
; N
	A0A_Aa	==  Aa0N
	A0A_A		==  Aa0N
N
	A0A_Aa	==  Aa0N
	A0A_A		==  Aa0N
N
; N
 A_A0AaAa ==  0		; N
 A_A0AaAa==  0		;  ...............      N
; A_A0A_Aa	==  A0A_A		;  A0A_Aa   A0 N
; A_A0A_Aa	==  A0A_AN
N
*/N
N
AaAa_A0	aN
N
 A_A0A_Aa	==  A0A_A		;  A0A_Aa   A0 N
 A_A0A_Aa	==  A0A_AN
N
;  0a N
	A		A0A_Aa,A0A_AN
	A		_A0A_0N
N
	A		AaAaAa,A_A0A_Aa			;N
	A		_A0_0N
; A0A N
	A		AaAaAa,A_A0A_Aa			;N
N
	A		AaAaAa,A_A0A_Aa			;N
	A		A0A_Aa,A0A_AN
	A		AaAaAa,A_A0A_Aa			;			 A0A N
	A		_A0Aa	N
_A0_0:										;     A0A  A N
	A		A,A0A_AaN
	A		A,AaAaAaN
	A		A,@0<<A0A_A						;  A0A_Aa   A0 N
	A		AaAa,AaAaN
	A		_A0Aa							;    A N
; A0 A N
	A		A,@0<<A_A0A_AaN
	A		AaAaAa,A						;    A Aa N
	N
	A      AaAaAa,A_A0_AaAa			;   A0 A_A0A_Aa N
	A		_A0AaN
_A0A_0:						;  A - 0N
	A		AaAaAa,A_A0A_Aa			;N
_A0Aa:N
aN
N
N
N
N
AaA	aN
	A0A0	a		0N
	A0A0	a		0N
	A0		a		0N
aN
/*N
A_Aa0a	a		 0N
A_Aa0a	a	     0N
A_Aa0a	a		0N
A_Aa0a  a		0	N
A_Aa0a	a		0N
A_Aa0a a		0N
A_Aa0a a		0N
AaAa:	N
	A		A,@0N
	A		Aa0,AN
	A		Aa0N
	A		$-0N
	A		N
*/N
N
N
AaAa0	aN
;  A0A0A0A0N
a A == A0A0N
	A		A,@~AaA_AaN
	A		A			; 0 ,N
	A		A,@AaAa_AaN
	A		A			;     A	N
N
	A		A,@~AaA_Aa	; 0  A0-0-N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
  N
	A		A,@AaAaN
	A		AN
	N
    AN
    A     A,AN
    A	N
a	N
	A     A,@~A0A0A_AaN
	A     A					; [A0,A0] N
	A    @0N
	A     A,@~Aa0A_AaN
	A     A,A					; [A0 ] A0N
N
	A		A,@AaAa_AaN
	A		A					;     A	N
N
	A     A,@~Aa0A_AaN
	A     A					; A0AN
	A    @0N
	A     A,@~Aa0A_AaN
	A     A,A					; [A0 ] AN
N
	A		A,@A_A0_Aa ;N
	A		A					; A0A	N
N
	A    @0N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
  N
	A		A,@AaAa					;  0N
	A		AN
	N
	A     A,@AaAa0					;  0N
	A     AN
N
	A    @0							; 0N
	A     A,@0a0N
	A     0a0,A						; A 0A,  A0 = 0A0N
N
    AN
    A     A,AN
	A    @0							; 0N
    A     A,AN
	N
    A	N
aN
N
aN
N
N
AaAa0	aN
;     0 -   0-N
;   AN
;  AN
N
	A		A,@~AaA_AaN
	A		A			; 0 ,N
	A		A,@AaAa_AaN
	A		A			;     A	N
N
	A		A,@~AaA_Aa	; 0  A0-0-N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
  N
	A		A,@AaAaN
	A		AN
	N
    AN
    A     A,AN
    A	N
aN
N
AaAa0	aN
;     0 -   0-N
;   AN
	A		A,@~AaA_AaN
	A		A			; 0 ,N
	A		A,@AaAa_AaN
	A		A			;     A	N
N
	A		A,@~AaA_Aa	; 0  A0-0-N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
  N
	A		A,@AaAaN
	A		AN
	N
	A		A	N
    A	N
aN
N
AaAa0	aN
	A		A,@0aAN
	A		A			; 0 ,N
	A		A,@AaAa_AaN
	A		A			;     A	N
N
	A		A,@AaA_Aa	; 0  A0-0-N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
  N
	A		A,@AaAaN
	A		AN
	N
	A		AN
aN
N
N
N
AaAa0	aN
;  0,AN
;  0 A0 A  AN
;         A0, A0, =0, A0AN
;   A N
;*******************************************N
	A		A,@0aAN
	A		A			; 0 ,N
	A		A,@AaAa_AaN
	A		A			;     A	N
N
  a A == A0N
	A		A,@~AaA_Aa	; 0  A, 0-0-N
  a	N
	A		A,@AaA_Aa	; 0  A0-0-N
  a	N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
  a  A == A0N
	A		A,@A0_A_Aa<<0N
	A		Aa0N
	A		A,@A0_A_Aa<<0N
	A		Aa0,AN
  aN
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
  a	N
N
	A		A,@A_Aa;N
	AN
 a (AaA) && (A_A0_Aa&0a0)N
	A		A,0		;A0  A0aN
 aN
 a Aa0 == 0N
 	A		A,A_0AN
 aN
 N
	A		A,@AaAaN
	A		AN
	N
	A		A		N
aN
N
N
N
AaAa0	aN
;  0,A0N
;  0 A0 A  AN
;         A0, A0, =0, A0AN
;  a  A0 =  A0   0N
;*******************************************N
	A		A,@0aAN
	A		A			; 0 ,N
	AN
	A		A			;     	N
N
  a A == A0N
	A		A,@~AaA_Aa	; 0  A, 0-0-N
  a	N
	A		A,@AaA_Aa	; 0  A0-0-N
  a	N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
  a  A == A0N
	A		A,@A0_A_Aa<<0N
	A		Aa0N
	A		A,@A0_A_Aa<<0N
	A		Aa0,AN
	A		A,@A_Aa+0a0;N
	AN
  aN
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
	A		A,@A_Aa;N
	AN
  a	N
N
 a (AaA) && (A_A0_Aa&0a0)N
	A		A,0		;A0  A0aN
 aN
 a Aa0 == 0N
 	A		A,A_0AN
 aN
 N
	A		A,@AaAaN
	A		AN
	N
	A		A		N
aN
N
;//a: AaAa0N
AaAa0	aN
;  0,A0N
;  0 A0 A  AN
;         A0, A0, =0, A0AN
;N
;*******************************************N
	A		A,@0aAN
	A		A			; 0 ,N
	AN
	A		A			;     	N
N
  a A == A0N
	A		A,@~AaA_Aa	; 0  A, 0-0-N
  a	N
	A		A,@AaA_Aa	; 0  A0-0-N
  a	N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
  a  A == A0N
	A		A,@A0_A_Aa<<0N
	A		Aa0N
	A		A,@A0_A_Aa<<0N
	A		Aa0,AN
  aN
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
  a	N
N
	A		A,@A_Aa;N
	AN
 a (AaA) && (A_A0_Aa&0a0)N
	A		A,0		;A0  A0aN
 aN
 a Aa0 == 0N
 	A		A,A_0AN
 aN
 N
	A		A,@AaAaN
	A		AN
	N
	A		A		N
aN
N
N
;********************************N
N
AaAa	aN
	A		A,@0aAN
	A		A			; 0 ,N
	AN
	A		A			;     	N
N
  a A == A0N
	A		A,@~AaA_Aa	; 0  A, 0-0-N
  a	N
	A		A,@AaA_Aa	; 0  A0-0-N
  a	N
	A		AN
	N
	A		A,@A_A0_Aa ;N
	A		A			; A0A	N
N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
	N
	A		A,@A0_A_AaN
	A		Aa0N
	A		A,@A0_A_AaN
	A		Aa0,AN
N
	A		A,@A_Aa;N
	AN
 a (A  == A0) && (A_A0_Aa&0a0)N
	A		A,0		;A0  A0aN
 aN
 a Aa0 == 0N
 	A		A,A_0AN
 aN
 N
	A		A,@AaAaN
	A		AN
	N
	A		A		N
aN
;********************************N
AaAa  aN
	A		A,@0N
	A		Aa0,AN
	A		A,@0a0N
	A		AaAaAa,AN
	N
	A		A0N
	A		AaAaAaN
	A		Aa0N
	A		$-0N
	A		AaAaAaN
a N
N
A_AaAaAa  aN
AaAaAa:N
	A		A,@0a0N
	A		AaAaAa,AN
	A		A,@0N
    A    $+0N
N
    A     A,@0a0N
    A    $+0N
    A     A,@0a0+0a0N
    A    $+0N
    A     A,@0a0+0a0+0a0N
    A    $+0N
N
    A     A,@0a0+0a0+0a0+0a0N
N
    A     AaAaAa,AN
    A     A,@0N
    A     Aa0,AN
N
	A		A0N
	A		AaAaAaN
	A		Aa0N
	A		$-0N
N
    A     AaAaAaN
    AN
a    N
;********************************N
;*** A0***************  N
;       		0aN
;      	  0a,  AN
;      	:   0aN
N
;*** A0A0**************  N
;       		0aN
;      	  0aN
;      	:   0aN
;N
;N
AaAa	AaN
	A		0N
	A		AaAaN
	N
	N
	N
	A		0a0N
	A		AaAaN
aN
;********************************N
A	A	A0,@AN
	A		A,A0N
  a @A==0	N
	A		AaAa,AaAaN
  aN
	A		AaAa,AaAa  N
  aN
AN
;********************************N
A	A	A0,A0N
	A		A,A0N
	A		A,A0N
AN
A	A	A0,@A0N
	A		A,@A0N
	A		A,A0N
AN
;********************************N
A	A	@A0,A0N
	A		A,A0N
	A		A,@A0N
AN
;********************************N
A	A	A0,A0N
	A		A,A0N
	A		A0,AN
AN
;********************************N
N
N
;********************************N
N
A	A A0,@A0N
	A		A,@A0N
	A		A0,AN
AN
N
A	A	A0,A0N
	A		A,A0N
	A		A0,AN
AN
;********************************N
N
A	A	A0,@A0N
	A		A,@A0N
	A		A0N
A	N
N
A  AaN
	A     A,AN
	A     A,@~(0<<A)N
	A     A,AN
aN
N
;********************************N
A	AaN
;    A                        ; N
    A     Aa0,AN
    A    Aa0             ;N
    A   AaAa           ;N
    A     Aa0,A           ;  N
aN
A		AaN
    A   Aa0N
    A     AaAa,AN
    A   Aa0N
;    A						;  a  A N
aN
;********************************N
N
AaAa	Aa				;N
    A     Aa0,AN
    A    Aa0             ;N
    A   AaAa           ;N
    A     Aa0,A           ;  N
    A     A,AaAaAaN
    A     Aa0,AN
aN
N
AaAa	AaN
    A     A,Aa0N
    A     AaAaAa,AN
    A   Aa0N
    A     AaAa,AN
    A   Aa0N
;    A						;  a  A N
aN
N
AaAaAa		aN
	AaAa	  	a		AaAaAaN
	AaAa	a		AaAaAa+0N
	AaAaAa	a		AaAaAa+0N
		AaAaAa == 0N
		AaAaAa	== 0N
	AaAa0aAa	== 0N
AaAaAa	a		AaAaAa+0N
	AaAa0a	== 0N
	AaAa		== 0N
N
aN
N
N
AaAaAa		AaN
;**********0a*****************N
_AaAa:   N
    A     A,AaAaN
    A     A,@AaAaN
    A     Aa0,A          N
    A     A,AaAa   N
    A     AaAa,AaAaN
    A     _AaAaN
    N
    A     A,Aa0    ;          N
    A     AaAa,AN
    A     A,@AaAaN
    A     AaAa,A    N
    A		AaAaAa,AaAa0aAa	;0N
    A     _AaAaN
_AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     _AaAaAa        	N
N
    A     AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
N
    A     A,Aa0N
    A     A,@AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
    N
    A     A,Aa0N
    A		AaAaAa,AaAa0aAa	;N
    A     AaAaAa,AN
    A      AaAaAa,AaAaAaN
	A		AaAaAa,AaAaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     _AaAaN
N
_AaAa:N
    A      AaAaAa,AaAaAa N
    A		AaAaAa,AaAa0aAaN
    A		AaAaAaN
	A		_AaAaN
_AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		_AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		AaAaAa,AaAa0aAa	N
;*********************************************N
_AaAa:N
aN
;*******************************************N
;N
AaAaAaAa	AaN
	A		AaAaAa,AaAaAaN
	AN
N
	A		AaAaN
	A		AaAaAa,AaAaAa		;N
	A		_AaAaAaAaAaAaAa	;N
	N
	A		AaAaAa,AaAa0aAaN
	AN
N
	A		AaAa,A_AaAa0aN
	A		_AaAaAaAa_AaAa	; 	A_AaAa0a=0 ,N
N
	A		AaAaAa,A_A0			;   N
	AN
	A		A,AaAaN
	A		AaAa,AaAaN
	AN
	A		A,@0						; 0*0a N
	A		AaAa,AN
	A		_AaAaAaAaAaAaAaN
		N
_AaAaAaAa_AaAa:N
	A		AaAa,0N
;***********************N
_AaAaAaAaAaAaAa:N
	A		AaAaAa,A_A0N
	A		AaAa,0N
	N
	A		AaAaAa,A_A0N
	A		AaAa,0N
N
	A     	AaAa,AaAaAaN
	A		AaAaAa,AaAaAaN
aN
;*********************************************************************N
;  A  0a, A  A0 N
AaA0A	aN
N
	A0Aa	a 0<<A0A_AN
	A0AaAa	a	0aA0		;A 0AN
	A0AaAa	a	0aA0N
;*******************************************************N
;                                  N
;                                                N
;                                                   N
;                                               N
;                                                   N
;a0a N
;***********************************************************N
A0A_Aa:N
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_A			; A =0 A 0->0 N
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_AN
	AN
N
;    A 0-0 =0AN
;         _____________N
;  ______|N
;N
;   A      A AN
;	N
N
N
;*************************************************************N
; A0A_AaAa:		; A 0N
	; A		A0Aa,A0A_AN
	; AN
	; A		A0Aa,A0A_AN
	; AN
	; A		A0Aa,A0A_AN
	N
	; AN
	N
; AaA:N
	; AN
	; AN
	; AN
	; AN
	; AN
	N
;*************************************************************N
;           ___     ____N
;A:   ___|   |___|N
;N
;A:   -a------a---N
;N
;N
;N
;  A= ,   a0,a0N
;N
A0A_Aa0Aa:N
	A		Aa0,AN
	N
	A		A,@0N
	A		Aa0,AN
;a	N
	A		A0Aa,A0A_A			;A=0,A,AN
	; A	AaAN
	A		A0Aa,A0A_AN
	A		AaAa0N
	A		AaAa,AaAaN
	A		A0Aa,A0A_A	N
	; A	AaAN
	A		A0Aa,A0A_AN
	N
	A		Aa0N
	A		$-0N
;***N
	;A  N
N
	A		A0Aa,A0A_AN
	; A	AaAN
	A		A0Aa,A0A_AN
N
	A		A0AaN
	A		A,@A0AaN
	A		A0Aa					;A  N
	N
	A		A0Aa,A0A_AN
	A		A0AaN
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_AN
	N
	A		A0AaN
	A		A,@~A0AaN
	A		A0Aa					;A  N
	A		AaAa,AaAaN
	AN
;*****************************************************************N
;0 A,N
;0A=0,A,AN
A0A_Aa0Aa:N
	A		A0AaN
	A		A,@A0AaN
	A		A0Aa					;A  N
N
	A		AaAa0N
	A		A,@0N
	A		Aa0,AN
N
	A		A0Aa,A0A_AN
;A:	N
	A		A0Aa,A0A_A			;N
N
	A		AaAa,AaAaN
	A		A0Aa,A0A_AN
	A		AaAa,AaAaN
	A		AaAa0N
	A		A0Aa,A0A_AN
N
	A		AaAa0N
	A		$-0N
	N
	A		A0AaN
	A		A,@~A0AN
	A		A0AaN
	N
	A		A0Aa,A0A_AN
	N
	A		A,AaAa0N
	AN
;**********************************************************N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
A0A_AaAa:N
	A		A,@0N
	A		Aa0,A				;N
	N
	A	A0A_AaN
	N
	A		A,@A0AaAaN
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
	N
	A		A,Aa0N
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
	N
	A		A,A0N
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
N
	A		AaAaAaN
	A		Aa0N
	A		$-0N
	N
;***********************************************************	N
A0A_Aa:N
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_A			; A =0 A 0->0 N
	A		A0Aa,A0A_A	N
	A		A0Aa,A0A_AN
;***********************************************************N
A0Aa:	N
	AN
;***********************************************************N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A 	N
A0A_AaAa:N
	A		A,@0N
	A		Aa0,A				;N
N
	A	A0A_Aa				;    AaN
		N
	A		A,@0aA0			;    0aA0N
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
	N
	A		A,AaAa0				;    a N
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
	N
	A	A0A_Aa				;    AaN
	N
	A		A,@0aA0			;    0aA0		N
	A	A0A_Aa0AaN
	A		AaAa,AaAaN
	A		A0AaN
;a:	N
	A		A0Aa,A0A_AN
	A	A0A_Aa0Aa			;    AN
	A		A0,A					;        *A= aN
	A		AaAaAaN
N
	A		AaAa0N
	A		$+0N
	N
	A		A0A_AN
; N
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_AN
	A		A0Aa,A0A_AN
	A		$-0N
	N
aN
N
;**************************************N
;  A0A A N
aAa0A	aN
N
	N
;***********************************************	N
;  A  -    0  0-N
; A0A ,N
AaAaAa:N
    A      AaAa,A_A      ; N
N
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
N
;	A		A,@0a0			; N
	A    Aa_a	N
    A      AaAa,A_A      ; N
	AN
;***********************************************	N
;AN
Aa:N
    A      AaAa,A_A      ; aN
    N
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
        N
    A     A,@0a0			; 0N
    A    Aa_aN
    A     A,@0a0			; 0A0AN
    A    Aa_aN
    A     A,@0A0			; 0 N
    A    Aa_aN
    A     A,@0A0			; 0 0A,0/0N
    A    Aa_aN
    A     A,@0A0			; 0 N
    A    Aa_aN
	A		A,@0a0			; 0aN
	A    Aa_a			N
    A      AaAa,A_A          ;  N
    A     ;N
N
Aa:N
    A      AaAa,A_AN
;    AN
    A      AaAa,A_AN
;    AN
    A      AaAa,A_AN
;    AN
    A     N
N
Aa_a:N
    A     Aa0,AN
    A     A,@0N
    A     Aa0,AN
    N
;Aa:N
    A     Aa0,0N
    A      AaAa,A_AN
    A     Aa0,0N
    A      AaAa,A_A        N
    A    AaN
    A     Aa0N
    A     Aa0N
    A     $-0N
    N
    A      AaAa,A_AN
    A    AaN
    AN
;***********************************N
;   a0 - 0N
;   a0 -  0N
;   A0 - N
Aa_a:N
    A      AaAa,A_A      ; aN
    N
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
    A      AaAa,A_AN
    A    AaN
N
    A     A,@0N
    A     Aa0,A           ;0N
;a0:N
    A     Aa0,0N
    A      AaAa,A_AN
    A     Aa0,0N
    A      AaAa,A_AN
    A    AaN
    A     Aa0N
    A     Aa0N
    A     $-0N
N
;       N
    A     A,A0N
    A     Aa0,A   N
    A     AaAaAaN
    N
    A     A,@0N
    A     Aa0,A           ;0N
;a0:N
    A     Aa0,0N
    A      AaAa,A_AN
    A     Aa0,0N
    A      AaAa,A_AN
    A    AaN
    A     Aa0N
    A     Aa0N
    A     $-0N
    N
    AN
    A     Aa0N
    A     $-0N
N
N
    A      AaAa,A_AN
    AN
aN
N
AaAa	aN
;********************************N
AaAaAa:N
	AN
	A		Aa0N
	A		Aa0N
	N
_AaAa:	N
	AN
	A		AaAa,A_0aN
	A		_AaAaN
	A		AaAa,A_0aN
N
	A		A,@0A0N
	A		AaAa0,AN
	A		A,@0N
	A		AaAa0,A	N
N
	A		A,AaAa0N
	A		Aa0,AN
	A		Aa0,AN
	A		AaAa,AaAaN
	A		AaAa0N
	A		Aa0N
	A		Aa0N
	A		AaAa0N
	A		$-0N
	A		_AaAa	N
aN
;*******************************************************N
N
;*************************************************	N
Aa_Aa	aN
N
a  AaN
_Aa:			; N
	AN
	AN
	AN
N
;*************************************************	N
;          __    ____N
;   A      |__|N
;         ____        _____ N
;   A   ____ A--A-A _____N
A0AaAa:N
	A		A_A,A_AN
	N
	A		A_AN
	A		A,@0<<A_AN
	A		A_A				;A N
N
	A		A_A,A_AN
	N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	N
	A		A_A,A_AN
N
	A		A,@~(0<<A_A)N
	A		A_A				; A N
N
	A		A_A,A_A			;A A AN
	AN
a	N
N
;*************************************************	N
; A  , A N
;          __      ____N
;   A      |____|N
;         ____    _____ N
;   A   ____A_____N
A0AaAa:N
	A		Aa0,AN
	A		A,@0N
	A		Aa0,AN
_A0AaAaAa:N
	A		A_A,A_A	;N
	A		A_A,A_AN
	A		Aa0,0N
	A		A_A,A_A	;N
	A		A_A,A_A	; Aa=0*0.0=0.0aN
	A		Aa0N
	A		Aa0N
	A		_A0AaAaAa; Aa=0*0.0=0.0aN
	AN
;*************************************************	N
a  !A0_AaAaN
;*************************************************	N
; a0- ,  N
; a0- AN
A0AaAa:N
	A0_AN
		N
	A		A,@0aA0			; 0aA0,0aA0N
	A	A0AaAaN
	A0_AN
N
    A		A,Aa0N
    A	A0AaAaN
	A0_AN
N
N
    A		A,Aa0N
    A	A0AaAaN
	A0_AN
N
	A0_A	N
	A	N
aN
;*********************************N
; AaAaAa,  N
; a0- N
; a0- A	N
A0_AaAaAa:N
	A0_AN
		N
	A		A,@0aA0			; 0aA0,0aA0N
	A	A0AaAaN
	A0_AN
N
    A		A,Aa0N
    A	A0AaAaN
	A0_AN
N
_A0AaAaAa:N
	A		A,A0N
	A	A0AaAaN
	A0_AN
N
	A     AaAaAaN
	A		Aa0N
	A		_A0AaAaAaN
	A0_AN
N
	A	N
a	N
N
A_A0_Aa	aN
;N
N
N
N
; a  A0, a N
	A_Aa0Aa	== 0								; A A0N
N
N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a+A_a)N
N
A_A	a	 A_aN
A_A	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A0	a	 (A_a+A_a+A_a+A_a)N
A_A a (A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a)N
A_A   a  (A_a+A_a)N
A_A   a  (A_a+A_a+A_a)N
A_A	a  (A_a+A_a+A_a+A_a)N
N
;N
Aa0a:N
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
N
N
A0_A:N
	A	A0AaN
	N
	A		A,@0a0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,@0a0						; 0  0N
	A		_Aa0AaAaAaN
;A0 N
A0_A:N
	A	A0AaN
	N
	A		A,@0a0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	AaAa				;N
	A		Aa0,AN
	A	Aa0						; AN
	A		A,@0A0						;    ;	A		A,@0a0						; 0  0N
_Aa0AaAaAa:N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0AaN
	AN
N
;*******************************************************************************************N
;      AN
;   AaAaAa    A  , Aa0,a0,a0N
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0AaN
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0AaN
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0AaN
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0AaN
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
;*******************************************************************************************N
;	   0,0,0,0   A0AaN
;      Aa0N
;N
A0_AaAa:N
	N
	A	A0AaN
	N
	A		AaAa,AaAaN
	A	A0_AaN
	A		A,@0a0 				;A0Aa  N
	A		A,@0a0					; 0,0A,0A,0A  A0,A0,A0,A0N
_Aa0AaAa:	N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0AaN
	A	N
;*****************************************N
;   Aa0N
;N
A0_AaAa:N
	A	A0AaN
N
	A		A,@0a0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
	N
	A	A0AaAaN
	A	A0AaAaN
	A	A0AaN
	AN
N
N
;*************************************************	N
; A  , A N
;          __      ____N
;   A      |____|N
;         ____    _____ N
;   A   ____A_____N
A0AaAa:N
	A		A_A,A_A	;N
	A	Aa0aN
N
	A		Aa0,AN
	A		A,@0N
	A		Aa0,AN
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
N
_A0AaAaAa:N
	A		A_A,A_A	;N
	A	Aa0aN
N
	A		A_A,A_AN
	A		Aa0,0N
	A		A_A,A_A	;N
N
	A		A_A,A_A	; Aa=0*0.0=0.0aN
N
	A	Aa0aN
	A		Aa0N
	A		Aa0N
	A		_A0AaAaAa; Aa=0*0.0=0.0aN
	A		A_A,A_A	;N
	AN
;*****************************************************************************************N
A0Aa:N
	A		A_A,A_A		;N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
	A		A_A,A_A		; A N
	A	Aa0aN
	A		A_A,A_A		;N
	A	Aa0a				; >0.0aN
	A		A_A,A_A		;N
	aN
_A0AaAaAa:              ;  a     N
	A		A,@0aAN
	aN
;*****************************************************************************************N
A0AaAaAaAa:            ;   A  A N
    A  	A_A , A_A N
	A	Aa0aN
N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
    A  	A_A , A_A N
	A	Aa0aN
;*****************************************************************************************N
A0Aa:N
    A  	A_A , A_A N
N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
N
    A  	A_A , A_A N
	A	Aa0aN
    A  	A_A , A_A N
	aN
;*************************************************	N
A0AaAa:N
    A  	A_A , A_A N
	A	Aa0aN
N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
    A  	A_A , A_A N
	aN
;*************************************************	N
A0AaAa:N
    A  	A_A , A_A N
	A	Aa0aN
N
	A		A_AN
	A		A,@0<<A_AN
	A		A_AN
    A  	A_A , A_A N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		N
N
;******************************************************N
;,  N
A0AaAa:					;  A = 0N
	A   	Aa0N
	A		A,@0N
	A		Aa0,AN
N
N
_A0_AaAaAa:				; A  = 0   0*0.0= 0.0a = 0A N
	A		A_A,A_AN
N
	A		Aa0,0N
	A		$+0N
	A  	A_AN
	A  	A,@0<<A_AN
	A		A_AN
N
	A	Aa0aN
N
	A		A_A,A_AN
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		Aa0N
N
	A	Aa0a				;  A  0 -> 0  0 0N
N
					;  A  0 -> 0  0 0N
	A		Aa0N
	A		_A0_AaAaAaN
N
	A		A,Aa0			; A	N
	AN
N
;       A0 A N
N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
A0AaAaAaAa:N
	A	A0AaN
	A		A,@0aA0				; A0Aa N
	A		$+0N
N
A0AaAaAa:N
N
	A	A0AaN
	A		A,@0aA0				; A N
	A	A0AaAa		; ,a0,a0N
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
_A0AaAaAa:N
	A		A,A0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		AaAaAaN
	A		Aa0N
	A		_A0AaAaAa	N
N
	A	A0AaN
	AN
;**************************************************N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
A0AaAaAaAa:N
	A	A0AaN
	A		A,@0aA0				; a N
	A	A0AaAa		; N
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0AaN
	A		A,@0aA0N
	A		_A0AaAaAaN
A0AaAaAa:N
	A	A0AaN
	A		A,@0aA0				; a N
	A	A0AaAa		; N
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAaN
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0AaN
	A		A,@0aA0N
_A0AaAaAa:	N
	A	A0AaAa		; N
	A	A0AaAaN
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		AaAa0,A_Aa0Aa		; AN
_A0AaAaAa:N
	A	A0AaAaN
	A		A0,AN
	A		AaAaAaN
N
N
	A		Aa0N
	A		AaAa,AaAaN
	A		$+0N
N
	A	A0AaAaN
	A		_A0AaAaAaN
N
	A	A0AaAaAaAaN
	AN
N
N
aN
N
N
A_A0AaAa0  aN
; N
;N
; AaAaAa    A0 0 0 0 0 0 0 0N
;                 | | | | |     |N
;                 | | | | +--------->  AaAaN
;                 | | | | N
;                 | | | +----------->  A_AaAaN
;                 | | +------------->  AaAa0aAaN
;                 | +--------------->  AaAaAaN
;                 +----------------->  AaAaAaN
 AaAaAa	==	0N
 AaAaAa		==	0N
 AaAa0aAa	==	0N
 A_AaAa	==  0			;N
N
 AaAaAa == 0a0AN
N
 AaAa		==  0N
 AaAa0a	==	0N
 A_AaAaAa   == 0			;  0*0a  A_AaAa.N
N
N
;  A0 a0N
;  A0 AaAaAaN
;  0 0N
;   AaAaAa   A0N
;  AN
;AaAaAa:N
;	A		A,AN
;	A	@0				;0N
;	A	@A0_A0		;A   N
;	A	@A0_A0		;A    N
;	A	@A0_A0		;A     N
;	A	@A0_A0		;A    N
;	A	@A0_A0		; A     N
;	A	@A0_A0		; A     N
;	A	@A0_A0		; A     N
;	A	@A0_A0		; A    N
;//a Aa0AaAa						; 0.0.0N
Aa0AaAa:N
	A		AaAa,A_0aN
	AN
N
	A		AaAa,A_0aN
	A	A0_AaAa				;  Aa0N
	AN
	A	AaAaAa					;  N
	A		Aa0,A					;N
N
	A		A,Aa0N
	A	AaAaAa					;   A0 N
	A		A,Aa0N
	A		AaAa,AaAaN
	A		_Aa0AaAaN
	A		Aa0N
	A		$-0N
_Aa0AaAa:N
	A		A,Aa0		;N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     _Aa0AaAaN
N
    A     A,Aa0    ; N
    A     AaAa,AN
    A     A,@AaAaN
    A     AaAa,AN
N
	A		AaAaAa,AaAa0aAaN
N
    A     __Aa0AaAaN
_Aa0AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     __Aa0AaAaAaN
N
    A     AaAaN
    A     AaAa,AaAaN
    A     __Aa0AaAaN
N
    A     A,Aa0N
    A     AaAa,AaAaN
    A     __Aa0AaAaN
N
;************************************* *************N
	A		A,@~AaAaAaN
	A		AaAaAa,AN
	A		A,Aa0N
	A		AaAaAa,AN
;**********************************************************N
    A      AaAaAa,AaAaAaN
	A		AaAaAa,AaAaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     __Aa0AaAaN
N
__Aa0AaAa:N
    A      AaAaAa,AaAaAaN
    A		AaAaAaN
	A		__Aa0AaAaN
__Aa0AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		__Aa0AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		__Aa0AaAaN
N
	A		AaAaAa,AaAa0aAaN
	A		AaAaAa,A_AaAaN
	A		__Aa0AaAaN
N
	A		AaAaAa,AaAaAaN
	A		A,@A_AaAaAaN
	A		AaAaAa,AN
;*********************************************N
__Aa0AaAa:N
	AN
aN
N
N
N
A_A0_AaAa aN
Aa0AaAa:	N
	A		AaAa,A_0aN
	AN
	N
	A		AaAa,A_0aN
	A	A0_AaAa				;  Aa0N
	A		A,Aa0N
    A     A,@0a0N
	A		Aa0,A					;N
	N
_Aa0AaAa:	N
	A		A,Aa0		;N
    A     A,AaAa   N
    A     AaAa,AaAaN
    A     _Aa0AaAaN
    N
    A     A,Aa0    ;          N
    A     AaAa,AN
    A     A,@AaAaN
    A     AaAa,A    N
	N
	A		AaAaAa,AaAa0aAaN
	N
    A     __Aa0AaAaN
_Aa0AaAa:N
    A     A,AaAaN
    A     AaAa,AaAaN
    A     __Aa0AaAaAa        	N
N
    A     AaAaN
    A     AaAa,AaAaN
    A     __Aa0AaAaN
N
    A     A,Aa0N
    A     AaAa,AaAaN
    A     __Aa0AaAaN
N
;*************************************  *************    N
; A0 A N
;**********************************************************N
    A      AaAaAa,AaAaAaN
	A		AaAaAa,AaAaAaN
	A		A,@AaAa0aN
	A		AaAaAa,AN
    A     __Aa0AaAaN
N
__Aa0AaAa:N
    A      AaAaAa,AaAaAa N
    A		AaAaAaN
	A		__Aa0AaAaN
__Aa0AaAaAa:N
	A		A,AaAaAaN
	A		AaAa,AaAaN
	A		__Aa0AaAaN
	A		AaAaAaN
	A		AaAa,AaAaN
	A		AaAaAa,AaAa0aAa	N
;*********************************************N
__Aa0AaAa:	N
	AN
aN
N
;//a:   A_A0_Aa_A0AaN
N
A_A0_Aa_A0Aa		aN
; 0.0.0 A0, A, A0A ,A0A0AN
N
N
A_A0Aa_AaAa			a		0        ;      N
A_A0Aa_AaAa			a		0        ;      N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
N
A_A0Aa_AaAaAa		a     0        ;   N
A_A0Aa_AaAaAa		a		0        ;   N
A_A0Aa_AaAaAa			a		0        ;   N
A_A0Aa_AaAaAa			a		0        ;   N
A_A0Aa_AaAaAa		a		0       ;   N
N
;AaAaAa	N
   A_AaAa	a		0N
   A_AaAa	a		0N
   A_AaAa		a		0N
N
A_A0Aa_AaAaAaAa		a		0       ;   -N
A_A0Aa_AaAaAaAa		a		0       ;     -N
A_A0Aa_AaAaAaAa		a		0       ;     -N
N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a+A_a)N
N
A_A	a	 A_aN
A_A	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A0	a	 (A_a+A_a+A_a+A_a)N
A_A a (A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a)N
A_A   a  (A_a+A_a)N
A_A   a  (A_a+A_a+A_a)N
A_A	a  (A_a+A_a+A_a+A_a)N
;AaAa, A_AaAaN
;      A_AaAa = 0 ,       A0, A 0A0,N
;      A_AaAa = 0 ,    A0A0AN
;N
Aa0a:N
 a AaAa0A								; 0A, 0AN
N
	A		A,@0N
	A		AaAa,A_AaAaN
	A		A,@0N
N
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
N
	A		A,@0aAN
	A     AaAa,AaAaN
	A		$-0N
  aN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
  a	N
	AN
N
N
A0_Aa:N
	A	A0Aa_0N
	N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
    A     A,AaAaN
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A0Aa_0					;    N
N
/*N
A0_A:N
	A	A0Aa_0N
	N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,@0a0						; 0  0N
	A		_Aa0AaAaAaN
;A0 N
A0_A:N
	A	A0Aa_0N
	N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	AaAa				;N
	A		Aa0,AN
	A	Aa0						; AN
	A		A,@0A0						;    ;	A		A,@0a0						; 0  0N
_Aa0AaAaAa:N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A0Aa_0					;N
;	A	A0Aa_0N
;	AN
N
*/N
;*******************************************************************************************N
;      AN
;   AaAaAa    A  , Aa0,a0,a0N
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
;*******************************************************************************************N
;	   0,0,0,0   A0AaN
;      Aa0N
;    A0_AaAa N
;A0_AaAa:N
;	N
;	A	A0Aa_0N
;	N
;	A		AaAa,AaAaN
;	A	A0_AaN
;	A		A,@0a0 				;A0Aa  N
;	A		A,@0a0					; 0,0A,0A,0A  A0,A0,A0,A0N
_Aa0AaAa:	N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	A	N
;*****************************************N
;   Aa0N
;N
A0_AaAa:N
	A	A0Aa_0N
N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
	N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	AN
N
N
_A0AaAaAa:N
	A		A,@0aAN
	AN
N
N
;****************************0.0.0*******************************N
;  A,A N
;//a:   A0Aa_0N
A0Aa_0:N
	A		A_A,A_A		; N
N
	A		A_A,A_A		; A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
	A	Aa0aN
	A		A_A,A_AN
N
	A	Aa0aN
	A		A_A,A_A		;N
N
	A		Aa0a			; N
;	A	Aa0aN
;	aN
	N
N
;*************************************************N
;//a:  A0AaAa_0N
A0AaAa_0:N
    A  	A_A , A_A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
N
	A	Aa0aN
N
    A  	A_A , A_A N
	A		Aa0a				; N
;	A	Aa0aN
;	aN
N
;*************************************************	N
; A  , A N
;          __      ____N
;   A      |____|N
;         ____    _____ N
;   A   ____A_____N
;//a:  A0AaAa_0N
A0AaAa_0:N
	A		A_A,A_A	;N
	A		Aa0,A			; N
N
	A		A,@0N
	A		Aa0,AN
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
N
;_A0AaAaAa:N
	A		A_A,A_A	;N
	A	Aa0aN
N
	A		A_A,A_AN
	A		Aa0,0N
	A		A_A,A_A	;N
N
	A		A_A,A_A	; Aa=0*0.0=0.0aN
	A	Aa0aN
N
	A		Aa0N
	A		Aa0N
	A		$-0			;_A0AaAaAa; Aa=0*0.0=0.0aN
N
	A	N
	N
;//a: A0AaAa_0N
A0AaAa_0:N
    A  	A_A , A_A N
	A		A_AN
	A		A,@0<<A_AN
	A		A_AN
N
	A	Aa0aN
N
    A  	A_A , A_A N
	A	Aa0aN
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		N
N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
;//a:    A0AaAaAaN
A0AaAaAa:N
a AaAa==0N
	AN
aN
N
	A	A0Aa_0N
	A		A,@0aA0N
	A		AaAa,A_AaAaN
	A		A,@0aA0					; a N
N
	A	A0AaAa_0		; N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0Aa_0N
	A		A,@0aA0N
	A		AaAa,A_AaAaN
	A		A,@0aA0					; a N
	A	A0AaAa_0		; N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
	A		$+0N
N
_A0AaAaAa:N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		A0,AN
	A		AaAaAaN
N
	A		Aa0N
	A		_A0AaAaAaN
;	A		A0AaAaAaAa_0N
;*************************************************N
;//a:  A0AaAaAaAa_0N
A0AaAaAaAa_0:            ;   A  A N
    A  	A_A , A_A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
N
	A	Aa0aN
N
    A  	A_A , A_A N
	A	Aa0aN
N
;//a:   A0Aa_0N
A0Aa_0:N
	A		A_A,A_A	;N
N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
	A	Aa0aN
N
	A		A_A,A_A	;N
	N
	A	Aa0aN
    A  	A_A , A_A N
N
	aN
N
N
;******************************************************N
;,  N
;//a:  A0AaAa_0N
A0AaAa_0:					;  A = 0N
	A   	Aa0N
	A		A,@0N
	A		Aa0,AN
_A0_AaAaAa0:				; A  = 0   0*0.0= 0.0a = 0A N
	A		A_A,A_AN
N
	A		Aa0,0N
	A		$+0N
	A  	A_AN
	A  	A,@0<<A_AN
	A		A_AN
N
	A	Aa0aN
N
	A		A_A,A_AN
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		Aa0N
N
	A	Aa0a				;  A  0 -> 0  0 0N
N
					;  A  0 -> 0  0 0N
	A		Aa0N
	A		_A0_AaAaAa0N
N
	A		A,Aa0			; A	N
	AN
N
N
N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
;//a:  A0AaAaAaN
A0AaAaAa:N
a AaAa==0N
	AN
aN
	A	A0Aa_0N
	A		A,@0aA0				; A N
	A		AaAa,A_AaAaN
	A		A,@0aA0				; A N
N
	A	A0AaAa_0		; ,a0,a0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
_A0AaAaAa:N
	A		A,A0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		AaAaAaN
	A		Aa0N
	A		_A0AaAaAa	N
N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	AN
	N
aN
N
A_A0_Aa_0a  aN
;//A: A_A0_Aa_0aN
; 0.0.0 0AN
N
N
A_A0Aa_AaAa			a		0        ;      N
A_A0Aa_AaAa			a		0        ;      N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
A_A0Aa_AaAa			a		0        ;       N
N
A_A0Aa_AaAaAa		a     0        ;   N
A_A0Aa_AaAaAa		a		0        ;   N
A_A0Aa_AaAaAa			a		0        ;   N
A_A0Aa_AaAaAa			a		0        ;   N
A_A0Aa_AaAaAa		a		0       ;   N
N
;AaAaAa	N
   A_AaAa	a		0N
   A_AaAa	a		0N
   A_AaAa		a		0N
N
A_A0Aa_AaAaAaAa		a		0       ;   -N
A_A0Aa_AaAaAaAa		a		0       ;     -N
A_A0Aa_AaAaAaAa		a		0       ;     -N
N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_0	a	 (A_a+A_a+A_a+A_a+A_a+A_a+A_a)N
N
A_A	a	 A_aN
A_A	a	 (A_a+A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A0	a	 (A_a+A_a+A_a+A_a)N
A_A a (A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a)N
A_A   a	 (A_a+A_a+A_a+A_a+A_a)N
A_A	a	 (A_a+A_a+A_a+A_a)N
A_A   a  (A_a+A_a)N
A_A   a  (A_a+A_a+A_a)N
A_A	a  (A_a+A_a+A_a+A_a)N
;AaAa, A_AaAaN
;      A_AaAa = 0 ,       A0, A 0A0,N
;      A_AaAa = 0 ,    A0A0AN
;N
N
N
A0_A:N
	A	A0Aa_0N
	N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,@0a0						; 0  0N
	A		_Aa0AaAaAaN
;A0 N
A0_A:N
	A	A0Aa_0N
	N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	AaAa				;N
	A		Aa0,AN
	A	Aa0						; AN
	A		A,@0A0						;    ;	A		A,@0a0						; 0  0N
_Aa0AaAaAa:N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A0Aa_0					;N
;	A	A0Aa_0N
;	AN
N
;*******************************************************************************************N
;      AN
;   AaAaAa    A  , Aa0,a0,a0N
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
    A     AaAa,A_AaAaN
    A      AaAa0,0N
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
A0_AaAa0:N
AaA0Aa:N
	A		Aa0,AN
	A	A0Aa_0N
	A		A,@A_A0_A0N
	A		_Aa0AaAaN
;*******************************************************************************************N
;	   0,0,0,0   A0AaN
;      Aa0N
;    A0_AaAa N
;A0_AaAa:N
;	N
;	A	A0Aa_0N
;	N
;	A		AaAa,AaAaN
;	A	A0_AaN
;	A		A,@0a0 				;A0Aa  N
;	A		A,@0a0					; 0,0A,0A,0A  A0,A0,A0,A0N
_Aa0AaAa:	N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	A	N
;*****************************************N
;   Aa0N
;N
A0_AaAa:N
	A	A0Aa_0N
N
	A		A,@0a0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
	N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	AN
N
N
_A0AaAaAa:N
	A		A,@0aAN
	AN
N
N
;****************************0.0.0*******************************N
;  A,A N
;//a:   A0Aa_0N
A0Aa_0:N
	A		A_A,A_A		; N
N
	A		A_A,A_A		; A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
	N
	A		A_A,A_AN
N
	N
	A		A_A,A_A		;N
N
	aN
	N
N
;*************************************************N
;//a:  A0AaAa_0N
A0AaAa_0:N
    A  	A_A , A_A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
N
	N
N
    A  	A_A , A_A N
	aN
N
;*************************************************	N
; A  , A N
;          __      ____N
;   A      |____|N
;         ____    _____ N
;   A   ____A_____N
;//a:  A0AaAa_0N
A0AaAa_0:N
	A		A_A,A_A	;N
	A		Aa0,A			; N
N
	A		A,@0N
	A		Aa0,AN
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
N
;_A0AaAaAa:N
	A		A_A,A_A	;N
	N
N
	A		A_A,A_AN
	A		Aa0,0N
	A		A_A,A_A	;N
N
	A		A_A,A_A	; Aa=0*0.0=0.0aN
	N
N
	A		Aa0N
	A		Aa0N
	A		$-0			;_A0AaAaAa; Aa=0*0.0=0.0aN
N
	A	N
	N
;//a: A0AaAa_0N
A0AaAa_0:N
    A  	A_A , A_A N
	A		A_AN
	A		A,@0<<A_AN
	A		A_AN
N
	N
N
    A  	A_A , A_A N
	N
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		N
N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
;//a:    A0AaAaAaN
A0AaAaAa:N
	A	A0Aa_0N
	A		A,@0aA0N
	A		AaAa,A_AaAaN
	A		A,@0aA0					; a N
N
	A	A0AaAa_0		; N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A	A0Aa_0N
	A		A,@0aA0N
	A		AaAa,A_AaAaN
	A		A,@0aA0					; a N
	A	A0AaAa_0		; N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
	A		$+0N
N
_A0AaAaAa:N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		A0,AN
	A		AaAaAaN
N
	A		Aa0N
	A		_A0AaAaAaN
;	A		A0AaAaAaAa_0N
;*************************************************N
;//a:  A0AaAaAaAa_0N
A0AaAaAaAa_0:            ;   A  A N
    A  	A_A , A_A N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
N
	N
N
    A  	A_A , A_A N
	N
N
;//a:   A0Aa_0N
A0Aa_0:N
	A		A_A,A_A	;N
N
	A		A_AN
	A		A,@~(0<<A_A)			N
	A		A_AN
    A  	A_A , A_A N
	N
N
	A		A_A,A_A	;N
	N
	N
    A  	A_A , A_A N
N
	aN
N
N
;******************************************************N
;,  N
;//a:  A0AaAa_0N
A0AaAa_0:					;  A = 0N
	A   	Aa0N
	A		A,@0N
	A		Aa0,AN
_A0_AaAaAa0:				; A  = 0   0*0.0= 0.0a = 0A N
	A		A_A,A_AN
N
	A		Aa0,0N
	A		$+0N
	A  	A_AN
	A  	A,@0<<A_AN
	A		A_AN
N
	N
N
	A		A_A,A_AN
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		Aa0N
N
					;  A  0 -> 0  0 0N
N
					;  A  0 -> 0  0 0N
	A		Aa0N
	A		_A0_AaAaAa0N
N
	A		A,Aa0			; A	N
	AN
N
N
N
;*************************************************	N
;   AaAaAa, N
;   Aa0,N
;   Aa0,  A N
;//a:  A0AaAaAaN
A0AaAaAa:N
	A	A0Aa_0N
	A		A,@0aA0				; A N
	A		AaAa,A_AaAaN
	A		A,@0aA0				; A N
N
	A	A0AaAa_0		; ,a0,a0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
_A0AaAaAa:N
	A		A,A0N
	A	A0AaAa_0N
	A	A0AaAa_0N
	A		AaAa,AaAaN
	A		_A0AaAaAaN
N
	A		AaAaAaN
	A		Aa0N
	A		_A0AaAaAa	N
N
	A		A0Aa_0				; N
;	A	A0Aa_0N
;	AN
N
N
aN
N
N
A_AaAaAa  a N
;//a: A_AaAaAa 	N
AaAa:N
	A		A,@0A0;N
	A								; A > 0N
	AN
	A     A,@0A0;N
	A		A						; AN
N
	A		Aa0,Aa0N
N
	A		A,@AaN
	A		AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
	AN
aN
N
N
A_Aa  a N
;//a: A_Aa 	N
;A0  N
;A0 N
;   0.0aAN
;  N
AaAa:N
; A0N
	A								; N
	A		A,@0A0;N
	A								; A > 0N
	AN
	A     A,@0A0;N
	A		A						; AN
N
	A		Aa0,Aa0N
N
	A		A,@AaN
	A		AN
	AN
	AN
	AN
	AN
	AN
	AN
aN
N
N
A_Aa  a N
;//a: A_Aa 	N
;A0  N
;A0 N
;   0.0aAN
N
AaAa:N
	A								; N
	A		A,AaAaAaN
	A		A,@~AaAaAaN
	A		AaAaAa,A				;  N
N
	A		A,@0A0;N
	A								; A > 0N
	AN
	A     A,@0A0;N
	A		A						; AN
N
	A		Aa0,Aa0N
N
	A		A,@AaN
	A		AN
	AN
	AN
	AN
	AN
	AN
	AN
	A		AaAaN
aN
N
;//a: ****************************N
;//0AN
; A     AaAa,AaAa,AaN
; AN
;     0 + 0  0-0-N
A_Aa_Aa  AN
;//a: AaN
AaAa:N
    A     A,AaAaN
    A     A,AN
    A     AaAaAa       ; 0N
    A     AaAaAa       ; 0 N
    A     AaAaAa        ; 0    ; A=0,N
                               ;N
    A     AaAaA        ; 0    N
    A     AaAaAa       ; 0    N
    A     AaAaAa        ; 0    ; A=0,N
                               ;N
    A     AaAaAa      ; 0        N
                               ;N
    A     AaAaAaA      ; 0        N
    A     AaAaAa      ; 0    N
    A     AaAa         ; 0     N
aN
A_Aa_A   aN
;//A: 0AN
; Aa=0N
AaAaAa:N
    A     Aa_Aa,Aa_AN
    AN
N
    A     A,@0N
    A     AaAa,AN
_AaAa:N
    A     AaAaN
    AN
;//A: 0(0)A AN
AaAaAa:N
    A      Aa_Aa,Aa_AN
    A     _AaAaN
;********************************************************N
;//A: 0(0)A N
AaAaAa:                                    ; A0 -  0 -  0-N
    A      Aa_Aa,Aa_A                  ; A0-A0  [0-0] aN
    A      AaAa,AaAaN
    A     Aa_Aa,Aa_AN
    A      AaAa,AaAaN
N
    A     AaN
_AaAa:N
    A     AaAaN
    A     AaAa,AaAaN
    A     _AaAaN
N
    A     AaAaN
    AN
;//A:0N
;********************************************************N
;//A:0A 0-0-N
AaAaA:N
    A     A,AaN
    A     A_Aa,AN
    A     AaN
    A     A,@0N
    A     AaAa,AN
N
    A     A_Aa,A_AaAa    ; 0N
    A     _AaAa                 ; N
_AaA:N
;//A:A0N
    A     Aa_Aa                 ; N
    A     A,@~(0<<Aa_A)N
    A     Aa_AaN
N
    A     A,A_AaN
    A     A,@0A0AN
    A     A,@0a0N
    A     AaAaAa,AN
    A     A,A0N
    A     Aa,A                    ; N
N
    A     A,@0N
    A     AaAa,AN
    AN
;********************************************************N
;//A:  0N
AaAaAa:N
    A     A,A_AaN
    A     A,@0A0AN
    A     A,@0a0N
    A     AaAaAa,AN
    A     A,AaN
	A		A,@0A0AN
	A		AaAa,AaAaN
	A		$+0N
N
    A     A,AaN
    A     A0,A                    ; N
N
    A     AaAaN
    AN
;********************************************************N
;//A:  N
;//A:0A N
AaAaAaA:N
    A      Aa_Aa,Aa_AN
N
    A     AaN
    A     AaAa,AaAaN
    A      Aa_Aa,Aa_AN
    A     AaAa,AaAaN
    A      Aa_Aa,Aa_AN
N
    A     _AaAaN
;//A:0A 0N
AaAaAa:N
    A      Aa_Aa,Aa_AN
    A     _AaAaN
;//A: 0A=0N
AaAa:N
    A     Aa_AaN
    A      A,@0<<Aa_AN
    A     Aa_AaN
    A     AaAaN
    AN
aN
N
A_A0Aa0 aN
;//A:A_A0Aa0N
/*N
 0.0.0 0AN
    A0 A0A0,A0N
    A0A,N
N
    N
      A, A A  A0,A0N
N
    A0 N
	      0A     --            N
		              0A A   N
					      A :  A0-0 0  A0 - 0/0  A0 - / N
					  0A A    A0 N
					      A :  A0,A0,A0,A0,A0,A0,A0,A0 N
				      0A A    A0 N
					  0A A    A0 N
					  0A A    A0 N
					  0A (0)N
					  0A ....N
					  0A ....N
					  0A ....N
	A0 AN
	A  - 0A0, A0-AN
	                  A0A N
					  A0A N
	                  A0A N
					  A0A N
	                  A0A N
					  A0A N
	                  A0A N
					  A0A N
	                  A0A N
					  A0A N
	                  A N
					  A N
	                  A N
					  A N
	                  A N
					  A N
N
    A0A   0A, 0A 				  N
*/N
N
a AaAa0AaN
N
A_0	a	 (A_a|A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a|A_a)N
A_0	a	 (A_a|A_a|A_a|A_a|A_a|A_a|A_a)N
N
A_A	a	 A_aN
A_A	a	 (A_a|A_a|A_a|A_a|A_a|A_a)N
A_A	a	 (A_a|A_a|A_a|A_a|A_a)N
A_A	a	 (A_a|A_a|A_a|A_a|A_a)N
A_A0	a	 (A_a|A_a|A_a|A_a)N
A_A a (A_a|A_a)N
A_A	a	 (A_a|A_a|A_a|A_a|A_a)N
A_A   a	 (A_a|A_a|A_a|A_a|A_a)N
A_A   a	 (A_a|A_a|A_a)N
A_A   a	 (A_a|A_a|A_a|A_a|A_a)N
A_A	a	 (A_a|A_a|A_a|A_a)N
A_A   a  (A_a|A_a)N
A_A   a  (A_a|A_a|A_a)N
A_A	a  (A_a|A_a|A_a|A_a)N
N
;N
N
    A_AaAa_Aa  ==   A_AaAa_Aa     |   (0<<A_A)N
    A_AaAa_Aa  ==   A_AaAa_Aa     |   (0<<A_A)N
    A_AaAa_Aa  ==   A_AaAa_Aa     |   (0<<A_A)    |   (0<<A_A)N
N
;********************************************************************N
A_Aa:N
    A     A,@A_AaAa_AaN
    A     A_AN
	A      A_A,A_AN
	A	N
;********************************************************************N
A_AaAa:N
	A     Aa0,AN
	A     A,@0N
	A     Aa0,AN
N
_A_Aa:N
	A     A,@A_AaAa_AaN
	A     A_A	N
	A      A_A,A_AN
N
	A     Aa0,0N
	A      A_A,A_AN
	A     Aa0,0N
	A      A_A,A_AN
N
	A     A,@A_AaAa_AaN
	A     A_AN
N
	A     Aa0N
	A     Aa0N
	A     _A_AaN
	AN
;********************************************************************N
A_AaAa:N
A_Aa0Aa:N
	A     A,@A_AaAa_AaN
	A     A_A	N
	A      A_A,A_AN
N
	A     A,@A_AaAa_AaN
	A     A_A	N
	AN
;********************************************************************N
;********************************************************************N
A0_AaAa0:			N
	A     AaAa0,AN
    A    A_AaN
	A     A,@A_A0_A0N
	A     A0_A+0N
N
A0_AaAa0:N
	A     AaAa0,AN
    A    A_AaN
	A     A,@A_A0_A0N
	A     A0_A+0N
N
A0_AaAa0:N
	A     AaAa0,AN
    A    A_AaN
	A     A,@A_A0_A0N
	A     A0_A+0N
N
A0_AaAa0:N
	A     AaAa0,AN
    A    A_AaN
	A     A,@A_A0_A0N
	A     A0_A+0N
N
;********************************************************************N
A0_A:N
	A     A,@0a0N
    A     $+0N
A0_A:N
    A     A,@0A0N
    A     AaAa0,AN
N
	A	A_AaN
    A     A,@0a0N
	A	A_AaAaN
	A	A_AaAaN
N
	A     A,AaAa0N
	A	A_AaAaN
	A	A_AaAaN
N
A_Aa:   N
	A     A,@A_AaAa_AaN
	A     A_A	N
	A      A_A,A_AN
	A      A_A,A_AN
N
	A     A,@A_AaAa_AaN
	A     A_A	N
N
	A     A,@A_AaAa_AaN
	A     A_A	N
	AN
aN
;********************************************************************N
N
;********************************************************************N
a AaAa0AaN
A_AaAa:N
	A     Aa0N
	A     A,@0N
	A     Aa0,AN
N
	A	A_Aa0AaN
	N
    A      AaAa,AaAaN
    A     A_A,A_AN
    A      AaAa,AaAaN
    A     Aa0N
N
    A     Aa0N
    A     $-0N
    AN
N
;  Aa0 N
A0_AaAaAa:		N
	A	A_AaN
	A     A,@0a0N
	A	A_AaAaN
	A	A_AaAaN
	A	A_AaAaN
    A     A_AaN
aN
;********************************************************************N
a AaA0AaN
A_A0AaAa_AaAa   a     A_A0AaAa    +  (0<<A_A)N
A_A0AaAa_AaAa   a     A_A0AaAa    +  (0<<A_A) N
A_A0AaAa          a     A_A0AaAa    +  (0<<A_A) + (0<<A_A)N
N
_A0AaAaAa:N
_AaAaAa:N
	A		A,@0aAN
	AN
N
;//A: A0A_Aa0N
A0A_Aa0:                              ; A 0 A 0N
	A     A_A,A_AN
	A     _AaAaAaN
	A     A,@A_A0AaAaN
	A     A_AN
	A      A_A,A_AN
	A      A_A,A_AN
    AN
;//A: A0A_AaN
A0A_Aa:                               ; A AN
	A     A_A,A_AN
	A     _AaAaAaN
N
	A     A,@A_A0AaAaN
	A     A_AN
	AN
;****************************0.0.0*******************************N
;  A,A N
;//A:   A0A_Aa   N
;              A,AN
A0A_Aa:N
	A     A_A,A_AN
	A     _AaAaAaN
    N
;//A:A0A_Aa_Aa0N
A0A_Aa_Aa0:N
	A     A,@A_A0AaAa_AaAa        ; A =0 ,A 0->0N
	A     A_AN
	A      A_A,A_AN
    AN
;//A:A0A_Aa_AaN
A0A_Aa_Aa:N
	A     A,@A_A0AaAa_AaAa        ; A =0 ,A 0->0N
	A     A_AN
	AN
;//A:A0A_Aa_AaN
A0A_Aa_Aa:                          ; A 0N
	A     A_A,A_AN
	A     _AaAaAa   N
	A     A,@A_A0AaAa              ; N
	A     A_AN
    A      A_A,A_AN
	AN
	N
N
;*************************************************N
;//A:  A0A_AaAaN
A0A_AaAa:N
	A    A0A_Aa0                   ; A=0, A=0N
    A     A0A_Aa_Aa               ; A=0, A=0N
;*************************************************	N
; A  , A N
;          __      ____N
;   A      |____|N
;         ____    _____ N
;   A   ____A_____N
;//A:  A0A_AaAaN
A0A_AaAa:N
	A		Aa0,A			; N
	A		A,@0N
	A		Aa0,AN
N
_A0AaAaAa:N
	A    A0A_Aa_AaN
N
	A		Aa0,0           ;  AN
	A		A_A,A_AN
	A		Aa0,0N
	A		A_A,A_A	;N
N
	A    A0A_Aa_Aa	    ; A=0N
N
	A		Aa0N
	A		Aa0N
	A		_A0AaAaAaN
N
	A	N
;*****************************************************N
;//A: A0A_AaAaN
A0A_Aa0Aa:N
A0A_AaAaAa:N
A0A_AaAa:N
	A     A_A,A_AN
	A     _AaAaAaN
N
	A     A,@A_A0AaAa_AaAaN
	A     A_AN
	A      A_A,A_AN
N
;//A:A0A_AaAaN
A0A_AaAa:N
	A     A,@A_A0AaAaN
	A     A_AN
	AN
	N
N
;******************************************************N
;,  N
;//A:  A0A_AaAaN
A0A_AaAa:					;  A = 0N
	A   	Aa0N
	A		A,@0N
	A		Aa0,AN
_A0A_AaAaAa:				; A  = 0   0*0.0= 0.0a = 0A N
    A    A0A_Aa0AaN
N
	A		AaAa,AaAaN
	A		A_A,A_AN
	A		AaAa,AaAaN
	A		Aa0N
N
	A		Aa0N
	A		_A0A_AaAaAaN
N
	A		A,Aa0			; A	N
	AN
N
;*************************************************	N
;   AaAaAa, N
;   AaAa0           A0 - 0  A0-0 N
;   Aa0,N
;   Aa0,  A N
;//A:    A0A_AaAaAaN
A0A_AaAaAa:N
	A	A0A_AaN
	A		A,AaAa0N
	A	A0A_AaAaN
	A	A0A_AaAaN
	A     A_A,A_A		N
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0A_AaAaN
	A	A0A_AaAaN
	A		A_A,A_AN
	A		_A0AaAaAaN
;********************************************************************    N
    A    A0A_AaAa                  ; N
; A0N
; AN
; N
;********************************************************************    N
	A	A0A_AaN
	A    AaAa0N
	A	A0A_AaAaN
	A	A0A_AaAaN
	A		A_A,A_AN
	A		_A0AaAaAaN
N
    A     $+0N
_A0AaAaAa:N
	A	A0A_AaAaN
N
	A	A0A_AaAaN
	A		A0,AN
	A		AaAaAaN
N
	A		Aa0N
	A		_A0AaAaAaN
N
;*************************************************N
;   A  A N
    A    A0A_AaAaAaN
;//a:   A0A_AaN
A0A_Aa:N
    A    A0A_Aa0                   ; A=0, A=0N
    A    A0A_Aa_Aa               ; A=0, A=0N
    A     A0A_AaAa                   ; A=0, A=0N
N
;*************************************************	N
;   AaAaAa, N
;   AaAa0           A0 - 0  A0-0 N
;   Aa0,  N
;   Aa0,  A N
;//A:A0A_AaAaAaN
A0A_AaAaAa:N
	A	A0A_AaN
	A		A,AaAa0               ; A N
	A	A0A_AaAa    	; ,a0,a0N
	A	A0A_AaAaN
	A		A_A,A_AN
	A		_A0AaAaAaN
N
	A		A,Aa0N
	A	A0A_AaAaN
	A	A0A_AaAaN
	A		A_A,A_AN
	A		_A0AaAaAaN
N
_A0A_AaAaAa:N
	A		A,A0N
	A	A0A_AaAaN
	A	A0A_AaAaN
	A		A_A,A_AN
	A		_A0AaAaAaN
N
	A		AaAaAaN
	A		Aa0N
	A		_A0A_AaAaAa	N
N
	A		A0A_Aa                ; N
aN
aN
N
N
N
N
A_A0A_Aa0 aN
;//A: A_A0A_Aa0N
AaAaAa:N
AaAaAaAa:N
    A     A,AN
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
    A    @0<<0N
N
AaAaAa:N
    A     A,AN
    A    @0A0N
    A    @0A0     ;N
    A    @0A0     ;N
    A    @0A0     N
    A    @0A0     N
    A    @0A0N
    A    @0A0N
    A    @0A0N
N
AaAaAa0:N
    A     A,AN
    A    @0A0N
    A    @0A0N
    A    @0A0     ;N
    A    @0A0     ;N
    A    @0A0     N
    A    @0A0     N
    A    @0A0N
    A    @0A0N
 N
;*****************************************N
; A0A Aa N
;     N
;    AaAaAa  aN
;*****************************************N
	A_Aa_AaAa		==	 A_Aa_Aa_Aa | (0<<AaA)N
N
    A_AaAaAa        ==   0N
    A_AaAa_A        ==   A_AaAaAa       + 0N
    A_AaAaAa       ==   A_AaAa_A       + 0N
    A_AaAaAaAa  ==   A_AaAaAa      + 0      N
    A_AaAa         ==   A_AaAaAaAa + 0N
    A_AaAaAaAa   ==   A_AaAa        + 0        N
    A_AaAa            ==   A_AaAaAaAa  + 0N
    A_AaAa           ==   A_AaAa           + 0N
    A_AaAa           ==   A_AaAa          + 0N
    A_AaAa             ==   A_AaAa          + 0N
    A_AaAa            ==   A_AaAa            + 0N
;*****************************************N
;//a: AaAa                               ;A0A  aN
AaAa:N
	A		A,A0A_AaN
	A		A,AaAaN
	A		A,@A0AaN
	A		AaAa,A                        ; AaAa N
	A		AaAa,A                     ; AaAa N
 N
    A     AaAa,A_AaN
    A     AaAaAa N
N
    A     AaAa,AaA            ;  A N
    A     AaAaAa    N
N
	A		AaAa,AaA               ; A N
	A		AaAaAaN
	N
	A		AaAa,AaAN
    A     Aa0_AaAaAa               ; A  A,  AaAa:N
AaAa:                                    ; A  AN
    A      AaAa,A_AaAa          ; A N
N
    A     A0AaN
    A     _AaA_0N
N
Aa_AaAaAa:      N
    A     A0Aa                         ; A A AN
AaAaAa:N
AaAa:N
;//a: N
    A     A,A0AaN
    A     A,AN
    A     AaAaAa                      ;0   A  A  A,AN
    A     Aa0_AaAaAa               ;0N
    A     Aa0_AaAa_A               ;0N
    A     Aa0_AaAaAa              ;0N
    A     Aa0_AaAaAaAa         ;0N
    A     Aa0_AaAa                ;0N
    A     Aa0_AaAaAaAa          ;0N
    A     Aa0_AaAa                   ;0N
    A     Aa0_AaAa                  ;0 N
    A     Aa_AaAa                    ;0 N
    A     Aa_AaA                      ;0N
    A     Aa_AaAa                     ;0N
;*****************************************************************************************    N
Aa0_AaAaAa:                          ;  A N
    A     AaAaAa                      ; N
    A     A,@A_AaAaAaN
    A     A0Aa,AN
    A     AaN
    A     AaAaAaN
;*****************************************************************************************    N
AaAaAa:N
    A    AaAaAaN
    A     AaAa0,AN
    A     AaAa0N
    A    AaAa0    N
    A     A,@0N
    A     A,@AaAaAaN
    A     AaAa0,AN
N
    A     A,AaAaAaN
    A     A,@0N
    A     AaAa,AaAaN
    A     AaAa0N
N
    A     A,AaAa0N
    A     AaAaAa,AN
    AN
N
; AN
AaAaAa:N
    A    AaAaAaN
    A     A,AaN
    A     A0,AN
    A     AaN
    AN
;*****************************************************************************************    N
AaAaAaAa:N
    A     A,AaAaAaN
    A     A,@0N
    AN
N
Aa0_AaAaAa:                          ;  AN
    A     AaAa,AaA               ; A N
    A     AaAaAaN
    N
	A		AaAa,AaAN
	A		$+0                   N
N
    A     A,AaAaAa                    ; AN
    A     AaAa,AaAaN
    A     AaAaAaN
    A     AaN
N
    A     A,AaAaAaN
    A     A,@0N
    A    AaAaAaAaN
    A     AaAa,AaAN
    AN
    A      Aa,AN
N
    A     AaAaAaN
N
    A     A,AaAaAaN
    A     A,@0N
    A     AaAa,AaAaN
    A    AaAaAaN
N
    A     A,AaAaAaN
    A     A,AaAaAaN
    A     AaAa,AaAaN
    A     AaAaAaN
N
    A     A,AaAaAaN
    A     A,@0N
    A     AaAa,AaAaN
    A    AaAaAaN
;                 ; AaAa0 - N
    A     A,@AaAaAaN
    A     A,AaAa0N
    A     AaAa0,A                ; AaAa0 - N
N
    A     A,AaAa0N
    A     AaAaAa,AN
    A    AaAaAaAaN
    A    AaAaAa0N
    A     A,A0N
    A     AaAa,AaAaN
    A     $+0N
N
    A     AaAa0N
    A     AaAa,AaAaN
    A     Aa0_AaAaAaAaN
N
    A     AaAaAaN
    A      A,A0N
    A     AaAa,AaAaN
    A     $-0N
;***************N
    A    AaAaAaN
    A     A,@0N
    A     AaAa,AaAaN
    A     AaAa0N
N
    A     A,@AaAaAaN
    A     A,AaAa0                ; N
    A     AaAa0,A                ; AaAa0 - N
    A     A,@AaAaAaN
    A     AaAa0,A                ; N
N
    A     A,AaAa0N
    A     AaAaAa,AN
    A     A,A0N
    A     AaAa0,AN
    A     A,AaAa0N
    A     AaAaAa,AN
    A     A,A0N
    A     A,AaAa0N
    A     AaAa0,AN
N
    A    AaAaAaN
    A     A,@0N
    A    AaAaAa  N
    A     A,AaAa0N
    A     AaAa,AaAaN
    A     Aa_AaAaAaN
    N
Aa0_AaAaAaAa:N
    A     AaAa0N
    A     AaAa0N
    A     AaAa0N
    A     AaAa,AaAaN
    A     Aa0_AaAaAaAaN
N
    A     A,AaAa0N
    A     AaAaAa,AN
    A     A,A0N
    A     AaAa0,AN
    A     A,AaAa0N
    A     AaAaAa,AN
    A     A,A0N
    A     A,AaAa0N
    A     AaAa,AaAaN
    A     Aa0_AaAaAaAaN
    A     Aa_AaAaAaN
N
Aa0_AaAaAaAa:N
    A     A,@A_AaAa_AN
    A     AaAaAaAa                     ;  A_A  Aa0_AaAa_AN
N
Aa0_AaAa_A:                          ;  a N
    A    AaAaAaN
    A    AaAaAaN
    A     A,@0N
    A    AaAaAaN
    A     A,A0N
    A     AaAa,AaAa              ; Aa , A0-0   -0 N
    A     _Aa0_AaAa_AN
N
    A     A,@A_AaAaAa                ; N
    A     AaAaAaAa                   ;  Aa0_AaAaAa AN
N
Aa0_AaAaAa:                         ; AN
    A     A,AaN
    A     A,@AaAaN
    A     AaAa,A                       ; N
N
    A     A,@A_AaAaAaAa           ; N
    A     AaAaAaAa                     ;  A_A  Aa0_AaAaAaAa N
    N
Aa0_AaAaAaAa:N
    A     A,@A_AaAa                  ; N
	A     AaAaAaAa                   ;  Aa0_AaAa N
	N
Aa0_AaAa:                           ; N
    A     A,AaAaN
    A     AaAaAa,A                     ; N
    A     A,AaN
    A     A0,A                            ; N
    A     AaAa                         ; N
N
    A     A,@0a0                         ; 0A A0A0AN
    A     A,AaAaN
    A     AaAa,AaAaN
    A     $+0N
    A     A,@AaAa                      ; 0A0 AaAaN
    A     AaAa,AN
N
    A     A,@A_AaAaAaAaN
    A     AaAaAaAa                     ; A_A Aa0_AaAaAaAa0N
N
Aa0_AaAaAaAa:N
    A     A,@A_AaAa    ;N
	A     AaAaAaAaN
N
_Aa0_AaAa_A:N
_Aa0_AaAa_A0:N
	A     A,@0                            ; N
	A     A,AN
    A     A,AaAaN
    A     AaAaAa,AN
    A     A,A0N
    A     Aa,A                          ; N
N
    A     AaAa                         ; N
N
    A     A,@0a0                         ; 0A A0A0AN
    A     A,AaAaN
    A     AaAa,AaAaN
    A     $+0N
    A     A,@AaAa                      ; 0A0N
    A     AaAa,AN
N
    A     A,@A_AaAa                     ;N
    A     AaAa,AN
    A     A,@A_AaAaN
    A     A0Aa,A                       ; Aa0_AaAaN
    A     AaAaAaN
N
Aa0_AaAa:N
    A     A,@A_AaAaN
    A     A0Aa,A                       ; 0Aa0_AaAa A_AN
    A     AaAaAaN
Aa0_AaAa:N
    A     AaAa,AaAN
    A     AaAaAaN
    N
	A		AaAa,AaAN
	A		Aa                        ; A  AN
	A		AaAa,AaA            ; A N
	A		Aa0_AaAa                 ; A  A_AN
    A     _Aa0_AaAa_A0              ; A  A_A N
N
Aa0_AaAa:N
    A     A0AaN
    A     AaAaAaN
;*****************************************N
AaAaAa:                              ; A N
    A     A,0N
    A     AaAaAaN
Aa:N
_AaA_0:N
    A     A,@A_Aa_AaAa               ; A, A N
	A		A0A_AaN
    A      AaAa,A_AaN
	A		AaAaAaN
N
_AaA_0:N
    A     A,@A_Aa_Aa_Aa           ; A  A N
	A		A0A_AaN
	A		A0A_Aa,AaA    N
    A      AaAa,A_AaN
    A     AaAaAaN
N
;*****************************************N
Aa_AaAa:                               ; N
    A     AaAa,AaA               ; A N
    A     AaAaAaN
    N
	A		AaAa,AaAN
	A		AaAaAa                   ; AN
    N
	A		AaAa,AaAa             ; AN
	A		AaAa,AaAN
	A		AaAa,AaAa             ; AN
	A		AaN
	N
	A		AN
	A		AaAaAaN
N
    A     _AaAaN
;*****************************************N
Aa_AaA:                                 ;  A_A N
    A     AaAa,AaA               ; A N
    A     AaAaAaN
N
	A		AaAa,AaA            ; N
	A		_AaA_0N
N
_AaAa:   N
    A     A,AaAa                       ; AN
    A     A0Aa,AN
    A     AaAaN
;*****************************************N
Aa_AaAa:                                ; N
    A     AaAa,AaA               ; AN
    A     AaAaAaN
N
	A		AaAa,AaAN
	A		Aa_AaAa_AaAaN
N
	A		AaN
    A     AaAa,AaAa             ; N
    A     _AaA_0N
    A     _AaA_0N
N
Aa_AaAa_AaAa:N
	A		AN
	A		AaAaAa    N
N
    A     _AaAa                     ; 0N
;***************************************** N
AaAaAaAa:N
    A     AaAa,AN
    A     A,@A_AaAaN
    A     A0Aa,AN
    A     AaAaAaN
;*****************************************    N
AaAaAaAa:N
    A     AaAa,AN
N
	A     A,@0N
	A     A,AN
	A		AaN
N
    A     A,@A_AaAaN
    A     A0Aa,AN
    A     AaAaAaN
;********************************************************N
N
a AaA0AaN
    A_AaAaAa   ==   0N
    A_AaAaAa   ==   0N
; A=0N
; A=0N
AaAaAaAa:N
    A     A,@A_AaAaAaN
    A     A,AaAaAaN
    A     AaAa,AaAaN
    AN
N
    A     A,AaAaAaN
    A     A,@A_AaAaAaN
    AN
N
;0N
AaAaAa:N
    A    AaAaAaAaN
    A     AaAa,AaAaN
    A     $+0N
    A    AaAaAa+0N
    A     AaAaAa,AN
N
    A    AaAaAaN
    A     AaAa0,AN
    A     AaAa0N
    A    AaAa0N
N
    A     A,@0N
    A     A,@AaAaAa+0N
    A     AaAa0,AN
N
    A     A,AaAaAaN
    A     A,@0    N
    A     AaAa,AaAaN
    A     AaAa0N
N
    A     A,AaAa0N
    A     AaAaAa,AN
    A     A,@AaAaAa+A_AaAaAa-0N
    A     AaAa0,AN
N
    A     A,AaAaAaN
    A     A,@0N
    A    AaAaAa0N
    A     A0,AN
N
    A     A,AaAa0N
    A     AaAa,AaAaN
    AN
    A     AaAaAaN
    A     A0N
    A     AaAa0N
    A     $-0N
    AN
aN
N
aN
N
A_A0A0   a             ; 0.0.0N
;*******************************************************************N
; a N
;   AaAa.A_AaAaAa = 0N
;  A     A_A,A_A          N
;  A    aA0A0_AaAaN
;*******************************************************************N
; A_A              a     AaAa   	 +   0  ; N
; A_A              a     AaAa        +   0  ; N
;*******************************************************************N
; ;A0A0 N
;   A    a_A0A0     ; A0A0N
; N
; A_A:                 ; N
; A_A:                 ; N
;     A     A,AN
;     A    @0a0N
;     A    @0a0N
;     A    @0a0N
;     A    @0a0N
;     A    @0a0N
;*******************************************************************N
; A.AN
; A_A            a     Aa0       ; A A/AN
; A_A            a     0N
                                N
; A_A           a     Aa0N
; A_A           a     0           ; A, A AN
                                N
; A_A           a     Aa0N
; A_A           a     0           ; A, A AN
                                N
; A_A         a     Aa0N
; A_A         a     0           ; A0A0N
                                N
; A_A         a     Aa0N
; A_A         a     0           ; AN
                                N
; A_A           a     Aa0       ; AN
; A_A           a     0           N
N
N
;//A: N
    A_A_A   ==  0    ; N
    A_A_A ==  0   ; N
N
    A_A_A   ==  A_A_AN
    A_A_A ==  A_A_A    ;N
N
;//A: aA0A0-N
; aA0A0 N
    A_A        ==  0a0N
    A_A       ==  0a0N
    A_A_A     ==  0a0    ; N
    A_A_A     ==  0aA0    ; N
    A_A        ==  0aA0    ;  AN
    A_A        ==  0aA0    ;     N
    A_A_A     ==  0aA0    ; N
    A_Aa           ==  0aAN
;//A: aA0A0-N
    A          ==  0a0    ; A,N
    A_A           ==  0a0    ; N
    A_A       ==  0a0    ; N
    A_A        ==  0a0    ; N
    A_A      ==  0a0    ; N
    A_A           ==  0a0    ; N
    A_A        ==  0a0    ; N
    A          ==  0a0    ; N
        A_A           ==  0N
            ;0N
        A_A           ==  0N
            ;0N
        A_A          ==  0       N
            ;0A_A N
    A_A      ==  0a0    ; N
    A              ==  0a0    ; N
    A_A_A0      ==  0a0A    ; 0N
    A_A_A0      ==  0a0A    ; 0N
    A_A_A0      ==  0a0A    ; 0N
    A_A_A0      ==  0a0A    ; 0N
    A_A_A0      ==  0a0A    ; 0N
    A_A_A0      ==  0a0A    ; 0N
    A_A         ==  0a0    ; N
    A_A_A0        ==  0a0    ; 0N
    A_A_A0        ==  0a0    ; 0N
    A_A_A0        ==  0a0    ; 0N
    A_A_A0        ==  0a0    ; 0N
    A_A_A0        ==  0a0    ; 0N
    A_A_A0        ==  0a0    ; 0N
    A_A     ==  0a0    ; N
N
A_A:N
    A     AaAa0,AN
    A     A,@0N
    A     AaAa0,A           ; 0N
;AN
    A     AaAa0             ; N
N
    A     AaAa,AaAa             ; N
    A      A_A,A_AN
    A     AaAa,AaAaN
    A      A_A,A_AN
N
    A      A_A,A_AN
    A      A_A,A_AN
    A     AaAa0N
    A     $-0N
    AN
N
A_A:N
    A     A,@0N
    A     AaAa0,A           ; 0N
;AN
    A      A_A,A_AN
N
    A      AaAa,AaAa             ; N
    A     A_A,A_AN
    A      AaAa,AaAa             ; N
    A     AaAa0N
N
    A      A_A,A_AN
N
    A     AaAa0N
    A     $-0N
    A     A,AaAa0N
    AN
N
A_A:N
    A      A_A,A_AN
    A    A_AN
    A      A_A,A_AN
    AN
N
;******************************************N
;//A: A_A_AaN
; N
;   AaAa0 - [a]N
;   [A] - [a]N
A_A_Aa:N
    A      A_A,A_AN
    A    A_AN
N
    A     A,AaAa0N
    A    A_AN
    A      A_A,A_AN
    AN
;******************************************N
;//A: A_Aa_AaN
;   AaAaAa  -    N
;   AaAa0 - N
;   [A] - N
;N
A_Aa_Aa:N
    A      A_A,A_AN
N
    A    A_AN
N
    A    A_AN
    A     A0,AN
    A     AaAaAaN
    A     AaAa0N
    A     $-0N
N
    A      A_A,A_AN
N
    AN
;******************************************N
;//A:  A_Aa_AaN
;   AaAaAa  -    N
;   AaAa0 - N
;   [A] - N
;N
A_Aa_Aa:N
    A      A_A,A_AN
N
    A    A_AN
N
    A     A,A0N
    A    A_AN
    A     AaAaAaN
    A     AaAa0N
    A     $-0N
N
    A      A_A,A_AN
N
    AN
;******************************************N
;//A:  A_Aa_Aa_AaN
; A, N
; N
;   AaAa0 - N
;   [A] - N
;N
A_Aa_Aa_Aa:N
    A      A_A,A_AN
    A     AaAa0N
N
    A    A_AN
;AN
    A     A,AaAa0N
    A    A_A                  ; N
N
    A    A_AN
    A     AaAa0N
    A     AaAa0N
    A     $-0N
N
    A      A_A,A_AN
    AN
;******************************************N
AaAa:N
    A     A,@A_AN
    A     AaAaAa,AN
    A     A,@A_A_AN
    A     AaAa0,AN
N
    A     A0N
    A     AaAaAaN
    A     AaAa0N
    A     $-0N
    AN
;******************************************N
;//A: aA0A0_AaAaN
; ,AN
;  AaAaAa  N
aA0A0_AaAa:N
    A     A_A,A_AN
    AN
    A    AaAaN
N
    A    A_A          ; N
    N
    A     AaAa0,A_A           ; N
    A     AaAaAaAaN
N
    A      A_A,A_A               ; A,A A=0, A = 0N
    A     A,@A_AN
    A     AaAaAa,AN
    A     A,@A_A_AN
    A     AaAa0,AN
    A     A,@A_A_AN
    A    A_Aa_Aa            ;  A_A N
    A      AaAa,A_AaAaAa     ; N
AaAaAaAa:N
    A     A,@(0<<A_A) | (0<<A_A) | (0<<A_A)N
    A     AaAa0,AN
    A      A_A,A_AN
 N
    A     A,@A_A+AN
    A    A_A_Aa              ; A_A,A_A,A_A0N
N
;//A: AaAa_AaN
; N
;N
AaAa_Aa:N
    A      A_A,A_AN
N
    A     A,@0a0AN
    A     AaAa0,AN
    A     A,@A_A+AN
    A    A_A_Aa              ; A0A,N
N
    A      A_A,A_AN
    A     A,@A_AN
    A    A_A           ; N
    A      A_A,A_AN
N
    A      A_A,A_AN
    AN
    N
; ;******************************************N
;     A     A,@0N
; ;******************************************N
; ;//A: aAa_aN
; ; a,              [A]=0  0A - 0A,   0A -0aN
; ;  0A   0.0aN
; aAa_a:N
;     A     AaAa0,AN
    N
;     A N
;     A N
;     A     AaAa0N
;     A     $-0N
;     AN
N
N
;******************************************N
;//A: aA0A0_AaAaN
;  a_a , 0aN
aA0A0_AaAa:N
    A      A_A,A_A                   ; Aa N
N
    A      A_A,A_AN
    A     A,@A_AN
    A    A_A               ; N
    A      A_A,A_AN
N
    A     A,@A_AN
    A     AaAaAa,AN
    A     A,@A_A_AN
    A     AaAa0,AN
    A     A,@A_A_A    N
    A    A_Aa_Aa               ;//N
N
    A     A,@0a0A                     ; N
    A     AaAa0,AN
    A     A,@A_A+AN
    A    A_A_AaN
N
    A      A_A,A_A                   ; A,N
    AN
;******************************************N
;//A: a_A0A0N
a_A0A0:N
    A      A_A,A_A                   ; N
    A      A_A,A_A                 ; A N
    A      A_A,A_AN
N
    A     A,@A_A_AN
    A     AaAa0,AN
    A     A,@A_A+A_AN
    A    A_Aa_Aa_Aa         ; N
N
    A     A,@A_A_AN
    A     AaAa0,AN
    A     A,@A_A+A_A_A0N
    A    A_Aa_Aa_Aa         ; N
N
    A     A,@0a0N
    A     AaAa0,AN
    A     A,@A_A+A_A          ; 0 A N
    A    A_A_AaN
N
    A     A,@0a0N
    A     AaAa0,AN
    A     A,@A_A+A_A      ; 0a0    N
    A    A_A_AaN
N
    A     A,@0a0N
    A     AaAa0,AN
    A     A,@A_A+A_A          ; 0.0Aa,N
    A    A_A_AaN
N
    A     A,@A_A_AN
    A     AaAa0,AN
    A     A,@A_A+A_A_A0       ; 0N
    A    A_A_AaN
N
    A     A,@0a0N
    A     AaAa0,AN
    A     A,@A_A+A_A       ; 0A0aAN
    A    A_A_AaN
N
N
N
    A     AaAaAaAaN
N
N
N
a