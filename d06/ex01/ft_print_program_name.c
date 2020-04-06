void	ft_putchar(char c);

void ft_print_program_name(void)
{
  char str[255]=__FILE__;
  char *p=str;
  while(*p){
    ft_putchar(*p);
    p++;
  }
}

int main()
{
	ft_print_program_name();
  return 0;
}
