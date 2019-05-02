#include<iostream>
using namespace std;
namespace nm04
{
	class CA
	{
		int arr[5];
	public:
		CA() :arr{ 1,2,3,4,5 }//c++11
		{

		}
		//CA() :arr({ 1,2,3,4,5 })//c++11
		//{

		//}
		void Disp()
		{
			for (int& x : arr)//c++11(range based loops)
			{
				x *= 2;
				//cout << x << endl;
			}
			for (int x : arr)//c++11(range based loops)
			{
				cout << x << endl;
			}
			for (auto x : arr)//c++11(range based loops)
			{
				cout << x << endl;
			}

			for each (auto var in arr)
			{
				cout << "var=" << var << endl;
			}

		}
	};

	void main()
	{
		CA obj;
		obj.Disp();
	}
}