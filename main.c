#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"

int main() {

    List* l = CreateList();

    AddValue(l, 98);
    AddValue(l, 123);
    AddValue(l, 4442);
    AddValue(l, 3);
    AddValue(l, 1);

    PrintList(l);

    return 0;
}
