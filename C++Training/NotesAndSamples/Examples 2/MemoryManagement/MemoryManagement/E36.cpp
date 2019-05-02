#include<iostream>
#include<new>
using namespace std;

namespace Ex36
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
};using namespace Ex36;

void main36()
{
	Ptr p;				//default
	Ptr p2 = new SA;	//overloaded
	Ptr p3 = p2;		//copy
	p = new SA;		//overloaded assignment operator
	p2 = p;			    //assignment operator
	p2->fun();

}





