#include<iostream>
#include<thread>
#include<string>
#include<mutex>
#include<future>
using namespace std;

namespace nm38
{
	int AddFun(int x, int y)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "\t\tAddFun " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		return x + y;
	}

	void main()
	{
		//int res = AddFun(10, 20);

		future<int> f1 = async(AddFun, 10, 20);
		for (int i = 0; i < 5; i++)
		{
			cout << "Main " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		int res = f1.get();
		cout << "res=" << res << endl;
	}
}