#include<iostream>
using namespace std;


class CA {
	int x;
	int y;
public:
	void Disp()
	{
		cout << "  &x=" << &x << endl;
		cout << "  &y=" << &y << endl;
		cout << "this=" << this << endl;
	}
	void* operator&()
	{
		return &y;
	}
};

void main()
{
	CA obj;
	obj.Disp();
	cout << "&obj=" << &obj << endl;
	cout <<"&obj=" << addressof(obj) << endl;
}