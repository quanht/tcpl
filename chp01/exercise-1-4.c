/*
 * Program: exercise-1-4.c
 * Run: cc exercise-1-4.c && ./a.out
 * Purpose: practice
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 */

#include <stdio.h>

int main(void)
{
  float fahr, cels;
  int lower, upper, step;

  lower = -50;
  upper = 150;
  step = 10;
  cels = lower;

  printf("cels\tfahr\n");
  while (cels <= upper) {
    fahr = cels * 9.0 / 5 + 32;
    printf("%3.0f\t%3.0f\n", cels, fahr);
    cels = cels + step;
  }

  return 0;
}

/*
 * 两个变量呈线性关系，在 -40 时相等
 */
