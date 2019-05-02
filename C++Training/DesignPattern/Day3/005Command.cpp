#include<iostream>
#include<string>
#include<stack>
using namespace std;
namespace nm05
{
	class Account
	{
		int amount;
	public:
		Account(int amount) :amount(amount)
		{
		}
		void Debit(int amount)
		{
			this->amount -= amount;
		}
		void Credit(int amount)
		{
			this->amount += amount;
		}
		int GetBalance()
		{
			return amount;
		}
	};

	class AccountCMD
	{
	protected:
		Account &acc;
	public:
		AccountCMD(Account &acc) :acc(acc)
		{
		}
		virtual void Execute() = 0;
		virtual void UnExecute() = 0;
	};
	class DepositCMD :public AccountCMD
	{
		int amount;
	public:
		DepositCMD(Account &acc, int amount) :AccountCMD(acc), amount(amount)
		{
		}
		DepositCMD(const DepositCMD&) = delete;
		void Execute() override
		{
			acc.Credit(amount);
		}
		void UnExecute() override
		{
			acc.Debit(amount);
		}
	};
	class WithdrawCMD :public AccountCMD
	{
		int amount;
	public:
		WithdrawCMD(const WithdrawCMD&) = delete;
		WithdrawCMD(Account &acc, int amount) :AccountCMD(acc), amount(amount)
		{
		}
		void Execute() override
		{
			acc.Debit(amount);
		}
		void UnExecute() override
		{
			acc.Credit(amount);
		}
	};

	class TranHelper
	{
		Account & acc;
		stack<AccountCMD*> repo;
	public:
		TranHelper(Account & acc) :acc(acc)
		{
		}
		void Credit(int amount)
		{
			AccountCMD *cmd = new DepositCMD(acc, amount);
			cmd->Execute();
			repo.push(cmd);
		}
		void Debit(int amount)
		{
			AccountCMD *cmd = new WithdrawCMD(acc, amount);
			cmd->Execute();
			repo.push(cmd);
		}
		void Undo()
		{
			AccountCMD *cmd = repo.top();
			repo.pop();
			cmd->UnExecute();
		}
	};

	//---------------------------------------------
	void main()
	{
		Account acc(5000);
		TranHelper trans(acc);
		trans.Credit(1000);
		trans.Credit(4000);
		trans.Debit(3000);
		trans.Credit(2000);
		trans.Debit(1000);
		trans.Undo();
		trans.Undo();
		cout << "The Balance is " << acc.GetBalance() << endl;
	}
}