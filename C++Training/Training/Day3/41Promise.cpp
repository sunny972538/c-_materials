#include<iostream>
#include<thread>
#include<string>
#include<mutex>
#include<future>
#include<condition_variable>
using namespace std;

//promise
/*
//callbacks

*/
namespace nm41
{
	void fun(std::promise<int> *promObj)
	{

		cout << "I am from fun 1" << endl;

		this_thread::sleep_for(chrono::seconds(1));
		cout << "I am from fun 2" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		promObj->set_value(9876);
		cout << "I am from fun 3" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "I am from fun 4" << endl;
	}

	void main()
	{
		promise<int> prom;
		future<int> futureObj = prom.get_future();
		thread th1(fun, &prom);
		cout << futureObj.get() << endl;
		//cout << prom.get_future().get() << endl;
		cout << "In main after get " << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "In main after get" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "In main after get" << endl;
		th1.join();
	}
}