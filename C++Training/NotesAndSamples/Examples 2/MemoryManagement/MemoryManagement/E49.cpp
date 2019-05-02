#include<iostream>
#include<vector>
#include<new>
using namespace std;

namespace Ex49
{
	#define SIZE 10
	
	struct Memory	
	{		
		char buffer[SIZE];		
		Memory()	{ cout<<"Memory Created"<<endl;	}
	};

	class MemoryPool
	{
		vector<Memory*> m_pool;
	public:
		Memory* Get()
		{
			if(m_pool.size() == 0)
				return new Memory();
			else
			{
				Memory* memory = m_pool.back();
				m_pool.pop_back();
				return memory;
			}
		}
		void Reclaim(Memory* memory)
		{
			m_pool.push_back(memory);
		}
		~MemoryPool()
		{
			//cleanup pool	
		}
	};
};
using namespace Ex49;

void main49()
{
	MemoryPool pool;

	Memory* m1 = pool.Get();
	pool.Reclaim(m1);
	
	Memory* m2 = pool.Get();
	pool.Reclaim(m2);
}