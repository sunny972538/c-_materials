#include<iostream>
using namespace std;

struct CA{
private:
	int x1;
protected:
	int x2;
public:
	int x3;
};
struct CB :CA  {
};
struct CC : CB
{
	void fun()
	{
		x1 = 56; //l1	
		x2 = 10; //l2
		x3 = 30; //l3
	}
};
void main()
{
	CB obj;
	obj.x1 = 56; //l4
	obj.x2 = 10; //l5
	obj.x3 = 20; //l6
}
//l1, l4, l5