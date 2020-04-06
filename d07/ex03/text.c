#include <stdio.h>
char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
  char *p;
  p=ft_concat_params(argc,argv);
  printf("%s\n",p );
}
