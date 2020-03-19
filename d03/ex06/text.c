#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

int ft_strlen(char *str)
{
	int n=0;
	while(*str)
	{
		str++;
		n++;
	}
	return n;
}

int main()
{
	char str[80]="abcdefg";
	printf("%d\n",ft_strlen(str));

  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
