int ft_is_prime(int nb)
{
  int index=2;
  if(nb<=2)
    return 0;
  while(index<=nb/2)
  {
    if(nb%index == 0)
      return 0;
    else
      index++;
  }
  return 1;
}
