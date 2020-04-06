int ft_iterative_factorial(int nb)
{
  int fact;
  if(nb<0)
    fact=0;
  else
    fact=1;
    while(nb>0)
    {
      fact *= nb;
      nb--;
    }
  return fact;
}
