#include <stdio.h>

/* Program that copies input to output
 * but replaces each string of one or more blanks
 * by a single '_' char. */

int main()
{
  int c, b; /* c is current char, b alternates between 0 1 depending
              * whether the last char was a blank */
  
  b = 0;

  while((c = getchar()) != EOF){
    if (c != ' '){
      b = 0;
      putchar(c);
    }
    else {
      if (! b){
        b = 1;
        putchar('_');
      }
    }
  }
}
