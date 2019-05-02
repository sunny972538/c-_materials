#include<iostream>
#include<thread>
using namespace std;
namespace nm32
{
	void fun1()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "fun 1 " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
	}

	void main32_1()
	{
		fun1();
		for (int i = 0; i < 10; i++)
		{
			cout << "\t\tmain " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
	}


	void main()
	{
		thread t1(fun1);
		for (int i = 0; i < 10; i++)
		{
			cout << "\t\tmain " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		t1.join();
	}
}