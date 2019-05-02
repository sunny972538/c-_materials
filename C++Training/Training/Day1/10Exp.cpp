#include<iostream>
using namespace std;

class CA
{
public:
	CA()
	{
		cout << "CA Ctor" << endl;
		throw 100;
	}
	static void* operator new(size_t size)
	{
		cout << "CA::operator new " << endl;
		return malloc(size);
	}
	static void operator delete(void* pv)
	{
		cout << "CA::operator delete " << endl;
		free(pv);
	}
	~CA()
	{
		cout << "CA D-tor" << endl;
	}
};

void main()
{
	CA *ptr = NULL;
	try
	{
		ptr = new CA();
		/*
				push	1
				call	??2CA@@SAPAXI@Z				; CA::operator new
				add	esp, 4
				mov	DWORD PTR tv132[ebp], eax
				mov	eax, DWORD PTR tv132[ebp]
				mov	DWORD PTR $T4[ebp], eax
				mov	BYTE PTR __$EHRec$[ebp+12], 1
				cmp	DWORD PTR $T4[ebp], 0
				je	SHORT $LN6@main
				mov	ecx, DWORD PTR $T4[ebp]
				call	??0CA@@QAE@XZ				; CA::CA
				mov	DWORD PTR tv135[ebp], eax
				mov	ecx, DWORD PTR tv135[ebp]
				mov	DWORD PTR tv74[ebp], ecx
				jmp	SHORT $LN7@main
			$LN6@main:
				mov	DWORD PTR tv74[ebp], 0
			$LN7@main:
				mov	edx, DWORD PTR tv74[ebp]
				mov	DWORD PTR $T5[ebp], edx
				mov	BYTE PTR __$EHRec$[ebp+12], 0
				mov	eax, DWORD PTR $T5[ebp]
				mov	DWORD PTR _ptr$[ebp], eax
		*/
		/*
			CA *temp=operator new(){}
			try
			{
				temp->CA::CA();
			}
			catch(...)
			{
				operator delete(temp);
				throw;
			}
			ptr=temp;
		*/
	}
	catch (int exp)
	{
		cout << "int exp=" << exp << endl;
	}
	if (ptr != NULL)
	{
		cout << "Apple" << endl;
		delete ptr;
	}
	else
	{
		cout << "Orange" << endl;
	}
}