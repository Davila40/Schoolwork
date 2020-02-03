#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int copyline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
  int len; /* current line length */
  //int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  //char longest[MAXLINE]; /* longest line saved here */
  //max = 0;
  int lowerbound = 80;
  while ((len = copyline(line, MAXLINE)) > 0)
  if (len > lowerbound) {
    printf("%s\n", line);
  }
  /*if (max > 0)
  printf("%s\n", longest);
  printf("There were %d characters\n", max);*/
  return 0;
}
/* getline: read a line into s, return length */
int copyline(char s[],int lim)
{
  int c, i;
  for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
  {
    if (i < MAXLINE - 2)
    {
      s[i] = c;
    }
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
  ++i;
}
