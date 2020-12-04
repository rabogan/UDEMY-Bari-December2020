#include "Header.h"
int& fun(int &a) {
	cout << a << endl;
	return a;  //The output value here is 10
}


int main() {
	int x = 10;
	fun(x) = 25;
	cout << x;  //The output here is 25
}