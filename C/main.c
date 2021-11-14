#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {

    List* list = CreateList();

    for (int i = 0; i < 10; i++) {
        ListInsertEnd(list, i);
    }

    PrintList(list);

    ListRemoveValue(&list, 0);
    ListRemoveValue(&list, 1);
    ListRemoveValue(&list, 5);

    PrintList(list);

    DestroyList(list);

    return 0;
}
