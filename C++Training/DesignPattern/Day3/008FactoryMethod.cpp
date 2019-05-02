#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm08
{
	class Tax
	{
	public:
		virtual void CalculateTax() = 0;
	};

	class SavingsTax :public Tax
	{

	public:
		void CalculateTax()
		{
			cout << "Savings tax calculation" << endl;
		}
	};

	class CurrentTax :public Tax
	{
	public:
		void CalculateTax()
		{
			cout << "Current tax calculation" << endl;

		}
	};

	class TaxFactory
	{
	protected:
		virtual Tax* GetActualObject() = 0;
	public:
		Tax* GetTaxObject()
		{
			cout << "==========Pre Generic==========" << endl;
			Tax* tax = GetActualObject();
			cout << "==========Post Generic=========" << endl;
			return tax;
		}
	};

	class SavingsTaxFactory :public TaxFactory
	{
	protected:
		virtual Tax* GetActualObject()
		{
			//cout << "%%%%%%%%%%%%%%Savingstax object Pre%%%%%%" << endl;
			cout << "Creating Savings Tax" << endl;
			Tax *tax = new SavingsTax();
			//cout << "%%%%%%%%%%%%%%Savingstax object Post%%%%%" << endl;
			return tax;
		}

	};

	class CurrentTaxFactory :public TaxFactory
	{
	protected:
		virtual Tax* GetActualObject()
		{
			//cout << "##############Current tax object Pre######" << endl;
			cout << "Creating Current Tax" << endl;
			Tax *tax = new CurrentTax();
			//cout << "##############Current tax object Post#####" << endl;
			return tax;
		}

	};


	//-------------------------------------------------
	//typedef TaxFactory* (*FPTR)();
	using  FPTR = TaxFactory* (*)();//c++11
	class FactoryDecider
	{
		static map<int, FPTR> repo;
	public:
		static void Register(int uid, FPTR fp)
		{
			repo[uid] = fp;
		}
		static TaxFactory* GetFactory(int uid)
		{
			return repo[uid]();
		}
	};
	map<int, FPTR> FactoryDecider::repo;

	class Dummy
	{
	public:
		Dummy()
		{
			int j = 100;
			FactoryDecider::Register(100, []()->TaxFactory* {return new SavingsTaxFactory(); });//c++11
			FactoryDecider::Register(200, []()->TaxFactory* {return new CurrentTaxFactory(); });
		}
	}dummy;

	class Account
	{
	protected:
		Tax *tax;
		TaxFactory *factory;
		virtual void ActualJob() = 0;
	public:
		void DoJob()
		{
			cout << "**************************" << endl;
			ActualJob();
			tax = factory->GetTaxObject();
			tax->CalculateTax();
			cout << "__________________________" << endl;
		}
	};
	class SavingsAccount :public Account
	{

	protected:
		void ActualJob()
		{
			cout << "Savings job done " << endl;
			factory = FactoryDecider::GetFactory(100);


		}
	};
	class CurrentAccount :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Current job done " << endl;
			factory = FactoryDecider::GetFactory(200);


		}
	};

	void main()
	{
		SavingsAccount sa;
		CurrentAccount curr;
		sa.DoJob();
		curr.DoJob();
	}
}