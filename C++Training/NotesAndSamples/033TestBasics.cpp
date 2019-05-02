#include<iostream>
#include<conio.h>
using namespace std;
namespace nm33
{
	class CA
	{
		int arr[5];
	public:
		CA()
		{
			arr[0]=10;
			arr[1]=20;
			arr[2]=30;
			arr[3]=40;
			arr[4]=50;
		}

		class Helper
		{
			int ind;
			CA *ptr;
		public:
			Helper(CA *pt,int ind):ptr(pt),ind(ind)
			{
			}
			operator int()
			{
				cout<<"reading"<<endl;
				return ptr->arr[ind];
			}
			Helper & operator=(int par)
			{
				cout<<"writing"<<endl;
				ptr->arr[ind]=par;
				return *this;
			}
			Helper & operator=(Helper hlp)
			{
				cout<<"Reading/writing"<<endl;
				ptr->arr[ind]=hlp.ptr->arr[hlp.ind];
				return *this;
			}
		};

		Helper operator[](int index)
		{
			return Helper(this,index);
		}

		friend ostream& operator<<(ostream & os,CA & par)
		{
			for(int i=0;i<5;i++)
			{
				os<<"arr["<<i<<"]="<<par.arr[i]<<endl;
			}
			return os;
	}
	};
	//void Display(ostream & os,CA & par)
	
}


void main33()
{
	using namespace nm33;
	CA obj;
	//int j=obj;
	//operator<<(cout,obj);//<<"India is great"<<endl;
	int x=obj[1];//reading
	obj[2]=999;//writing
	obj[3]=obj[2];//read/write
	cout<<obj<<"x="<<x<<endl;
	getche();
}