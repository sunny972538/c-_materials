#include<iostream>
#include<conio.h>
using namespace std;
namespace nm24
{
	class StackBase
	{
	protected:
		int top;
	public:
		StackBase():top(-1)
		{
		}
		bool IsEmpty()
		{
			return top==-1;
		}
		bool IsFull()
		{
			return top==5;
		}
	};
	template<typename T>
	class Stack:public StackBase
	{
		T  arr[5];
	public:
		Stack()
		{
			cout<<"Generalization for  ctor "<<endl;
		}
		void Push(T data)
		{
			cout<<"Generalization for  push "<<endl;
		}
	};

	//template specialization
	template<>
	class Stack<int>:public StackBase
	{
		int  arr[5];
	public:
		Stack()
		{
			cout<<"Specialized for integers ctor "<<endl;
		}
		void Push(int data)
		{
			cout<<"Specialized for integer push "<<endl;
		}
	};
	template<typename T=int,int size=5>
	class LinkedList
	{
		int arr[size];
	public:
		LinkedList()
		{
			cout<<typeid(T).name()<<" "<<size<<endl;
		}
	};
}

void main24()
{
	using namespace nm24;
	LinkedList<double,10> obj;
	LinkedList<int,20> obj1;
	LinkedList<int> obj2;
	LinkedList<> obj3;
	//LinkedList<,10> obj4;
	getche();
}


void main24_1()
{
	using namespace nm24;
	Stack<int> stInt;
	Stack<double> stDouble;
	Stack<int> st;
	st.Push(10);
	stDouble.Push(34.32);
	getche();
}