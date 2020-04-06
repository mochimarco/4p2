#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
  while(begin_list && nb--)
    begin_list=begin_list->next;
  if(begin_list)
    return *begin_list;
  else
    return 0;
}
