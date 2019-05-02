#include<iostream>
#include<map>
using namespace std;

class Game
{
public:
	virtual ~Game()
	{

	}
};
class Ship :public Game {

};
class Station :public Game {

};
class Asteroid :public Game {

};
map<string, void(*)()> VFTABLE;
class Dummy
{
public:
	Dummy()
	{
		string key1 = typeid(Ship).name();
		string key2 = typeid(Station).name();
		string key3 = typeid(Asteroid).name();
		VFTABLE[key1 + key2] = []() {cout << "Ship collides with station" << endl; };
		VFTABLE[key3 + key2] = []() {cout << "Asteroid collides with station" << endl; };
		VFTABLE[key3 + key1] = []() {cout << "Asteroid collides with Ship" << endl; };
	}
}dummy;

void ProcessCollission(Game& g1, Game& g2)
{
	string key1 = typeid(g1).name();
	string key2 = typeid(g2).name();
	string key = key1 + key2;
	VFTABLE[key]();
	cout << "___________________________________________" << endl;
}



void main()
{
	Ship sp;
	Station st;
	Asteroid ast;

	ProcessCollission(sp, st);
	ProcessCollission(ast, st);
	ProcessCollission(ast,sp);

}