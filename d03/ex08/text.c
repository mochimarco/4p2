#include <stdio.h>
int ft_atoi(char *str);

int main()
{
	char str[80]="-156";
	char string[]="+123";
	char s[]="321";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",ft_atoi(string) );
	printf("%d\n",ft_atoi(s) );
  return 0;
}
