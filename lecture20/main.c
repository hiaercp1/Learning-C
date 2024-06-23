#include<stdio.h>

int main() {

  int md[2][3] = {{1,2,3},{100,200,300}};

  printf("\nThe first element of the array: %d",md[0][0]);

  md[0][2] = 5;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("\nValue: %d",md[i][j]);
    }
  }

  return 0;
}
