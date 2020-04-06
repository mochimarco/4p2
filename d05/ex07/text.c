#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
  char s1[]="123456";
  char s2[]="123456";
  char s3[]="123";
  printf("%s\n",ft_strncmp(s1,s3,7)==0 ? "same":"different" );
  printf("%s\n",ft_strncmp(s1,s3,3)==0 ? "same":"different" );
  printf("%s\n",ft_strncmp(s1,s3,0)==0 ? "same":"different" );

}
