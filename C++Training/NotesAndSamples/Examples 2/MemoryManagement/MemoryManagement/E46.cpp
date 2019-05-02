#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex46
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

	
	struct Managed {} managed;
	
	class HeapManager
	{
	public:
		static vector<Generation*> gen;

		static void* operator new(size_t size)
		{
			Generation* g;

			if(gen.size() > 0)  
				g = gen[gen.size() -1];		 //pick the last gen	

			//if there is no gen or last gen is full
			if((gen.size() == 0) || (g->GetFreeSpace() < size)) 
			{
				g= new Generation(gen.size()); //create a new gen
				gen.push_back(g);			   //add to gen collection	
			}
			
			return g->Allocate(size);
		}
	};
	vector<Generation*> HeapManager::gen;
};
using namespace Ex46;

static void* operator new(size_t size,Managed)
{
	return HeapManager::operator new(size); 
}

void main46()
{
	int* p1 = new(managed) int();

	double* p2 = new(managed) double();

	double* p3 = new(managed) double();
	double* p4 = new(managed) double();

	int* p5 = new(managed) int();
	char* p6 = new(managed) char();

}

















