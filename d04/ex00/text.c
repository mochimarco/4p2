#include <stdio.h>
#include <unistd.h>
#include <string.h>
void		ft_putchar(char c);

int ft_iterative_factorial(int nb)
{
  int result=1;
  if(nb<1 || nb>12)
  {
    return 0;
  }
  while(nb>0)
  {
    result *= nb--;
  }
  return result;
}

int main()
{
	int str=15;
  printf("%i\n",ft_iterative_factorial(str) );
  str=12;
  printf("%i\n",ft_iterative_factorial(str) );
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
