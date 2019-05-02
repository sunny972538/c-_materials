#include<iostream>
using namespace std;
namespace nm05
{
	class CA
	{
	public:
		CA()
		{
			fun();
		}
		virtual void fun()
		{
			cout << "Apple" << endl;
		}
		void MyFun()
		{
			fun();
		}
	};
	class CB :public CA
	{
	public:
		CB()
		{

		}
		void fun() override
		{
			cout << "Orange" << endl;
		}
	};

	void main()
	{
		CB obj;
		obj.MyFun();
		obj.CA::CA();
		obj.MyFun();
	}
}