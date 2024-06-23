#include<stdio.h>

int sum(int n);

int main() {

	int number, result;

	printf("\nEnter a positive number: ");

	scanf("%d", &number);

	result = sum(number);

	printf("\nThe sum of the given number is: %d",result);

	return 0;
}

int sum(int n) {

	if (n != 0) {

		return n + sum(n-1);
	} else {

		return n;
	}
}
