#ifndef DS_NODE_H
#define DS_NODE_H

#include <stdlib.h>

typedef struct node_t
{
  void* value;
  struct node_t* next;

} node_t;

node_t* create_node(void* value)
{
  node_t* n = malloc(sizeof(node_t));
  n->value = value;
  n->next = NULL;

  return n;
}

#endif //DS_NODE_H
