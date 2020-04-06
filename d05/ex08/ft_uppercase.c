#include <stdio.h>

char *ft_strupcase(char *str)
{
  char *p=str;
  while(*str)
  {
    if('a' <= *str && *str <= 'z')
    {
      *str=*str+('A'-'a');
      str++;
    }
    else
      str++;
  }
  return p;
}
