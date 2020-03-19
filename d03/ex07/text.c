#include <stdio.h>
#include <unistd.h>
#include <string.h>
void		ft_putchar(char c);

char *ft_strrev(char *str)
{
	static char reverse[80];
	char *r=reverse;
	while(*str)
	{
		str++;
	}
	str--;
	while(*str)
	{
		*r++=*str--;
	}
	return reverse;
}

int main()
{
	char str[80]="abcdefg";
	printf("%s\n",ft_strrev(str));

  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
