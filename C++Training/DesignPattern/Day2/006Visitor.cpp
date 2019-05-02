#include<iostream>
#include<string>
#include<stack>
using namespace std;
namespace nm06
{
	class Account;
	class Savings;
	class Current;
	class DMat;

	class IUI
	{
	public:
		virtual void ShowUI(Account*) = 0;
		virtual void ShowUI(Savings*) = 0;
		virtual void ShowUI(Current*) = 0;
		virtual void ShowUI(DMat*) = 0;
	};

	class Account
	{
	protected:
		virtual void ActualJob() = 0;
		IUI *ui;
		Account() :ui(NULL)
		{

		}
	public:
		void SetUI(IUI *ui)
		{
			this->ui = ui;
		}
		void DoJob()
		{
			cout << "start" << endl;
			ActualJob();
			cout << "complete" << endl;
			cout << "____________________________" << endl;
		}
	};

	class Savings :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Savings job done " << endl;
			ui->ShowUI(this);
		}
	};

	class Current :public Account
	{
	protected:
		void ActualJob()
		{
			ui->ShowUI(this);
			cout << "Current job done " << endl;
		}
	};
	class DMat :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "DMat job done " << endl;
			ui->ShowUI(this);
		}
	};
	class Child :public Account
	{
	protected:
		void ActualJob()
		{
			cout << "Child job done " << endl;
			ui->ShowUI(this);
		}
	};
	//---------------------------------

	class ChristmasUI :public IUI
	{
	public:
		void ShowUI(Account*) override
		{
			cout << "Christmas General UI" << endl;
		}
		void ShowUI(Savings*) override
		{
			cout << "Christmas Savings UI" << endl;
		}
		void ShowUI(Current*) override
		{
			cout << "Christmas Current UI" << endl;
		}
		void ShowUI(DMat*) override
		{
			cout << "Christmas DMat UI" << endl;
		}
	};

	class DeepavaliUI :public IUI
	{
	public:
		void ShowUI(Account*) override
		{
			cout << "Deepavali General UI" << endl;
		}
		void ShowUI(Savings*) override
		{
			cout << "Deepavali Savings UI" << endl;
		}
		void ShowUI(Current*) override
		{
			cout << "Deepavali Current UI" << endl;
		}
		void ShowUI(DMat*) override
		{
			cout << "Deepavali DMat UI" << endl;
		}
	};
	void main()//bank app
	{
		IUI *ui = new DeepavaliUI();
		Savings sa;
		sa.SetUI(ui);
		Current curr;
		curr.SetUI(ui);
		DMat dm;
		dm.SetUI(ui);
		Child child;
		child.SetUI(ui);
		sa.DoJob();
		curr.DoJob();
		dm.DoJob();
		child.DoJob();
	}
}