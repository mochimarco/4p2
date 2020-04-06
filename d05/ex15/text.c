#include <stdio.h>
int ft_str_is_printable(char *str);

int main()
{
  char str[80]="vklviksdfj";
  char s[90]="KLDFS\nJKJOI";
  printf("%d\n",ft_str_is_printable(str));
  printf("%d\n",ft_str_is_printable(s) );
  return 0;
}
