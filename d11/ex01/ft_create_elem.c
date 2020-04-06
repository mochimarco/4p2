#include <stdlib.h>
#include "ft_list.h"


t_list *ft_create_elem(void *data)
{
  t_list *element;
  element=(t_list*)malloc(sizeof(t_list));
  if(!element)
  {
    return NULL;
  }
  element->data=data;
  element->next=NULL;
  return element;
}
