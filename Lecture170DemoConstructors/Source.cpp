#include "Header.h"

class Rectangle {
private:
	int length;
	int breadth;
public:
	//The default constructor would create an object (the area given is a GARBAGE value)
	Rectangle() //But, this is a non-parametric constructor.  //Note that it doesn't have a RETURN type!
		//Default constructor
	{
		length = 1;
		breadth = 1;
	}

	Rectangle(int l, int b)  //Parametric constructor.  l and b are directly assigned
		//They're assigned using the setLength functions
		//It IS possible to take default arguments, i.e. Rectangle (int l = 1, int b = 1)...
		//This would mean you don't need the non-parametric constructor...and don't need
		//yet ANOTHER overloaded constructor.
	{
		setLength(l);
		setBreadth(b);
	}

	Rectangle(Rectangle& r) //Copy constructor.  Takes a reference of Rectangle r
	{
		length = r.length;   //This is copying the length and breadth of the rectangle that is passed into itself
		breadth = r.breadth;   
	}


	void setLength(int l)
	{
		if (l > 0)
			length = l;
		else
			length = 0;
	}

	void setBreadth(int b)
	{
		if (b > 0)
			breadth = b;
		else
			breadth = 0;
	}
	int getLength() {return length;}
	int getBreadth() {return breadth;}

	int area()
	{
		return length * breadth;
	}
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};

int main()
{//Using debug mode here would really give a deeper understanding of what is going on.
	Rectangle r1;   //This calls the default constructor
	cout << r1.area() << endl;   //Gives an output of 1

	Rectangle r2(10, 5);   //This calls the parametric constructor
	cout << r2.area() << endl;   //Give the output of 50!

	Rectangle r3(r2);
	cout << r3.area() << endl;   //Outputs 50!   This is using the copy constructor!
}