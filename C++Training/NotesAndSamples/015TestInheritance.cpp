#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm15
{
	class CA
	{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
		CA():x(10),y(20),z(30)
		{
			
		}
		void DispState()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		friend class CC;
	};

	class CB:public CA
	{
	public:
		void DispStateCB()
		{
		//	cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
	};
	class CC:public CA
	{
	public:
		void DispStateCC()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
	};
	class CD:public CA
	{
	private:
		using CA::y;
	protected:
		CA::z;
	public:
		void DispStateCC()
		{
			//cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
	};
	class CE:public CD
	{
	public:
		void DispStateCE()
		{
			//cout<<"x="<<x<<endl;
			//cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
	};

	class Math
	{
	public:
		void fun()
		{
			cout<<" fun math"<<endl;
		}
		void AddFun(int x)
		{
			cout<<"AddFun one param .."<<endl;
		}
		void AddFun(int x,int y)
		{
			cout<<"AddFun two param .."<<endl;
		}
	};
	class MathEx:public Math
	{
	public:
		using Math::AddFun;
		void AddFun(int k)
		{
			cout<<"AddFun MathEx one param"<<endl;
		}
		void fun()
		{
			cout<<" fun mathEx"<<endl;
		}
		/*void AddFun(int x)
		{
			Math::AddFun(x);
		}
		void AddFun(int x,int y)
		{
			Math::AddFun(x,y);
		}*/
		void AddFun(int x,int y,int z)
		{
			cout<<"AddFun three param "<<endl;
		}
	};
}

void main15_2()
{
	using namespace nm15;	
	MathEx obj;
	obj.fun();
	obj.AddFun(10);
	obj.AddFun(1,2);
	obj.AddFun(1,2,3);
	getche();
}

void  main15_1()
{
	using namespace nm15;	
	CA obj;
	obj.z=900;
	CC obj1;
	obj1.DispStateCC();
	//obj.y=99;
	obj.DispState();
	getche();
}