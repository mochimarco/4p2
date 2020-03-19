#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);

void ft_putstr(char *str)
{
  char *p=str;
  while(*p)
  {
    ft_putchar(*p);
    p++;
  }
}

int main()
{
	char str[80]="abcdefg";
  ft_putstr(str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
