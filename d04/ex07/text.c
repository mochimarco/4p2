#include <stdio.h>
int ft_find_next_prime(int nb);
int main()
{
  printf("%d\n",ft_find_next_prime(-19) );
  printf("%d\n",ft_find_next_prime(0) );
  printf("%d\n",ft_find_next_prime(1) );
  printf("%d\n",ft_find_next_prime(9) );
  printf("%d\n",ft_find_next_prime(10) );
  printf("%d\n",ft_find_next_prime(11) );
}
