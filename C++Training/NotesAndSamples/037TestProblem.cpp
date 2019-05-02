#include<iostream>
#include<conio.h>
using namespace std;
namespace nm37
{
	struct IX
	{
		virtual void fx1()=0;
		virtual void fx2()=0;
	};
	struct IY
	{
		virtual void fy1()=0;
		virtual void fy2()=0;
	};
	struct CA:IX,IY
	{
		void fx1()
		{
			cout<<"fx1"<<endl;
		}
		virtual void fx2()
		{
			cout<<"fx2"<<endl;
		}
		void fy1()
		{
			cout<<"fy1"<<endl;
		}
		virtual void fy2()
		{
			cout<<"fy2"<<endl;
		}
	};
}


void main()
{
	using namespace nm37;
		IX *px=new CA();
		px->fx1();
		px->fx2();
		//IY *py=(IY*)(CA*)px;
		IY *py=dynamic_cast<IY*>(px);
		py->fy1();
		py->fy2();
	getche();
}