#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void ft_div_mod(int a,int b,int *div,int *mod)
{
	*mod=a%b;
	*div=a/b;
}

int main(){
	int a=5,b=2,div,mod;
	ft_div_mod(a,b,&div,&mod);
	printf("%d,%d\n",div,mod );
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
