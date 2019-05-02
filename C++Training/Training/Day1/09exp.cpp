#include<iostream>
using namespace std;

namespace nm09
{
	void main1()
	{
		try
		{
			try
			{
				throw 100;
			}
			catch (int &exp)
			{
				exp = 999;
				cout << "inner exp=" << exp << endl;
				//throw 200;
				throw;//rethrow
			}
			cout << "apple" << endl;
		}
		catch (int exp)
		{
			cout << "outer exp=" << exp << endl;
		}
		cout << "Orange" << endl;
	}

	class CA
	{
	public:
		CA()
		{
			cout << "CA Ctor" << endl;
		}
		~CA()
		{
			cout << "CA D-tor" << endl;
			//	throw 400;//never throw exceptions from dtor
		}
	};

	void main()
	{
		try
		{
			try
			{
				CA obj;
				throw 100;
			}
			catch (int &exp)
			{
				cout << "inner exp=" << exp << endl;

			}
			cout << "apple" << endl;
		}
		catch (int exp)
		{
			cout << "outer exp=" << exp << endl;
		}
		cout << "Orange" << endl;
	}
}