#include<stdio.h>
#include<math.h>

int main() {

	int a = 5;
	int b = 3;

	double result = pow(a,b);

	printf("\nPower: %lf",result);

	int alpha;
	
	printf("\nEnter number: ");

	scanf("%d",&alpha);

	printf("\nSquare root of %d is %lf", alpha, sqrt(alpha));
	printf("\nCube root of %d is %lf",alpha,cbrt(alpha));

	return 0;
}
