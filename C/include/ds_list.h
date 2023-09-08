#ifndef DS_LIST_H
#define DS_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct ds_node_t node_t;
typedef struct ds_list_t ds_list_t;

/**
 * Create a new ds_list_t with a specific value and set its
 * next pointer to NULL by default.
 *
 * @param void* value.
 *
 * @return ds_node_t*.
 */
ds_list_t* ds_list_create();

/**
 * Get the size of the list.
 *
 * @param ds_list_t* n.
 *
 * @return Size of the list.
 */
int ds_list_size(ds_list_t* list);

/**
 * Add a node to the front of the list.
 *
 * @param node_t** list.
 *
 * @param void* value.
 *
 * @return void.
 */
void ds_list_push_front(ds_list_t* list, void* value);

/**
 * Push a node to the back of the list.
 *
 * @param node_t** list.
 *
 * @param void* value.
 *
 * @return void.
 */
void ds_list_push_back(ds_list_t* list, void* value);

/**
 * Get a node at a specific index if it exists.
 *
 * @param ds_list_t* list The ds_list_t to check.
 *
 * @param int index.
 *
 * @return void.
 */
node_t* ds_list_node_at_index(ds_list_t* list, int index);


/**
 * Free the entire list from memory.
 *
 * @param ds_list_t* list.
 *
 * @return void.
 */
void ds_list_free(ds_list_t* list);

/**
 * Print a complete list to stdout.
 *
 * @param ds_list_t* list.
 */
void ds_list_print(ds_list_t* list);

#endif //DS_LIST_H
