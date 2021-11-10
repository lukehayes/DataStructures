#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {

    List* list = CreateList();

    ListInsertEnd(list, 600);

    ListInsertEnd(list, 765);
    ListRemoveValue(list, 600);

    ListInsertEnd(list, 123);

    ListInsertEnd(list, 600);

    PrintList(list);

    return 0;
}
