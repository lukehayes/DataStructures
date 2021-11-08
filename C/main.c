#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main() {

    List* list = CreateList();

    ListInsert(list, 600);
    ListInsert(list, 765);
    ListInsert(list, 123);

    PrintList(list);

    return 0;
}
