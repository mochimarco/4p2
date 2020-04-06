void ft_print_words_tables(char **tab);
char **ft_split_whitespaces(char *str);

#define NULL 0

int main()
{
  char *s1="abc";
  char *s2="def";
  char *s3="ghi";
  char *w_table[]={s1,s2,s3,NULL};
  ft_print_words_tables(w_table);

  char p[]="\n aa \n bb c ";
  char **dp;
  dp=ft_split_whitespaces(p);
  ft_print_words_tables(dp);

  return 0;
}
