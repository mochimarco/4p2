#include "ft_list_size.h"

int ft_list_size(t_list *begin_list)
{
  int i=0;
  t_list *tmp;
  if(!*begin_list)
    return i;
  tmp=*begin_list;
  while(tmp->next)
  {
    tmp=tmp->next
    i++;
  }
    return i;
  }
}
