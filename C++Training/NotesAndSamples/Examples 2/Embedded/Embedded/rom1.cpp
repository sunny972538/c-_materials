#include<iostream>
using namespace std;

#define NULL 0

class Dict
{
public:
	typedef enum {german,french} Language;

	Dict(Language lang){}
	const char* fromEnglish(const char* english) const{return"fgdf";}
	const char* toEnglish(const char* foreign) const{return"fgdf";}
private:
	class DictTable
	{
	public:
		const char* fromEnglish(const char* english) const{return"fgdf";}
		const char* toEnglish(const char* foreign) const{return"fgdf";}
		enum { DictSize = 3 };
		struct
		{
			const char* english;
			const char* foreign;
		} table[DictSize];
	};
	const static DictTable DictTables[];
	Language myLanguage;
};

const Dict::DictTable Dict::DictTables[]=
{
	{
		{
			{"yes", "ja"},
			{"no", "nein"},
			{NULL, NULL}
		}
	},
	{
		{
			{"yes", "oui"},
			{"no", "non"},
			{NULL, NULL}
		}
	}
};
// ... /
void main()
{
	Dict germanDict(Dict::german);
	cout<<germanDict.fromEnglish("yes");
}