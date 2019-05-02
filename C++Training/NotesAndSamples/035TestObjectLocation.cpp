#include<iostream>
#include<conio.h>
using namespace std;
namespace nm35
{
	class CA
	{
		bool isOnHeap;
		static bool gHeap;
	public:
		CA()
		{
			isOnHeap=gHeap;
			gHeap=false;
		}
		void Display()
		{
			if(isOnHeap==true)
				cout<<"I am on heap "<<endl;
			else
				cout<<"I am not on heap "<<endl;
		}
		static void * operator new(size_t t)
		{
			void *p= malloc(t);
			gHeap=true;
		   return p;
		}
	};
	bool CA::gHeap=false;
}


void main35()
{
	using namespace nm35;
		CA obj;
		CA *ptr=new CA();
		obj.Display();
		ptr->Display();
	getche();
}