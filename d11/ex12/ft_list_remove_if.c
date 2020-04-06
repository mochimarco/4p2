#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
  t_list *rem;
  t_list *current;

  current = *begin_list;
  while (current && current->next)
  {
    if((*cmp)(current->next->data,data_ref)==0)
      rem=current->next;
      current->next=current->next->next;
      free(rem);
  }
  current = *begin_list;
  if(current && (*cmp)(curren->data,data)==0)
  {
    *begin_list=current->next;
    free(current);
  }
}
