#include<iostream>
#include<conio.h>
#include<map>
#include<string>
using namespace std;
namespace nm31
{
	typedef void (*FPTR)();
	map<string,FPTR> myMap;
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
	void ShipShip()
	{
		cout<<"Ship coolides with ship"<<endl;
	}
	void ShipAsteroid()
	{
		cout<<"Ship coolides with Asteroid"<<endl;
	}

	void Register()
	{
		string sp=typeid(Ship).name();	
		string st=typeid(Station).name();
		string ast=typeid(Asteroid).name();
		myMap[sp+sp]=ShipShip;
		myMap[sp+ast]=ShipAsteroid;
		myMap[ast+sp]=ShipAsteroid;
	}
	class Dummy
	{
	public:
		Dummy()
		{
			Register();
		}
	}d;

	void ProcessCollission(GameObject & g1,GameObject & g2)
	{
		cout<<"g1="<<typeid(g1).name()<<endl;
		cout<<"g2="<<typeid(g2).name()<<endl;
		string s1=typeid(g1).name();
		string s2=typeid(g2).name();
		FPTR fp=myMap[s1+s2];
		fp();
		cout<<"____________________________"<<endl;
		
	}
}


void main31()
{
	using namespace nm31;
	Ship sp;
	Station st;
	Asteroid ast;
	ProcessCollission(sp,sp);
	//ProcessCollission(sp,st);
	ProcessCollission(ast,sp);
	//ProcessCollission(ast,st);

	getche();
}