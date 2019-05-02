#include<iostream>
using namespace std;

namespace nm16
{
	class CA
	{
		int arr[5];
	public:
		CA() :arr{ 11,22,33,44,55 }
		{
			cout << "default ctor" << endl;
		}
		/*explicit*/ CA(int x)
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = x;
			cout << "one param ctor" << endl;
		}
		/*explicit*/ CA(int x, int y)//new in c++11 
		{
			arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = x + y;
			cout << "multi param ctor" << endl;
		}
		//init
		CA(std::initializer_list<int> list)
		{
			cout << "Init ctor" << endl;
			initializer_list<int>::iterator it1 = list.begin();
			auto it2 = list.end();//c++11 type inference
			while (it1 != it2)
			{
				it1++;
			}
		}
		friend ostream & operator<<(ostream& os, CA & par)
		{
			for (int i = 0; i < 5; i++)
			{
				os << "arr[" << i << "]=" << par.arr[i] << endl;
			}
			return os;
		}
	};

	void main()
	{
		CA obj1{ 11,22,33,44,55 };
		CA obj2{ 11,22,44,55,66 };
		CA obj11(11);
		CA obj22(11, 22);
	}

	void main1()
	{
		//CA obj;
		/*CA obj1(100);
		CA obj2{ 100 };*/
		//CA obj3 = 45;
		//CA obj4 = { 32 };
		//cout << obj;
		/*int x = 10, y = 20;
		x = (x += 100, y += 400, x + y);*/
		//CA obj5(12, 34);
		//CA obj6 = (1, 2);
		//CA obj7 = { 11,22 };
		//CA obj8{ 111,222 };
	}

}