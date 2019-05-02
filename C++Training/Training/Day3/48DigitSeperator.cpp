#include <string>
#include <iostream>
using namespace std;
namespace nm48
{
	void main()
	{
		auto x = 1'00'0'000'00'00;

		auto y = 0.00'00'00'001'56;


		auto z = 0b101;

		auto a = 0xB;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;
		cout << "a=" << a << endl;
	}
}