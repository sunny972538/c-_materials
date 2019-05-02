#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm018
{
	class CreditCard
	{
	public:
		virtual void Offer() = 0;
	};
	class NormalCard :public CreditCard
	{
	public:
	public:
		virtual void Offer()
		{
			cout << "Get points filling petrol" << endl;
		}
	};

	class SilverCard :public CreditCard
	{
	public:
		virtual void Offer()
		{
			cout << "(SilverCard)Get Bike on simple EMI" << endl;
		}
	};
	class GoldCard :public CreditCard
	{
	public:
		virtual void Offer()
		{
			cout << "(GoldCard)Get Car on simple EMI" << endl;
		}
	};
	class PlatinumCard :public CreditCard
	{
	public:
		virtual void Offer()
		{
			cout << "(PlatinumCard)Get Cash upto 5 lakhs on your card" << endl;
		}
	};

	class Factory
	{
		map<int, CreditCard*(*)()> repo;
	public:
		void Register(int uid, CreditCard*(*fp)())
		{
			repo[uid] = fp;
		}
		CreditCard * GetCard(int uid)
		{
			CreditCard*(*fp)() = repo[uid];
			CreditCard *creditCard = fp();
			return creditCard;
		}
		operator Factory*()
		{
			return this;
		}
	};

	class Criteria
	{
	public:
		static int GetUid(int amount)
		{
			if (amount <= 100000)
				return 10;
			else if (amount <= 200000)
				return 20;
			else if (amount <= 300000)
				return 30;
			else
				return 40;
		}
	};

	class Account
	{
		int amount;
		CreditCard *card;
		Factory *factory;
	public:
		Account(int amount) :amount(amount)
		{
			//TriggerOffer();
		}
		void TriggerOffer()
		{
			card = factory->GetCard(Criteria::GetUid(this->amount));
			card->Offer();
			cout << "____________________________________" << endl;
		}
		void SetFactory(Factory *factory)
		{
			this->factory = factory;
		}
		void Debit(int amt)
		{
			this->amount -= amt;
			TriggerOffer();
		}
		void Credit(int amt)
		{
			this->amount += amt;
			TriggerOffer();
		}
	};


	void main()
	{
		Factory factory;
		factory.Register(10, []()->CreditCard* {return new NormalCard(); });
		factory.Register(20, []()->CreditCard* {return new SilverCard(); });
		factory.Register(30, []()->CreditCard* {return new GoldCard(); });
		factory.Register(40, []()->CreditCard* {return new PlatinumCard(); });

		Account acc(350000);
		acc.SetFactory(factory);
		acc.Debit(75000);
		acc.Credit(200000);
		acc.Debit(400000);
	}
}