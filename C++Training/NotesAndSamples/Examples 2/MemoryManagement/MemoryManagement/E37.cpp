#include<iostream>
#include<new>
using namespace std;

namespace Ex37
{
	struct SA
	{
		SA()			{		cout<<"SA created"<<endl;		}
		void fun()	{		cout<<"fun executed"<<endl;	}
		~SA()		{		cout<<"SA destroyed"<<endl;	}
	};	
	//----------------------------------
	struct Ptr
	{
		SA* m_p;
	public:
		Ptr():m_p(0)						{}					//Default Constructor

		Ptr(SA* p):m_p(p)				{}					//overloaded Constructor

		Ptr(Ptr& rhs):m_p(rhs.m_p)	{}					//Shallow Copy Constructor

		void operator=(Ptr& rhs)		{ m_p =rhs.m_p; }	//Shallow = operator
		void operator=(SA* p)			{ m_p =p; }			//Shallow overloaded = operator
				
		SA* operator->()					{ return m_p;	} //indirection operator

		~Ptr()								{ delete m_p;	} //Destructor
	};
};using namespace Ex37;

void main37()
{
	SA* p;				//default
	
	SA* p2 = new SA;	//overloaded

	SA* p3 = p2;		//copy

	p = new SA;		//overloaded assignment operator

	p2 = p;			    //assignment operator

	p2->fun();

}






