#ifndef DS_LIST_H
#define DS_LIST_H

#include "node.h"

typedef struct List_ List;

List* CreateList();

/**
 * Free all the memory that the list has taken
 */
void  DestroyList(List* list);

/**
 * Output a formatted view of the list.
 */
void PrintList(List* list);

/**
 * Add a new value to the end of the list.
 */
void ListInsertEnd(List* list, int value);

/**
 * Find a value in the list.
 *
 * @param int value
 * @return int The value if found. 0 otherwise.
 */
int ListFindValue(List* list, int value);

/**
 * Remove a value from the list.
 *
 * @param int value
 * @return int The value if found and removed. 0 otherwise.
 */
int ListRemoveValue(List* list, int value);

/**
 * Get the head node of the list.
 *
 * @param List* list
 *
 * @return int The value if found and removed. 0 otherwise.
 */
node_t* ListGetHead(List* list);


/**
 * Get the value stored at the head of the list
 *
 * @param List* list
 *
 * @return int The value if found and removed. 0 otherwise.
 */
int ListGetHeadValue(List* list);

#endif // DS_LIST_H
