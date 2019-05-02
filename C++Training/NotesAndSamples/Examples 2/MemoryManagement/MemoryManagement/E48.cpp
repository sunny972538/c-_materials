#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex48
{
	#define MAXSIZE 10

	struct SA
	{
		SA()	{ cout<<"SA created"<<endl;	}
		~SA() { cout<<"Destroyed"<<endl;	}
	};

	struct MetaData
	{
		void* Address;
		size_t size;
		MetaData(void* a,size_t s):Address(a),size(s) {}
	};

	struct Managed {} managed;
	
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



	
	class HeapManager
	{
	public:
		static vector<Generation*> gen;

		static void* Allocate(size_t size)
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

	
	struct GC
	{
		static void Collect(int no)
		{
			//pick the generation
			Generation* g = HeapManager::gen[no];

			//traverse all objects in g
			for(int i= 0;i < g->objects.size();i++)
			{
				//traverse all pointers on stack
				for(int j=0; j < stack.size(); j++) 
				{
					void** p = stack[j]; 
					void*  pobj = g->objects[i].Address;
					//check if the stack pointer is pointing the current heap object	
					if(*p == pobj)
					{
						//move to a different memory
						void* mem =  HeapManager::Allocate(g->objects[i].size); 
						memcpy(mem,pobj,g->objects[i].size);
						//update all stack pointes
						*p = mem; //1
						cout<<"object "<<pobj<<" survived & moved to "<<mem<<endl;
					}
				}
			}
			delete g;
		}
	};
};
using namespace Ex48;

static void* operator new(size_t size,Managed)
{
	return  HeapManager::Allocate(size);  
}


void main48()
{
	Ptr<int> p1 = new(managed) int();

	Ptr<char> p8 = new(managed) char();

	{
		Ptr<int> p2 = new(managed) int();
		Ptr<char> p6 = new(managed) char();
	}

	Ptr<char> p7 = new(managed) char();

	Ptr<int> p3 = new(managed) int();


	SA* naked= new(managed) SA();
	Ptr<SA> p4 =naked; 

	Ptr<double> p5= new(managed) double();


	naked->SA::~SA();
	cout<<"****************************"<<endl;
	GC::Collect(0); 
}



















