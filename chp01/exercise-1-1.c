/*
 * Program: exercise-1-1.c
 * Run: cc exercise-1-1.c && ./a.out
 * Purpose: play with hello world program
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-1. Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program, to see what
 * error messages you get.
 */

#include <stdio.h>

int main(void)
{
  printf("hello, world\n");
  return 0;
}

/*
 * Change 1: comment out #include <stdio.h>
 * Compile: warning about implicit function printf, recommend to add
 *    #include <stdio.h> or declare printf.
 * Result: still got desired a.out
 *
 * Change 2: leave int before main.
 * Compile: warning about main return type int
 * Result: still got desired a.out
 *
 * Change 3: replace double quote with single quote
 * Compile: warning about type
 * Result: no a.out
 *
 * Change 4: omit semicolon at statement end.
 * Compile: error
 * Result: no a.out
 *
 * Change 5: omit part of matching punctuation
 * Compile: error
 * Result: no a.out
 */

/*
 * In many modern Linux distros, cc is an alias for gcc, and unless we set
 * current directory into PATH we need type ./a.out to run program.
 * GCC shows many info if there is a problem, it's a great tool to learn C.
 */
