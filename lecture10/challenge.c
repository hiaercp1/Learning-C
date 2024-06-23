#include<stdio.h>

int main() {

	int number;

	printf("Enter a number: ");

	scanf("%d",&number);

	(number % 2 == 0) ?
		printf("\nThe number is Even."):
		printf("\nThe number is Odd.");
	return 0;
}
