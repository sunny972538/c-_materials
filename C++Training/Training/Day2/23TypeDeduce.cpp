#include<iostream>
#include<future>
#include<vector>
using namespace std;

namespace nm23
{
	auto fun()
	{
		return 100;
	}

	//static_assert(std::is_same<decltype(fun()),double>(),"return does not match");
	//static_assert(std::is_same<decltype(fun()), int>(), "return does not match");


	auto fun1()
	{
		string str{ "hello hrman" };
		return str;
	}

	static_assert(std::is_same<decltype(fun1()), std::string>(), "return does not match");

	const auto& fun2()
	{
		static string str{ "hello hrman" };
		return str;
	}

	static_assert(std::is_same<decltype(fun2()), const std::string&>(), "return does not match");


	template<typename T>
	class SmartVector
	{
		vector<const T*> vec;
	public:
		typename vector<const T*>::iterator begin03() const
		{
			return std::begin(vec);
		}
		auto begin11()->decltype(std::begin(vec)) const
		{
			return std::begin(vec);
		}
		auto begin14() const
		{
			return std::begin(vec);
		}
	};


	void main()
	{
		SmartVector<int> sm;
		//sm.begin03();
	}
}