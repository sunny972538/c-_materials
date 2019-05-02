#include<iostream>
using namespace std;
namespace nm18
{
	using FPTR = void(*)();
	//hof
	void VendorJob(FPTR fp)
	{
		cout << "vendor task 111" << endl;
		fp();//callback
		cout << "vendor task 222" << endl;
	}

	//--------------------

	void ClientFun()
	{
		cout << "Client fun called" << endl;
	}

	void main()
	{
		int k = 100;
		double j = 3.45;
		float f = 1.f;
		FPTR fp = ClientFun;

		VendorJob(fp);

	}
}