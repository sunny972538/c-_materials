#include<iostream>
#include<thread>
using namespace std;
namespace nm33
{
	class CA
	{
	public:
		void operator()()
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "functor " << i << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
		}
	};

	void main()
	{
		CA obj;
		thread t1(obj);
		for (int i = 0; i < 5; i++)
		{
			cout << "\t\tmain " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		t1.join();
	}
}