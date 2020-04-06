void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
  int i,j;
  char *tmp;

  i=0;
  while(tab[i] != 0)
  {
    j=i+1;
    while(tab[j]!= 0)
    {
      if((*cmp)(tab[i],tab[j]) > 0)
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
