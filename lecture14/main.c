#include<stdio.h>
#include<stdbool.h>

int main() {

	for (int x = 1; x < 20; x++) {
		
		if (x == 3) {
			break;
		}

		printf("\nX: %d",x);
	}

	/*
	
	while (1) {
		
		int number;
		
		printf("\nEnter a number: ");
		
		scanf("%d",&number);

		if (number < 0) {
			break;
		}

		printf("\n%d",number);
	}

	*/

	for (int i = 0; i <= 99; i += 9) {

		if (i == 9) {
			continue;
		}

		printf("\nI: %d",i);
	}

	return 0;
}
