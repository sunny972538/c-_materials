#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
namespace nm26
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

IFile * CreateBMP()
{
	return new BMP();
}
IFile * CreateJPeg()
{
	return new JPEG();
}
IFile * CreateAvi()
{
	return new AVI();
}

void DoRegister()
{
	myMap[10]=&CreateBMP;
	myMap[20]=&CreateJPeg;
	myMap[30]=&CreateAvi;
}

IFile * CreateFileFactory(int choice)
{
	FPTR fp=myMap[choice];
	IFile *f=fp();
	return f;
}

}


void main26()
{
	using namespace nm26;
	DoRegister();
	IFile *f=CreateFileFactory(30);
	f->ProcessFile();
	getche();
}