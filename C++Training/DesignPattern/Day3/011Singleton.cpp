#include<iostream>
#include<string>
using namespace std;
namespace nm011
{
	class Gateway
	{
		Gateway()
		{
			cout << "GateWay Security created " << endl;
		}
		~Gateway()
		{
			cout << "GateWay Security Relaxed " << endl;
		}
		static Gateway *head;
		static Gateway * GetGatewayObject()
		{
			if (!head)
				head = new Gateway();
			return head;
		}
		static void ReleaseGateway()
		{
			delete head;
			head = NULL;
		}
	public:
		void CheckSecurityToken()
		{
			cout << "Verifying tokens" << endl;
		}
		friend class Smart;
	};
	Gateway * Gateway::head = NULL;

	class Smart//heap prohibited c++
	{
		static void* operator new(size_t size)
		{
			return NULL;
		}
		static void* operator new[](size_t size)
		{
			return NULL;
		}
			static void operator delete(void *pv)
		{
		}
		static void operator delete[](void *pv)
		{
		}
		Gateway *gate = NULL;//c++11 
		static int count;
	public:
		Smart() :gate(Gateway::GetGatewayObject())
		{
			count++;
		}
		Gateway * operator->()
		{
			return gate;
		}

		~Smart()
		{
			if ((--count) == 0)
				Gateway::ReleaseGateway();
		}
	};
	int Smart::count = 0;

	void tempFun()
	{
		Smart sm;
	}
	void main()
	{
		Smart sm1;
		sm1->CheckSecurityToken();
		tempFun();
		Smart sm2;
	}
}