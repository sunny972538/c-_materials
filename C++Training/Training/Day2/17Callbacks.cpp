#include<iostream>
using namespace std;

namespace nm17
{
	template<typename T>
	void DoJob(T fp)
	{
		fp(25);
		cout << "Task 111" << endl;
		fp(50);
		cout << "Task 222" << endl;
		fp(75);
		cout << "Task 333" << endl;
		fp(100);
	}

	//---------------------



	void ClientFun(int per)
	{
		cout << "Client job per=" << per << endl;
	}
	using FPTR = void(*)(int);//c++11
	void main17_1() {
		int prog = 0;
		int b = 2000;
		double d = 3.14159;
		FPTR fp = &ClientFun;
		DoJob(fp);
	}

	class FUNC//FUNCTOR or FUNCTION OBJECTS
	{
		int &prog;
	public:
		FUNC(int &prog) :prog(prog)
		{
		}
		void operator()(int val) const
		{
			prog = val;
			cout << "Client job per=" << val << endl;
		}
	};
	void main()
	{
		int a = 0;
		int b = 2000;
		double d = 3.14159;
		//c++11
		//auto func = [](int val)  { cout << "Client job NewFun val=" << val << endl; };
		//auto func = [](int val) mutable { cout << "Client job NewFun val=" << val << endl; };
		//auto func = [a](int val) { /*a++; //inspector */ cout << "Client job NewFun val=" << val << endl; };
		//auto func = [&a](int val) { a++;   cout << "Client job NewFun val=" << val << endl; };
		//auto func = [&a](int val) { a++;   cout << "Client job NewFun val=" << val << endl; };
		//auto func = [=](int val)  {   cout << "Client job NewFun val=" << val<<" a="<<a << endl; };
		//auto func = [&](int val) {   cout << "Client job NewFun val=" << val << " a=" << a << endl; };
		//auto func = [=,&d](int val) {   cout << "Client job NewFun val=" << val << " a=" << a << endl; };
		auto func = [&, d](int val) {   cout << "Client job NewFun val=" << val << " a=" << a << endl; };
		DoJob(func);
		cout << "a=" << a << endl;

	}
}