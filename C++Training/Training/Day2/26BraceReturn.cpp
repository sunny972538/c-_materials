#include<iostream>
#include<future>
using namespace std;
namespace nm26
{
	class CA
	{
		int x;
		int y;
	public:
		CA(int x, int y) :x(x), y(y)
		{
			cout << "Default CA" << endl;
		}
		void Disp()
		{
			cout << "x=" << x << endl;
			cout << "y=" << y << endl;
		}
	};

	CA CreateCA()
	{
		//return CA(10, 20);//c++03
		return { 10,20 };//c++11
	}

	void main()
	{
		CA ob = CreateCA();
		ob.Disp();
	}
}