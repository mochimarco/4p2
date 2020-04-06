#include<stdio.h>
void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nb);

int main()
{
  int table[]={1,2,3,4,5,6};
  ft_foreach(table,6,&ft_putnbr);
  return 0;
}
