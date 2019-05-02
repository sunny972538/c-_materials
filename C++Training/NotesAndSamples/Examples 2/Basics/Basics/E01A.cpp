namespace Ex1A
{
	class CA
	{
	public:
		void operator++()
		{
			//prefix
		}
		void operator++(int)
		{
			//postfix
		}
	};
};
using namespace Ex1A;
void main()
{
	CA obj;

	obj++;	//obj.operator++(0);

	++obj;	//obj.operator++();
}