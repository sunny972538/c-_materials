#include<iostream>
#include<string>
using namespace std;

class IReader
{
public:
	virtual void CreateReader() = 0;
	virtual void AttachReader() = 0;
};

class IAdapter
{
public:
	virtual void CreateAdapter() = 0;
	virtual void AttachAdapter() = 0;
};
class ICommand
{
public:
	virtual void CreateCommand() = 0;
	virtual void AttachCommand() = 0;
};

class IFactory
{
public:
	virtual IReader * BuildReader() = 0;
	virtual IAdapter * BuildAdapter() = 0;
	virtual ICommand* BuildCommand() = 0;
};

class OraReader:public IReader
{
public:
	 void CreateReader() override
	{
		cout << "Ora Reader created" << endl;
	}
	 void AttachReader() override
	{
		cout << "Ora Reader attached" << endl;
	}
};
class OraAdapter:public IAdapter
{
public:
	 void CreateAdapter() override
	{
		 cout << "Ora Adapter created" << endl;
	}
	void AttachAdapter() override
	{
		cout << "Ora Adapter attached" << endl;
	}
};
class OraCommand:public ICommand
{
public:
	void CreateCommand() override
	{
		cout << "Ora Command created" << endl;
	}
	void AttachCommand() override
	{
		cout << "Ora Command attached" << endl;
	}
};


class OraFactory:public IFactory
{
public:
	 IReader * BuildReader() override
	{
		 return new OraReader();
	}
	 IAdapter * BuildAdapter() override
	{
		 return new OraAdapter();
	}
	 ICommand* BuildCommand() override
	{
		 return new OraCommand();
	}
};


class SqlReader :public IReader
{
public:
	void CreateReader() override
	{
		cout << "Sql Reader created" << endl;
	}
	void AttachReader() override
	{
		cout << "Sql Reader attached" << endl;
	}
};
class SqlAdapter :public IAdapter
{
public:
	void CreateAdapter() override
	{
		cout << "Sql Adapter created" << endl;
	}
	void AttachAdapter() override
	{
		cout << "Sql Adapter attached" << endl;
	}
};
class SqlCommand :public ICommand
{
public:
	void CreateCommand() override
	{
		cout << "Sql Command created" << endl;
	}
	void AttachCommand() override
	{
		cout << "Sql Command attached" << endl;
	}
};

class SqlFactory :public IFactory
{
public:
	IReader * BuildReader() override
	{
		return new SqlReader();
	}
	IAdapter * BuildAdapter() override
	{
		return new SqlAdapter();
	}
	ICommand* BuildCommand() override
	{
		return new SqlCommand();
	}
};
void main()
{
	IFactory *factory = new OraFactory();
	IReader *reader = factory->BuildReader();
	reader->CreateReader();
	reader->AttachReader();
	IAdapter *adp = factory->BuildAdapter();
	adp->CreateAdapter();
	adp->AttachAdapter();
	ICommand *cmd = factory->BuildCommand();
	cmd->CreateCommand();
	cmd->AttachCommand();
}