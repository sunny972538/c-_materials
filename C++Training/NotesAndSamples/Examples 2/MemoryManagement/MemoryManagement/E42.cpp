#include<iostream>
#include<new>
#include<memory>
using namespace std;

namespace Ex42
{
	struct SA
	{
		SA()		{		cout<<"SA created"<<endl;	}
		void fun()	{		cout<<"fun executed"<<endl;	}
		~SA()		{		cout<<"SA destroyed"<<endl;	}
	};
	void DoJob(auto_ptr<SA> p2)
	{
		p2->fun();
	}
};
using namespace Ex42;

void main42()
{
	auto_ptr<SA> p1(new SA);

	DoJob(p1);

	auto_ptr<int> p3(new int);

	auto_ptr<int> p4 = p3;

}
