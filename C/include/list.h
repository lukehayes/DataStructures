#ifndef DS_LIST_H
#define DS_LIST_H

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
void ListInsert(List* list, int value);

#endif // DS_LIST_H
