#include <random>
#include <iostream>
using namespace std;


namespace nm49
{
	void main()
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 6);
		for (int n = 0; n < 10; ++n)
			//Use dis to transform the random unsigned int generated by gen into an int in [1, 6]
			std::cout << dis(gen) << ' ';

		cout << endl;

	}
}