#include<iostream>
#include<new>
using namespace std;

namespace Ex22
{
	struct SA	
	{
		bool m_isOnHeap; //<-- identify where the object is

		void doJob()
		{
			if(m_isOnHeap)
				cout<<"object is on heap"<<endl;
			else
				cout<<"object is on stack"<<endl;
		}
	};
};
using namespace Ex22;

void main22()
{
	SA stackObject;	
	SA *heapObject = new SA(); 
	
	stackObject.doJob();
	heapObject->doJob();
}