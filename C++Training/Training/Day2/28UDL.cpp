#include<iostream>
using namespace std;

/*constexpr*/ long double operator"" _rad(long double deg)
{
	return 3.14159 / 180.0*deg;
}

void main()
{
	double x = 90.0_rad;

	cout << "x=" << x << endl;
}