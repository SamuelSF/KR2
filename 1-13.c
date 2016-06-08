#include <stdio.h>
#define IN 1
#define OUT 0

/* Program that prints a histogram of word length */

int main()
{
  int i, j, l, c, max, state;
  int wordl[12];
  for (i = 0; i < 12; ++i)
    wordl[i] = 0;

  l = 0;
  state = OUT;

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\n' || c == '\t'){
      if (state == IN){
        if (l <= 10)
          ++wordl[l];
        else
          ++wordl[11];
      }
      state = OUT;
      l = 0;
    }
    else{
      state = IN;
      ++l;
    }
  }

  max = 0;
  for (i = 0; i < 12; i++){
    if (wordl[i] > max)
      max = wordl[i];
  }

  for (i = max; i > 0; --i){
    for (j = 1; j < 12; j++){
      if (wordl[j] >= i)
        putchar('#');
      else
        putchar(' ');
    }
    putchar('\n');
  }
    
  return 0;
}
