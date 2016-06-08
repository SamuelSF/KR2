#include <stdio.h>

main()
{
  int c, n;

  n = 0;
  while ((c = getchar()) != EOF){
    if ((c == '\n') || (c == ' ') || (c == '\t'))
      ++n;
  }
  print("%d\n", n);
}
