#include <stdlib.h>

int ft_strlen(char *str)
{
  int i=0;
  while(*str)
    str++,i++;
  return i;
}

int words_count(char *str)
{
  int count=0;
  while(*str)
  {
    if(*str!=' ' && *str!='\n' && *str!='\t')
      {
        if(*(str-1)==' ' || *(str-1)=='\n' || *(str-1)=='\t' || count==0)
        {
          count++,str++;
        }
        else
          str++;
      }
    else
      str++;
  }
  return count;
}
char **ft_split_whitespaces(char *str)
{
  int entire_length=ft_strlen(str);
  int word_count=words_count(str);

  char **dp;
  int i=-1,j=0,each_length;
  dp=(char**)malloc(sizeof(char*)*word_count);
  while(i<entire_length)/*ポインタ一つずつにmallocで文字列の長さを割当て*/
  {
    if(str[i+1]==' ' || str[i+1]=='\t' || str[i+1]=='\n' || str[i+1]=='\0')/*区切りの場合*/
    {
      if(str[i]==' '|| str[i]=='\t' || str[i]=='\n'|| i==-1)/*一つ前も区切り文字のとき*/
        i++;
      else/*文字が途切れたとき*/
      {
        dp[j]=(char*)malloc(sizeof(char)*(each_length+1));
        i++,j++;
      }
    }
    else if((str[i+1]!=' ') && (str[i+1]!='\t') && (str[i+1]!='\n'))/*文字の場合*/
    {
      if(str[i]==' '|| str[i]=='\t' || str[i]=='\n'|| i== -1 )/*一文字目のとき*/
      {
        each_length=1,i++;
      }
      else/*二文字目以降*/
      {
        each_length++,i++;
      }
    }
  }

  int l=0,k=-1,m=0;
  while(str[l])
  {
    if(str[l]==' '||str[l]=='\t' || str[l]=='\n')
    {
      if(str[l-1]!=' '&& str[l-1]!='\t' && str[l-1]!='\n' && l!=0)
      {
        dp[k][m]='\0';
        l++;
      }
      else
      {
        l++;
      }
    }
    else if(str[l]!=' '&& str[l]!='\t' && str[l]!='\n')
    {
      if(str[l-1]==' '|| str[l-1]=='\t' || str[l-1]=='\n'|| l==0)
      {
        k++,m=0;
        dp[k][m]=str[l];
        l++,m++;
      }
      else
      {
        dp[k][m]=str[l];
        l++,m++;
      }
    }
  }
  dp[k][m]='\0';
  dp[k+1]=0;
  return dp;
}
