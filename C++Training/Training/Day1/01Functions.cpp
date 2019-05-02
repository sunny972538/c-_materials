/*
1.naming convention 
2.return type
3.calling convention
4.name
5.arguements
6.exception list
7.prolog
8.body
9.epilog

//ivar jacobson
//grady booch
//kent beck
//martin fowler
extern "C++" void __stdcall fun(int x, int y) throw(int,float)
{

}
*/


namespace nm01
{
	void fun1()//?fun1@@YAXXZ
	{

	}
	void fun1(int x)//?fun1@@YAXH@Z
	{

	}
	extern "C++" void fun2()//?fun2@@YAXXZ
	{

	}
	extern "C" void fun3()//_fun3
	{

	}
	//----------------------
	void main()
	{
		fun3();//call	_fun3
		fun2();//
		fun1();//call	?fun1@@YAXXZ
		fun1(10);//call	?fun1@@YAXH@Z
	}
}