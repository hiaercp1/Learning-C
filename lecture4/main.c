#include<stdio.h>

int main() {

	int age;

        printf("\nPlease specify your age: ");
        scanf("%d",&age);
        printf("\nYour age is: %d",age);

       	int born_year,current_year;

        printf("\nPlease specify the year you where born in and current year: ");
        scanf("%d %d", &born_year, &current_year);
        printf("You where born in: %d, and today is: %d",born_year,current_year);
        return 0;
}
