#include<iostream>
using namespace std;

namespace nm29
{
	class CA
	{
	public:
		void AddFun(int x)
		{
			cout << "CA::AddFun(int)" << endl;
		}
		void AddFun(int x, int y)
		{
			cout << "CA::AddFun(int,int)" << endl;
		}
	};
	class CB :public CA
	{
	public:
		using CA::AddFun;
		void AddFun(int x, int y, int z)
		{
			cout << "CB::AddFun(int,int,int)" << endl;
		}
	};
	void main29_1()
	{
		CB obj;
		obj.AddFun(10);
		obj.AddFun(12, 34);
		obj.AddFun(11, 22, 33);
	}


	template<typename ...Rest>//forward declaration
	class CMath;


	template<typename T, typename ...Rest>
	class CMath<T, Rest...> :public CMath<Rest...>
	{
	public:
		using CMath<Rest...>::AddFun;
		void AddFun(T x)
		{
			cout << "x=" << typeid(x).name() << endl;
		}
	};

	template<>
	class CMath<>
	{
	public:
		void AddFun()
		{

		}
	};

	void main12()
	{
		CMath<int, double, float> m;
		m.AddFun(1.3f);
		m.AddFun(2.34);
		m.AddFun(345);
	}






	void main()
	{

	}
}