#include "Header.h"
class Rectangle{
private:  //Data in a class MUST be hidden in best practice OOP.
	int length;
	int breadth;
public:
	void setLength(int l)  //This is known as a MUTATOR!
		//You can use object.setLength( x ) in the main() to set a length of x to the rectangle.
	{
		if (l > 0)
			length = l;
		else
			length = 0;
	}
	void setBreadth(int b) //This is another MUTATOR!  set = mutation...
	{
		if (b > 0)
			breadth = b;
		else
			breadth = 0;
	}
	int getLength()  //This merely RETURNS the length!
		//This is an ACCESSOR!
	{
		return length;
	}
	int getBreadth()  //This merely RETURNS whatever the breadth value is!
	{
		return breadth;
	}
	int area() {
		return length * breadth;
	}
	int perimeter() {
		return 2 * (length + breadth);
	}
};

int main() {
	Rectangle r1;  //You can't use r1.length =10 or r1.breadth = 5 anymore :)
	r1.setLength(10);
	r1.setBreadth(5);  //These are known as MUTATORS of a class
	cout << "The area is calculated as " << r1.area() << endl;
	cout << "The length of the rectangle is " << r1.getLength() << endl;
	cout << "The breadth of the rectangle is " << r1.getBreadth() << endl;}