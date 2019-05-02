#include<iostream>
using namespace std;
namespace nm15
{
	class CA
	{
	public:
		CA()
		{
			cout << "CA()" << endl;
		}
		CA(int par)
		{
			cout << "CA (int)" << endl;
		}
		CA(int par, int par2)
		{
			cout << "CA (int,int)" << endl;
		}
	};

	class Wrapper
	{
		CA obj;
	public:
		/*Wrapper():obj()
		{
		}
		Wrapper(int j) :obj(j)
		{
		}
		Wrapper(int i,int j) :obj(i,j)
		{
		}*/
		/*template<typename ...T>
		Wrapper(T ...val):obj(val...)
		{

		}*/
		template<typename ...T>
		Wrapper(T ...val) : obj(std::forward<T>(val)...)
		{

		}
	};

	void main()
	{
		Wrapper wrap1;
		Wrapper wrap2(10);
		Wrapper wrap3(12, 13);
	}
}