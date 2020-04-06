#include <stdlib.h>
#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*))
{
	int i=0,count=0;
	while(tab[i])
	{
		if(f(tab[i]))
			count++;
		i++;
	}
	return count;
}
