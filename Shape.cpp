#include<iostream>
using namespace std;

class Shape
{
	virtual int numberOfSides() = 0;
};

class Trapezoid: Shape
{
	public :
	int numberOfSides()
	{
		cout<<"\nNo. of sides in Trapezoid is: 4 "<<endl;
	}
};

class Triangle : Shape
{
	public :
	int numberOfSides()
	{
		cout<<"\nNo. of sides in Triangle is: 3"<<endl;
	}
};

class Hexagon : Shape
{
	public :
	int numberOfSides()
	{
		cout<<"\nNo. of sides in Hexagon is: 6\n"<<endl;
	}
};

int main()
{
	Trapezoid trap;
	Triangle tri;
	Hexagon hexa;
	trap.numberOfSides();
	tri.numberOfSides();
	hexa.numberOfSides();
}