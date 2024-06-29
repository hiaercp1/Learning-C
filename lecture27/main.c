#include<stdio.h>

enum Size {
	Small,
	Medium,
	Large
};

// Change the Integral Constants

/*

enum Size {
	Small = 27,
	Medium = 31,
	Large = 40
};

*/

// We can also define the enum variable in the definition of the enum itself

/*

enum Size {
	Small = 27,
	Medium = 30,
	Large = 40
} shoesize;

*/

int main() {

	enum Size shoesize1 = Small;
	
	enum Size shoesize2 = Medium;

	enum Size shoesize3 = Large;

	printf("\nThe size of the first shoe is : %d", shoesize1);
	printf("\nThe size of the second shoe is: %d", shoesize2);
	printf("\nThe size of the third shoe is: %d", shoesize3);

	return 0;
}
