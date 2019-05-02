#include<iostream>
#include<thread>
#include<string>
using namespace std;
namespace nm34
{
	class CA
	{
		string _info;
	public:
		explicit CA(string const & info) :_info(info)
		{
		}
		void operator()()
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "functor " << _info << " " << i << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
		}
	};

	void main()
	{
		//CA obj;
		thread t1(CA("sachin"));
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\tmain " << i << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		t1.join();
	}
}