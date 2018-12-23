/*
 * Program: exercise-1-5.c
 * Run: cc exercise-1-5.c && ./a.out
 * Purpose: practice
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-5. Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

int main(void)
{
  float fahr, cels;
  printf("fahr\tcels\n");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
    cels = (fahr - 32) * 5.0 / 9;
    printf("%3.0f\t%6.1f\n", fahr, cels);
  }
  return 0;
}

/*
 * for and while
 * for 一般用于始末状态和渐进状态明确的情况，while 反之
 */
