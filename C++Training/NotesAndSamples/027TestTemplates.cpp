#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
namespace nm27
{

	
struct IFile
{
	virtual void ProcessFile()=0;
};
typedef IFile* (*FPTR)();
map<int,FPTR> myMap;
struct BMP:IFile
{
	BMP()
	{
		cout<<"BMP Constructed "<<endl;
	}
	void ProcessFile()
	{
		cout<<"BMP processed"<<endl;
	}
};
struct JPEG:IFile
{
	JPEG()
	{
		cout<<"JPEG Constructed "<<endl;
	}
	void ProcessFile()
	{
		cout<<"JPEG processed"<<endl;
	}
};
struct AVI:IFile
{
	AVI()
	{
		cout<<"AVI Constructed "<<endl;
	}
	void ProcessFile()
	{
		cout<<"AVI processed"<<endl;
	}
};

template<typename T>
IFile * CreateFile()
{
	return new T();
}

void DoRegister()
{
	myMap[10]=&CreateFile<BMP>;
	myMap[20]=&CreateFile<JPEG>;
	myMap[30]=&CreateFile<AVI>;
}

IFile * CreateFileFactory(int choice)
{
	FPTR fp=myMap[choice];
	IFile *f=fp();
	return f;
}
}


void main27()
{
	using namespace nm27;
	DoRegister();
	IFile *f=CreateFileFactory(30);
	f->ProcessFile();
	getche();
}