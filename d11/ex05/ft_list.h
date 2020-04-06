#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
  data *void;
  struct s_list *next;
}t_list

t_list *ft_create_elem(voiid *data);
#endif
