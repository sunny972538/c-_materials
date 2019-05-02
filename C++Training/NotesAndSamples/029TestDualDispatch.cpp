#include<iostream>
#include<conio.h>
using namespace std;
namespace nm29
{
	struct GameObject
	{
		virtual void Collides(GameObject &g)=0;
		virtual ~GameObject()
		{
		}
	};
	struct Ship:GameObject
	{
		void Collides(GameObject &g)
		{
			if(typeid(g)==typeid(Ship))
				cout<<"ship collides with ship "<<endl;
			//else if
			//else if
			
		}
	};
	struct Station:GameObject
	{
		void Collides(GameObject &g)
		{
				if(typeid(g)==typeid(Ship))
				cout<<"Station collides with ship "<<endl;
		
		}
	};
	struct Asteroid:GameObject
	{
		void Collides(GameObject &g)
		{
		}
	};

	void ProcessCollission(GameObject & g1,GameObject & g2)
	{
		cout<<"g1="<<typeid(g1).name()<<endl;
		cout<<"g2="<<typeid(g2).name()<<endl;
		g1.Collides(g2);
		cout<<"____________________________"<<endl;
		//else if
		//else if
	}
}


void main29()
{
	using namespace nm29;
	Ship sp;
	Station st;
	Asteroid ast;
	ProcessCollission(sp,sp);
	ProcessCollission(sp,st);
	ProcessCollission(ast,sp);
	ProcessCollission(ast,st);

	getche();
}