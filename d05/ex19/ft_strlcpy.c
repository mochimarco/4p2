unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i=0;
  while(*src && (i<size))
    *dest++ = *src++,i++;
  *dest='\0';
  return i;
}
