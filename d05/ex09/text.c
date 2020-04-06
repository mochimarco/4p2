#include <stdio.h>

char *ft_strlowcase(char *str);
int main()
{
  char str[]="AbCdef123";
  ft_strlowcase(str);
  printf("%s\n",str );
}
