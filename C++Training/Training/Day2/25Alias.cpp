#include<iostream>
#include<future>
using namespace std;
namespace nm25
{
	template<typename T>
	class CA
	{
		T x;
	public:
		//alias
		using Type = T;
		CA(T x) :x(x)
		{
			cout << "x=" << typeid(x).name() << " x=" << x << endl;
		}

	};

	template<typename P>
	P Create(typename P::Type j)
	{
		P obj(j);
		return obj;
	}

	void main()
	{
		//CA<int> obj(10);
		//CA<int> obj=Create<CA<int>>(100);//c++11 no space between > >

		CA<double> obj = Create<CA<double>>(34.56);


	}
}