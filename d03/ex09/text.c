#include <stdio.h>
void ft_sort_integer_table(int *tab, int size);

int main()
{
  int arr[9]={2,3,1,5,6,4,8,9,7};
  ft_sort_integer_table(arr,9);
  int i=0;
  while(i<9)
    printf("%d\n",arr[i++] );
  return 0;
}
