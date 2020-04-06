#include <stdio.h>
int ft_str_is_numeric(char *str);

int main()
{
  char str[80]="2132avklviksdfj";
  char s[90]="12354698";
  char str1[]="-123";
  char str2[]="+123";
  printf("%d\n",ft_str_is_numeric(str));
  printf("%d\n",ft_str_is_numeric(s) );
  printf("%d\n",ft_str_is_numeric(str1));
  printf("%d\n",ft_str_is_numeric(str2) );
  return 0;
}
