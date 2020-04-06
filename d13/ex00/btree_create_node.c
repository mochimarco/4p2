#include <stdlib.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
  t_btree *node;

  if(!(node=(t_btree*)malloc(sizeof(t_btree))))
    return NULL;
  node->item=item;
  node->left=NULL;
  node->right=NULL;
  return node;
}
