#include<iostream>
#include<vector>
using namespace std;

namespace Ex28
{
	void TraversePointers()
	{
	/*	
		for(int i=0;i < stackPtr.size(); i++)
		{
			cout<<" pointer "<< stackPtr[i] <<" points to "<<*stackPtr[i] <<endl;
		}
	*/
	}
};
using namespace Ex28;

void main28()
{
	int* p1 = new int();

	double* p2 = new double();
	
	int* p3 = new int();

	int* p4 = p3;

	TraversePointers();
}