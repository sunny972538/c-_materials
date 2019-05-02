namespace nm04
{
	class CA
	{
	public:
		virtual void VFun()
		{
		}
		void NFun()
		{
		}
	};

	void main()
	{
		CA obj;
		CA & objRef = obj;
		CA * objPtr = &obj;

		obj.NFun();
		/*
			lea	ecx, DWORD PTR _obj$[ebp]
			call	?NFun@CA@@QAEXXZ			; CA::NFun
		*/
		objRef.NFun();
		/*
			mov	ecx, DWORD PTR _objRef$[ebp]
			call	?NFun@CA@@QAEXXZ			; CA::NFun
		*/
		objPtr->NFun();
		/*
			mov	ecx, DWORD PTR _objPtr$[ebp]
			call	?NFun@CA@@QAEXXZ			; CA::NFun
		*/
		obj.VFun();
		/*
			lea	ecx, DWORD PTR _obj$[ebp]
			call	?VFun@CA@@UAEXXZ			; CA::VFun
		*/
		objRef.VFun();//objRef.vptr->vtable[0]
		/*
			mov	eax, DWORD PTR _objRef$[ebp]
			mov	edx, DWORD PTR [eax]
			mov	esi, esp
			mov	ecx, DWORD PTR _objRef$[ebp]
			mov	eax, DWORD PTR [edx]
			call	eax
			cmp	esi, esp
			call	__RTC_CheckEsp
		*/
		objPtr->VFun();//objPtr->vptr->vtable[0]
		/*
			mov	eax, DWORD PTR _objPtr$[ebp]
			mov	edx, DWORD PTR [eax]
			mov	esi, esp
			mov	ecx, DWORD PTR _objPtr$[ebp]
			mov	eax, DWORD PTR [edx]
			call	eax
			cmp	esi, esp
			call	__RTC_CheckEsp
		*/

	}
}