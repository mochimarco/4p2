#include <stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int))
{
  int i=0;
  int *copy;
  copy=(int*)malloc(sizeof(int)*length);
  while(i<length)
  {
    copy[i]=f(tab[i]);
    i++;
  }
  return copy;
}
