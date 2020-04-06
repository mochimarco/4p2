int ft_iterative_power(int nb, int power)
{
  if(power<0)
    return 0;
  else if(power==0)
    return 1;

  int i=1,res=nb;
  while(i<power)
  {
    res*=nb;
    i++;
  }
  return res;
}
