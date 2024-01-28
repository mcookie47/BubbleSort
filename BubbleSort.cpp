#include <iostream>

using namespace std;

// Program for bubble sort
// Bubble sort compares the first two elements of the array and checking if the first is greater than the second. 
// If so, the two elements will be swaped and move forward to the next element.

int main() {
	int i;
	int j;
	int temp;
	int array[10] = { 14, 10, 62, 3, 1, 12, 27, 105, 250, 76 };

	cout << "Unsorted array : \n";		// show unsorted array elements
	for (i = 0; i < 10; i++) {
		cout << array[i] << "\t";		// "\t" means horizontal tab

	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

		}
	}

	cout << "Sorted array : \n";		// show array elements after getting sorted
	for (i = 0; i < 10; i++) {
		cout << array[i] << "\t";		// "\t" means horizontal tab

	}
	cout << endl;

	system("pause");
	return 0;
}