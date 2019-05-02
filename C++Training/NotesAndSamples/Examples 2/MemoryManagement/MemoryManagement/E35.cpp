#include<iostream>
#include<new>
using namespace std;

namespace Ex35
{
	struct SA
	{
		SA()			{		cout<<"SA created"<<endl;		}
		void fun()	{		cout<<"fun executed"<<endl;	}
		~SA()		{		cout<<"SA destroyed"<<endl;	}
	};
	struct Ptr
	{
		SA* m_p;
	public:
		Ptr():m_p(0)			{}		//default

		Ptr(SA* p):m_p(p)	{}  //overloaded

		SA* operator->()		{		return m_p;		}

		~Ptr()					{		delete m_p;		}
	};
};
using namespace Ex35;

void main35()
{
	Ptr o;			//default

	Ptr o2 = new SA; //overloaded

	o2->fun();
}
