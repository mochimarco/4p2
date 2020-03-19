#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);



int main(int argc, char const *argv[])
{
  int i;
  static int j;
  if(argc==1)
  {
    return 0;
  }
  else
  {
    for(i=1;i<argc;i++)
    {
      for(j=0;argv[i][j];j++)
      {
      }
      for(;j>=0;j--)
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
