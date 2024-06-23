#include<stdio.h>

int main() {

	int number = 0;

	double user_input;

	printf("Enter a number: ");
	scanf("%lf", &user_input);

	double result = number + user_input;

	if (result > 0) {
		printf("\nThe number is positive.");
	}else if (result < 0) {
		printf("\nThe number is negative.");
	}else {
		printf("The number is 0.");
	}

	return 0;
}
