#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex44
{
	#define MAXSIZE 255

	class Generation
	{
		char  buffer[MAXSIZE];
		char* top;
		char* cur;
		int   id;
	public:
		Generation(int no):top(buffer),cur(buffer),id(no)
		{
			cout<<"Created generation "<<id<<endl;
		}
		size_t GetFreeSpace()
		{
			return MAXSIZE - (cur- top);
		}
		void* Allocate(size_t size)
		{
			if(size > GetFreeSpace())
				throw bad_alloc();
		
			char* temp = cur;	//save cur 
			cur += size;		//set cur to next free memory

			cout<<"allocated "<<size<<" at "<< (void*)temp<<" on gen "<<id<<endl;
			return temp;
		}
		~Generation()
		{
			cout<<"destroyed generation "<<id<<endl;	
		}
	};
};
using namespace Ex44;

void main44()
{
	Generation* g1 = new Generation(0);
	
	int* pi = (int*) g1->Allocate(4);
	double* pd = (double*) g1->Allocate(8);
	g1->Allocate(12);

	delete g1;
}