#include<iostream>
#include<future>
using namespace std;

namespace nm18
{
	void DoJob(std::function<void(void)> fp)
	{

		cout << "Task 111" << endl;
		fp();
		cout << "Task 222" << endl;

	}

	void DoJobNew(std::function<void(int)> fp)
	{

		cout << "Task 111" << endl;
		fp(100);
		cout << "Task 222" << endl;

	}
	//----------------

	void main()
	{
		std::function<void(void)> fp = []() {cout << "Hi from here" << endl; };

		DoJob(fp);

		auto fp1 = [](int k) {cout << "Hi from here k=" << k << endl; };
		DoJobNew(fp1);

	}
}