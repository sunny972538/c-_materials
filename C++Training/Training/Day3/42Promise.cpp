#include<iostream>
#include<thread>
#include<string>
#include<mutex>
#include<future>
#include<condition_variable>
using namespace std;


namespace nm42
{
	void Mul(std::promise<int>&& iPromise, int a, int b)
	{
		//pre
		iPromise.set_value(a*b);
		//post
	}

	struct Div
	{
		void operator()(std::promise<int>&& iPromise, int a, int b) const
		{
			iPromise.set_value(a / b);
		}
	};

	void main()
	{
		int a = 20;
		int b = 10;

	
		promise<int> mPromise;
		promise<int> dPromise;

		future<int> mRes = mPromise.get_future();
		future<int> dRes = dPromise.get_future();

		thread t1(Mul, std::move(mPromise), a, b);
		Div div;
		thread t2(div, std::move(dPromise), a, b);

		cout << "20*10=" << mRes.get() << endl;
		cout << "20/10=" << dRes.get() << endl;
		t1.join();
		t2.join();




	}
}