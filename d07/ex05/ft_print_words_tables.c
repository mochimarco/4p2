void ft_putchar(char c);

void ft_putstr(char *str)
{
  while(*str)
  {
    ft_putchar(*str++);
  }
}

void ft_print_words_tables(char **tab)
{
  int i=0;
  while(tab[i])
    {
      ft_putstr(tab[i]);
      ft_putchar('\n');
      i++;
    }
}
