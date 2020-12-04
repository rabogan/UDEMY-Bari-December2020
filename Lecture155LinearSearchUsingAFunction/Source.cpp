#include "Header.h"

int Search(int A[], int n, int key) {
	for (int i = 0; i < n; ++i)
	{
		if (key == A[i])
			return i;
	}
	return -1;
}

int main() {
	int A[] = { 1,3,5,7,11,13,17,19,23 };
	cout << "Please enter the element you wish to find:" << endl;
	int wanted = 0;
	cin >> wanted;
	int index = Search(A, 9, wanted);
	cout << "Element " << wanted << " found at index " << index << endl;
}