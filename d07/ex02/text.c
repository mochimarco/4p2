#include<stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main()
{
  int *ap;
  int **app;
  app = &ap;

  int index=ft_ultimate_range(app,4,15);

  printf("index:%d\n",index );
  printf("**app:%d\n",**app );
  printf("*((*app)+1):%d\n",*((*app)+1) );
  while(**app)
  {
    printf("%d\n",**app);
    (*app)++;
  }
  return 0;
}
