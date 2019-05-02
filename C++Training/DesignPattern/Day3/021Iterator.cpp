#include<iostream>
#include<string>
#include<list>
using namespace std;

namespace nm021
{
	class INavigate
	{
	public:
		virtual bool Next() = 0;
		virtual void MoveNext() = 0;
		virtual void First() = 0;
		virtual void Last() = 0;
		virtual int Current() = 0;
	};


	class Container
	{
		int arr[5];
		int size = 5;
	public:
		Container() :arr{ 11,22,33,44,55 }//c++11
		{

		}

		class Iterator :public INavigate
		{
			Container * ptr;
			int index;
		public:
			Iterator(Container * ptr) :ptr(ptr), index(0)
			{

			}
			bool Next() override
			{
				return index < ptr->size;
			}
			void MoveNext() override
			{
				index++;
			}
			void First() override
			{
				index = 0;
			}
			void Last() override
			{
				index = ptr->size - 1;
			}
			int Current() override
			{
				return ptr->arr[index];
			}
			Container & operator*()
			{
				return *ptr;
			}
		};

		Container * begin()
		{
			return this;
		}

		friend ostream & operator<<(ostream & os, Container & container)
		{
			for (int i = 0; i < container.size; i++)
			{
				os << "arr[" << i << "]=" << container.arr[i] << endl;
			}
			return os;
		}
	};

	void main()
	{
		Container cnt;
		Container::Iterator it1 = cnt.begin();

		while (it1.Next())
		{
			cout << it1.Current() << endl;
			it1.MoveNext();
		}

		cout << cnt;
	}
}