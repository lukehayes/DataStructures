from DS.node import Node
from DS.list import List
from DS.sorts.quick_sort import quicksort
from DS.tree_node import TreeNode

import random

def pt(n):
    print(n)
    if n not None:
        print(n.left)
        print(n.right)
        pt(n.left)
        pt(n.right)
    else:
        print("None. Moving On")

a = TreeNode(1)
b = TreeNode(2)
c = TreeNode(3, a,b)

d = TreeNode(10)
e = TreeNode(20, None, d)
g = TreeNode(30, c,e)

pt(g)
