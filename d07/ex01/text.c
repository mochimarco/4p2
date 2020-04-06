#include<stdio.h>
int *ft_range(int min, int max);

int main()
{
  int *arr=ft_range(-4,5);
  while(*arr<5)
  {
    printf("%d\n",*arr++ );
  }
  return 0;
}
