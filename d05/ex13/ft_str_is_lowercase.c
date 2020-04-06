int ft_str_is_lowercase(char *str)
{
  if(!*str)
    return 0;
  while(*str)
  {
    if('a'>*str || *str>'z')
      return 0;
    str++;
  }
  return 1;
}
