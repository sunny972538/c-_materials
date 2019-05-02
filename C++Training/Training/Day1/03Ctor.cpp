#include<iostream>
using namespace std;
namespace nm03
{
	//c++11 packing
	template<typename T>
	void PrintMe(T val)
	{
		cout << val << endl;
	}

	template<typename T1, typename... T2>//variadic templates
	void PrintMe(T1 val, T2 ...rest)
	{
		cout << val << "\t"; PrintMe(rest...);
	}

	void main03_1()
	{
		PrintMe(100, "sachin", 3.14159, 1.0f);
	}



	class CA
	{
	public:
		CA()
		{
			cout << "CA::CA()" << endl;
		}
		CA(int x)
		{
			cout << "CA::CA(int)" << endl;
		}
		CA(int x, int y)
		{
			cout << "CA::CA(int,int)" << endl;
		}
		CA(int x, int y, int z)
		{
			cout << "CA::CA(int,int,int)" << endl;
		}
	};
	class Wrapper
	{
		CA obj;
	public:
		template<typename ...T>
		//Wrapper(T ...par) :obj(par...)
		Wrapper(T ...par) :obj(std::forward<T>(par)...)
		{
		}

	};

	void main()
	{
		//CAT cat;
		Wrapper r1;
		Wrapper r2(10);
		Wrapper r3(1, 2);
		Wrapper r4(1, 2, 3);
	}
}