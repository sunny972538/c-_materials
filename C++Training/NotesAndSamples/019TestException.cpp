#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm18{
	class CA
	{
	public:
		CA()
		{
			cout<<"CA ctor"<<endl;
			throw 90;
		}
		~CA()
		{
			cout<<"CA D-tor"<<endl;
		}
	};

}

void main19()
{
	using namespace nm18;
	CA *pt=NULL;
	try
	{
		pt=new CA();
	}
	catch(int x)
	{
		cout<<"Exp x="<<x<<endl;
	}
	if(pt==NULL)
	{
		cout<<"Apple"<<endl;
	}
	else
	{
		cout<<"Orange"<<endl;
		delete pt;
	}
	getche();
}