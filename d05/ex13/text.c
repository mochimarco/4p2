#include <stdio.h>
int ft_str_is_lowercase(char *str);

int main()
{
  char str[80]="vklviksdfj";
  char s[90]="12354698";
  printf("%d\n",ft_str_is_lowercase(str));
  printf("%d\n",ft_str_is_lowercase(s) );
  return 0;
}
