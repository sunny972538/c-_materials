#include<iostream>
#include<new>
using namespace std;

namespace Ex17
{
	struct SA	//<-- prevent instantiation on stack and heap
	{
	protected:
		SA()
		{
		}
	};
};
using namespace Ex17;

void main17()
{
	//SA stackObject;	<-- error
	//stackObject::SA::SA(); <-- not accessible

	//SA *heapObject = new SA();  <-- error
	/*
	SA *p = SA::operator new(sizeof(SA));
	p->SA::SA();				<-- not accessible
	*/
}