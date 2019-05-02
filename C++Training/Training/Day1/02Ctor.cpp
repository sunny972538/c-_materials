#include<iostream>
using namespace std;
namespace nm02 {
	class CA
	{
	public:
		CA()
		{
			cout << "CA Default" << endl;
		}
		explicit CA(int par)
		{
			cout << "CA One Param" << endl;
		}
		CA(int a, int b)
		{
			cout << "CA multi Param" << endl;
		}
	};

	void main02_1()
	{
		CA obj1;
		CA obj2(100);
		//CA obj3 = 100;
		//obj2 = 999;
		//CA obj4 = { 12 };//c++11
		CA obj5{ 35 };//c++11
	}


	class CB
	{
	public:
		CB()
		{
			cout << "CB Default" << endl;
		}
		CB(int par)
		{
			cout << "CB One Param" << endl;
		}
		explicit CB(int a, int b)//c++11
		{
			cout << "CB multi Param" << endl;
		}
	};

	void main02_2()
	{
		//CB obj1;
		//CB obj2(100);
		//CB obj3 = 100;
		//obj2 = 999;
		//CB obj4 = { 12 };//c++11
		//CB obj5{ 35 };//c++11


		CB obj6(1, 2);
		CB obj7 = (11, 55);
		//CB obj8 = { 111,222 };
		CB obj9{ 333,444 };
	}

	class CC
	{
		int a = 10;//c++11
		int b = 209;//c++11 member initilization
		const int c = 987;
	public:
		//CC():a(10),b(20),c(30)
		//CC() :b(20), c(30),a(10)
		//CC() :a(10), b(a), c(b)
		//CC() :b(20), c(b), a(b)
		//CC() :b(a), c(b), a(100)
		CC() :a(100), b(a), c(b)
		{
			//c = 900;
			cout << "CC Default" << endl;
		}
		void Disp()
		{
			cout << "a=" << a << endl;
			cout << "b=" << b << endl;
			cout << "c=" << c << endl;
		}

		~CC()
		{
			//delete i;
		}

	};


	void main02_3()
	{
		const int c = 10;
		//c = 10;
		CC obj;
		obj.Disp();
	}

	class CD
	{
		int *i;
	public:
		CD() :i(new int(10))
		{
			cout << "CD Ctor i=" << i << endl;
		}
		//CD(const CD& par):i(par.i)//shallow copy
		CD(const CD& par) :i(new int(*par.i))//deep copy
		{
			cout << "CD Copy" << endl;
		}
		CD(CD&& par) :i(par.i)//shallow copy
		{
			par.i = NULL;
			cout << "CD Move" << endl;
		}
		~CD()
		{
			cout << "CD Dtor deleting " << i << endl;
			delete i;
		}
		static void operator delete(void *pv)
		{
			cout << "operator delete for CD pv=" << pv << endl;
			if (pv != NULL)
			{
				free(pv);
			}
		}
	};

	CD Factory()
	{
		//pre-construction
		CD obj;
		//post construction
		return obj;
	}

	int fun()
	{
		int j = 100;
		return j;
	}
	void main()
	{
		CD obj1 = Factory();


		CD obj2(std::move(obj1));
		//CD obj2(obj1);
	}
}