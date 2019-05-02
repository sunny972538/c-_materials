#include<iostream>
#include<conio.h>
#include<string>
#include<typeinfo>
using namespace std;
namespace nm10
{
class Employee;
	class IJob
	{
	public:
		virtual void AssignJob(Employee *e)=0;
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


}

namespace nm10_1
{
	using namespace nm10;
	class ChristmasJob:public IJob
	{
	public:
		 void AssignJob(Employee *e)
		 {
			 if(typeid(Manager)==typeid(*e))
			 {
				cout<<"manger job done "<<endl;
			 }
			 else if(typeid(Tester)==typeid(*e))
			 {
				cout<<"Tster job done "<<endl;
			 }
			 else if(typeid(Developer)==typeid(*e))
			 {
				cout<<"Developer job done "<<endl;
			 }
		 }
	};

	IJob* CreateJob()
	{
		return new ChristmasJob();
	}
}

void  main11()
{
	//using namespace nm10;	
	using namespace nm10_1;
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
	getche();
}