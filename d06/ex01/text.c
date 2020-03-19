#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);

void ft_print_program_name(void)
{
  char str[80]=__FILE__;
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
