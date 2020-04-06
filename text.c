#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	int i=0;
	t_list *rem;
	while(begin_list[i])
	{
		free(begin_list[i]);
		i++;
	}
}
