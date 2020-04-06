#include <stdlib.h>
#include "ft_list.h"


t_list *ft_list_push_params(int ac, char **av)
{
  t_list *p_list;/*構造体を指すアドレスが入っているだけ*/
  int i;
  t_list *tmp;

  if(ac <= 0)
    return NULL;

  i=1;
  tmp=NULL;
  while(i<ac)
  {
    p_list=ft_create_elem(av[i]);/*アドレス差し替え*/
    p_list->next=tmp;
    tmp=p_list;
    ++i;
  }
  return p_list;
}
