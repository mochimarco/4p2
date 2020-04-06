#include<stdio.h>
char **ft_split_whitespaces(char *str);

int main()
{
  char p[]="\n ab \n efg dsfads ";
  char **dp;
  dp=ft_split_whitespaces(p);
  printf("%s\n%s\n%s\n",dp[0],dp[1],dp[2] );
  return 0;
}
