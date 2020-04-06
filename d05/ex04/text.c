#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
  char from[20]="123456789";
  char to[20]="asdfghjkl";
  printf("%s\n",ft_strncpy(to,from,5) );
  printf("%s\n",ft_strncpy(to,from,20) );

}
