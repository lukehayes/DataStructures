#ifndef DS_NODE_H
#define DS_NODE_H

#include <stdlib.h>

typedef struct node_t
{
  void* value;
  struct node_t* next;

} node_t;


/**
 * Create a new node_t with a specific value and set its
 * next pointer to NULL by default.
 *
 * @param void* value.
 *
 * @return node_t*.
 */
node_t* create_node(void* value)
{
  node_t* n = malloc(sizeof(node_t));
  n->value = value;
  n->next = NULL;

  return n;
}

/**
 * Connect a node_t to another node_t.
 *
 * @param node_t* a.
 * @param node_t* b.
 *
 * @return void.
 */
void connect_node(node_t* a, node_t* b)
{
  a->next = b;
}

/**
 * Print each node_t value until the end.
 *
 * @param node_t* head.
 *
 * @return void.
 */
void print_node_list(node_t* head)
{
  if(head != NULL)
  {
    printf("Node Value: %i \n", head->value);
  }

  while(head->next != NULL)
  {
    head = head->next;
    printf("Node Value: %i \n", head->value);
  }
}

#endif //DS_NODE_H
