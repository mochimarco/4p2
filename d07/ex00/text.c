#include <stdio.h>
char *ft_strdup(char *src);

int main()
{
  char str[] = "abcdefg";
  printf("%s\n",ft_strdup(str) );
  return 0;
}
