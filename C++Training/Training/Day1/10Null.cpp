#include<iostream>
using namespace std;
namespace nm10
{
	void Hello(int *ptr)
	{
		cout << "India " << endl;
	}
	void Hello(int i)
	{
		cout << "Bharath " << endl;
	}

	void main()
	{
		Hello(NULL);
		Hello(nullptr);
	}
}