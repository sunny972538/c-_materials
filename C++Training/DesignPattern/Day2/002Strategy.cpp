#include<iostream>
using namespace std;
namespace nm02
{
	class DB
	{
	public:
		virtual void OpenDb() = 0;
		/*{
			cout << "Open Db" << endl;
		}*/
		virtual void CloseDb() = 0;
		/*{
			cout << "Close Db" << endl;
		}*/
	};
	class NullDb :public DB
	{
	public:
		void OpenDb() override
		{

		}
		void CloseDb() override
		{

		}
	};
	class Account
	{
	protected:
		//DB *db=nullptr;//c++11 onwards(member initialization)
		DB *db = new NullDb();
		virtual void ActualJob() = 0;
	public:
		void SetDb(DB *db)
		{
			delete this->db;
			this->db = db;
		}
		void DoJob()//flow skeleton
		{
			//if (db != nullptr)
			//{
			db->OpenDb();
			ActualJob();
			db->CloseDb();
			//}
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


	class OraDb :public DB
	{
	public:
		void OpenDb() override
		{
			cout << "Oracle Open" << endl;
		}
		void CloseDb() override
		{
			cout << "Oracle Close" << endl;
		}
	};

	class SqlDb :public DB
	{
	public:
		void OpenDb() override
		{
			cout << "Sql Open" << endl;
		}
		void CloseDb() override
		{
			cout << "Sql Close" << endl;
		}
	};

	void main()
	{
		OraDb ora;
		SqlDb sql;
		SavingsAccount sa;
		sa.SetDb(&ora);
		CurrentAccount curr;
		curr.SetDb(&sql);
		sa.DoJob();
		curr.DoJob();
	}
}