#include <stdio.h>
#include <unistd.h>
#include <string.h>
void		ft_putchar(char c);

int ft_atoi(char *s)
{
    int n=0;
    int sign;
    char *ps=s;
    while(*ps==' ')
    {
      ps++;
    }

    sign = ( *ps == '-' ) ? -1 : 1;    //符号を保存する

    if( *ps == '-' || *ps == '+' )
    {
      ps++;
    }

    while('0'<=(*ps) && (*ps)<='9')
    {
      n = 10 * n + ( *ps - '0' );
      ps++;
    }
    return sign * n;                    //符号を反映
}

int main()
{
	char str[80]="-123";
	printf("%i\n",ft_atoi(str));

  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
