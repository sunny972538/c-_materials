#include<iostream>
#include <future>
using namespace std;


namespace nm44
{

	void main44_1()
	{
		std::cout << std::endl;
		std::async([]() {
			this_thread::sleep_for(chrono::seconds(1));
			std::cout << "fire and forget " << this_thread::get_id() << std::endl;

		});
		std::cout << "main done " << this_thread::get_id() << std::endl;
	}


	void main44_2()
	{
		std::cout << std::endl;

		std::async(std::launch::async, [] {
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "first thread" << std::endl;
		});

		std::async(std::launch::async, [] {
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "second thread" << std::endl; }
		);

		std::cout << "main thread" << std::endl;
	}


	void main()
	{
		std::cout << std::endl;

		auto first = std::async(std::launch::async, [] {
			std::this_thread::sleep_for(std::chrono::seconds(2));
			std::cout << "first thread" << std::endl;
		});

		auto second = std::async(std::launch::async, [] {
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "second thread" << std::endl; }
		);

		std::cout << "main thread" << std::endl;
	}
}