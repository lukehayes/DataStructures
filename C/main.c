#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {

    List* list = CreateList();


    ListInsertEnd(list, 888);
    ListInsertEnd(list, 590);
    ListInsertEnd(list, 600);
    ListInsertEnd(list, 765);

    /*ListRemoveValue(&list, 600);*/

    DestroyList(list);

    PrintList(list);

    return 0;
}
