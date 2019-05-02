#include<iostream>
using namespace std;
namespace nm01
{
	class CA
	{
	public:
		void fun1()
		{//_this$ = ecx
			cout << "CA::fun1" << endl;
		}
		virtual void fun2()
		{//_this$ = ecx
			cout << "CA::fun2" << endl;
		}
		virtual void fun3()
		{
			cout << "CA::fun3" << endl;
		}
	};

	void  main01_1()
	{
		//cout << sizeof(CA) << endl;
		CA obj;
		cout << sizeof(obj) << endl;
		//((void(*)())*(long*)*(long*)&obj)();
		typedef void(*FPTR)();
		//step 1 reach the vptr
		long* vptr = (long*)&obj;
		//step 2 reach the vtable
		long *vtable = (long*)*vptr;
		//step 3 reach the function
		FPTR fp = (FPTR)vtable[0];
		//step 4 callback
		fp();
		((FPTR)vtable[1])();
	}


	void main01_2()
	{
		CA obj;
		obj.fun1();
		/*
			lea	ecx, DWORD PTR _obj$[ebp]
			call	?fun1@CA@@QAEXXZ			; CA::fun1
		*/
		obj.fun2();
		/*
			lea	ecx, DWORD PTR _obj$[ebp]
			call	?fun2@CA@@UAEXXZ			; CA::fun2
		*/
		CA & objRef = obj;
		objRef.fun1();
		/*
			mov	ecx, DWORD PTR _objRef$[ebp]
			call	?fun1@CA@@QAEXXZ			; CA::fun1
		*/
		objRef.fun2();
		/*
			mov	eax, DWORD PTR _objRef$[ebp]
			mov	edx, DWORD PTR [eax]
			mov	esi, esp
			mov	ecx, DWORD PTR _objRef$[ebp]
			mov	eax, DWORD PTR [edx]
			call	eax
			cmp	esi, esp
			call	__RTC_CheckEsp
		*/
		CA * objPtr = &obj;
		objPtr->fun1();
		/*
		mov	ecx, DWORD PTR _objPtr$[ebp]
		call	?fun1@CA@@QAEXXZ			; CA::fun1

		*/
		objPtr->fun2();
		/*
		mov	eax, DWORD PTR _objPtr$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _objPtr$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
		*/
	}


	class CB
	{
		int k;
	public:
		void myFun()
		{

		}
		/*CB()
		{

		}*/
	};
	class CC :public CB
	{
	public:
		/*CC()
		{//call	??0CB@@QAE@XZ				; CB::CB
			//RAII
		}*/
	};

	class Limb
	{
	public:
		Limb()
		{

		}
	};
	class Cat
	{
		Limb limbs;
	public:
		Cat()
		{

		}
	};

	void main01_3()
	{
		CC obj;
		/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	??0CC@@QAE@XZ				; CC::CC
		*/
		obj.myFun();

		Cat cat;
	}


	class Tiger
	{
	public:
		/*Tiger()//mov	DWORD PTR [eax], OFFSET ??_7Tiger@@6B@
		{

		}*/
		virtual void Habitat()
		{

		}
	};

	void main01_4()
	{
		Tiger tiger;
	}




	class CA1
	{
	public:
		CA1()
		{

		}
		void fun1()
		{//_this$ = ecx
			cout << "\t\tCA1::fun1" << endl;
		}
		virtual void fun2()
		{//_this$ = ecx
			cout << "\t\tCA1::fun2" << endl;
		}
		virtual void fun3()
		{
			cout << "\t\tCA1::fun3" << endl;
		}
	};
	class CB1 :public CA1
	{
	public:
		CB1()
		{

		}
		virtual void fun4() //override//appending
		{
			cout << "\t\tCB1::fun4" << endl;
		}
		virtual void fun3(int x)// override//overriding
		{
			cout << "\t\tCB1::fun3" << endl;
		}
	};

	void  main01_5()
	{
		//cout << sizeof(CA) << endl;
		CA1 obj;
		//cout << sizeof(obj) << endl;

		//((void(*)())*(long*)*(long*)&obj)();
		typedef void(*FPTR)();
		//step 1 reach the vptr
		long* vptr = (long*)&obj;
		//step 2 reach the vtable
		long *vtable = (long*)*vptr;
		cout << "CA1::Vtable=" << vtable << endl;
		//step 3 reach the function
		FPTR fp = (FPTR)vtable[0];
		//step 4 callback
		fp();
		((FPTR)vtable[1])();
		cout << "______________________" << endl;
		CB1 obj1;
		vptr = (long*)&obj1;
		//step 2 reach the vtable
		vtable = (long*)*vptr;
		cout << "CB1::Vtable=" << vtable << endl;
		fp = (FPTR)vtable[0];
		//step 4 callback
		fp();
		((FPTR)vtable[1])();
		((FPTR)vtable[2])();

	}


	void main01_6()
	{
		CB1 obj;

		CA1& objRef = obj;//LSP

		objRef.fun3();//objRef.vptr->vtable[1]();
		objRef.CA1::CA1();
		objRef.fun3();//objRef.vptr->vtable[1]();
	}


	void main()
	{
		CA1 obj;
		//cout << sizeof(obj) << endl;

		//((void(*)())*(long*)*(long*)&obj)();
		typedef void(*FPTR)();
		//step 1 reach the vptr
		long* vptr = (long*)&obj;
		//step 2 reach the vtable
		long *vtable = (long*)*vptr;
		cout << "CA1::Vtable=" << vtable << endl;
		//step 3 reach the function
		FPTR fp = (FPTR)vtable[0];
		//step 4 callback
		fp();
		((FPTR)vtable[1])();
		cout << "______________________" << endl;
		CB1 obj1;
		vptr = (long*)&obj1;
		//step 2 reach the vtable
		vtable = (long*)*vptr;
		cout << "CB1::Vtable=" << vtable << endl;
		fp = (FPTR)vtable[0];
		//step 4 callback
		fp();
		((FPTR)vtable[1])();
		((FPTR)vtable[2])();
		((FPTR)vtable[3])();
	}
}