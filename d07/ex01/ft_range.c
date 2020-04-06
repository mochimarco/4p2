#include <stdlib.h>

int *ft_range(int min, int max)
{
  int *arr;
  int i;

  arr=(int*)malloc((max-min) * sizeof(int));
  if(arr == NULL)
    return NULL;

  for(i=0;(min+i)<max;i++)
  {
    arr[i]=min+i;
  }
  return arr;
}
