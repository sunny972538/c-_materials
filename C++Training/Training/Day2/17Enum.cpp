#include<iostream>
using namespace std;
namespace nm17
{
	//enum Anger;//new in c++11
	enum class Color :char
	{
		Red,
		Green,
		Blue
	};

	enum class Anger
	{
		Red,
		Mild,
		Cold
	};

	void main()
	{
		Color color = Color::Red;
		switch (color)
		{
		case Color::Red:
			break;
		case Color::Green:
			break;
		case Color::Blue:
			break;
		default:
			break;
		}
	}
}