#include<stdio.h>

int main() {

  // datatype arrayname[arraysize];
  int age[5];

  char alphabet[] = {'a','b','c','d'};

  printf("\nThe first character in the alphabet is: %c",alphabet[0]);

  int chg[10];

  for (int i = 0; i <= 10; i++) {

    chg[i] = i*4;
  }

  printf("\n%d",chg[6]);

  for (int x = 0; x <= 10; x++) {
    printf("\nValue: %d",chg[x]);
  }

  return 0;
}
