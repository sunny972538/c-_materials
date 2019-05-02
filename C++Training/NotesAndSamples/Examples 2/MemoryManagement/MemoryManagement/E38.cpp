#include<iostream>
using namespace std;

namespace Ex38
{
	class CString
	{
		char* m_p;
	public:
		//******* constructors *******************
		//default
		CString():m_p(0){}
		//overloaded 
		CString(char* t):m_p(new char[strlen(t) + 1])
		{
			strcpy(m_p,t);
		}
		//deep copy 
		CString(CString& rhs):m_p(new char[strlen(rhs.m_p) + 1])
		{
			//m_p = rhs.m_p;	 //shallow
			strcpy(m_p,rhs.m_p); //deep 
		}
		//******* destructor *******************
		~CString()
		{
			delete[] m_p;
		}
		//******* = operators *******************
		CString& operator=(char* t)
		{
			//bad code (constructort prolog executes)
			this->CString::~CString();		//free existing memory
			this->CString::CString(t);			//overloaded
			return *this;							//always returns *this
		}
		CString& operator=(CString& rhs)
		{
			if(this == &rhs)				//check for self assignment
				return *this;
			//bad code (constructort prolog executes)
			this->CString::~CString();		//free existing memory
			this->CString::CString(rhs);	//copy
			return *this;					//always returns *this
		}
		//******* casting operators *******************
		operator char*()
		{
			return m_p;
		}
		operator int()
		{
			return strlen(m_p);
		}
	};
};
using namespace Ex38;

void main38()
{
	CString s1 ;			//default const

	CString s2 = "Hello";   //overloaded const

	CString s3("World");	//overloaded const	

	CString s4 = s2;		//copy constructor

	s1 = "universe";		//s1.operator=("universe");

	s3 = s2 = s1;			//s3.operator=( s2.operator=(s1) );

	s1 = s1;

	cout<<(char*) s1<<endl;
	cout<<(int) s1<<endl;
}







