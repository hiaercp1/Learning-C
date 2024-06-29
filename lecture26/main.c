#include<stdio.h>

int main() {

	struct Person {
		double money;
		int age;
		float social_credit;
	};

	struct Person michael;

	michael.age = 18;

	michael.money = 6 * 109;

	michael.social_credit = 76.0;

	printf("\nAge: %d",michael.age);
	printf("\nMoney: %.2lf",michael.money);
	printf("\nSocial credit: %f",michael.social_credit);

	// Another possible way: struct Person person1 = {.age = 18, .money = 76, .social_credit = 78};
	
	/*
	
	struct test {
		int a;
		int b;
	} test1,test2;

	*/

	/*
	
	typedef struct structname {
		int a;
		int b;
	} typename;

	*/

	return 0;
}
