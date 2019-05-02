#include<iostream>
#include<conio.h>
using namespace std;
namespace nm34
{
	struct CA
	{
		void fun()	{			cout<<"Apple"<<endl;		}
	};
	struct Smart
	{
		CA *pt;
		Smart():pt(new CA())
		{
		}
		CA *operator->()		{			return pt;		}
		void fun()		{			cout<<"Orange"<<endl;		}
	};
}
void main34()
{
	using namespace nm34;
	Smart *sp=new Smart();
	(*sp)->fun();
	getche();
}