#include<iostream>
#include<conio.h>
using namespace std;
namespace nm7
{
	class CA
	{
	public:
		CA()
		{//setvptr(CA::vftable)
			cout<<"CA ctor .."<<endl;
		}
		virtual void fun()
		{
			cout<<"CA fun"<<endl;
		}
	};
	class CB:public CA
	{
		public:
			virtual void fun()
			{
				cout<<"CB fun"<<endl; 
			}
			virtual void fun1()
			{
				cout<<"CB fun1"<<endl; 
			}
		CB()
		{//call CA::CA()
			//setvptr(CB::vftable);
			cout<<"CB ctor .."<<endl;
		}
	};
	
}

void main7_2()
{
	using namespace nm7;
	CA *ptr=new CB();
	/*
		push	4
		call	??2@YAPAXI@Z				; operator new
		add	esp, 4

		call	??0CB@nm7@@QAE@XZ			; nm7::CB::CB
	*/
	ptr->CA::CA();
	ptr->fun();
	/*
	 ptr->vptr->vtable[0]();
	*/
	getche();
};

void main7_1()
{
	using namespace nm7;
	CA obj1;
	long *vp1=(long*)&obj1;
	CB obj2;
	long *vp2=(long*)&obj2;

	cout<<"*vp1="<<*vp1<<endl;
	long *vt1=(long*)*vp1;
	((void (*)())vt1[0])();
	//((void (*)())vt1[1])();
	cout<<"*vp2="<<*vp2<<endl;
	long *vt2=(long*)*vp2;
	((void (*)())vt2[0])();
	((void (*)())vt2[1])();
	getche();
}