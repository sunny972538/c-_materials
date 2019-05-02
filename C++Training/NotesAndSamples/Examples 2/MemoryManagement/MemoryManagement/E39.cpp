#include<iostream>
using namespace std;

namespace Ex39
{
	class CString
	{
		char* m_p;
		int*  m_count;
	public:
		//******* constructors *******************
		//default
		CString():m_p(0),m_count(0){}
		//overloaded 
		CString(char* t):m_p(new char[strlen(t) + 1]), m_count(new int(1))
		{
			strcpy(m_p,t);
		}
		//shallow
		CString(CString& rhs):m_p(rhs.m_p),m_count(rhs.m_count)
		{
			if(m_count)
				(*m_count)++;
		}
		//******* destructor *******************
		~CString()
		{
			if(m_count && --(*m_count)==0)
			{
				delete[] m_p;
				delete m_count;
			}
		}
		//******* = operators *******************
		CString& operator=(char* t)
		{
			this->CString::~CString();		//free existing memory
			this->CString::CString(t);		//overloaded
			return *this;					//always returns *this
		}
		CString& operator=(CString& rhs)
		{
			if(this == &rhs)				//check for self assignment
				return *this;

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
using namespace Ex39;

void main39()
{
	CString s1 ;			//default const

	CString s2 = "Hello";   //overloaded const

	CString s3("World");	//overloaded const	

	CString s4 = s2;		//copy constructor

	s4 = "universe"; 

	s3 = s2;
}







