; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\Ali\Samples\C++\Examples 2\MemoryManagement\MemoryManagement\E02.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?fun2@?$CA@N@Ex2@@QAEXN@Z			; Ex2::CA<double>::fun2
PUBLIC	__real@405923d70a3d70a4
PUBLIC	?fun2@?$CA@M@Ex2@@QAEXM@Z			; Ex2::CA<float>::fun2
PUBLIC	__real@42c90000
PUBLIC	?fun2@?$CA@H@Ex2@@QAEXH@Z			; Ex2::CA<int>::fun2
PUBLIC	?fun@CBase@Ex2@@QAEXXZ				; Ex2::CBase::fun
PUBLIC	?main2@@YAXXZ					; main2
EXTRN	__fltused:DWORD
EXTRN	__RTC_CheckEsp:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT __real@405923d70a3d70a4
; File c:\ali\samples\c++\examples 2\memorymanagement\memorymanagement\e02.cpp
CONST	SEGMENT
__real@405923d70a3d70a4 DQ 0405923d70a3d70a4r	; 100.56
CONST	ENDS
;	COMDAT __real@42c90000
CONST	SEGMENT
__real@42c90000 DD 042c90000r			; 100.5
CONST	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ?main2@@YAXXZ
_TEXT	SEGMENT
_obj3$ = -29						; size = 1
_obj2$ = -17						; size = 1
_obj1$ = -5						; size = 1
?main2@@YAXXZ PROC					; main2, COMDAT

; 24   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 228				; 000000e4H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-228]
	mov	ecx, 57					; 00000039H
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 25   : 	CA<int> obj1;
; 26   : 	CA<float> obj2;
; 27   : 	CA<double> obj3;
; 28   : 
; 29   : 	obj1.fun();

	lea	ecx, DWORD PTR _obj1$[ebp]
	call	?fun@CBase@Ex2@@QAEXXZ			; Ex2::CBase::fun

; 30   : 	obj1.fun2(100);

	push	100					; 00000064H
	lea	ecx, DWORD PTR _obj1$[ebp]
	call	?fun2@?$CA@H@Ex2@@QAEXH@Z		; Ex2::CA<int>::fun2

; 31   : 	obj2.fun();

	lea	ecx, DWORD PTR _obj2$[ebp]
	call	?fun@CBase@Ex2@@QAEXXZ			; Ex2::CBase::fun

; 32   : 	obj2.fun2(100.5f);

	push	ecx
	fld	DWORD PTR __real@42c90000
	fstp	DWORD PTR [esp]
	lea	ecx, DWORD PTR _obj2$[ebp]
	call	?fun2@?$CA@M@Ex2@@QAEXM@Z		; Ex2::CA<float>::fun2

; 33   : 	obj3.fun();

	lea	ecx, DWORD PTR _obj3$[ebp]
	call	?fun@CBase@Ex2@@QAEXXZ			; Ex2::CBase::fun

; 34   : 	obj3.fun2(100.56);

	sub	esp, 8
	fld	QWORD PTR __real@405923d70a3d70a4
	fstp	QWORD PTR [esp]
	lea	ecx, DWORD PTR _obj3$[ebp]
	call	?fun2@?$CA@N@Ex2@@QAEXN@Z		; Ex2::CA<double>::fun2

; 35   : 
; 36   : }

	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@main2
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 228				; 000000e4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	1
$LN7@main2:
	DD	3
	DD	$LN6@main2
$LN6@main2:
	DD	-5					; fffffffbH
	DD	1
	DD	$LN3@main2
	DD	-17					; ffffffefH
	DD	1
	DD	$LN4@main2
	DD	-29					; ffffffe3H
	DD	1
	DD	$LN5@main2
$LN5@main2:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	51					; 00000033H
	DB	0
$LN4@main2:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	50					; 00000032H
	DB	0
$LN3@main2:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	49					; 00000031H
	DB	0
?main2@@YAXXZ ENDP					; main2
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun@CBase@Ex2@@QAEXXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?fun@CBase@Ex2@@QAEXXZ PROC				; Ex2::CBase::fun, COMDAT
; _this$ = ecx

; 9    : 		{

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx

; 10   : 		}

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?fun@CBase@Ex2@@QAEXXZ ENDP				; Ex2::CBase::fun
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@H@Ex2@@QAEXH@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 4
?fun2@?$CA@H@Ex2@@QAEXH@Z PROC				; Ex2::CA<int>::fun2, COMDAT
; _this$ = ecx

; 17   : 		{

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx

; 18   : 		}

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?fun2@?$CA@H@Ex2@@QAEXH@Z ENDP				; Ex2::CA<int>::fun2
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@M@Ex2@@QAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 4
?fun2@?$CA@M@Ex2@@QAEXM@Z PROC				; Ex2::CA<float>::fun2, COMDAT
; _this$ = ecx

; 17   : 		{

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx

; 18   : 		}

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?fun2@?$CA@M@Ex2@@QAEXM@Z ENDP				; Ex2::CA<float>::fun2
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@N@Ex2@@QAEXN@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 8
?fun2@?$CA@N@Ex2@@QAEXN@Z PROC				; Ex2::CA<double>::fun2, COMDAT
; _this$ = ecx

; 17   : 		{

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx

; 18   : 		}

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	8
?fun2@?$CA@N@Ex2@@QAEXN@Z ENDP				; Ex2::CA<double>::fun2
_TEXT	ENDS
END
