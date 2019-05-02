#include<iostream>
#include<new>
using namespace std;

namespace Ex41
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
	template<typename T>
	struct Ptr
	{
		T*  m_p;
		int* m_c;
	public:
		//******* constructors *******************

		Ptr():m_p(0),m_c(0){}									//default

		Ptr(T* p):m_p(p),m_c(new int(1)) {}					//overloaded

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
		Ptr& operator=(T* p)									//= operator
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
		T* operator->()
		{
			return m_p;
		}
	};
	
	void DoJob(Ptr<SA> p2)
	{

		p2->fun();

	}
};
using namespace Ex41;

void main41()
{
	Ptr<SA> p1 = new SA();

	DoJob(p1);

	Ptr<int> p3 = new int;

	Ptr<int> p4 = p3;


}



