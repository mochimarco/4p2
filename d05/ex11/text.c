#include <stdio.h>
int ft_str_is_alpha(char *str);
int main()
{
  char str[20]="abcH";
  char s[20]="asdfs1";
  printf("%d\n",ft_str_is_alpha(str));
  printf("%d\n",ft_str_is_alpha(s));
  return 0;
}
