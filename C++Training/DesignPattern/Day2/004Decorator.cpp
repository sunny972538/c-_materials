#include<iostream>
#include<string>
using namespace std;
namespace nm04
{
	class ILogger
	{
	public:
		virtual void LogMsg(string msg) = 0;
	};
	class NullLogger :public ILogger
	{
	public:
		void LogMsg(string msg) override
		{
			//do nothing
		}
	};

	class Helper :public ILogger
	{
		ILogger *il;
	public:
		Helper(ILogger *il) :il(il)
		{
		}
		void LogMsg(string msg) override
		{
			il->LogMsg(msg);
		}
	};


	class ConsoleLogger :public Helper
	{
	public:
		ConsoleLogger(ILogger *il) :Helper(il)
		{

		}
		void LogMsg(string msg) override
		{
			cout << "Console Logger (((( " << msg << " ))))" << endl;
			Helper::LogMsg(msg);
		}
	};
	class FileLogger :public Helper
	{
	public:
		FileLogger(ILogger *il) :Helper(il)
		{

		}
		void LogMsg(string msg) override
		{
			cout << "File Logger [[[[ " << msg << " ]]]]" << endl;
			Helper::LogMsg(msg);
		}
	};
	class ServiceLogger :public Helper
	{
	public:
		ServiceLogger(ILogger *il) :Helper(il)
		{

		}
		void LogMsg(string msg) override
		{
			cout << "Sevice Logger <<<< " << msg << " >>>>" << endl;
			Helper::LogMsg(msg);
		}
	};

	class LoggerFactory
	{
		LoggerFactory()
		{
		}
	public:
		static ILogger* CreateLoggers()
		{
			//return new NullLogger();//Reflection code
			//return new ConsoleLogger();
			//return new FileLogger();
			//return new ServiceLogger();
			return new ServiceLogger(new ConsoleLogger(new FileLogger(new NullLogger)));
		}
	};

	class Account
	{
		ILogger *il;
	protected:

		Account() :il(LoggerFactory::CreateLoggers())
		{
		}
		virtual void ActualJob() = 0;
	public:
		void DoJob()
		{
			ActualJob();
			il->LogMsg("transaction done ");
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