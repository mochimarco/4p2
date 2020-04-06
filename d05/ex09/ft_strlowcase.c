char *ft_strlowcase(char *str)
{
  char *p=str;
  while(*str)
  {
    if('A' <= *str && *str <= 'Z')
    {
      *str=*str+('a'-'A');
      str++;
    }
    else
      str++;
  }
  return p;
}
