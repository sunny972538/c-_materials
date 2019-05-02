#include<iostream>
#include<conio.h>
using namespace std;
namespace nm23
{
	class CA
	{
	public:
		CA()
		{
			cout<<"CA ctor"<<endl;
		}
		void fun()
		{
			cout<<"fun CA"<<endl;
		}
		~CA()
		{
			cout<<"CA D-tor"<<endl;
		}
	};

	class Wrapper
	{
		CA *ptr;
		int *count;
		void* operator new(size_t t)
		{
			return NULL;
		}
		void operator delete(void *p)
		{
		}
		
	public:
		Wrapper():ptr(new CA()),count(new int(1))
		{
		
		}
		Wrapper(Wrapper &par):ptr(par.ptr),count(par.count)
		{
			++(*count);
		}
		CA* operator->()
		{
			return ptr;
		}
		Wrapper & operator=(Wrapper &par)
		{
			if(ptr==par.ptr)
				return *this;
			this->Wrapper::~Wrapper();
			this->Wrapper::Wrapper(par);
			return *this;
		}
		~Wrapper()
		{
			--(*count);
			if((*count)==0)
			{
				delete ptr;
				delete count;
			}
		}
	};
	

	void DoJob()
	{
		Wrapper w1;
		Wrapper w2;
		//w1->fun();
		Wrapper w3(w1);
		Wrapper w4;
		w1=w4;
		w2=w3;

	}
}


void main23()
{
	using namespace nm23;
	DoJob();
	getche();
}