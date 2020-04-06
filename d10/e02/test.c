#include<stdio.h>
int *ft_map(int *tab, int length, int(*f)(int));
int ft_recursive_factorial(int nb);

int ft_by(int n)
{
  int res=n*2;
  return res;
}

int main()
{
  int i=0;
  int *map;
  int arr[]={1,2,3,4,5,6};
  map=ft_map(arr,6,&ft_recursive_factorial);
  while(map[i])
  {
    printf("%d\n",map[i]);
    i++;
  }
}
