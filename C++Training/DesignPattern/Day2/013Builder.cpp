#include<iostream>
#include<string>
#include<map>
using namespace std;
namespace nm013
{
	class Car
	{
	public:
		string model;
		string type;
		string color;
		string seats;
		string transmission;
		friend ostream & operator<<(ostream & os, Car & car)
		{

			os << car.model << "\t" << car.type << "\t" << car.color << "\t" << car.seats << "\t" << car.transmission << endl;
			os << "__________________________________________________________________________________" << endl;
			return os;
		}
	};


	class Builder
	{
	protected:
		Car &c;
	public:
		Builder(Car &c) :c(c)
		{
		}
		virtual void BuildModel() = 0;
		virtual void BuildType() = 0;
		virtual void BuildColor() = 0;
		virtual void BuildSeats() = 0;
		virtual void BuildTransmission() = 0;

		
	};

	class Hyundai :public Builder
	{
	public:
		Hyundai(Car &car) :Builder(car)
		{
		}
		void BuildModel()
		{
			c.model = "Hyandai Verna";
		}
		void BuildType()
		{
			c.type = "Petrol";
		}
		void BuildColor()
		{
			c.color = "Black";
		}
		void BuildSeats()
		{
			c.seats = "4+1";
		}
		void BuildTransmission()
		{
			c.transmission = "automatic";
		}
	};

	class Maruthi :public Builder
	{
	public:
		Maruthi(Car &car) :Builder(car)
		{
		}
		void BuildModel()
		{
			c.model = "Maruthi Swift";
		}
		void BuildType()
		{
			c.type = "Petrol";
		}
		void BuildColor()
		{
			c.color = "White";
		}
		void BuildSeats()
		{
			c.seats = "5+1";
		}
		void BuildTransmission()
		{
			c.transmission = "Manual";
		}
	};


	class BuildProcess
	{
		Builder *builder;
	public:
		BuildProcess(Builder *builder) :builder(builder)
		{
		}
		void BuildParts()
		{
			cout << "Building started " << endl;
			builder->BuildModel();
			builder->BuildType();
			builder->BuildColor();
			builder->BuildSeats();
			builder->BuildTransmission();
			cout << "Building completed " << endl;
		}
	};


	void main()
	{
		Car car;
		Maruthi hyundai(car);
		BuildProcess build(&hyundai);
		build.BuildParts();
		cout << car << endl;
	}
}