#include<iostream>
#include<thread>
#include<string>
using namespace std;

namespace nm36
{
	class CA
	{
	public:
		CA()
		{
			cout << "this=" << this << endl;
		}
		void greeting(string const& msg)
		{
			cout << "this=" << this << endl;
			cout << "greet=" << msg << endl;
		}
	};

	void main()
	{
		CA obj;
		//thread t(&CA::greeting, obj,"sachin");
		//thread t(&CA::greeting, ref(obj), "sachin");
		thread t(&CA::greeting, &obj, "sachin");
		t.join();
	}

}