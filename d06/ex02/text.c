#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);



int main(int argc, char const *argv[])
{
  if(argc==1)
  {
    return 0;
  }
  else
  {
    for(int i=1;i<argc;i++)
    {
      for(int j=0;argv[i][j];j++)
      {
        ft_putchar(argv[i][j]);
      }
      ft_putchar('\n');
    }
  }
  return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
