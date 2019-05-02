#include<iostream>
#include<future>
using namespace std;
namespace nm24
{
	/*
	auto -> deduce to non-reference type
	auto& -> deduce to reference type
	auto&& -> wil deduce rvalue ref
	decltype(auto) -> deduce to ref or non-ref or rvalue based on teurtn info

	*/
	decltype(auto) fun1()
	{
		static string str{ "hello hrman" };
		auto & res(str);
		return res;
		//return str;
		//return std::move(str);
	}

	static_assert(std::is_same<decltype(fun1()), string&>(), "return does not match");

	void main()
	{

	}
}