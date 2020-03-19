#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void	ft_is_negative(int n)
{
	if(n<0)
	{
		ft_putchar('N');
	}
	else if(n>0)
	{
		ft_putchar('P');
	}
}

int main(){
  ft_is_negative(-1);
	ft_is_negative(1);
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
