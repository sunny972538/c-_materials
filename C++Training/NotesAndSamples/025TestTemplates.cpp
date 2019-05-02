#include<iostream>
#include<conio.h>
using namespace std;
namespace nm25
{
	template<typename T1,typename T2>
	class CA
	{
	public:
		CA()
		{
			cout<<"T1="<<typeid(T1).name()<<endl;
			cout<<"T2="<<typeid(T2).name()<<endl;
		}
	};
	template<typename T1,typename T2>
	class CA<T1*,T2*>
	{
	public:
		CA()
		{
			cout<<"*T1="<<typeid(T1).name()<<endl;
			cout<<"*T2="<<typeid(T2).name()<<endl;
		}
	};
	//partial specialization
	template<typename T>
	class CB:public CA<T,int>
	{
	public:

	};

	void DoJob()
	{
	}
}


void main25()
{
	using namespace nm25;
	CA<int,int> obj;
   CA<char*,int*> obj1;
	getche();
}