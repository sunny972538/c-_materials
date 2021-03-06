#include<iostream>
#include <future>
using namespace std;

namespace nm45
{
	void doTheWork() {
		std::cout << "Processing shared data." << std::endl;
	}

	void waitingForWork(std::future<void>&& fut) {

		std::cout << "Worker: Waiting for work." << std::endl;
		fut.wait();
		doTheWork();
		std::cout << "Work done." << std::endl;

	}

	void setDataReady(std::promise<void>&& prom) {

		std::cout << "Sender: Data is ready." << std::endl;
		prom.set_value();

	}

	void main()
	{
		std::promise<void> sendReady;
		auto fut = sendReady.get_future();
		std::thread t1(waitingForWork, std::move(fut));
		std::thread t2(setDataReady, std::move(sendReady));
		t1.join();
		t2.join();
	}
}