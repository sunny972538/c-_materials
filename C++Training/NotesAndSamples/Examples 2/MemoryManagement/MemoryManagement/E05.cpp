#include<iostream>
using namespace std;

namespace Ex5
{
	class CA
	{
		int data;
	public:
		CA()		{			cout<<"CA created"<<endl;		}
	};

	bool flag = false;

	void fun() //<--how many bytes are allocated on the stack
	{
		CA obj;

		if(flag)
		{
			CA obj2;

		}
	}
};
using namespace Ex5;

void main5()
{
	fun();
}