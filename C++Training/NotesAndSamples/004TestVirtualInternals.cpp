#include<iostream>
#include<conio.h>
using namespace std;
namespace nm4
{
	class CA
	{
	public:
		CA()
		{//setVptr(&CA::vftable)
		}
		virtual void fun1()
		{
			cout<<"fun1"<<endl; 
		}
		void fun2()
		{
			cout<<"fun2"<<endl; 
		}
	};
}

void main4_2()
{
	using namespace nm4;
	CA obj;
	obj.fun1();
	/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	?fun1@CA@nm4@@UAEXXZ			; nm4::CA::fun1
	*/
	obj.fun2();
	/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	?fun2@CA@nm4@@QAEXXZ			; nm4::CA::fun2
	*/
	CA *ptr=&obj;
	ptr->fun1();
	/*
			mov	eax, DWORD PTR _ptr$[ebp]
			mov	edx, DWORD PTR [eax]
			mov	esi, esp
			mov	ecx, DWORD PTR _ptr$[ebp]
			mov	eax, DWORD PTR [edx]
			call	eax
			cmp	esi, esp
			call	__RTC_CheckEsp
	*/
	ptr->fun2();
	/*
		mov	ecx, DWORD PTR _ptr$[ebp]
		call	?fun2@CA@nm4@@QAEXXZ			; nm4::CA::fun2
	*/
	CA & obj1=obj;
	obj1.fun1();
	/*
		mov	eax, DWORD PTR _obj1$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _obj1$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
	*/
	obj1.fun2();
	/*
		mov	ecx, DWORD PTR _obj1$[ebp]
		call	?fun2@CA@nm4@@QAEXXZ			; nm4::CA::fun2
	*/
	getche();
}

void main4_1()
{
	using namespace nm4;
	CA obj;
	getche();
}