
namespace Ex6
{
	template<typename T>
	T AddFun(T i,T j)	{		return i + j;		}
};
using namespace Ex6;

void main6()
{
	AddFun(10,20);
	AddFun(123.45f,456.67f);
	AddFun(345435.546,567678.78);
}