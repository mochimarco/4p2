#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void ft_swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
	int a=4,b=2;
	ft_swap(&a,&b);
	printf("%d,%d\n",a,b );
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
