#include<stdio.h>
#include<stdbool.h>

int main() {
	
	int sum = 0;

	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}

	printf("Sum of even numbers from 1 to 100: %d", sum);

	return 0;
}
