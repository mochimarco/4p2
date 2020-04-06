#include<stdio.h>
char *ft_strcapitalize(char *str);

int main()
{
  char str[]="fda a  dd ";
  char str1[]="123s dsfd";
  ft_strcapitalize(str);
  ft_strcapitalize(str1);
  printf("%s\n",str );
  printf("%s\n",str1 );
}
