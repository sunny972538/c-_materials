#include<iostream>
#include<new>
using namespace std;

namespace Ex18
{
	struct SA	//<-- prevent instantiation on heap
	{
	};
};
using namespace Ex18;

void main18()
{
	SA stackObject;	
	
	SA *heapObject = new SA(); 
	
}