#include<iostream>
using namespace std;

namespace nm11
{
	class CA
	{
		bool isOnHeap;// = false;
		static bool globalHeap;
		static int count;
	public:
		CA() :isOnHeap(globalHeap)
		{
			count--;
			if (count <= 0)
				globalHeap = false;
		}
		static void* operator new(size_t size)
		{
			globalHeap = true;
			count = 1;
			return malloc(size);
		}
		static void* operator new[](size_t size)
		{
			globalHeap = true;
			count = size / sizeof(CA);
			return malloc(size);
		}
			void Location()
		{
			if (isOnHeap == true)
			{
				cout << "Is on heap" << endl;
			}
			else
			{
				cout << "Is (NOT) on heap" << endl;
			}
		}
	};
	bool CA::globalHeap = false;
	int CA::count = 0;

	void main()
	{
		CA obj1;
		CA *ptrArr = new CA[5];
		CA obj2;
		CA *ptr1 = new CA();
		CA obj3;
		CA *ptr2 = new CA();

		obj1.Location();
		obj2.Location();
		obj3.Location();
		cout << "_______________________________" << endl;
		ptr1->Location();
		ptr2->Location();
		cout << "_______________________________" << endl;
		(ptrArr + 0)->Location();
		(ptrArr + 1)->Location();
		(ptrArr + 2)->Location();
		(ptrArr + 3)->Location();
		(ptrArr + 4)->Location();
	}
}