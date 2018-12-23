/*
 * Program: exercise-1-10.c
 * Run: cc exercise-1-10.c && ./a.out
 * Purpose: practice, see below
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-10. Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b, and each backslash
 * by \\. This makes tabs and backspaces visible in an unambiguous way.
 */

#include <stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("\\t");
    }
    if (c == '\b') {
      printf("\\b");
    }
    if (c == '\\') {
      printf("\\\\");
    }
    if (c != '\t') {
      if (c != '\b') {
        if (c != '\\') {
          putchar(c);
        }
      }
    }
  }

  return 0;
}

/*
 * only use if statement
 */
