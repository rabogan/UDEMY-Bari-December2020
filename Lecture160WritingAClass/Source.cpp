#include "Header.h"

/*
The class defines the data members and functions
It is automatically PRIVATE...you must make it
PUBLIC if you want to access it
*/
class Rectangle {
public:
	int length; //Only these data members occupy memory in the stack.
	int breadth;

	int area() {//The functions don't occupy memory in the stack UNTIL called on from the code section.
		return length * breadth;
	}

	int perimeter() {
		return (2 * length) + (2 * breadth);
	}
};


int main()
{
	Rectangle r1, r2;  //Note this.  Objects are created in the stack!

	r1.length = 10;
	r1.breadth = 5;
	cout << "Rectangle 1's area is " << r1.area() << endl;

	r2.length = 15;
	r2.breadth = 2;
	cout << "Rectangle 2's perimeter is " << r2.perimeter() << endl;
}