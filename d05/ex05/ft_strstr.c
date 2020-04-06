#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int f_c=0;
  int i=0;

  if(!*to_find)
    return str;
  while(str[f_c])
  {
    i=0;
    if(str[f_c]==to_find[0])
    {
      while(to_find[i] && str[f_c+i]==to_find[i])
        i++;
      if(to_find[i]=='\0' && str[f_c+i-1]==to_find[i-1])
        return &str[f_c];
    }
    f_c++;
  }
  return 0;
}
