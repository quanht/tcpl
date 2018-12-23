/*
 * Program: exercise-1-7.c
 * Run: cc exercise-1-7.c && ./a.out
 * Purpose: check EOF value
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-7. Write a program to print the value of EOF.
 */

#include <stdio.h>

int main(void)
{
  printf("%d\n", EOF);
  
  return 0;
}

/*
 * The value of EOF is -1
 * tcpl said that the exactly value does not matter as long as
 * it is not equal to any character value
 */
