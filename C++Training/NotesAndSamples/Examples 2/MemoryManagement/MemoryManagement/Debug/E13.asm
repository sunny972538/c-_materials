; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\Ali\Samples\C++\Examples 2\MemoryManagement\MemoryManagement\E13.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?meta_info@Ex13@@3UMetaData@1@A			; Ex13::meta_info
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
_BSS	SEGMENT
?meta_info@Ex13@@3UMetaData@1@A DB 01H DUP (?)		; Ex13::meta_info
_BSS	ENDS
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
PUBLIC	??2SA@Ex13@@SAPAXIUMetaData@1@@Z		; Ex13::SA::operator new
PUBLIC	?main13@@YAXXZ					; main13
EXTRN	??3@YAXPAX@Z:PROC				; operator delete
EXTRN	__RTC_CheckEsp:PROC
EXTRN	_memset:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File c:\ali\samples\c++\examples 2\memorymanagement\memorymanagement\e13.cpp
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ?main13@@YAXXZ
_TEXT	SEGMENT
tv68 = -244						; size = 4
$T29856 = -236						; size = 4
$T29857 = -224						; size = 4
$T29860 = -212						; size = 4
_p$ = -8						; size = 4
?main13@@YAXXZ PROC					; main13, COMDAT

; 23   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 244				; 000000f4H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-244]
	mov	ecx, 61					; 0000003dH
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 24   : 	SA *p = new(meta_info) SA(); 

	mov	DWORD PTR $T29856[ebp], 1
	movzx	eax, BYTE PTR ?meta_info@Ex13@@3UMetaData@1@A ; Ex13::meta_info
	push	eax
	mov	ecx, DWORD PTR $T29856[ebp]
	push	ecx
	call	??2SA@Ex13@@SAPAXIUMetaData@1@@Z	; Ex13::SA::operator new
	add	esp, 8
	mov	DWORD PTR $T29857[ebp], eax
	cmp	DWORD PTR $T29857[ebp], 0
	je	SHORT $LN3@main13
	mov	edx, DWORD PTR $T29856[ebp]
	push	edx
	push	0
	mov	eax, DWORD PTR $T29857[ebp]
	push	eax
	call	_memset
	add	esp, 12					; 0000000cH
	mov	ecx, DWORD PTR $T29857[ebp]
	mov	DWORD PTR tv68[ebp], ecx
	jmp	SHORT $LN4@main13
$LN3@main13:
	mov	DWORD PTR tv68[ebp], 0
$LN4@main13:
	mov	edx, DWORD PTR tv68[ebp]
	mov	DWORD PTR _p$[ebp], edx

; 25   : 
; 26   : 	delete p;

	mov	eax, DWORD PTR _p$[ebp]
	mov	DWORD PTR $T29860[ebp], eax
	mov	ecx, DWORD PTR $T29860[ebp]
	push	ecx
	call	??3@YAXPAX@Z				; operator delete
	add	esp, 4

; 27   : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 244				; 000000f4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?main13@@YAXXZ ENDP					; main13
_TEXT	ENDS
EXTRN	__imp__malloc:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??2SA@Ex13@@SAPAXIUMetaData@1@@Z
_TEXT	SEGMENT
_size$ = 8						; size = 4
_data$ = 12						; size = 1
??2SA@Ex13@@SAPAXIUMetaData@1@@Z PROC			; Ex13::SA::operator new, COMDAT

; 14   : 		{

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd

; 15   : 			//use metadata object
; 16   : 			return malloc(size);

	mov	esi, esp
	mov	eax, DWORD PTR _size$[ebp]
	push	eax
	call	DWORD PTR __imp__malloc
	add	esp, 4
	cmp	esi, esp
	call	__RTC_CheckEsp

; 17   : 		}

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??2SA@Ex13@@SAPAXIUMetaData@1@@Z ENDP			; Ex13::SA::operator new
_TEXT	ENDS
END
