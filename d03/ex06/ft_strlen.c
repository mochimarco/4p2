int ft_strlen(char *str)
{
  int index=0;
  while(str[index])
    index++;
  return index;
}
