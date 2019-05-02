#include<iostream>
#include<new>
using namespace std;

namespace Ex6
{
	struct SA
	{
	};

	SA obj1; 
};
using namespace Ex6;

static SA obj2; 

void main6()
{
	static SA obj3; 

	SA obj4;	

	SA *obj5 = new SA(); 
 
}