void	ft_putchar(char c);

void ft_sort_params(int ac,char *argv[])
{
  int i=1;
  int j,ascii;

  while(i<ac)
  {
    ascii=33;
    while(ascii<127)
    {
      j=0;
      while(argv[i][j])
      {
        if(argv[i][j]==ascii)
          ft_putchar(argv[i][j]);
        j++;
      }
      ascii++;
    }
    ft_putchar('\n');
    i++;
  }
}

int main(int argc, char *argv[])
{
  ft_sort_params(argc,argv);
  return 0;
}
