#include<iostream>
using namespace std;
namespace nm01
{
	class DB
	{
	public:
		void OpenDb()
		{
			cout << "Open Db" << endl;
		}
		void CloseDb()
		{
			cout << "Close Db" << endl;
		}
	};
	class Account
	{
	protected:
		DB db;
		virtual void ActualJob() = 0;
	public:
		void DoJob()//flow skeleton
		{
			db.OpenDb();
			ActualJob();
			db.CloseDb();
			cout << "__________________________" << endl;
		}
	};
	class SavingsAccount :public Account
	{

	protected:
		void ActualJob()
		{
			cout << "Savings job done " << endl;
		}
	};
	class CurrentAccount :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Current job done " << endl;
		}
	};

	//---------------------------------------------

	void main()
	{
		SavingsAccount sa;
		CurrentAccount curr;
		sa.DoJob();
		curr.DoJob();
	}
}