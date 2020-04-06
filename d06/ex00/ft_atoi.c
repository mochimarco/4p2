int ft_atoi(char *str)
{
  int negative=0,i=0,res=0;
  while(str[i])
  {
    if(str[i]=='-')
    {
      negative=1;
      i++;
    }
    res*=10;
    res+=(str[i]-'0');
    i++;
  }
  if(negative)
    res*=(-1);
  return res;
}
