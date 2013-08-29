#include <stdio.h>
#include <string.h>

int main()
{
  //define two strings s,t and initialize s
  char s[10] = "testing", t[10];
  //copy s to t
  strcpy(t,s);
  //test if s is identical to t
  if(!strcmp(s,t))
printf ("The strings are identical");
  else
printf ("The strings are different");

  return 0;

}
