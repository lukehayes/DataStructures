
class Node(object):
    def __init__(self, value):
        self.next = None
        self.value = value



class List(object):

    def __init__(self):
        self.head = None

    def add(self, node):

        current = self.head

        if current == None:
            self.head = node
            return

        while (current.next is not None):
            current = current.next

    def all(self):
        current = self.head
        print(current.value)
        while current.next is not None:
            print(current.value)
            current = current.next
