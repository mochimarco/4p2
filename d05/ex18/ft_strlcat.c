unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int i=0;
  while(*dest)
    dest++,i++;
  while(*src && (i<size))
  {
    *dest++ = *src++;
    i++;
  }
  *dest='\0';
  return i;
}
