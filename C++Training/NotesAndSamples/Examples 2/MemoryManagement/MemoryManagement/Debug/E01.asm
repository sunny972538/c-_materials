; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\Ali\Samples\C++\Examples 2\MemoryManagement\MemoryManagement\E01.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?fun2@?$CA@N@Ex1@@QAEXN@Z			; Ex1::CA<double>::fun2
PUBLIC	__real@405923d70a3d70a4
PUBLIC	?fun@?$CA@N@Ex1@@QAEXXZ				; Ex1::CA<double>::fun
PUBLIC	?fun2@?$CA@M@Ex1@@QAEXM@Z			; Ex1::CA<float>::fun2
PUBLIC	__real@42c90000
PUBLIC	?fun@?$CA@M@Ex1@@QAEXXZ				; Ex1::CA<float>::fun
PUBLIC	?fun2@?$CA@H@Ex1@@QAEXH@Z			; Ex1::CA<int>::fun2
PUBLIC	?fun@?$CA@H@Ex1@@QAEXXZ				; Ex1::CA<int>::fun
PUBLIC	?main1@@YAXXZ					; main1
EXTRN	__fltused:DWORD
EXTRN	__RTC_CheckEsp:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT __real@405923d70a3d70a4
; File c:\ali\samples\c++\examples 2\memorymanagement\memorymanagement\e01.cpp
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
;	COMDAT ?main1@@YAXXZ
_TEXT	SEGMENT
_obj3$ = -29						; size = 1
_obj2$ = -17						; size = 1
_obj1$ = -5						; size = 1
?main1@@YAXXZ PROC					; main1, COMDAT

; 12   : {

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

; 13   : 	CA<int> obj1;
; 14   : 	CA<float> obj2;
; 15   : 	CA<double> obj3;
; 16   : 
; 17   : 	obj1.fun();

	lea	ecx, DWORD PTR _obj1$[ebp]
	call	?fun@?$CA@H@Ex1@@QAEXXZ			; Ex1::CA<int>::fun

; 18   : 	obj1.fun2(100);

	push	100					; 00000064H
	lea	ecx, DWORD PTR _obj1$[ebp]
	call	?fun2@?$CA@H@Ex1@@QAEXH@Z		; Ex1::CA<int>::fun2

; 19   : 	obj2.fun();

	lea	ecx, DWORD PTR _obj2$[ebp]
	call	?fun@?$CA@M@Ex1@@QAEXXZ			; Ex1::CA<float>::fun

; 20   : 	obj2.fun2(100.5f);

	push	ecx
	fld	DWORD PTR __real@42c90000
	fstp	DWORD PTR [esp]
	lea	ecx, DWORD PTR _obj2$[ebp]
	call	?fun2@?$CA@M@Ex1@@QAEXM@Z		; Ex1::CA<float>::fun2

; 21   : 	obj3.fun();

	lea	ecx, DWORD PTR _obj3$[ebp]
	call	?fun@?$CA@N@Ex1@@QAEXXZ			; Ex1::CA<double>::fun

; 22   : 	obj3.fun2(100.56);

	sub	esp, 8
	fld	QWORD PTR __real@405923d70a3d70a4
	fstp	QWORD PTR [esp]
	lea	ecx, DWORD PTR _obj3$[ebp]
	call	?fun2@?$CA@N@Ex1@@QAEXN@Z		; Ex1::CA<double>::fun2

; 23   : }

	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@main1
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
$LN7@main1:
	DD	3
	DD	$LN6@main1
$LN6@main1:
	DD	-5					; fffffffbH
	DD	1
	DD	$LN3@main1
	DD	-17					; ffffffefH
	DD	1
	DD	$LN4@main1
	DD	-29					; ffffffe3H
	DD	1
	DD	$LN5@main1
$LN5@main1:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	51					; 00000033H
	DB	0
$LN4@main1:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	50					; 00000032H
	DB	0
$LN3@main1:
	DB	111					; 0000006fH
	DB	98					; 00000062H
	DB	106					; 0000006aH
	DB	49					; 00000031H
	DB	0
?main1@@YAXXZ ENDP					; main1
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun@?$CA@H@Ex1@@QAEXXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?fun@?$CA@H@Ex1@@QAEXXZ PROC				; Ex1::CA<int>::fun, COMDAT
; _this$ = ecx

; 7    : 		void fun() 			{		} 

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?fun@?$CA@H@Ex1@@QAEXXZ ENDP				; Ex1::CA<int>::fun
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@H@Ex1@@QAEXH@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 4
?fun2@?$CA@H@Ex1@@QAEXH@Z PROC				; Ex1::CA<int>::fun2, COMDAT
; _this$ = ecx

; 8    : 		void fun2(T i)		{		}

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?fun2@?$CA@H@Ex1@@QAEXH@Z ENDP				; Ex1::CA<int>::fun2
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun@?$CA@M@Ex1@@QAEXXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?fun@?$CA@M@Ex1@@QAEXXZ PROC				; Ex1::CA<float>::fun, COMDAT
; _this$ = ecx

; 7    : 		void fun() 			{		} 

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?fun@?$CA@M@Ex1@@QAEXXZ ENDP				; Ex1::CA<float>::fun
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@M@Ex1@@QAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 4
?fun2@?$CA@M@Ex1@@QAEXM@Z PROC				; Ex1::CA<float>::fun2, COMDAT
; _this$ = ecx

; 8    : 		void fun2(T i)		{		}

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?fun2@?$CA@M@Ex1@@QAEXM@Z ENDP				; Ex1::CA<float>::fun2
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun@?$CA@N@Ex1@@QAEXXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?fun@?$CA@N@Ex1@@QAEXXZ PROC				; Ex1::CA<double>::fun, COMDAT
; _this$ = ecx

; 7    : 		void fun() 			{		} 

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?fun@?$CA@N@Ex1@@QAEXXZ ENDP				; Ex1::CA<double>::fun
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?fun2@?$CA@N@Ex1@@QAEXN@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_i$ = 8							; size = 8
?fun2@?$CA@N@Ex1@@QAEXN@Z PROC				; Ex1::CA<double>::fun2, COMDAT
; _this$ = ecx

; 8    : 		void fun2(T i)		{		}

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
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	8
?fun2@?$CA@N@Ex1@@QAEXN@Z ENDP				; Ex1::CA<double>::fun2
_TEXT	ENDS
END
