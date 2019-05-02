#include<iostream>
using namespace std;
namespace nm11
{
	constexpr int Myfun(int x)//c++11
	{
		return 5 * x / 2;
	}
	constexpr int MyfunNew(int x)//c++14
	{
		if (x % 2 == 1)
			x--;
		return 5 * x / 2;
	}

	void main11_1()
	{
		int arr[Myfun(4)];
		int arr1[MyfunNew(5)];

		int h = MyfunNew(23);


	}

	constexpr long double operator"" _rad(long double deg)//UDL
	{
		return 3.14159 / 180.0*deg;
	}

	void main11_2()
	{
		double val = 180.0_rad;

		cout << val << endl;

	}


	template<typename T, int size>
	class CA
	{

	};


	void main()
	{
		CA<int, Myfun(10)> obj;
	}
}