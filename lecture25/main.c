#include<stdio.h>

void changeit(int* number) {

	*number = 99;
}

void square_number(int* number) {

	int square = *number * *number;
	
	*number = square;
}

int* pr(int* number) {

	return number;
}

int main() {
	
	int number = 21;

	changeit(&number);

	printf("\nNumber: %d", number);

	square_number(&number);

	printf("\nSquare: %d",number);

	printf("\nThe pointer to the number variable is: %p", pr(&number));

	return 0;
}
