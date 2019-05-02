#include <string>
#include <iostream>
using namespace std;
//c++14
namespace nm46
{
	auto fun([](auto x) {
		return x * 3;
	});

	static_assert(is_same<decltype(fun(10)), int>(), "");

	static_assert(is_same<decltype(fun(10.0)), double>(), "");
	void  main46_1()
	{
		cout << fun(10) << endl;
	}

	auto fun1([](auto x, auto y) {
		return x * y;
	});

	struct fun1Generated
	{
		template<typename T1, typename T2>
		auto operator()(T1 x, T2 y) const
		{
			return x*y;
		}
	};

	void main()
	{

	}
}