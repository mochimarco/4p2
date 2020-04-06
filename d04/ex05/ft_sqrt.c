#include <stdio.h>

int ft_sqrt(int nb)
{
  if(nb<=0)
    return 0;
  int index=1;

  while(index)
  {
    if(index*index>nb)
      return 0;
    else if(index*index==nb)
    {
      return index;
      break;
    }
    else
      index++;
  }
}
