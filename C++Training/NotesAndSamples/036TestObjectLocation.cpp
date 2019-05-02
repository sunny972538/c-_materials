#include<iostream>
#include<conio.h>
using namespace std;
namespace nm36
{
	class CA
	{
		bool isOnHeap;
		static bool gHeap;
		static int gCount;
	public:
		CA()
		{
			cout<<"Ctor"<<endl;
			isOnHeap=gHeap;
			gCount--;
			if(gCount==0)
			{
				gHeap=false;
			}
			
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
			cout<<"new called "<<endl;
			void *p= malloc(t);
			gHeap=true;
		   return p;
		}
		static void * operator new[](size_t t)
		{
			cout<<"new[] called "<<endl;
			gCount=t/sizeof(CA);
			void *p= malloc(t);
			gHeap=true;
		   return p;
		}

	};
	bool CA::gHeap=false;
	int CA::gCount=0;
}


void main36()
{
	using namespace nm36;
		CA obj;
		CA *ptr=new CA[5];
		obj.Display();
		cout<<"_______________"<<endl;
		ptr->Display();
		(ptr+1)->Display();
		(ptr+2)->Display();
		(ptr+3)->Display();
		(ptr+4)->Display();

	getche();
}