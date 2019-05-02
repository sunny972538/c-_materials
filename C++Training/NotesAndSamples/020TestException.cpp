#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm20{
	class CA
	{
	public:
		CA()
		{
			cout<<"Ctor"<<endl;
		}
		~CA()
		{
			cout<<"D-tor"<<endl;
			//throw 100;//never throw from dtor
			//delete this;
		}
	};
}

void main20()
{
	using namespace nm20;
	CA *pt=new CA();
	try
	{
		CA obj;
		delete pt;
	}
	catch(...)
	{
		cout<<"exp caught"<<endl;
	}
	if(pt==NULL)
	{
		cout<<"Apple"<<endl;
	}
	else
	{
		cout<<"Orange"<<endl;
		
	}
	getche();
}