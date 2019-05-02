#include<iostream>
#include<future>
#include<string>
using namespace std;

namespace nm19
{
	//std::function<void(string)>
	std::function<std::function<void(string)>(string)> Greet(string greet)
	{
		//cout << "greet called " << endl;
		return [greet](string name) {
			//	cout << "name called " << endl;
			return [greet, name](string seperator) {
				//	cout << "seperator called " << endl;
				cout << greet << " " << seperator << " " << name << endl;
			};
		};
	}

	void main()
	{
		//Greet("Welcome")("Sachin")("***");
		auto greet = Greet("Hello");
		auto sewag = greet("sewag");
		//auto sachin = greet("sachin");
		auto sachin = Greet("Hello")("schin");
		sachin("->");
		sachin("***");
		sewag("===");
		sachin("->->->");
	}
}