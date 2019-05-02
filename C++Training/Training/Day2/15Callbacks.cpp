#include<iostream>
using namespace std;
namespace nm15
{
	//typedef void(*FPTR)();
	using FPTR = void(*)();//c++11

	void DoJob(FPTR fp)
	{
		cout << "Task 111" << endl;
		fp();
		cout << "Task 222" << endl;
	}

	//---------------------
	void ClientFun()
	{
		cout << "Client job" << endl;
	}

	void main() {
		FPTR fp = &ClientFun;
		DoJob(fp);
	}
}