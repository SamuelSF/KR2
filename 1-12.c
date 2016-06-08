#include <stdio.h>
#define IN 1
#define OUT 0

/* This is a simple program that prints it's output
 * one word at a time. */

int main()
{
  int c, state;

  state = IN;

  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT){
      state = IN;
      putchar('\n');
      putchar(c);
    }
    else
      putchar(c);
  }
  printf("\n");

  return 0;
}
