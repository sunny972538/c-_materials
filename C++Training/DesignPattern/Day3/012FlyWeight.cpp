#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm012
{
	class MSP
	{
	public:
		string _make;
		string _series;
		string _processor;

		MSP(string make, string series, string processor) :_make(make), _series(series), _processor(processor)
		{
			count++;
		}
		static int count;
	};
	int MSP::count;
	class Factory
	{
		static map<string, MSP*> repo;
	public:
		static string GetKey(string make, string series, string processor)
		{
			string key = make + series + processor;
			if (repo.find(key) == repo.end())
			{
				repo[key] = new MSP(make, series, processor);
			}
			return key;
		}
		static MSP* GetMSP(string key)
		{
			return repo[key];
		}
	};
	map<string, MSP*> Factory::repo;

	class Computer
	{

		string _ram;
		string _hd;
		string _monitor;
		string key;;
	public:
		static int count;
		Computer(string make,
			string series,
			string processor,
			string ram,
			string hd,
			string monitor) :_ram(ram), _hd(hd), _monitor(monitor),
			key(Factory::GetKey(make, series, processor))
		{
			count++;
		}
		friend ostream & operator<<(ostream & os, Computer & comp)
		{
			MSP *msp = Factory::GetMSP(comp.key);
			os << msp->_make << "\t" << msp->_series << "\t" << msp->_processor << "\t" << comp._ram << "\t" << comp._hd << "\t" << comp._monitor << endl;
			os << "______________________________________________________________________________________" << endl;
			return os;
		}
	};
	int Computer::count = 0;

	void main()
	{
		Computer comp1("dell", "lattitude", "intel", "16gb", "1tb", "17inch");
		Computer comp2("dell", "lattitude", "intel", "8gb", "0.5tb", "11inch");
		Computer comp3("hp", "flash", "intel", "16gb", "1tb", "17inch");
		Computer comp4("hp", "flash", "intel", "16gb", "0.5tb", "9inch");
		Computer comp5("hp", "flash", "cellron", "8gb", "1tb", "15inch");
		Computer comp6("hp", "flash", "cellron", "8gb", "0.5tb", "15inch");
		Computer comp7("dell", "lattitude", "intel", "8gb", "2tb", "17inch");
		for (Computer c : { comp1, comp2, comp3, comp4, comp5, comp6, comp7 })//c++11 foreach
		{
			cout << c;
		}
		cout << "Computer Count=" << Computer::count << endl;
		cout << "MSP      Count=" << MSP::count << endl;
	}
}