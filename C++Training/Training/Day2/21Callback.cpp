#include<iostream>
#include<future>
using namespace std;
using namespace std::placeholders;
namespace nm21
{
	double div1(double x, double y)
	{
		return x / y;
	}

	void main1()
	{
		cout << "4/1=" << div1(4, 1) << endl;
		cout << "4/2=" << div1(4, 2) << endl;
		cout << "4/3=" << div1(4, 3) << endl;
		cout << "4/4=" << div1(4, 4) << endl;
		cout << "____________________________" << endl;
		std::function<double(double)> myDiv = std::bind(div1, _1, 4.0);
		cout << myDiv(2) << endl;
		std::function<double(double)> myDiv2 = std::bind(div1, 4.0, _1);
		cout << myDiv2(2) << endl;
		std::function<double(double, double)> myDiv3 = std::bind(div1, _2, _1);
		cout << myDiv3(4, 2) << endl;
	}



	void fun(std::function<void(int)> func)
	{
		cout << "apple" << endl;
		func(1000);
		cout << "Orange" << endl;
	}

	class CA
	{
	public:
		void Bharath(int x)
		{
			cout << "Bharath x=" << x << endl;
		}
		void India(int x)
		{
			cout << "India x=" << x << endl;
		}
	};
	void main()
	{
		CA obj;
		std::function<void(int)> fn = std::bind(&CA::Bharath, obj, _1);
		fun(fn);
	}
}