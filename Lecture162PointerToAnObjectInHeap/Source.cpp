#include "Header.h"

class Rectangle {
public:   //It must be public!
	int length;
	int breadth;

	int area() {
		return length * breadth;
	}
	int perimeter() {
		return 2 * (length + breadth);
	}
};

int main() 
{
	Rectangle r1;  //An object is created
	Rectangle* ptr;  //Taking a pointer of type Rectangle
	ptr = &r1;  //It's assigned with the address of r1, pointing on that OBJECT
	ptr->length = 10;  //ptr is used to assign length and breadth
	ptr->breadth = 5;  
	cout << ptr->area() << endl; //Shows how we can access an object using a POINTER!
	//The way we access the member uses the ARROW operator, rather than the dot.

	Rectangle* poidxtr = new Rectangle;  //Dynamic object created in the HEAP!  Brackets can be given or avoided!
	poidxtr->length = 7;
	poidxtr->breadth = 8;
	cout << poidxtr->area() << endl;
}