char *ft_strcapitalize(char *str)
{
  int i=1;
  if(str[0]<='z' && str[0]>='a')
  {
    str[0]+='A'-'a';
  }
  while(str[i])
  {
    if(str[i]==' ')
    {
      if(str[i+1]<='z' && str[i+1]>='a')
      {
        str[i+1]+=('A'-'a');
        i++;
      }
      i++;
    }
    else
    {
      i++;
    }
  }
  return str;
}
