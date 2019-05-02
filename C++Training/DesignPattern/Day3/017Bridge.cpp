#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm017
{
	class Output
	{
	public:
		virtual void Click() = 0;
		virtual void Move() = 0;
		virtual void Zoom() = 0;
		operator Output*()
		{
			return this;
		}
	};

	class Screen :public Output
	{
	public:
		virtual void Click()
		{
			cout << "Screen Selected " << endl;
		}
		virtual void Move()
		{
			cout << "Screen Relocated " << endl;
		}
		virtual void Zoom()
		{
			cout << "Screen Maginified " << endl;
		}
	};

	class Audio :public Output
	{
	public:
		virtual void Click()
		{
			cout << "Sound Oink " << endl;
		}
		virtual void Move()
		{
			cout << "sound Screetch  " << endl;
		}
		virtual void Zoom()
		{
			cout << "Volume Up " << endl;
		}
	};

	class Input
	{
	protected:
		Output *output;
		Input()
		{
		}
	public:
		void SetOutput(Output *output)
		{
			this->output = output;
		}
	};
	class Mouse : public Input
	{
	public:
		void Click()
		{
			this->output->Click();
		}
		void Drag()
		{
			this->output->Move();
		}
		void Wheel()
		{
			this->output->Zoom();
		}
	};

	class Gesture :public Input
	{
	public:
		void Tap()
		{
			this->output->Click();
		}
		void Swipe()
		{
			this->output->Move();
		}
		void Pan()
		{
			this->output->Zoom();
		}
	};


	void main()
	{
		Screen scr;
		Audio audio;

		Gesture gesture;
		Mouse mouse;

		mouse.SetOutput(scr);

		mouse.Click();
		mouse.Drag();
		mouse.Wheel();
		cout << "_______________________" << endl;
		gesture.SetOutput(audio);
		gesture.Tap();
		gesture.Swipe();
		gesture.Pan();
	}
}