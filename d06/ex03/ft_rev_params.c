void	ft_putchar(char c);

void ft_rev_params(int ac,char *argv[])
{
  int i=1;
  int j;

  while(i<ac)
  {
    j=0;
    while(argv[i][j])
      j++;
    while(0<=j)
    {
      ft_putchar(argv[i][j]);
      j--;
    }
    ft_putchar('\n');
    i++;
  }
}

int main(int argc, char *argv[])
{
  ft_rev_params(argc,argv);
  return 0;
}
