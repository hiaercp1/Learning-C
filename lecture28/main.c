#include<stdio.h>
#include<stdlib.h>

// malloc()
// realloc()
// free()

int main() {

	int var = 32;

	int* ptr = &var;

	printf("\n%d", *ptr);

	int n = 3;

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("\nError: memory cannot be allocated!");
		return 0;
	}

	printf("\nEnter input values: ");

	for (int i = 0; i < n; i++) {

		scanf("%d",ptr+i);
	}	
	
	n = 6;

	ptr = realloc(ptr,n * sizeof(int));

	free(ptr);

	return 0;
}
