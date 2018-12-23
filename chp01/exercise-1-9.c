/*
 * Program: exercise-1-9.c
 * Run: cc exercise-1-9.c && ./a.out
 * Purpose: replace multiple blanks with single blank
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-9. Write a program to copy it's input to its output, replacing
 * each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main(void)
{
  int c;
  int previous = 'a';

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
    }
    if (c == ' ') {
      if (previous != ' ') {
        putchar(c);
      }
    }
    // if (c != ' ' || previous != ' ') putchar(c);
    previous = c;
  }

  return 0;
}

/*
 * only got if statement to implement this exercise,
 * so it's not concise or elegant
 */
