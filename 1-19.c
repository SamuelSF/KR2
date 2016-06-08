#include <stdio.h>

#define MAXLINE 1024

/* function that prints it's output but reverses the lines */

int nextline(char line[], int maxline);
void trim_newline(char s[]);
void reverse(char s[]);


int main()
{
  char line[MAXLINE];

  while (nextline(line, MAXLINE) > 0){
    trim_newline(line);
    reverse(line);
    printf("%s\n", line);
  }
  
  return 0;
}

int nextline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n'){
    s[i] = '\n';
    ++i;
  }
  s[i] ='\0';
  return i;
}

void trim_newline(char s[]){
  int i;
  
  for (i = 0; s[i] != '\0'; ++i)
    if (s[i] == '\n')
      s[i] = '\0';
}
  
void reverse(char s[]){
  int i, j, c;

  j = 0;
  while (s[j] != '\0')
    ++j;
  --j;

  for (i = 0; i < j; i++){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    --j;
  }
}
