#include <iostream>
using namespace std;

/* 
This program is used merely to demonstrate polymorphism.
To wit, the same pointer (of the Base class) shape ...aka
..an Abstract class, is being used to call functions from
each of the classes Circle and Rectangle
*/

class Shape {
public:
	virtual void area() = 0;
	virtual void perimeter() = 0;
};

class Rectangle:public Shape {
private:
	int length;
	int breadth;
public:
	Rectangle()
	{
		length = 1;
		breadth = 1;
	}
	Rectangle(int x, int y)
	{
		length = x;
		breadth = y;
	}
	void area()
	{
		cout << "Area of this rectangle is " << length * breadth << endl;
	}
	void perimeter()
	{
		cout << "The perimeter of this rectangle is " << 2 * (length + breadth) << endl;;
	}
};

class Circle :public Shape
{
private:
	int radius;
public:
	Circle()
	{
		radius = 1;
	}
	Circle(int x)
	{
		radius = x;
	}
	void area()
	{
		cout << "The area of this circle is " << 3.1415 * radius * radius << endl;
	}
	void perimeter()
	{
		cout << "The perimeter of the circle is " << 3.1415 * 2 * radius << endl;
	}
};

int main()
{
	Shape* sha = new Rectangle(5,8);//Note that this will need to take arguments
	//Do NOT forget to include the :public Shape after your classes!
	sha->area();   //Outputs 40
	sha->perimeter();   //Outputs 26
	sha = new Circle(5);
	sha->area();   //Outputs 78.5375
	sha->perimeter();   //Outputs 31.415
}






