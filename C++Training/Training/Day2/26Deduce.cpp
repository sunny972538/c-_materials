#include<iostream>
using namespace std;

namespace nm26
{
	int fun();

	void main1()
	{
		auto x = 23.4;
		auto y = 78;
		auto z = 'c';

		cout << "x=" << typeid(x).name() << " and x=" << x << endl;
		cout << "y=" << typeid(y).name() << " and y=" << y << endl;
		cout << "z=" << typeid(z).name() << " and z=" << z << endl;

		decltype(x + y * 2) f = 89;
		cout << "f=" << typeid(f).name() << " and f=" << f << endl;

		decltype(fun()) x1 = 90;
		cout << "x1=" << typeid(x1).name() << " and x1=" << x1 << endl;

	}


	template<typename T1, typename T2>
	auto fun1(T1 x, T2 y)//c++14  //->decltype(x+y) //c++11
	{
		return x * y;
	}

	void main2()
	{
		auto x = fun1(12, 3.4);
		cout << "x=" << typeid(x).name() << " and x=" << x << endl;
	}

	auto fun3(int par)->int
	{
		if (par == 10)
			return 100;
		return 200.89;
	}
	void main()
	{
		auto x = fun3(10);
		cout << "x=" << typeid(x).name() << " and x=" << x << endl;
	}
}