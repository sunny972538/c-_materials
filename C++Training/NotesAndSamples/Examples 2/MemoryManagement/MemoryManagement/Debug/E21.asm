; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\Ali\Samples\C++\Examples 2\MemoryManagement\MemoryManagement\E21.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?value@?$integral_constant@_N$0A@@tr1@std@@2_NB	; std::tr1::integral_constant<bool,0>::value
PUBLIC	?value@?$integral_constant@_N$00@tr1@std@@2_NB	; std::tr1::integral_constant<bool,1>::value
PUBLIC	?value@?$integral_constant@I$0A@@tr1@std@@2IB	; std::tr1::integral_constant<unsigned int,0>::value
PUBLIC	?_Rank@?$_Arithmetic_traits@_N@std@@2HB		; std::_Arithmetic_traits<bool>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@D@std@@2HB		; std::_Arithmetic_traits<char>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@C@std@@2HB		; std::_Arithmetic_traits<signed char>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@E@std@@2HB		; std::_Arithmetic_traits<unsigned char>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@F@std@@2HB		; std::_Arithmetic_traits<short>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@G@std@@2HB		; std::_Arithmetic_traits<unsigned short>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@H@std@@2HB		; std::_Arithmetic_traits<int>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@I@std@@2HB		; std::_Arithmetic_traits<unsigned int>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@J@std@@2HB		; std::_Arithmetic_traits<long>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@K@std@@2HB		; std::_Arithmetic_traits<unsigned long>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@_J@std@@2HB		; std::_Arithmetic_traits<__int64>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@_K@std@@2HB		; std::_Arithmetic_traits<unsigned __int64>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@M@std@@2HB		; std::_Arithmetic_traits<float>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@N@std@@2HB		; std::_Arithmetic_traits<double>::_Rank
PUBLIC	?_Rank@?$_Arithmetic_traits@O@std@@2HB		; std::_Arithmetic_traits<long double>::_Rank
PUBLIC	?collate@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::collate
PUBLIC	?ctype@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::ctype
PUBLIC	?monetary@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::monetary
PUBLIC	?numeric@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::numeric
PUBLIC	?time@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::time
PUBLIC	?messages@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::messages
PUBLIC	?all@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::all
PUBLIC	?none@?$_Locbase@H@std@@2HB			; std::_Locbase<int>::none
PUBLIC	?skipws@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::skipws
PUBLIC	?unitbuf@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::unitbuf
PUBLIC	?uppercase@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::uppercase
PUBLIC	?showbase@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::showbase
PUBLIC	?showpoint@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::showpoint
PUBLIC	?showpos@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::showpos
PUBLIC	?left@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::left
PUBLIC	?right@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::right
PUBLIC	?internal@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::internal
PUBLIC	?dec@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::dec
PUBLIC	?oct@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::oct
PUBLIC	?hex@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::hex
PUBLIC	?scientific@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::scientific
PUBLIC	?fixed@?$_Iosb@H@std@@2W4_Fmtflags@12@B		; std::_Iosb<int>::fixed
PUBLIC	?hexfloat@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::hexfloat
PUBLIC	?boolalpha@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::boolalpha
PUBLIC	?_Stdio@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::_Stdio
PUBLIC	?adjustfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::adjustfield
PUBLIC	?basefield@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::basefield
PUBLIC	?floatfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B	; std::_Iosb<int>::floatfield
PUBLIC	?goodbit@?$_Iosb@H@std@@2W4_Iostate@12@B	; std::_Iosb<int>::goodbit
PUBLIC	?eofbit@?$_Iosb@H@std@@2W4_Iostate@12@B		; std::_Iosb<int>::eofbit
PUBLIC	?failbit@?$_Iosb@H@std@@2W4_Iostate@12@B	; std::_Iosb<int>::failbit
PUBLIC	?badbit@?$_Iosb@H@std@@2W4_Iostate@12@B		; std::_Iosb<int>::badbit
PUBLIC	?_Hardfail@?$_Iosb@H@std@@2W4_Iostate@12@B	; std::_Iosb<int>::_Hardfail
PUBLIC	?in@?$_Iosb@H@std@@2W4_Openmode@12@B		; std::_Iosb<int>::in
PUBLIC	?out@?$_Iosb@H@std@@2W4_Openmode@12@B		; std::_Iosb<int>::out
PUBLIC	?ate@?$_Iosb@H@std@@2W4_Openmode@12@B		; std::_Iosb<int>::ate
PUBLIC	?app@?$_Iosb@H@std@@2W4_Openmode@12@B		; std::_Iosb<int>::app
PUBLIC	?trunc@?$_Iosb@H@std@@2W4_Openmode@12@B		; std::_Iosb<int>::trunc
PUBLIC	?_Nocreate@?$_Iosb@H@std@@2W4_Openmode@12@B	; std::_Iosb<int>::_Nocreate
PUBLIC	?_Noreplace@?$_Iosb@H@std@@2W4_Openmode@12@B	; std::_Iosb<int>::_Noreplace
PUBLIC	?binary@?$_Iosb@H@std@@2W4_Openmode@12@B	; std::_Iosb<int>::binary
PUBLIC	?beg@?$_Iosb@H@std@@2W4_Seekdir@12@B		; std::_Iosb<int>::beg
PUBLIC	?cur@?$_Iosb@H@std@@2W4_Seekdir@12@B		; std::_Iosb<int>::cur
PUBLIC	?end@?$_Iosb@H@std@@2W4_Seekdir@12@B		; std::_Iosb<int>::end
;	COMDAT ?end@?$_Iosb@H@std@@2W4_Seekdir@12@B
CONST	SEGMENT
?end@?$_Iosb@H@std@@2W4_Seekdir@12@B DD 02H		; std::_Iosb<int>::end
CONST	ENDS
;	COMDAT ?cur@?$_Iosb@H@std@@2W4_Seekdir@12@B
CONST	SEGMENT
?cur@?$_Iosb@H@std@@2W4_Seekdir@12@B DD 01H		; std::_Iosb<int>::cur
CONST	ENDS
;	COMDAT ?beg@?$_Iosb@H@std@@2W4_Seekdir@12@B
CONST	SEGMENT
?beg@?$_Iosb@H@std@@2W4_Seekdir@12@B DD 00H		; std::_Iosb<int>::beg
CONST	ENDS
;	COMDAT ?binary@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?binary@?$_Iosb@H@std@@2W4_Openmode@12@B DD 020H	; std::_Iosb<int>::binary
CONST	ENDS
;	COMDAT ?_Noreplace@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?_Noreplace@?$_Iosb@H@std@@2W4_Openmode@12@B DD 080H	; std::_Iosb<int>::_Noreplace
CONST	ENDS
;	COMDAT ?_Nocreate@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?_Nocreate@?$_Iosb@H@std@@2W4_Openmode@12@B DD 040H	; std::_Iosb<int>::_Nocreate
CONST	ENDS
;	COMDAT ?trunc@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?trunc@?$_Iosb@H@std@@2W4_Openmode@12@B DD 010H		; std::_Iosb<int>::trunc
CONST	ENDS
;	COMDAT ?app@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?app@?$_Iosb@H@std@@2W4_Openmode@12@B DD 08H		; std::_Iosb<int>::app
CONST	ENDS
;	COMDAT ?ate@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?ate@?$_Iosb@H@std@@2W4_Openmode@12@B DD 04H		; std::_Iosb<int>::ate
CONST	ENDS
;	COMDAT ?out@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?out@?$_Iosb@H@std@@2W4_Openmode@12@B DD 02H		; std::_Iosb<int>::out
CONST	ENDS
;	COMDAT ?in@?$_Iosb@H@std@@2W4_Openmode@12@B
CONST	SEGMENT
?in@?$_Iosb@H@std@@2W4_Openmode@12@B DD 01H		; std::_Iosb<int>::in
CONST	ENDS
;	COMDAT ?_Hardfail@?$_Iosb@H@std@@2W4_Iostate@12@B
CONST	SEGMENT
?_Hardfail@?$_Iosb@H@std@@2W4_Iostate@12@B DD 010H	; std::_Iosb<int>::_Hardfail
CONST	ENDS
;	COMDAT ?badbit@?$_Iosb@H@std@@2W4_Iostate@12@B
CONST	SEGMENT
?badbit@?$_Iosb@H@std@@2W4_Iostate@12@B DD 04H		; std::_Iosb<int>::badbit
CONST	ENDS
;	COMDAT ?failbit@?$_Iosb@H@std@@2W4_Iostate@12@B
CONST	SEGMENT
?failbit@?$_Iosb@H@std@@2W4_Iostate@12@B DD 02H		; std::_Iosb<int>::failbit
CONST	ENDS
;	COMDAT ?eofbit@?$_Iosb@H@std@@2W4_Iostate@12@B
CONST	SEGMENT
?eofbit@?$_Iosb@H@std@@2W4_Iostate@12@B DD 01H		; std::_Iosb<int>::eofbit
CONST	ENDS
;	COMDAT ?goodbit@?$_Iosb@H@std@@2W4_Iostate@12@B
CONST	SEGMENT
?goodbit@?$_Iosb@H@std@@2W4_Iostate@12@B DD 00H		; std::_Iosb<int>::goodbit
CONST	ENDS
;	COMDAT ?floatfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?floatfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 03000H	; std::_Iosb<int>::floatfield
CONST	ENDS
;	COMDAT ?basefield@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?basefield@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 0e00H	; std::_Iosb<int>::basefield
CONST	ENDS
;	COMDAT ?adjustfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?adjustfield@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 01c0H	; std::_Iosb<int>::adjustfield
CONST	ENDS
;	COMDAT ?_Stdio@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?_Stdio@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 08000H	; std::_Iosb<int>::_Stdio
CONST	ENDS
;	COMDAT ?boolalpha@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?boolalpha@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 04000H	; std::_Iosb<int>::boolalpha
CONST	ENDS
;	COMDAT ?hexfloat@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?hexfloat@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 03000H	; std::_Iosb<int>::hexfloat
CONST	ENDS
;	COMDAT ?fixed@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?fixed@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 02000H	; std::_Iosb<int>::fixed
CONST	ENDS
;	COMDAT ?scientific@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?scientific@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 01000H	; std::_Iosb<int>::scientific
CONST	ENDS
;	COMDAT ?hex@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?hex@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 0800H		; std::_Iosb<int>::hex
CONST	ENDS
;	COMDAT ?oct@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?oct@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 0400H		; std::_Iosb<int>::oct
CONST	ENDS
;	COMDAT ?dec@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?dec@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 0200H		; std::_Iosb<int>::dec
CONST	ENDS
;	COMDAT ?internal@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?internal@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 0100H	; std::_Iosb<int>::internal
CONST	ENDS
;	COMDAT ?right@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?right@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 080H		; std::_Iosb<int>::right
CONST	ENDS
;	COMDAT ?left@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?left@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 040H		; std::_Iosb<int>::left
CONST	ENDS
;	COMDAT ?showpos@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?showpos@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 020H	; std::_Iosb<int>::showpos
CONST	ENDS
;	COMDAT ?showpoint@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?showpoint@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 010H	; std::_Iosb<int>::showpoint
CONST	ENDS
;	COMDAT ?showbase@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?showbase@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 08H	; std::_Iosb<int>::showbase
CONST	ENDS
;	COMDAT ?uppercase@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?uppercase@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 04H	; std::_Iosb<int>::uppercase
CONST	ENDS
;	COMDAT ?unitbuf@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?unitbuf@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 02H	; std::_Iosb<int>::unitbuf
CONST	ENDS
;	COMDAT ?skipws@?$_Iosb@H@std@@2W4_Fmtflags@12@B
CONST	SEGMENT
?skipws@?$_Iosb@H@std@@2W4_Fmtflags@12@B DD 01H		; std::_Iosb<int>::skipws
CONST	ENDS
;	COMDAT ?none@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?none@?$_Locbase@H@std@@2HB DD 00H			; std::_Locbase<int>::none
CONST	ENDS
;	COMDAT ?all@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?all@?$_Locbase@H@std@@2HB DD 03fH			; std::_Locbase<int>::all
CONST	ENDS
;	COMDAT ?messages@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?messages@?$_Locbase@H@std@@2HB DD 020H			; std::_Locbase<int>::messages
CONST	ENDS
;	COMDAT ?time@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?time@?$_Locbase@H@std@@2HB DD 010H			; std::_Locbase<int>::time
CONST	ENDS
;	COMDAT ?numeric@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?numeric@?$_Locbase@H@std@@2HB DD 08H			; std::_Locbase<int>::numeric
CONST	ENDS
;	COMDAT ?monetary@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?monetary@?$_Locbase@H@std@@2HB DD 04H			; std::_Locbase<int>::monetary
CONST	ENDS
;	COMDAT ?ctype@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?ctype@?$_Locbase@H@std@@2HB DD 02H			; std::_Locbase<int>::ctype
CONST	ENDS
;	COMDAT ?collate@?$_Locbase@H@std@@2HB
CONST	SEGMENT
?collate@?$_Locbase@H@std@@2HB DD 01H			; std::_Locbase<int>::collate
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@O@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@O@std@@2HB DD 09H		; std::_Arithmetic_traits<long double>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@N@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@N@std@@2HB DD 08H		; std::_Arithmetic_traits<double>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@M@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@M@std@@2HB DD 07H		; std::_Arithmetic_traits<float>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@_K@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@_K@std@@2HB DD 06H		; std::_Arithmetic_traits<unsigned __int64>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@_J@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@_J@std@@2HB DD 06H		; std::_Arithmetic_traits<__int64>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@K@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@K@std@@2HB DD 05H		; std::_Arithmetic_traits<unsigned long>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@J@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@J@std@@2HB DD 05H		; std::_Arithmetic_traits<long>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@I@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@I@std@@2HB DD 04H		; std::_Arithmetic_traits<unsigned int>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@H@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@H@std@@2HB DD 04H		; std::_Arithmetic_traits<int>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@G@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@G@std@@2HB DD 03H		; std::_Arithmetic_traits<unsigned short>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@F@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@F@std@@2HB DD 03H		; std::_Arithmetic_traits<short>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@E@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@E@std@@2HB DD 02H		; std::_Arithmetic_traits<unsigned char>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@C@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@C@std@@2HB DD 02H		; std::_Arithmetic_traits<signed char>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@D@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@D@std@@2HB DD 02H		; std::_Arithmetic_traits<char>::_Rank
CONST	ENDS
;	COMDAT ?_Rank@?$_Arithmetic_traits@_N@std@@2HB
CONST	SEGMENT
?_Rank@?$_Arithmetic_traits@_N@std@@2HB DD 01H		; std::_Arithmetic_traits<bool>::_Rank
CONST	ENDS
;	COMDAT ?value@?$integral_constant@I$0A@@tr1@std@@2IB
CONST	SEGMENT
?value@?$integral_constant@I$0A@@tr1@std@@2IB DD 00H	; std::tr1::integral_constant<unsigned int,0>::value
CONST	ENDS
;	COMDAT ?value@?$integral_constant@_N$00@tr1@std@@2_NB
CONST	SEGMENT
?value@?$integral_constant@_N$00@tr1@std@@2_NB DB 01H	; std::tr1::integral_constant<bool,1>::value
CONST	ENDS
;	COMDAT ?value@?$integral_constant@_N$0A@@tr1@std@@2_NB
CONST	SEGMENT
?value@?$integral_constant@_N$0A@@tr1@std@@2_NB DB 00H	; std::tr1::integral_constant<bool,0>::value
CONST	ENDS
PUBLIC	?create@SA@Ex21@@SAPAU12@XZ			; Ex21::SA::create
PUBLIC	?main21@@YAXXZ					; main21
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File c:\ali\samples\c++\examples 2\memorymanagement\memorymanagement\e21.cpp
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ?main21@@YAXXZ
_TEXT	SEGMENT
_heapObject$ = -8					; size = 4
?main21@@YAXXZ PROC					; main21, COMDAT

