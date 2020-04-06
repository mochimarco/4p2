void	ft_putchar(char c);

void ft_print_params(int ac,char *argv[])
{
  int i=1;
  int j;

  while(i<ac)
  {
    j=0;
    while(argv[i][j])
    {
      ft_putchar(argv[i][j]);
      j++;
    }
    ft_putchar('\n');
    i++;
  }
}

int main(int argc, char *argv[])
{
  ft_print_params(argc,argv);
  return 0;
}
