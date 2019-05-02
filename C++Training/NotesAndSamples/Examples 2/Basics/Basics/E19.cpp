namespace Ex19
{
	struct Date
	{
		Date(int dd,int mm,int yy)
		{
		}
	};

	struct Emp
	{
		Date doj;

		/*
			Emp():doj.Date::Date(?,?,?)
			{
			}
		*/
		Emp():doj(1,1,1999)
		{

		}
	};
};
using namespace Ex19;

void main19()
{
	Emp e1;
}