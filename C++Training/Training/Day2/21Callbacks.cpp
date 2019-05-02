#include<iostream>
#include<future>
#include<string>
using namespace std;
using namespace std::placeholders;
namespace nm21
{
	double div1(double x, double y)
	{
		return x / y;
	}

	void main()
	{
		cout << "1/4=" << div1(1, 4) << endl;
		cout << "2/4=" << div1(2, 4) << endl;
		cout << "3/4=" << div1(3, 4) << endl;
		cout << "_______________________" << endl;
		std::function<double(double)> fp = std::bind(&div1, _1, 4);
		cout << "1/4=" << fp(1) << endl;
		cout << "2/4=" << fp(2) << endl;
		cout << "3/4=" << fp(3) << endl;
		std::function<double(double)> fp1 = std::bind(&div1, 4, _1);
		cout << "_______________________" << endl;
		cout << "4/1=" << fp1(1) << endl;
		cout << "4/2=" << fp1(2) << endl;
		cout << "4/3=" << fp1(3) << endl;
		cout << "_______________________" << endl;
		std::function<double(double, double)> fp2 = std::bind(&div1, _2, _1);
		cout << "1/4=" << fp2(1, 4) << endl;
		cout << "2/4=" << fp2(2, 4) << endl;
		cout << "3/4=" << fp2(3, 4) << endl;
		cout << "_______________________" << endl;
	}
}