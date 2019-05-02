#include<iostream>
#include<conio.h>
using namespace std;
namespace nm22
{
	class CA
	{
		int *i;
	public:
		CA():i(new int(10))
		{
			cout<<"CA default "<<endl;
		}
		CA(CA& par):i(new int(*par.i))
		{
		}
		CA & operator=(CA &par)
		{
			*i=*par.i;
			return *this;
		}
		~CA()
		{
			cout<<"CA D-tor "<<endl;
			delete i;
		}
	};
	class Wrapper
	{
		CA *ptr;
		void* operator new(size_t t)
		{
			return NULL;
		}
		void operator delete(void *p)
		{
		}
	public:
		Wrapper():ptr(new CA())
		{
		}
		Wrapper(Wrapper& par):ptr(new CA(*par.ptr))
		{
		}
		Wrapper& operator=(Wrapper &par)
		{
			*ptr=*par.ptr;
			return *this;
		}
		~Wrapper()
		{
			delete ptr;
		}
	};

	void DoJob()
	{
		Wrapper w1;
		Wrapper w2;
		w1=w2;
		Wrapper w3(w1);
	}
}


void main22()
{
	using namespace nm22;
	DoJob();
	getche();
}