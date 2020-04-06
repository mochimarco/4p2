char *ft_strrev(char *str)
{
  int o_index=0,r_index=0;
  char tmp;
  while (str[o_index])
    o_index++;
  o_index--;

  while(r_index < (o_index+1)/2)
  {
    tmp=str[r_index];
    str[r_index]=str[o_index-r_index];
    str[o_index-r_index]=tmp;
    r_index++;
  }
  return str;
}
