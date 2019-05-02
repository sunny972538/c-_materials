#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm015 {

	class Client;
	class ChatBroker
	{
		map<string, Client*> repo;
	public:
		void Connect(string key, Client* val)
		{
			repo[key] = val;
		}
		void DispatchMessage(string msg, string from, string to);
		operator ChatBroker*()
		{
			return this;
		}
	};

	class Client
	{
		string _name;
		ChatBroker *chatRoom;
	public:
		Client(string name) :_name(name)
		{
		}
		void SetChatRoom(ChatBroker *chatRoom)
		{
			this->chatRoom = chatRoom;
			chatRoom->Connect(_name, this);
		}

		operator string()
		{
			return _name;
		}
		void SendMessage(string msg, string to = "")
		{
			this->chatRoom->DispatchMessage(msg, _name, to);
		}
		void RecieveMessage(string msg, string from)
		{
			cout << _name << " : Message from " << from << " is [" << msg << "]" << endl;
		}
	};

	void ChatBroker::DispatchMessage(string msg, string from, string to)
	{
		if (to == "")
		{
			auto it1 = repo.begin();
			auto it2 = repo.end();
			while (it1 != it2)
			{
				if (it1->first != from)
				{
					it1->second->RecieveMessage(msg, from);
				}
				it1++;
			}
		}
		else
		{
			Client *client = repo[to];
			client->RecieveMessage(msg, from);
		}
		cout << "________________________________________" << endl;
	}
	void main()
	{
		ChatBroker chat;
		Client yuvraj("yuvraj");
		yuvraj.SetChatRoom(chat);
		Client rahul("rahul");
		rahul.SetChatRoom(chat);
		Client sewag("sewag");
		sewag.SetChatRoom(chat);
		Client saurav("saurav");
		saurav.SetChatRoom(chat);

		yuvraj.SendMessage("We Won the match");

		sewag.SendMessage("Baap Baap hota hai", rahul);
	}
}