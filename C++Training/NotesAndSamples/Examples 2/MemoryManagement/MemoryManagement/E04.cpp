#include<iostream>
using namespace std;

//be aware of padding

namespace Ex4
{
	class CA
	{
		int i;
		char c;
		double d;
	};
};
using namespace Ex4;

void main4()
{
	cout<<sizeof(CA)<<endl;
}