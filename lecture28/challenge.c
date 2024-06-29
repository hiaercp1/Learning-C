#include<stdio.h>
#include<stdlib.h>

int main() {

	int* ages;

	ages = (int*)malloc(4*sizeof(int));

	for (int i = 0; i < 4; i++) {
		printf("\nEnter a number: ");
		scanf("%d", ages+i);
	}

	for (int x = 0; x < 4; x++) {
		printf("\nValue: %d", *(ages+x));
	}

	ages = realloc(ages,6*sizeof(int));

	ages[4] = 32;
	ages[5] = 59;

	for (int y = 0; y < 6; y++) {
		printf("\n%d",ages[y]);
	}

	return 0;
}
