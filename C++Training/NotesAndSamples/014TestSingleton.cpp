#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm14
{
	class CA
	{
		CA()
		{
			cout<<"CA ctor"<<endl;
		}
		~CA()
		{
			cout<<"~CA dtor"<<endl;
		}
		static CA *head;
		static int count;
		static void ReleaseMethod()
		{
			count--;
			if(count==0)
			{
				delete head;
				head=NULL;
			}
		}
		static CA * CreateCA()
		{
			count++;
			if(head==NULL)
				head=new CA();
			return head;
		}
	public:

		void fun1()
		{
			cout<<"fun1 "<<endl;
		}
		
		friend class Wrapper;
	};
	CA* CA::head=NULL;
	int CA::count=0;
	
	class Wrapper
	{
		CA *ptr;
		static void * operator new(size_t t)
		{
			return NULL;
		}
		static void operator delete(void *)
		{
		}
	public:
		Wrapper()
		{
			ptr=CA::CreateCA();
		}
		/*
		CA * ReturnAddress()
		{
			return ptr;
		}
		*/
		CA * operator->()
		{
			return ptr;
		}
		~Wrapper()
		{
			CA::ReleaseMethod();
		}
	};
	void DoJob()
	{
	 Wrapper w1;
	 //w1.ReturnAddress()->fun1();
	 w1.operator->()->fun1();
	 Wrapper w2;
	 w2->fun1();
	}
}


void  main14()
{
	using namespace nm14;	
	DoJob();
	getche();
}