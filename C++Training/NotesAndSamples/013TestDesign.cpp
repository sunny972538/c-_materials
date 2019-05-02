#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm13
{
	struct ISort
	{
		virtual void SortAllgorithm()=0;
	};
	class Container
	{
		ISort *s;
	public:
		void AcceptSort(ISort *s)
		{
			this->s=s;
		}
		void Sort()
		{
			s->SortAllgorithm();
		}
	};

	class BubleSort:public ISort
	{
	public:
		void SortAllgorithm()
		{
			cout<<"Bubble sort ..."<<endl;
		}
	};
	class DistributedSort:public ISort
	{
	public:
		void SortAllgorithm()
		{
			cout<<"Distributed Sort  ..."<<endl;
		}
	};
}


void  main13()
{
	using namespace nm13;	
	BubleSort s;
	Container c;
	c.AcceptSort(&s);
	c.Sort();
	getche();
}