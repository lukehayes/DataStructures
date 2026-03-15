from dataclasses import dataclass

@dataclass
class Node:
    value: int
    next_node: Node = None

class List:

    def __init__(self):
        self.head = None
        self.size = 0

    def insert(self, value):

        if(self.head == None):
            self.head = Node(value)
            self.size += 1
        else:
            current = self.head.next_node
            while(current != None):
                current = current.next_node
                print(current)
            print("END LOOP Current ", current)

            current = Node(value)
            print("POST Current ", current)
            self.size += 1

    def print(self):
        if(self.head != None):
            print("ROOT:", self.head)
        else:
            current = self.head.next_node
            print("Next")
            while(current):
                print(current.value)
                current = current.next_node

    def __repr__(self):
        return f"List: {self.size} items"

c = Node(3)
b = Node(2)
a = Node(1)

lst = List()

lst.insert(1)
lst.insert(10)
lst.insert(100)

lst.print()
