#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "getch.h"
#include <stdlib.h>
void		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
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
