#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm8
{
	class ILogger
	{
	public:
		virtual void LogMessage(string str)=0;
	};
	
	class Dummy:public ILogger
	{
	public:
		void LogMessage(string str)
		{
		}
	};

	class Helper:public ILogger
	{
		ILogger *il;
	public:
		Helper(ILogger *il)
		{
			this->il=il;
		}
		void LogMessage(string str)
		{
			il->LogMessage(str);
		}
	};
	class ConsoleLogger:public Helper
	{
	public:
		ConsoleLogger(ILogger *il):Helper(il)
		{
		}
		void LogMessage(string str)
		{
			Helper::LogMessage(str);
			cout<<"ConsoleLogger log msg .."<<str<<endl;
		}
	};
	class EventLogger:public Helper
	{
	public:
		EventLogger(ILogger *il):Helper(il)
		{
		}
		void LogMessage(string str)
		{
			Helper::LogMessage(str);
			cout<<"EventLogger log msg .."<<str<<endl;
		}
	};

	class ServiceLogger:public Helper
	{
	public:
		ServiceLogger(ILogger *il):Helper(il)
		{
		}
		
		void LogMessage(string str)
		{
			Helper::LogMessage(str);
			cout<<"ServiceLogger log msg .."<<str<<endl;
		}
	};

	/*class LoggersRepository:public ILogger
	{
		ServiceLogger s;
		ConsoleLogger c;
		EventLogger e;
	public:
		void LogMessage(string str)
		{
			s.LogMessage(str);
			c.LogMessage(str);
			e.LogMessage(str);
		}
	};*/
	ILogger * createLogger()//creators
	{
		return new ConsoleLogger(new EventLogger(new ServiceLogger(new Dummy())));
		//return new ConsoleLogger(new EventLogger(new Dummy()));
	}
}
void main8()
{
	using namespace nm8;
	ILogger *l=createLogger();
	l->LogMessage("India is great");

	getche();
}