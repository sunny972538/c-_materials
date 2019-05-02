#include<iostream>
using namespace std;

namespace nm30
{
	class CA
	{
	public:
		int x;
		int y;
		double d;



	};

	void main()
	{
		cout << "sizeof(CA)=" << sizeof(CA) << endl;
		cout << "sizeof(CA::x)=" << sizeof(CA::d) << endl;//c++11 
	}
}