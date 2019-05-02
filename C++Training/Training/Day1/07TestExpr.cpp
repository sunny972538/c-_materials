#include<iostream>
using namespace std;

namespace nm07
{
	constexpr int fun(int x)//c++11
	{
		return 10 + x;
	}

	template<typename T, int size>
	class CA
	{
	public:
		CA()
		{
			cout << "Size=" << size << endl;
		}
	};

	void main()
	{
		CA<int, fun(2)> obj;
		int arr[fun(0)] = { 0 };
		for (int i = 0; i < fun(0); i++)
		{
			cout << "arr[" << i << "]=" << arr[i] << endl;
		}

	}
}