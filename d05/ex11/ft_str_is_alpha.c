int ft_str_is_alpha(char *str)
{
  int res=1;
  if(!(*str))
  {
    res=0;
    return res;
  }
  while((*str<='z' && 'a'<=*str)||(*str<='Z' && 'A' <= *str))
  {
    str++;
  }
  if(*str)
    res=0;
  return res;
}
