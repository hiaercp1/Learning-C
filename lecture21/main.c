#include<stdio.h>

int main() {

  char greeting[] = "Hello!";

  printf("\n%s", greeting);

  // Every string is terminated by the null character '\0'

  char input[20];

  printf("\nEnter your name: ");

  fgets(input, sizeof(input), stdin);

  printf("\n%s",input);

  printf("\nThe first character in your input is: %c", input[0]);

  return 0;
}
