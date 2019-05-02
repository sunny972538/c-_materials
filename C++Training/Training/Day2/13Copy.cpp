#include<iostream>
using namespace std;
namespace nm13
{
	class CA
	{
		int *pt;
		//prohibit heap object
		static void* operator new(size_t)
		{
			return NULL;
		}
		static void* operator new[](size_t)
		{
			return NULL;
		}
			static void operator delete(void* pv)
		{

		}
		static void operator delete[](void* pv)
		{

		}
	public:
		CA() :pt(new int(100))
		{
			cout << "CA Ctor" << endl;
		}
		//CA(const CA& par):pt(par.pt)//shallow copy
		CA(const CA& par) :pt(new int(*par.pt))//deep copy
		{
			cout << "Deep Copy Ctor " << endl;
		}
		//move ctor
		CA(CA && par) :pt(par.pt)
		{
			cout << "Move shallow  Ctor " << endl;
			par.pt = NULL;
		}
		void Display()
		{
			cout << "pt=" << pt << " = " << *pt << endl;
		}
		~CA()
		{
			cout << "CA Dtor" << endl;
			delete pt;
		}
	};

	CA FactoryCA()
	{
		CA obj;
		obj.Display();
		return obj;
	}

	void DoJob(CA obj)
	{
		obj.Display();
	}
	void main()
	{
		////CA *ptr = new CA();
		//CA obj1;
		//CA obj2(obj1);
		//cout << "___________________" << endl;
		//obj1.Display();
		//obj2.Display();
		cout << "___________________" << endl;
		CA obj3 = FactoryCA();
		obj3.Display();
		cout << "___________________" << endl;
		CA obj5(std::move(obj3));
		obj5.Display();
		cout << "___________________" << endl;
		DoJob(std::move(obj5));
		cout << "___________________" << endl;
	}
}