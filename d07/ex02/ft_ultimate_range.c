#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int *arr;
  int i;

  arr=(int*)malloc((max-min) * sizeof(int));
  if (arr == NULL)
    return (0);

  for(i=0;(min+i)<max;i++)
  {
    arr[i]=min+i;
  }
  *range= arr;
  return i;
}
