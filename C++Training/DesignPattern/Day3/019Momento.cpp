#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm019
{
	class Info
	{
	public:
		virtual ~Info()
		{
		}
	};
	class ProductInfo :public Info
	{
	public:
		ProductInfo(string ProdName,
			double price) :ProdName(ProdName), price(price)
		{
		}
		string ProdName;
		double price;
	};

	class CustomerInfo :public Info
	{
	public:
		CustomerInfo(string name,
			string city,
			string status) :name(name), city(city), status(status)
		{

		}
		string name;
		string city;
		string status;
	};

	class Cache
	{
	public:
		virtual void Hyderate() = 0;
		virtual void DeHyderate() = 0;
	};

	class CareTaker
	{
		map<Cache*, Info*> repo;
	public:
		void Register(Cache *key, Info* val)
		{
			repo[key] = val;
		}
		Info* GetFromStore(Cache *key)
		{
			return repo[key];
		}
		operator CareTaker*()
		{
			return this;
		}
	};

	class CacheInfra :public Cache
	{
	protected:
		CareTaker * caretaker;
		CacheInfra()
		{

		}
	public:
		void SetCaretaker(CareTaker * caretaker)
		{
			this->caretaker = caretaker;
		}
	};

	class Product :public CacheInfra
	{
	public:
		string ProdId;
		string ProdName;
		double price;
		Product(string ProdId,
			string ProdName,
			double price) :ProdId(ProdId), ProdName(ProdName), price(price)
		{

		}
		friend ostream & operator<<(ostream & os, Product & prod)
		{
			cout << "ProdId=" << prod.ProdId << endl;
			cout << "ProdName=" << prod.ProdName << endl;
			cout << "price=" << prod.price << endl;
			cout << "__________________________________" << endl;
			return os;
		}
		void Hyderate()
		{
			ProductInfo *info = new ProductInfo{ ProdName,price };
			caretaker->Register(this, info);
		}
		void DeHyderate()
		{
			ProductInfo *info = dynamic_cast<ProductInfo *>(caretaker->GetFromStore(this));
			this->ProdName = info->ProdName;
			this->price = info->price;

		}
	};

	class Customer :public CacheInfra
	{
	public:
		string name;
		string city;
		string status;
		Customer(string name,
			string city,
			string status) :name(name), city(city), status(status)
		{

		}
		friend ostream & operator<<(ostream & os, Customer & cust)
		{
			cout << "name=" << cust.name << endl;
			cout << "city=" << cust.city << endl;
			cout << "status=" << cust.status << endl;
			cout << "__________________________________" << endl;
			return os;
		}
		void Hyderate()
		{
			CustomerInfo *info = new CustomerInfo{ name,city,status };
			caretaker->Register(this, info);
		}
		void DeHyderate()
		{
			CustomerInfo *info = dynamic_cast<CustomerInfo *>(caretaker->GetFromStore(this));
			this->name = info->name;
			this->city = info->city;
			this->status = info->status;
		}
	};

	void main()
	{
		Product prod1{ "101","Nail Paint",100.0 };
		Product prod2{ "102","Face Wash",150.0 };

		Customer cust1{ "sachin","mumbai","retired" };
		Customer cust2{ "vvs","hyderabad","retired" };
		Customer cust3{ "virat","delhi","active" };
		cout << prod1 << prod2 << cust1 << cust2;

		CareTaker care;
		prod1.SetCaretaker(care);
		prod2.SetCaretaker(care);
		cust1.SetCaretaker(care);
		cust2.SetCaretaker(care);
		cust3.SetCaretaker(care);
		prod1.Hyderate();
		prod2.Hyderate();
		cust1.Hyderate();
		cust2.Hyderate();
		cust3.Hyderate();
		cout << "***************Momento stored***********************" << endl;
		prod1.price = 1000;
		prod2.ProdName = "Eyebrow polish";
		cust1.name = "tendulkar";
		cust2.city = "Vizag";
		cust3.status = "leave";
		cout << prod1 << prod2 << cust1 << cust2;
		cout << "***************Momento retrieved***********************" << endl;
		prod1.DeHyderate();
		prod2.DeHyderate();
		cust1.DeHyderate();
		cust2.DeHyderate();
		cust3.DeHyderate();
		cout << prod1 << prod2 << cust1 << cust2;

	}
}