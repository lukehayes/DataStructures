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

#endif // DS_LIST_H
