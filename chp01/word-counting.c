/*
 * count newlines, words, and chars
 */

#include <stdio.h>
#define IN 1  /* character in word */
#define OUT 0 /* character not in word */

int main(void)
{
  int c;
  int nlines, nwords, nchars;
  int status;

  nlines = nwords = nchars = 0;
  status = OUT;

  while ((c = getchar()) != EOF) {
    nchars += 1;
    if (c == '\n') {
      nlines += 1;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      status = OUT;
    } else if (status == OUT) {
      nwords += 1;
      status = IN;
    }
  }

  printf("%d\t%d\t%d\n", nlines, nwords, nchars);

  return 0;
}

/*
 * 这个程序的功能跟 wc 类似，统计行数、词数和字数的结果是一样的
 */
