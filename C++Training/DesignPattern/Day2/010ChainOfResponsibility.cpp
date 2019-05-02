#include<iostream>
#include<string>
using namespace std;
namespace nm010
{
	class Approver
	{
	protected:
		Approver *sucessor;
		Approver() :sucessor(NULL)
		{

		}
	public:
		void SetSucessor(Approver *sucessor)
		{
			this->sucessor = sucessor;
		}
		virtual void ProcessLoan(int amount) = 0;
		void CallSucessor(int amt)
		{
			if (sucessor)
			{
				this->sucessor->ProcessLoan(amt);
			}
		}
	};

	class Cashier :public Approver
	{
	public:
		void ProcessLoan(int amount)
		{
			if (amount < 100000)
			{
				cout << "Cashier processed loan of " << amount << endl;
			}
			else
			{
				cout << "Cashier (Cannot) processed loan of " << amount << endl;
				CallSucessor(amount);
			}
		}
	};

	class Manager :public Approver
	{
	public:
		void ProcessLoan(int amount)
		{
			if (amount < 200000)
			{
				cout << "Manager processed loan of " << amount << endl;
			}
			else
			{
				cout << "Manager (Cannot) processed loan of " << amount << endl;
				CallSucessor(amount);
			}
		}
	};

	class Director :public Approver
	{
	public:
		void ProcessLoan(int amount)
		{
			if (amount < 300000)
			{
				cout << "Director processed loan of " << amount << endl;
			}
			else
			{
				cout << "Director (Cannot) processed loan of " << amount << endl;
				CallSucessor(amount);
			}
		}
	};

	void main()
	{
		Cashier john;
		Manager jack;
		Director ravi;
		john.SetSucessor(&jack);
		jack.SetSucessor(&ravi);

		john.ProcessLoan(350000);
	}
}