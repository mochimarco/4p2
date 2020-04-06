#include<stdio.h>
int ft_str_is_uppercase(char *str);

int main()
{
  char empty[]="";
  char str1[]="5d";
  char str2[]="23";
  char str3[]="SDSDKLJ";
  char str4[]="aklfsal";
  printf("%d\n",ft_str_is_uppercase(empty) );
  printf("%d\n",ft_str_is_uppercase(str1) );
  printf("%d\n",ft_str_is_uppercase(str2) );
  printf("%d\n",ft_str_is_uppercase(str3) );
  printf("%d\n",ft_str_is_uppercase(str4) );

}
