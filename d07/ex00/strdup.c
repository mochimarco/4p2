#include <stdlib.h>

int str_leng(char *str)
{
  int i=0;
  while(*str)
  {
    i++,str++;
  }
  return i;
}

char *ft_strdup(char *str)
{
  int length=str_leng(str);
  char *dup;
  int i=0;
  dup=(char*)malloc(sizeof(char) * length);
  if(dup == NULL)
    return NULL;
  while(str[i])
  {
    dup[i] = str[i];
    i++;
  }
  dup[i]='\0';
  return dup;
}
