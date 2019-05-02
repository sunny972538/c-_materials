#include<iostream>
#include<future>
using namespace std;
using namespace std::placeholders;
namespace nm20
{
	void VendorJob(std::function<void(int)> fp)
	{
		cout << "vendor task 111" << endl;
		fp(100);//callback
		cout << "vendor task 222" << endl;
	}
	class FUNCTOR
	{
		int k;
		double j;

	public:
		FUNCTOR(int& k, double j) :k(k), j(j)
		{
		}

		void operator()(int par) const //inspector
		{
			cout << "par=" << par << " Client fun called k=" << k << " and j=" << j << endl;
		}
	};
	void main1()
	{
		int k = 100;
		double j = 3.45;
		float f = 1.f;

		//FUNCTOR func(k, j);
		//VendorJob(func);

		auto func1 = [k, f](int par) {
			cout << "apple k=" << k << " and f=" << f << " par=" << par << endl;
		};
		VendorJob(func1);
	}

	void AddFun(int x, int y)
	{
		cout << " Addfun x=" << x << " and y=" << y << endl;
	}

	void main()
	{
		std::function<void(int)> fp = std::bind(AddFun, _1, 20);
		VendorJob(fp);
	}
}