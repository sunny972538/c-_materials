#include<iostream>
#include<thread>
#include<string>
#include<mutex>
#include<future>
#include<condition_variable>
using namespace std;
namespace nm40
{
	mutex mute;
	condition_variable cv;
	void main()
	{
		int value = 100;

		thread recieve([&]() {
			cout << "waiting to read the value " << endl;
			unique_lock<mutex> lock(mute);
			cv.wait(lock);
			cout << "The value is " << value << endl;


		});

		thread setinfo([&]() {
			value = 999;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Assigned the value access in 2 seconds " << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cv.notify_one();

		});

		recieve.join();
		setinfo.join();
	}
}