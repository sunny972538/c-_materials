#include<iostream>
#include<string>
#include<list>
using namespace std;
namespace nm020
{
	class ITree
	{
	public:
		virtual void Display() = 0;
	};

	class Division :public ITree
	{
		string _name;
	public:
		Division(string name) :_name(name)
		{
		}
		void Display()
		{
			cout << "\t\t" << _name << endl;
		}
	};



	class DivisionList :list<Division*>, public ITree
	{
	public:

		void AddDivision(Division *div)
		{
			push_back(div);
		}
		void Display()
		{
			auto it1 = this->begin();
			auto it2 = this->end();
			while (it1 != it2)
			{
				(*it1)->Display();
				it1++;
			}
		}
	};



	class League :public ITree
	{
		string _name;
		DivisionList *divList;
	public:
		League(string name) :_name(name), divList(new DivisionList())
		{
		}
		void AddDivision(Division *division)
		{
			divList->AddDivision(division);
		}
		void Display()
		{
			cout << "\t" << _name << endl;
			divList->Display();
		}
	};

	class LeagueList :list<League*>, public ITree
	{
	public:

		void AddLeague(League *league)
		{
			push_back(league);
		}
		void Display()
		{
			auto it1 = this->begin();
			auto it2 = this->end();
			while (it1 != it2)
			{
				(*it1)->Display();
				it1++;
			}
		}
	};


	void main()
	{
		LeagueList leagueList;
		League *league;
		Division *div;
		leagueList.AddLeague(league = new League("League A"));
		league->AddDivision(div = new Division("Div Alpha"));

		league->AddDivision(div = new Division("Div Beta"));
		league->AddDivision(div = new Division("Div Gama"));
		league->AddDivision(div = new Division("Div Delta"));

		leagueList.AddLeague(league = new League("League B"));
		league->AddDivision(div = new Division("Div South"));
		league->AddDivision(div = new Division("Div North"));
		league->AddDivision(div = new Division("Div West"));
		league->AddDivision(div = new Division("Div East"));

		leagueList.Display();

	}
}