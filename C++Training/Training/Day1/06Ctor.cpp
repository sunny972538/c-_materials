#include<iostream>
using namespace std;
namespace nm06
{
	class CA
	{
		int arr[3];
	public:
		CA() :arr{ 11,22,33 }
		{
			cout << "Default " << endl;
		}
		CA(int x) :arr{ x,x,x } {
			cout << "one param " << endl;
		}
		CA(int x, int y) :arr{ x,y,x + y } {
			cout << "two param " << endl;
		}
		CA(int x, int y, int z) :arr{ x,y,z } {
			cout << "three param " << endl;
		}
		CA(std::initializer_list<int> list)//init ctor
		{
			cout << "init" << endl;
			initializer_list<int>::iterator it1 = list.begin();
			auto it2 = list.end();
			int i = 0;
			while (it1 != it2)
			{
				arr[i++] = *it1;
				it1++;
			}
		}
	};
	void main()
	{
		CA obj(1, 2, 3);
		CA obj2{ 1,2,3 };//init ctor
	}
}