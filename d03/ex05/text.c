#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int main()
{
	char str[80]="abcdefg";
	ft_putstr(str);

  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
