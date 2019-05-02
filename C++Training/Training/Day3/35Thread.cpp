#include<iostream>
#include<thread>
#include<string>
using namespace std;
namespace nm35
{
	void greeting(string const& msg)
	{
		cout << "greet=" << msg << endl;
	}

	void main()
	{
		//thread t(bind(greeting, "sachin"));
		thread t(greeting, "sachin");
		t.join();
	}
}
