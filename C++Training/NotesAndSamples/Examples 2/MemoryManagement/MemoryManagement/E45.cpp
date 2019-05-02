#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex45
{
	#define MAXSIZE 255

	struct MetaData
	{
		void* Address;
		size_t size;
		MetaData(void* a,size_t s):Address(a),size(s) {}
	};

	class Generation
	{
	public:
		char  buffer[MAXSIZE];
		char* top;
		char* cur;
		int   id;
		vector<MetaData> objects;
	
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

			//save objects address & size
			objects.push_back(MetaData(temp,size)); 

			cout<<"allocated "<<size<<" at "<< (void*)temp<<" on gen "<<id<<endl;
			return temp;
		}
		~Generation()
		{
			cout<<"destroyed generation "<<id<<endl;	
		}
	};
};
using namespace Ex45;

void main45()
{
	Generation* g1 = new Generation(0);
	
	int* pi = (int*) g1->Allocate(4);
	double* pd = (double*) g1->Allocate(8);
	g1->Allocate(12);

	delete g1;
}