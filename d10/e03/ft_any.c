#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*))
{
	int i=0,;
	while(tab[i])
	{
		if(f(tab[i]))
			return 1;
		i++;
	}
	return 0;
}