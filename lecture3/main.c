#include<stdio.h>

int main() {

	// different data types in the C programming language
	
	/*
	int		(4 bytes) | &d to print the value
	double		(8 bytes) | %lf to print the value
	float		(4 bytes) | %f to print the value
	char		(1 byte)  | %c to print the value
	*/
	
	int age = 10;

	printf("\nPrinting integer: %d",age);

	double price = 79.99;

	printf("\nPrinting double: %lf",price);

	float decimal_number = 3.14;

	printf("\nPrinting float: %f",decimal_number);

	char A = 'a';

	printf("\nPrinting char: %c",A);

	return 0;
}
