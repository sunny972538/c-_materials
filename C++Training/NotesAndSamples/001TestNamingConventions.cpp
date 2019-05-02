namespace nm1 //also part of name decoration
{
void fun1() //fun1@@YAXXZ 
{
}
extern "C++" void fun2() //?fun2@@YAXXZ	
{
}
extern "C" void fun3() //_fun3
{
}
extern "C++" void fun2(int x)//call	?fun2@@YAXH@Z
{
}
}
//------------------
void main1()
{
	using namespace nm1;
	fun1();//call	?fun1@@YAXXZ		
	fun2();//call	?fun2@@YAXXZ
	fun3();//call	_fun3
	fun2(10);//call	?fun2@@YAXH@Z
}