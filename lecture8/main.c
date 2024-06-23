#include<stdio.h>
#include<stdbool.h>

int main() {
	
	bool alpha = true;

	bool beta = false;

	printf("Alpha: %d", alpha);
	printf("\nBeta: %d", beta);

	/*
	
	> Greater than
	> Less than
	== Equal to
	>= Greater than or equal to
	<= Less than or equal to
	!= Not equal to

	*/

	bool value1 = (7 == 6);
	bool value2 = (8 != 5);
	bool value3 = (8 > 0);
	bool value4 = (6 < 5);
	bool value5 = (7 <= 6);
	bool value6 = (87 >= 77);

	bool all_in_one = (((value1 || value3) && value2) || (value4 != (value5 && value6)));

	printf("\n%d",all_in_one);

	return 0;
}
