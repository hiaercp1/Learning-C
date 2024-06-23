#include<stdio.h>
#include<string.h>

int main() {

  char gg[] = "Good Game";

  printf("\n%s", gg);

  printf("\nLength: %zu", strlen(gg));

  char food[] = "Pizza";

  char anotherfood[strlen(food)];

  strcpy(anotherfood,food);

  printf("\nCopied String: %s", anotherfood);

  char text1[] = "Hi";
  char text2[] = "Hello";

  strcat(text1,text2);

  printf("\n%s",text1);

  return 0;
}
