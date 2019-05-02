#include<iostream>
#include<string>
#include<tuple>
using namespace std;
namespace nm24
{
	tuple<int, char, double> fun()
	{
		return tuple<int, char, double>(10, 's', 3.14);
	}

	void main1()
	{
		tuple<int, char, double> t = fun();
		int x;
		char y;
		double z;
		x = std::get<0>(t);
		y = std::get<1>(t);
		z = std::get<2>(t);

		cout << "x=" << x << " y=" << y << " and z=" << z << endl;
		x = 100;
		y = 'c';
		z = 1.2;
		std::tie(x, y, z) = t;
		cout << "x=" << x << " y=" << y << " and z=" << z << endl;
		x = 100;
		y = 'c';
		z = 1.2;
		std::tie(x, std::ignore, z) = t;
		cout << "x=" << x << " y=" << y << " and z=" << z << endl;
	}


	void main()
	{
		int a = 10, b = 20;

		tie(a, b) = make_tuple(b, a);
		cout << "a=" << a << " and b=" << b << endl;
	}
}