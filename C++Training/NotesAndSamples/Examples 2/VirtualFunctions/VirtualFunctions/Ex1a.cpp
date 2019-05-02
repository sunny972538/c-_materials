
struct Excpetion {};
struct DbException:Exception {};
struct ConcurrencyException :DbException{};

void fun()
{
	try	{
		//1 
		//if(cond)
			throw ConcurrencyException();
		//2
	}catch(Exception& e){
		//3
	}catch(DbException& e){
		//4
	}catch(ConcurrencyException& e){
		//5
	}
	//6
}
void main()
{
	fun();
}