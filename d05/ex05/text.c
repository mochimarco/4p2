#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int main()
{
  char str[]="abcdefabe";
  char find[10]="abe";
  char search[10]="zzz";
  printf("result:%s\n", ft_strstr(str,find));
  printf("result:%s\n", ft_strstr(str,search));

}
