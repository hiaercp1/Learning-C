#include<stdio.h>

int main() {

	FILE* fptr;

	fptr = fopen("test.md", "r");

	if (fptr == NULL) {
		printf("\nThere was a problem opening the file :(");
		return 0;
	}

	char file_content[1000];

	while (fgets(file_content,1000,fptr)) {

		printf("\n%s", file_content);
	}

	fclose(fptr);

	FILE* test;

	test = fopen("test2.md", "w");

	if (test == NULL) {
		printf("\nThere was a problem opening the file :(");
		return 0;
	}

	fputs("I love scout\n", test);
	fputs("It's never too late\n",test);

	fclose(test);

	return 0;
}
