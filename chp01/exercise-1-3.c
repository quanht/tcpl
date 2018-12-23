/*
 * Program: exercise-1-3.c
 * Run: cc exercise-1-3.c && ./a.out
 * Purpose: practice
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-3. Modify the temperature conversion program to print
 * a heading above the table.
 */

#include <stdio.h>

int main(void)
{
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("fahr\tcels\n");
  while (fahr <= upper) {
    cels = (fahr - 32) * 5.0 / 9;
    printf("%3.0f\t%6.1f\n", fahr, cels);
    fahr = fahr + step;
  }

  return 0;
}
