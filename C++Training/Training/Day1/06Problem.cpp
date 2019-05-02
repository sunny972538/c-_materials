#include<iostream>
using namespace std;
namespace nm06
{
	class Circle
	{
	public:
		virtual void CircleDraw()=0
		{
			cout << "Circle Drawn " << endl;
		}
		virtual void CirclePerimeter()=0
		{
			cout << "Circle Perimeter " << endl;
		}
	};

	class Rect
	{
	public:
		virtual void RectDraw()=0
		{
			cout << "Rect Drawn " << endl;
		}
		virtual void RectPerimeter()=0
		{
			cout << "Rect Perimeter " << endl;
		}
	};

	class Shape :public Circle, public Rect
	{
	public:
		virtual void CircleDraw() 
		{
			cout << "Circle Drawn " << endl;
		}
		virtual void CirclePerimeter() 
		{
			cout << "Circle Perimeter " << endl;
		}
		virtual void RectDraw() 
		{
			cout << "Rect Drawn " << endl;
		}
		virtual void RectPerimeter() 
		{
			cout << "Rect Perimeter " << endl;
		}
	};

	void main()
	{
		Shape sp;
		Circle *circle = &sp;
		circle->CircleDraw();
		circle->CirclePerimeter();
		cout << "_______________________" << endl;
		//Rect *rect = (Rect*)circle;
		//Rect *rect = (Rect*)(Shape*)circle;
		//Rect *rect = (Shape*)circle;
		Rect *rect = dynamic_cast<Rect*>(circle);
		/*
		1. reinterpret_cast
		2. static _cast
		3. dynamic_cast
		4. const_cast

		*/
		rect->RectDraw();
		rect->RectPerimeter();
	}
}