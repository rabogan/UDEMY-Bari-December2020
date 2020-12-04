#include "Header.h"
//This is the return by address mechanism

int* fun()  //This function shares the address of the memory to the main() function!
//The point *q in main is accessing that memory.
{
	int* p = new int[5];  // p creates memory in the heap
	for (int i = 0; i < 5; i++)
	{
		p[i] = 5 * i;
	}
	cout << p << endl;  //The ADDRESS of p and q are the same!
	return p;  //The p address is beign 
}

int main()
{
	int *q = fun();  //Declares a pointer named q which calls the function.
	/*
	The function allocates the memory in the heap with the name p,
	and will return p.
	So, the address of the pointer will be stored in q.
	*/
	cout << q << endl;  //The address of p and q are the same!
	for (int i = 0; i < 5; i++)
	{
		cout << q[i] << endl;
	}
}