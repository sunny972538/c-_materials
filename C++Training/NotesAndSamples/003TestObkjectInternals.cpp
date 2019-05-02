#include<iostream>
#include<conio.h>
using namespace std;
namespace nm3
{
	class CA
	{
	public:
		int x;
		virtual void fun1()
		{
			cout<<"fun1"<<endl; 
		}
		virtual void fun2()
		{
			cout<<"fun2"<<endl; 
		}
	};
}
void main3_2()
{
	using namespace nm3;
	CA obj;
	//((void (__stdcall *)())*(long*)*(long*)&obj)();
	long*vp=(long*)&obj;//reach the vptr
	long* vt=(long*)*vp;//reach vtable
	typedef void (__stdcall *FPTR)();
	FPTR fp=(FPTR)vt[0];//reach the function
	fp();//call back
	fp=(FPTR)vt[1];//reach the function
	fp();
	getche();
}

void main3_1()
{
	using namespace nm3;
	//cout<<sizeof(CA)<<endl;
	CA obj;
	obj.x=999;
	long *pt=(long*)&obj;
	cout<<"pt="<<pt<<"\t*pt="<<*pt<<endl;
	pt++;
	cout<<"pt="<<pt<<"\t*pt="<<*pt<<endl;
	getche();
}