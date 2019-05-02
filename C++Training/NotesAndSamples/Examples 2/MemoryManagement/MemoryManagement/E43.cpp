#include<iostream>
#include<new>
#include<memory>
using namespace std;

namespace Ex43
{
	struct SB;

	struct SA
	{
		auto_ptr<SB> m_sb;
	};
	struct SB
	{
		auto_ptr<SA> m_sa;
	};
};
using namespace Ex43;

void main43()
{
	auto_ptr<SA> p1(new SA);

	auto_ptr<SB> p2(new SB);
	
	p1->m_sb=p2;
	p2->m_sa=p1;
}
