#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = '0';
	while (letter <= '9')
	{
		ft_putchar(letter);
		letter += 1;
	}
}

int main(){
  ft_print_alphabet();
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
