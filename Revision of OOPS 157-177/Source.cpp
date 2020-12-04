#include "Header.h"
//Note, that in BEST PRACTICE OOP, the data in a class is usually private.
//This program demonstrates TWO ways in which a pointer points on an object.
class Rectangle {
public:
	int length;
	int breadth;

	int area() {
		return length * breadth;
	}
	int perimeter() {
		return 2 * (length + breadth);
	}
};


int main() {

	//Only this rectangle object is in the HEAP.
	//The pointer is in the STACK
	Rectangle* qq = new Rectangle();
	qq->length = 10;
	qq->breadth = 15;
	cout << qq->area();
	cout << qq->perimeter();

	//In this, both the rectangle object q
	//...and the pointer are in the STACK
	Rectangle q;
	Rectangle* ptr;
	ptr = &q;
	ptr->length = 10;
	ptr->breadth = 15;
	cout << ptr->area();
	cout << ptr->perimeter();
}