#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void ft_div_mod(int *a,int *b)
{
	int tmp;
	tmp=(*a)%(*b);
	*b=(*a)/(*b);
	*a=tmp;
}

int main()
{
	int a=5,b=2;
	ft_div_mod(&a,&b);
	printf("amari%d,syou%d\n",a,b );
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
