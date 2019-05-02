#include<iostream>
using namespace std;
namespace nm08
{
	void fun(int par)
	{
		cout << "apple" << endl;
		if (10 == par)
			throw 200;
		cout << "Orange" << endl;
	}

	void Myterminate(void)
	{
		cout << "Resources released in terminate" << endl;
		exit(0);
	}

	void main1()
	{
		cout << "Resources alloted" << endl;
		fun(20);
		cout << "Resources Released" << endl;
	}

	void main2()
	{
		set_terminate(Myterminate);
		cout << "Resources alloted" << endl;
		fun(10);
		cout << "Resources Released" << endl;
	}

	void main3()
	{

		cout << "Resources alloted" << endl;
		try
		{
			fun(10);
		}
		catch (int exp)
		{
			cout << "exp=" << exp << endl;
		}
		cout << "Resources Released" << endl;
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
		}
	};
	void main4()
	{

		cout << "apple" << endl;
		CA obj;
		try
		{
			throw 200;
		}
		catch (int exp)
		{
			cout << "exp=" << exp << endl;
		}
		cout << "Orange" << endl;
	}

	void main5()
	{

		cout << "apple" << endl;

		try
		{
			CA obj;
			cout << "Pine" << endl;
			throw 200;
		}
		catch (int exp)
		{
			cout << "exp=" << exp << endl;
		}
		cout << "Orange" << endl;
	}

	class CB
	{
	public:
		static int count;
		int x;
		CB()
		{
			count++;
			x = count;
			cout << "CB Ctor" << endl;
		}
		CB(const CB& par)
		{
			count++;
			x = count;
			cout << "CB Copy" << endl;
		}
		~CB()
		{
			cout << "CB D-tor x=" << x << endl;
		}
	};
	int CB::count = 0;

	void main()
	{
		cout << "apple" << endl;
		try
		{
			CB obj;
			cout << "Pine" << endl;
			throw obj;
		}
		catch (int exp)
		{
			cout << "exp=" << exp << endl;
		}
		catch (CB exp)
		{
			cout << "Exp CB " << endl;
		}
		cout << "Orange" << endl;
	}
}