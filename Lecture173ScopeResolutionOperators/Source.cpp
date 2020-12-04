#include "Header.h"

//Writing all functions for the Rectangle class, implementing them using the scope resolution operator
//This program outputs:
/*
Area 100
True
Rectangle Destroyed
*/
class Rectangle
{
private:
	int length;
	int breadth;
public:
	//The constructors, mutators and accessors are public.   The destructor will clear them
	Rectangle();
	Rectangle(int l, int b);
	Rectangle(Rectangle &r);
	int getLength() {return length;}  //The accessors have been defined in the class itself
	int getBreadth() {return breadth;}
	void setLength(int l);
	void setBreadth(int b);
	//Primarily, the following two functions are needed for calculating rectangle properties
	int area();
	int perimeter();
	bool isSquare();
	~Rectangle();
};

int main() {
	//Creating an object in the class itself
	Rectangle r1(10, 10);
	cout << "Area " << r1.area() << endl;
	if (r1.isSquare())
		cout << "Yes" << endl;
}


Rectangle::Rectangle()  //Constructor defined using SCOPE RESOLUTION OPERATOR
{
	length = 1;
	breadth = 1;
}

Rectangle::Rectangle(int l, int b)  //Parametrised constructor
{
	if (l > 0)
		length = l;
	else
		length = 1;

	if (b > 0)
		breadth = b;
	else
		breadth = 1;
}

Rectangle::Rectangle(Rectangle &r)  //Copy constructor
{
	length = r.length;
	breadth = r.breadth;
}

void Rectangle::setLength(int l)   //setLength mutator written without validation
{
	length = l;
}

void Rectangle::setBreadth(int b)  //setLength mutator written without validation
{
	breadth = b;
}

int Rectangle::area()  //Facilitator written here with a return
{
	return length * breadth;
}

int Rectangle::perimeter()  //Another facilitator written out
{
	return 2 * (length + breadth);
}

bool Rectangle::isSquare()  //Enquiry
{
	return length == breadth;
}

Rectangle::~Rectangle()  //Destructor
{
	cout << "Rectangle destroyed\n";
}