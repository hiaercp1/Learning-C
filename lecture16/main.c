#include<stdio.h>

// We can also declare the result variable in the global scope
// int result;

int addNumbers(int alpha, int beta) {

	int result = alpha + beta; /*
				   
				   Local scope variable.

				   That means that this variable cannot be accessed outside of this function.

				   */
	
	return result;
}

int main() {

	int sum = addNumbers(1,2);

	printf("\n1 + 2 = %d", sum);
}
