int ft_str_is_printable(char *str)
{
  if(!*str)
    return 0;
  while(*str)
  {
    if(*str<32 || 126< *str)
      return 0;
    str++;
  }
  return 1;
}
