#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_ft(int *nbr);

int main(){
	int a=1;
  ft_ft(&a);
	printf("%d\n", a);
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
