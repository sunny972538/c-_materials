#include<iostream>
using namespace std;
namespace nm16
{
	class CA
	{
		int x;
		int y;
	public:
		CA(int x, int y) :x(x), y(y)
		{
		}
		void Bharath()
		{
			cout << "Bharath called x=" << x << endl;
		}
		void India()
		{
			cout << "India called y=" << y << endl;
		}
	};

	//typedef void(CA::*FPTR)();
	using FPTR = void(CA::*)();//c++11

	void DoJob(FPTR fp, CA & obj)
	{
		cout << "Task 111 new" << endl;
		(obj.*fp)();
		cout << "Task 222 new" << endl;
	}

	//---------------------
	void ClientFun()
	{
		cout << "Client job" << endl;
	}

	void main() {
		CA ob(123, 456);
		FPTR fp = &CA::India;
		DoJob(fp, ob);
	}
}