#include <stdlib.h>
#include <stdio.h>

char *ft_concat_params(int argc, char **argv)
{
  char *to;
  int to_n,arg_n,chara_n;

  int length=0;
  int i,j;

  for(i=1;i<argc;i++)
  {
    length++;
    for(j=0;argv[i][j];j++)
    {
      length++;
    }
  }
  to=(char*)malloc(sizeof(char)*length);
  to_n=0;
  for(arg_n=1;arg_n<argc;arg_n++)
  {
    for(chara_n=0;argv[arg_n][chara_n];)
    {
      to[to_n]=argv[arg_n][chara_n];
      to_n++;
      chara_n++;
    }
    to[to_n]='\n';
    to_n++;
  }
  to[to_n-1]='\0';
  return to;
}
