/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2:
  float avg;
  printf("Input mark 1:\n");
  printf("Input mark 2:"\n);
    scanf("%d",&m1);
  scanf("%d",&m2);
  avg=(m1+m2)/2.0;
  printf("Average is:%.f",avg);
  
  return 0;
}

