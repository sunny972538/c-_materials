#include<iostream>
#include<new>
using namespace std;

namespace Ex40
{
	struct SA
	{
		SA()
		{
			cout<<"SA created"<<endl;
		}
		void fun()
		{
			cout<<"fun executed"<<endl;
		}
		~SA()
		{
			cout<<"SA destroyed"<<endl;
		}
	};
	//----------------------------------
	struct Ptr
	{
		SA*  m_p;
		int* m_c;
	public:
		//******* constructors *******************

		Ptr():m_p(0),m_c(0){}									//default

		Ptr(SA* p):m_p(p),m_c(new int(1)) {}					//overloaded

		Ptr(Ptr& rhs):m_p(rhs.m_p),m_c(rhs.m_c)					//copy
		{ 
			if(m_c)	
				++(*m_c); 
		}	
		//******* destructor *******************
		~Ptr()													//dest
		{
			if((m_c) && (--(*m_c) == 0))
			{
				delete m_p;
				delete m_c;
			}
		}
		//******* = operators *******************
		Ptr& operator=(SA* p)									//= operator
		{
			this->Ptr::~Ptr();	//free existing memory
			this->Ptr::Ptr(p);	//overloaded
			return *this;		//always returns *this

		}
		Ptr& operator=(Ptr& rhs)
		{
			if(this == &rhs)		//check for self assignment
				return *this;

			this->Ptr::~Ptr();		//free existing memory
			this->Ptr::Ptr(rhs);	//copy
			return *this;			//always returns *this
		}
		//******* operators *******************
		SA* operator->()
		{
			return m_p;
		}
	};


	
	void DoJob(Ptr p2)
	{
		p2->fun();
	}
};
using namespace Ex40;

void main40()
{
	Ptr p1 = new SA();

	DoJob(p1);
}
