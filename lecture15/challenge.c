#include<stdio.h>

double challenge_function() {

	int number1, number2;

	printf("\nFirst Number: ");
	scanf("%d",&number1);

	printf("\nSecond Number: ");
	scanf("%d",&number2);

	return (number1 * number2);
}

int main() {

	printf("\n%lf",challenge_function());
}
