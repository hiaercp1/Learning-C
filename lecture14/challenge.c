#include<stdio.h>
#include<stdbool.h>

int main() {

	while (1) {

		int number;

		printf("\nEnter a number: ");

		scanf("%d", &number);

		if (number >= 0) {
			printf("\nPositive Value");
			break;
		} else if (number % 2 == 0 && number <= 0) {
			printf("\nNegative Even");
			break;
		}

		printf("\n%d",number);
	}

	return 0;
}
