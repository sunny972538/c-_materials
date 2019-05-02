#include<iostream>
using namespace std;

class Circle
{
public:
	virtual void DrawCircle() = 0;
	virtual void AreaCircle() = 0;
};
class Rectangle
{
public:
	virtual void DrawRect() = 0;
	virtual void AreaRect() = 0;
};

class Shape :public Circle, public Rectangle
{
public:
	void DrawCircle() override
	{
		cout << "Circle Drawn " << endl;
	}
	void AreaCircle() override
	{
		cout << "Circle Area " << endl;
	}
	void DrawRect() override
	{
		cout << "Rectangle Drawn " << endl;
	}
	void AreaRect() override
	{
		cout << "Rectangle Area " << endl;
	}
};

Shape* Create()
{
	return new Shape();
}

void main()
{
	Circle *circle = Create();
	circle->DrawCircle();
	circle->AreaCircle();
	Rectangle *rect = (Rectangle*)circle;
	cout << "_______________________" << endl;
	rect->DrawRect();
	rect->AreaRect();
}