#include<iostream>
#include<conio.h>
using namespace std;
namespace nm30
{
	struct GameObject
	{
		virtual void Collides(GameObject &g)=0;
		virtual void Collided()=0;
		virtual ~GameObject()
		{
		}
	};
	struct Ship:GameObject
	{
		void Collides(GameObject &g)
		{
		  cout<<"Ship Collides with ";
		  g.Collided();
		}
		void Collided()
		{
			cout<<" Ship"<<endl;
		}
	};
	struct Station:GameObject
	{
		void Collides(GameObject &g)
		{
		  cout<<"Station Collides with ";
		  g.Collided();
		}
		void Collided()
		{
			cout<<" Station"<<endl;
		}
	};
	struct Asteroid:GameObject
	{
		void Collides(GameObject &g)
		{
		  cout<<"Asteroid Collides with ";
		  g.Collided();
		}
		void Collided()
		{
			cout<<" Asteroid"<<endl;
		}
	};

	void ProcessCollission(GameObject & g1,GameObject & g2)
	{
		cout<<"g1="<<typeid(g1).name()<<endl;
		cout<<"g2="<<typeid(g2).name()<<endl;
		g1.Collides(g2);
		cout<<"____________________________"<<endl;
		
	}
}


void main30()
{
	using namespace nm30;
	Ship sp;
	Station st;
	Asteroid ast;
	ProcessCollission(sp,sp);
	ProcessCollission(sp,st);
	ProcessCollission(ast,sp);
	ProcessCollission(ast,st);

	getche();
}