#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex47
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

	vector<void**> stack;
	
	template<typename T>
	class Ptr
	{
		T* m_p;
	public:
		Ptr(T* p=0):m_p(p)
		{
			stack.push_back((void**) &m_p); 
		}
		Ptr(Ptr<T>& rhs):m_p(rhs.m_p)
		{
			stack.push_back((void**) &m_p); 
		}
		~Ptr()
		{
			m_p =0;
		}
	};

};
using namespace Ex47;

static void* operator new(size_t size,Managed)
{
	return HeapManager::operator new(size); 
}

void main47()
{
	Ptr<int> p1 = new(managed) int();

	Ptr<double> p2 = new(managed) double();
	
	Ptr<int> p3 = new(managed) int();

	Ptr<int> p4 = p3;

	Ptr<double> p5;

}

















