#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a=21,b=2;
	ft_ultimate_div_mod(&a,&b);
	printf("余り%d,商%d\n",a,b );
  return 0;
}
