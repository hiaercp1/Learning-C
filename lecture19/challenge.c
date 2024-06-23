#include<stdio.h>

int main() {

  int grades[5];

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &grades[i]);
  }

  int sum;

  for (int x = 0; x < 5; ++x) {
    sum += grades[x];
  }

  float result = (sum/5);

  printf("\nThe average grade is: %.2f", result);

  return 0;
}
