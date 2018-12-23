/*
 * Program: exercise-1-8.c
 * Run: cc exercise-1-8.c && ./a.out
 * Purpose: count blanks, tabs, and newlines.
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main(void)
{
  int c, blanks, tabs, newlines;
  blanks = tabs = newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blanks += 1;
    }
    if (c == '\t') {
      tabs += 1;
    }
    if (c == '\n') {
      newlines += 1;
    }
  }

  printf("%d blanks, %d tabs, %d newlines.\n", blanks, tabs, newlines);

  return 0;
}
