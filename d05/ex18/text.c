#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
  char str[80]="aaa";
  char str1[90]="AAA";
  char str2[]="111";
  char str3[50]="";
  printf("%d\n",ft_strlcat(str,str1,5) );
  printf("%d\n",ft_strlcat(str3,str2,2) );
  printf("%s\n",str );
  printf("%s\n",str1 );
  printf("%s\n",str2);
  printf("%s\n",str3 );
  return 0;
}
