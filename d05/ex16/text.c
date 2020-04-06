#include <stdio.h>
char *ft_strcat(char *dest, char *src);

int main()
{
  char str[80]="aaa";
  char str1[90]="AAA";
  char str2[]="111";
  char str3[50]="";
  printf("%s\n",ft_strcat(str,str1) );
  printf("%s\n",ft_strcat(str3,str2) );
  return 0;
}
