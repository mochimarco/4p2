#include <unistd.h>
void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putnbr(int nb)
{
  if(nb<0)
    ft_putchar('-'), nb*=-1;
  if(0<=nb && nb<=9)
    ft_putchar(nb+'0');
  else if(9<nb)
  {
    ft_putnbr(nb/10);
    ft_putchar(nb%10+'0');
  }
}
