#include<iostream>
#include<conio.h>
using namespace std;
namespace nm5
{
	class CA
	{
	public:
		/*CA()
		{
		}*/
		virtual void fun()
		{
		}
	};

	class Animal
	{
	public:
		Animal()
		{
			cout<<"animal ctor"<<endl;
		}
		void fun()
		{
		}
	};
	class Vertibrates:public Animal
	{
	public:
	/*Vertibrates()
		{
			cout<<"Vertibrates ctor"<<endl;
		}*/
	};

	class Team
	{
	public:
		int x;
		Team()
		{
			cout<<"Team ctor"<<endl;
		}
	};
	class League
	{
	public:
		Team obj;
		
		League()//call	??0Team@nm5@@QAE@XZ			; nm5::Team::Team
		{
			cout<<"League ctor"<<endl;
		}
	};
}
using namespace nm5;

void main5_3()
{
	League lg;
	/*
	lea	ecx, DWORD PTR _lg$[ebp]
	call	??0League@nm5@@QAE@XZ			; nm5::League::League
	*/
	

	getche();
}


void main5_2()
{
	
	Vertibrates obj;
	obj.fun();
	getche();
}


void main5_1()
{
	using namespace nm5;
	CA obj;
	obj.fun();
}