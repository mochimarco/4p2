
void		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter -= 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
