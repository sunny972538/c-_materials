#include <string>
#include <iostream>
using namespace std;
namespace nm47
{
	template <typename T>
	T pi = 3.14159265359;


	template<class T>
	constexpr T pi1 = T(3.1415926535897932385L);  // variable template

	template<class T>
	T circular_area(T r) // function template
	{
		return pi1<T> * r * r; // pi<T> is a variable template instantiation
	}

	void main()
	{
		auto piFloat(pi<float>);
		auto piDouble(pi<double>);
		auto piInt(pi<int>);
		std::cout << piDouble << std::endl;
		std::cout << piFloat << std::endl;
		std::cout << piInt << std::endl;

		std::cout << circular_area(2.3) << std::endl;
	}
}