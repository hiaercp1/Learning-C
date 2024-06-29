#include<stdio.h>
#include<math.h>

#define PI 3.1415

#define circle_area(r) (PI * r *r)

int main() {

  int number = 36;

  double square_root = sqrt(number);

  printf("\nThe square root of the number: %d is %lf.", number, square_root);

  number = 42;

  double cube_root = cbrt(number);

  printf("\nThe cube root of the number: %d is %lf.", number, cube_root);

  printf("\nThe value of PI is: %lf", PI);

  double radius = 12.5;

  double area = PI * radius * radius;

  // we can also compute the area with the circle_area macro
  // double area = circle_area(radius);

  printf("\nThe area (r = %lf) is %.2lf.", radius, area);

  return 0;
}
