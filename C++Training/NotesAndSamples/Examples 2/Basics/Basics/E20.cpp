namespace Ex20
{
	struct SA
	{
		SA(int data)
		{
		}
	};

	struct SB :SA
	{
		/*
			SB():SA(?)
			{
			}
		*/
		SB():SA(100)
		{
		}
	};
};
using namespace Ex20;

void main20()
{
	SB obj;
	//obj.SB::SB();
}