#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct s_btree
{
  struct s_btree *left;
  struct s_btree *right;
  void *item;
}t_btree;

void btree_apply_prefix(t_btree *root, void (*applyf)(void *));

#endif
