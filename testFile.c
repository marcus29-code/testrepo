//  Simple Program to swap two numbers
//  Example from https://www.programiz.com/c-programming/examples/swapping


#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Please Enter first number: ");
  scanf("%lf", &first);
  printf("Please enter second number: ");
  scanf("%lf", &second);
  printf("Thank you so much!");

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}
