namespace Ex1
{
	template<typename T>
	class CA 
	{
	public:
		void fun() 			{		} 
		void fun2(T i)		{		}
	};
};using namespace Ex1;
void main1()
{
	CA<int> obj1;
	CA<float> obj2;
	CA<double> obj3;

	obj1.fun();
	obj1.fun2(100);
	obj2.fun();
	obj2.fun2(100.5f);
	obj3.fun();
	obj3.fun2(100.56);
}
