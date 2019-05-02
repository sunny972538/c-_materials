#include<iostream>
using namespace std;

namespace nm08
{
	class CA
	{
		int x;
		int y;
	public:
		CA(int x, int y) :x(x), y(y)
		{
		}
		explicit operator int()//c++11 
		{
			return x + y;
		}
	};

	void main()
	{
		CA obj(10, 20);
		//int k = obj;//does not work
		int j = (int)obj;//does work
		//cout << "k=" << k << endl;
	}
}