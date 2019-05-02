#include<iostream>
#include<string>
#include<list>
using namespace std;

namespace nm022
{
	class Original
	{
	public:
		void FetchData()
		{
			cout << "Fetching data from DB" << endl;
		}
		void FeedDataToStore()
		{
			cout << "Feed data to store" << endl;
		}
		operator Original*()
		{
			return this;
		}
	};

	class Proxy
	{
		Original *orgRef;
	public:
		Proxy() :orgRef(NULL)
		{

		}
		void GetOriginalRef(Original *orgRef)
		{
			this->orgRef = orgRef;
		}
		void FetchData()
		{
			cout << "Memory converted to JSON" << endl;
			this->orgRef->FetchData();
		}
		void FeedDataToStore()
		{
			this->orgRef->FeedDataToStore();
			cout << "Coverting JSON to Memory representation" << endl;
		}
	};

	void main()
	{
		Original org;
		Proxy proxy;
		proxy.GetOriginalRef(org);

		proxy.FetchData();
		cout << "_________________________" << endl;
		proxy.FeedDataToStore();
		cout << "_________________________" << endl;
	}
}


namespace nm022_1
{
	class Array
	{
		int arr[5];
	public:
		Array() :arr{ 11,22,33,44,55 }
		{

		}


		class Proxy
		{
			Array *ptr;
			int index;
		public:
			Proxy(Array *ptr, int index) :ptr(ptr), index(index)
			{
			}
			operator int()
			{
				cout << "reading business" << endl;
				return ptr->arr[index];
			}
			Proxy & operator=(int val)
			{
				cout << "writing business" << endl;
				ptr->arr[index] = val;
				return *this;
			}
			Proxy & operator=(Proxy proxy)
			{
				cout << "read/writing business" << endl;
				ptr->arr[index] = proxy.ptr->arr[proxy.index];
				return *this;
			}
		};

		Proxy operator[](int index)
		{
			return Proxy(this, index);
		}
		friend ostream & operator<<(ostream & os, Array & par)
		{
			for (int i = 0; i < 5; i++)
			{
				os << "arr[" << i << "]=" << par.arr[i] << endl;
			}
			return os;
		}
	};



	void main()
	{


		Array arr;
		int x = arr[1];
		arr[0] = 999;
		arr[2] = arr[4];
		cout << arr;
	}
}