; 25   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 26   : 	//SA stackObject;	<-- error
; 27   : 	//stackObject::SA::SA(); <-- not accessible
; 28   : 
; 29   : 	SA *heapObject = SA::create();

	call	?create@SA@Ex21@@SAPAU12@XZ		; Ex21::SA::create
	mov	DWORD PTR _heapObject$[ebp], eax

; 30   : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?main21@@YAXXZ ENDP					; main21
_TEXT	ENDS
PUBLIC	??0SA@Ex21@@AAE@XZ				; Ex21::SA::SA
EXTRN	??3@YAXPAX@Z:PROC				; operator delete
EXTRN	??2@YAPAXI@Z:PROC				; operator new
EXTRN	___security_cookie:DWORD
EXTRN	___CxxFrameHandler3:PROC
EXTRN	@__security_check_cookie@4:PROC
;	COMDAT xdata$x
xdata$x	SEGMENT
__unwindtable$?create@SA@Ex21@@SAPAU12@XZ DD 0ffffffffH
	DD	FLAT:__unwindfunclet$?create@SA@Ex21@@SAPAU12@XZ$0
__ehfuncinfo$?create@SA@Ex21@@SAPAU12@XZ DD 019930522H
	DD	01H
	DD	FLAT:__unwindtable$?create@SA@Ex21@@SAPAU12@XZ
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	01H
; Function compile flags: /Odtp /RTCsu /ZI
xdata$x	ENDS
;	COMDAT ?create@SA@Ex21@@SAPAU12@XZ
_TEXT	SEGMENT
tv71 = -232						; size = 4
$T29859 = -224						; size = 4
$T29860 = -212						; size = 4
__$EHRec$ = -12						; size = 12
?create@SA@Ex21@@SAPAU12@XZ PROC			; Ex21::SA::create, COMDAT

