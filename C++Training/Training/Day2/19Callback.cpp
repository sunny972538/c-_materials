#include<iostream>
using namespace std;
namespace nm19
{
	template<typename T>
	void VendorJob(T fp)
	{
		cout << "vendor task 111" << endl;
		fp();//callback
		cout << "vendor task 222" << endl;
	}

	//--------------------
	//FUNCTOR or FUNCTION OBJECTS

	class FUNCTOR
	{
		int k;
		double j;

	public:
		FUNCTOR(int& k, double j) :k(k), j(j)
		{
		}
		/*void operator()() //mutator
		{
			k++;
			cout << "Client fun called k="<<k <<" and j="<<j<< endl;
		}*/
		void operator()() const //inspector
		{
			//k++;
			cout << "Client fun called k=" << k << " and j=" << j << endl;
		}
	};



	void ClientFun()
	{
		cout << "Client fun called" << endl;
	}

	void main()
	{
		int k = 100;
		double j = 3.45;
		float f = 1.f;


		//VendorJob(ClientFun);

		//FUNCTOR func(k, j);
		//VendorJob(func);

		auto func1 = []() {
			cout << "apple" << endl;
		};
		auto func2 = [k, f]() {
			//k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func3 = [k, f]() mutable {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func4 = [&k, f]() {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func5 = [=]() mutable {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func6 = [&]() {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func7 = [&, f]() {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		auto func8 = [=, &f]() mutable {
			k++;
			cout << "apple k=" << k << " and f=" << f << endl;
		};
		VendorJob(func3);
	}
}