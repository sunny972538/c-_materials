#include<iostream>
#include<future>
using namespace std;

namespace nm27
{
	template<typename T1, typename T2>
	void fun(T1 fn, T2 par)
	{
		fn(par);
	}
	void f1(int& i)
	{
		i++;
	}
	void main()
	{
		int j = 10;
		fun(&f1, std::ref(j));//c++11 ref for boxing
		cout << "j=" << j << endl;
	}
}