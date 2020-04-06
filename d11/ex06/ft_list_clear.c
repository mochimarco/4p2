#include <stdlib.h>
#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
  t_list *current;
  t_list *temp;
  if(!begin_list || !*begin_list)
    return ;
  while(*begin_list)
  {
    temp=*begin_list;/*先頭から順に消してく*/
    *begin_list=(*begin_list)->next;
    free(temp);
  }
  *begin_list = NULL;
}
