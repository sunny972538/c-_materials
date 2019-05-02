#include<iostream>
#include<thread>
#include<string>
#include<mutex>
#include<future>
using namespace std;
//callonce
namespace nm39
{
	std::once_flag flag1;

	void DoJob()
	{
		cout << "Book me a ticket please " << this_thread::get_id() << endl;
		this_thread::sleep_for(chrono::seconds(1));
		std::call_once(flag1, []() {  cout << "I have booked your tickets to hyderabad " << this_thread::get_id() << endl; });
	}

	void main39_1()
	{
		thread t1(DoJob);
		thread t2(DoJob);
		thread t3(DoJob);
		thread t4(DoJob);

		t1.join();
		t2.join();
		t3.join();
		t4.join();
	}

	void DoJobAck(bool ack)
	{
		if (ack)
		{
			cout << "please try again for the ticket " << endl;
			throw exception();
		}
		cout << "I have done the job i wont be called again" << endl;
	}


	void CallFun(bool ack)
	{
		try
		{
			std::call_once(flag1, DoJobAck, ack);
		}
		catch (...)
		{
			cout << "exp happened " << endl;
		}
	}

	void main()
	{
		thread t1(CallFun, false);
		thread t2(CallFun, true);
		thread t3(CallFun, true);
		thread t4(CallFun, true);

		t1.join();
		t2.join();
		t3.join();
		t4.join();
	}
}