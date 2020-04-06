#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct s_btree
{
  struct s_btree *left;
  struct s_btree *right;
  void *itme;
}t_btree;

#endif
