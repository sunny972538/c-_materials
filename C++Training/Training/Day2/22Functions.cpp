#include<iostream>
#include<future>
using namespace std;
namespace nm22
{
	auto fun()//c++14 (return type deduce)
	{
		return 100.0;
	}
	template<typename T1, typename T2>
	auto fun1(T1 a, T2 d)//->decltype(a+d+10)//c++11
	{
		if (a > 0.0)
			return 3.2;
		return 4.5;
	}


	void main22_1()
	{
		auto x = fun();
		cout << "x=" << typeid(x).name() << endl;
		auto y = fun1(10, 20.0);
		cout << "y=" << typeid(y).name() << endl;
	}


	void main()
	{
		auto x = 10;//c++11 type inference
		auto y = 3.4;
		//auto z = x*y;
		//decltype(x) z = x*y;
		decltype(x * 2 * y + 100) z = x*y;
		cout << "x=" << typeid(x).name() << endl;
		cout << "y=" << typeid(y).name() << endl;
		cout << "z=" << typeid(z).name() << endl;
	}
}