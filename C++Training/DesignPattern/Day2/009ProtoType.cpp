#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm09
{
	class Register
	{
	}reg;
	class ObjectPool
	{
	protected:
		int uid;
		virtual ObjectPool* Clone(int uid) = 0;
		static ObjectPool* head;
		ObjectPool *next;
		ObjectPool()
		{
		}
		ObjectPool(const ObjectPool &par)
		{
		}
		ObjectPool(Register&, int uid) :uid(uid)
		{
			next = head;
			head = this;
		}
	public:
		virtual void DoJob() = 0;
		static ObjectPool* CreateObj(int uid)
		{
			for (ObjectPool *trav = head; trav; trav = trav->next)
			{
				ObjectPool *temp = trav->Clone(uid);
				if (temp)
					return temp;
			}
			return NULL;
		}
	};
	ObjectPool* ObjectPool::head;

	class Converter :public ObjectPool
	{
	protected:
		ObjectPool* Clone(int uid) override
		{
			if (10 == uid)
				return new Converter(*this);
			return NULL;
		}
	public:
		Converter(const Converter& par)
		{
		}
		Converter(Register&r) :ObjectPool(r, 10)
		{

		}

		void DoJob() override
		{
			cout << "Converter info ready" << endl;
		}
	};

	class Provider :public ObjectPool
	{
	protected:
		ObjectPool* Clone(int uid) override
		{
			if (20 == uid)
				return new Provider(*this);
			return NULL;
		}
	public:
		Provider(const Provider& par)
		{
		}
		Provider(Register&r) :ObjectPool(r, 20)
		{

		}

		void DoJob() override
		{
			cout << "Provider info ready" << endl;
		}
	};

	class InterestRate :public ObjectPool
	{
	protected:
		ObjectPool* Clone(int uid) override
		{
			if (30 == uid)
				return new InterestRate(*this);
			return NULL;
		}
	public:
		InterestRate(const InterestRate& par)
		{
		}
		InterestRate(Register&r) :ObjectPool(r, 30)
		{

		}

		void DoJob() override
		{
			cout << "Interest info ready" << endl;
		}
	};

	class Dummy
	{
	public:
		Dummy()
		{
			//object pool construction
			new Converter(reg);
			new Provider(reg);
			new InterestRate(reg);
		}
	}dummy;

	//10 nconverter
	//20 provider
	//30 interest
	void main()
	{
		//type inference c++11
		auto obj = ObjectPool::CreateObj(20);
		obj->DoJob();
	}
}