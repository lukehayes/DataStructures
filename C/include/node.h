#ifndef DS_NODE_H
#define DS_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
node_t* ds_list_create_node(void* value);

/**
 * Connect a node_t to another node_t.
 *
 * @param node_t* a.
 * @param node_t* b.
 *
 * @return void.
 */
void ds_list_connect_node(node_t* a, node_t* b);

/**
 * Check if a node is equal to NULL.
 *
 * @param node_t* n.
 *
 * @return int.
 */
bool ds_list_node_null(node_t* n);

/**
 * Check if a node is NOT equal to NULL.
 *
 * @param node_t* n.
 *
 * @return int.
 */
bool ds_list_node_not_null(node_t* n);

/**
 * Get the size of the list.
 *
 * @param node_t* n.
 *
 * @return Size of the list.
 */
int ds_list_node_list_size(node_t* head);

/**
 * Add a node to the front of the list.
 *
 * @param node_t** head.
 *
 * @param void* value.
 *
 * @return void.
 */
void ds_list_push_front(node_t** head, void* value);

/**
 * Push a node to the back of the list.
 *
 * @param node_t** head.
 *
 * @param void* value.
 *
 * @return void.
 */
void ds_list_push_back(node_t** head, void* value);

/**
 * Add a node to the end of the list.
 *
 * @param node_t* head.
 *
 * @param void* value.
 *
 * @return void.
 */
void ds_list_push_value(node_t* head, void* value);

/**
 * Get a node at a specific index if it exists.
 *
 * @param node_t* head.
 *
 * @param int index.
 *
 * @return void.
 */
node_t* ds_list_get_node_at_index(node_t* head, int index);


void ds_list_free_list(node_t* head);

/**
 * Print each node_t value until the end.
 *
 * @param node_t* head.
 *
 * @return void.
 */
void ds_list_print_node_list(node_t* head);

/**
 * Print a single node_t value.
 *
 * @param node_t* node.
 *
 * @return void.
 */
void ds_list_print_node(node_t* node);

/**
 * Print a specific node value.
 */
static void ds_list_print_node_value(node_t* node, int index);

#endif //DS_NODE_H
