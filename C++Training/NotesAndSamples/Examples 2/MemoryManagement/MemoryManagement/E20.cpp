#include<iostream>
#include<new>
using namespace std;

namespace Ex20
{
	struct SA	//<-- prevent instantiation on stack
	{
	};
};
using namespace Ex20;

void main20()
{
	SA stackObject;	
	//	stackObject::SA::SA(); 

	SA *heapObject = new SA(); 
	/*
		SA *p = SA::operator new(sizeof(SA));
		p->SA::SA();				
	*/
}