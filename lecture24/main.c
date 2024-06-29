#include<stdio.h>

int main() {

	int numbers[5] = {1,2,3,4,5};

	for (int i = 0; i < 5; ++i) {

		printf("\n%d = %p",*(numbers+i),&numbers[i]);
	}

	printf("\nArray address: %p",numbers);

	*numbers = 9;

	*(numbers + 4) = 17;

	return 0;
}
