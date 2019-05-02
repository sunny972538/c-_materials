#include<iostream>
using namespace std;
namespace nm14
{
	//variadic template c++11
	template<typename T>
	void Print(T val)//specialized function
	{
		cout << val << endl;
	}
	template<typename First, typename ...Rest>//packed
	void Print(First val, Rest ...val2)
	{
		cout << val << "\t"; Print(val2...);
	}
	void main()
	{
		Print(100, 12.3, "sachin");
		Print(100, 1200, "sewag", "rahul");
		Print(1, 2, 3, 4, 5, 6, 7);
	}
}