#include<stdio.h>

int main() {

	int age;

	printf("Enter your age: ");

	scanf("%d", &age);

	if (age < 18) {
		printf("Sorry, you are not eligible to vote :(");
	}else if (age > 120 || age < 0) {
		printf("Invalid age :(");
	}else{
		printf("You are eligible to vote");
	}

	return 0;
}
