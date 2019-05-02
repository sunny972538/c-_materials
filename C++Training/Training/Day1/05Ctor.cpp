#include<iostream>
using namespace std;
namespace nm05
{
	class CA
	{
	public:
		CA() :CA(0, 0)//constructor delegation 
		{
			cout << "CA::CA()" << endl;
		}
		CA(int x) :CA(x, x)
		{

			cout << "CA::CA(int)" << endl;
		}
		CA(int x, int y)
		{
			cout << "Resources aquired at CA::CA(int,int)\n___________________________" << endl;
		}
	};
	void main()
	{
		CA obj1;
		CA obj2(100);
		CA obj3(123, 456);
	}
}