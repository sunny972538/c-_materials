#include<iostream>
#include<conio.h>
#include<string>
#include<typeinfo>
using namespace std;
namespace nm11
{
class Employee;
class Tester;
class Developer;
class Manager;
	class IJob
	{
	public:
		virtual void AssignJob(Employee *e)=0;
		virtual void AssignJob(Manager *e)=0;
		virtual void AssignJob(Developer *e)=0;
		virtual void AssignJob(Tester *e)=0;
	};

	class Employee
	{
	protected:
		IJob *job;
	public:
		void SetJob(IJob *j)
		{
			job=j;
		}
		virtual void DoJob()=0;
		virtual ~Employee()
		{
		}
	};
	class Manager:public Employee
	{
	public:
		void DoJob()
		{
			job->AssignJob(this);
		}
	};
	class Developer:public Employee
	{
	public:
		void DoJob()
		{
			job->AssignJob(this);
		}
	};
	class Tester:public Employee
	{
	public:
		void DoJob()
		{
			job->AssignJob(this);
		}
	};

	class Designer:public Employee
	{
	public:
		void DoJob()
		{
			job->AssignJob(this);
		}
	};

}

namespace nm11_1
{
	using namespace nm11;
	class ChristmasJob:public IJob
	{
	public:
		virtual void AssignJob(Employee *e)
		{
			cout<<"General job done "<<endl;
		}
		virtual void AssignJob(Manager *e)
		{
			cout<<"Manager job done "<<endl;
		}
		virtual void AssignJob(Developer *e)
		{
			cout<<"Developer job done "<<endl;
		}
		virtual void AssignJob(Tester *e)
		{
			cout<<"Tester job done "<<endl;
		}
	};

	IJob* CreateJob()
	{
		return new ChristmasJob();
	}
}

void  main12()
{
	//using namespace nm10;	
	using namespace nm11_1;
	IJob *jb=CreateJob();
	Employee *man=new Manager();
	 //cout<<"test for "<<typeid(man).name()<<endl;
	man->SetJob(jb);
	man->DoJob();
	Employee *test=new Tester();
	test->SetJob(jb);
	test->DoJob();
	Employee *dev=new Developer();
	dev->SetJob(jb);
	dev->DoJob();
	Employee *dsg=new Designer();
	dsg->SetJob(jb);
	dsg->DoJob();
	getche();
}