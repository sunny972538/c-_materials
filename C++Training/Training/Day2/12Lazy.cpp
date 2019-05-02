#include<iostream>
using namespace std;

namespace nm12
{

	void main1()
	{
		int arr[] = { 11,22,33 };

		int x = arr[1];//reading
		arr[0] = 999;//writing
		arr[2] = arr[1];//read/write

	}

	class CA
	{
		int x = 100;
		int y = 200;
	public:
		CA()
		{
			cout << "this=" << this << endl;
			cout << "  &x=" << &x << endl;
			cout << "  &y=" << &y << endl;
			cout << "__________________________" << endl;
		}
		int *operator&()
		{
			return &y;
		}
	};

	void main2()
	{
		CA obj;

		int *ptr = &obj;
		cout << "ptr=" << ptr << endl;

		CA *ptr1 = addressof(obj);
		cout << "ptr1=" << ptr1 << endl;
	}

	class CB
	{
	public:
		CB& operator=(int val)
		{
			cout << "writing " << endl;
			return *this;
		}
		//casting
		operator int()
		{
			cout << "Reading " << endl;
			return 100;
		}
		operator double()
		{
			cout << "Reading " << endl;
			return 100.0;
		}
		operator CB*()
		{
			return this;
		}
	};

	void main3()
	{
		CB obj;
		int x = obj;
		obj = 100;
		CB *pt = obj;

	}


	class SmartArray
	{
		int ar[3];// { 11, 22, 33 };
	public:
		SmartArray() :ar{ 11,22,33 }
		{

		}
		class Helper
		{
			SmartArray *ptr;
			int index;
		public:
			Helper(SmartArray *ptr, int index) :ptr(ptr), index(index)
			{

			}
			operator int()
			{
				cout << "Reading" << endl;
				return ptr->ar[index];
			}
			Helper& operator=(int val)
			{
				cout << "writing" << endl;
				ptr->ar[index] = val;
				return *this;
			}
			Helper& operator=(Helper par)
			{
				cout << "reading/writing" << endl;
				ptr->ar[index] = par.ptr->ar[par.index];
				return *this;
			}
		};
		Helper operator[](int index)
		{
			//cout << "business worked " << endl;
			return { this,index };
		}
	};

	void main()
	{
		SmartArray arr;

		int x = arr[1];//reading
		arr[0] = 999;//writing
		arr[2] = arr[1];//read/write
	}
}