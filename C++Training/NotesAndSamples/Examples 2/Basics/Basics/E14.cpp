namespace Ex14
{
	struct SA
	{
		SA()
		{
			//******* prolog ****************
			/*
				PUSH EBP
				MOV EBP,ESP
				SUB ESP,40

				1.call all base class constructor
					in the order of inheritance
					IX::IX();
					IY::IY();
					IZ::IZ();

				2.call all data members constructor
					in the order of declaration
				
					m_a.IA::IA();
					m_b.IB::IB();
					m_b.IB::IB();

				3.initialize virtual inheritance vptr

				4.initialize all virtual function vptr
			*/
			//******* body ****************
			/*
				programmer writes
			*/
			//******* EPILOG ****************
			/*
				
				  MOV ESP,EBP
				  pop EBP
				  ret
			*/
		}
	};
};
using namespace Ex14;
