#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main()
{
  char s1[]="123456";
  char s2[]="123456";
  char s3[]="123";
  printf("%s\n",ft_strcmp(s1,s2)==0 ? "same":"different" );
  printf("%s\n",ft_strcmp(s1,s3)==0 ? "same":"different" );
}
