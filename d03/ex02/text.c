#include <stdio.h>
#include <unistd.h>


void ft_swap(int *a,int *b);

int main()
{
	int a=4,b=2;
	printf("a:%d,b:%d\n",a,b );
	ft_swap(&a,&b);
	printf("a:%d,b:%d\n",a,b );
  return 0;
}
