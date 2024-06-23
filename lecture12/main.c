#include<stdio.h>
#include<stdbool.h>

int main() {
	
	int count = 1;

	int user_specified;

	printf("Enter a number: ");

	scanf("%d", &user_specified);

	while (count <= user_specified) {
		
		printf("\n%d * 8 = %d", count, count*8);
		
		count ++;
	}

	do {
		printf("Stay Hard");
	} while (false);

	return 0;
}
