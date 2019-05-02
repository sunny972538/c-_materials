#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm17
{
	class CA
	{
	public:
		CA()
		{
			cout<<"CA ctor"<<endl;
		}
		~CA()
		{
			cout<<"CA D-tor"<<endl;
		}
		CA(CA &par)
		{
			cout<<"copy"<<endl;
		}
	};
	void DoJob(int x)
	{
		CA obj;
		cout<<"Orange"<<endl;
		if(90==x)
			throw obj;
		cout<<"Pine "<<endl;
	}
	void Myfun()
	{
		cout<<" resources released int fun"<<endl;
		getche();
		exit(0);
	}
}
void main17_2()
{
	using namespace nm17;
	try
	{
		CA obj;
		throw obj;
	}
	catch(CA obj)
	{
		cout<<"CA exp "<<endl;
	}
	getche();
}



void main17_1()
{
	using namespace nm17;
	set_terminate(Myfun);
	cout<<"Allot resources "<<endl;
	cout<<"Apple"<<endl;
	try
	{
		//CA obj;
		DoJob(90);
	}
	catch(int exp)
	{
		//if(
		cout<<"exp caught exp="<<exp<<endl;
	}
	catch(CA obj)
	{
		cout<<"CA exp "<<endl;
	}
	cout<<"Jack"<<endl;
	cout<<"resources released int main"<<endl;
	getche();
}