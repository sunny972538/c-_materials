#include<iostream>
using namespace std;

namespace nm07
{
	class CA
	{
	public:
		CA() = default;//c++11
		CA(const CA&) = delete;
		CA&operator=(const CA&) = delete;
		~CA() = default;
		void AddFun(double x, double y)
		{

		}
		void AddFun(int x, int y) = delete;
		template<typename T>
		void Subfun(T, T) = delete;//c++11
		void Subfun(double x, double y)
		{

		}

	};

	void main()
	{
		CA obj1;
		//CA obj2(obj1);
		obj1.AddFun(2.3, 4.5);
		//obj1.AddFun(1, 2);

	}
}