#include<iostream>
#include<conio.h>
#include<string>
#include<new>
using namespace std;
namespace nm21
{
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
			
		}
	};

}

void main()
{
	using namespace nm21;
	CA *pt=NULL;
		pt=new(nothrow) CA();
	if(pt==NULL)
		return;
	//use pt
	delete pt;
	getche();
}

void main21_1()
{
	using namespace nm21;
	CA *pt=NULL;
	try
	{
		pt=new CA();
	}
	catch(bad_alloc &c)
	{
		cout<<"Memory not alloted "<<endl;
	}
	if(pt==NULL)
		return;
	//use pt
	delete pt;
	getche();
}