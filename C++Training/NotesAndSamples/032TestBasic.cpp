#include<iostream>
#include<conio.h>
using namespace std;
namespace nm32
{
	class CA
	{
		
	public:
		const int eId;
		int x;
		mutable int y;
		CA():x(10),y(20),eId(18)
		{
		}
		CA(int eId):x(10),y(20),eId(eId)
		{
		}
		void SetData(int i,int j)//Mutators
		{
			cout<<"setData "<<endl;
			x=i;
			y=j;
		}
		void DispState() const //Inspector
		{
			//x=100;
			y=998;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
	};
}


void main32()
{
	using namespace nm32;
	const CA obj;
	//obj.x=101;
	obj.y=300;
	//obj.SetData(10,20);
	obj.DispState();
	getche();
}

void main32_1()
{
	using namespace nm32;
	/*
		int x=10;
		int y=20;
		//const int *pt=&x;//pointer to a constant
		// int const *pt=&x;//pointer to a constant
		// int  * const pt=&x;//constant pointer 
		const int  * const pt  =&x;//constant pointer to a constant
		*pt=89;//l1
		pt=&y;//l2
	*/
	getche();
}