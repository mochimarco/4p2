#include <stdio.h>
char *ft_strncat(char *dest, char *src, int n);

int main()
{
  char str[80]="aaa";
  char str1[90]="AAA";
  char str2[]="111";
  char str3[50]="";
  printf("%s\n",ft_strncat(str,str1,5) );
  printf("%s\n",ft_strncat(str3,str2,2) );
  printf("%s\n",str );
  printf("%s\n",str1 );
  printf("%s\n",str2);
  printf("%s\n",str3 );
  return 0;
}
