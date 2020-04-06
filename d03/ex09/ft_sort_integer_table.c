void ft_sort_integer_table(int *tab, int size)
{
  int i,k,tmp;
  for(i=0;i<size;i++)
  {
    for(k=i+1;k<size;k++)
    {
      if(tab[i]>tab[k])
      {
        tmp=tab[i];
        tab[i]=tab[k];
        tab[k]=tmp;
      }
    }
  }
}
