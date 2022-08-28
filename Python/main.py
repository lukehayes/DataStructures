from DS.node import Node
from DS.list import List
from DS.sorts.quick_sort import quicksort

import random

l = List()

for x in range(3):
    l.add(Node(random.randint(10,100)))

print(l.all())

