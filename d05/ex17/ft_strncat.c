char *ft_strncat(char *dest, char *src, int nb)
{
    char *p=dest;
    while (*dest)
      dest++;
    while(*src && nb)
    {
      *dest++ = *src++;
      nb--;
    }
    *dest='\0';
    return p;
}
