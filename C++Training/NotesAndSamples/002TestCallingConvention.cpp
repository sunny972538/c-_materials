namespace nm2
{
void fun1(int x,int y)
{
}//ret	0
void __cdecl fun2(int x,int y)
{
}//ret	0
void __stdcall fun3(int x,int y)
{
}//ret	8
void __fastcall fun4(int x,int y)
{
}//ret	0
class CA
{
public:
	void fun5();
	void __thiscall fun6()
	{
	}
};
void CA::fun5()
{//_this$ = ecx
}
	

inline void fun7()
{
}
}
void main2()
{
	using namespace nm2;
	fun1(10,20);
	/*
			push	20					; 00000014H
			push	10					; 0000000aH
			call	?fun1@@YAXHH@Z				; fun1
			add	esp, 8
	*/
	fun2(11,22);
	/*
			push	22					; 00000016H
			push	11					; 0000000bH
			call	?fun2@@YAXHH@Z				; fun2
			add	esp, 8
	*/
	fun2(111,222);
	/*
			push	222					; 00000016H
			push	11	1				; 0000000bH
			call	?fun2@@YAXHH@Z				; fun2
			add	esp, 8
	*/
	fun3(1,2);
	/*
			push	2
			push	1
			call	?fun3@@YGXHH@Z				; fun3
	*/
	fun4(12,13);
	/*
			mov	edx, 13					; 0000000dH
			mov	ecx, 12					; 0000000cH
			call	?fun4@@YIXHH@Z				; fun4
	*/
	CA obj;
	obj.fun5();
	/*
			lea	ecx, DWORD PTR _obj$[ebp]
			call	?fun5@CA@@QAEXXZ			; CA::fun5
	*/
	fun7();
}