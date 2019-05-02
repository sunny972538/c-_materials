#include<iostream>
#include<string>
using namespace std;

namespace nm22
{

	void main1()
	{
		auto greet = [](string grt) {cout << grt << " mr.sachin" << endl; };

		greet("Hello");
		greet("Hi");
		greet("Welcome");

	}

	void main()
	{
		auto greet = [](string grt) {
			return [grt](string name) {
				cout << grt << " Mr." << name << endl;
			};

		};

		//greet("Hello")("sachin");
		//greet("Hello")("rahul");
		//greet("Hello")("sewag");
		auto nameFn = greet("Welcome");
		nameFn("sachin");
		nameFn("rahul");
		nameFn("rajini");

	}
}