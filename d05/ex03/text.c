#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int  main()
{
  char from[]="1234";
  char to[20]="asdasdfghjk";
  printf("%s\n", ft_strcpy(to,from));
    return 0;
}
