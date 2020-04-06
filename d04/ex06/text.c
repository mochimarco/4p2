#include <stdio.h>
int ft_is_prime(int nb);

int main()
{
  printf("%s\n",ft_is_prime(-1)? "prime":"not prime" );
  printf("%s\n",ft_is_prime(13)? "prime":"not_prime" );
  printf("%s\n",ft_is_prime(100)? "prime":"not_prime");
}
