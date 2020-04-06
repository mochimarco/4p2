int ft_str_is_uppercase(char *str)
{
  if(!*str)
    return 0;
  while(*str)
  {
    if(*str<'A' || 'Z'< *str)
      return 0;
    str++;
  }
  return 1;
}
