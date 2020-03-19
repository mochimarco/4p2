#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void	ft_print_comb(void)
{
	for(char i=0;i<=7;i++)
	{
		for(char k=i+1;k<=8;k++)
		{
			for(char l=k+1;l<=9;l++)
			{
			ft_putchar('0'+i);
			ft_putchar('0'+k);
			ft_putchar('0'+l);
			ft_putchar(',');
			}
		}
	}
}

int main(){
  ft_print_comb();
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
