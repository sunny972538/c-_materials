#include<iostream>
#include<new>
using namespace std;

namespace Ex16
{
	struct SA	//<-- prevent instantiation on stack and heap
	{
	};
};
using namespace Ex16;

void main16()
{
	SA stackObject;	
	//	stackObject::SA::SA(); 

	SA *heapObject = new SA(); 
	/*
		SA *p = SA::operator new(sizeof(SA));
		p->SA::SA();				
	*/
}