#include<iostream>
#include<future>
#include<string>
using namespace std;
using namespace std::placeholders;
namespace nm20
{
	void DoJob(std::function<int(int)> fp)
	{

		cout << "Task 111" << endl;
		int res = fp(100);
		cout << "Task 222 res=" << res << endl;

	}

	//------------------------------------------

	int ClientFun(int g)
	{
		cout << "Client fun g=" << g << endl;
		return g * 10;
	}

	int ClientFunNew(int g, int h, int k)
	{
		cout << "Client fun g=" << g << " h=" << h << " k=" << k << endl;
		return g + h + k;
	}

	class FUNC
	{
		int(*fp)(int, int, int);
		int g, k;
	public:
		FUNC(int(*fp)(int, int, int), int g, int k) :fp(fp), g(g), k(k)
		{
		}
		int operator()(int h)
		{
			return fp(g, h, k);
		}

	};

	void main20_1()
	{
		//DoJob(&ClientFun);//worked
		//DoJob(&ClientFunNew);//does not work
		//std::function<int(int)> fpt = std::bind(&ClientFunNew, 10, _1, 20);
		//DoJob(fpt);
		FUNC func(&ClientFunNew, 10, 20);
		DoJob(func);
	}



	class CA
	{
	public:
		int fun(int x)
		{
			cout << "CA::fun x=" << x << endl;
			return x * 2;
		}
	};


	void main()
	{
		CA obj;
		std::function<int(int)> fp = std::bind(&CA::fun, obj, _1);
		DoJob(fp);
	}
}