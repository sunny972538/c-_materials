#include<iostream>
#include<string>
using namespace std;
namespace nm23
{
	void Hello(int *ptr)
	{
		cout << "Apple" << endl;
	}
	void Hello(int i)
	{
		cout << "Orange" << endl;
	}
	void main()
	{
		Hello(NULL);
		Hello(nullptr);
	}
}