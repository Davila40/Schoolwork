#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int copyline(char line[], int maxline);
void copy(char to[], char from[]);
void cleanline(char line[], int length);
/* print the longest input line */
int main()
{
  int len; /* current line length */
  //int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  //char longest[MAXLINE]; /* longest line saved here */
  //max = 0;
  while ((len = copyline(line, MAXLINE)) > 0)
  {
    cleanline(line, len);
    printf("%s", line);
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
void cleanline(char line[], int length)
{
  int new = 1;
  if(line[length - 1] == '\n')
  {
    ++new;
  }
  int i;
  for(i = length - new; i >= 0 && (line[i] == ' ' || line[i] == '\t'); --i)
  {
    line[i] = '\0';
  }
  if(i != -1 && new == 2)
  {
    line[i + 1] = '\n';
  }
}
