#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm014
{
	class ISubscribe
	{
	public:
		virtual void Information(string msg) = 0;
		operator ISubscribe*()
		{
			return this;
		}
	};

	class Observer
	{
		map<string, ISubscribe*> repo;
	protected:
		virtual string MessageMassage(string msg) = 0;
	public:
		void AttachSubscriber(string key, ISubscribe* val)
		{
			repo[key] = val;
		}

		void SendMessage(string msg)
		{
			auto it1 = repo.begin();
			auto it2 = repo.end();
			cout << "__________________Start callbacks____________________" << endl;
			while (it1 != it2)
			{
				it1->second->Information(msg);
				it1++;
			}
			cout << "___________________End callbacks____________________" << endl;
		}

		operator Observer*()
		{
			return this;
		}
	};
	class CricketObserver :public Observer
	{
	protected:
		string MessageMassage(string msg) override
		{
			return "CrickInfo supplied ( " + msg + ")";
		}
	};
	class ElectionObserver :public Observer
	{
	protected:
		string MessageMassage(string msg) override
		{
			return "Election Commission Information ( " + msg + ")";
		}
	};
	class EntertainmentObserver :public Observer
	{
	protected:
		string MessageMassage(string msg) override
		{
			return "Bollywood News ( " + msg + ")";
		}
	};

	class Publisher
	{
	protected:
		Observer *observer;
		Publisher() :observer(NULL)
		{
		}
	public:
		void SetObserver(Observer *observer)
		{
			this->observer = observer;
		}

	};
	class Cricket :public Publisher
	{
		string score;
	public:
		void SetScore(string score)
		{
			this->score = score;
			if (observer)
			{
				observer->SendMessage(score);
			}
		}
	};
	class Election :public Publisher
	{
		string result;
	public:
		void SetResult(string result)
		{
			this->result = result;
			if (observer)
			{
				observer->SendMessage(result);
			}
		}
	};

	class Entertainment :public Publisher
	{
		string news;
	public:
		void SetNews(string news)
		{
			this->news = news;
			if (observer)
			{
				observer->SendMessage(news);
			}
		}
	};

	class NDTV :public ISubscribe
	{
	public:
		void Information(string msg)
		{
			cout << "NDTV : [" << msg << "]" << endl;
		}
	};

	class DD :public ISubscribe
	{
	public:
		void Information(string msg)
		{
			cout << "DD : <" << msg << ">" << endl;
		}
	};

	class Times :public ISubscribe
	{
	public:
		void Information(string msg)
		{
			cout << "Times : {" << msg << "}" << endl;
		}
	};

	void main()
	{
		NDTV ndtv;
		DD dd;
		Times times;

		CricketObserver cricObs;
		cricObs.AttachSubscriber("ndtv", ndtv);
		cricObs.AttachSubscriber("times", times);

		ElectionObserver elecObs;
		elecObs.AttachSubscriber("ndtv", ndtv);
		elecObs.AttachSubscriber("dd", dd);

		EntertainmentObserver entObs;
		entObs.AttachSubscriber("ndtv", ndtv);
		entObs.AttachSubscriber("times", times);

		Cricket cric;
		cric.SetObserver(cricObs);
		Election elec;
		elec.SetObserver(elecObs);
		Entertainment entm;
		entm.SetObserver(entObs);

		cric.SetScore("India 169");

		elec.SetResult("Governor + Cong + bjp + jds");

		entm.SetNews("Virat on Leave");

	}

}