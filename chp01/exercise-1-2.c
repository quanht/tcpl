/*
 * Program: exercise-1-2.c
 * Run: cc exercise-1-2.c && ./a.out
 * Purpose: test invalid escape sequence \c
 * Author: qht
 * Date: 2018-12-23
 */

/*
 * Exercise 1-2. Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 */

#include <stdio.h>

int main(void)
{
  printf("Hello World!\c\n");
  return 0;
}

/*
 * Compile: warning about unknown escape sequence \c
 * Result: got a.out and ./a.out ignored backslash '\' but remained 'c'
 * Associate: JavaScript also just ignored invalid escape sequence
 *    and omit backslash.
 */

/*
 * 一般情况下，转义字符可以看作光标的移动，如果没有后续字符，转义字符不起作用。
 * 比如，"hello\b" 仍将 hello 完整打出，若改为 "hello\ba" 会得到 hella
 * 当然，也有少数例外，比如 \a 就是控制发声的字符。
 */
