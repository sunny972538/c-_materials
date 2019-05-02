#include<iostream>
#include<tuple>
using namespace std;
namespace nm28
{
	tuple<int, double, float> fun(int x, int y)
	{
		return tuple<int, double, float>(123, 34.55, 34.5f);
	}
	void main28_1()
	{
		tuple<int, double, float> tup = fun(1, 2);

		int x = std::get<0>(tup);
		double y = std::get<1>(tup);
		float z = std::get<2>(tup);

		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;

	}


	void main28_2()
	{
		auto tup = std::make_tuple<int, double, float>(123, 34.55, 34.5f);
		int x;
		double y = 0.0;
		float z;

		//std::tie(x, y, z) = tup;
		std::tie(x, std::ignore, z) = tup;

		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;
	}


	void main()
	{
		int x = 10, y = 20;

		tie(y, x) = make_tuple(x, y);
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
}