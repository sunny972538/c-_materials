#include<iostream>
using namespace std;
namespace nm09
{
	//enum Signal;//c++11 forward declaration

	enum class Signal :short {//c++11 scoped enums
		Red,
		Green,
		Yellow
	};

	enum class Color
	{
		Blue,
		Greenish,
		Red
	};

	void main()
	{
		Signal sig = Signal::Red;

		/*switch (sig)
		{
		case Red:
			break;
		case Green:
			break;
		case Yellow:
			break;
		default:
			break;
		}*/
		switch (sig)
		{
		case Signal::Red:
			break;
		case Signal::Green:
			break;
		case Signal::Yellow:
			break;
		default:
			break;
		}
	}
}