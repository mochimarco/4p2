#include <stdio.h>
#include <unistd.h>
#include <string.h>
void	ft_putchar(char c);



int main(int argc, char const *argv[])
{
  int i,k,l;
  static int j;
  char str[80];
  char *ps=str;
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
        str[j]=argv[i][j];
      }
      for(k=0;str[k];k++)
      {
        for(l=k+1;str[l];l++)
        {
          if(str[k]>str[l])
          {
            char tmp;
            tmp=str[k];
            str[k]=str[l];
            str[l]=tmp;
          }
        }
      }

      while(*ps)
      {
        ft_putchar(*ps);
        ps++;
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
