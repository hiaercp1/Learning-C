#include<stdio.h>

int numbers_sum(int number1, int number2) {

       	int result = number1 + number2;

        return result;
}

void calculate_square(int number) {

       	double square = number * number;

        printf("\n The square of %d is %lf.", number, square);
}

void test_function() {
        // Function with noting to return should be defined with the "void" return type
        printf("\nThis is a function with no return type :)");
}

/*

Funcion prototype - Does not have the function body but define the function name and parameters.

int numbers_sum(int number1, int number2);

*/

int main() {

	test_function();

	int user_number;

	printf("\nNumber: ");

	scanf("%d", &user_number);

	calculate_square(user_number);
}
