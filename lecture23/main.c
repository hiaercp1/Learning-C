#include<stdio.h>

int main() {

  int age = 18;

  printf("\n%p", &age);

  int* p = &age;

  printf("\nThe value in the %p is %d.",p,*p);

  *p = 45;

  // Change the value using the pointer variable
  
  return 0;
}
