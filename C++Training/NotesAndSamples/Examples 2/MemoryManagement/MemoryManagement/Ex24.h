namespace Ex24
{
	vector<void**> stack;

	void TraversePointers();
	
	template<typename T>
	class Ptr
	{
		T* m_p;
	public:
		Ptr(T* p);
		Ptr(Ptr<T>& rhs);
		~Ptr();
	};
};
