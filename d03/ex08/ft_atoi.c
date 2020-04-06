int ft_atoi(char *str)
{
  int i=0,negative=1,res=0;
  if(str[0]=='-' || str[0]=='+')
    i=1;
    if(str[0]=='-')
      negative= -1;
  while (str[i]!='\0'&& (str[i]>='0' || '9'>=str[i]))
  {
    res *=10;
    res += str[i]-'0';
    i++;
  }
  return res*negative;
}