; 13   : 		{

	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$?create@SA@Ex21@@SAPAU12@XZ
	mov	eax, DWORD PTR fs:0
	push	eax
	sub	esp, 220				; 000000dcH
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-232]
	mov	ecx, 55					; 00000037H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax

; 14   : 			return new SA();

	push	1
	call	??2@YAPAXI@Z				; operator new
	add	esp, 4
	mov	DWORD PTR $T29860[ebp], eax
	mov	DWORD PTR __$EHRec$[ebp+8], 0
	cmp	DWORD PTR $T29860[ebp], 0
	je	SHORT $LN3@create
	mov	ecx, DWORD PTR $T29860[ebp]
	call	??0SA@Ex21@@AAE@XZ			; Ex21::SA::SA
	mov	DWORD PTR tv71[ebp], eax
	jmp	SHORT $LN4@create
$LN3@create:
	mov	DWORD PTR tv71[ebp], 0
$LN4@create:
	mov	eax, DWORD PTR tv71[ebp]
	mov	DWORD PTR $T29859[ebp], eax
	mov	DWORD PTR __$EHRec$[ebp+8], -1
	mov	eax, DWORD PTR $T29859[ebp]

; 15   : 			/*
; 16   : 				SA *p = SA::operator new(sizeof(SA));
; 17   : 				p->SA::SA();				<--  accessible
; 18   : 			*/
; 19   : 		}

	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 232				; 000000e8H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__unwindfunclet$?create@SA@Ex21@@SAPAU12@XZ$0:
	mov	eax, DWORD PTR $T29860[ebp]
	push	eax
	call	??3@YAXPAX@Z				; operator delete
	pop	ecx
	ret	0
__ehhandler$?create@SA@Ex21@@SAPAU12@XZ:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-236]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$?create@SA@Ex21@@SAPAU12@XZ
	jmp	___CxxFrameHandler3
text$x	ENDS
?create@SA@Ex21@@SAPAU12@XZ ENDP			; Ex21::SA::create
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??0SA@Ex21@@AAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??0SA@Ex21@@AAE@XZ PROC					; Ex21::SA::SA, COMDAT
; _this$ = ecx

; 10   : 		SA(){		}

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
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
??0SA@Ex21@@AAE@XZ ENDP					; Ex21::SA::SA
_TEXT	ENDS
END
