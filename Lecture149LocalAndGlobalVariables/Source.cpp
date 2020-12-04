#include "Header.h"

//This is actually Lecture 150!

int g = 5; //Global variable - the variable can be accessed in functions fun() and main()

void fun()
{
	int a = 10;  //this local variable is only useful/accessible in this function
	a++;
	g++;
	cout << a << " " << g << endl;  //This outputs 11 and ... 6
}

int main()
{
	//can't use cout << a <<endl; here; variables have local scope.
	cout << g<<endl;  //This will output 5
	fun();
	cout << g << endl; //This will output 6
}