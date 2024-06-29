#include<stdio.h>

int main() {

	int arr[] = {34,12,21,54,48};

	int largest = *arr;

	for (int i = 0; i < 5; i++) {

		if (arr[i] > largest) {

			largest = *(arr + i);
		}
	}

	printf("\nLargest number in the given array is %d", largest);

	return 0;
}
