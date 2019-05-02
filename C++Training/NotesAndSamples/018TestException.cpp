#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm18
{


}

void main18()
{
	try
	{
			try
			{
				throw 100;
			}
			catch(int & x)
			{
				x=9;
				cout<<"exp inner try x="<<x<<endl;
				throw;//rethrow
			}
			cout<<"apple"<<endl;
	}
	catch(int y)
	{
			cout<<"Exp outer try y="<<y<<endl;
	}
	catch(...)
	{

	}
	getche();
}