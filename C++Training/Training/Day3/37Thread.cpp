#include<iostream>
#include<thread>
#include<string>
#include<mutex>

using namespace std;
namespace nm37
{
	mutex mute;
	class CA
	{
		int x;
		int y;
	public:
		CA() :x(0), y(0)
		{
		}
		void Add()
		{
			for (x = 1; x <= 5; x++)
			{
				cout << "Add x=" << x << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
			mute.lock();
			for (y = 1; y <= 10; y++)
			{
				cout << "Add y=" << y << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
			mute.unlock();
		}
		void Sub()
		{
			mute.lock();
			for (y = -1; y > -10; y--)
			{
				cout << "\t\tSub y=" << y << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
			mute.unlock();
			for (x = -1; x > -5; x--)
			{
				cout << "\t\tSub x=" << x << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
		}
	};


	void main()
	{
		CA obj;
		thread t1(&CA::Add, std::ref(obj));
		thread t2(&CA::Sub, std::ref(obj));

		t1.join();
		t2.join();
	}
}