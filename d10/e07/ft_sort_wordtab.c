int		ft_strcmp(char *s1, char *s2);

void ft_sort_wordtab(char **tab)
{
  int i,j;
  char *tmp;

  i=0;
  while(tab[i] != 0)
  {
    j=i+1;
    while(tab[j]!= 0)
    {
      if(ft_strcmp(tab[i],tab[j]) > 0)
      {
        temp=tab[i];
        tab[i]=tab[j];
        tab[j]=temp;
      }
      j++;
    }
    i++;
  }
}
