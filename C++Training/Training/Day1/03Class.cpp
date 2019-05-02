#include<iostream>
using namespace std;
namespace nm03
{
	class CA
	{
	public:
		void fun1()
		{
			cout << "\t\tCA :: fun1 called " << endl;
		}
		virtual void fun2()
		{
			cout << "\t\tCA :: fun2 called " << endl;
		}
		virtual void fun3()
		{
			cout << "\t\tCA :: fun3 called " << endl;
		}
	};

	class CB :public CA
	{
	public:
		virtual void fun4()//function appending
		{
			cout << "\t\tCB :: fun4 called " << endl;
		}
		//virtual void fun3() //overriding
		//void fun3()
		//void fun3(int)//normal funtion
		//virtual void fun3(int)//appending
		//void fun3() override //c++11
		//void fun3(int) override //c++11 error
		virtual void fun3() override
		{
			cout << "\t\tCB :: fun3 called " << endl;
		}
	};

	void main03_1()
	{
		CA obj;
		cout << sizeof(obj) << endl;
		//((void(*)())*(long*)*(long*)&obj)();
		//step 1 reach the vptr
		long *vp = (long*)&obj;
		//step 2 reach the vtable
		long* vt = (long*)*vp;
		//step 3 reach the function
		//typedef void(*FPTR)();
		using FPTR = void(*)();//c++11
		FPTR fp = (FPTR)vt[0];
		//step 4 callback
		fp();
		((FPTR)vt[1])();
	}

	void main03_2()
	{
		using FPTR = void(*)();
		CA obj1;
		/*

		*/
		CB obj2;
		long* vp1 = (long*)&obj1;
		long* vp2 = (long*)&obj2;
		long* vt1 = (long*)*vp1;
		long* vt2 = (long*)*vp2;
		cout << "CA::VFTABLE=" << vt1 << endl;
		((FPTR)vt1[0])();
		((FPTR)vt1[1])();
		cout << "CB::VFTABLE=" << vt2 << endl;
		((FPTR)vt2[0])();
		((FPTR)vt2[1])();
		((FPTR)vt2[2])();
		//((FPTR)vt2[3])();
	}


	class Animal
	{
	public:
		Animal()
		{
			cout << "Animal ctor" << endl;
			//RAII
		}
		void Habitat()
		{
			cout << "Animals lives on Land" << endl;
		}
	};

	class Cat :public Animal //(is-a)
	{
	public:
		//Cat()
		//{//call	??0Animal@@QAE@XZ			; Animal::Animal
		//	cout << "Cat ctor" << endl;
		//}
	};

	void main03_3()
	{
		Cat cat;
		/*
			lea	ecx, DWORD PTR _cat$[ebp]
			call	??0Cat@@QAE@XZ				; Cat::Cat
		*/
		cat.Habitat();
	}



	class Limb
	{
	public:
		Limb()
		{
			cout << "Limb Ctor" << endl;
		}
	};

	class Tiger :public Animal //(Has-a)
	{
		Limb limbs;
	public:
		Tiger()
		{//call	??0Limb@@QAE@XZ				; Limb::Limb
			cout << "Tiger Ctor" << endl;
		}
	};


	void main03_4()
	{
		Tiger tiger;
		/*
			lea	ecx, DWORD PTR _tiger$[ebp]
			call	??0Tiger@@QAE@XZ			; Tiger::Tiger
		*/
	}

	class Bird
	{
	public:
		Bird()//mov	DWORD PTR [eax], OFFSET ??_7Bird@@6B@
		{

		}
		virtual void fly()
		{
			cout << "Birds fly" << endl;
		}
	};

	class Eagle :public Bird
	{
		Limb limbs;
	public:
		Eagle()
		{
			/*
			call	??0Bird@@QAE@XZ				; Bird::Bird
			mov	DWORD PTR [eax], OFFSET ??_7Eagle@@6B@
			call	??0Limb@@QAE@XZ				; Limb::Limb
			*/

		}
	};

	void main03_5()
	{
		Eagle bird;
	}



	class Employee
	{
	public:
		int EId = 100;//c++11 member initialization
	};

	class Manager :virtual public Employee
	{
	public:
		int mId = 200;
	};
	class Developer :virtual public Employee
	{
	public:
		int dId = 300;
	};
	class TechnoManager :public Manager, public Developer
	{
	public:
		int tId = 400;
	};

	void main()
	{
		TechnoManager tech;
		cout << sizeof(tech) << endl;
		long*pt = (long*)&tech;
		cout << *pt << "----------->" << ((long*)*pt)[1] << endl;
		pt++;
		cout << *pt << endl;
		pt++;
		cout << *pt << "----------->" << ((long*)*pt)[1] << endl;
		pt++;
		cout << *pt << endl;
		pt++;
		cout << *pt << endl;
		pt++;
		cout << *pt << endl;

	}
}