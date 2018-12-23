/*
 * Program: exercise-1-6.c
 * Run: cc exercise-1-6.c && ./a.out
 * Purpose: check a condition value is either 0 or 1
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1
 */

#include <stdio.h>

int main(void)
{
  int c;
  while ((c = getchar()) != EOF) {
    printf("%d\n", c != EOF);
  }
  printf("%d\n", c != EOF);

  return 0;
}
