#include<iostream>
#include<conio.h>
using namespace std;
namespace nm28
{
	struct GameObject
	{
		virtual ~GameObject()
		{
		}
	};
	struct Ship:GameObject
	{
	};
	struct Station:GameObject
	{
	};
	struct Asteroid:GameObject
	{
	};

	void ProcessCollission(GameObject & g1,GameObject & g2)
	{
		cout<<"g1="<<typeid(g1).name()<<endl;
		cout<<"g2="<<typeid(g2).name()<<endl;

		if(typeid(g1)==typeid(Ship) && typeid(g2)==typeid(Ship))
			cout<<"ship collides with ship "<<endl;
		cout<<"____________________________"<<endl;
		//else if
		//else if
	}
}


void main28()
{
	using namespace nm28;
	Ship sp;
	Station st;
	Asteroid ast;
	ProcessCollission(sp,sp);
	ProcessCollission(sp,st);
	ProcessCollission(ast,sp);
	ProcessCollission(ast,st);

	getche();
}