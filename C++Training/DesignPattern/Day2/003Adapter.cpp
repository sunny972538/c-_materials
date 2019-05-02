#include<iostream>
#include<string>
using namespace std;
namespace nm03
{
	class DB
	{
	public:
		virtual void OpenDb() = 0;
		virtual void CloseDb() = 0;

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

	class ISMSProvider
	{
	public:
		virtual void PushMessage(string msg) = 0;
	};



	class SMS
	{
		SMS()
		{
		}
		static ISMSProvider *provider;
	public:
		static void SetProvider(ISMSProvider *prov)
		{
			provider = prov;
		}
		static void SendSMS(string msg)
		{
			provider->PushMessage(msg);
		}
	};
	ISMSProvider * SMS::provider = NULL;
	class Account
	{
	protected:
		Account()
		{
			//RAII
		}
		DB *db = new NullDb();
		virtual void ActualJob() = 0;

	public:
		void SetDb(DB *db)
		{
			delete this->db;
			this->db = db;
		}
		void DoJob()
		{
			db->OpenDb();
			ActualJob();
			db->CloseDb();

			cout << "__________________________" << endl;
		}
	};
	class SavingsAccount :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Savings job done " << endl;
			SMS::SendSMS("Savings Job SMS");

		}
	};
	class CurrentAccount :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Current job done " << endl;
			SMS::SendSMS("Current Job SMS");
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


	class BSNL :public ISMSProvider
	{
	public:
		void PushMessage(string msg)
		{
			cout << "BSNL Sent (" << msg << ")" << endl;
		}
	};
	class Verizon :public ISMSProvider
	{
	public:
		void PushMessage(string msg)
		{
			cout << "Verizon Sent (" << msg << ")" << endl;
		}
	};

	class ISMS7gProvider
	{
	public:
		virtual void DispatchMessage(string msg) = 0;
	};

	class Jio :public ISMS7gProvider
	{
	public:
		void DispatchMessage(string msg)
		{
			cout << "Jio Sent ***************" << msg << "*************" << endl;
		}
	};

	class SmsAdapter :public ISMSProvider
	{
		ISMS7gProvider *prov;
	public:
		SmsAdapter(ISMS7gProvider *prov) :prov(prov)
		{
		}
		void PushMessage(string msg)
		{
			prov->DispatchMessage(msg);
		}

	};

	void main()
	{
		SMS::SetProvider(new SmsAdapter(new Jio()));
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