#include<iostream>
#include<conio.h>
using namespace std;
namespace nm6
{
	class CA
	{
	public:
		CA()
		{
			cout<<"CA ctor .."<<endl;
		}
		
	};
	class CB
	{
		public:
		CB()
		{
			cout<<"CB ctor .."<<endl;
		}
	};
	class CC:public CA
	{
	public:
		virtual void fun()
		{
			cout<<"fun called "<<endl;
		}
		CC()
		{
			/*
				call	??0CA@nm6@@QAE@XZ			; nm6::CA::CA
				set VPTR(CC:vftable)
				call	??0CB@nm6@@QAE@XZ			; nm6::CB::CB
			*/
			cout<<"CC ctor"<<endl;
		}
		CB obj;
	};
}
void main6()
{
	using namespace nm6;
	CC obj;
	getche();
}