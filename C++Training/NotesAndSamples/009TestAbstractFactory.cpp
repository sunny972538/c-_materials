#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace nm9
{
    struct IVideo
	{
		virtual void CreateVideo()=0;
		virtual void AttachVideo()=0;
	};

	struct IEVideo:IVideo
	{
	public:
		void CreateVideo()
		{
			cout<<"IE video created "<<endl;
		}
		void AttachVideo()
		{
			cout<<"IE video attached "<<endl;
		}
	};

	struct ChromeVideo:IVideo
	{
	public:
		void CreateVideo()
		{
			cout<<"Chrome video created "<<endl;
		}
		void AttachVideo()
		{
			cout<<"Chrome video attached "<<endl;
		}
	};

	struct IAudio
	{
		virtual void CreateAudio()=0;
		virtual void AttachAudio()=0;
	};

	struct IEAudio:IAudio
	{
	public:
		void CreateAudio()
		{
			cout<<"IE Audio created "<<endl;
		}
		void AttachAudio()
		{
			cout<<"IE Audio attached "<<endl;
		}
	};
	struct ChromeAudio:IAudio
	{
	public:
		void CreateAudio()
		{
			cout<<"Chrome Audio created "<<endl;
		}
		void AttachAudio()
		{
			cout<<"Chrome Audio attached "<<endl;
		}
	};

	struct IMag
	{
		virtual void CreateMag()=0;
		virtual void AttachMag()=0;
	};
	struct IEMag:IMag
	{
	public:
		void CreateMag()
		{
			cout<<"IE Mag created "<<endl;
		}
		void AttachMag()
		{
			cout<<"IE Mag attached "<<endl;
		}
	};
	struct ChromeMag:IMag
	{
	public:
		void CreateMag()
		{
			cout<<"Chrome Mag created "<<endl;
		}
		void AttachMag()
		{
			cout<<"Chrome Mag attached "<<endl;
		}
	};

	struct IFactory
	{
		virtual IVideo* BuildVideo()=0;
		virtual IAudio* BuildAudio()=0;
		virtual IMag* BuildMag()=0;
	};
	struct  IEFactory:IFactory
	{
		virtual IVideo* BuildVideo()
		{
			return new IEVideo();
		}
		virtual IAudio* BuildAudio()
		{
			return new IEAudio();
		}
		virtual IMag* BuildMag()
		{
			return new IEMag();
		}
	};
	struct  ChromeFactory:IFactory
	{
		virtual IVideo* BuildVideo()
		{
			return new ChromeVideo();
		}
		virtual IAudio* BuildAudio()
		{
			return new ChromeAudio();
		}
		virtual IMag* BuildMag()
		{
			return new ChromeMag();
		}
	};

	struct Builder
	{
		static IFactory * CreateFactory(int choice)
		{
			return new ChromeFactory();
		}
	};
}


void  main9()
{
	using namespace nm9;
	IFactory *f=Builder::CreateFactory(10);
	IVideo *v=f->BuildVideo();
	v->CreateVideo();
	v->AttachVideo();
	IAudio *a=f->BuildAudio();
	a->CreateAudio();
	a->AttachAudio();
	IMag *m=f->BuildMag();
	m->CreateMag();
	m->AttachMag();
	getche();
}