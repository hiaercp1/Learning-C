#include<stdio.h>
#include<ctype.h>

int main() {

	char omega = 'o';

	char OMEGA = toupper(omega);
	
	printf("\nFrom %c to %c.",omega,OMEGA);

	return 0;
}
