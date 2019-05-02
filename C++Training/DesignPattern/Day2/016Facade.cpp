#include<iostream>
#include<string>
#include<map>
using namespace std;

class Authentication
{
public:
	void STSToken()
	{
		cout << "Verified Security token service " << endl;
	}
	void BioToken()
	{
		cout << "Bio Security token Verified " << endl;
	}
	void Certificate()
	{
		cout << "Certificate Verified " << endl;
	}
};

class Authorization
{
public:
	void RoleBased()
	{
		cout << "Issued tokens based on roles" << endl;
	}
	void ClaimBased()
	{
		cout << "Issued tokens based on claim sets" << endl;
	}
};
class MessageRead
{
public:
	void JsonRead()
	{
		cout << "Json read" << endl;
	}
	void XmlRead()
	{
		cout << "Xml read" << endl;
	}
	void MgraphRead()
	{
		cout << "mgraph read" << endl;
	}
};
class Channel
{
public:
	void WsChannel()
	{
		cout << "upgraded to WS" << endl;
	}
	void HttpsChannel()
	{
		cout << "upgraded to Https" << endl;
	}
};


class Facade
{
	Authentication authd;
	Authorization authz;
	MessageRead read;
	Channel channel;
public:
	void BioRoleJsonHttps()
	{
		authd.BioToken();
		authz.RoleBased();
		read.JsonRead();
		channel.HttpsChannel();
	}
	void STSClaimXMLWS()
	{
		authd.STSToken();
		authz.ClaimBased();
		read.XmlRead();
		channel.WsChannel();
	}
};

void main()
{
	Facade facade;
	facade.BioRoleJsonHttps();
	cout << "_____________________________" << endl;
	facade.STSClaimXMLWS();
}