#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm16
{
	class CA
	{
		int x;
	public:
		CA()//default
		{
			cout<<"Default ctor"<<endl;
		}
		explicit CA(int par)//one param ctor
		{
			x=par;
			cout<<"One param"<<endl;
		}
		CA(int par1,int par2)//multi param ctor
		{
			cout<<"multi param"<<endl;
		}
		CA(CA &par)
		{
			cout<<"Copy"<<endl;
		}
	};
}


void  main16()
{
	using namespace nm16;	
	CA obj(10);
	//CA obj1=2;
	//obj=900;//boxing
	CA obj1(obj);
	getche();
}