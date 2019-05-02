#include<iostream>
using namespace std;

namespace nm43
{
	template<typename T>
	class CA
	{
		int *i;
		int *j;
		T val;
	public:
		CA(T val) :i(new int(10)), j(new int(20)), val(val)
		{
			cout << "Default " << endl;
		}
		T get_Val()
		{
			return val;
		}
		CA(const CA& par) :i(new int(*par.i)), j(par.j), val(val)
		{
			cout << "Deep copy " << endl;
		}
		CA(CA&& par) :i(par.i), j(new int(*par.j)), val(val)
		{
			cout << "Move  " << endl;
			par.i = NULL;
			par.j = NULL;
		}
		void Disp()
		{
			cout << "i=" << i << endl;
			cout << "j=" << j << endl;
			cout << "_______________________" << endl;
		}
		~CA()
		{
			cout << "_________Dtor______________" << endl;
			cout << "i=" << i << endl;
			cout << "j=" << j << endl;
			cout << "_______________________" << endl;
			delete i;
			delete j;

		}

	};

	CA<int> fun()
	{
		CA<int> obj(100);
		obj.Disp();
		return obj;
	}

	void main()
	{
		int *k = new int(100);
		CA<int*> obj(k);
		//CA obj2(obj);
		//CA obj2(std::move(obj));
		//CA obj2 = fun();
		//obj.Disp();
		//obj2.Disp();


		delete k;
	}
}